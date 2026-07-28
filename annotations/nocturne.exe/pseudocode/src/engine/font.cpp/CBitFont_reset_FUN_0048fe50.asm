; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_reset_FUN_0048fe50(CBitFont *this_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   engine_font.cpp_CBitFont_ctor_FUN_0048fe10 at 0048fe16
;   engine_font.cpp_CBitFont_free_FUN_00490420 at 0049044d
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0048fe50
        ;   Label: engine_font.cpp_CBitFont_reset_FUN_0048fe50
    MOV ESI,dword ptr [ESP + 0x8]       ; 0048fe51
    MOV EAX,ESI                         ; 0048fe55
    MOV EDX,ESI                         ; 0048fe57
    MOV dword ptr [ESI],0x0             ; 0048fe59
    LEA ECX,[ESI + 0x10]                ; 0048fe5f
    ADD EAX,0x4                         ; 0048fe62
        ;   Label: LAB_0048fe62
    MOV byte ptr [EDX + 0x4],0x0        ; 0048fe65
    MOV dword ptr [EAX + 0x140],0x0     ; 0048fe69
    ADD EDX,0x50                        ; 0048fe73
    MOV dword ptr [EAX + 0x150],0x0     ; 0048fe76
    CMP EAX,ECX                         ; 0048fe80
    JNZ 0x0048fe62                      ; 0048fe82
        ;   XREF to: 0048fe62 (CONDITIONAL_JUMP)  ; LAB_0048fe62
    MOV EAX,ESI                         ; 0048fe84
    LEA EDX,[ESI + 0x400]               ; 0048fe86
    XOR ECX,ECX                         ; 0048fe8c
    ADD EAX,0x4                         ; 0048fe8e
        ;   Label: LAB_0048fe8e
    MOV dword ptr [EAX + 0x2164],ECX    ; 0048fe91
    MOV dword ptr [EAX + 0x2564],ECX    ; 0048fe97
    MOV dword ptr [EAX + 0x2964],ECX    ; 0048fe9d
    MOV dword ptr [EAX + 0x2d64],ECX    ; 0048fea3
    MOV dword ptr [EAX + 0x1d64],ECX    ; 0048fea9
    CMP EAX,EDX                         ; 0048feaf
    JNZ 0x0048fe8e                      ; 0048feb1
        ;   XREF to: 0048fe8e (CONDITIONAL_JUMP)  ; LAB_0048fe8e
    MOV dword ptr [ESI + 0x316c],0x0    ; 0048feb3
    MOV dword ptr [ESI + 0x3170],0x0    ; 0048febd
    MOV dword ptr [ESI + 0x3174],0x1    ; 0048fec7
    MOV dword ptr [ESI + 0x3178],0x2    ; 0048fed1
    MOV dword ptr [ESI + 0x25e8],0x8    ; 0048fedb
    MOV dword ptr [ESI + 0x317c],0x2    ; 0048fee5
    MOV dword ptr [ESI + 0x3180],0x1    ; 0048feef
    MOV dword ptr [ESI + 0x3184],0x0    ; 0048fef9
    MOV dword ptr [ESI + 0x1d64],0x0    ; 0048ff03
    MOV dword ptr [ESI + 0x318c],0x0    ; 0048ff0d
    MOV dword ptr [ESI + 0x3190],0x0    ; 0048ff17
    MOV dword ptr [ESI + 0x3194],0x0    ; 0048ff21
    MOV dword ptr [ESI + 0x3168],0x0    ; 0048ff2b
    POP ESI                             ; 0048ff35
    RET                                 ; 0048ff36

