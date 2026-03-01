; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_biggs_cpp_CBiggs_process_FUN_00418700(CBiggs *this_ptr,float delta_time)
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
;   TerminatedCString s_s_confused_while_walking_00615ada
;   double DOUBLE_00615b09 = 3.14159265350000
;   double DOUBLE_00615b11 = 32
;   float FLOAT_0065ac10 = 4
;   CConsole* g_CConsolePtr = 0083b1a4
;   CEventList* g_CEventListPtr = 02d05310
;   CConsole g_CConsoleInstance
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418700
        ;   Label: core_biggs.cpp_CBiggs_process_FUN_00418700
    PUSH ESI                            ; 00418701
    PUSH EBP                            ; 00418702
    MOV EBP,ESP                         ; 00418703
    SUB ESP,0x30                        ; 00418705
    AND ESP,0xfffffff8                  ; 00418708
    MOV EBX,dword ptr [EBP + 0x10]      ; 0041870b
    PUSH dword ptr [EBP + 0x14]         ; 0041870e
    PUSH EBX                            ; 00418711
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 00418712
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00418717
    TEST EAX,EAX                        ; 0041871a
    JZ 0x00418944                       ; 0041871c
        ;   XREF to: 00418944 (CONDITIONAL_JUMP)  ; LAB_00418944
    LEA EAX,[EBX + 0x23ac]              ; 00418722
    MOV dword ptr [EAX + 0x8],0x0       ; 00418728
    FLD float ptr [EBP + 0x14]          ; 0041872f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00418732
    MOV dword ptr [EAX + 0x4],EDX       ; 00418735
    MOV EDX,dword ptr [EAX + 0x4]       ; 00418738
    MOV dword ptr [EAX],EDX             ; 0041873b
    FMUL float ptr [EBX + 0xbe24]       ; 0041873d
    LEA ESI,[EBX + 0x158]               ; 00418743
    FSTP float ptr [ESP]                ; 00418749
    FLD float ptr [ESP]                 ; 0041874c
        ;   Label: LAB_0041874c
    FLDZ                                ; 0041874f
    FCOMPP                              ; 00418751
    FNSTSW AX                           ; 00418753
    SAHF                                ; 00418755
    JC 0x0041894a                       ; 00418756
        ;   XREF to: 0041894a (CONDITIONAL_JUMP)  ; LAB_0041894a
    FLD float ptr [EBX + 0xbe24]        ; 0041875c
    FLD float ptr [EBP + 0x14]          ; 00418762
    FMUL double ptr [0x00615b09]        ; 00418765 | DOUBLE_00615b09
    FMULP                               ; 0041876b
    FLD float ptr [EBX + 0x23b4]        ; 0041876d
    PUSH ESI                            ; 00418773
    FSTP float ptr [EBX + 0x2434]       ; 00418774
    FSTP float ptr [EBX + 0x2438]       ; 0041877a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00418780
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00418785
    PUSH dword ptr [EBP + 0x14]         ; 00418788
    PUSH EBX                            ; 0041878b
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 0041878c
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00418791
    TEST EAX,EAX                        ; 00418794
    JZ 0x004187db                       ; 00418796
        ;   XREF to: 004187db (CONDITIONAL_JUMP)  ; LAB_004187db
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 00418798
    CMP EAX,0x2                         ; 0041879e
    JNC 0x00418989                      ; 004187a1
        ;   XREF to: 00418989 (CONDITIONAL_JUMP)  ; LAB_00418989
    CMP EAX,0x1                         ; 004187a7
    JNZ 0x00418994                      ; 004187aa
        ;   XREF to: 00418994 (CONDITIONAL_JUMP)  ; LAB_00418994
    PUSH 0x1                            ; 004187b0
        ;   Label: LAB_004187b0
    PUSH 0x1                            ; 004187b2
    LEA EAX,[EBX + 0x158]               ; 004187b4
        ;   Label: LAB_004187b4
    PUSH EAX                            ; 004187ba
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004187bb
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004187c0
        ;   Label: LAB_004187c0
    LEA EAX,[EBX + 0x23ac]              ; 004187c3
    MOV dword ptr [EAX + 0x8],0x0       ; 004187c9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004187d0
    MOV dword ptr [EAX + 0x4],EDX       ; 004187d3
    MOV EDX,dword ptr [EAX + 0x4]       ; 004187d6
    MOV dword ptr [EAX],EDX             ; 004187d9
    FLD float ptr [EBX + 0xbe38]        ; 004187db
        ;   Label: LAB_004187db
    FLDZ                                ; 004187e1
    FCOMPP                              ; 004187e3
    FNSTSW AX                           ; 004187e5
    SAHF                                ; 004187e7
    JNC 0x004187f9                      ; 004187e8
        ;   XREF to: 004187f9 (CONDITIONAL_JUMP)  ; LAB_004187f9
    FLD float ptr [EBX + 0xbe38]        ; 004187ea
    FSUB float ptr [EBP + 0x14]         ; 004187f0
    FSTP float ptr [EBX + 0xbe38]       ; 004187f3
    PUSH EBX                            ; 004187f9
        ;   Label: LAB_004187f9
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0 ; 004187fa
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004187ff
    TEST EAX,EAX                        ; 00418802
    JZ 0x004188cf                       ; 00418804
        ;   XREF to: 004188cf (CONDITIONAL_JUMP)  ; LAB_004188cf
    FLD float ptr [EBP + 0x14]          ; 0041880a
    FLD ST0                             ; 0041880d
    FMUL double ptr [0x00615b11]        ; 0041880f | DOUBLE_00615b11
    FLD float ptr [EBX + 0x242c]        ; 00418815
    FXCH                                ; 0041881b
    FSUBR ST0,ST1                       ; 0041881d
    LEA EDX,[EBX + 0x2428]              ; 0041881f
    FSTP ST1                            ; 00418825
    FSTP float ptr [EBX + 0x242c]       ; 00418827
    FLD float ptr [EDX]                 ; 0041882d
    FMUL ST1                            ; 0041882f
    FSTP float ptr [ESP + 0x4]          ; 00418831
    FLD float ptr [EDX + 0x4]           ; 00418835
    FMUL ST1                            ; 00418838
    LEA ESI,[EBX + 0x241c]              ; 0041883a
    FSTP float ptr [ESP + 0x8]          ; 00418840
    FMUL float ptr [EDX + 0x8]          ; 00418844
    LEA EAX,[EBX + 0x23ac]              ; 00418847
    FLD float ptr [ESP + 0x4]           ; 0041884d
    FXCH                                ; 00418851
    FSTP float ptr [ESP + 0xc]          ; 00418853
    FADD float ptr [ESI]                ; 00418857
    FLD float ptr [ESP + 0x8]           ; 00418859
    FXCH                                ; 0041885d
    FSTP float ptr [ESP + 0x1c]         ; 0041885f
    FADD float ptr [ESI + 0x4]          ; 00418863
    FLD float ptr [ESP + 0xc]           ; 00418866
    FXCH                                ; 0041886a
    FSTP float ptr [ESP + 0x20]         ; 0041886c
    FADD float ptr [ESI + 0x8]          ; 00418870
    FLD float ptr [ESP + 0x1c]          ; 00418873
    FXCH                                ; 00418877
    FSTP float ptr [ESP + 0x24]         ; 00418879
    FADD float ptr [EAX]                ; 0041887d
    FLD float ptr [ESP + 0x20]          ; 0041887f
    FXCH                                ; 00418883
    FSTP float ptr [ESP + 0x10]         ; 00418885
    FADD float ptr [EAX + 0x4]          ; 00418889
    FLD float ptr [ESP + 0x24]          ; 0041888c
    FXCH                                ; 00418890
    FSTP float ptr [ESP + 0x14]         ; 00418892
    FADD float ptr [EAX + 0x8]          ; 00418896
    FSTP float ptr [ESP + 0x18]         ; 00418899
    MOV dword ptr [ESI + 0x8],0x0       ; 0041889d
    MOV EDX,dword ptr [ESI + 0x8]       ; 004188a4
    MOV dword ptr [ESI + 0x4],EDX       ; 004188a7
    MOV EDX,dword ptr [ESI + 0x4]       ; 004188aa
    MOV dword ptr [ESI],EDX             ; 004188ad
    MOV dword ptr [EAX + 0x8],0x0       ; 004188af
    MOV EDX,dword ptr [EAX + 0x8]       ; 004188b6
    MOV dword ptr [EAX + 0x4],EDX       ; 004188b9
    MOV EDX,dword ptr [EAX + 0x4]       ; 004188bc
    MOV dword ptr [EAX],EDX             ; 004188bf
    LEA EAX,[ESP + 0x10]                ; 004188c1
    PUSH EAX                            ; 004188c5
    PUSH EBX                            ; 004188c6
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 004188c7
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004188cc
    PUSH EBX                            ; 004188cf
        ;   Label: LAB_004188cf
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 004188d0
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004188d5
    LEA EAX,[EBX + 0x158]               ; 004188d8
    PUSH EAX                            ; 004188de
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 004188df
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004188e4
    PUSH dword ptr [EBP + 0x14]         ; 004188e7
    PUSH EBX                            ; 004188ea
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 004188eb
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004188f0
    LEA EAX,[EBX + 0xcc6c]              ; 004188f3
    PUSH EAX                            ; 004188f9
    MOV ECX,dword ptr [0x006793d0]      ; 004188fa | g_CEventListInstance | g_CEventListPtr
    PUSH ECX                            ; 00418900 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00418901
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00418906
    TEST EAX,EAX                        ; 00418909
    JZ 0x00418921                       ; 0041890b
        ;   XREF to: 00418921 (CONDITIONAL_JUMP)  ; LAB_00418921
    MOV dword ptr [EBX + 0xc03c],0x0    ; 0041890d
    MOV dword ptr [EBX + 0xc038],0x1    ; 00418917
    CMP dword ptr [EBX + 0xc038],0x0    ; 00418921
        ;   Label: LAB_00418921
    JZ 0x00418944                       ; 00418928
        ;   XREF to: 00418944 (CONDITIONAL_JUMP)  ; LAB_00418944
    FLD float ptr [EBX + 0xc03c]        ; 0041892a
    FADD float ptr [EBP + 0x14]         ; 00418930
    FST float ptr [EBX + 0xc03c]        ; 00418933
    FCOMP float ptr [0x0065ac10]        ; 00418939 | FLOAT_0065ac10
    FNSTSW AX                           ; 0041893f
    SAHF                                ; 00418941
    JA 0x0041899d                       ; 00418942
        ;   XREF to: 0041899d (CONDITIONAL_JUMP)  ; LAB_0041899d
    MOV ESP,EBP                         ; 00418944
        ;   Label: LAB_00418944
    POP EBP                             ; 00418946
    POP ESI                             ; 00418947
    POP EBX                             ; 00418948
    RET                                 ; 00418949
    MOV EAX,ESP                         ; 0041894a
        ;   Label: LAB_0041894a
    PUSH EAX                            ; 0041894c
    PUSH ESI                            ; 0041894d
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 0041894e
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 00418953
    PUSH EAX                            ; 00418956
    PUSH EBX                            ; 00418957
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 00418958
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0041895d
    JMP 0x0041874c                      ; 00418960
        ;   XREF to: 0041874c (UNCONDITIONAL_JUMP)  ; LAB_0041874c
    PUSH 0x1                            ; 00418965
        ;   Label: LAB_00418965
    PUSH 0x0                            ; 00418967
    PUSH ESI                            ; 00418969
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041896a
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041896f
    PUSH EBX                            ; 00418972
    PUSH 0x615ada                       ; 00418973 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x0066e8e0]      ; 00418978 | g_CConsoleInstance | g_CConsolePtr
    PUSH EDX                            ; 0041897e | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0041897f
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x004187c0                      ; 00418984
        ;   XREF to: 004187c0 (UNCONDITIONAL_JUMP)  ; LAB_004187c0
    JBE 0x004187b0                      ; 00418989
        ;   XREF to: 004187b0 (CONDITIONAL_JUMP)  ; LAB_004187b0
        ;   Label: LAB_00418989
    CMP EAX,0x3                         ; 0041898f
    JZ 0x00418965                       ; 00418992
        ;   XREF to: 00418965 (CONDITIONAL_JUMP)  ; LAB_00418965
    PUSH 0x1                            ; 00418994
        ;   Label: LAB_00418994
    PUSH 0x0                            ; 00418996
    JMP 0x004187b4                      ; 00418998
        ;   XREF to: 004187b4 (UNCONDITIONAL_JUMP)  ; LAB_004187b4
    MOV EAX,[0x0065ac10]                ; 0041899d | FLOAT_0065ac10
        ;   Label: LAB_0041899d
    MOV dword ptr [EBX + 0xc03c],EAX    ; 004189a2
    MOV ESP,EBP                         ; 004189a8
    POP EBP                             ; 004189aa
    POP ESI                             ; 004189ab
    POP EBX                             ; 004189ac
    RET                                 ; 004189ad

