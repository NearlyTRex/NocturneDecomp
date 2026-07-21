; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_werewolf_cpp_CWerewolf_getDeathState_FUN_00557c30(int param_1)
;
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00557c30
        ;   Label: core_werewolf.cpp_CWerewolf_getDeathState_FUN_00557c30
    MOV EDX,dword ptr [EAX + 0x70]      ; 00557c34
    CMP EDX,0x2                         ; 00557c37
    JNZ 0x00557c4b                      ; 00557c3a
        ;   XREF to: 00557c4b (CONDITIONAL_JUMP)  ; LAB_00557c4b
    MOV EAX,EDX                         ; 00557c3c
    RET                                 ; 00557c3e
    MOV EAX,0x1                         ; 00557c3f
        ;   Label: LAB_00557c3f
    RET                                 ; 00557c44
    MOV EAX,0x2                         ; 00557c45
        ;   Label: LAB_00557c45
    RET                                 ; 00557c4a
    ADD EAX,0x150                       ; 00557c4b
        ;   Label: LAB_00557c4b
    PUSH EAX                            ; 00557c50
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00557c51
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00557c56
    ADD ESP,0x4                         ; 00557c59
    CMP EAX,0xc                         ; 00557c5c
    JC 0x00557c68                       ; 00557c5f
        ;   XREF to: 00557c68 (CONDITIONAL_JUMP)  ; LAB_00557c68
    JBE 0x00557c3f                      ; 00557c61
        ;   XREF to: 00557c3f (CONDITIONAL_JUMP)  ; LAB_00557c3f
    CMP EAX,0xd                         ; 00557c63
    JZ 0x00557c45                       ; 00557c66
        ;   XREF to: 00557c45 (CONDITIONAL_JUMP)  ; LAB_00557c45
    XOR EAX,EAX                         ; 00557c68
        ;   Label: LAB_00557c68
    RET                                 ; 00557c6a

