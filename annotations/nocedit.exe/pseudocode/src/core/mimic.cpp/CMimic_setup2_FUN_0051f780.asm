; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_mimic.cpp_CMimic_setup2_FUN_0051f780()
;
;
; Referenced Globals:
;   TerminatedCString s_core_mimic_cpp_006386f9
;   TerminatedCString s_CMimic_setup_can_t_use_m_0063870b
;   CEventList* g_CEventListPtr = 02d05310
;   CNetGame* g_CNetGameInstance = 02f7c740
;   CEventList g_CEventListInstance
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_02f7c740
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_00429870
;   core_charactr.cpp_CCharacter_FUN_0042d530
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mimic.cpp_CMimic_processMorph_FUN_00520ba0
;   core_mimic.cpp_FUN_0051f930
;   core_mimic.cpp_FUN_0051fcc0
;   core_mimic.cpp_FUN_00520500
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f780
        ;   Label: core_mimic.cpp_CMimic_setup2_FUN_0051f780
    PUSH EDI                            ; 0051f781
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051f782
    MOV EAX,[0x00680a00]                ; 0051f786 | undefined4 DAT_02f7c740 | CNetGame * g_CNetGameInstance
    CMP dword ptr [EAX],0x0             ; 0051f78b | undefined4 DAT_02f7c740
    JNZ 0x0051f816                      ; 0051f78e | LAB_0051f816
        ;   XREF to: 0051f816 (CONDITIONAL_JUMP)
    MOV EAX,[0x02db87d0]                ; 0051f794 | int g_LocalHeroIndex
        ;   Label: LAB_0051f794
    MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0051f799 | CHero *[4] g_HeroActors
    MOV EDX,dword ptr [EDX + 0x108]     ; 0051f7a0
    MOV dword ptr [EBX + 0x108],EDX     ; 0051f7a6
    MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0051f7ac | CHero *[4] g_HeroActors
    MOV EDX,dword ptr [EDX + 0x10c]     ; 0051f7b3
    MOV dword ptr [EBX + 0x10c],EDX     ; 0051f7b9
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0051f7bf | CHero *[4] g_HeroActors
    FLD float ptr [EBX + 0x4ca50]       ; 0051f7c6
    MOV EAX,dword ptr [EAX + 0x110]     ; 0051f7cc
    FLDZ                                ; 0051f7d2
    MOV dword ptr [EBX + 0x110],EAX     ; 0051f7d4
    FCOMPP                              ; 0051f7da
    FNSTSW AX                           ; 0051f7dc
    SAHF                                ; 0051f7de
    JBE 0x0051f840                      ; 0051f7df | LAB_0051f840
        ;   XREF to: 0051f840 (CONDITIONAL_JUMP)
    PUSH dword ptr [ESP + 0x10]         ; 0051f7e1
    PUSH EBX                            ; 0051f7e5
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 0051f7e6 | int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0051f7eb
    TEST EAX,EAX                        ; 0051f7ee
    JZ 0x0051f813                       ; 0051f7f0 | LAB_0051f813
        ;   XREF to: 0051f813 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBX + 0x4bdf4]   ; 0051f7f2
    CMP EDI,0x1                         ; 0051f7f8
    JLE 0x0051f850                      ; 0051f7fb | LAB_0051f850
        ;   XREF to: 0051f850 (CONDITIONAL_JUMP)
    PUSH dword ptr [ESP + 0x10]         ; 0051f7fd
    PUSH EBX                            ; 0051f801
    CALL core_mimic.cpp_FUN_0051fcc0    ; 0051f802 | undefined core_mimic.cpp_FUN_0051fcc0()
        ;   XREF to: 0051fcc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0051f807
    PUSH EBX                            ; 0051f80a
        ;   Label: LAB_0051f80a
    CALL core_charactr.cpp_CCharacter_FUN_0042d530 ; 0051f80b | void core_charactr.cpp_CCharacter_FUN_0042d530(CCharacter * this_ptr)
        ;   XREF to: 0042d530 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051f810
    POP EDI                             ; 0051f813
        ;   Label: LAB_0051f813
    POP EBX                             ; 0051f814
    RET                                 ; 0051f815
    PUSH ESI                            ; 0051f816
        ;   Label: LAB_0051f816
    MOV ECX,0x6386f9                    ; 0051f817 | = "..\\core\\mimic.cpp" | s_core_mimic_cpp_006386f9 = ..\core\mimic.cpp
    MOV ESI,0x130                       ; 0051f81c
    PUSH 0x63870b                       ; 0051f821 | = "CMimic::setup - can't use mimic in mu..." | s_CMimic_setup_can_t_use_m_0063870b = CMimic::setup - can't use mimic in multi-player!
    MOV dword ptr [0x02f0ca48],ECX      ; 0051f826 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0051f82c | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051f832 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051f837
    POP ESI                             ; 0051f83a
    JMP 0x0051f794                      ; 0051f83b | LAB_0051f794
        ;   XREF to: 0051f794 (UNCONDITIONAL_JUMP)
    PUSH dword ptr [ESP + 0x10]         ; 0051f840
        ;   Label: LAB_0051f840
    PUSH EBX                            ; 0051f844
    CALL core_mimic.cpp_CMimic_processMorph_FUN_00520ba0 ; 0051f845 | undefined core_mimic.cpp_CMimic_processMorph_FUN_00520ba0()
        ;   XREF to: 00520ba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0051f84a
    POP EDI                             ; 0051f84d
    POP EBX                             ; 0051f84e
    RET                                 ; 0051f84f
    JGE 0x0051f875                      ; 0051f850 | LAB_0051f875
        ;   Label: LAB_0051f850
        ;   XREF to: 0051f875 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0xbf20]              ; 0051f852
    PUSH EAX                            ; 0051f858
    MOV EAX,[0x006793d0]                ; 0051f859 | CEventList g_CEventListInstance | CEventList * g_CEventListPtr
    PUSH EAX                            ; 0051f85e | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0051f85f | int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0051f864
    TEST EAX,EAX                        ; 0051f867
    JZ 0x0051f875                       ; 0051f869 | LAB_0051f875
        ;   XREF to: 0051f875 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x4bdf4],0x1   ; 0051f86b
    LEA EAX,[EBX + 0xbebc]              ; 0051f875
        ;   Label: LAB_0051f875
    PUSH EAX                            ; 0051f87b
    MOV EDX,dword ptr [0x006793d0]      ; 0051f87c | CEventList g_CEventListInstance | CEventList * g_CEventListPtr
    PUSH EDX                            ; 0051f882 | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0051f883 | int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0051f888
    TEST EAX,EAX                        ; 0051f88b
    JZ 0x0051f80a                       ; 0051f88d | LAB_0051f80a
        ;   XREF to: 0051f80a (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0051f893
    CALL core_mimic.cpp_FUN_0051f930    ; 0051f894 | undefined core_mimic.cpp_FUN_0051f930()
        ;   XREF to: 0051f930 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBX + 0x4bdf4]   ; 0051f899
    ADD ESP,0x4                         ; 0051f89f
    CMP ECX,0x1                         ; 0051f8a2
    JNZ 0x0051f80a                      ; 0051f8a5 | LAB_0051f80a
        ;   XREF to: 0051f80a (CONDITIONAL_JUMP)
    MOV EAX,[0x02db87d0]                ; 0051f8ab | int g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0051f8b0 | CHero *[4] g_HeroActors
    ADD EAX,0x158                       ; 0051f8b7
    PUSH EAX                            ; 0051f8bc
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0051f8bd | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0051f8c2
    ADD ESP,0x4                         ; 0051f8c5
    CMP EAX,0x3                         ; 0051f8c8
    JNC 0x0051f8ef                      ; 0051f8cb | LAB_0051f8ef
        ;   XREF to: 0051f8ef (CONDITIONAL_JUMP)
    CMP EAX,0x1                         ; 0051f8cd
    JNC 0x0051f8da                      ; 0051f8d0 | LAB_0051f8da
        ;   XREF to: 0051f8da (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 0051f8d2
    JNZ 0x0051f80a                      ; 0051f8d4 | LAB_0051f80a
        ;   XREF to: 0051f80a (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0051f8da
        ;   Label: LAB_0051f8da
    CALL core_mimic.cpp_FUN_00520500    ; 0051f8db | undefined core_mimic.cpp_FUN_00520500()
        ;   XREF to: 00520500 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051f8e0
    PUSH EBX                            ; 0051f8e3
    CALL core_charactr.cpp_CCharacter_FUN_0042d530 ; 0051f8e4 | void core_charactr.cpp_CCharacter_FUN_0042d530(CCharacter * this_ptr)
        ;   XREF to: 0042d530 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051f8e9
    POP EDI                             ; 0051f8ec
    POP EBX                             ; 0051f8ed
    RET                                 ; 0051f8ee
    JBE 0x0051f8da                      ; 0051f8ef | LAB_0051f8da
        ;   Label: LAB_0051f8ef
        ;   XREF to: 0051f8da (CONDITIONAL_JUMP)
    CMP EAX,0x11                        ; 0051f8f1
    JNC 0x0051f907                      ; 0051f8f4 | LAB_0051f907
        ;   XREF to: 0051f907 (CONDITIONAL_JUMP)
    CMP EAX,0x10                        ; 0051f8f6
    JZ 0x0051f8da                       ; 0051f8f9 | LAB_0051f8da
        ;   XREF to: 0051f8da (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0051f8fb
    CALL core_charactr.cpp_CCharacter_FUN_0042d530 ; 0051f8fc | void core_charactr.cpp_CCharacter_FUN_0042d530(CCharacter * this_ptr)
        ;   XREF to: 0042d530 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051f901
    POP EDI                             ; 0051f904
    POP EBX                             ; 0051f905
    RET                                 ; 0051f906
    JBE 0x0051f8da                      ; 0051f907 | LAB_0051f8da
        ;   Label: LAB_0051f907
        ;   XREF to: 0051f8da (CONDITIONAL_JUMP)
    CMP EAX,0x14                        ; 0051f909
    JC 0x0051f80a                       ; 0051f90c | LAB_0051f80a
        ;   XREF to: 0051f80a (CONDITIONAL_JUMP)
    JBE 0x0051f8da                      ; 0051f912 | LAB_0051f8da
        ;   XREF to: 0051f8da (CONDITIONAL_JUMP)
    CMP EAX,0x15                        ; 0051f914
    JZ 0x0051f8da                       ; 0051f917 | LAB_0051f8da
        ;   XREF to: 0051f8da (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0051f919
    CALL core_charactr.cpp_CCharacter_FUN_0042d530 ; 0051f91a | void core_charactr.cpp_CCharacter_FUN_0042d530(CCharacter * this_ptr)
        ;   XREF to: 0042d530 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051f91f
    POP EDI                             ; 0051f922
    POP EBX                             ; 0051f923
    RET                                 ; 0051f924

