#pragma once

// Equates / Constants

// ACTOR Constants
#define ACTOR_VALID_MAGIC                         0x78A123  // 7905571

// GAME Constants
#define GAME_BEEFDEAD                             0xBEEFDEAD  // -1091576147
#define GAME_CLIP_BOTTOM                          0x80000004  // 2147483652
#define GAME_CLIP_LEFT                            0x80000002  // 2147483650
#define GAME_CLIP_NEAR                            0x80000010  // 2147483664
#define GAME_CLIP_RIGHT                           0x80000001  // 2147483649
#define GAME_CLIP_TOP                             0x80000008  // 2147483656
#define GAME_COLOR_MAGENTA_TRANSPARENT            0xFF00FF  // 16711935
#define GAME_CONSOLE_ROW_STRIDE                   80  // 0x50
#define GAME_DEADBEEF                             0xDEADBEEF  // -559038737
#define GAME_SMEMHEAD_AND_BACKGUARD_SIZE          44  // 0x2C
#define GAME_WINDOW_RESOLUTION_480                480  // 0x1E0
#define GAME_WINDOW_RESOLUTION_640                640  // 0x280
#define GAME_WINDOW_RESOLUTION_BPP                32  // 0x20

// PREPROCESS Constants
#define PREPROCESS_DEPTH_BUFFER_PREP              1
#define PREPROCESS_NEAR_PLANE_CORRECT             3
#define PREPROCESS_NONE                           0
#define PREPROCESS_PRIMITIVE_SPECIAL              4
#define PREPROCESS_TEXTURE_COORD_NORMALIZE        2
#define PREPROCESS_TEXTURE_NORMALIZE_ALT          5
#define PREPROCESS_W_DEPTH_REPLACEMENT            6

// RENDER Constants
#define RENDER_ADVANCED_TEXTURED                  9
#define RENDER_ALPHA_CHANNEL                      32  // 0x20
#define RENDER_ALPHA_DETAILED                     51  // 0x33
#define RENDER_ALPHA_PERSPECTIVE                  227  // 0xE3
#define RENDER_ALTERNATIVE_DEPTH                  144  // 0x90
#define RENDER_COMPLEX_EFFECTS                    141  // 0x8D
#define RENDER_DEPTH_TEXTURED                     129  // 0x81
#define RENDER_DEPTH_TEXTURED_ADV                 133  // 0x85
#define RENDER_DEPTH_WRITE                        128  // 0x80
#define RENDER_ENGINE_CORE_COMPLEX                807  // 0x327
#define RENDER_ENGINE_CORE_MAXIMUM                871  // 0x367
#define RENDER_ENGINE_CORE_PREMIUM                717  // 0x2CD
#define RENDER_ENGINE_CORE_ULTRA                  743  // 0x2E7
#define RENDER_ENGINE_HIGH_QUALITY                355  // 0x163
#define RENDER_ENGINE_PREMIUM_QUALITY             487  // 0x1E7
#define RENDER_ENGINE_SPECIAL_DEPTH               65  // 0x41
#define RENDER_ENGINE_ULTRA_QUALITY               615  // 0x267
#define RENDER_EXTREME_QUALITY                    499  // 0x1F3
#define RENDER_FULL_FEATURED                      217  // 0xD9
#define RENDER_LASTPIXEL                          16  // 0x10
#define RENDER_LIT_COMPLEX                        35  // 0x23
#define RENDER_LIT_DETAILED                       19  // 0x13
#define RENDER_PERSPECTIVE_ENHANCED               525  // 0x20D
#define RENDER_PLANEMASK                          13  // 0xD
#define RENDER_PLANE_MASKED                       208  // 0xD0
#define RENDER_PLANE_MASKED_COMPLEX               211  // 0xD3
#define RENDER_PLANE_MASKED_LIT                   209  // 0xD1
#define RENDER_SPECIAL_EFFECTS                    653  // 0x28D
#define RENDER_TEXTURE_BASE                       192  // 0xC0
#define RENDER_TEXTURE_COMPLEX                    196  // 0xC4
#define RENDER_TEXTURE_ENABLE                     1
#define RENDER_TEXTURE_ENHANCED                   205  // 0xCD
#define RENDER_TEXTURE_LIT                        193  // 0xC1
#define RENDER_TEXTURE_PERSPECTIVE                195  // 0xC3
#define RENDER_TEXTURE_UV_WRAPPED                 197  // 0xC5
#define RENDER_UV_WRAP_U                          5
#define RENDER_VERTEX_LIGHTING                    3

// SYSTEM Constants
#define SYSTEM_BAD_FILE_DESCRIPTOR                9
#define SYSTEM_CRITICAL_SECTION_SIZE              24  // 0x18
#define SYSTEM_DDERR_SURFACELOST                  0x887601C2  // -2005532222
#define SYSTEM_E2BIG                              7
#define SYSTEM_EBADF                              9
#define SYSTEM_EPERM                              1
#define SYSTEM_ERROR_ALREADY_EXISTS               183  // 0xB7
#define SYSTEM_ERROR_FILENAME_EXCED_RANGE         206  // 0xCE
#define SYSTEM_ERROR_INVALID_NAME                 123  // 0x7B
#define SYSTEM_GENERIC_READ_WRITE                 0xC0000000  // 3221225472
#define SYSTEM_GENERIC_WRITE                      0x40000000  // 1073741824
#define SYSTEM_IO_ERROR                           5
#define SYSTEM_MAX_STATIC_CRITICAL_SECTIONS       64  // 0x40
#define SYSTEM_STD_ERROR_HANDLE                   0xFFFFFFF6  // 4294967286
#define SYSTEM_STD_INPUT_HANDLE                   0xFFFFFFF4  // 4294967284
#define SYSTEM_STD_OUTPUT_HANDLE                  0xFFFFFFF5  // 4294967285
#define SYSTEM_WATCOM_EBADF                       4
#define SYSTEM_WATCOM_ENOMEM                      12  // 0xC
#define SYSTEM_WINDOWS_NT_4_0                     0x8000  // 32768

// Total equates: 77
// Total references: 273

