
typedef unsigned long long size_t;

typedef struct {
	void* BaseAddress;
	size_t BufferSize;
	unsigned int Width;
	unsigned int Height;
	unsigned int PixelsPerScanLine;

} Framebuffer;

int _start(Framebuffer* framebuffer) {

    //White line at the top
    unsigned int y = 50;
	unsigned int BPP = 4;
    
	for(unsigned int x = 0; x < (framebuffer->Width) * BBP; x += BPP) {
		*(unsigned int*)(x + (y * framebuffer->PixelsPerScanLine * BPP) + framebuffer->BaseAddress) = 0xffffffff;
	}

    return;
}