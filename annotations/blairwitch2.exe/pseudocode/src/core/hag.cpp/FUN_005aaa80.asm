; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hag_cpp_FUN_005aaa80(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_Chasing_005f0bc2
;   undefined4 DAT_00600a6c
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   unkaddr_0059d350.cpp_FUN_0059d8e0
;   unkaddr_0059d350.cpp_FUN_0059dcb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aaa80
        ;   Label: core_hag.cpp_FUN_005aaa80
    MOV EBX,dword ptr [ESP + 0x8]       ; 005aaa81
    PUSH dword ptr [ESP + 0xc]          ; 005aaa85
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005aaa89
    PUSH EBX                            ; 005aaa8f
    MOV dword ptr [EBX + 0x342c],0x0    ; 005aaa90
    CALL dword ptr [EAX + 0x150]        ; 005aaa9a
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 005aaaa0
    ADD ESP,0x8                         ; 005aaaa6
    TEST EDX,EDX                        ; 005aaaa9
    JZ 0x005aab29                       ; 005aaaab
        ;   XREF to: 005aab29 (CONDITIONAL_JUMP)  ; LAB_005aab29
    MOV EAX,EDX                         ; 005aaab1
    PUSH EAX                            ; 005aaab3
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 005aaab4
    CALL dword ptr [EDX + 0x114]        ; 005aaaba
    ADD ESP,0x4                         ; 005aaac0
    TEST EAX,EAX                        ; 005aaac3
    JZ 0x005aaae6                       ; 005aaac5
        ;   XREF to: 005aaae6 (CONDITIONAL_JUMP)  ; LAB_005aaae6
    CMP dword ptr [EBX + 0x10af0],0x0   ; 005aaac7
    JZ 0x005aaae6                       ; 005aaace
        ;   XREF to: 005aaae6 (CONDITIONAL_JUMP)  ; LAB_005aaae6
    MOV dword ptr [EBX + 0x10af0],0x0   ; 005aaad0
    MOV dword ptr [EBX + 0x10a78],0x0   ; 005aaada
    POP EBX                             ; 005aaae4
        ;   Label: LAB_005aaae4
    RET                                 ; 005aaae5
    PUSH 0x1                            ; 005aaae6
        ;   Label: LAB_005aaae6
    PUSH 0x0                            ; 005aaae8
    LEA EAX,[EBX + 0x2b4]               ; 005aaaea
    PUSH EAX                            ; 005aaaf0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005aaaf1
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005aaaf6
    ADD EBX,0x10af8                     ; 005aaaf9
    PUSH 0x3f000000                     ; 005aaaff
    FLD float ptr [0x00600a6c]          ; 005aab04 | DAT_00600a6c
    PUSH EBX                            ; 005aab0a
    FSTP float ptr [EBX + 0x89c]        ; 005aab0b
    CALL unkaddr_0059d350.cpp_FUN_0059dcb0 ; 005aab11
        ;   XREF to: 0059dcb0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dcb0()
    ADD ESP,0x8                         ; 005aab16
    PUSH 0x5f0bc2                       ; 005aab19 | = "Chasing"
    PUSH EBX                            ; 005aab1e
    CALL unkaddr_0059d350.cpp_FUN_0059d8e0 ; 005aab1f
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005aab24
    POP EBX                             ; 005aab27
    RET                                 ; 005aab28
    ADD EBX,0x2b4                       ; 005aab29
        ;   Label: LAB_005aab29
    PUSH EBX                            ; 005aab2f
    CALL core_motion.cpp_FUN_005035c0   ; 005aab30
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005aab35
    ADD ESP,0x4                         ; 005aab38
    CMP EAX,0x2                         ; 005aab3b
    JZ 0x005aaae4                       ; 005aab3e
        ;   XREF to: 005aaae4 (CONDITIONAL_JUMP)  ; LAB_005aaae4
    PUSH 0x1                            ; 005aab40
    PUSH 0x0                            ; 005aab42
    PUSH EBX                            ; 005aab44
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005aab45
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005aab4a
    POP EBX                             ; 005aab4d
    RET                                 ; 005aab4e

