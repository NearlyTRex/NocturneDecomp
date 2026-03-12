; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionController_advance_FUN_0052d610(CMotionController *this_ptr,float *delta_time)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; float *          Stack[0x8]:4   delta_time
; Local Variables:
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; SMotionTransition Stack[-0x40]:24  local_40
; float *          Stack[-0x28]:4  local_28
; float *          Stack[-0x24]:4  local_24
; int *            Stack[-0x20]:4  local_20
; int *            Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[40]:
;   core_armour.cpp_CArmour_process_FUN_00412260 at 00412351
;   core_baron.cpp_CBaron_advanceMotion_FUN_00413a00 at 00413a16
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 00415689
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416ab7
;   core_beast.cpp_CBeast_process_FUN_004182a0 at 004182f8
;   core_biggs.cpp_CBiggs_process_FUN_00418700 at 0041894e
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041c313
;   core_bride.cpp_CBride_process_FUN_00423a30 at 00423bc4
;   core_colonel.cpp_CColonel_processMotionEvents_FUN_00440430 at 00440446
;   core_cow.cpp_CZombieCow_process_FUN_00444310 at 0044455a
;   ... and 30 more
;
; Referenced Globals:
;   void* switchdataD_0052d5e4 = 0052d706
;   void* switchdataD_0052d5f4 = 0052d89e
;   TerminatedCString s_core_motion_cpp_0063a96c
;   TerminatedCString s_CMotionController_advanc_0063a97f
;   TerminatedCString s_core_motion_cpp_0063a9c5
;   TerminatedCString s_Invalid_transition_comma_0063a9d8
;   double DOUBLE_0063aa27 = 0.0000100000000000000
;   double DOUBLE_0063aa2f = 0.5
;   double DOUBLE_0063aa37 = 0.499900000000000
;   double DOUBLE_0063aa3f = 0.000100000000000000
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_0052de70
;   core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_0052e020
;   core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0
;   core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_reverseTransition_FUN_0052da50
;   core_motion.cpp_CMotionController_startTransition_FUN_0052dbc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052d610
        ;   Label: core_motion.cpp_CMotionController_advance_FUN_0052d610
    PUSH ESI                            ; 0052d611
    PUSH EDI                            ; 0052d612
    PUSH EBP                            ; 0052d613
    MOV EBP,ESP                         ; 0052d614
    SUB ESP,0x40                        ; 0052d616
    AND ESP,0xfffffff8                  ; 0052d619
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052d61c
    LEA EAX,[EBX + 0x1c]                ; 0052d61f
    MOV dword ptr [ESP + 0x2c],EAX      ; 0052d622
    LEA EAX,[EBX + 0x18]                ; 0052d626
    MOV dword ptr [ESP + 0x34],EAX      ; 0052d629
    LEA EAX,[EBX + 0x8]                 ; 0052d62d
    XOR EDX,EDX                         ; 0052d630
    MOV dword ptr [ESP + 0x28],EAX      ; 0052d632
    LEA EAX,[EBX + 0x4]                 ; 0052d636
    MOV dword ptr [ESP + 0x3c],EDX      ; 0052d639
    MOV dword ptr [ESP + 0x30],EAX      ; 0052d63d
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052d641
        ;   Label: LAB_0052d641
    FLD float ptr [EAX]                 ; 0052d644
    FCOMP double ptr [0x0063aa27]       ; 0052d646 | DOUBLE_0063aa27
    FNSTSW AX                           ; 0052d64c
    SAHF                                ; 0052d64e
    JA 0x0052d673                       ; 0052d64f
        ;   XREF to: 0052d673 (CONDITIONAL_JUMP)  ; LAB_0052d673
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052d651
        ;   Label: LAB_0052d651
    MOV dword ptr [EAX],0x0             ; 0052d654
    XOR EAX,EAX                         ; 0052d65a
    MOV ESP,EBP                         ; 0052d65c
    POP EBP                             ; 0052d65e
    POP EDI                             ; 0052d65f
    POP ESI                             ; 0052d660
    POP EBX                             ; 0052d661
    RET                                 ; 0052d662
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0052d663
        ;   Label: LAB_0052d663
    INC ESI                             ; 0052d667
    MOV dword ptr [ESP + 0x3c],ESI      ; 0052d668
    CMP ESI,0x5                         ; 0052d66c
    JL 0x0052d641                       ; 0052d66f
        ;   XREF to: 0052d641 (CONDITIONAL_JUMP)  ; LAB_0052d641
    JMP 0x0052d651                      ; 0052d671
        ;   XREF to: 0052d651 (UNCONDITIONAL_JUMP)  ; LAB_0052d651
    PUSH EBX                            ; 0052d673
        ;   Label: LAB_0052d673
    CALL core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950 ; 0052d674
        ;   XREF to: 0052d950 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0052d679
    TEST EAX,EAX                        ; 0052d67c
    JNZ 0x0052d663                      ; 0052d67e
        ;   XREF to: 0052d663 (CONDITIONAL_JUMP)  ; LAB_0052d663
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052d680
    MOV EAX,dword ptr [EAX]             ; 0052d683
    FLDZ                                ; 0052d685
    MOV dword ptr [ESP + 0x8],EAX       ; 0052d687
    XOR ESI,ESI                         ; 0052d68b
    FLD float ptr [EBX + 0x14]          ; 0052d68d
    FSTP double ptr [ESP]               ; 0052d690
    FCOMP double ptr [ESP]              ; 0052d693
    FNSTSW AX                           ; 0052d696
    SAHF                                ; 0052d698
    JA 0x0052d90a                       ; 0052d699
        ;   XREF to: 0052d90a (CONDITIONAL_JUMP)  ; LAB_0052d90a
    CMP dword ptr [EBX + 0x20],0x0      ; 0052d69f
    JZ 0x0052d7b4                       ; 0052d6a3
        ;   XREF to: 0052d7b4 (CONDITIONAL_JUMP)  ; LAB_0052d7b4
    FLD float ptr [EBX + 0x14]          ; 0052d6a9
    FDIV float ptr [EBX + 0x10]         ; 0052d6ac
        ;   Label: LAB_0052d6ac
    FSTP float ptr [ESP + 0xc]          ; 0052d6af
    FLD float ptr [ESP + 0xc]           ; 0052d6b3
    FLDZ                                ; 0052d6b7
    FCOMPP                              ; 0052d6b9
    FNSTSW AX                           ; 0052d6bb
    SAHF                                ; 0052d6bd
    JBE 0x0052d6c6                      ; 0052d6be
        ;   XREF to: 0052d6c6 (CONDITIONAL_JUMP)  ; LAB_0052d6c6
    XOR EAX,EAX                         ; 0052d6c0
    MOV dword ptr [ESP + 0xc],EAX       ; 0052d6c2
    FLD float ptr [ESP + 0xc]           ; 0052d6c6
        ;   Label: LAB_0052d6c6
    FCOMP float ptr [ESP + 0x8]         ; 0052d6ca
    FNSTSW AX                           ; 0052d6ce
    SAHF                                ; 0052d6d0
    JNC 0x0052d6db                      ; 0052d6d1
        ;   XREF to: 0052d6db (CONDITIONAL_JUMP)  ; LAB_0052d6db
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052d6d3
    MOV dword ptr [ESP + 0x8],EAX       ; 0052d6d7
    FLD float ptr [ESP + 0x8]           ; 0052d6db
        ;   Label: LAB_0052d6db
    FLDZ                                ; 0052d6df
    XOR EDX,EDX                         ; 0052d6e1
    XOR EDI,EDI                         ; 0052d6e3
    MOV dword ptr [ESP + 0x38],EDX      ; 0052d6e5
    FCOMPP                              ; 0052d6e9
    FNSTSW AX                           ; 0052d6eb
    SAHF                                ; 0052d6ed
    JNC 0x0052d706                      ; 0052d6ee
        ;   XREF to: 0052d706 (CONDITIONAL_JUMP)  ; caseD_3
    MOV EAX,dword ptr [EBX + 0xc]       ; 0052d6f0
    SUB EAX,0x3                         ; 0052d6f3
    CMP EAX,0x3                         ; 0052d6f6
    JA 0x0052d82f                       ; 0052d6f9
        ;   XREF to: 0052d82f (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x52d5e4]  ; 0052d6ff | caseD_3 | caseD_4 | caseD_5
        ;   Label: switchD
    CMP dword ptr [ESP + 0x38],0x0      ; 0052d706
        ;   Label: caseD_3
    JZ 0x0052d729                       ; 0052d70b
        ;   XREF to: 0052d729 (CONDITIONAL_JUMP)  ; LAB_0052d729
    PUSH dword ptr [EBX + 0x14]         ; 0052d70d
        ;   Label: LAB_0052d70d
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0052d710
    PUSH dword ptr [ESP + 0xc]          ; 0052d714
    PUSH ESI                            ; 0052d718
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0052d719
    PUSH EAX                            ; 0052d71d
    PUSH EBX                            ; 0052d71e
    CALL core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_0052de70 ; 0052d71f
        ;   XREF to: 0052de70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_0052de70(CMotionController * this_ptr, int * inout_motion_index, float * inout_frame_number, float delta_time, ...)
    ADD ESP,0x14                        ; 0052d724
    MOV ESI,EAX                         ; 0052d727
    TEST EDI,EDI                        ; 0052d729
        ;   Label: LAB_0052d729
    JZ 0x0052d757                       ; 0052d72b
        ;   XREF to: 0052d757 (CONDITIONAL_JUMP)  ; LAB_0052d757
    SUB ESP,0x4                         ; 0052d72d
    FLD float ptr [EBX + 0x14]          ; 0052d730
    FLD1                                ; 0052d733
    FSUBRP                              ; 0052d735
    MOV EDX,dword ptr [ESP + 0x30]      ; 0052d737
    FSTP float ptr [ESP]                ; 0052d73b
    PUSH dword ptr [ESP + 0xc]          ; 0052d73e
    PUSH EDX                            ; 0052d742
    MOV ECX,dword ptr [ESP + 0x40]      ; 0052d743
    PUSH ECX                            ; 0052d747
    PUSH EBX                            ; 0052d748
    CALL core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_0052de70 ; 0052d749
        ;   XREF to: 0052de70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_0052de70(CMotionController * this_ptr, int * inout_motion_index, float * inout_frame_number, float delta_time, ...)
    ADD ESP,0x14                        ; 0052d74e
    TEST ESI,ESI                        ; 0052d751
    JNZ 0x0052d757                      ; 0052d753
        ;   XREF to: 0052d757 (CONDITIONAL_JUMP)  ; LAB_0052d757
    MOV ESI,EAX                         ; 0052d755
    CMP dword ptr [EBX + 0x20],0x0      ; 0052d757
        ;   Label: LAB_0052d757
    JZ 0x0052d85a                       ; 0052d75b
        ;   XREF to: 0052d85a (CONDITIONAL_JUMP)  ; LAB_0052d85a
    FLD float ptr [ESP + 0x8]           ; 0052d761
    FMUL float ptr [EBX + 0x10]         ; 0052d765
    FSUBR float ptr [EBX + 0x14]        ; 0052d768
    FST float ptr [EBX + 0x14]          ; 0052d76b
    FCOMP double ptr [0x0063aa3f]       ; 0052d76e | DOUBLE_0063aa3f
    FNSTSW AX                           ; 0052d774
    SAHF                                ; 0052d776
    JNC 0x0052d782                      ; 0052d777
        ;   XREF to: 0052d782 (CONDITIONAL_JUMP)  ; LAB_0052d782
    PUSH EBX                            ; 0052d779
    CALL core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40 ; 0052d77a
        ;   XREF to: 0052de40 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0052d77f
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052d782
        ;   Label: LAB_0052d782
    FLD float ptr [EAX]                 ; 0052d785
    FSUB float ptr [ESP + 0x8]          ; 0052d787
    FSTP float ptr [EAX]                ; 0052d78b
    MOV EDX,dword ptr [EBX + 0x2c]      ; 0052d78d
    TEST EDX,EDX                        ; 0052d790
    JZ 0x0052d7a3                       ; 0052d792
        ;   XREF to: 0052d7a3 (CONDITIONAL_JUMP)  ; LAB_0052d7a3
    MOV EAX,dword ptr [EDX + 0x8]       ; 0052d794
    CMP EAX,dword ptr [EBX + 0x4]       ; 0052d797
    JNZ 0x0052d7a3                      ; 0052d79a
        ;   XREF to: 0052d7a3 (CONDITIONAL_JUMP)  ; LAB_0052d7a3
    MOV dword ptr [EBX + 0x2c],0x0      ; 0052d79c
    TEST ESI,ESI                        ; 0052d7a3
        ;   Label: LAB_0052d7a3
    JZ 0x0052d663                       ; 0052d7a5
        ;   XREF to: 0052d663 (CONDITIONAL_JUMP)  ; LAB_0052d663
    MOV EAX,ESI                         ; 0052d7ab
    MOV ESP,EBP                         ; 0052d7ad
    POP EBP                             ; 0052d7af
    POP EDI                             ; 0052d7b0
    POP ESI                             ; 0052d7b1
    POP EBX                             ; 0052d7b2
    RET                                 ; 0052d7b3
    FLD double ptr [0x0063aa2f]         ; 0052d7b4 | DOUBLE_0063aa2f
        ;   Label: LAB_0052d7b4
    FSUB double ptr [ESP]               ; 0052d7ba
    JMP 0x0052d6ac                      ; 0052d7bd
        ;   XREF to: 0052d6ac (UNCONDITIONAL_JUMP)  ; LAB_0052d6ac
    LEA EAX,[ESP + 0x8]                 ; 0052d7c2
        ;   Label: caseD_4
    PUSH EAX                            ; 0052d7c6
    MOV EDX,dword ptr [EBX + 0x18]      ; 0052d7c7
    PUSH dword ptr [EBX + 0x1c]         ; 0052d7ca
    PUSH EDX                            ; 0052d7cd
    PUSH EBX                            ; 0052d7ce
    MOV EDI,0x1                         ; 0052d7cf
    CALL core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0 ; 0052d7d4
        ;   XREF to: 0052e1d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0(CMotionController * this_ptr, int motion_index, float current_frame, float * remaining_time)
    ADD ESP,0x10                        ; 0052d7d9
    JMP 0x0052d706                      ; 0052d7dc
        ;   XREF to: 0052d706 (UNCONDITIONAL_JUMP)  ; caseD_3
    LEA EAX,[ESP + 0x8]                 ; 0052d7e1
        ;   Label: caseD_5
    PUSH EAX                            ; 0052d7e5
    MOV EAX,dword ptr [EBX + 0x4]       ; 0052d7e6
    PUSH dword ptr [EBX + 0x8]          ; 0052d7e9
    PUSH EAX                            ; 0052d7ec
    PUSH EBX                            ; 0052d7ed
    CALL core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0 ; 0052d7ee
        ;   XREF to: 0052e1d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0(CMotionController * this_ptr, int motion_index, float current_frame, float * remaining_time)
    ADD ESP,0x10                        ; 0052d7f3
    JMP 0x0052d70d                      ; 0052d7f6
        ;   XREF to: 0052d70d (UNCONDITIONAL_JUMP)  ; LAB_0052d70d
    LEA EAX,[ESP + 0x8]                 ; 0052d7fb
        ;   Label: caseD_6
    PUSH EAX                            ; 0052d7ff
    MOV ECX,dword ptr [EBX + 0x4]       ; 0052d800
    PUSH dword ptr [EBX + 0x8]          ; 0052d803
    PUSH ECX                            ; 0052d806
    PUSH EBX                            ; 0052d807
    CALL core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0 ; 0052d808
        ;   XREF to: 0052e1d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0(CMotionController * this_ptr, int motion_index, float current_frame, float * remaining_time)
    ADD ESP,0x10                        ; 0052d80d
    LEA EAX,[ESP + 0x8]                 ; 0052d810
    PUSH EAX                            ; 0052d814
    MOV ESI,dword ptr [EBX + 0x18]      ; 0052d815
    PUSH dword ptr [EBX + 0x1c]         ; 0052d818
    PUSH ESI                            ; 0052d81b
    PUSH EBX                            ; 0052d81c
    MOV EDI,0x1                         ; 0052d81d
    CALL core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0 ; 0052d822
        ;   XREF to: 0052e1d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0(CMotionController * this_ptr, int motion_index, float current_frame, float * remaining_time)
    ADD ESP,0x10                        ; 0052d827
    JMP 0x0052d70d                      ; 0052d82a
        ;   XREF to: 0052d70d (UNCONDITIONAL_JUMP)  ; LAB_0052d70d
    MOV EDX,dword ptr [EBX + 0xc]       ; 0052d82f
        ;   Label: default
    PUSH EDX                            ; 0052d832
    MOV ECX,0x63a96c                    ; 0052d833 | = "..\\core\\motion.cpp"
    MOV EAX,0x17e                       ; 0052d838
    PUSH 0x63a97f                       ; 0052d83d | = "CMotionController::advance: Tweening ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0052d842 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0052d848 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052d84d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0052d852
    JMP 0x0052d706                      ; 0052d855
        ;   XREF to: 0052d706 (UNCONDITIONAL_JUMP)  ; caseD_3
    FLD float ptr [ESP + 0x8]           ; 0052d85a
        ;   Label: LAB_0052d85a
    FMUL float ptr [EBX + 0x10]         ; 0052d85e
    FADD float ptr [EBX + 0x14]         ; 0052d861
    FST float ptr [EBX + 0x14]          ; 0052d864
    FCOMP double ptr [0x0063aa37]       ; 0052d867 | DOUBLE_0063aa37
    FNSTSW AX                           ; 0052d86d
    SAHF                                ; 0052d86f
    JBE 0x0052d782                      ; 0052d870
        ;   XREF to: 0052d782 (CONDITIONAL_JUMP)  ; LAB_0052d782
    PUSH EBX                            ; 0052d876
    CALL core_motion.cpp_CMotionController_reverseTransition_FUN_0052da50 ; 0052d877
        ;   XREF to: 0052da50 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_reverseTransition_FUN_0052da50(CMotionController * this_ptr)
    MOV EAX,dword ptr [EBX + 0x24]      ; 0052d87c
    ADD ESP,0x4                         ; 0052d87f
    TEST EAX,EAX                        ; 0052d882
    JZ 0x0052d782                       ; 0052d884
        ;   XREF to: 0052d782 (CONDITIONAL_JUMP)  ; LAB_0052d782
    PUSH EBX                            ; 0052d88a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0052d88b
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0052d890
    ADD ESP,0x4                         ; 0052d893
    MOV dword ptr [EBX + 0x28],EAX      ; 0052d896
    JMP 0x0052d782                      ; 0052d899
        ;   XREF to: 0052d782 (UNCONDITIONAL_JUMP)  ; LAB_0052d782
    MOV EAX,dword ptr [ESP + 0x18]      ; 0052d89e
        ;   Label: caseD_2
    MOV dword ptr [EBX + 0x4],EAX       ; 0052d8a2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052d8a5
    MOV dword ptr [EBX + 0x8],EAX       ; 0052d8a9
    CMP dword ptr [ESP + 0x24],0x0      ; 0052d8ac
    JZ 0x0052d782                       ; 0052d8b1
        ;   XREF to: 0052d782 (CONDITIONAL_JUMP)  ; LAB_0052d782
    PUSH EBX                            ; 0052d8b7
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0052d8b8
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0052d8bd
    ADD ESP,0x4                         ; 0052d8c0
    MOV dword ptr [EBX + 0x28],EAX      ; 0052d8c3
    JMP 0x0052d782                      ; 0052d8c6
        ;   XREF to: 0052d782 (UNCONDITIONAL_JUMP)  ; LAB_0052d782
    LEA EAX,[ESP + 0x10]                ; 0052d8cb
        ;   Label: caseD_6
    PUSH EAX                            ; 0052d8cf
    PUSH EBX                            ; 0052d8d0
    CALL core_motion.cpp_CMotionController_startTransition_FUN_0052dbc0 ; 0052d8d1
        ;   XREF to: 0052dbc0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_startTransition_FUN_0052dbc0(CMotionController * this_ptr, SMotionTransition * transition)
    ADD ESP,0x8                         ; 0052d8d6
    JMP 0x0052d782                      ; 0052d8d9
        ;   XREF to: 0052d782 (UNCONDITIONAL_JUMP)  ; LAB_0052d782
    MOV EDX,dword ptr [ESP + 0x14]      ; 0052d8de
        ;   Label: default
    PUSH EDX                            ; 0052d8e2
    MOV EDI,0x63a9c5                    ; 0052d8e3 | = "..\\core\\motion.cpp"
    MOV EAX,0x1b7                       ; 0052d8e8
    PUSH 0x63a9d8                       ; 0052d8ed | = "Invalid transition command returned b..."
    MOV dword ptr [0x02f0ca48],EDI      ; 0052d8f2 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0052d8f8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052d8fd
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0052d902
    JMP 0x0052d782                      ; 0052d905
        ;   XREF to: 0052d782 (UNCONDITIONAL_JUMP)  ; LAB_0052d782
    LEA EAX,[ESP + 0x10]                ; 0052d90a
        ;   Label: LAB_0052d90a
    PUSH EAX                            ; 0052d90e
    LEA EAX,[ESP + 0xc]                 ; 0052d90f
    PUSH EAX                            ; 0052d913
    MOV ECX,dword ptr [EBX + 0x4]       ; 0052d914
    PUSH dword ptr [EBX + 0x8]          ; 0052d917
    PUSH ECX                            ; 0052d91a
    PUSH EBX                            ; 0052d91b
    CALL core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_0052e020 ; 0052d91c
        ;   XREF to: 0052e020 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_0052e020(CMotionController * this_ptr, int motion_index, float current_frame, float * inout_delta_time, ...)
    ADD ESP,0x14                        ; 0052d921
    MOV ESI,EAX                         ; 0052d924
    MOV EAX,dword ptr [ESP + 0x14]      ; 0052d926
    DEC EAX                             ; 0052d92a
    CMP EAX,0x5                         ; 0052d92b
    JA 0x0052d8de                       ; 0052d92e
        ;   XREF to: 0052d8de (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x52d5f4]  ; 0052d930 | caseD_1 | caseD_5 | switchdataD_0052d5f4
        ;   Label: switchD

