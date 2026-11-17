; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040dca0(CAlphaBitmap *this_ptr)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 at 0040d940
;   engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040dab0 at 0040dad3
;
; Referenced Globals:
;   int g_INT_006141c0 = 0x8
;   uint[256] g_Hardware32BitPalette
;   undefined4 g_Hardware32BitPalette[1]
;   undefined4 g_Hardware32BitPalette[1]+1
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040dca0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040dca0
    MOV ESI,dword ptr [ESP + 0x8]       ; 0040dca1
    CMP dword ptr [0x006141c0],0x10     ; 0040dca5 | g_INT_006141c0
    JNZ 0x0040dccf                      ; 0040dcac
        ;   XREF to: 0040dccf (CONDITIONAL_JUMP)  ; LAB_0040dccf
    XOR EDX,EDX                         ; 0040dcae
    XOR EAX,EAX                         ; 0040dcb0
    MOV ECX,dword ptr [ESI + 0x8]       ; 0040dcb2
        ;   Label: LAB_0040dcb2
    ADD EAX,0x2                         ; 0040dcb5
    MOV CX,word ptr [ECX + EDX*0x1]     ; 0040dcb8
    ADD EDX,0x4                         ; 0040dcbc
    MOV word ptr [EAX + 0x1c35612],CX   ; 0040dcbf
    CMP EAX,0x200                       ; 0040dcc6
    JNZ 0x0040dcb2                      ; 0040dccb
        ;   XREF to: 0040dcb2 (CONDITIONAL_JUMP)  ; LAB_0040dcb2
    POP ESI                             ; 0040dccd
    RET                                 ; 0040dcce
    PUSH EDI                            ; 0040dccf
        ;   Label: LAB_0040dccf
    MOV ECX,0x400                       ; 0040dcd0
    MOV EDI,0x1c35214                   ; 0040dcd5
    MOV ESI,dword ptr [ESI + 0x8]       ; 0040dcda
    PUSH EDI                            ; 0040dcdd
    MOV EAX,ECX                         ; 0040dcde
    SHR ECX,0x2                         ; 0040dce0
    MOVSD.REP ES:EDI,ESI                ; 0040dce3 | g_Hardware32BitPalette | g_Hardware32BitPalette[1]
    MOV CL,AL                           ; 0040dce5
    AND CL,0x3                          ; 0040dce7
    MOVSB.REP ES:EDI,ESI                ; 0040dcea | g_Hardware32BitPalette[1] | g_Hardware32BitPalette[1]+1
    POP EDI                             ; 0040dcec
    POP EDI                             ; 0040dced
    POP ESI                             ; 0040dcee
    RET                                 ; 0040dcef

