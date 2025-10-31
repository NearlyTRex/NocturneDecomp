#pragma once

// Union: DDPIXELFORMAT_union1
typedef union DDPIXELFORMAT_union1 {
    DWORD dwRGBBitCount;
    DWORD dwYUVBitCount;
    DWORD dwZBufferBitDepth;
    DWORD dwAlphaBitDepth;
} DDPIXELFORMAT_union1;

// Union: DDPIXELFORMAT_union2
typedef union DDPIXELFORMAT_union2 {
    DWORD dwRBitMask;
    DWORD dwYBitMask;
} DDPIXELFORMAT_union2;

// Union: DDPIXELFORMAT_union3
typedef union DDPIXELFORMAT_union3 {
    DWORD dwGBitMask;
    DWORD dwUBitMask;
} DDPIXELFORMAT_union3;

// Union: DDPIXELFORMAT_union4
typedef union DDPIXELFORMAT_union4 {
    DWORD dwBBitMask;
    DWORD dwVBitMask;
} DDPIXELFORMAT_union4;

// Union: DDPIXELFORMAT_union5
typedef union DDPIXELFORMAT_union5 {
    DWORD dwRGBAlphaBitMask;
    DWORD dwYUVAlphaBitMask;
    DWORD dwRGBZBitMask;
    DWORD dwYUVZBitMask;
} DDPIXELFORMAT_union5;

// Union: DDSURFACEDESC_union1
typedef union DDSURFACEDESC_union1 {
    LONG lPitch;
    DWORD dwLinearSize;
} DDSURFACEDESC_union1;

// Union: DDSURFACEDESC_union2
typedef union DDSURFACEDESC_union2 {
    DWORD dwMipMapCount;
    DWORD dwZBufferBitDepth;
    DWORD dwRefreshRate;
} DDSURFACEDESC_union2;

