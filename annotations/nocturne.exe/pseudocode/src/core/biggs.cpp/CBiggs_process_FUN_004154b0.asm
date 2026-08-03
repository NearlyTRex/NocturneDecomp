; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_biggs_cpp_CBiggs_process_FUN_004154b0(CBiggs *this_ptr,float delta_time)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; Referenced Globals:
;   TerminatedCString s_s_confused_while_walking_00578ded
;   double DOUBLE_00578e1e = 3.14159265350000
;   double DOUBLE_00578e26 = 32
;   float FLOAT_0059a5a0 = 4
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   undefined4 DAT_005b7650
;   CConsole g_CConsole_0077ad0c
;
; Called Functions:
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_00428c00
;   core_charactr.cpp_FUN_0042a150
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004154b0
        ;   Label: core_biggs.cpp_CBiggs_process_FUN_004154b0
    PUSH ESI                            ; 004154b1
    PUSH EBP                            ; 004154b2
    MOV EBP,ESP                         ; 004154b3
    SUB ESP,0x30                        ; 004154b5
    AND ESP,0xfffffff8                  ; 004154b8
    MOV EBX,dword ptr [EBP + 0x10]      ; 004154bb
    PUSH dword ptr [EBP + 0x14]         ; 004154be
    PUSH EBX                            ; 004154c1
    CALL core_charactr.cpp_FUN_004259f0 ; 004154c2
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_004259f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004154c7
    TEST EAX,EAX                        ; 004154ca
    JZ 0x004156f4                       ; 004154cc
        ;   XREF to: 004156f4 (CONDITIONAL_JUMP)  ; LAB_004156f4
    LEA EAX,[EBX + 0x23a4]              ; 004154d2
    MOV dword ptr [EAX + 0x8],0x0       ; 004154d8
    FLD float ptr [EBP + 0x14]          ; 004154df
    MOV EDX,dword ptr [EAX + 0x8]       ; 004154e2
    MOV dword ptr [EAX + 0x4],EDX       ; 004154e5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004154e8
    MOV dword ptr [EAX],EDX             ; 004154eb
    FMUL float ptr [EBX + 0xbc8c]       ; 004154ed
    LEA ESI,[EBX + 0x150]               ; 004154f3
    FSTP float ptr [ESP]                ; 004154f9
    FLD float ptr [ESP]                 ; 004154fc
        ;   Label: LAB_004154fc
    FLDZ                                ; 004154ff
    FCOMPP                              ; 00415501
    FNSTSW AX                           ; 00415503
    SAHF                                ; 00415505
    JC 0x004156fa                       ; 00415506
        ;   XREF to: 004156fa (CONDITIONAL_JUMP)  ; LAB_004156fa
    FLD float ptr [EBX + 0xbc8c]        ; 0041550c
    FLD float ptr [EBP + 0x14]          ; 00415512
    FMUL double ptr [0x00578e1e]        ; 00415515 | DOUBLE_00578e1e
    FMULP                               ; 0041551b
    FLD float ptr [EBX + 0x23ac]        ; 0041551d
    PUSH ESI                            ; 00415523
    FSTP float ptr [EBX + 0x242c]       ; 00415524
    FSTP float ptr [EBX + 0x2430]       ; 0041552a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00415530
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00415535
    PUSH dword ptr [EBP + 0x14]         ; 00415538
    PUSH EBX                            ; 0041553b
    CALL core_charactr.cpp_FUN_00428c00 ; 0041553c
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00428c00(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00415541
    TEST EAX,EAX                        ; 00415544
    JZ 0x0041558b                       ; 00415546
        ;   XREF to: 0041558b (CONDITIONAL_JUMP)  ; LAB_0041558b
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 00415548
    CMP EAX,0x2                         ; 0041554e
    JNC 0x00415739                      ; 00415551
        ;   XREF to: 00415739 (CONDITIONAL_JUMP)  ; LAB_00415739
    CMP EAX,0x1                         ; 00415557
    JNZ 0x00415744                      ; 0041555a
        ;   XREF to: 00415744 (CONDITIONAL_JUMP)  ; LAB_00415744
    PUSH 0x1                            ; 00415560
        ;   Label: LAB_00415560
    PUSH 0x1                            ; 00415562
    LEA EAX,[EBX + 0x150]               ; 00415564
        ;   Label: LAB_00415564
    PUSH EAX                            ; 0041556a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0041556b
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00415570
        ;   Label: LAB_00415570
    LEA EAX,[EBX + 0x23a4]              ; 00415573
    MOV dword ptr [EAX + 0x8],0x0       ; 00415579
    MOV EDX,dword ptr [EAX + 0x8]       ; 00415580
    MOV dword ptr [EAX + 0x4],EDX       ; 00415583
    MOV EDX,dword ptr [EAX + 0x4]       ; 00415586
    MOV dword ptr [EAX],EDX             ; 00415589
    FLD float ptr [EBX + 0xbca0]        ; 0041558b
        ;   Label: LAB_0041558b
    FLDZ                                ; 00415591
    FCOMPP                              ; 00415593
    FNSTSW AX                           ; 00415595
    SAHF                                ; 00415597
    JNC 0x004155a9                      ; 00415598
        ;   XREF to: 004155a9 (CONDITIONAL_JUMP)  ; LAB_004155a9
    FLD float ptr [EBX + 0xbca0]        ; 0041559a
    FSUB float ptr [EBP + 0x14]         ; 004155a0
    FSTP float ptr [EBX + 0xbca0]       ; 004155a3
    PUSH EBX                            ; 004155a9
        ;   Label: LAB_004155a9
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00425960 ; 004155aa
        ;   XREF to: 00425960 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00425960(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004155af
    TEST EAX,EAX                        ; 004155b2
    JZ 0x0041567f                       ; 004155b4
        ;   XREF to: 0041567f (CONDITIONAL_JUMP)  ; LAB_0041567f
    FLD float ptr [EBP + 0x14]          ; 004155ba
    FLD ST0                             ; 004155bd
    FMUL double ptr [0x00578e26]        ; 004155bf | DOUBLE_00578e26
    FLD float ptr [EBX + 0x2424]        ; 004155c5
    FXCH                                ; 004155cb
    FSUBR ST0,ST1                       ; 004155cd
    LEA EDX,[EBX + 0x2420]              ; 004155cf
    FSTP ST1                            ; 004155d5
    FSTP float ptr [EBX + 0x2424]       ; 004155d7
    FLD float ptr [EDX]                 ; 004155dd
    FMUL ST1                            ; 004155df
    FSTP float ptr [ESP + 0x4]          ; 004155e1
    FLD float ptr [EDX + 0x4]           ; 004155e5
    FMUL ST1                            ; 004155e8
    LEA ESI,[EBX + 0x2414]              ; 004155ea
    FSTP float ptr [ESP + 0x8]          ; 004155f0
    FMUL float ptr [EDX + 0x8]          ; 004155f4
    LEA EAX,[EBX + 0x23a4]              ; 004155f7
    FLD float ptr [ESP + 0x4]           ; 004155fd
    FXCH                                ; 00415601
    FSTP float ptr [ESP + 0xc]          ; 00415603
    FADD float ptr [ESI]                ; 00415607
    FLD float ptr [ESP + 0x8]           ; 00415609
    FXCH                                ; 0041560d
    FSTP float ptr [ESP + 0x1c]         ; 0041560f
    FADD float ptr [ESI + 0x4]          ; 00415613
    FLD float ptr [ESP + 0xc]           ; 00415616
    FXCH                                ; 0041561a
    FSTP float ptr [ESP + 0x20]         ; 0041561c
    FADD float ptr [ESI + 0x8]          ; 00415620
    FLD float ptr [ESP + 0x1c]          ; 00415623
    FXCH                                ; 00415627
    FSTP float ptr [ESP + 0x24]         ; 00415629
    FADD float ptr [EAX]                ; 0041562d
    FLD float ptr [ESP + 0x20]          ; 0041562f
    FXCH                                ; 00415633
    FSTP float ptr [ESP + 0x10]         ; 00415635
    FADD float ptr [EAX + 0x4]          ; 00415639
    FLD float ptr [ESP + 0x24]          ; 0041563c
    FXCH                                ; 00415640
    FSTP float ptr [ESP + 0x14]         ; 00415642
    FADD float ptr [EAX + 0x8]          ; 00415646
    FSTP float ptr [ESP + 0x18]         ; 00415649
    MOV dword ptr [ESI + 0x8],0x0       ; 0041564d
    MOV EDX,dword ptr [ESI + 0x8]       ; 00415654
    MOV dword ptr [ESI + 0x4],EDX       ; 00415657
    MOV EDX,dword ptr [ESI + 0x4]       ; 0041565a
    MOV dword ptr [ESI],EDX             ; 0041565d
    MOV dword ptr [EAX + 0x8],0x0       ; 0041565f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00415666
    MOV dword ptr [EAX + 0x4],EDX       ; 00415669
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041566c
    MOV dword ptr [EAX],EDX             ; 0041566f
    LEA EAX,[ESP + 0x10]                ; 00415671
    PUSH EAX                            ; 00415675
    PUSH EBX                            ; 00415676
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 00415677
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0041567c
    PUSH EBX                            ; 0041567f
        ;   Label: LAB_0041567f
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 00415680
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_004259a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00415685
    LEA EAX,[EBX + 0x150]               ; 00415688
    PUSH EAX                            ; 0041568e
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 0041568f
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00415694
    PUSH dword ptr [EBP + 0x14]         ; 00415697
    PUSH EBX                            ; 0041569a
    CALL core_charactr.cpp_FUN_0042a150 ; 0041569b
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042a150(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004156a0
    LEA EAX,[EBX + 0xcad4]              ; 004156a3
    PUSH EAX                            ; 004156a9
    MOV ECX,dword ptr [0x005b7650]      ; 004156aa | DAT_005b7650
    PUSH ECX                            ; 004156b0
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004156b1
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004156b6
    TEST EAX,EAX                        ; 004156b9
    JZ 0x004156d1                       ; 004156bb
        ;   XREF to: 004156d1 (CONDITIONAL_JUMP)  ; LAB_004156d1
    MOV dword ptr [EBX + 0xbea4],0x0    ; 004156bd
    MOV dword ptr [EBX + 0xbea0],0x1    ; 004156c7
    CMP dword ptr [EBX + 0xbea0],0x0    ; 004156d1
        ;   Label: LAB_004156d1
    JZ 0x004156f4                       ; 004156d8
        ;   XREF to: 004156f4 (CONDITIONAL_JUMP)  ; LAB_004156f4
    FLD float ptr [EBX + 0xbea4]        ; 004156da
    FADD float ptr [EBP + 0x14]         ; 004156e0
    FST float ptr [EBX + 0xbea4]        ; 004156e3
    FCOMP float ptr [0x0059a5a0]        ; 004156e9 | FLOAT_0059a5a0
    FNSTSW AX                           ; 004156ef
    SAHF                                ; 004156f1
    JA 0x0041574d                       ; 004156f2
        ;   XREF to: 0041574d (CONDITIONAL_JUMP)  ; LAB_0041574d
    MOV ESP,EBP                         ; 004156f4
        ;   Label: LAB_004156f4
    POP EBP                             ; 004156f6
    POP ESI                             ; 004156f7
    POP EBX                             ; 004156f8
    RET                                 ; 004156f9
    MOV EAX,ESP                         ; 004156fa
        ;   Label: LAB_004156fa
    PUSH EAX                            ; 004156fc
    PUSH ESI                            ; 004156fd
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 004156fe
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00415703
    PUSH EAX                            ; 00415706
    PUSH EBX                            ; 00415707
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 00415708
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042add0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0041570d
    JMP 0x004154fc                      ; 00415710
        ;   XREF to: 004154fc (UNCONDITIONAL_JUMP)  ; LAB_004154fc
    PUSH 0x1                            ; 00415715
        ;   Label: LAB_00415715
    PUSH 0x0                            ; 00415717
    PUSH ESI                            ; 00415719
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0041571a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041571f
    PUSH EBX                            ; 00415722
    PUSH 0x578ded                       ; 00415723 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x005ad350]      ; 00415728 | g_CConsole_PTR_005ad350
    PUSH EDX                            ; 0041572e | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0041572f
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    JMP 0x00415570                      ; 00415734
        ;   XREF to: 00415570 (UNCONDITIONAL_JUMP)  ; LAB_00415570
    JBE 0x00415560                      ; 00415739
        ;   XREF to: 00415560 (CONDITIONAL_JUMP)  ; LAB_00415560
        ;   Label: LAB_00415739
    CMP EAX,0x3                         ; 0041573f
    JZ 0x00415715                       ; 00415742
        ;   XREF to: 00415715 (CONDITIONAL_JUMP)  ; LAB_00415715
    PUSH 0x1                            ; 00415744
        ;   Label: LAB_00415744
    PUSH 0x0                            ; 00415746
    JMP 0x00415564                      ; 00415748
        ;   XREF to: 00415564 (UNCONDITIONAL_JUMP)  ; LAB_00415564
    MOV EAX,[0x0059a5a0]                ; 0041574d | FLOAT_0059a5a0
        ;   Label: LAB_0041574d
    MOV dword ptr [EBX + 0xbea4],EAX    ; 00415752
    MOV ESP,EBP                         ; 00415758
    POP EBP                             ; 0041575a
    POP ESI                             ; 0041575b
    POP EBX                             ; 0041575c
    RET                                 ; 0041575d

