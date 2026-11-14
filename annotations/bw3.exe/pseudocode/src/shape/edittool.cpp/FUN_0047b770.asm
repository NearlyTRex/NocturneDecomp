; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047b770(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c6b5c0
;
; Called Functions:
;   engine_mini3d.cpp_setColor_FUN_004f3520
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047b770
        ;   Label: shape_edittool.cpp_FUN_0047b770
    CMP dword ptr [0x01c5baec],0x0      ; 0047b774 | DAT_01c5baec
    JNZ 0x0047b783                      ; 0047b77b
        ;   XREF to: 0047b783 (CONDITIONAL_JUMP)  ; LAB_0047b783
    MOV [0x01c6b5c0],EAX                ; 0047b77d | DAT_01c6b5c0
    RET                                 ; 0047b782
    AND EAX,0xff                        ; 0047b783
        ;   Label: LAB_0047b783
    MOV EDX,EAX                         ; 0047b788
    SHL EAX,0x2                         ; 0047b78a
    SUB EAX,EDX                         ; 0047b78d
    XOR EDX,EDX                         ; 0047b78f
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 0047b791
    MOV ECX,EDX                         ; 0047b797
    XOR EDX,EDX                         ; 0047b799
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 0047b79b
    SHL ECX,0x8                         ; 0047b7a1
    SHL EDX,0x10                        ; 0047b7a4
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 0047b7a7
    OR ECX,EDX                          ; 0047b7ad
    AND EAX,0xff                        ; 0047b7af
    OR EAX,ECX                          ; 0047b7b4
    PUSH EAX                            ; 0047b7b6
    CALL engine_mini3d.cpp_setColor_FUN_004f3520 ; 0047b7b7
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_004f3520(uint rgb)
    ADD ESP,0x4                         ; 0047b7bc
    RET                                 ; 0047b7bf

