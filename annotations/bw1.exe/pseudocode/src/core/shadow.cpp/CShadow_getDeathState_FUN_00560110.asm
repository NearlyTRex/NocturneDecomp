; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EDeathState __cdecl core_shadow_cpp_CShadow_getDeathState_FUN_00560110(CShadow *this_ptr)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_005600fc = 0056011f
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00560110
        ;   Label: core_shadow.cpp_CShadow_getDeathState_FUN_00560110
    MOV EDX,dword ptr [EAX + 0x70]      ; 00560114
    CMP EDX,0x2                         ; 00560117
    JNZ 0x0056012e                      ; 0056011a
        ;   XREF to: 0056012e (CONDITIONAL_JUMP)  ; LAB_0056012e
    MOV EAX,EDX                         ; 0056011c
    RET                                 ; 0056011e
    MOV EAX,0x1                         ; 0056011f
        ;   Label: caseD_f
    RET                                 ; 00560124
    MOV EAX,0x2                         ; 00560125
        ;   Label: caseD_11
    RET                                 ; 0056012a
    XOR EAX,EAX                         ; 0056012b
        ;   Label: default
    RET                                 ; 0056012d
    ADD EAX,0x158                       ; 0056012e
        ;   Label: LAB_0056012e
    PUSH EAX                            ; 00560133
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00560134
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00560139
    SUB EAX,0xf                         ; 0056013c
    ADD ESP,0x4                         ; 0056013f
    CMP EAX,0x3                         ; 00560142
    JA 0x0056012b                       ; 00560145
        ;   XREF to: 0056012b (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5600fc]  ; 00560147 | caseD_10 | caseD_12 | switchdataD_005600fc
        ;   Label: switchD

