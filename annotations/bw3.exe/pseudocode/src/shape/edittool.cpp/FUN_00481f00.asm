; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00481f00(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5baec
;
; Called Functions:
;   engine_font.cpp_FUN_004afbf0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00481f00
        ;   Label: shape_edittool.cpp_FUN_00481f00
    MOV EDX,dword ptr [0x01c5b0e0]      ; 00481f04 | DAT_01c5b0e0
    MOV [0x01c5baec],EAX                ; 00481f0a | DAT_01c5baec
    TEST EDX,EDX                        ; 00481f0f
    JNZ 0x00481f14                      ; 00481f11
        ;   XREF to: 00481f14 (CONDITIONAL_JUMP)  ; LAB_00481f14
    RET                                 ; 00481f13
    PUSH EAX                            ; 00481f14
        ;   Label: LAB_00481f14
    PUSH EDX                            ; 00481f15
    CALL engine_font.cpp_FUN_004afbf0   ; 00481f16
        ;   XREF to: 004afbf0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004afbf0()
    ADD ESP,0x8                         ; 00481f1b
    RET                                 ; 00481f1e

