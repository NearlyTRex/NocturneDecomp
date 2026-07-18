; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HRESULT __stdcall dll_dx7_cpp_pickTextureFormat_FUN_10003340(DDPIXELFORMAT *pixel_format,void *found_flag)
;
; Parameters:
; DDPIXELFORMAT *  Stack[0x4]:4   pixel_format
; void *           Stack[0x8]:4   found_flag
;
; XREF[1]:
;   dll_dx7.cpp_initD3DDevice_FUN_10003100 at 10003148
;
; Referenced Globals:
;   int g_ScreenBitDepth = 0x10
;   int g_TextureFormatSelected = 0x0
;   DDPIXELFORMAT g_TexturePixelFormat
;   undefined4 g_TexturePixelFormat.dwFlags
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 10003340
        ;   Label: dll_dx7.cpp_pickTextureFormat_FUN_10003340
    PUSH ESI                            ; 10003344
    CMP dword ptr [0x1001417c],0x20     ; 10003345 | g_ScreenBitDepth
    PUSH EDI                            ; 1000334c
    JNZ 0x1000338e                      ; 1000334d
        ;   XREF to: 1000338e (CONDITIONAL_JUMP)  ; LAB_1000338e
    CMP dword ptr [EDX + 0xc],0x20      ; 1000334f
    JNZ 0x10003384                      ; 10003353
        ;   XREF to: 10003384 (CONDITIONAL_JUMP)  ; LAB_10003384
    TEST byte ptr [EDX + 0x1f],0xff     ; 10003355
    JZ 0x10003384                       ; 10003359
        ;   XREF to: 10003384 (CONDITIONAL_JUMP)  ; LAB_10003384
    MOV ECX,dword ptr [ESP + 0x10]      ; 1000335b
    MOV EDI,0x10226a58                  ; 1000335f | g_TexturePixelFormat
    MOV dword ptr [0x100141fc],0x1      ; 10003364 | g_TextureFormatSelected
    MOV ESI,EDX                         ; 1000336e
    MOV dword ptr [ECX],0x1             ; 10003370
    MOV ECX,0x8                         ; 10003376
    MOVSD.REP ES:EDI,ESI                ; 1000337b | g_TexturePixelFormat | g_TexturePixelFormat.dwFlags
    XOR EAX,EAX                         ; 1000337d
    POP EDI                             ; 1000337f
    POP ESI                             ; 10003380
    RET 0x8                             ; 10003381
    MOV EAX,0x1                         ; 10003384
        ;   Label: LAB_10003384
    POP EDI                             ; 10003389
    POP ESI                             ; 1000338a
    RET 0x8                             ; 1000338b
    CMP dword ptr [EDX + 0xc],0x10      ; 1000338e
        ;   Label: LAB_1000338e
    JNZ 0x100033f6                      ; 10003392
        ;   XREF to: 100033f6 (CONDITIONAL_JUMP)  ; LAB_100033f6
    TEST byte ptr [EDX + 0x1d],0xf0     ; 10003394
    JZ 0x100033cf                       ; 10003398
        ;   XREF to: 100033cf (CONDITIONAL_JUMP)  ; LAB_100033cf
    MOV ECX,dword ptr [ESP + 0x10]      ; 1000339a
    MOV EDI,0x10226a58                  ; 1000339e | g_TexturePixelFormat
    MOV dword ptr [0x100141fc],0x1      ; 100033a3 | g_TextureFormatSelected
    MOV ESI,EDX                         ; 100033ad
    MOV dword ptr [ECX],0x1             ; 100033af
    MOV ECX,0x8                         ; 100033b5
    MOVSD.REP ES:EDI,ESI                ; 100033ba | g_TexturePixelFormat | g_TexturePixelFormat.dwFlags
    MOV EAX,dword ptr [EDX + 0x1c]      ; 100033bc
    POP EDI                             ; 100033bf
    SUB EAX,0xf000                      ; 100033c0
    POP ESI                             ; 100033c5
    CMP EAX,0x1                         ; 100033c6
    SBB EAX,EAX                         ; 100033c9
    INC EAX                             ; 100033cb
    RET 0x8                             ; 100033cc
    MOV EAX,dword ptr [ESP + 0x10]      ; 100033cf
        ;   Label: LAB_100033cf
    CMP dword ptr [EAX],0x0             ; 100033d3
    JNZ 0x100033f6                      ; 100033d6
        ;   XREF to: 100033f6 (CONDITIONAL_JUMP)  ; LAB_100033f6
    MOV EDI,0x10226a58                  ; 100033d8 | g_TexturePixelFormat
    MOV ESI,EDX                         ; 100033dd
    MOV ECX,0x8                         ; 100033df
    MOV dword ptr [EAX],0x1             ; 100033e4
    MOVSD.REP ES:EDI,ESI                ; 100033ea | g_TexturePixelFormat | g_TexturePixelFormat.dwFlags
    MOV EAX,0x1                         ; 100033ec
    POP EDI                             ; 100033f1
    POP ESI                             ; 100033f2
    RET 0x8                             ; 100033f3
    MOV EAX,0x1                         ; 100033f6
        ;   Label: LAB_100033f6
    POP EDI                             ; 100033fb
    POP ESI                             ; 100033fc
    RET 0x8                             ; 100033fd

