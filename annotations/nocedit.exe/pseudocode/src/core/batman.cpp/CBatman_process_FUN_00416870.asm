; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batman_cpp_CBatman_process_FUN_00416870(CBatman *this_ptr,float delta_time)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x188]:1  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined1       Stack[-0x14c]:1  local_14c
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined1       Stack[-0x134]:1  local_134
; undefined1       Stack[-0x128]:1  local_128
; undefined1       Stack[-0x11c]:1  local_11c
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined1       Stack[-0x104]:1  local_104
; undefined1       Stack[-0xf8]:1  local_f8
; undefined1       Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined1       Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined1       Stack[-0x98]:1  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined1       Stack[-0x80]:1  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined1       Stack[-0x74]:1  local_74
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
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
;   void* switchdataD_00416828 = 00416dd1
;   void* switchdataD_00416838 = 00416fc3
;   TerminatedCString s_s_confused_while_walking_00615849
;   TerminatedCString s_batman_disappear_wav_00615873
;   TerminatedCString s_batman_alert_wav_00615888
;   TerminatedCString s_CHero_00615899
;   TerminatedCString s_batman_disappear_wav_0061589f
;   TerminatedCString s_batman_attack_wav_006158b4
;   double DOUBLE_006158cd = 3.14159265350000
;   double DOUBLE_006158d5 = 0.523598775583333
;   double DOUBLE_006158dd = 32
;   double DOUBLE_006158e5 = 5
;   float FLOAT_0065a76c = 3.5
;   float FLOAT_0065a778 = 1
;   ... and 19 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_batman.cpp_CBatman_FUN_004167f0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   ... and 17 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416870
        ;   Label: core_batman.cpp_CBatman_process_FUN_00416870
    PUSH ESI                            ; 00416871
    PUSH EDI                            ; 00416872
    PUSH EBP                            ; 00416873
    MOV EBP,ESP                         ; 00416874
    SUB ESP,0x178                       ; 00416876
    SUB EBP,0x7a                        ; 0041687c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0041687f
    PUSH dword ptr [EBP + 0x92]         ; 00416885
    PUSH EBX                            ; 0041688b
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 0041688c
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00416891
    TEST EAX,EAX                        ; 00416894
    JZ 0x00416aaa                       ; 00416896
        ;   XREF to: 00416aaa (CONDITIONAL_JUMP)  ; LAB_00416aaa
    LEA EAX,[EBX + 0x23ac]              ; 0041689c
    MOV dword ptr [EAX + 0x8],0x0       ; 004168a2
    FLD float ptr [EBP + 0x92]          ; 004168a9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004168af
    MOV dword ptr [EAX + 0x4],EDX       ; 004168b2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004168b5
    MOV dword ptr [EAX],EDX             ; 004168b8
    FMUL float ptr [EBX + 0xbe24]       ; 004168ba
    LEA ESI,[EBX + 0x158]               ; 004168c0
    FSTP float ptr [EBP + 0x4e]         ; 004168c6
    FLD float ptr [EBP + 0x4e]          ; 004168c9
        ;   Label: LAB_004168c9
    FLDZ                                ; 004168cc
    FCOMPP                              ; 004168ce
    FNSTSW AX                           ; 004168d0
    SAHF                                ; 004168d2
    JC 0x00416ab2                       ; 004168d3
        ;   XREF to: 00416ab2 (CONDITIONAL_JUMP)  ; LAB_00416ab2
    FLD float ptr [EBX + 0xbe24]        ; 004168d9
    FLD float ptr [EBP + 0x92]          ; 004168df
    FMUL double ptr [0x006158cd]        ; 004168e5 | DOUBLE_006158cd
    FMULP                               ; 004168eb
    FLD float ptr [EBX + 0x23b4]        ; 004168ed
    LEA EDI,[EBX + 0x158]               ; 004168f3
    FSTP float ptr [EBX + 0x2434]       ; 004168f9
    PUSH EDI                            ; 004168ff
    FSTP float ptr [EBX + 0x2438]       ; 00416900
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00416906
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0041690b
    PUSH dword ptr [EBP + 0x92]         ; 0041690e
    MOV ESI,dword ptr [EAX + 0x24]      ; 00416914
    PUSH EBX                            ; 00416917
    MOV dword ptr [EBP + 0x62],ESI      ; 00416918
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 0041691b
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00416920
    TEST EAX,EAX                        ; 00416923
    JZ 0x0041739c                       ; 00416925
        ;   XREF to: 0041739c (CONDITIONAL_JUMP)  ; LAB_0041739c
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 0041692b
    CMP EAX,0x2                         ; 00416931
    JNC 0x00416af8                      ; 00416934
        ;   XREF to: 00416af8 (CONDITIONAL_JUMP)  ; LAB_00416af8
    CMP EAX,0x1                         ; 0041693a
    JNZ 0x00416b03                      ; 0041693d
        ;   XREF to: 00416b03 (CONDITIONAL_JUMP)  ; LAB_00416b03
    PUSH 0x1                            ; 00416943
        ;   Label: LAB_00416943
    PUSH 0x1                            ; 00416945
    LEA EAX,[EBX + 0x158]               ; 00416947
        ;   Label: LAB_00416947
    PUSH EAX                            ; 0041694d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041694e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00416953
        ;   Label: LAB_00416953
    LEA EAX,[EBX + 0x23ac]              ; 00416956
    MOV dword ptr [EAX + 0x8],0x0       ; 0041695c
    MOV EDX,dword ptr [EAX + 0x8]       ; 00416963
    MOV dword ptr [EAX + 0x4],EDX       ; 00416966
    MOV EDX,dword ptr [EAX + 0x4]       ; 00416969
    MOV dword ptr [EAX],EDX             ; 0041696c
    MOV EAX,EAX                         ; 0041696e
    FLD float ptr [EBX + 0xbe38]        ; 00416970
        ;   Label: caseD_4
    FLDZ                                ; 00416976
    FCOMPP                              ; 00416978
    FNSTSW AX                           ; 0041697a
    SAHF                                ; 0041697c
    JNC 0x00416991                      ; 0041697d
        ;   XREF to: 00416991 (CONDITIONAL_JUMP)  ; LAB_00416991
    FLD float ptr [EBX + 0xbe38]        ; 0041697f
    FSUB float ptr [EBP + 0x92]         ; 00416985
    FSTP float ptr [EBX + 0xbe38]       ; 0041698b
    PUSH EBX                            ; 00416991
        ;   Label: LAB_00416991
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0 ; 00416992
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00416997
    TEST EAX,EAX                        ; 0041699a
    JZ 0x00416a73                       ; 0041699c
        ;   XREF to: 00416a73 (CONDITIONAL_JUMP)  ; LAB_00416a73
    CMP dword ptr [EBP + 0x62],0x9      ; 004169a2
    JZ 0x00416a73                       ; 004169a6
        ;   XREF to: 00416a73 (CONDITIONAL_JUMP)  ; LAB_00416a73
    FLD float ptr [EBP + 0x92]          ; 004169ac
    FLD ST0                             ; 004169b2
    FMUL double ptr [0x006158dd]        ; 004169b4 | DOUBLE_006158dd
    FLD float ptr [EBX + 0x242c]        ; 004169ba
    FXCH                                ; 004169c0
    FSUBR ST0,ST1                       ; 004169c2
    LEA EDI,[EBX + 0x2428]              ; 004169c4
    FSTP ST1                            ; 004169ca
    FSTP float ptr [EBX + 0x242c]       ; 004169cc
    FLD float ptr [EDI]                 ; 004169d2
    FMUL ST1                            ; 004169d4
    FSTP float ptr [EBP + -0x56]        ; 004169d6
    FLD float ptr [EDI + 0x4]           ; 004169d9
    FMUL ST1                            ; 004169dc
    LEA EAX,[EBX + 0x241c]              ; 004169de
    FSTP float ptr [EBP + -0x52]        ; 004169e4
    FMUL float ptr [EDI + 0x8]          ; 004169e7
    LEA ESI,[EBX + 0x23ac]              ; 004169ea
    FLD float ptr [EBP + -0x56]         ; 004169f0
    FXCH                                ; 004169f3
    FSTP float ptr [EBP + -0x4e]        ; 004169f5
    FADD float ptr [EAX]                ; 004169f8
    FLD float ptr [EBP + -0x52]         ; 004169fa
    FXCH                                ; 004169fd
    FSTP float ptr [EBP + 0xffffff4a]   ; 004169ff
    FADD float ptr [EAX + 0x4]          ; 00416a05
    FLD float ptr [EBP + -0x4e]         ; 00416a08
    FXCH                                ; 00416a0b
    FSTP float ptr [EBP + 0xffffff4e]   ; 00416a0d
    FADD float ptr [EAX + 0x8]          ; 00416a13 | DAT_00002424
    FLD float ptr [EBP + 0xffffff4a]    ; 00416a16
    FXCH                                ; 00416a1c
    FSTP float ptr [EBP + 0xffffff52]   ; 00416a1e
    FADD float ptr [ESI]                ; 00416a24
    FLD float ptr [EBP + 0xffffff4e]    ; 00416a26
    FXCH                                ; 00416a2c
    FSTP float ptr [EBP + -0x4a]        ; 00416a2e
    FADD float ptr [ESI + 0x4]          ; 00416a31
    FLD float ptr [EBP + 0xffffff52]    ; 00416a34
    FXCH                                ; 00416a3a
    FSTP float ptr [EBP + -0x46]        ; 00416a3c
    FADD float ptr [ESI + 0x8]          ; 00416a3f
    FSTP float ptr [EBP + -0x42]        ; 00416a42
    MOV dword ptr [EAX + 0x8],0x0       ; 00416a45 | DAT_00002424
    MOV EDX,dword ptr [EAX + 0x8]       ; 00416a4c | DAT_00002424
    MOV dword ptr [EAX + 0x4],EDX       ; 00416a4f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00416a52
    MOV dword ptr [EAX],EDX             ; 00416a55
    MOV dword ptr [ESI + 0x8],0x0       ; 00416a57
    LEA EAX,[EBP + -0x4a]               ; 00416a5e
    FLD float ptr [ESI + 0x8]           ; 00416a61
    PUSH EAX                            ; 00416a64
    FST float ptr [ESI + 0x4]           ; 00416a65
    PUSH EBX                            ; 00416a68
    FSTP float ptr [ESI]                ; 00416a69
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 00416a6b
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00416a70
    CMP dword ptr [EBP + 0x62],0xd      ; 00416a73
        ;   Label: LAB_00416a73
    JZ 0x00416a83                       ; 00416a77
        ;   XREF to: 00416a83 (CONDITIONAL_JUMP)  ; LAB_00416a83
    MOV dword ptr [EBX + 0xbf58],0x0    ; 00416a79
    PUSH EBX                            ; 00416a83
        ;   Label: LAB_00416a83
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 00416a84
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00416a89
    LEA EAX,[EBX + 0x158]               ; 00416a8c
    PUSH EAX                            ; 00416a92
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 00416a93
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00416a98
    PUSH dword ptr [EBP + 0x92]         ; 00416a9b
    PUSH EBX                            ; 00416aa1
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 00416aa2
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time, float param_3)
    ADD ESP,0x8                         ; 00416aa7
    LEA ESP,[EBP + 0x7a]                ; 00416aaa
        ;   Label: LAB_00416aaa
    POP EBP                             ; 00416aad
    POP EDI                             ; 00416aae
    POP ESI                             ; 00416aaf
    POP EBX                             ; 00416ab0
    RET                                 ; 00416ab1
    LEA EAX,[EBP + 0x4e]                ; 00416ab2
        ;   Label: LAB_00416ab2
    PUSH EAX                            ; 00416ab5
    PUSH ESI                            ; 00416ab6
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 00416ab7
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 00416abc
    PUSH EAX                            ; 00416abf
    PUSH EBX                            ; 00416ac0
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 00416ac1
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, uint event_id)
    ADD ESP,0x8                         ; 00416ac6
    JMP 0x004168c9                      ; 00416ac9
        ;   XREF to: 004168c9 (UNCONDITIONAL_JUMP)  ; LAB_004168c9
    PUSH 0x1                            ; 00416ace
        ;   Label: LAB_00416ace
    PUSH 0x0                            ; 00416ad0
    LEA EAX,[EBX + 0x158]               ; 00416ad2
    PUSH EAX                            ; 00416ad8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00416ad9
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00416ade
    PUSH EBX                            ; 00416ae1
    MOV EAX,0x615849                    ; 00416ae2 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 00416ae7 | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x0066e8e0]                ; 00416ae8 | g_CConsolePtr
    PUSH EAX                            ; 00416aed | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00416aee
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x00416953                      ; 00416af3
        ;   XREF to: 00416953 (UNCONDITIONAL_JUMP)  ; LAB_00416953
    JBE 0x00416943                      ; 00416af8
        ;   XREF to: 00416943 (CONDITIONAL_JUMP)  ; LAB_00416943
        ;   Label: LAB_00416af8
    CMP EAX,0x3                         ; 00416afe
    JZ 0x00416ace                       ; 00416b01
        ;   XREF to: 00416ace (CONDITIONAL_JUMP)  ; LAB_00416ace
    PUSH 0x1                            ; 00416b03
        ;   Label: LAB_00416b03
    PUSH 0x0                            ; 00416b05
    JMP 0x00416947                      ; 00416b07
        ;   XREF to: 00416947 (UNCONDITIONAL_JUMP)  ; LAB_00416947
    FLD float ptr [EBX + 0xbf5c]        ; 00416b0c
        ;   Label: caseD_1
    FADD float ptr [EBP + 0x92]         ; 00416b12
    FST float ptr [EBX + 0xbf5c]        ; 00416b18
    FCOMP float ptr [0x0065a778]        ; 00416b1e | FLOAT_0065a778
    FNSTSW AX                           ; 00416b24
    SAHF                                ; 00416b26
    JBE 0x00416b3e                      ; 00416b27
        ;   XREF to: 00416b3e (CONDITIONAL_JUMP)  ; LAB_00416b3e
    MOV dword ptr [EBX + 0xbf58],0x2    ; 00416b29
    MOV EAX,[0x0065a778]                ; 00416b33 | FLOAT_0065a778
    MOV dword ptr [EBX + 0xbf5c],EAX    ; 00416b38
    MOV ECX,0x40400000                  ; 00416b3e
        ;   Label: LAB_00416b3e
    LEA EDI,[EBX + 0x158]               ; 00416b43
    XOR EDX,EDX                         ; 00416b49
    XOR ESI,ESI                         ; 00416b4b
    MOV dword ptr [EBP + -0x32],EDX     ; 00416b4d
    PUSH EDI                            ; 00416b50
    MOV dword ptr [EBP + -0x2e],ECX     ; 00416b51
    MOV dword ptr [EBP + -0x2a],EDX     ; 00416b54
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 00416b57
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00416b5c
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00416b5f
    MOV dword ptr [EBP + 0x6a],EAX      ; 00416b65
    TEST EDX,EDX                        ; 00416b68
    JLE 0x00416970                      ; 00416b6a
        ;   XREF to: 00416970 (CONDITIONAL_JUMP)  ; default
    PUSH ESI                            ; 00416b70
        ;   Label: LAB_00416b70
    LEA EAX,[EBP + 0xffffff6e]          ; 00416b71
    PUSH EAX                            ; 00416b77
    PUSH EDI                            ; 00416b78
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00416b79
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00416b7e
    PUSH EAX                            ; 00416b81
    LEA EAX,[EBP + 0xffffff3e]          ; 00416b82
    PUSH EAX                            ; 00416b88
    PUSH EBX                            ; 00416b89
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00416b8a
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00416b8f
    PUSH 0xffff                         ; 00416b92
    LEA EAX,[EBP + -0x32]               ; 00416b97
    PUSH EAX                            ; 00416b9a
    LEA EAX,[EBP + 0xffffff3e]          ; 00416b9b
    PUSH 0x3f000000                     ; 00416ba1
    PUSH EAX                            ; 00416ba6
    MOV EAX,[0x0067a3d0]                ; 00416ba7 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EAX                            ; 00416bac | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20 ; 00416bad
        ;   XREF to: 004c7b20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00416bb2
    INC ESI                             ; 00416bb5
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00416bb6
    ADD ESP,0x14                        ; 00416bbc
    CMP ESI,EDX                         ; 00416bbf
    JL 0x00416b70                       ; 00416bc1
        ;   XREF to: 00416b70 (CONDITIONAL_JUMP)  ; LAB_00416b70
    JMP 0x00416970                      ; 00416bc3
        ;   XREF to: 00416970 (UNCONDITIONAL_JUMP)  ; default
    MOV ECX,0x1                         ; 00416bc8
        ;   Label: caseD_2
    LEA EDI,[EBX + 0xbf60]              ; 00416bcd
    XOR ESI,ESI                         ; 00416bd3
    MOV dword ptr [EBP + 0x5a],ECX      ; 00416bd5
    MOV dword ptr [EBP + 0x72],ESI      ; 00416bd8
    MOV dword ptr [EBP + 0x6e],ESI      ; 00416bdb
    MOV EAX,[0x006810c8]                ; 00416bde | g_CDemonSetPtr
        ;   Label: LAB_00416bde
    MOV ESI,dword ptr [EBP + 0x72]      ; 00416be3
    CMP ESI,dword ptr [EAX + 0x14f098]  ; 00416be6 | g_CDemonSetInstance.character_count
    JGE 0x00416c66                      ; 00416bec
        ;   XREF to: 00416c66 (CONDITIONAL_JUMP)  ; LAB_00416c66
    ADD EAX,dword ptr [EBP + 0x6e]      ; 00416bf2
    MOV ESI,dword ptr [EAX + 0x14f09c]  ; 00416bf5 | g_CDemonSetInstance.characters[0] | DAT_03263318
    TEST ESI,ESI                        ; 00416bfb
    JNZ 0x00416c11                      ; 00416bfd
        ;   XREF to: 00416c11 (CONDITIONAL_JUMP)  ; LAB_00416c11
    MOV ESI,dword ptr [EBP + 0x72]      ; 00416bff
        ;   Label: LAB_00416bff
    MOV ECX,dword ptr [EBP + 0x6e]      ; 00416c02
    INC ESI                             ; 00416c05
    ADD ECX,0x4                         ; 00416c06
    MOV dword ptr [EBP + 0x72],ESI      ; 00416c09
    MOV dword ptr [EBP + 0x6e],ECX      ; 00416c0c
    JMP 0x00416bde                      ; 00416c0f
        ;   XREF to: 00416bde (UNCONDITIONAL_JUMP)  ; LAB_00416bde
    CMP ESI,EBX                         ; 00416c11
        ;   Label: LAB_00416c11
    JZ 0x00416bff                       ; 00416c13
        ;   XREF to: 00416bff (CONDITIONAL_JUMP)  ; LAB_00416bff
    PUSH ESI                            ; 00416c15
    MOV EAX,dword ptr [ESI + 0x154]     ; 00416c16
    CALL dword ptr [EAX + 0x120]        ; 00416c1c
    ADD ESP,0x4                         ; 00416c22
    TEST EAX,EAX                        ; 00416c25
    JG 0x00416bff                       ; 00416c27
        ;   XREF to: 00416bff (CONDITIONAL_JUMP)  ; LAB_00416bff
    FLD float ptr [ESI + 0x20]          ; 00416c29
    FSUB float ptr [EDI]                ; 00416c2c
    FSTP float ptr [EBP + 0x3a]         ; 00416c2e
    FLD float ptr [ESI + 0x24]          ; 00416c31
    FSUB float ptr [EDI + 0x4]          ; 00416c34
    FST float ptr [EBP + 0x3e]          ; 00416c37
    FMUL float ptr [EBP + 0x3e]         ; 00416c3a
    FLD float ptr [EBP + 0x3a]          ; 00416c3d
    FMUL ST0                            ; 00416c40
    FLD float ptr [ESI + 0x28]          ; 00416c42
    FSUB float ptr [EDI + 0x8]          ; 00416c45
    FXCH                                ; 00416c48
    FADDP ST2,ST0                       ; 00416c4a
    FST float ptr [EBP + 0x42]          ; 00416c4c
    FMUL float ptr [EBP + 0x42]         ; 00416c4f
    FADDP                               ; 00416c52
    FSQRT                               ; 00416c54
    FCOMP double ptr [0x006158e5]       ; 00416c56 | DOUBLE_006158e5
    FNSTSW AX                           ; 00416c5c
    SAHF                                ; 00416c5e
    JNC 0x00416bff                      ; 00416c5f
        ;   XREF to: 00416bff (CONDITIONAL_JUMP)  ; LAB_00416bff
    JMP 0x00416970                      ; 00416c61
        ;   XREF to: 00416970 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBP + 0x5a],0x0      ; 00416c66
        ;   Label: LAB_00416c66
    JZ 0x00416970                       ; 00416c6a
        ;   XREF to: 00416970 (CONDITIONAL_JUMP)  ; default
    FLD float ptr [0x0065a778]          ; 00416c70 | FLOAT_0065a778
    MOV dword ptr [EBX + 0xbf58],0x3    ; 00416c76
    LEA EAX,[EBX + 0x20]                ; 00416c80
    FSTP float ptr [EBX + 0xbf5c]       ; 00416c83
    MOV EDX,dword ptr [EDI]             ; 00416c89
    MOV dword ptr [EAX],EDX             ; 00416c8b
    MOV EDX,dword ptr [EDI + 0x4]       ; 00416c8d
    MOV dword ptr [EAX + 0x4],EDX       ; 00416c90
    MOV EDX,dword ptr [EDI + 0x8]       ; 00416c93
    MOV dword ptr [EAX + 0x8],EDX       ; 00416c96
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 00416c99
    TEST ESI,ESI                        ; 00416c9f
    JZ 0x00416cf2                       ; 00416ca1
        ;   XREF to: 00416cf2 (CONDITIONAL_JUMP)  ; LAB_00416cf2
    FLD float ptr [ESI + 0x20]          ; 00416ca3
    FSUB float ptr [EAX]                ; 00416ca6
    FSTP float ptr [EBP + -0x1a]        ; 00416ca8
    FLD float ptr [ESI + 0x24]          ; 00416cab
    FSUB float ptr [EAX + 0x4]          ; 00416cae
    FSTP float ptr [EBP + -0x16]        ; 00416cb1
    FLD float ptr [ESI + 0x28]          ; 00416cb4
    FSUB float ptr [EAX + 0x8]          ; 00416cb7
    LEA EAX,[EBP + -0x1a]               ; 00416cba
    PUSH EAX                            ; 00416cbd
    LEA EAX,[EBP + -0x26]               ; 00416cbe
    LEA ESI,[EBX + 0x30]                ; 00416cc1
    PUSH EAX                            ; 00416cc4
    FSTP float ptr [EBP + -0x12]        ; 00416cc5
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00416cc8
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 00416ccd
    CMP ESI,EAX                         ; 00416cd0
    JZ 0x00416ce4                       ; 00416cd2
        ;   XREF to: 00416ce4 (CONDITIONAL_JUMP)  ; LAB_00416ce4
    MOV EDX,dword ptr [EAX]             ; 00416cd4
    MOV dword ptr [ESI],EDX             ; 00416cd6
    MOV EDX,dword ptr [EAX + 0x4]       ; 00416cd8
    MOV dword ptr [ESI + 0x4],EDX       ; 00416cdb
    MOV EDX,dword ptr [EAX + 0x8]       ; 00416cde
    MOV dword ptr [ESI + 0x8],EDX       ; 00416ce1
    MOV dword ptr [EBX + 0x38],0x0      ; 00416ce4
        ;   Label: LAB_00416ce4
    MOV dword ptr [EBX + 0x30],0x0      ; 00416ceb
    PUSH 0x615873                       ; 00416cf2 | = "batman-disappear.wav"
        ;   Label: LAB_00416cf2
    MOV EAX,dword ptr [EBX + 0x154]     ; 00416cf7
    PUSH EBX                            ; 00416cfd
    CALL dword ptr [EAX + 0x24]         ; 00416cfe
    ADD ESP,0x8                         ; 00416d01
    JMP 0x00416970                      ; 00416d04
        ;   XREF to: 00416970 (UNCONDITIONAL_JUMP)  ; default
    MOV ECX,0x40400000                  ; 00416d09
        ;   Label: caseD_3
    PUSH EDI                            ; 00416d0e
    XOR EDX,EDX                         ; 00416d0f
    XOR ESI,ESI                         ; 00416d11
    MOV dword ptr [EBP + 0x22],EDX      ; 00416d13
    MOV dword ptr [EBP + 0x26],ECX      ; 00416d16
    MOV dword ptr [EBP + 0x2a],EDX      ; 00416d19
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 00416d1c
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00416d21
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00416d24
    MOV dword ptr [EBP + 0x66],EAX      ; 00416d2a
    TEST EDX,EDX                        ; 00416d2d
    JLE 0x00416d90                      ; 00416d2f
        ;   XREF to: 00416d90 (CONDITIONAL_JUMP)  ; LAB_00416d90
    PUSH ESI                            ; 00416d31
        ;   Label: LAB_00416d31
    LEA EAX,[EBP + 0xffffff62]          ; 00416d32
    PUSH EAX                            ; 00416d38
    PUSH EDI                            ; 00416d39
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00416d3a
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00416d3f
    PUSH EAX                            ; 00416d42
    LEA EAX,[EBP + 0xffffff56]          ; 00416d43
    PUSH EAX                            ; 00416d49
    PUSH EBX                            ; 00416d4a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00416d4b
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00416d50
    PUSH 0xffff                         ; 00416d53
    LEA EAX,[EBP + 0x22]                ; 00416d58
    PUSH EAX                            ; 00416d5b
    LEA EAX,[EBP + 0xffffff56]          ; 00416d5c
    PUSH 0x3f000000                     ; 00416d62
    PUSH EAX                            ; 00416d67
    MOV EDX,dword ptr [0x0067a3d0]      ; 00416d68 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EDX                            ; 00416d6e | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20 ; 00416d6f
        ;   XREF to: 004c7b20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    MOV EAX,dword ptr [EBP + 0x66]      ; 00416d74
    INC ESI                             ; 00416d77
    MOV ECX,dword ptr [EAX + 0x28558]   ; 00416d78
    ADD ESP,0x14                        ; 00416d7e
    CMP ESI,ECX                         ; 00416d81
    JL 0x00416d31                       ; 00416d83
        ;   XREF to: 00416d31 (CONDITIONAL_JUMP)  ; LAB_00416d31
    LEA EAX,[EAX]                       ; 00416d85
    LEA EDX,[EDX]                       ; 00416d8b | g_CFireEffectInstance
    MOV EBX,EBX                         ; 00416d8e
    FLD float ptr [EBX + 0xbf5c]        ; 00416d90
        ;   Label: LAB_00416d90
    FSUB float ptr [EBP + 0x92]         ; 00416d96
    FST float ptr [EBX + 0xbf5c]        ; 00416d9c
    FLDZ                                ; 00416da2
    FCOMPP                              ; 00416da4
    FNSTSW AX                           ; 00416da6
    SAHF                                ; 00416da8
    JBE 0x00416970                      ; 00416da9
        ;   XREF to: 00416970 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0xbf5c],0x0    ; 00416daf
    PUSH EBX                            ; 00416db9
    MOV dword ptr [EBX + 0xbf58],0x0    ; 00416dba
    CALL core_batman.cpp_CBatman_FUN_004167f0 ; 00416dc4
        ;   XREF to: 004167f0 (UNCONDITIONAL_CALL)  ; void core_batman.cpp_CBatman_FUN_004167f0(CBatman * this_ptr)
    ADD ESP,0x4                         ; 00416dc9
    JMP 0x00416970                      ; 00416dcc
        ;   XREF to: 00416970 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 00416dd1
        ;   Label: caseD_0
    PUSH 0x0                            ; 00416dd3
    PUSH EDI                            ; 00416dd5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00416dd6
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00416ddb
    JMP 0x00416970                      ; 00416dde
        ;   XREF to: 00416970 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0xbf58]    ; 00416de3
        ;   Label: caseD_d
    CMP EAX,0x3                         ; 00416de9
    JA 0x00416970                       ; 00416dec
        ;   XREF to: 00416970 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x416828]  ; 00416df2 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP dword ptr [EBX + 0xbe28],0x0    ; 00416df9
        ;   Label: caseD_8
    JNZ 0x00416970                      ; 00416e00
        ;   XREF to: 00416970 (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [EBX + 0xdc]      ; 00416e06
    TEST ESI,ESI                        ; 00416e0c
    JNZ 0x00416970                      ; 00416e0e
        ;   XREF to: 00416970 (CONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 00416e14
    LEA EAX,[EBP + -0x62]               ; 00416e15
    PUSH EAX                            ; 00416e18
    PUSH EDI                            ; 00416e19
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 00416e1a
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00416e1f
    PUSH EAX                            ; 00416e22
    LEA EAX,[EBP + 0x16]                ; 00416e23
    PUSH EAX                            ; 00416e26
    PUSH EBX                            ; 00416e27
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00416e28
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00416e2d
    PUSH ESI                            ; 00416e30
    LEA EAX,[EBP + 0x16]                ; 00416e31
    PUSH EAX                            ; 00416e34
    MOV EDI,dword ptr [0x0067b9a0]      ; 00416e35 | g_CGorePtr
    PUSH EDI                            ; 00416e3b | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ede30 ; 00416e3c
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004ede30(CGore * this_ptr)
    ADD ESP,0xc                         ; 00416e41
    MOV dword ptr [EBX + 0xbe28],0x1    ; 00416e44
    JMP 0x00416970                      ; 00416e4e
        ;   XREF to: 00416970 (UNCONDITIONAL_JUMP)  ; default
    PUSH dword ptr [EBP + 0x92]         ; 00416e53
        ;   Label: caseD_9
    MOV EAX,dword ptr [EBX + 0x154]     ; 00416e59
    PUSH EBX                            ; 00416e5f
    CALL dword ptr [EAX + 0x158]        ; 00416e60
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 00416e66
    ADD ESP,0x8                         ; 00416e6c
    TEST ECX,ECX                        ; 00416e6f
    JZ 0x00416ee8                       ; 00416e71
        ;   XREF to: 00416ee8 (CONDITIONAL_JUMP)  ; LAB_00416ee8
    PUSH 0x1                            ; 00416e73
        ;   Label: LAB_00416e73
    PUSH 0xb                            ; 00416e75
    LEA EAX,[EBX + 0x158]               ; 00416e77
    PUSH EAX                            ; 00416e7d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00416e7e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00416e83
    MOV EDI,dword ptr [EBX + 0xbf70]    ; 00416e86
    PUSH EDI                            ; 00416e8c
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00416e8d
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00416e92
    TEST EAX,EAX                        ; 00416e95
    JNZ 0x00416970                      ; 00416e97
        ;   XREF to: 00416970 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0xbf74]    ; 00416e9d
    PUSH EAX                            ; 00416ea3
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00416ea4
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00416ea9
    TEST EAX,EAX                        ; 00416eac
    JNZ 0x00416970                      ; 00416eae
        ;   XREF to: 00416970 (CONDITIONAL_JUMP)  ; default
    MOV EDX,dword ptr [EBX + 0xbf6c]    ; 00416eb4
    PUSH EDX                            ; 00416eba
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00416ebb
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00416ec0
    TEST EAX,EAX                        ; 00416ec3
    JNZ 0x00416970                      ; 00416ec5
        ;   XREF to: 00416970 (CONDITIONAL_JUMP)  ; default
    PUSH 0x615888                       ; 00416ecb | = "batman-alert.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00416ed0
    PUSH EBX                            ; 00416ed6
    CALL dword ptr [EAX + 0x24]         ; 00416ed7
    ADD ESP,0x8                         ; 00416eda
    MOV dword ptr [EBX + 0xbf6c],EAX    ; 00416edd
    JMP 0x00416970                      ; 00416ee3
        ;   XREF to: 00416970 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBX + 0xbebc]              ; 00416ee8
        ;   Label: LAB_00416ee8
    PUSH EAX                            ; 00416eee
    MOV ESI,dword ptr [0x006793d0]      ; 00416eef | g_CEventListPtr
    PUSH ESI                            ; 00416ef5 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00416ef6
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00416efb
    TEST EAX,EAX                        ; 00416efe
    JNZ 0x00416e73                      ; 00416f00
        ;   XREF to: 00416e73 (CONDITIONAL_JUMP)  ; LAB_00416e73
    JMP 0x00416970                      ; 00416f06
        ;   XREF to: 00416970 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [EBX + 0x2414]        ; 00416f0b
        ;   Label: caseD_b
    FLD1                                ; 00416f11
    FADDP                               ; 00416f13
    FLD float ptr [EBX + 0x24]          ; 00416f15
    FCOMPP                              ; 00416f18
    FNSTSW AX                           ; 00416f1a
    SAHF                                ; 00416f1c
    JNC 0x00416970                      ; 00416f1d
        ;   XREF to: 00416970 (CONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 00416f23
    PUSH 0xc                            ; 00416f25
    PUSH EDI                            ; 00416f27
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00416f28
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00416f2d
    JMP 0x00416970                      ; 00416f30
        ;   XREF to: 00416970 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0xffffff02]          ; 00416f35
        ;   Label: caseD_3
    PUSH EAX                            ; 00416f3b
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00416f3c
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00416f41
    PUSH 0x41700000                     ; 00416f44
    PUSH 0x40e00000                     ; 00416f49
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00416f4e
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00416f53
    ADD ESP,0x8                         ; 00416f56
    LEA EAX,[EBP + 0xffffff02]          ; 00416f59
    MOV ESI,dword ptr [0x008227c0]      ; 00416f5f | INT_008227c0
    PUSH EAX                            ; 00416f65
    LEA EAX,[ESI*0x4 + 0x0]             ; 00416f66
    MOV dword ptr [EBP + 0xffffff36],EBX ; 00416f6d
    SUB EAX,ESI                         ; 00416f73
    MOV dword ptr [EBP + 0xffffff3a],EBX ; 00416f75
    SHL EAX,0x4                         ; 00416f7b
    LEA ESI,[EBX + 0xfd8]               ; 00416f7e
    ADD EAX,ESI                         ; 00416f84
    PUSH 0x3ecccccd                     ; 00416f86
    PUSH EAX                            ; 00416f8b
    PUSH 0x3f87558                      ; 00416f8c | g_ZeroVector
    LEA EAX,[EBP + -0x7a]               ; 00416f91
    FLD float ptr [EBP + 0x76]          ; 00416f94
    PUSH EAX                            ; 00416f97
    FSTP float ptr [EBP + 0xffffff06]   ; 00416f98
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00416f9e
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00416fa3
    PUSH EAX                            ; 00416fa6
    LEA EAX,[EBP + -0x6e]               ; 00416fa7
    PUSH EAX                            ; 00416faa
    PUSH EBX                            ; 00416fab
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00416fac
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00416fb1
    PUSH EAX                            ; 00416fb4
    PUSH EBX                            ; 00416fb5
    CALL core_enemy.cpp_CEnemy_FUN_004a9880 ; 00416fb6
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9880(CEnemy * this_ptr)
    ADD ESP,0x10                        ; 00416fbb
    JMP 0x00416970                      ; 00416fbe
        ;   XREF to: 00416970 (UNCONDITIONAL_JUMP)  ; default
    PUSH dword ptr [EBP + 0x92]         ; 00416fc3
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x154]     ; 00416fc9
    PUSH EBX                            ; 00416fcf
    CALL dword ptr [EAX + 0x158]        ; 00416fd0
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 00416fd6
    ADD ESP,0x8                         ; 00416fdc
    TEST ESI,ESI                        ; 00416fdf
    JNZ 0x0041700c                      ; 00416fe1
        ;   XREF to: 0041700c (CONDITIONAL_JUMP)  ; LAB_0041700c
    PUSH dword ptr [EBP + 0x92]         ; 00416fe3
    PUSH EBX                            ; 00416fe9
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 00416fea
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 00416fef
    TEST EAX,EAX                        ; 00416ff2
    JZ 0x00416970                       ; 00416ff4
        ;   XREF to: 00416970 (CONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 00416ffa
    PUSH 0x1                            ; 00416ffc
    PUSH EDI                            ; 00416ffe
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00416fff
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00417004
    JMP 0x00416970                      ; 00417007
        ;   XREF to: 00416970 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x3e800000                     ; 0041700c
        ;   Label: LAB_0041700c
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00417011
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 00417016
    TEST EAX,EAX                        ; 00417019
    JNZ 0x004170ba                      ; 0041701b
        ;   XREF to: 004170ba (CONDITIONAL_JUMP)  ; LAB_004170ba
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 00417021
        ;   Label: LAB_00417021
    LEA EAX,[EBX + 0x20]                ; 00417027
    FLD float ptr [ESI + 0x20]          ; 0041702a
    FSUB float ptr [EAX]                ; 0041702d
    FSTP float ptr [EBP + -0x3e]        ; 0041702f
    FLD float ptr [ESI + 0x24]          ; 00417032
    FSUB float ptr [EAX + 0x4]          ; 00417035
    FST float ptr [EBP + -0x3a]         ; 00417038
    FMUL float ptr [EBP + -0x3a]        ; 0041703b
    FLD float ptr [EBP + -0x3e]         ; 0041703e
    FMUL ST0                            ; 00417041
    FLD float ptr [ESI + 0x28]          ; 00417043
    FSUB float ptr [EAX + 0x8]          ; 00417046
    FXCH                                ; 00417049
    FADDP ST2,ST0                       ; 0041704b
    FST float ptr [EBP + -0x36]         ; 0041704d
    FMUL float ptr [EBP + -0x36]        ; 00417050
    FADDP                               ; 00417053
    FSQRT                               ; 00417055
    FCOMP float ptr [0x0065a76c]        ; 00417057 | FLOAT_0065a76c
    FNSTSW AX                           ; 0041705d
    SAHF                                ; 0041705f
    JNC 0x004170ac                      ; 00417060
        ;   XREF to: 004170ac (CONDITIONAL_JUMP)  ; LAB_004170ac
    LEA EAX,[EBP + -0x3e]               ; 00417062
    PUSH EAX                            ; 00417065
    LEA EAX,[EBP + 0xa]                 ; 00417066
    PUSH EAX                            ; 00417069
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0041706a
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + 0xe]           ; 0041706f
    ADD ESP,0x8                         ; 00417072
    FSUB float ptr [EBX + 0x34]         ; 00417075
    SUB ESP,0x4                         ; 00417078
    FSTP float ptr [ESP]                ; 0041707b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 0041707e
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00417083
    FLD float ptr [EBP + 0x76]          ; 00417086
    FABS                                ; 00417089
    ADD ESP,0x4                         ; 0041708b
    FCOMP double ptr [0x006158d5]       ; 0041708e | DOUBLE_006158d5
    FNSTSW AX                           ; 00417094
    SAHF                                ; 00417096
    JNC 0x004170ac                      ; 00417097
        ;   XREF to: 004170ac (CONDITIONAL_JUMP)  ; LAB_004170ac
    PUSH 0x1                            ; 00417099
    PUSH 0x3                            ; 0041709b
    LEA EAX,[EBX + 0x158]               ; 0041709d
    PUSH EAX                            ; 004170a3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004170a4
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004170a9
    PUSH EBX                            ; 004170ac
        ;   Label: LAB_004170ac
    CALL core_batman.cpp_CBatman_FUN_004167f0 ; 004170ad
        ;   XREF to: 004167f0 (UNCONDITIONAL_CALL)  ; void core_batman.cpp_CBatman_FUN_004167f0(CBatman * this_ptr)
    ADD ESP,0x4                         ; 004170b2
    JMP 0x00416970                      ; 004170b5
        ;   XREF to: 00416970 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x615899                       ; 004170ba | = "CHero"
        ;   Label: LAB_004170ba
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 004170bf
    PUSH EDI                            ; 004170c5
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004170c6
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004170cb
    TEST EAX,EAX                        ; 004170ce
    JZ 0x00417021                       ; 004170d0
        ;   XREF to: 00417021 (CONDITIONAL_JUMP)  ; LAB_00417021
    XOR EDI,EDI                         ; 004170d6
    XOR ESI,ESI                         ; 004170d8
    MOV EAX,[0x006810c8]                ; 004170da | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_004170da
    CMP ESI,dword ptr [EAX + 0x150fdc]  ; 004170df | g_CDemonSetInstance.enemy_count
    JGE 0x00417111                      ; 004170e5
        ;   XREF to: 00417111 (CONDITIONAL_JUMP)  ; LAB_00417111
    MOV EDX,dword ptr [0x00822820]      ; 004170e7 | g_CBatmanClassInfo.name_hash
    PUSH EDX                            ; 004170ed
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0x150fe0] ; 004170ee | DAT_03265258 | DAT_0326525c
    PUSH ECX                            ; 004170f5
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004170f6
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004170fb
    TEST EAX,EAX                        ; 004170fe
    JNZ 0x00417108                      ; 00417100
        ;   XREF to: 00417108 (CONDITIONAL_JUMP)  ; LAB_00417108
    INC ESI                             ; 00417102
        ;   Label: LAB_00417102
    ADD EDI,0x4                         ; 00417103
    JMP 0x004170da                      ; 00417106
        ;   XREF to: 004170da (UNCONDITIONAL_JUMP)  ; LAB_004170da
    CMP dword ptr [EAX + 0xbf58],0x0    ; 00417108
        ;   Label: LAB_00417108
    JZ 0x00417102                       ; 0041710f
        ;   XREF to: 00417102 (CONDITIONAL_JUMP)  ; LAB_00417102
    MOV EAX,[0x006810c8]                ; 00417111 | g_CDemonSetPtr
        ;   Label: LAB_00417111
    CMP ESI,dword ptr [EAX + 0x150fdc]  ; 00417116 | g_CDemonSetInstance.enemy_count
    JNZ 0x00417021                      ; 0041711c
        ;   XREF to: 00417021 (CONDITIONAL_JUMP)  ; LAB_00417021
    PUSH 0x1                            ; 00417122
    PUSH 0xd                            ; 00417124
    LEA EAX,[EBX + 0x158]               ; 00417126
    PUSH EAX                            ; 0041712c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041712d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00417132
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 00417135
    LEA EAX,[EBX + 0xbf60]              ; 0041713b
    ADD ESI,0x20                        ; 00417141
    MOV dword ptr [EBX + 0xbf58],0x1    ; 00417144
    CMP EAX,ESI                         ; 0041714e
    JZ 0x00417162                       ; 00417150
        ;   XREF to: 00417162 (CONDITIONAL_JUMP)  ; LAB_00417162
    MOV EDX,dword ptr [ESI]             ; 00417152
    MOV dword ptr [EAX],EDX             ; 00417154
    MOV EDX,dword ptr [ESI + 0x4]       ; 00417156
    MOV dword ptr [EAX + 0x4],EDX       ; 00417159
    MOV EDX,dword ptr [ESI + 0x8]       ; 0041715c
    MOV dword ptr [EAX + 0x8],EDX       ; 0041715f
    PUSH 0x61589f                       ; 00417162 | = "batman-disappear.wav"
        ;   Label: LAB_00417162
    MOV ESI,0xd                         ; 00417167
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041716c
    PUSH EBX                            ; 00417172
    MOV dword ptr [EBX + 0xbf5c],0x0    ; 00417173
    MOV dword ptr [EBP + 0x62],ESI      ; 0041717d
    CALL dword ptr [EAX + 0x24]         ; 00417180
    ADD ESP,0x8                         ; 00417183
    JMP 0x00416970                      ; 00417186
        ;   XREF to: 00416970 (UNCONDITIONAL_JUMP)  ; default
    PUSH dword ptr [EBP + 0x92]         ; 0041718b
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 00417191
    PUSH EBX                            ; 00417197
    CALL dword ptr [EAX + 0x158]        ; 00417198
    ADD ESP,0x8                         ; 0041719e
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004171a1
    LEA EDI,[EBX + 0x158]               ; 004171a7
    TEST EAX,EAX                        ; 004171ad
    JNZ 0x004171e7                      ; 004171af
        ;   XREF to: 004171e7 (CONDITIONAL_JUMP)  ; LAB_004171e7
    PUSH dword ptr [EBP + 0x92]         ; 004171b1
    PUSH EBX                            ; 004171b7
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 004171b8
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 004171bd
    TEST EAX,EAX                        ; 004171c0
    JZ 0x004171d6                       ; 004171c2
        ;   XREF to: 004171d6 (CONDITIONAL_JUMP)  ; LAB_004171d6
    PUSH 0x1                            ; 004171c4
    PUSH 0x1                            ; 004171c6
    PUSH EDI                            ; 004171c8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004171c9
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004171ce
    JMP 0x00416970                      ; 004171d1
        ;   XREF to: 00416970 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004171d6
        ;   Label: LAB_004171d6
    PUSH EAX                            ; 004171d8
    PUSH EDI                            ; 004171d9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004171da
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004171df
    JMP 0x00416970                      ; 004171e2
        ;   XREF to: 00416970 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x0065a76c]                ; 004171e7 | FLOAT_0065a76c
        ;   Label: LAB_004171e7
    PUSH 0x3e32b8c2                     ; 004171ec
    MOV dword ptr [EBP + 0x5e],EAX      ; 004171f1
    LEA EAX,[EBX + 0x23ac]              ; 004171f4
    PUSH 0x3f000000                     ; 004171fa
    MOV dword ptr [EAX + 0x8],0x0       ; 004171ff
    XOR EDX,EDX                         ; 00417206
    MOV ECX,dword ptr [EAX + 0x8]       ; 00417208
    MOV dword ptr [EAX + 0x4],ECX       ; 0041720b
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041720e
    MOV dword ptr [EAX],ECX             ; 00417211
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00417213
    MOV dword ptr [EBP + 0xffffff7a],EDX ; 00417216
    MOV dword ptr [EBP + -0x7e],EAX     ; 0041721c
    LEA EAX,[EBP + 0xffffff7a]          ; 0041721f
    MOV dword ptr [EBP + 0xffffff7e],EDX ; 00417225
    PUSH EAX                            ; 0041722b
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 0041722c
    PUSH EAX                            ; 00417232
    MOV ESI,dword ptr [EAX + 0x154]     ; 00417233
    CALL dword ptr [ESI + 0xbc]         ; 00417239
    ADD ESP,0x4                         ; 0041723f
    PUSH EAX                            ; 00417242
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00417243
    ADD EAX,0x20                        ; 00417249
    PUSH EAX                            ; 0041724c
    PUSH EBX                            ; 0041724d
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 0041724e
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00417253
    TEST EAX,EAX                        ; 00417256
    JL 0x00416970                       ; 00417258
        ;   XREF to: 00416970 (CONDITIONAL_JUMP)  ; default
    LEA ESI,[EBX + 0x20]                ; 0041725e
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00417261
    FLD float ptr [ESI]                 ; 00417267
    FSUB float ptr [EAX + 0x20]         ; 00417269
    FSTP float ptr [EBP + -0x2]         ; 0041726c
    FLD float ptr [ESI + 0x4]           ; 0041726f
    FSUB float ptr [EAX + 0x24]         ; 00417272
    FLD float ptr [EBP + -0x2]          ; 00417275
    FXCH                                ; 00417278
    FSTP float ptr [EBP + 0x2]          ; 0041727a
    FLD float ptr [ESI + 0x8]           ; 0041727d
    FSUB float ptr [EAX + 0x28]         ; 00417280
    FXCH                                ; 00417283
    FMUL float ptr [EBP + -0x2]         ; 00417285
    FXCH                                ; 00417288
    FST float ptr [EBP + 0x6]           ; 0041728a
    FMUL float ptr [EBP + 0x6]          ; 0041728d
    XOR EAX,EAX                         ; 00417290
    FADDP                               ; 00417292
    MOV dword ptr [EBP + 0x2],EAX       ; 00417294
    FSQRT                               ; 00417297
    FSTP float ptr [EBP + 0x52]         ; 00417299
    MOV EAX,dword ptr [EBP + 0x52]      ; 0041729c
    FLD float ptr [EBP + 0x52]          ; 0041729f
    MOV dword ptr [EBP + 0x56],EAX      ; 004172a2
    FCOMP float ptr [EBP + 0x5e]        ; 004172a5
    FNSTSW AX                           ; 004172a8
    SAHF                                ; 004172aa
    JA 0x00417345                       ; 004172ab
        ;   XREF to: 00417345 (CONDITIONAL_JUMP)  ; LAB_00417345
    FLD float ptr [EBX + 0xbe38]        ; 004172b1
    FLDZ                                ; 004172b7
    FCOMPP                              ; 004172b9
    FNSTSW AX                           ; 004172bb
    SAHF                                ; 004172bd
    JC 0x00417345                       ; 004172be
        ;   XREF to: 00417345 (CONDITIONAL_JUMP)  ; LAB_00417345
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004172c4
    FLD float ptr [EAX + 0x20]          ; 004172ca
    FSUB float ptr [ESI]                ; 004172cd
    FSTP float ptr [EBP + 0x2e]         ; 004172cf
    FLD float ptr [EAX + 0x24]          ; 004172d2
    FSUB float ptr [ESI + 0x4]          ; 004172d5
    FSTP float ptr [EBP + 0x32]         ; 004172d8
    FLD float ptr [EAX + 0x28]          ; 004172db
    LEA EAX,[EBP + 0x2e]                ; 004172de
    PUSH EAX                            ; 004172e1
    LEA EAX,[EBP + -0xe]                ; 004172e2
    FSUB float ptr [ESI + 0x8]          ; 004172e5
    PUSH EAX                            ; 004172e8
    FSTP float ptr [EBP + 0x36]         ; 004172e9
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004172ec
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + -0xa]          ; 004172f1
    ADD ESP,0x8                         ; 004172f4
    FSUB float ptr [EBX + 0x34]         ; 004172f7
    SUB ESP,0x4                         ; 004172fa
    FSTP float ptr [ESP]                ; 004172fd
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00417300
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00417305
    FLD float ptr [EBP + 0x76]          ; 00417308
    FABS                                ; 0041730b
    ADD ESP,0x4                         ; 0041730d
    FCOMP double ptr [0x006158d5]       ; 00417310 | DOUBLE_006158d5
    FNSTSW AX                           ; 00417316
    SAHF                                ; 00417318
    JNC 0x00417345                      ; 00417319
        ;   XREF to: 00417345 (CONDITIONAL_JUMP)  ; LAB_00417345
    PUSH 0x1                            ; 0041731b
    PUSH 0x3                            ; 0041731d
    PUSH EDI                            ; 0041731f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00417320
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00417325
    MOV EDX,dword ptr [EBX + 0xbf70]    ; 00417328
    PUSH EDX                            ; 0041732e
    MOV dword ptr [EBX + 0xbe38],0x3f800000 ; 0041732f
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00417339
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 0041733e
    TEST EAX,EAX                        ; 00417341
    JZ 0x0041736f                       ; 00417343
        ;   XREF to: 0041736f (CONDITIONAL_JUMP)  ; LAB_0041736f
    FLD float ptr [EBP + 0x56]          ; 00417345
        ;   Label: LAB_00417345
    FCOMP float ptr [EBX + 0xbe34]      ; 00417348
    FNSTSW AX                           ; 0041734e
    SAHF                                ; 00417350
    JBE 0x00416970                      ; 00417351
        ;   XREF to: 00416970 (CONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 00417357
    PUSH 0x0                            ; 00417359
    LEA EAX,[EBX + 0x158]               ; 0041735b
    PUSH EAX                            ; 00417361
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00417362
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00417367
    JMP 0x00416970                      ; 0041736a
        ;   XREF to: 00416970 (UNCONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xbf74]    ; 0041736f
        ;   Label: LAB_0041736f
    PUSH ECX                            ; 00417375
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00417376
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 0041737b
    TEST EAX,EAX                        ; 0041737e
    JNZ 0x00417345                      ; 00417380
        ;   XREF to: 00417345 (CONDITIONAL_JUMP)  ; LAB_00417345
    PUSH 0x6158b4                       ; 00417382 | = "batman-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00417387
    PUSH EBX                            ; 0041738d
    CALL dword ptr [EAX + 0x24]         ; 0041738e
    ADD ESP,0x8                         ; 00417391
    MOV dword ptr [EBX + 0xbf74],EAX    ; 00417394
    JMP 0x00417345                      ; 0041739a
        ;   XREF to: 00417345 (UNCONDITIONAL_JUMP)  ; LAB_00417345
    CMP ESI,0xd                         ; 0041739c
        ;   Label: LAB_0041739c
    JA 0x00416970                       ; 0041739f
        ;   XREF to: 00416970 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [ESI*0x4 + 0x416838]  ; 004173a5 | caseD_0 | caseD_2 | caseD_3
        ;   Label: switchD

