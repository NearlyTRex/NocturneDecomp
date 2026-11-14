; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00480d00(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f84
;
; Called Functions:
;   engine_font.cpp_FUN_004a7fd0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00480d00
        ;   Label: shape_edittool.cpp_FUN_00480d00
    MOV EDX,dword ptr [0x01c25590]      ; 00480d04 | DAT_01c25590
    MOV [0x01c25f84],EAX                ; 00480d0a | DAT_01c25f84
    TEST EDX,EDX                        ; 00480d0f
    JNZ 0x00480d14                      ; 00480d11
        ;   XREF to: 00480d14 (CONDITIONAL_JUMP)  ; LAB_00480d14
    RET                                 ; 00480d13
    PUSH EAX                            ; 00480d14
        ;   Label: LAB_00480d14
    PUSH EDX                            ; 00480d15
    CALL engine_font.cpp_FUN_004a7fd0   ; 00480d16
        ;   XREF to: 004a7fd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a7fd0()
    ADD ESP,0x8                         ; 00480d1b
    RET                                 ; 00480d1e

