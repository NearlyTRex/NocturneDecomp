; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00492bd0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c4f020
;
; Called Functions:
;   engine_mini3d.cpp_setColor_FUN_00517d50
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00492bd0
        ;   Label: shape_edittool.cpp_FUN_00492bd0
    CMP dword ptr [0x01c3f544],0x0      ; 00492bd4 | DAT_01c3f544
    JNZ 0x00492be3                      ; 00492bdb
        ;   XREF to: 00492be3 (CONDITIONAL_JUMP)  ; LAB_00492be3
    MOV [0x01c4f020],EAX                ; 00492bdd | DAT_01c4f020
    RET                                 ; 00492be2
    AND EAX,0xff                        ; 00492be3
        ;   Label: LAB_00492be3
    MOV EDX,EAX                         ; 00492be8
    SHL EAX,0x2                         ; 00492bea
    SUB EAX,EDX                         ; 00492bed
    XOR EDX,EDX                         ; 00492bef
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 00492bf1
    MOV ECX,EDX                         ; 00492bf7
    XOR EDX,EDX                         ; 00492bf9
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 00492bfb
    SHL ECX,0x8                         ; 00492c01
    SHL EDX,0x10                        ; 00492c04
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 00492c07
    OR ECX,EDX                          ; 00492c0d
    AND EAX,0xff                        ; 00492c0f
    OR EAX,ECX                          ; 00492c14
    PUSH EAX                            ; 00492c16
    CALL engine_mini3d.cpp_setColor_FUN_00517d50 ; 00492c17
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_00517d50(uint rgb)
    ADD ESP,0x4                         ; 00492c1c
    RET                                 ; 00492c1f

