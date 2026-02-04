; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004f6f20(CHotDemon *this_ptr,float delta_time)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x10c]:1  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined1       Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined1       Stack[-0xb8]:1  local_b8
; undefined1       Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined1       Stack[-0x88]:1  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined1       Stack[-0x4c]:1  local_4c
; undefined1       Stack[-0x40]:1  local_40
; undefined4       Stack[-0x3c]:4  local_3c
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
;   void* switchdataD_004f6ee0 = 004f7267
;   TerminatedCString s_s_confused_while_walking_0062f46c
;   TerminatedCString s_hotdemon_attack_wav_0062f496
;   TerminatedCString s_hotdemon_attack_wav_0062f4aa
;   double DOUBLE_0062f4c0 = 3.14159265350000
;   double DOUBLE_0062f4c8 = 0.523598775583333
;   double DOUBLE_0062f4d0 = 32
;   float FLOAT_0065fccc = 2
;   float FLOAT_0065fcd8 = 10
;   CConsole* g_CConsolePtr = 0083b1a4
;   CGore* g_CGorePtr = 02d83364
;   CConsole g_ConsolePtr
;   CGore g_CGoreInstance
;   int INT_02db88d0
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
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
;   core_enemy.cpp_CEnemy_FUN_004a9fd0
;   core_gore.cpp_FUN_004ede30
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6f20
        ;   Label: core_hotdemon.cpp_CHotDemon_process_FUN_004f6f20
    PUSH ESI                            ; 004f6f21
    PUSH EDI                            ; 004f6f22
    PUSH EBP                            ; 004f6f23
    MOV EBP,ESP                         ; 004f6f24
    SUB ESP,0xfc                        ; 004f6f26
    SUB EBP,0x7a                        ; 004f6f2c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004f6f2f
    PUSH dword ptr [EBP + 0x92]         ; 004f6f35
    PUSH EBX                            ; 004f6f3b
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 004f6f3c
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004f6f41
    TEST EAX,EAX                        ; 004f6f44
    JZ 0x004f7125                       ; 004f6f46
        ;   XREF to: 004f7125 (CONDITIONAL_JUMP)  ; LAB_004f7125
    LEA EAX,[EBX + 0x23ac]              ; 004f6f4c
    MOV dword ptr [EAX + 0x8],0x0       ; 004f6f52
    FLD float ptr [EBP + 0x92]          ; 004f6f59
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f6f5f
    MOV dword ptr [EAX + 0x4],EDX       ; 004f6f62
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f6f65
    MOV dword ptr [EAX],EDX             ; 004f6f68
    FMUL float ptr [EBX + 0xbe24]       ; 004f6f6a
    LEA ESI,[EBX + 0x158]               ; 004f6f70
    FSTP float ptr [EBP + 0x5e]         ; 004f6f76
    FLD float ptr [EBP + 0x5e]          ; 004f6f79
        ;   Label: LAB_004f6f79
    FLDZ                                ; 004f6f7c
    FCOMPP                              ; 004f6f7e
    FNSTSW AX                           ; 004f6f80
    SAHF                                ; 004f6f82
    JC 0x004f712d                       ; 004f6f83
        ;   XREF to: 004f712d (CONDITIONAL_JUMP)  ; LAB_004f712d
    FLD float ptr [EBX + 0xbe24]        ; 004f6f89
    FLD float ptr [EBP + 0x92]          ; 004f6f8f
    FMUL double ptr [0x0062f4c0]        ; 004f6f95 | DOUBLE_0062f4c0
    FMULP                               ; 004f6f9b
    FLD float ptr [EBX + 0x23b4]        ; 004f6f9d
    PUSH ESI                            ; 004f6fa3
    FSTP float ptr [EBX + 0x2434]       ; 004f6fa4
    FSTP float ptr [EBX + 0x2438]       ; 004f6faa
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f6fb0
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004f6fb5
    PUSH dword ptr [EBP + 0x92]         ; 004f6fb8
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f6fbe
    PUSH EBX                            ; 004f6fc1
    MOV EDI,EAX                         ; 004f6fc2
    CALL core_charactr.cpp_CCharacter_FUN_0042ca70 ; 004f6fc4
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ca70(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004f6fc9
    TEST EAX,EAX                        ; 004f6fcc
    JZ 0x004f7649                       ; 004f6fce
        ;   XREF to: 004f7649 (CONDITIONAL_JUMP)  ; LAB_004f7649
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 004f6fd4
    CMP EAX,0x2                         ; 004f6fda
    JNC 0x004f716d                      ; 004f6fdd
        ;   XREF to: 004f716d (CONDITIONAL_JUMP)  ; LAB_004f716d
    CMP EAX,0x1                         ; 004f6fe3
    JNZ 0x004f7178                      ; 004f6fe6
        ;   XREF to: 004f7178 (CONDITIONAL_JUMP)  ; LAB_004f7178
    PUSH 0x1                            ; 004f6fec
        ;   Label: LAB_004f6fec
    PUSH 0x1                            ; 004f6fee
    LEA EAX,[EBX + 0x158]               ; 004f6ff0
        ;   Label: LAB_004f6ff0
    PUSH EAX                            ; 004f6ff6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f6ff7
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f6ffc
        ;   Label: LAB_004f6ffc
    LEA EAX,[EBX + 0x23ac]              ; 004f6fff
    MOV dword ptr [EAX + 0x8],0x0       ; 004f7005
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f700c
    MOV dword ptr [EAX + 0x4],EDX       ; 004f700f
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f7012
    MOV dword ptr [EAX],EDX             ; 004f7015
    FLD float ptr [EBX + 0xbe38]        ; 004f7017
        ;   Label: caseD_e
    FLDZ                                ; 004f701d
    FCOMPP                              ; 004f701f
    FNSTSW AX                           ; 004f7021
    SAHF                                ; 004f7023
    JNC 0x004f7038                      ; 004f7024
        ;   XREF to: 004f7038 (CONDITIONAL_JUMP)  ; LAB_004f7038
    FLD float ptr [EBX + 0xbe38]        ; 004f7026
    FSUB float ptr [EBP + 0x92]         ; 004f702c
    FSTP float ptr [EBX + 0xbe38]       ; 004f7032
    PUSH EBX                            ; 004f7038
        ;   Label: LAB_004f7038
    CALL core_charactr.cpp_CCharacter_FUN_004297e0 ; 004f7039
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_004297e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f703e
    TEST EAX,EAX                        ; 004f7041
    JZ 0x004f70fe                       ; 004f7043
        ;   XREF to: 004f70fe (CONDITIONAL_JUMP)  ; LAB_004f70fe
    FLD float ptr [EBP + 0x92]          ; 004f7049
    FLD ST0                             ; 004f704f
    FMUL double ptr [0x0062f4d0]        ; 004f7051 | DOUBLE_0062f4d0
    FLD float ptr [EBX + 0x242c]        ; 004f7057
    FXCH                                ; 004f705d
    FSUBR ST0,ST1                       ; 004f705f
    LEA EDX,[EBX + 0x2428]              ; 004f7061
    FSTP ST1                            ; 004f7067
    FSTP float ptr [EBX + 0x242c]       ; 004f7069
    FLD float ptr [EDX]                 ; 004f706f
    FMUL ST1                            ; 004f7071
    FSTP float ptr [EBP + 0x32]         ; 004f7073
    FLD float ptr [EDX + 0x4]           ; 004f7076
    FMUL ST1                            ; 004f7079
    LEA EAX,[EBX + 0x241c]              ; 004f707b
    FSTP float ptr [EBP + 0x36]         ; 004f7081
    FMUL float ptr [EDX + 0x8]          ; 004f7084
    LEA ESI,[EBX + 0x23ac]              ; 004f7087
    FLD float ptr [EBP + 0x32]          ; 004f708d
    FXCH                                ; 004f7090
    FSTP float ptr [EBP + 0x3a]         ; 004f7092
    FADD float ptr [EAX]                ; 004f7095
    FLD float ptr [EBP + 0x36]          ; 004f7097
    FXCH                                ; 004f709a
    FSTP float ptr [EBP + 0xe]          ; 004f709c
    FADD float ptr [EAX + 0x4]          ; 004f709f
    FLD float ptr [EBP + 0x3a]          ; 004f70a2
    FXCH                                ; 004f70a5
    FSTP float ptr [EBP + 0x12]         ; 004f70a7
    FADD float ptr [EAX + 0x8]          ; 004f70aa | DAT_00002424
    FLD float ptr [EBP + 0xe]           ; 004f70ad
    FXCH                                ; 004f70b0
    FSTP float ptr [EBP + 0x16]         ; 004f70b2
    FADD float ptr [ESI]                ; 004f70b5
    FLD float ptr [EBP + 0x12]          ; 004f70b7
    FXCH                                ; 004f70ba
    FSTP float ptr [EBP + -0x16]        ; 004f70bc
    FADD float ptr [ESI + 0x4]          ; 004f70bf
    FLD float ptr [EBP + 0x16]          ; 004f70c2
    FXCH                                ; 004f70c5
    FSTP float ptr [EBP + -0x12]        ; 004f70c7
    FADD float ptr [ESI + 0x8]          ; 004f70ca
    FSTP float ptr [EBP + -0xe]         ; 004f70cd
    MOV dword ptr [EAX + 0x8],0x0       ; 004f70d0 | DAT_00002424
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f70d7 | DAT_00002424
    MOV dword ptr [EAX + 0x4],EDX       ; 004f70da
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f70dd
    MOV dword ptr [EAX],EDX             ; 004f70e0
    MOV dword ptr [ESI + 0x8],0x0       ; 004f70e2
    LEA EAX,[EBP + -0x16]               ; 004f70e9
    FLD float ptr [ESI + 0x8]           ; 004f70ec
    PUSH EAX                            ; 004f70ef
    FST float ptr [ESI + 0x4]           ; 004f70f0
    PUSH EBX                            ; 004f70f3
    FSTP float ptr [ESI]                ; 004f70f4
    CALL core_charactr.cpp_CCharacter_FUN_00428f40 ; 004f70f6
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004f70fb
    PUSH EBX                            ; 004f70fe
        ;   Label: LAB_004f70fe
    CALL core_charactr.cpp_CCharacter_FUN_00429820 ; 004f70ff
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f7104
    LEA EAX,[EBX + 0x158]               ; 004f7107
    PUSH EAX                            ; 004f710d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 004f710e
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f7113
    PUSH dword ptr [EBP + 0x92]         ; 004f7116
    PUSH EBX                            ; 004f711c
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 004f711d
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004f7122
    LEA ESP,[EBP + 0x7a]                ; 004f7125
        ;   Label: LAB_004f7125
    POP EBP                             ; 004f7128
    POP EDI                             ; 004f7129
    POP ESI                             ; 004f712a
    POP EBX                             ; 004f712b
    RET                                 ; 004f712c
    LEA EAX,[EBP + 0x5e]                ; 004f712d
        ;   Label: LAB_004f712d
    PUSH EAX                            ; 004f7130
    PUSH ESI                            ; 004f7131
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 004f7132
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 004f7137
    PUSH EAX                            ; 004f713a
    PUSH EBX                            ; 004f713b
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 004f713c
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004f7141
    JMP 0x004f6f79                      ; 004f7144
        ;   XREF to: 004f6f79 (UNCONDITIONAL_JUMP)  ; LAB_004f6f79
    PUSH 0x1                            ; 004f7149
        ;   Label: LAB_004f7149
    PUSH 0x0                            ; 004f714b
    PUSH ESI                            ; 004f714d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f714e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f7153
    PUSH EBX                            ; 004f7156
    PUSH 0x62f46c                       ; 004f7157 | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x0066e8e0]      ; 004f715c | g_CConsolePtr
    PUSH EDI                            ; 004f7162 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004f7163
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x004f6ffc                      ; 004f7168
        ;   XREF to: 004f6ffc (UNCONDITIONAL_JUMP)  ; LAB_004f6ffc
    JBE 0x004f6fec                      ; 004f716d
        ;   XREF to: 004f6fec (CONDITIONAL_JUMP)  ; LAB_004f6fec
        ;   Label: LAB_004f716d
    CMP EAX,0x3                         ; 004f7173
    JZ 0x004f7149                       ; 004f7176
        ;   XREF to: 004f7149 (CONDITIONAL_JUMP)  ; LAB_004f7149
    PUSH 0x1                            ; 004f7178
        ;   Label: LAB_004f7178
    PUSH 0x0                            ; 004f717a
    JMP 0x004f6ff0                      ; 004f717c
        ;   XREF to: 004f6ff0 (UNCONDITIONAL_JUMP)  ; LAB_004f6ff0
    MOV ECX,dword ptr [EBX + 0xbe28]    ; 004f7181
        ;   Label: caseD_b
    TEST ECX,ECX                        ; 004f7187
    JNZ 0x004f7017                      ; 004f7189
        ;   XREF to: 004f7017 (CONDITIONAL_JUMP)  ; caseD_d
    MOV ESI,dword ptr [EBX + 0xdc]      ; 004f718f
    TEST ESI,ESI                        ; 004f7195
    JNZ 0x004f7017                      ; 004f7197
        ;   XREF to: 004f7017 (CONDITIONAL_JUMP)  ; caseD_d
    PUSH ECX                            ; 004f719d
    LEA EAX,[EBP + -0x22]               ; 004f719e
    PUSH EAX                            ; 004f71a1
    LEA EAX,[EBX + 0x158]               ; 004f71a2
    PUSH EAX                            ; 004f71a8
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 004f71a9
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004f71ae
    PUSH EAX                            ; 004f71b1
    LEA EAX,[EBP + -0x2e]               ; 004f71b2
    PUSH EAX                            ; 004f71b5
    PUSH EBX                            ; 004f71b6
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004f71b7
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004f71bc
    PUSH ESI                            ; 004f71bf
    LEA EAX,[EBP + -0x2e]               ; 004f71c0
    PUSH EAX                            ; 004f71c3
    MOV EDI,dword ptr [0x0067b9a0]      ; 004f71c4 | g_CGorePtr
    PUSH EDI                            ; 004f71ca | g_CGoreInstance
    CALL core_gore.cpp_FUN_004ede30     ; 004f71cb
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004ede30()
    ADD ESP,0xc                         ; 004f71d0
    MOV dword ptr [EBX + 0xbe28],0x1    ; 004f71d3
    JMP 0x004f7017                      ; 004f71dd
        ;   XREF to: 004f7017 (UNCONDITIONAL_JUMP)  ; caseD_d
    LEA EAX,[EBP + 0xffffff7e]          ; 004f71e2
        ;   Label: caseD_8
    PUSH EAX                            ; 004f71e8
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004f71e9
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004f71ee
    PUSH 0x41700000                     ; 004f71f1
    PUSH 0x40e00000                     ; 004f71f6
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004f71fb
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004f7200
    ADD ESP,0x8                         ; 004f7203
    LEA EAX,[EBP + 0xffffff7e]          ; 004f7206
    MOV EDX,dword ptr [0x02db88d0]      ; 004f720c | INT_02db88d0
    PUSH EAX                            ; 004f7212
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f7213
    MOV dword ptr [EBP + -0x4e],EBX     ; 004f721a
    SUB EAX,EDX                         ; 004f721d
    MOV dword ptr [EBP + -0x4a],EBX     ; 004f721f
    SHL EAX,0x4                         ; 004f7222
    LEA EDX,[EBX + 0xfd8]               ; 004f7225
    ADD EAX,EDX                         ; 004f722b
    PUSH 0x3ecccccd                     ; 004f722d
    PUSH EAX                            ; 004f7232
    PUSH 0x3f87558                      ; 004f7233 | g_ZeroVector
    LEA EAX,[EBP + 0x3e]                ; 004f7238
    FLD float ptr [EBP + 0x76]          ; 004f723b
    PUSH EAX                            ; 004f723e
    FSTP float ptr [EBP + -0x7e]        ; 004f723f
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 004f7242
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 004f7247
    PUSH EAX                            ; 004f724a
    LEA EAX,[EBP + -0x46]               ; 004f724b
    PUSH EAX                            ; 004f724e
    PUSH EBX                            ; 004f724f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004f7250
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004f7255
    PUSH EAX                            ; 004f7258
    PUSH EBX                            ; 004f7259
    CALL core_enemy.cpp_CEnemy_FUN_004a9880 ; 004f725a
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9880(CEnemy * this_ptr)
    ADD ESP,0x10                        ; 004f725f
    JMP 0x004f7017                      ; 004f7262
        ;   XREF to: 004f7017 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 004f7267
        ;   Label: caseD_6
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f726d
    PUSH EBX                            ; 004f7273
    CALL dword ptr [EAX + 0x158]        ; 004f7274
    ADD ESP,0x8                         ; 004f727a
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 004f727d
    LEA ESI,[EBX + 0x158]               ; 004f7283
    TEST ECX,ECX                        ; 004f7289
    JZ 0x004f73be                       ; 004f728b
        ;   XREF to: 004f73be (CONDITIONAL_JUMP)  ; LAB_004f73be
    MOV EAX,ECX                         ; 004f7291
    LEA EDX,[EBX + 0x20]                ; 004f7293
    FLD float ptr [EAX + 0x20]          ; 004f7296
    FSUB float ptr [EDX]                ; 004f7299
    FSTP float ptr [EBP + -0x3a]        ; 004f729b
    FLD float ptr [EAX + 0x24]          ; 004f729e
    FSUB float ptr [EDX + 0x4]          ; 004f72a1
    FST float ptr [EBP + -0x36]         ; 004f72a4
    FMUL float ptr [EBP + -0x36]        ; 004f72a7
    FLD float ptr [EBP + -0x3a]         ; 004f72aa
    FMUL ST0                            ; 004f72ad
    FLD float ptr [EAX + 0x28]          ; 004f72af
    FSUB float ptr [EDX + 0x8]          ; 004f72b2
    FXCH                                ; 004f72b5
    FADDP ST2,ST0                       ; 004f72b7
    FST float ptr [EBP + -0x32]         ; 004f72b9
    FMUL float ptr [EBP + -0x32]        ; 004f72bc
    FADDP                               ; 004f72bf
    FSQRT                               ; 004f72c1
    FSTP float ptr [EBP + 0x62]         ; 004f72c3
    MOV EAX,dword ptr [EBP + 0x62]      ; 004f72c6
    FLD float ptr [EBP + 0x62]          ; 004f72c9
    MOV dword ptr [EBP + 0x66],EAX      ; 004f72cc
    FCOMP float ptr [0x0065fccc]        ; 004f72cf | FLOAT_0065fccc
    FNSTSW AX                           ; 004f72d5
    SAHF                                ; 004f72d7
    JC 0x004f7320                       ; 004f72d8
        ;   XREF to: 004f7320 (CONDITIONAL_JUMP)  ; LAB_004f7320
    FLD float ptr [EBP + 0x66]          ; 004f72da
        ;   Label: LAB_004f72da
    FCOMP float ptr [EBX + 0xbe34]      ; 004f72dd
    FNSTSW AX                           ; 004f72e3
    SAHF                                ; 004f72e5
    JNC 0x004f7017                      ; 004f72e6
        ;   XREF to: 004f7017 (CONDITIONAL_JUMP)  ; caseD_d
    FLD float ptr [EBP + 0x66]          ; 004f72ec
    LEA EDX,[EBX + 0x158]               ; 004f72ef
    FCOMP float ptr [0x0065fcd8]        ; 004f72f5 | FLOAT_0065fcd8
    FNSTSW AX                           ; 004f72fb
    SAHF                                ; 004f72fd
    JNC 0x004f73a2                      ; 004f72fe
        ;   XREF to: 004f73a2 (CONDITIONAL_JUMP)  ; LAB_004f73a2
    PUSH 0x1                            ; 004f7304
    PUSH 0x1                            ; 004f7306
    PUSH EDX                            ; 004f7308
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f7309
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f730e
    MOV dword ptr [EBX + 0xbe38],0x0    ; 004f7311
    JMP 0x004f7017                      ; 004f731b
        ;   XREF to: 004f7017 (UNCONDITIONAL_JUMP)  ; caseD_d
    LEA EAX,[EBP + -0x3a]               ; 004f7320
        ;   Label: LAB_004f7320
    PUSH EAX                            ; 004f7323
    LEA EAX,[EBP + 0x4a]                ; 004f7324
    PUSH EAX                            ; 004f7327
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004f7328
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + 0x4e]          ; 004f732d
    ADD ESP,0x8                         ; 004f7330
    FSUB float ptr [EBX + 0x34]         ; 004f7333
    SUB ESP,0x4                         ; 004f7336
    FSTP float ptr [ESP]                ; 004f7339
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004f733c
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004f7341
    FLD float ptr [EBP + 0x76]          ; 004f7344
    FABS                                ; 004f7347
    ADD ESP,0x4                         ; 004f7349
    FCOMP double ptr [0x0062f4c8]       ; 004f734c | DOUBLE_0062f4c8
    FNSTSW AX                           ; 004f7352
    SAHF                                ; 004f7354
    JNC 0x004f72da                      ; 004f7355
        ;   XREF to: 004f72da (CONDITIONAL_JUMP)  ; LAB_004f72da
    TEST EDI,EDI                        ; 004f7357
    JZ 0x004f739c                       ; 004f7359
        ;   XREF to: 004f739c (CONDITIONAL_JUMP)  ; LAB_004f739c
    PUSH 0x1                            ; 004f735b
    PUSH 0x8                            ; 004f735d
    PUSH ESI                            ; 004f735f
        ;   Label: LAB_004f735f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f7360
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f7365
    MOV ESI,dword ptr [EBX + 0xbebc]    ; 004f7368
    PUSH ESI                            ; 004f736e
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004f736f
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004f7374
    TEST EAX,EAX                        ; 004f7377
    JNZ 0x004f72da                      ; 004f7379
        ;   XREF to: 004f72da (CONDITIONAL_JUMP)  ; LAB_004f72da
    PUSH 0x62f496                       ; 004f737f | = "hotdemon-attack.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f7384
    PUSH EBX                            ; 004f738a
    CALL dword ptr [EAX + 0x24]         ; 004f738b
    ADD ESP,0x8                         ; 004f738e
    MOV dword ptr [EBX + 0xbebc],EAX    ; 004f7391
    JMP 0x004f72da                      ; 004f7397
        ;   XREF to: 004f72da (UNCONDITIONAL_JUMP)  ; LAB_004f72da
    PUSH 0x1                            ; 004f739c
        ;   Label: LAB_004f739c
    PUSH 0x2                            ; 004f739e
    JMP 0x004f735f                      ; 004f73a0
        ;   XREF to: 004f735f (UNCONDITIONAL_JUMP)  ; LAB_004f735f
    PUSH 0x1                            ; 004f73a2
        ;   Label: LAB_004f73a2
    PUSH 0x7                            ; 004f73a4
    PUSH EDX                            ; 004f73a6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f73a7
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f73ac
    MOV dword ptr [EBX + 0xbe38],0x0    ; 004f73af
    JMP 0x004f7017                      ; 004f73b9
        ;   XREF to: 004f7017 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 004f73be
        ;   Label: LAB_004f73be
    PUSH EBX                            ; 004f73c4
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 004f73c5
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 004f73ca
    TEST EAX,EAX                        ; 004f73cd
    JZ 0x004f7017                       ; 004f73cf
        ;   XREF to: 004f7017 (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 004f73d5
        ;   Label: LAB_004f73d5
    PUSH 0x1                            ; 004f73d7
    PUSH ESI                            ; 004f73d9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f73da
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f73df
    JMP 0x004f7017                      ; 004f73e2
        ;   XREF to: 004f7017 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 004f73e7
        ;   Label: caseD_f
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f73ed
    PUSH EBX                            ; 004f73f3
    CALL dword ptr [EAX + 0x158]        ; 004f73f4
    ADD ESP,0x8                         ; 004f73fa
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004f73fd
    LEA ESI,[EBX + 0x158]               ; 004f7403
    TEST EAX,EAX                        ; 004f7409
    JNZ 0x004f7447                      ; 004f740b
        ;   XREF to: 004f7447 (CONDITIONAL_JUMP)  ; LAB_004f7447
    PUSH dword ptr [EBP + 0x92]         ; 004f740d
    PUSH EBX                            ; 004f7413
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 004f7414
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 004f7419
    TEST EAX,EAX                        ; 004f741c
    JNZ 0x004f73d5                      ; 004f741e
        ;   XREF to: 004f73d5 (CONDITIONAL_JUMP)  ; LAB_004f73d5
    CMP EDI,0x1                         ; 004f7420
    JNZ 0x004f7435                      ; 004f7423
        ;   XREF to: 004f7435 (CONDITIONAL_JUMP)  ; LAB_004f7435
    PUSH EDI                            ; 004f7425
    PUSH EAX                            ; 004f7426
    PUSH ESI                            ; 004f7427
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f7428
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f742d
    JMP 0x004f7017                      ; 004f7430
        ;   XREF to: 004f7017 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 004f7435
        ;   Label: LAB_004f7435
    PUSH 0x6                            ; 004f7437
    PUSH ESI                            ; 004f7439
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f743a
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f743f
    JMP 0x004f7017                      ; 004f7442
        ;   XREF to: 004f7017 (UNCONDITIONAL_JUMP)  ; caseD_d
    MOV EAX,[0x0065fccc]                ; 004f7447 | FLOAT_0065fccc
        ;   Label: LAB_004f7447
    PUSH 0x3e32b8c2                     ; 004f744c
    MOV dword ptr [EBP + 0x6e],EAX      ; 004f7451
    LEA EAX,[EBX + 0x23ac]              ; 004f7454
    PUSH 0x3f000000                     ; 004f745a
    MOV dword ptr [EAX + 0x8],0x0       ; 004f745f
    XOR EDX,EDX                         ; 004f7466
    MOV ECX,dword ptr [EAX + 0x8]       ; 004f7468
    MOV dword ptr [EAX + 0x4],ECX       ; 004f746b
    MOV ECX,dword ptr [EAX + 0x4]       ; 004f746e
    MOV dword ptr [EAX],ECX             ; 004f7471
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004f7473
    MOV dword ptr [EBP + 0x26],EDX      ; 004f7476
    MOV dword ptr [EBP + 0x2e],EAX      ; 004f7479
    LEA EAX,[EBP + 0x26]                ; 004f747c
    MOV dword ptr [EBP + 0x2a],EDX      ; 004f747f
    PUSH EAX                            ; 004f7482
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004f7483
    PUSH EAX                            ; 004f7489
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f748a
    CALL dword ptr [EDX + 0xbc]         ; 004f7490
    ADD ESP,0x4                         ; 004f7496
    PUSH EAX                            ; 004f7499
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004f749a
    ADD EAX,0x20                        ; 004f74a0
    PUSH EAX                            ; 004f74a3
    PUSH EBX                            ; 004f74a4
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 004f74a5
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
    ADD ESP,0x18                        ; 004f74aa
    TEST EAX,EAX                        ; 004f74ad
    JL 0x004f7017                       ; 004f74af
        ;   XREF to: 004f7017 (CONDITIONAL_JUMP)  ; caseD_d
    LEA EAX,[EBX + 0x20]                ; 004f74b5
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 004f74b8
    FLD float ptr [EAX]                 ; 004f74be
    FSUB float ptr [EDX + 0x20]         ; 004f74c0
    FSTP float ptr [EBP + -0xa]         ; 004f74c3
    FLD float ptr [EAX + 0x4]           ; 004f74c6
    FSUB float ptr [EDX + 0x24]         ; 004f74c9
    FLD float ptr [EBP + -0xa]          ; 004f74cc
    FXCH                                ; 004f74cf
    FSTP float ptr [EBP + -0x6]         ; 004f74d1
    FLD float ptr [EAX + 0x8]           ; 004f74d4
    FSUB float ptr [EDX + 0x28]         ; 004f74d7
    FXCH                                ; 004f74da
    FMUL float ptr [EBP + -0xa]         ; 004f74dc
    FXCH                                ; 004f74df
    FST float ptr [EBP + -0x2]          ; 004f74e1
    FMUL float ptr [EBP + -0x2]         ; 004f74e4
    XOR EAX,EAX                         ; 004f74e7
    FADDP                               ; 004f74e9
    MOV dword ptr [EBP + -0x6],EAX      ; 004f74eb
    FSQRT                               ; 004f74ee
    FSTP float ptr [EBP + 0x72]         ; 004f74f0
    MOV EAX,dword ptr [EBP + 0x72]      ; 004f74f3
    FLD float ptr [EBP + 0x72]          ; 004f74f6
    MOV dword ptr [EBP + 0x6a],EAX      ; 004f74f9
    FCOMP float ptr [0x0065fcd8]        ; 004f74fc | FLOAT_0065fcd8
    FNSTSW AX                           ; 004f7502
    SAHF                                ; 004f7504
    JBE 0x004f7523                      ; 004f7505
        ;   XREF to: 004f7523 (CONDITIONAL_JUMP)  ; LAB_004f7523
    CMP EDI,0x7                         ; 004f7507
    JZ 0x004f7523                       ; 004f750a
        ;   XREF to: 004f7523 (CONDITIONAL_JUMP)  ; LAB_004f7523
    PUSH 0x1                            ; 004f750c
    PUSH 0x7                            ; 004f750e
    PUSH ESI                            ; 004f7510
    MOV dword ptr [EBX + 0xbe38],0x0    ; 004f7511
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f751b
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f7520
    FLD float ptr [EBP + 0x6a]          ; 004f7523
        ;   Label: LAB_004f7523
    FCOMP float ptr [EBP + 0x6e]        ; 004f7526
    FNSTSW AX                           ; 004f7529
    SAHF                                ; 004f752b
    JA 0x004f75d4                       ; 004f752c
        ;   XREF to: 004f75d4 (CONDITIONAL_JUMP)  ; LAB_004f75d4
    FLD float ptr [EBX + 0xbe38]        ; 004f7532
    FLDZ                                ; 004f7538
    FCOMPP                              ; 004f753a
    FNSTSW AX                           ; 004f753c
    SAHF                                ; 004f753e
    JC 0x004f75d4                       ; 004f753f
        ;   XREF to: 004f75d4 (CONDITIONAL_JUMP)  ; LAB_004f75d4
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004f7545
    LEA EDX,[EBX + 0x20]                ; 004f754b
    FLD float ptr [EAX + 0x20]          ; 004f754e
    FSUB float ptr [EDX]                ; 004f7551
    FSTP float ptr [EBP + 0x1a]         ; 004f7553
    FLD float ptr [EAX + 0x24]          ; 004f7556
    FSUB float ptr [EDX + 0x4]          ; 004f7559
    FSTP float ptr [EBP + 0x1e]         ; 004f755c
    FLD float ptr [EAX + 0x28]          ; 004f755f
    LEA EAX,[EBP + 0x1a]                ; 004f7562
    PUSH EAX                            ; 004f7565
    LEA EAX,[EBP + 0x2]                 ; 004f7566
    FSUB float ptr [EDX + 0x8]          ; 004f7569
    PUSH EAX                            ; 004f756c
    FSTP float ptr [EBP + 0x22]         ; 004f756d
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004f7570
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + 0x6]           ; 004f7575
    ADD ESP,0x8                         ; 004f7578
    FSUB float ptr [EBX + 0x34]         ; 004f757b
    SUB ESP,0x4                         ; 004f757e
    FSTP float ptr [ESP]                ; 004f7581
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004f7584
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004f7589
    FLD float ptr [EBP + 0x76]          ; 004f758c
    FABS                                ; 004f758f
    ADD ESP,0x4                         ; 004f7591
    FCOMP double ptr [0x0062f4c8]       ; 004f7594 | DOUBLE_0062f4c8
    FNSTSW AX                           ; 004f759a
    SAHF                                ; 004f759c
    JNC 0x004f75d4                      ; 004f759d
        ;   XREF to: 004f75d4 (CONDITIONAL_JUMP)  ; LAB_004f75d4
    LEA EAX,[EBX + 0x158]               ; 004f759f
    CMP EDI,0x7                         ; 004f75a5
    JZ 0x004f760d                       ; 004f75a8
        ;   XREF to: 004f760d (CONDITIONAL_JUMP)  ; LAB_004f760d
    PUSH 0x1                            ; 004f75aa
    PUSH 0x2                            ; 004f75ac
    PUSH EAX                            ; 004f75ae
        ;   Label: LAB_004f75ae
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f75af
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f75b4
    MOV EDX,dword ptr [EBX + 0xbebc]    ; 004f75b7
    PUSH EDX                            ; 004f75bd
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004f75be
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004f75c3
    TEST EAX,EAX                        ; 004f75c6
    JZ 0x004f7613                       ; 004f75c8
        ;   XREF to: 004f7613 (CONDITIONAL_JUMP)  ; LAB_004f7613
    MOV dword ptr [EBX + 0xbe38],0x40000000 ; 004f75ca
        ;   Label: LAB_004f75ca
    FLD float ptr [EBP + 0x6a]          ; 004f75d4
        ;   Label: LAB_004f75d4
    FCOMP float ptr [EBX + 0xbe34]      ; 004f75d7
    FNSTSW AX                           ; 004f75dd
    SAHF                                ; 004f75df
    JBE 0x004f7017                      ; 004f75e0
        ;   XREF to: 004f7017 (CONDITIONAL_JUMP)  ; caseD_d
    LEA EAX,[EBX + 0x158]               ; 004f75e6
    CMP EDI,0x7                         ; 004f75ec
    JZ 0x004f762d                       ; 004f75ef
        ;   XREF to: 004f762d (CONDITIONAL_JUMP)  ; LAB_004f762d
    PUSH 0x1                            ; 004f75f1
    PUSH 0x0                            ; 004f75f3
    PUSH EAX                            ; 004f75f5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f75f6
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f75fb
    MOV dword ptr [EBX + 0xbe38],0x0    ; 004f75fe
    JMP 0x004f7017                      ; 004f7608
        ;   XREF to: 004f7017 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 004f760d
        ;   Label: LAB_004f760d
    PUSH 0x8                            ; 004f760f
    JMP 0x004f75ae                      ; 004f7611
        ;   XREF to: 004f75ae (UNCONDITIONAL_JUMP)  ; LAB_004f75ae
    PUSH 0x62f4aa                       ; 004f7613 | = "hotdemon-attack.wav"
        ;   Label: LAB_004f7613
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f7618
    PUSH EBX                            ; 004f761e
    CALL dword ptr [EAX + 0x24]         ; 004f761f
    ADD ESP,0x8                         ; 004f7622
    MOV dword ptr [EBX + 0xbebc],EAX    ; 004f7625
    JMP 0x004f75ca                      ; 004f762b
        ;   XREF to: 004f75ca (UNCONDITIONAL_JUMP)  ; LAB_004f75ca
    PUSH 0x1                            ; 004f762d
        ;   Label: LAB_004f762d
    PUSH 0x6                            ; 004f762f
    PUSH EAX                            ; 004f7631
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f7632
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f7637
    MOV dword ptr [EBX + 0xbe38],0x0    ; 004f763a
    JMP 0x004f7017                      ; 004f7644
        ;   XREF to: 004f7017 (UNCONDITIONAL_JUMP)  ; caseD_d
    CMP EDI,0xf                         ; 004f7649
        ;   Label: LAB_004f7649
    JA 0x004f7017                       ; 004f764c
        ;   XREF to: 004f7017 (CONDITIONAL_JUMP)  ; caseD_d
    MOV EAX,EDI                         ; 004f7652
    JMP dword ptr [EAX*0x4 + 0x4f6ee0]  ; 004f7654 | caseD_0 | caseD_7 | caseD_2
        ;   Label: switchD

