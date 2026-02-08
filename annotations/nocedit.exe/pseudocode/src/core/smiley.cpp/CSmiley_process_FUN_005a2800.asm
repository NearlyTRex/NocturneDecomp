; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_smiley_cpp_CSmiley_process_FUN_005a2800(CSmiley *this_ptr,float delta_time)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x1cc]:1  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined1       Stack[-0x190]:1  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined1       Stack[-0x154]:1  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0xe8]:4  local_e8
; undefined1       Stack[-0xdc]:1  local_dc
; undefined1       Stack[-0xd0]:1  local_d0
; undefined1       Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined1       Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined1       Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined1       Stack[-0x4c]:1  local_4c
; undefined1       Stack[-0x40]:1  local_40
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   void* switchdataD_005a27d0 = 005a2de7
;   TerminatedCString s_s_confused_while_walking_0064f2ca
;   TerminatedCString s_Capture_0064f2f4
;   TerminatedCString s_Capture_0064f2fc
;   double DOUBLE_0064f30a = 3.14159265350000
;   double DOUBLE_0064f312 = 0.523598775583333
;   double DOUBLE_0064f31a = 32
;   float FLOAT_00662f68 = 2.5
;   CConsole* g_CConsolePtr = 0083b1a4
;   CEventList* g_CEventListPtr = 02d05310
;   CGore* g_CGorePtr = 02d83364
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CConsole g_ConsolePtr
;   CEventList g_CEventListInstance
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_FUN_00428f40
;   core_charactr.cpp_CCharacter_FUN_004297e0
;   core_charactr.cpp_CCharacter_FUN_00429820
;   core_charactr.cpp_CCharacter_FUN_00429870
;   core_charactr.cpp_CCharacter_FUN_0042ca70
;   core_charactr.cpp_CCharacter_FUN_0042ec40
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_enemy.cpp_CEnemy_FUN_004a9880
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2800
        ;   Label: core_smiley.cpp_CSmiley_process_FUN_005a2800
    PUSH ESI                            ; 005a2801
    PUSH EDI                            ; 005a2802
    PUSH EBP                            ; 005a2803
    MOV EBP,ESP                         ; 005a2804
    SUB ESP,0x1bc                       ; 005a2806
    SUB EBP,0x7a                        ; 005a280c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005a280f
    FLD float ptr [EBX + 0xbef8]        ; 005a2815
    FSUB float ptr [EBP + 0x92]         ; 005a281b
    FST float ptr [EBX + 0xbef8]        ; 005a2821
    FLDZ                                ; 005a2827
    FCOMPP                              ; 005a2829
    FNSTSW AX                           ; 005a282b
    SAHF                                ; 005a282d
    JA 0x005a291f                       ; 005a282e
        ;   XREF to: 005a291f (CONDITIONAL_JUMP)  ; LAB_005a291f
    MOV EAX,dword ptr [EBX + 0xbeec]    ; 005a2834
        ;   Label: LAB_005a2834
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005a283a
    JNZ 0x005a289d                      ; 005a2842
        ;   XREF to: 005a289d (CONDITIONAL_JUMP)  ; LAB_005a289d
    PUSH EBX                            ; 005a2844
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a2845
    CALL dword ptr [EAX + 0x120]        ; 005a284b
    ADD ESP,0x4                         ; 005a2851
    TEST EAX,EAX                        ; 005a2854
    JNZ 0x005a289d                      ; 005a2856
        ;   XREF to: 005a289d (CONDITIONAL_JUMP)  ; LAB_005a289d
    LEA EAX,[EBP + 0xfffffebe]          ; 005a2858
    PUSH EAX                            ; 005a285e
    XOR ESI,ESI                         ; 005a285f
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005a2861
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    MOV ECX,0x461c3f9a                  ; 005a2866
    LEA EAX,[EBP + 0xfffffebe]          ; 005a286b
    ADD ESP,0x4                         ; 005a2871
    MOV dword ptr [EBP + 0xfffffeee],ESI ; 005a2874
    MOV dword ptr [EBP + 0xfffffef2],EBX ; 005a287a
    PUSH EAX                            ; 005a2880
    MOV dword ptr [EBP + 0xfffffef6],EBX ; 005a2881
    MOV dword ptr [EBP + 0xfffffec2],ECX ; 005a2887
    PUSH EBX                            ; 005a288d
    MOV EDX,dword ptr [EBX + 0x154]     ; 005a288e
    CALL dword ptr [EDX + 0x11c]        ; 005a2894
    ADD ESP,0x8                         ; 005a289a
    PUSH dword ptr [EBP + 0x92]         ; 005a289d
        ;   Label: LAB_005a289d
    PUSH EBX                            ; 005a28a3
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 005a28a4
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005a28a9
    TEST EAX,EAX                        ; 005a28ac
    JZ 0x005a2b50                       ; 005a28ae
        ;   XREF to: 005a2b50 (CONDITIONAL_JUMP)  ; LAB_005a2b50
    LEA EAX,[EBX + 0x23ac]              ; 005a28b4
    MOV dword ptr [EAX + 0x8],0x0       ; 005a28ba
    FLD float ptr [EBP + 0x92]          ; 005a28c1
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a28c7
    MOV dword ptr [EAX + 0x4],EDX       ; 005a28ca
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a28cd
    MOV dword ptr [EAX],EDX             ; 005a28d0
    FMUL float ptr [EBX + 0xbe24]       ; 005a28d2
    LEA ESI,[EBX + 0x158]               ; 005a28d8
    FSTP float ptr [EBP + 0x62]         ; 005a28de
    MOV EDI,0x1                         ; 005a28e1
    FLD float ptr [EBP + 0x62]          ; 005a28e6
        ;   Label: LAB_005a28e6
    FLDZ                                ; 005a28e9
    FCOMPP                              ; 005a28eb
    FNSTSW AX                           ; 005a28ed
    SAHF                                ; 005a28ef
    JNC 0x005a2a26                      ; 005a28f0
        ;   XREF to: 005a2a26 (CONDITIONAL_JUMP)  ; LAB_005a2a26
    LEA EAX,[EBP + 0x62]                ; 005a28f6
    PUSH EAX                            ; 005a28f9
    PUSH ESI                            ; 005a28fa
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 005a28fb
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 005a2900
    MOV EDX,EAX                         ; 005a2903
    CMP EAX,0x66                        ; 005a2905
    JNC 0x005a2a08                      ; 005a2908
        ;   XREF to: 005a2a08 (CONDITIONAL_JUMP)  ; LAB_005a2a08
    CMP EAX,0x65                        ; 005a290e
    JZ 0x005a292e                       ; 005a2911
        ;   XREF to: 005a292e (CONDITIONAL_JUMP)  ; LAB_005a292e
    PUSH EDX                            ; 005a2913
    PUSH EBX                            ; 005a2914
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 005a2915
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005a291a
    JMP 0x005a28e6                      ; 005a291d
        ;   XREF to: 005a28e6 (UNCONDITIONAL_JUMP)  ; LAB_005a28e6
    MOV dword ptr [EBX + 0xbef8],0x0    ; 005a291f
        ;   Label: LAB_005a291f
    JMP 0x005a2834                      ; 005a2929
        ;   XREF to: 005a2834 (UNCONDITIONAL_JUMP)  ; LAB_005a2834
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005a292e
        ;   Label: LAB_005a292e
    TEST EAX,EAX                        ; 005a2934
    JNZ 0x005a2945                      ; 005a2936
        ;   XREF to: 005a2945 (CONDITIONAL_JUMP)  ; LAB_005a2945
    PUSH EDI                            ; 005a2938
    PUSH EDI                            ; 005a2939
    PUSH ESI                            ; 005a293a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005a293b
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a2940
    JMP 0x005a28e6                      ; 005a2943
        ;   XREF to: 005a28e6 (UNCONDITIONAL_JUMP)  ; LAB_005a28e6
    PUSH 0x0                            ; 005a2945
        ;   Label: LAB_005a2945
    PUSH EBX                            ; 005a2947
    MOV EDX,dword ptr [EAX + 0x154]     ; 005a2948
    PUSH EAX                            ; 005a294e
    CALL dword ptr [EDX + 0x100]        ; 005a294f
    ADD ESP,0xc                         ; 005a2955
    TEST EAX,EAX                        ; 005a2958
    JNZ 0x005a28e6                      ; 005a295a
        ;   XREF to: 005a28e6 (CONDITIONAL_JUMP)  ; LAB_005a28e6
    PUSH EDI                            ; 005a295c
    PUSH EDI                            ; 005a295d
    PUSH ESI                            ; 005a295e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005a295f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a2964
    JMP 0x005a28e6                      ; 005a2967
        ;   XREF to: 005a28e6 (UNCONDITIONAL_JUMP)  ; LAB_005a28e6
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 005a296c
        ;   Label: LAB_005a296c
    TEST ECX,ECX                        ; 005a2972
    JZ 0x005a28e6                       ; 005a2974
        ;   XREF to: 005a28e6 (CONDITIONAL_JUMP)  ; LAB_005a28e6
    PUSH ECX                            ; 005a297a
    MOV EDX,dword ptr [ECX + 0x154]     ; 005a297b
    CALL dword ptr [EDX + 0x104]        ; 005a2981
    ADD ESP,0x4                         ; 005a2987
    JMP 0x005a28e6                      ; 005a298a
        ;   XREF to: 005a28e6 (UNCONDITIONAL_JUMP)  ; LAB_005a28e6
    MOV EDX,dword ptr [EBX + 0xbef0]    ; 005a298f
        ;   Label: LAB_005a298f
    INC EDX                             ; 005a2995
    MOV dword ptr [EBX + 0xbef0],EDX    ; 005a2996
    CMP EDX,0x3                         ; 005a299c
    JL 0x005a28e6                       ; 005a299f
        ;   XREF to: 005a28e6 (CONDITIONAL_JUMP)  ; LAB_005a28e6
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005a29a5
    TEST EAX,EAX                        ; 005a29ab
    JZ 0x005a29e8                       ; 005a29ad
        ;   XREF to: 005a29e8 (CONDITIONAL_JUMP)  ; LAB_005a29e8
    LEA EAX,[EBP + 0xffffff72]          ; 005a29af
    PUSH EAX                            ; 005a29b5
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005a29b6
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    MOV EDX,0x4                         ; 005a29bb
    ADD ESP,0x4                         ; 005a29c0
    MOV dword ptr [EBP + -0x5e],EDX     ; 005a29c3
    LEA EDX,[EBP + 0xffffff72]          ; 005a29c6
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005a29cc
    PUSH EDX                            ; 005a29d2
    MOV ECX,dword ptr [EAX + 0x154]     ; 005a29d3
    PUSH EAX                            ; 005a29d9
    CALL dword ptr [ECX + 0x11c]        ; 005a29da
    ADD ESP,0x8                         ; 005a29e0
    JMP 0x005a28e6                      ; 005a29e3
        ;   XREF to: 005a28e6 (UNCONDITIONAL_JUMP)  ; LAB_005a28e6
    PUSH EAX                            ; 005a29e8
        ;   Label: LAB_005a29e8
    MOV EDX,dword ptr [EAX + 0x154]     ; 005a29e9
    CALL dword ptr [EDX + 0x104]        ; 005a29ef
    ADD ESP,0x4                         ; 005a29f5
    PUSH EDI                            ; 005a29f8
    PUSH EDI                            ; 005a29f9
    PUSH ESI                            ; 005a29fa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005a29fb
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a2a00
    JMP 0x005a28e6                      ; 005a2a03
        ;   XREF to: 005a28e6 (UNCONDITIONAL_JUMP)  ; LAB_005a28e6
    JBE 0x005a296c                      ; 005a2a08
        ;   XREF to: 005a296c (CONDITIONAL_JUMP)  ; LAB_005a296c
        ;   Label: LAB_005a2a08
    CMP EAX,0x67                        ; 005a2a0e
    JZ 0x005a298f                       ; 005a2a11
        ;   XREF to: 005a298f (CONDITIONAL_JUMP)  ; LAB_005a298f
    PUSH EDX                            ; 005a2a17
    PUSH EBX                            ; 005a2a18
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 005a2a19
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005a2a1e
    JMP 0x005a28e6                      ; 005a2a21
        ;   XREF to: 005a28e6 (UNCONDITIONAL_JUMP)  ; LAB_005a28e6
    FLD float ptr [EBX + 0xbe24]        ; 005a2a26
        ;   Label: LAB_005a2a26
    FLD float ptr [EBP + 0x92]          ; 005a2a2c
    FMUL double ptr [0x0064f30a]        ; 005a2a32 | DOUBLE_0064f30a
    FMULP                               ; 005a2a38
    FLD float ptr [EBX + 0x23b4]        ; 005a2a3a
    LEA ESI,[EBX + 0x158]               ; 005a2a40
    FSTP float ptr [EBX + 0x2434]       ; 005a2a46
    PUSH ESI                            ; 005a2a4c
    FSTP float ptr [EBX + 0x2438]       ; 005a2a4d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005a2a53
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005a2a58
    PUSH dword ptr [EBP + 0x92]         ; 005a2a5b
    MOV EDI,dword ptr [EAX + 0x24]      ; 005a2a61
    PUSH EBX                            ; 005a2a64
    MOV dword ptr [EBP + 0x66],EDI      ; 005a2a65
    CALL core_charactr.cpp_CCharacter_FUN_0042ca70 ; 005a2a68
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ca70(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005a2a6d
    TEST EAX,EAX                        ; 005a2a70
    JZ 0x005a3049                       ; 005a2a72
        ;   XREF to: 005a3049 (CONDITIONAL_JUMP)  ; LAB_005a3049
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 005a2a78
    CMP EAX,0x2                         ; 005a2a7e
    JNC 0x005a2b83                      ; 005a2a81
        ;   XREF to: 005a2b83 (CONDITIONAL_JUMP)  ; LAB_005a2b83
    CMP EAX,0x1                         ; 005a2a87
    JNZ 0x005a2b8e                      ; 005a2a8a
        ;   XREF to: 005a2b8e (CONDITIONAL_JUMP)  ; LAB_005a2b8e
    PUSH 0x1                            ; 005a2a90
        ;   Label: LAB_005a2a90
    PUSH 0x2                            ; 005a2a92
    LEA EAX,[EBX + 0x158]               ; 005a2a94
        ;   Label: LAB_005a2a94
    PUSH EAX                            ; 005a2a9a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005a2a9b
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a2aa0
        ;   Label: LAB_005a2aa0
    LEA EAX,[EBX + 0x23ac]              ; 005a2aa3
    MOV dword ptr [EAX + 0x8],0x0       ; 005a2aa9
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a2ab0
    MOV dword ptr [EAX + 0x4],EDX       ; 005a2ab3
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a2ab6
    MOV dword ptr [EAX],EDX             ; 005a2ab9
    FLD float ptr [EBX + 0xbebc]        ; 005a2abb
        ;   Label: caseD_7
    FLDZ                                ; 005a2ac1
    FCOMPP                              ; 005a2ac3
    FNSTSW AX                           ; 005a2ac5
    SAHF                                ; 005a2ac7
    JNC 0x005a2adc                      ; 005a2ac8
        ;   XREF to: 005a2adc (CONDITIONAL_JUMP)  ; LAB_005a2adc
    FLD float ptr [EBX + 0xbebc]        ; 005a2aca
    FSUB float ptr [EBP + 0x92]         ; 005a2ad0
    FSTP float ptr [EBX + 0xbebc]       ; 005a2ad6
    CMP dword ptr [EBP + 0x66],0xb      ; 005a2adc
        ;   Label: LAB_005a2adc
    JNZ 0x005a305c                      ; 005a2ae0
        ;   XREF to: 005a305c (CONDITIONAL_JUMP)  ; LAB_005a305c
    LEA ESI,[EBX + 0x23ac]              ; 005a2ae6
    PUSH ESI                            ; 005a2aec
    LEA EAX,[EBP + 0x1a]                ; 005a2aed
    PUSH EAX                            ; 005a2af0
    PUSH EBX                            ; 005a2af1
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005a2af2
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 005a2af7
    LEA EAX,[EBX + 0x20]                ; 005a2af9
    FLD float ptr [EDX]                 ; 005a2afc
    FADD float ptr [EAX]                ; 005a2afe
    FSTP float ptr [EAX]                ; 005a2b00
    FLD float ptr [EDX + 0x4]           ; 005a2b02
    FADD float ptr [EAX + 0x4]          ; 005a2b05
    FSTP float ptr [EAX + 0x4]          ; 005a2b08
    FLD float ptr [EDX + 0x8]           ; 005a2b0b
    FADD float ptr [EAX + 0x8]          ; 005a2b0e
    FSTP float ptr [EAX + 0x8]          ; 005a2b11
    MOV dword ptr [ESI + 0x8],0x0       ; 005a2b14
    ADD ESP,0xc                         ; 005a2b1b
    MOV EAX,dword ptr [ESI + 0x8]       ; 005a2b1e
    MOV dword ptr [ESI + 0x4],EAX       ; 005a2b21
    MOV EAX,dword ptr [ESI + 0x4]       ; 005a2b24
    MOV dword ptr [ESI],EAX             ; 005a2b27
    PUSH EBX                            ; 005a2b29
        ;   Label: LAB_005a2b29
    CALL core_charactr.cpp_CCharacter_FUN_00429820 ; 005a2b2a
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005a2b2f
    LEA EAX,[EBX + 0x158]               ; 005a2b32
    PUSH EAX                            ; 005a2b38
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 005a2b39
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a2b3e
    PUSH dword ptr [EBP + 0x92]         ; 005a2b41
    PUSH EBX                            ; 005a2b47
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 005a2b48
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005a2b4d
    LEA ESP,[EBP + 0x7a]                ; 005a2b50
        ;   Label: LAB_005a2b50
    POP EBP                             ; 005a2b53
    POP EDI                             ; 005a2b54
    POP ESI                             ; 005a2b55
    POP EBX                             ; 005a2b56
    RET                                 ; 005a2b57
    PUSH 0x1                            ; 005a2b58
        ;   Label: LAB_005a2b58
    PUSH 0x1                            ; 005a2b5a
    LEA EAX,[EBX + 0x158]               ; 005a2b5c
    PUSH EAX                            ; 005a2b62
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005a2b63
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a2b68
    PUSH EBX                            ; 005a2b6b
    MOV EAX,0x64f2ca                    ; 005a2b6c | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 005a2b71 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x0066e8e0]      ; 005a2b72 | g_CConsolePtr
    PUSH EDX                            ; 005a2b78 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005a2b79
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x005a2aa0                      ; 005a2b7e
        ;   XREF to: 005a2aa0 (UNCONDITIONAL_JUMP)  ; LAB_005a2aa0
    JBE 0x005a2a90                      ; 005a2b83
        ;   XREF to: 005a2a90 (CONDITIONAL_JUMP)  ; LAB_005a2a90
        ;   Label: LAB_005a2b83
    CMP EAX,0x3                         ; 005a2b89
    JZ 0x005a2b58                       ; 005a2b8c
        ;   XREF to: 005a2b58 (CONDITIONAL_JUMP)  ; LAB_005a2b58
    PUSH 0x1                            ; 005a2b8e
        ;   Label: LAB_005a2b8e
    PUSH 0x1                            ; 005a2b90
    JMP 0x005a2a94                      ; 005a2b92
        ;   XREF to: 005a2a94 (UNCONDITIONAL_JUMP)  ; LAB_005a2a94
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 005a2b97
        ;   Label: caseD_6
    TEST EDX,EDX                        ; 005a2b9d
    JNZ 0x005a2bc5                      ; 005a2b9f
        ;   XREF to: 005a2bc5 (CONDITIONAL_JUMP)  ; LAB_005a2bc5
    MOV EAX,EDX                         ; 005a2ba1
    PUSH EAX                            ; 005a2ba3
    MOV EDX,dword ptr [EDX + 0x154]     ; 005a2ba4
    CALL dword ptr [EDX + 0x104]        ; 005a2baa
    ADD ESP,0x4                         ; 005a2bb0
    PUSH 0x1                            ; 005a2bb3
    PUSH 0x1                            ; 005a2bb5
    PUSH ESI                            ; 005a2bb7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005a2bb8
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a2bbd
    JMP 0x005a2abb                      ; 005a2bc0
        ;   XREF to: 005a2abb (UNCONDITIONAL_JUMP)  ; caseD_5
    LEA EAX,[EBP + 0xfffffefa]          ; 005a2bc5
        ;   Label: LAB_005a2bc5
    PUSH EAX                            ; 005a2bcb
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005a2bcc
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005a2bd1
    PUSH 0x41700000                     ; 005a2bd4
    PUSH 0x40e00000                     ; 005a2bd9
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005a2bde
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 005a2be3
    ADD ESP,0x8                         ; 005a2be6
    LEA EAX,[EBP + 0xfffffefa]          ; 005a2be9
    MOV EDX,dword ptr [0x03f48fa8]      ; 005a2bef | INT_03f48fa8
    PUSH EAX                            ; 005a2bf5
    LEA EAX,[EDX*0x4 + 0x0]             ; 005a2bf6
    MOV dword ptr [EBP + 0xffffff2e],EBX ; 005a2bfd
    SUB EAX,EDX                         ; 005a2c03
    MOV dword ptr [EBP + 0xffffff32],EBX ; 005a2c05
    SHL EAX,0x4                         ; 005a2c0b
    LEA EDX,[EBX + 0xfd8]               ; 005a2c0e
    ADD EAX,EDX                         ; 005a2c14
    PUSH 0x3f800000                     ; 005a2c16
    PUSH EAX                            ; 005a2c1b
    PUSH 0x3f87558                      ; 005a2c1c | g_ZeroVector
    LEA EAX,[EBP + -0x2e]               ; 005a2c21
    FLD float ptr [EBP + 0x76]          ; 005a2c24
    PUSH EAX                            ; 005a2c27
    FSTP float ptr [EBP + 0xfffffefe]   ; 005a2c28
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005a2c2e
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 005a2c33
    PUSH EAX                            ; 005a2c36
    LEA EAX,[EBP + -0x52]               ; 005a2c37
    PUSH EAX                            ; 005a2c3a
    PUSH EBX                            ; 005a2c3b
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005a2c3c
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005a2c41
    PUSH EAX                            ; 005a2c44
    PUSH EBX                            ; 005a2c45
    CALL core_enemy.cpp_CEnemy_FUN_004a9880 ; 005a2c46
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9880(CEnemy * this_ptr)
    ADD ESP,0x10                        ; 005a2c4b
    JMP 0x005a2abb                      ; 005a2c4e
        ;   XREF to: 005a2abb (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 005a2c53
        ;   Label: caseD_9
    TEST EDI,EDI                        ; 005a2c59
    JZ 0x005a2c69                       ; 005a2c5b
        ;   XREF to: 005a2c69 (CONDITIONAL_JUMP)  ; LAB_005a2c69
    MOV EDX,dword ptr [EDI + 0x2598]    ; 005a2c5d
    MOV EAX,EDI                         ; 005a2c63
    TEST EDX,EDX                        ; 005a2c65
    JNZ 0x005a2c7b                      ; 005a2c67
        ;   XREF to: 005a2c7b (CONDITIONAL_JUMP)  ; LAB_005a2c7b
    PUSH 0x1                            ; 005a2c69
        ;   Label: LAB_005a2c69
    PUSH 0x1                            ; 005a2c6b
    PUSH ESI                            ; 005a2c6d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005a2c6e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a2c73
    JMP 0x005a2abb                      ; 005a2c76
        ;   XREF to: 005a2abb (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH EDI                            ; 005a2c7b
        ;   Label: LAB_005a2c7b
    MOV EDX,dword ptr [EDI + 0x154]     ; 005a2c7c
    CALL dword ptr [EDX + 0x120]        ; 005a2c82
    ADD ESP,0x4                         ; 005a2c88
    TEST EAX,EAX                        ; 005a2c8b
    JZ 0x005a2cb7                       ; 005a2c8d
        ;   XREF to: 005a2cb7 (CONDITIONAL_JUMP)  ; LAB_005a2cb7
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005a2c8f
    PUSH EAX                            ; 005a2c95
    MOV EDX,dword ptr [EAX + 0x154]     ; 005a2c96
    CALL dword ptr [EDX + 0x104]        ; 005a2c9c
    ADD ESP,0x4                         ; 005a2ca2
    PUSH 0x1                            ; 005a2ca5
    PUSH 0x1                            ; 005a2ca7
    PUSH ESI                            ; 005a2ca9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005a2caa
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a2caf
    JMP 0x005a2abb                      ; 005a2cb2
        ;   XREF to: 005a2abb (UNCONDITIONAL_JUMP)  ; caseD_5
    LEA EAX,[EBP + 0xffffff36]          ; 005a2cb7
        ;   Label: LAB_005a2cb7
    PUSH EAX                            ; 005a2cbd
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005a2cbe
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005a2cc3
    PUSH 0x41700000                     ; 005a2cc6
    PUSH 0x40e00000                     ; 005a2ccb
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005a2cd0
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 005a2cd5
    ADD ESP,0x8                         ; 005a2cd8
    LEA EAX,[EBP + 0xffffff36]          ; 005a2cdb
    MOV EDX,dword ptr [0x03f48fa8]      ; 005a2ce1 | INT_03f48fa8
    PUSH EAX                            ; 005a2ce7
    LEA EAX,[EDX*0x4 + 0x0]             ; 005a2ce8
    SUB EAX,EDX                         ; 005a2cef
    MOV dword ptr [EBP + 0xffffff6a],EBX ; 005a2cf1
    MOV EDX,EAX                         ; 005a2cf7
    MOV dword ptr [EBP + 0xffffff6e],EBX ; 005a2cf9
    SHL EDX,0x4                         ; 005a2cff
    LEA EAX,[EBX + 0xfd8]               ; 005a2d02
    ADD EAX,EDX                         ; 005a2d08
    PUSH 0x3f800000                     ; 005a2d0a
    PUSH EAX                            ; 005a2d0f
    PUSH 0x3f87558                      ; 005a2d10 | g_ZeroVector
    LEA EAX,[EBP + 0x2]                 ; 005a2d15
    FLD float ptr [EBP + 0x76]          ; 005a2d18
    PUSH EAX                            ; 005a2d1b
    FSTP float ptr [EBP + 0xffffff3a]   ; 005a2d1c
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005a2d22
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 005a2d27
    PUSH EAX                            ; 005a2d2a
    LEA EAX,[EBP + -0x46]               ; 005a2d2b
    PUSH EAX                            ; 005a2d2e
    PUSH EBX                            ; 005a2d2f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005a2d30
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005a2d35
    PUSH EAX                            ; 005a2d38
    PUSH EBX                            ; 005a2d39
    CALL core_enemy.cpp_CEnemy_FUN_004a9880 ; 005a2d3a
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9880(CEnemy * this_ptr)
    ADD ESP,0x10                        ; 005a2d3f
    JMP 0x005a2abb                      ; 005a2d42
        ;   XREF to: 005a2abb (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005a2d47
        ;   Label: caseD_a
    PUSH EAX                            ; 005a2d4d
    MOV EDX,dword ptr [EAX + 0x154]     ; 005a2d4e
    CALL dword ptr [EDX + 0x120]        ; 005a2d54
    ADD ESP,0x4                         ; 005a2d5a
    TEST EAX,EAX                        ; 005a2d5d
    JZ 0x005a2abb                       ; 005a2d5f
        ;   XREF to: 005a2abb (CONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005a2d65
    PUSH EAX                            ; 005a2d6b
    MOV EDX,dword ptr [EAX + 0x154]     ; 005a2d6c
    CALL dword ptr [EDX + 0x104]        ; 005a2d72
    ADD ESP,0x4                         ; 005a2d78
    PUSH 0x1                            ; 005a2d7b
    PUSH 0x1                            ; 005a2d7d
    PUSH ESI                            ; 005a2d7f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005a2d80
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a2d85
    JMP 0x005a2abb                      ; 005a2d88
        ;   XREF to: 005a2abb (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV ECX,dword ptr [EBX + 0xbe28]    ; 005a2d8d
        ;   Label: caseD_8
    TEST ECX,ECX                        ; 005a2d93
    JNZ 0x005a2abb                      ; 005a2d95
        ;   XREF to: 005a2abb (CONDITIONAL_JUMP)  ; caseD_5
    MOV EDI,dword ptr [EBX + 0xdc]      ; 005a2d9b
    TEST EDI,EDI                        ; 005a2da1
    JNZ 0x005a2abb                      ; 005a2da3
        ;   XREF to: 005a2abb (CONDITIONAL_JUMP)  ; caseD_5
    PUSH ECX                            ; 005a2da9
    LEA EAX,[EBP + 0x4a]                ; 005a2daa
    PUSH EAX                            ; 005a2dad
    PUSH ESI                            ; 005a2dae
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005a2daf
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005a2db4
    PUSH EAX                            ; 005a2db7
    LEA EAX,[EBP + 0x3e]                ; 005a2db8
    PUSH EAX                            ; 005a2dbb
    PUSH EBX                            ; 005a2dbc
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005a2dbd
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005a2dc2
    PUSH EDI                            ; 005a2dc5
    LEA EAX,[EBP + 0x3e]                ; 005a2dc6
    PUSH EAX                            ; 005a2dc9
    MOV EAX,[0x0067b9a0]                ; 005a2dca | g_CGorePtr | g_CGoreInstance
    PUSH EAX                            ; 005a2dcf | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ede30 ; 005a2dd0
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004ede30(CGore * this_ptr)
    ADD ESP,0xc                         ; 005a2dd5
    MOV dword ptr [EBX + 0xbe28],0x1    ; 005a2dd8
    JMP 0x005a2abb                      ; 005a2de2
        ;   XREF to: 005a2abb (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x64f2f4                       ; 005a2de7 | = "Capture"
        ;   Label: caseD_1
    MOV EDI,dword ptr [0x006793d0]      ; 005a2dec | g_CEventListPtr
    PUSH EDI                            ; 005a2df2 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005a2df3
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005a2df8
    TEST EAX,EAX                        ; 005a2dfb
    JNZ 0x005a2abb                      ; 005a2dfd
        ;   XREF to: 005a2abb (CONDITIONAL_JUMP)  ; caseD_5
    PUSH dword ptr [EBP + 0x92]         ; 005a2e03
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a2e09
    PUSH EBX                            ; 005a2e0f
    CALL dword ptr [EAX + 0x158]        ; 005a2e10
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005a2e16
    ADD ESP,0x8                         ; 005a2e1c
    TEST EAX,EAX                        ; 005a2e1f
    JZ 0x005a2abb                       ; 005a2e21
        ;   XREF to: 005a2abb (CONDITIONAL_JUMP)  ; caseD_5
    LEA EDX,[EBX + 0x20]                ; 005a2e27
    FLD float ptr [EAX + 0x20]          ; 005a2e2a
    FSUB float ptr [EDX]                ; 005a2e2d
    FSTP float ptr [EBP + 0x32]         ; 005a2e2f
    FLD float ptr [EAX + 0x24]          ; 005a2e32
    FSUB float ptr [EDX + 0x4]          ; 005a2e35
    FST float ptr [EBP + 0x36]          ; 005a2e38
    FMUL float ptr [EBP + 0x36]         ; 005a2e3b
    FLD float ptr [EBP + 0x32]          ; 005a2e3e
    FMUL ST0                            ; 005a2e41
    FLD float ptr [EAX + 0x28]          ; 005a2e43
    FSUB float ptr [EDX + 0x8]          ; 005a2e46
    FXCH                                ; 005a2e49
    FADDP ST2,ST0                       ; 005a2e4b
    FST float ptr [EBP + 0x3a]          ; 005a2e4d
    FMUL float ptr [EBP + 0x3a]         ; 005a2e50
    FADDP                               ; 005a2e53
    FSQRT                               ; 005a2e55
    FLD float ptr [0x00662f68]          ; 005a2e57 | FLOAT_00662f68
    FLD1                                ; 005a2e5d
    FADDP                               ; 005a2e5f
    FXCH                                ; 005a2e61
    FSTP float ptr [EBP + 0x72]         ; 005a2e63
    MOV EAX,dword ptr [EBP + 0x72]      ; 005a2e66
    FLD float ptr [EBP + 0x72]          ; 005a2e69
    MOV dword ptr [EBP + 0x6a],EAX      ; 005a2e6c
    FCOMPP                              ; 005a2e6f
    FNSTSW AX                           ; 005a2e71
    SAHF                                ; 005a2e73
    JC 0x005a2ea0                       ; 005a2e74
        ;   XREF to: 005a2ea0 (CONDITIONAL_JUMP)  ; LAB_005a2ea0
    FLD float ptr [EBP + 0x6a]          ; 005a2e76
        ;   Label: LAB_005a2e76
    FCOMP float ptr [EBX + 0xbec0]      ; 005a2e79
    FNSTSW AX                           ; 005a2e7f
    SAHF                                ; 005a2e81
    JNC 0x005a2abb                      ; 005a2e82
        ;   XREF to: 005a2abb (CONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 005a2e88
    PUSH 0x2                            ; 005a2e8a
    LEA EAX,[EBX + 0x158]               ; 005a2e8c
    PUSH EAX                            ; 005a2e92
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005a2e93
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a2e98
    JMP 0x005a2abb                      ; 005a2e9b
        ;   XREF to: 005a2abb (UNCONDITIONAL_JUMP)  ; caseD_5
    LEA EAX,[EBP + 0x32]                ; 005a2ea0
        ;   Label: LAB_005a2ea0
    PUSH EAX                            ; 005a2ea3
    LEA EAX,[EBP + -0x3a]               ; 005a2ea4
    PUSH EAX                            ; 005a2ea7
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005a2ea8
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + -0x36]         ; 005a2ead
    ADD ESP,0x8                         ; 005a2eb0
    FSUB float ptr [EBX + 0x34]         ; 005a2eb3
    SUB ESP,0x4                         ; 005a2eb6
    FSTP float ptr [ESP]                ; 005a2eb9
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005a2ebc
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 005a2ec1
    FLD float ptr [EBP + 0x76]          ; 005a2ec4
    FABS                                ; 005a2ec7
    ADD ESP,0x4                         ; 005a2ec9
    FCOMP double ptr [0x0064f312]       ; 005a2ecc | DOUBLE_0064f312
    FNSTSW AX                           ; 005a2ed2
    SAHF                                ; 005a2ed4
    JNC 0x005a2e76                      ; 005a2ed5
        ;   XREF to: 005a2e76 (CONDITIONAL_JUMP)  ; LAB_005a2e76
    PUSH 0x1                            ; 005a2ed7
    PUSH 0x9                            ; 005a2ed9
    PUSH ESI                            ; 005a2edb
    MOV dword ptr [EBX + 0xbef0],0x0    ; 005a2edc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005a2ee6
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a2eeb
    JMP 0x005a2e76                      ; 005a2eee
        ;   XREF to: 005a2e76 (UNCONDITIONAL_JUMP)  ; LAB_005a2e76
    PUSH 0x64f2fc                       ; 005a2ef0 | = "Capture"
        ;   Label: caseD_2
    MOV ECX,dword ptr [0x006793d0]      ; 005a2ef5 | g_CEventListPtr
    PUSH ECX                            ; 005a2efb | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005a2efc
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005a2f01
    TEST EAX,EAX                        ; 005a2f04
    JZ 0x005a2f1a                       ; 005a2f06
        ;   XREF to: 005a2f1a (CONDITIONAL_JUMP)  ; LAB_005a2f1a
    PUSH 0x1                            ; 005a2f08
        ;   Label: LAB_005a2f08
    PUSH 0x1                            ; 005a2f0a
    PUSH ESI                            ; 005a2f0c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005a2f0d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a2f12
    JMP 0x005a2abb                      ; 005a2f15
        ;   XREF to: 005a2abb (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH dword ptr [EBP + 0x92]         ; 005a2f1a
        ;   Label: LAB_005a2f1a
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a2f20
    PUSH EBX                            ; 005a2f26
    CALL dword ptr [EAX + 0x158]        ; 005a2f27
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 005a2f2d
    ADD ESP,0x8                         ; 005a2f33
    TEST EDI,EDI                        ; 005a2f36
    JZ 0x005a2f08                       ; 005a2f38
        ;   XREF to: 005a2f08 (CONDITIONAL_JUMP)  ; LAB_005a2f08
    MOV EDX,dword ptr [EDI + 0x2598]    ; 005a2f3a
    MOV EAX,EDI                         ; 005a2f40
    CMP EBX,EDX                         ; 005a2f42
    JNZ 0x005a2f56                      ; 005a2f44
        ;   XREF to: 005a2f56 (CONDITIONAL_JUMP)  ; LAB_005a2f56
    PUSH EDI                            ; 005a2f46
    MOV EDX,dword ptr [EDI + 0x154]     ; 005a2f47
    CALL dword ptr [EDX + 0x104]        ; 005a2f4d
    ADD ESP,0x4                         ; 005a2f53
    MOV EAX,[0x00662f68]                ; 005a2f56 | FLOAT_00662f68
        ;   Label: LAB_005a2f56
    PUSH 0x3e32b8c2                     ; 005a2f5b
    MOV dword ptr [EBP + 0x6e],EAX      ; 005a2f60
    LEA EAX,[EBX + 0x23ac]              ; 005a2f63
    PUSH 0x3f000000                     ; 005a2f69
    MOV dword ptr [EAX + 0x8],0x0       ; 005a2f6e
    XOR ECX,ECX                         ; 005a2f75
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a2f77
    MOV dword ptr [EAX + 0x4],EDX       ; 005a2f7a
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a2f7d
    MOV dword ptr [EAX],EDX             ; 005a2f80
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005a2f82
    MOV dword ptr [EBP + -0xa],ECX      ; 005a2f85
    MOV dword ptr [EBP + -0x2],EAX      ; 005a2f88
    LEA EAX,[EBP + -0xa]                ; 005a2f8b
    MOV dword ptr [EBP + -0x6],ECX      ; 005a2f8e
    PUSH EAX                            ; 005a2f91
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005a2f92
    PUSH EAX                            ; 005a2f98
    MOV EDX,dword ptr [EAX + 0x154]     ; 005a2f99
    CALL dword ptr [EDX + 0xbc]         ; 005a2f9f
    ADD ESP,0x4                         ; 005a2fa5
    PUSH EAX                            ; 005a2fa8
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005a2fa9
    ADD EAX,0x20                        ; 005a2faf
    PUSH EAX                            ; 005a2fb2
    PUSH EBX                            ; 005a2fb3
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 005a2fb4
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
    ADD ESP,0x18                        ; 005a2fb9
    TEST EAX,EAX                        ; 005a2fbc
    JL 0x005a2abb                       ; 005a2fbe
        ;   XREF to: 005a2abb (CONDITIONAL_JUMP)  ; caseD_5
    JLE 0x005a2abb                      ; 005a2fc4
        ;   XREF to: 005a2abb (CONDITIONAL_JUMP)  ; caseD_5
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 005a2fca
    LEA EAX,[EBX + 0x20]                ; 005a2fd0
    FLD float ptr [EDX + 0x20]          ; 005a2fd3
    FSUB float ptr [EAX]                ; 005a2fd6
    FSTP float ptr [EBP + -0x16]        ; 005a2fd8
    FLD float ptr [EDX + 0x24]          ; 005a2fdb
    FSUB float ptr [EAX + 0x4]          ; 005a2fde
    FST float ptr [EBP + -0x12]         ; 005a2fe1
    FMUL float ptr [EBP + -0x12]        ; 005a2fe4
    FLD float ptr [EBP + -0x16]         ; 005a2fe7
    FMUL ST0                            ; 005a2fea
    FLD float ptr [EDX + 0x28]          ; 005a2fec
    FSUB float ptr [EAX + 0x8]          ; 005a2fef
    FXCH                                ; 005a2ff2
    FADDP ST2,ST0                       ; 005a2ff4
    FST float ptr [EBP + -0xe]          ; 005a2ff6
    FMUL float ptr [EBP + -0xe]         ; 005a2ff9
    FADDP                               ; 005a2ffc
    FSQRT                               ; 005a2ffe
    FLD float ptr [EBP + 0x6e]          ; 005a3000
    FLD1                                ; 005a3003
    FADDP                               ; 005a3005
    FXCH                                ; 005a3007
    FCOMPP                              ; 005a3009
    FNSTSW AX                           ; 005a300b
    SAHF                                ; 005a300d
    JNC 0x005a2abb                      ; 005a300e
        ;   XREF to: 005a2abb (CONDITIONAL_JUMP)  ; caseD_5
    FLD float ptr [EBX + 0xbebc]        ; 005a3014
    FLDZ                                ; 005a301a
    FCOMPP                              ; 005a301c
    FNSTSW AX                           ; 005a301e
    SAHF                                ; 005a3020
    JC 0x005a2abb                       ; 005a3021
        ;   XREF to: 005a2abb (CONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 005a3027
    PUSH 0x6                            ; 005a3029
    LEA EAX,[EBX + 0x158]               ; 005a302b
    PUSH EAX                            ; 005a3031
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005a3032
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a3037
    MOV dword ptr [EBX + 0xbebc],0x3f800000 ; 005a303a
    JMP 0x005a2abb                      ; 005a3044
        ;   XREF to: 005a2abb (UNCONDITIONAL_JUMP)  ; caseD_5
    LEA EAX,[EDI + -0x1]                ; 005a3049
        ;   Label: LAB_005a3049
    CMP EAX,0x9                         ; 005a304c
    JA 0x005a2abb                       ; 005a304f
        ;   XREF to: 005a2abb (CONDITIONAL_JUMP)  ; caseD_5
    JMP dword ptr [EAX*0x4 + 0x5a27d0]  ; 005a3055 | caseD_1 | caseD_2 | caseD_5
        ;   Label: switchD
    PUSH EBX                            ; 005a305c
        ;   Label: LAB_005a305c
    CALL core_charactr.cpp_CCharacter_FUN_004297e0 ; 005a305d
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_004297e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005a3062
    TEST EAX,EAX                        ; 005a3065
    JZ 0x005a2b29                       ; 005a3067
        ;   XREF to: 005a2b29 (CONDITIONAL_JUMP)  ; LAB_005a2b29
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 005a306d
    TEST ESI,ESI                        ; 005a3073
    JZ 0x005a30a0                       ; 005a3075
        ;   XREF to: 005a30a0 (CONDITIONAL_JUMP)  ; LAB_005a30a0
    PUSH ESI                            ; 005a3077
    MOV EDX,dword ptr [ESI + 0x154]     ; 005a3078
    CALL dword ptr [EDX + 0x108]        ; 005a307e
    ADD ESP,0x4                         ; 005a3084
    CMP EAX,EBX                         ; 005a3087
    JNZ 0x005a30a0                      ; 005a3089
        ;   XREF to: 005a30a0 (CONDITIONAL_JUMP)  ; LAB_005a30a0
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 005a308b
    PUSH EDI                            ; 005a3091
    MOV EAX,[0x006810c8]                ; 005a3092 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 005a3097 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005a3098
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005a309d
    FLD float ptr [EBP + 0x92]          ; 005a30a0
        ;   Label: LAB_005a30a0
    FLD ST0                             ; 005a30a6
    FMUL double ptr [0x0064f31a]        ; 005a30a8 | DOUBLE_0064f31a
    FLD float ptr [EBX + 0x242c]        ; 005a30ae
    FXCH                                ; 005a30b4
    FSUBR ST0,ST1                       ; 005a30b6
    LEA ECX,[EBX + 0x2428]              ; 005a30b8
    FSTP ST1                            ; 005a30be
    FSTP float ptr [EBX + 0x242c]       ; 005a30c0
    FLD float ptr [ECX]                 ; 005a30c6
    FMUL ST1                            ; 005a30c8
    FSTP float ptr [EBP + 0x26]         ; 005a30ca
    FLD float ptr [ECX + 0x4]           ; 005a30cd
    FMUL ST1                            ; 005a30d0
    LEA EAX,[EBX + 0x241c]              ; 005a30d2
    FSTP float ptr [EBP + 0x2a]         ; 005a30d8
    FMUL float ptr [ECX + 0x8]          ; 005a30db
    LEA EDX,[EBX + 0x23ac]              ; 005a30de
    FLD float ptr [EBP + 0x26]          ; 005a30e4
    FXCH                                ; 005a30e7
    FSTP float ptr [EBP + 0x2e]         ; 005a30e9
    FADD float ptr [EAX]                ; 005a30ec
    FLD float ptr [EBP + 0x2a]          ; 005a30ee
    FXCH                                ; 005a30f1
    FSTP float ptr [EBP + 0xe]          ; 005a30f3
    FADD float ptr [EAX + 0x4]          ; 005a30f6
    FLD float ptr [EBP + 0x2e]          ; 005a30f9
    FXCH                                ; 005a30fc
    FSTP float ptr [EBP + 0x12]         ; 005a30fe
    FADD float ptr [EAX + 0x8]          ; 005a3101 | DAT_00002424
    FLD float ptr [EBP + 0xe]           ; 005a3104
    FXCH                                ; 005a3107
    FSTP float ptr [EBP + 0x16]         ; 005a3109
    FADD float ptr [EDX]                ; 005a310c
    FLD float ptr [EBP + 0x12]          ; 005a310e
    FXCH                                ; 005a3111
    FSTP float ptr [EBP + -0x22]        ; 005a3113
    FADD float ptr [EDX + 0x4]          ; 005a3116
    FLD float ptr [EBP + 0x16]          ; 005a3119
    FXCH                                ; 005a311c
    FSTP float ptr [EBP + -0x1e]        ; 005a311e
    FADD float ptr [EDX + 0x8]          ; 005a3121
    FSTP float ptr [EBP + -0x1a]        ; 005a3124
    MOV dword ptr [EAX + 0x8],0x0       ; 005a3127 | DAT_00002424
    MOV ECX,dword ptr [EAX + 0x8]       ; 005a312e | DAT_00002424
    MOV dword ptr [EAX + 0x4],ECX       ; 005a3131
    MOV ECX,dword ptr [EAX + 0x4]       ; 005a3134
    MOV dword ptr [EAX],ECX             ; 005a3137
    MOV dword ptr [EDX + 0x8],0x0       ; 005a3139
    LEA EAX,[EBP + -0x22]               ; 005a3140
    FLD float ptr [EDX + 0x8]           ; 005a3143
    PUSH EAX                            ; 005a3146
    FST float ptr [EDX + 0x4]           ; 005a3147
    PUSH EBX                            ; 005a314a
    FSTP float ptr [EDX]                ; 005a314b
    CALL core_charactr.cpp_CCharacter_FUN_00428f40 ; 005a314d
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005a3152
    JMP 0x005a2b29                      ; 005a3155
        ;   XREF to: 005a2b29 (UNCONDITIONAL_JUMP)  ; LAB_005a2b29

