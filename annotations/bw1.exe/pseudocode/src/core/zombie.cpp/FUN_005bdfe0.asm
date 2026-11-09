; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_zombie_cpp_FUN_005bdfe0(CCharacter *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d2d908
;
; Called Functions:
;   core_charactr.cpp_FUN_0042f240
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005bdfe0
        ;   Label: core_zombie.cpp_FUN_005bdfe0
    ADD EAX,0x158                       ; 005bdfe4
    PUSH EAX                            ; 005bdfe9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005bdfea
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005bdfef
    ADD ESP,0x4                         ; 005bdff2
    CMP EAX,0xe                         ; 005bdff5
    JNZ 0x005be00b                      ; 005bdff8
        ;   XREF to: 005be00b (CONDITIONAL_JUMP)  ; LAB_005be00b
    MOV EAX,[0x0061f650]                ; 005bdffa | DAT_0061f650
    CMP dword ptr [EAX + 0x1008],0x0    ; 005bdfff | DAT_01d2d908
    JNZ 0x005be00b                      ; 005be006
        ;   XREF to: 005be00b (CONDITIONAL_JUMP)  ; LAB_005be00b
    XOR EAX,EAX                         ; 005be008
    RET                                 ; 005be00a
    MOV ECX,dword ptr [ESP + 0x4]       ; 005be00b
        ;   Label: LAB_005be00b
    PUSH ECX                            ; 005be00f
    CALL core_charactr.cpp_FUN_0042f240 ; 005be010
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005be015
    RET                                 ; 005be018

