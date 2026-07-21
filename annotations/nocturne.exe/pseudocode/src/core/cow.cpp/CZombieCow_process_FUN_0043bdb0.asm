; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cow_cpp_CZombieCow_process_FUN_0043bdb0(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0xc0]:1  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined1* switchdataD_0043bd94 = 0043c124
;   string s_%s_confused_while_walking_to_scr_0057b34f
;   string s_cow?.wav_0057b379
;   string s_%s_gave_up_chase_-_I'm_confused_0057b382
;   undefined4 DAT_0057b3aa
;   undefined4 DAT_0057b3b2
;   undefined4 DAT_0057b3ba
;   undefined4 DAT_0059b888
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_005b96c4
;   undefined4 DAT_005be368
;   undefined4 DAT_005bed68
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_01e57284
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043bdb0
        ;   Label: core_cow.cpp_CZombieCow_process_FUN_0043bdb0
    PUSH ESI                            ; 0043bdb1
    PUSH EDI                            ; 0043bdb2
    PUSH EBP                            ; 0043bdb3
    MOV EBP,ESP                         ; 0043bdb4
    SUB ESP,0xb0                        ; 0043bdb6
    SUB EBP,0x7a                        ; 0043bdbc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0043bdbf
    PUSH dword ptr [EBP + 0x92]         ; 0043bdc5
    PUSH EBX                            ; 0043bdcb
    CALL FUN_004259f0                   ; 0043bdcc
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004259f0()
    ADD ESP,0x8                         ; 0043bdd1
    TEST EAX,EAX                        ; 0043bdd4
    JZ 0x0043bfed                       ; 0043bdd6
        ;   XREF to: 0043bfed (CONDITIONAL_JUMP)  ; LAB_0043bfed
    LEA EAX,[EBX + 0x23a4]              ; 0043bddc
    MOV dword ptr [EAX + 0x8],0x0       ; 0043bde2
    FLD float ptr [EBP + 0x92]          ; 0043bde9
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043bdef
    MOV dword ptr [EAX + 0x4],EDX       ; 0043bdf2
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043bdf5
    MOV dword ptr [EAX],EDX             ; 0043bdf8
    FMUL float ptr [EBX + 0xbc8c]       ; 0043bdfa
    LEA ESI,[EBX + 0x150]               ; 0043be00
    FSTP float ptr [EBP + 0x6e]         ; 0043be06
    FLD float ptr [EBP + 0x6e]          ; 0043be09
        ;   Label: LAB_0043be09
    FLDZ                                ; 0043be0c
    FCOMPP                              ; 0043be0e
    FNSTSW AX                           ; 0043be10
    SAHF                                ; 0043be12
    JC 0x0043bff5                       ; 0043be13
        ;   XREF to: 0043bff5 (CONDITIONAL_JUMP)  ; LAB_0043bff5
    FLD float ptr [EBX + 0xbc8c]        ; 0043be19
    FLD float ptr [EBP + 0x92]          ; 0043be1f
    FMUL double ptr [0x0057b3aa]        ; 0043be25 | DAT_0057b3aa
    FMULP                               ; 0043be2b
    FMUL double ptr [0x0057b3b2]        ; 0043be2d | DAT_0057b3b2
    FLD float ptr [EBX + 0x23ac]        ; 0043be33
    PUSH ESI                            ; 0043be39
    FSTP float ptr [EBX + 0x242c]       ; 0043be3a
    FSTP float ptr [EBX + 0x2430]       ; 0043be40
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0043be46
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    ADD ESP,0x4                         ; 0043be4b
    PUSH dword ptr [EBP + 0x92]         ; 0043be4e
    PUSH EBX                            ; 0043be54
    MOV EDI,dword ptr [EAX + 0x24]      ; 0043be55
    CALL FUN_00428c00                   ; 0043be58
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; undefined FUN_00428c00()
    ADD ESP,0x8                         ; 0043be5d
    TEST EAX,EAX                        ; 0043be60
    JZ 0x0043c2c4                       ; 0043be62
        ;   XREF to: 0043c2c4 (CONDITIONAL_JUMP)  ; LAB_0043c2c4
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 0043be68
    CMP EAX,0x2                         ; 0043be6e
    JNC 0x0043c035                      ; 0043be71
        ;   XREF to: 0043c035 (CONDITIONAL_JUMP)  ; LAB_0043c035
    CMP EAX,0x1                         ; 0043be77
    JNZ 0x0043c040                      ; 0043be7a
        ;   XREF to: 0043c040 (CONDITIONAL_JUMP)  ; LAB_0043c040
    PUSH 0x1                            ; 0043be80
        ;   Label: LAB_0043be80
    PUSH 0x1                            ; 0043be82
    LEA EAX,[EBX + 0x150]               ; 0043be84
        ;   Label: LAB_0043be84
    PUSH EAX                            ; 0043be8a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0043be8b
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0043be90
        ;   Label: LAB_0043be90
    LEA EAX,[EBX + 0x23a4]              ; 0043be93
    MOV dword ptr [EAX + 0x8],0x0       ; 0043be99
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043bea0
    MOV dword ptr [EAX + 0x4],EDX       ; 0043bea3
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043bea6
    MOV dword ptr [EAX],EDX             ; 0043bea9
    FLD float ptr [EBX + 0xbca0]        ; 0043beab
        ;   Label: caseD_3
    FLDZ                                ; 0043beb1
    FCOMPP                              ; 0043beb3
    FNSTSW AX                           ; 0043beb5
    SAHF                                ; 0043beb7
    JNC 0x0043becc                      ; 0043beb8
        ;   XREF to: 0043becc (CONDITIONAL_JUMP)  ; LAB_0043becc
    FLD float ptr [EBX + 0xbca0]        ; 0043beba
    FSUB float ptr [EBP + 0x92]         ; 0043bec0
    FSTP float ptr [EBX + 0xbca0]       ; 0043bec6
    PUSH EBX                            ; 0043becc
        ;   Label: LAB_0043becc
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00425960 ; 0043becd
        ;   XREF to: 00425960 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_isOnGround_FUN_00425960()
    ADD ESP,0x4                         ; 0043bed2
    TEST EAX,EAX                        ; 0043bed5
    JZ 0x0043bfc6                       ; 0043bed7
        ;   XREF to: 0043bfc6 (CONDITIONAL_JUMP)  ; LAB_0043bfc6
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 0043bedd
    TEST ECX,ECX                        ; 0043bee3
    JZ 0x0043bf11                       ; 0043bee5
        ;   XREF to: 0043bf11 (CONDITIONAL_JUMP)  ; LAB_0043bf11
    PUSH ECX                            ; 0043bee7
    MOV EDX,dword ptr [ECX + 0x14c]     ; 0043bee8
    CALL dword ptr [EDX + 0xec]         ; 0043beee
    ADD ESP,0x4                         ; 0043bef4
    CMP EAX,EBX                         ; 0043bef7
    JNZ 0x0043bf11                      ; 0043bef9
        ;   XREF to: 0043bf11 (CONDITIONAL_JUMP)  ; LAB_0043bf11
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 0043befb
    PUSH ESI                            ; 0043bf01
    MOV EDI,dword ptr [0x005be368]      ; 0043bf02 | DAT_005be368
    PUSH EDI                            ; 0043bf08 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0043bf09
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 0043bf0e
    FLD float ptr [EBP + 0x92]          ; 0043bf11
        ;   Label: LAB_0043bf11
    FLD ST0                             ; 0043bf17
    FMUL double ptr [0x0057b3ba]        ; 0043bf19 | DAT_0057b3ba
    FLD float ptr [EBX + 0x2424]        ; 0043bf1f
    FXCH                                ; 0043bf25
    FSUBR ST0,ST1                       ; 0043bf27
    LEA EDX,[EBX + 0x2420]              ; 0043bf29
    FSTP ST1                            ; 0043bf2f
    FSTP float ptr [EBX + 0x2424]       ; 0043bf31
    FLD float ptr [EDX]                 ; 0043bf37
    FMUL ST1                            ; 0043bf39
    FSTP float ptr [EBP + 0x42]         ; 0043bf3b
    FLD float ptr [EDX + 0x4]           ; 0043bf3e
    FMUL ST1                            ; 0043bf41
    LEA EAX,[EBX + 0x2414]              ; 0043bf43
    FSTP float ptr [EBP + 0x46]         ; 0043bf49
    FMUL float ptr [EDX + 0x8]          ; 0043bf4c
    LEA ESI,[EBX + 0x23a4]              ; 0043bf4f
    FLD float ptr [EBP + 0x42]          ; 0043bf55
    FXCH                                ; 0043bf58
    FSTP float ptr [EBP + 0x4a]         ; 0043bf5a
    FADD float ptr [EAX]                ; 0043bf5d
    FLD float ptr [EBP + 0x46]          ; 0043bf5f
    FXCH                                ; 0043bf62
    FSTP float ptr [EBP + 0x2a]         ; 0043bf64
    FADD float ptr [EAX + 0x4]          ; 0043bf67
    FLD float ptr [EBP + 0x4a]          ; 0043bf6a
    FXCH                                ; 0043bf6d
    FSTP float ptr [EBP + 0x2e]         ; 0043bf6f
    FADD float ptr [EAX + 0x8]          ; 0043bf72
    FLD float ptr [EBP + 0x2a]          ; 0043bf75
    FXCH                                ; 0043bf78
    FSTP float ptr [EBP + 0x32]         ; 0043bf7a
    FADD float ptr [ESI]                ; 0043bf7d
    FLD float ptr [EBP + 0x2e]          ; 0043bf7f
    FXCH                                ; 0043bf82
    FSTP float ptr [EBP + 0x1e]         ; 0043bf84
    FADD float ptr [ESI + 0x4]          ; 0043bf87
    FLD float ptr [EBP + 0x32]          ; 0043bf8a
    FXCH                                ; 0043bf8d
    FSTP float ptr [EBP + 0x22]         ; 0043bf8f
    FADD float ptr [ESI + 0x8]          ; 0043bf92
    FSTP float ptr [EBP + 0x26]         ; 0043bf95
    MOV dword ptr [EAX + 0x8],0x0       ; 0043bf98
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043bf9f
    MOV dword ptr [EAX + 0x4],EDX       ; 0043bfa2
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043bfa5
    MOV dword ptr [EAX],EDX             ; 0043bfa8
    MOV dword ptr [ESI + 0x8],0x0       ; 0043bfaa
    LEA EAX,[EBP + 0x1e]                ; 0043bfb1
    FLD float ptr [ESI + 0x8]           ; 0043bfb4
    PUSH EAX                            ; 0043bfb7
    FST float ptr [ESI + 0x4]           ; 0043bfb8
    PUSH EBX                            ; 0043bfbb
    FSTP float ptr [ESI]                ; 0043bfbc
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 0043bfbe
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050()
    ADD ESP,0x8                         ; 0043bfc3
    PUSH EBX                            ; 0043bfc6
        ;   Label: LAB_0043bfc6
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 0043bfc7
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_preProcess_FUN_004259a0()
    ADD ESP,0x4                         ; 0043bfcc
    LEA EAX,[EBX + 0x150]               ; 0043bfcf
    PUSH EAX                            ; 0043bfd5
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 0043bfd6
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0()
    ADD ESP,0x4                         ; 0043bfdb
    PUSH dword ptr [EBP + 0x92]         ; 0043bfde
    PUSH EBX                            ; 0043bfe4
    CALL FUN_0042a150                   ; 0043bfe5
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a150()
    ADD ESP,0x8                         ; 0043bfea
    LEA ESP,[EBP + 0x7a]                ; 0043bfed
        ;   Label: LAB_0043bfed
    POP EBP                             ; 0043bff0
    POP EDI                             ; 0043bff1
    POP ESI                             ; 0043bff2
    POP EBX                             ; 0043bff3
    RET                                 ; 0043bff4
    LEA EAX,[EBP + 0x6e]                ; 0043bff5
        ;   Label: LAB_0043bff5
    PUSH EAX                            ; 0043bff8
    PUSH ESI                            ; 0043bff9
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 0043bffa
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advance_FUN_004e11c0()
    ADD ESP,0x8                         ; 0043bfff
    PUSH EAX                            ; 0043c002
    PUSH EBX                            ; 0043c003
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 0043c004
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processMotion_FUN_0042add0()
    ADD ESP,0x8                         ; 0043c009
    JMP 0x0043be09                      ; 0043c00c
        ;   XREF to: 0043be09 (UNCONDITIONAL_JUMP)  ; LAB_0043be09
    PUSH 0x1                            ; 0043c011
        ;   Label: LAB_0043c011
    PUSH 0x0                            ; 0043c013
    PUSH ESI                            ; 0043c015
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0043c016
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0043c01b
    PUSH EBX                            ; 0043c01e
    PUSH 0x57b34f                       ; 0043c01f | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x005ad350]      ; 0043c024 | PTR_DAT_005ad350
    PUSH EDX                            ; 0043c02a | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0043c02b
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    JMP 0x0043be90                      ; 0043c030
        ;   XREF to: 0043be90 (UNCONDITIONAL_JUMP)  ; LAB_0043be90
    JBE 0x0043be80                      ; 0043c035
        ;   XREF to: 0043be80 (CONDITIONAL_JUMP)  ; LAB_0043be80
        ;   Label: LAB_0043c035
    CMP EAX,0x3                         ; 0043c03b
    JZ 0x0043c011                       ; 0043c03e
        ;   XREF to: 0043c011 (CONDITIONAL_JUMP)  ; LAB_0043c011
    PUSH 0x1                            ; 0043c040
        ;   Label: LAB_0043c040
    PUSH 0x0                            ; 0043c042
    JMP 0x0043be84                      ; 0043c044
        ;   XREF to: 0043be84 (UNCONDITIONAL_JUMP)  ; LAB_0043be84
    LEA EAX,[EBP + -0x36]               ; 0043c049
        ;   Label: caseD_2
    PUSH EAX                            ; 0043c04c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0043c04d
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 0043c052
    PUSH 0x41700000                     ; 0043c055
    PUSH 0x40e00000                     ; 0043c05a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0043c05f
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 0043c064
    MOV dword ptr [EBP + -0x2],EBX      ; 0043c067
    MOV dword ptr [EBP + 0x2],EBX       ; 0043c06a
    ADD ESP,0x8                         ; 0043c06d
    FLD float ptr [EBP + 0x76]          ; 0043c070
    LEA EAX,[EBP + -0x36]               ; 0043c073
    FSTP float ptr [EBP + -0x32]        ; 0043c076
    MOV EDX,dword ptr [EBX + 0xbd28]    ; 0043c079
    PUSH EAX                            ; 0043c07f
    LEA EAX,[EDX*0x4 + 0x0]             ; 0043c080
    SUB EAX,EDX                         ; 0043c087
    MOV EDX,EAX                         ; 0043c089
    SHL EDX,0x4                         ; 0043c08b
    LEA EAX,[EBX + 0xfd0]               ; 0043c08e
    ADD EAX,EDX                         ; 0043c094
    PUSH 0x3f333333                     ; 0043c096
    PUSH EAX                            ; 0043c09b
    PUSH 0x2dd1184                      ; 0043c09c | DAT_02dd1184
    LEA EAX,[EBP + 0x4e]                ; 0043c0a1
    PUSH EAX                            ; 0043c0a4
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0043c0a5
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 0043c0aa
    PUSH EAX                            ; 0043c0ad
    LEA EAX,[EBP + 0x5a]                ; 0043c0ae
    PUSH EAX                            ; 0043c0b1
    PUSH EBX                            ; 0043c0b2
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0043c0b3
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 0043c0b8
    PUSH EAX                            ; 0043c0bb
    PUSH EBX                            ; 0043c0bc
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 0043c0bd
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    ADD ESP,0x10                        ; 0043c0c2
    JMP 0x0043beab                      ; 0043c0c5
        ;   XREF to: 0043beab (UNCONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xbc90],0x0    ; 0043c0ca
        ;   Label: caseD_5
    JNZ 0x0043beab                      ; 0043c0d1
        ;   XREF to: 0043beab (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xdc],0x0      ; 0043c0d7
    JNZ 0x0043beab                      ; 0043c0de
        ;   XREF to: 0043beab (CONDITIONAL_JUMP)  ; caseD_4
    PUSH EAX                            ; 0043c0e4
    LEA EAX,[EBP + 0x12]                ; 0043c0e5
    PUSH EAX                            ; 0043c0e8
    PUSH ESI                            ; 0043c0e9
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0043c0ea
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 0043c0ef
    PUSH EAX                            ; 0043c0f2
    LEA EAX,[EBP + 0x6]                 ; 0043c0f3
    PUSH EAX                            ; 0043c0f6
    PUSH EBX                            ; 0043c0f7
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0043c0f8
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 0043c0fd
    PUSH 0x0                            ; 0043c100
    LEA EAX,[EBP + 0x6]                 ; 0043c102
    PUSH EAX                            ; 0043c105
    MOV ESI,dword ptr [0x005b96c4]      ; 0043c106 | DAT_005b96c4
    PUSH ESI                            ; 0043c10c
    CALL FUN_004b0480                   ; 0043c10d
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0480()
    ADD ESP,0xc                         ; 0043c112
    MOV dword ptr [EBX + 0xbc90],0x1    ; 0043c115
    JMP 0x0043beab                      ; 0043c11f
        ;   XREF to: 0043beab (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 0043c124
        ;   Label: caseD_0
    PUSH EBX                            ; 0043c12a
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 0043c12b
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030()
    ADD ESP,0x8                         ; 0043c130
    TEST EAX,EAX                        ; 0043c133
    JZ 0x0043c149                       ; 0043c135
        ;   XREF to: 0043c149 (CONDITIONAL_JUMP)  ; LAB_0043c149
    PUSH 0x1                            ; 0043c137
    PUSH 0x1                            ; 0043c139
    PUSH ESI                            ; 0043c13b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0043c13c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0043c141
    JMP 0x0043beab                      ; 0043c144
        ;   XREF to: 0043beab (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 0043c149
        ;   Label: LAB_0043c149
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0043c14f
    PUSH EBX                            ; 0043c155
    CALL dword ptr [EAX + 0x13c]        ; 0043c156
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 0043c15c
    ADD ESP,0x8                         ; 0043c162
    TEST ESI,ESI                        ; 0043c165
    JZ 0x0043beab                       ; 0043c167
        ;   XREF to: 0043beab (CONDITIONAL_JUMP)  ; caseD_4
    MOV EDI,dword ptr [EBX + 0xbd2c]    ; 0043c16d
    PUSH EDI                            ; 0043c173
    MOV EAX,[0x005bed68]                ; 0043c174 | DAT_005bed68
    PUSH EAX                            ; 0043c179
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0 ; 0043c17a
        ;   XREF to: 0052eba0 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0()
    ADD ESP,0x8                         ; 0043c17f
    TEST EAX,EAX                        ; 0043c182
    JNZ 0x0043c19e                      ; 0043c184
        ;   XREF to: 0043c19e (CONDITIONAL_JUMP)  ; LAB_0043c19e
    PUSH 0x57b379                       ; 0043c186 | = "cow?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0043c18b
    PUSH EBX                            ; 0043c191
    CALL dword ptr [EAX + 0x24]         ; 0043c192
    ADD ESP,0x8                         ; 0043c195
    MOV dword ptr [EBX + 0xbd2c],EAX    ; 0043c198
    PUSH 0x1                            ; 0043c19e
        ;   Label: LAB_0043c19e
    PUSH 0x1                            ; 0043c1a0
    LEA EAX,[EBX + 0x150]               ; 0043c1a2
    PUSH EAX                            ; 0043c1a8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0043c1a9
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0043c1ae
    JMP 0x0043beab                      ; 0043c1b1
        ;   XREF to: 0043beab (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 0043c1b6
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0043c1bc
    PUSH EBX                            ; 0043c1c2
    CALL dword ptr [EAX + 0x13c]        ; 0043c1c3
    MOV EDI,dword ptr [EBX + 0xbca4]    ; 0043c1c9
    ADD ESP,0x8                         ; 0043c1cf
    TEST EDI,EDI                        ; 0043c1d2
    JNZ 0x0043c1fe                      ; 0043c1d4
        ;   XREF to: 0043c1fe (CONDITIONAL_JUMP)  ; LAB_0043c1fe
    PUSH dword ptr [EBP + 0x92]         ; 0043c1d6
    PUSH EBX                            ; 0043c1dc
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 0043c1dd
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030()
    ADD ESP,0x8                         ; 0043c1e2
    TEST EAX,EAX                        ; 0043c1e5
    JNZ 0x0043beab                      ; 0043c1e7
        ;   XREF to: 0043beab (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 0043c1ed
    PUSH EDI                            ; 0043c1ef
    PUSH ESI                            ; 0043c1f0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0043c1f1
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0043c1f6
    JMP 0x0043beab                      ; 0043c1f9
        ;   XREF to: 0043beab (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,[0x0059b888]                ; 0043c1fe | DAT_0059b888
        ;   Label: LAB_0043c1fe
    MOV dword ptr [EBP + 0x72],EAX      ; 0043c203
    LEA EAX,[EBX + 0x23a4]              ; 0043c206
    MOV dword ptr [EAX + 0x8],0x0       ; 0043c20c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043c213
    MOV dword ptr [EAX + 0x4],EDX       ; 0043c216
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043c219
    MOV dword ptr [EAX],EDX             ; 0043c21c
    XOR EAX,EAX                         ; 0043c21e
    MOV dword ptr [EBP + 0x36],EAX      ; 0043c220
    MOV dword ptr [EBP + 0x3a],EAX      ; 0043c223
    MOV EAX,dword ptr [EBP + 0x72]      ; 0043c226
    PUSH 0x3e32b8c2                     ; 0043c229
    MOV dword ptr [EBP + 0x3e],EAX      ; 0043c22e
    LEA EAX,[EBP + 0x36]                ; 0043c231
    PUSH 0x3f000000                     ; 0043c234
    PUSH EAX                            ; 0043c239
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 0043c23a
    PUSH EAX                            ; 0043c240
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0043c241
    CALL dword ptr [EDX + 0xbc]         ; 0043c247
    ADD ESP,0x4                         ; 0043c24d
    PUSH EAX                            ; 0043c250
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 0043c251
    ADD EAX,0x20                        ; 0043c257
    PUSH EAX                            ; 0043c25a
    PUSH EBX                            ; 0043c25b
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 0043c25c
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0()
    ADD ESP,0x18                        ; 0043c261
    TEST EAX,EAX                        ; 0043c264
    JL 0x0043c29d                       ; 0043c266
        ;   XREF to: 0043c29d (CONDITIONAL_JUMP)  ; LAB_0043c29d
    JLE 0x0043beab                      ; 0043c268
        ;   XREF to: 0043beab (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0xbca0]        ; 0043c26e
    FLDZ                                ; 0043c274
    FCOMPP                              ; 0043c276
    FNSTSW AX                           ; 0043c278
    SAHF                                ; 0043c27a
    JC 0x0043beab                       ; 0043c27b
        ;   XREF to: 0043beab (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 0043c281
    PUSH 0x2                            ; 0043c283
    PUSH ESI                            ; 0043c285
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0043c286
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0043c28b
    MOV dword ptr [EBX + 0xbca0],0x40200000 ; 0043c28e
    JMP 0x0043beab                      ; 0043c298
        ;   XREF to: 0043beab (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH EBX                            ; 0043c29d
        ;   Label: LAB_0043c29d
    PUSH 0x57b382                       ; 0043c29e | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x005ad350]      ; 0043c2a3 | PTR_DAT_005ad350
    PUSH ECX                            ; 0043c2a9 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0043c2aa
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 0043c2af
    PUSH 0x1                            ; 0043c2b2
    PUSH 0x0                            ; 0043c2b4
    PUSH ESI                            ; 0043c2b6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0043c2b7
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0043c2bc
    JMP 0x0043beab                      ; 0043c2bf
        ;   XREF to: 0043beab (UNCONDITIONAL_JUMP)  ; caseD_4
    CMP EDI,0x5                         ; 0043c2c4
        ;   Label: LAB_0043c2c4
    JA 0x0043beab                       ; 0043c2c7
        ;   XREF to: 0043beab (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EDI*0x4 + 0x43bd94]  ; 0043c2cd | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

