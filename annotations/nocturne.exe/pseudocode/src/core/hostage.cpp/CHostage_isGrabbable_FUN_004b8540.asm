; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hostage_cpp_CHostage_isGrabbable_FUN_004b8540(int param_1)
;
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b8540
        ;   Label: core_hostage.cpp_CHostage_isGrabbable_FUN_004b8540
    CMP dword ptr [EAX + 0x1f920],0x0   ; 004b8544
    JZ 0x004b855d                       ; 004b854b
        ;   XREF to: 004b855d (CONDITIONAL_JUMP)  ; LAB_004b855d
    MOV ECX,dword ptr [EAX + 0x1f924]   ; 004b854d
    CMP ECX,0x3                         ; 004b8553
    JZ 0x004b855d                       ; 004b8556
        ;   XREF to: 004b855d (CONDITIONAL_JUMP)  ; LAB_004b855d
    CMP ECX,0x4                         ; 004b8558
    JNZ 0x004b8560                      ; 004b855b
        ;   XREF to: 004b8560 (CONDITIONAL_JUMP)  ; LAB_004b8560
    XOR EAX,EAX                         ; 004b855d
        ;   Label: LAB_004b855d
    RET                                 ; 004b855f
    ADD EAX,0x150                       ; 004b8560
        ;   Label: LAB_004b8560
    PUSH EAX                            ; 004b8565
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004b8566
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b856b
    ADD ESP,0x4                         ; 004b856e
    CMP EAX,0xa                         ; 004b8571
    JZ 0x004b855d                       ; 004b8574
        ;   XREF to: 004b855d (CONDITIONAL_JUMP)  ; LAB_004b855d
    LEA EAX,[EAX]                       ; 004b8576
    LEA EDX,[EDX]                       ; 004b857c

