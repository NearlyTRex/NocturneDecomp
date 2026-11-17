; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_init_FUN_0046fa80(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_ctor_FUN_0046f9f0 at 0046fa11
;
; Referenced Globals:
;   int g_INT_01bcddc8
;   int g_INT_01bcddcc
;   int g_INT_01bcddd0
;   int g_INT_01bcddd4
;   int g_INT_01bcddd8
;   int g_INT_01bcdddc
;   int g_INT_01bcdde0
;   int g_INT_01bcdde4
;   int g_INT_01bcdde8
;   int g_INT_01bcddec
;   int g_INT_01bcddf0
;   int g_INT_01bcddf4
;   int g_INT_01bcddf8
;   int g_INT_01bcddfc
;   int g_INT_01bcde00
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046fa80
        ;   Label: shape_edittool.cpp_CEditorTools_init_FUN_0046fa80
    PUSH ESI                            ; 0046fa81
    PUSH EDI                            ; 0046fa82
    PUSH EBP                            ; 0046fa83
    MOV ECX,0x7                         ; 0046fa84
    MOV EBX,0xfb                        ; 0046fa89
    MOV ESI,0xff                        ; 0046fa8e
    MOV EBP,0x4                         ; 0046fa93
    MOV EDI,0xfa                        ; 0046fa98
    XOR EDX,EDX                         ; 0046fa9d
    MOV dword ptr [0x01bcddcc],ECX      ; 0046fa9f | g_INT_01bcddcc
    MOV dword ptr [0x01bcddd0],EBX      ; 0046faa5 | g_INT_01bcddd0
    MOV dword ptr [0x01bcddd4],ESI      ; 0046faab | g_INT_01bcddd4
    MOV dword ptr [0x01bcddd8],ESI      ; 0046fab1 | g_INT_01bcddd8
    MOV dword ptr [0x01bcdddc],EBP      ; 0046fab7 | g_INT_01bcdddc
    MOV dword ptr [0x01bcdde0],ESI      ; 0046fabd | g_INT_01bcdde0
    MOV dword ptr [0x01bcdde4],ESI      ; 0046fac3 | g_INT_01bcdde4
    MOV dword ptr [0x01bcdde8],ESI      ; 0046fac9 | g_INT_01bcdde8
    MOV dword ptr [0x01bcddec],ESI      ; 0046facf | g_INT_01bcddec
    MOV dword ptr [0x01bcddf0],ESI      ; 0046fad5 | g_INT_01bcddf0
    MOV dword ptr [0x01bcddf4],EDI      ; 0046fadb | g_INT_01bcddf4
    MOV dword ptr [0x01bcddf8],EDX      ; 0046fae1 | g_INT_01bcddf8
    MOV dword ptr [0x01bcddfc],EBP      ; 0046fae7 | g_INT_01bcddfc
    MOV dword ptr [0x01bcde00],ESI      ; 0046faed | g_INT_01bcde00
    MOV dword ptr [0x01bcde04],ESI      ; 0046faf3 | g_INT_01bcde04
    MOV dword ptr [0x01bcde08],ESI      ; 0046faf9 | g_INT_01bcde08
    MOV dword ptr [0x01bcde18],ECX      ; 0046faff | g_INT_01bcde18
    MOV dword ptr [0x01bcddc8],EDX      ; 0046fb05 | g_INT_01bcddc8
    MOV ESI,0xf8                        ; 0046fb0b
    MOV EDI,0x2                         ; 0046fb10
    MOV EBP,0xfa                        ; 0046fb15
    MOV dword ptr [0x01bcde0c],ESI      ; 0046fb1a | g_INT_01bcde0c
    MOV dword ptr [0x01bcde10],EDI      ; 0046fb20 | g_INT_01bcde10
    MOV dword ptr [0x01bcde14],EBP      ; 0046fb26 | g_INT_01bcde14
    POP EBP                             ; 0046fb2c
    POP EDI                             ; 0046fb2d
    POP ESI                             ; 0046fb2e
    POP EBX                             ; 0046fb2f
    RET                                 ; 0046fb30

