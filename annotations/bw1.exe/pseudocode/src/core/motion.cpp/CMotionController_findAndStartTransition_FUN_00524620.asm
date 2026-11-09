; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionController_findAndStartTransition_FUN_00524620(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_motion.cpp_CMotionController_advance_FUN_00524270 at 005242e9
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 at 0052483d
;
; Referenced Globals:
;   void* switchdataD_00524600 = 00524692
;
; Called Functions:
;   core_motion.cpp_CMotionController_clearTweenState_FUN_00524b70
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10
;   core_motion.cpp_CMotionController_startTransition_FUN_00524880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524620
        ;   Label: core_motion.cpp_CMotionController_findAndStartTransition_FUN_00524620
    PUSH ESI                            ; 00524621
    PUSH EDI                            ; 00524622
    PUSH EBP                            ; 00524623
    MOV EBX,dword ptr [ESP + 0x14]      ; 00524624
    PUSH EBX                            ; 00524628
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00524629
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0052462e
    MOV EDX,dword ptr [EBX + 0x28]      ; 00524631
    MOV ESI,EAX                         ; 00524634
    TEST EDX,EDX                        ; 00524636
    JL 0x005246f8                       ; 00524638
        ;   XREF to: 005246f8 (CONDITIONAL_JUMP)  ; LAB_005246f8
    CMP EDX,dword ptr [EAX + 0x24]      ; 0052463e
    JZ 0x005246f8                       ; 00524641
        ;   XREF to: 005246f8 (CONDITIONAL_JUMP)  ; LAB_005246f8
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00524647
    TEST EDI,EDI                        ; 0052464a
    JNZ 0x005246c2                      ; 0052464c
        ;   XREF to: 005246c2 (CONDITIONAL_JUMP)  ; LAB_005246c2
    MOV EAX,dword ptr [ESI + 0x70]      ; 00524652
        ;   Label: LAB_00524652
    XOR EDX,EDX                         ; 00524655
    XOR EDI,EDI                         ; 00524657
    TEST EAX,EAX                        ; 00524659
    JLE 0x00524669                      ; 0052465b
        ;   XREF to: 00524669 (CONDITIONAL_JUMP)  ; LAB_00524669
    MOV EAX,dword ptr [ESI + 0x74]      ; 0052465d
    MOV EBP,dword ptr [EBX + 0x28]      ; 00524660
        ;   Label: LAB_00524660
    CMP EBP,dword ptr [EAX]             ; 00524663
    JNZ 0x005246cd                      ; 00524665
        ;   XREF to: 005246cd (CONDITIONAL_JUMP)  ; LAB_005246cd
    MOV EDI,EAX                         ; 00524667
    TEST EDI,EDI                        ; 00524669
        ;   Label: LAB_00524669
    JZ 0x005246c6                       ; 0052466b
        ;   XREF to: 005246c6 (CONDITIONAL_JUMP)  ; default
    CMP EDI,dword ptr [EBX + 0x2c]      ; 0052466d
    JZ 0x005246c6                       ; 00524670
        ;   XREF to: 005246c6 (CONDITIONAL_JUMP)  ; default
    PUSH EBX                            ; 00524672
    MOV dword ptr [EBX + 0x2c],0x0      ; 00524673
    CALL core_motion.cpp_CMotionController_clearTweenState_FUN_00524b70 ; 0052467a
        ;   XREF to: 00524b70 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_clearTweenState_FUN_00524b70(CMotionController * this_ptr)
    MOV EAX,dword ptr [EDI + 0x4]       ; 0052467f
    DEC EAX                             ; 00524682
    ADD ESP,0x4                         ; 00524683
    CMP EAX,0x5                         ; 00524686
    JA 0x005246c6                       ; 00524689
        ;   XREF to: 005246c6 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x524600]  ; 0052468b | caseD_1 | caseD_2 | caseD_6
        ;   Label: switchD
    MOV EDX,dword ptr [EDI + 0x8]       ; 00524692
        ;   Label: caseD_1
    PUSH dword ptr [EDI + 0xc]          ; 00524695
    PUSH EDX                            ; 00524698
    PUSH EBX                            ; 00524699
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10 ; 0052469a
        ;   XREF to: 00524b10 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    MOV ECX,dword ptr [EDI + 0x14]      ; 0052469f
    ADD ESP,0xc                         ; 005246a2
    TEST ECX,ECX                        ; 005246a5
    JZ 0x005246b8                       ; 005246a7
        ;   XREF to: 005246b8 (CONDITIONAL_JUMP)  ; LAB_005246b8
    PUSH EBX                            ; 005246a9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005246aa
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005246af
    ADD ESP,0x4                         ; 005246b2
    MOV dword ptr [EBX + 0x28],EAX      ; 005246b5
    MOV EAX,0x1                         ; 005246b8
        ;   Label: LAB_005246b8
    POP EBP                             ; 005246bd
    POP EDI                             ; 005246be
    POP ESI                             ; 005246bf
    POP EBX                             ; 005246c0
    RET                                 ; 005246c1
    CMP EDX,dword ptr [EDI]             ; 005246c2
        ;   Label: LAB_005246c2
    JNZ 0x00524652                      ; 005246c4
        ;   XREF to: 00524652 (CONDITIONAL_JUMP)  ; LAB_00524652
    XOR EAX,EAX                         ; 005246c6
        ;   Label: default
    POP EBP                             ; 005246c8
    POP EDI                             ; 005246c9
    POP ESI                             ; 005246ca
    POP EBX                             ; 005246cb
    RET                                 ; 005246cc
    INC EDX                             ; 005246cd
        ;   Label: LAB_005246cd
    MOV ECX,dword ptr [ESI + 0x70]      ; 005246ce
    ADD EAX,0x18                        ; 005246d1
    CMP EDX,ECX                         ; 005246d4
    JL 0x00524660                       ; 005246d6
        ;   XREF to: 00524660 (CONDITIONAL_JUMP)  ; LAB_00524660
    JMP 0x00524669                      ; 005246d8
        ;   XREF to: 00524669 (UNCONDITIONAL_JUMP)  ; LAB_00524669
    MOV dword ptr [EBX + 0x2c],EDI      ; 005246da
        ;   Label: caseD_2
    XOR EAX,EAX                         ; 005246dd
    POP EBP                             ; 005246df
    POP EDI                             ; 005246e0
    POP ESI                             ; 005246e1
    POP EBX                             ; 005246e2
    RET                                 ; 005246e3
    PUSH EDI                            ; 005246e4
        ;   Label: caseD_3
    PUSH EBX                            ; 005246e5
    MOV dword ptr [EBX + 0x2c],EDI      ; 005246e6
    CALL core_motion.cpp_CMotionController_startTransition_FUN_00524880 ; 005246e9
        ;   XREF to: 00524880 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_startTransition_FUN_00524880(CMotionController * this_ptr, SMotionTransition * transition)
    ADD ESP,0x8                         ; 005246ee
    XOR EAX,EAX                         ; 005246f1
    POP EBP                             ; 005246f3
    POP EDI                             ; 005246f4
    POP ESI                             ; 005246f5
    POP EBX                             ; 005246f6
    RET                                 ; 005246f7
    MOV dword ptr [EBX + 0x2c],0x0      ; 005246f8
        ;   Label: LAB_005246f8
    XOR EAX,EAX                         ; 005246ff
    POP EBP                             ; 00524701
    POP EDI                             ; 00524702
    POP ESI                             ; 00524703
    POP EBX                             ; 00524704
    RET                                 ; 00524705

