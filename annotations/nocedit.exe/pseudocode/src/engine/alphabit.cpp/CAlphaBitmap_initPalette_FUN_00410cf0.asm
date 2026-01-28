; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(CAlphaBitmap *this_ptr)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_moon.cpp_CMoon_render_FUN_00529ed0 at 0052a142
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 at 00410990
;   engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00 at 00410b23
;
; Referenced Globals:
;   uint[256] g_Hardware32BitPalette
;   undefined4 g_GlobalPalette[1]
;   undefined4 g_GlobalPalette[1]+1
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00410cf0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0
    PUSH EDI                            ; 00410cf1
    MOV ESI,dword ptr [ESP + 0xc]       ; 00410cf2
    MOV ECX,0x400                       ; 00410cf6
    MOV EDI,0x2d01924                   ; 00410cfb | g_Hardware32BitPalette
    MOV ESI,dword ptr [ESI + 0x8]       ; 00410d00
    PUSH EDI                            ; 00410d03 | g_Hardware32BitPalette
    MOV EAX,ECX                         ; 00410d04
    SHR ECX,0x2                         ; 00410d06
    MOVSD.REP ES:EDI,ESI                ; 00410d09 | g_Hardware32BitPalette | g_GlobalPalette[1]
    MOV CL,AL                           ; 00410d0b
    AND CL,0x3                          ; 00410d0d
    MOVSB.REP ES:EDI,ESI                ; 00410d10 | g_Hardware32BitPalette | g_GlobalPalette[1] | g_GlobalPalette[1]+1
    POP EDI                             ; 00410d12
    POP EDI                             ; 00410d13
    POP ESI                             ; 00410d14
    RET                                 ; 00410d15

