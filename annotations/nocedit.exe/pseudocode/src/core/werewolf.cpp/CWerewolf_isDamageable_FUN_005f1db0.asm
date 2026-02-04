; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_werewolf_cpp_CWerewolf_isDamageable_FUN_005f1db0(CWerewolf *this_ptr)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005f1db0
        ;   Label: core_werewolf.cpp_CWerewolf_isDamageable_FUN_005f1db0
    MOV EDX,dword ptr [EAX + 0x70]      ; 005f1db4
    CMP EDX,0x2                         ; 005f1db7
    JNZ 0x005f1dcb                      ; 005f1dba
        ;   XREF to: 005f1dcb (CONDITIONAL_JUMP)  ; LAB_005f1dcb
    MOV EAX,EDX                         ; 005f1dbc
    RET                                 ; 005f1dbe
    MOV EAX,0x1                         ; 005f1dbf
        ;   Label: LAB_005f1dbf
    RET                                 ; 005f1dc4
    MOV EAX,0x2                         ; 005f1dc5
        ;   Label: LAB_005f1dc5
    RET                                 ; 005f1dca
    ADD EAX,0x158                       ; 005f1dcb
        ;   Label: LAB_005f1dcb
    PUSH EAX                            ; 005f1dd0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005f1dd1
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005f1dd6
    ADD ESP,0x4                         ; 005f1dd9
    CMP EAX,0xc                         ; 005f1ddc
    JC 0x005f1de8                       ; 005f1ddf
        ;   XREF to: 005f1de8 (CONDITIONAL_JUMP)  ; LAB_005f1de8
    JBE 0x005f1dbf                      ; 005f1de1
        ;   XREF to: 005f1dbf (CONDITIONAL_JUMP)  ; LAB_005f1dbf
    CMP EAX,0xd                         ; 005f1de3
    JZ 0x005f1dc5                       ; 005f1de6
        ;   XREF to: 005f1dc5 (CONDITIONAL_JUMP)  ; LAB_005f1dc5
    XOR EAX,EAX                         ; 005f1de8
        ;   Label: LAB_005f1de8
    RET                                 ; 005f1dea

