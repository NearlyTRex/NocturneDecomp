; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_processActors_FUN_0054fc20(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0x64]:1  local_64
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x44]:4  local_44
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
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004d8060 at 004d858a
;
; Referenced Globals:
;   TerminatedCString s_d_s_3_2f_ms_005f0850
;   TerminatedCString s_Process_time_d_actors_3_005f0863
;   undefined4 DAT_005f088e
;   undefined4 DAT_005f0896
;   undefined4 DAT_005f089e
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_0061c010
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_007c2ff4
;   undefined4 g_CCharacterClassInfo.name_hash
;   CConsole g_CConsoleInstance
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGameInstance.field504_0x228
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 g_CGlassClassInfo.name_hash
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_fire.cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40
;   core_glass.cpp_FUN_004e34b0
;   core_path.cpp_CPathMap_updateIfNeeded_FUN_005334f0
;   core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005593e0
;   core_trigger.cpp_CTrigger_applyDamage_FUN_0059be30
;   engine_console.cpp_FUN_00445430
;   wincore_winrun.cpp_getTime_FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054fc20
        ;   Label: core_set.cpp_CDemonSet_processActors_FUN_0054fc20
    PUSH ESI                            ; 0054fc21
    PUSH EDI                            ; 0054fc22
    PUSH EBP                            ; 0054fc23
    MOV EBP,ESP                         ; 0054fc24
    SUB ESP,0x9c                        ; 0054fc26
    AND ESP,0xfffffff8                  ; 0054fc2c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054fc2f
    MOV ECX,dword ptr [EDX + 0x14d164]  ; 0054fc32
    XOR EAX,EAX                         ; 0054fc38
    TEST ECX,ECX                        ; 0054fc3a
    JLE 0x0054fc50                      ; 0054fc3c
        ;   XREF to: 0054fc50 (CONDITIONAL_JUMP)  ; LAB_0054fc50
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054fc3e
    INC EAX                             ; 0054fc41
        ;   Label: LAB_0054fc41
    CMP EAX,dword ptr [EDX + 0x14d164]  ; 0054fc42
    JL 0x0054fc41                       ; 0054fc48
        ;   XREF to: 0054fc41 (CONDITIONAL_JUMP)  ; LAB_0054fc41
    LEA EAX,[EAX]                       ; 0054fc4a
    MOV EAX,[0x0061d95c]                ; 0054fc50 | g_CGamePtr
        ;   Label: LAB_0054fc50
    CMP dword ptr [EAX + 0x228],0x0     ; 0054fc55 | g_CGameInstance.field504_0x228
    JNZ 0x0054fd7f                      ; 0054fc5c
        ;   XREF to: 0054fd7f (CONDITIONAL_JUMP)  ; LAB_0054fd7f
    XOR EAX,EAX                         ; 0054fc62
        ;   Label: LAB_0054fc62
    MOV [0x01fe55bc],EAX                ; 0054fc64 | DAT_01fe55bc
    MOV [0x01fe55d0],EAX                ; 0054fc69 | DAT_01fe55d0
    MOV EAX,[0x0061d95c]                ; 0054fc6e | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x294]     ; 0054fc73 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x5c],EAX      ; 0054fc79
    MOV dword ptr [ESP],EAX             ; 0054fc7d
    FLD float ptr [ESP + 0x5c]          ; 0054fc80
    FLDZ                                ; 0054fc84
    FCOMPP                              ; 0054fc86
    FNSTSW AX                           ; 0054fc88
    SAHF                                ; 0054fc8a
    JNC 0x00550250                      ; 0054fc8b
        ;   XREF to: 00550250 (CONDITIONAL_JUMP)  ; LAB_00550250
    MOV ECX,dword ptr [EBP + 0x14]      ; 0054fc91
    PUSH ECX                            ; 0054fc94
    CALL core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005593e0 ; 0054fc95
        ;   XREF to: 005593e0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005593e0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0054fc9a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054fc9d
    MOV EBX,dword ptr [EDX + 0x14d164]  ; 0054fca0
    XOR EAX,EAX                         ; 0054fca6
    TEST EBX,EBX                        ; 0054fca8
    JLE 0x0054fcd0                      ; 0054fcaa
        ;   XREF to: 0054fcd0 (CONDITIONAL_JUMP)  ; LAB_0054fcd0
    MOV ECX,dword ptr [EDX + 0x14d168]  ; 0054fcac
        ;   Label: LAB_0054fcac
    MOV dword ptr [ECX + 0x6c],EAX      ; 0054fcb2
    MOV ECX,dword ptr [EBP + 0x14]      ; 0054fcb5
    INC EAX                             ; 0054fcb8
    MOV ESI,dword ptr [ECX + 0x14d164]  ; 0054fcb9
    ADD EDX,0x4                         ; 0054fcbf
    CMP EAX,ESI                         ; 0054fcc2
    JL 0x0054fcac                       ; 0054fcc4
        ;   XREF to: 0054fcac (CONDITIONAL_JUMP)  ; LAB_0054fcac
    LEA EAX,[EAX]                       ; 0054fcc6
    LEA EDX,[EDX]                       ; 0054fccc
    FLD float ptr [ESP]                 ; 0054fcd0
        ;   Label: LAB_0054fcd0
    FLDZ                                ; 0054fcd3
    FCOMPP                              ; 0054fcd5
    FNSTSW AX                           ; 0054fcd7
    SAHF                                ; 0054fcd9
    JNC 0x0054fed5                      ; 0054fcda
        ;   XREF to: 0054fed5 (CONDITIONAL_JUMP)  ; LAB_0054fed5
    MOV dword ptr [ESP + 0x84],0xfff0bdc1 ; 0054fce0
    MOV dword ptr [ESP + 0x8c],0xf423f  ; 0054fceb
        ;   Label: LAB_0054fceb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054fcf6
    XOR EDX,EDX                         ; 0054fcf9
    MOV ECX,dword ptr [EAX + 0x14d164]  ; 0054fcfb
    MOV dword ptr [ESP + 0x94],EDX      ; 0054fd01
    TEST ECX,ECX                        ; 0054fd08
    JLE 0x0054fd60                      ; 0054fd0a
        ;   XREF to: 0054fd60 (CONDITIONAL_JUMP)  ; LAB_0054fd60
    MOV EBX,dword ptr [ESP + 0x88]      ; 0054fd0c
    MOV dword ptr [ESP + 0x90],EAX      ; 0054fd13
    SHL EBX,0x2                         ; 0054fd1a
    MOV ESI,dword ptr [ESP + 0x90]      ; 0054fd1d
        ;   Label: LAB_0054fd1d
    MOV ESI,dword ptr [ESI + 0x14d168]  ; 0054fd24
    CMP dword ptr [ESI + 0x104],0x0     ; 0054fd2a
    JZ 0x0054fd96                       ; 0054fd31
        ;   XREF to: 0054fd96 (CONDITIONAL_JUMP)  ; LAB_0054fd96
    MOV ESI,dword ptr [ESP + 0x90]      ; 0054fd33
        ;   Label: LAB_0054fd33
    MOV EDI,dword ptr [ESP + 0x94]      ; 0054fd3a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054fd41
    ADD ESI,0x4                         ; 0054fd44
    INC EDI                             ; 0054fd47
    MOV ECX,dword ptr [EDX + 0x14d164]  ; 0054fd48
    MOV dword ptr [ESP + 0x90],ESI      ; 0054fd4e
    MOV dword ptr [ESP + 0x94],EDI      ; 0054fd55
    CMP EDI,ECX                         ; 0054fd5c
    JL 0x0054fd1d                       ; 0054fd5e
        ;   XREF to: 0054fd1d (CONDITIONAL_JUMP)  ; LAB_0054fd1d
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0054fd60
        ;   Label: LAB_0054fd60
    CMP EBX,0xf423f                     ; 0054fd67
    JGE 0x0054fed5                      ; 0054fd6d
        ;   XREF to: 0054fed5 (CONDITIONAL_JUMP)  ; LAB_0054fed5
    MOV dword ptr [ESP + 0x84],EBX      ; 0054fd73
    JMP 0x0054fceb                      ; 0054fd7a
        ;   XREF to: 0054fceb (UNCONDITIONAL_JUMP)  ; LAB_0054fceb
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 0054fd7f
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: LAB_0054fd7f
    XOR EDI,EDI                         ; 0054fd84
    MOV dword ptr [ESP + 0x64],EAX      ; 0054fd86
    MOV dword ptr [ESP + 0x88],EDI      ; 0054fd8a
    JMP 0x0054fc62                      ; 0054fd91
        ;   XREF to: 0054fc62 (UNCONDITIONAL_JUMP)  ; LAB_0054fc62
    MOV EDX,dword ptr [ESP + 0x84]      ; 0054fd96
        ;   Label: LAB_0054fd96
    MOV EAX,dword ptr [ESI + 0x64]      ; 0054fd9d
    CMP EAX,EDX                         ; 0054fda0
    JNZ 0x0054feb6                      ; 0054fda2
        ;   XREF to: 0054feb6 (CONDITIONAL_JUMP)  ; LAB_0054feb6
    LEA EDI,[ESP + 0x4c]                ; 0054fda8
    MOV dword ptr [0x007c2ff4],ESI      ; 0054fdac | DAT_007c2ff4
    LEA ESI,[ESI + 0x30]                ; 0054fdb2
    MOV EAX,[0x0061d95c]                ; 0054fdb5 | g_CGamePtr
    MOVSD ES:EDI,ESI                    ; 0054fdba
    MOVSD ES:EDI,ESI                    ; 0054fdbb
    MOVSD ES:EDI,ESI                    ; 0054fdbc
    CMP dword ptr [EAX + 0x228],0x2     ; 0054fdbd | g_CGameInstance.field504_0x228
    JNZ 0x0054fdd2                      ; 0054fdc4
        ;   XREF to: 0054fdd2 (CONDITIONAL_JUMP)  ; LAB_0054fdd2
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 0054fdc6
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV dword ptr [ESP + 0x80],EAX      ; 0054fdcb
    MOV EAX,[0x007c2ff4]                ; 0054fdd2 | DAT_007c2ff4
        ;   Label: LAB_0054fdd2
    PUSH dword ptr [ESP]                ; 0054fdd7
    PUSH EAX                            ; 0054fdda
    MOV EDX,dword ptr [EAX + 0x154]     ; 0054fddb
    CALL dword ptr [EDX + 0xc]          ; 0054fde1
    MOV EAX,[0x0061d95c]                ; 0054fde4 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x228]     ; 0054fde9 | g_CGameInstance.field504_0x228
    ADD ESP,0x8                         ; 0054fdef
    CMP EDX,0x2                         ; 0054fdf2
    JNZ 0x0054fe16                      ; 0054fdf5
        ;   XREF to: 0054fe16 (CONDITIONAL_JUMP)  ; LAB_0054fe16
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 0054fdf7
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV ECX,dword ptr [ESP + 0x80]      ; 0054fdfc
    SUB EAX,ECX                         ; 0054fe03
    MOV dword ptr [EBX + 0x2026370],EAX ; 0054fe05
    MOV EAX,[0x007c2ff4]                ; 0054fe0b | DAT_007c2ff4
    MOV dword ptr [EBX + 0x20282b0],EAX ; 0054fe10
    MOV EAX,[0x0061d95c]                ; 0054fe16 | g_CGamePtr
        ;   Label: LAB_0054fe16
    CMP dword ptr [EAX + 0x228],0x0     ; 0054fe1b | g_CGameInstance.field504_0x228
    JZ 0x0054fe36                       ; 0054fe22
        ;   XREF to: 0054fe36 (CONDITIONAL_JUMP)  ; LAB_0054fe36
    MOV EDI,dword ptr [ESP + 0x88]      ; 0054fe24
    INC EDI                             ; 0054fe2b
    ADD EBX,0x4                         ; 0054fe2c
    MOV dword ptr [ESP + 0x88],EDI      ; 0054fe2f
    MOV EAX,[0x007c2ff4]                ; 0054fe36 | DAT_007c2ff4
        ;   Label: LAB_0054fe36
    PUSH EAX                            ; 0054fe3b
    MOV EDX,dword ptr [EAX + 0x154]     ; 0054fe3c
    CALL dword ptr [EDX + 0xc4]         ; 0054fe42
    ADD ESP,0x4                         ; 0054fe48
    TEST EAX,EAX                        ; 0054fe4b
    JZ 0x0054fe64                       ; 0054fe4d
        ;   XREF to: 0054fe64 (CONDITIONAL_JUMP)  ; LAB_0054fe64
    MOV EDX,dword ptr [0x007c2ff4]      ; 0054fe4f | DAT_007c2ff4
    PUSH 0x0                            ; 0054fe55
    ADD EDX,0x20                        ; 0054fe57
    PUSH EDX                            ; 0054fe5a
    PUSH EAX                            ; 0054fe5b
    CALL core_path.cpp_CPathMap_updateIfNeeded_FUN_005334f0 ; 0054fe5c
        ;   XREF to: 005334f0 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_updateIfNeeded_FUN_005334f0(CPathMap * this_ptr, CVector3f * source_position, int force_update)
    ADD ESP,0xc                         ; 0054fe61
    MOV EDX,dword ptr [0x007c2ff4]      ; 0054fe64 | DAT_007c2ff4
        ;   Label: LAB_0054fe64
    FLD float ptr [ESP + 0x50]          ; 0054fe6a
    FCOMP float ptr [EDX + 0x34]        ; 0054fe6e
    FNSTSW AX                           ; 0054fe71
    SAHF                                ; 0054fe73
    JZ 0x0054fe91                       ; 0054fe74
        ;   XREF to: 0054fe91 (CONDITIONAL_JUMP)  ; LAB_0054fe91
    MOV EAX,[0x007c2ff4]                ; 0054fe76 | DAT_007c2ff4
        ;   Label: LAB_0054fe76
    PUSH EAX                            ; 0054fe7b
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 0054fe7c
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054fe81
    XOR EDX,EDX                         ; 0054fe84
    MOV dword ptr [0x007c2ff4],EDX      ; 0054fe86 | DAT_007c2ff4
    JMP 0x0054fd33                      ; 0054fe8c
        ;   XREF to: 0054fd33 (UNCONDITIONAL_JUMP)  ; LAB_0054fd33
    FLD float ptr [ESP + 0x4c]          ; 0054fe91
        ;   Label: LAB_0054fe91
    FCOMP float ptr [EDX + 0x30]        ; 0054fe95
    FNSTSW AX                           ; 0054fe98
    SAHF                                ; 0054fe9a
    JNZ 0x0054fe76                      ; 0054fe9b
        ;   XREF to: 0054fe76 (CONDITIONAL_JUMP)  ; LAB_0054fe76
    FLD float ptr [ESP + 0x54]          ; 0054fe9d
    FCOMP float ptr [EDX + 0x38]        ; 0054fea1
    FNSTSW AX                           ; 0054fea4
    SAHF                                ; 0054fea6
    JNZ 0x0054fe76                      ; 0054fea7
        ;   XREF to: 0054fe76 (CONDITIONAL_JUMP)  ; LAB_0054fe76
    XOR EDX,EDX                         ; 0054fea9
    MOV dword ptr [0x007c2ff4],EDX      ; 0054feab | DAT_007c2ff4
    JMP 0x0054fd33                      ; 0054feb1
        ;   XREF to: 0054fd33 (UNCONDITIONAL_JUMP)  ; LAB_0054fd33
    JLE 0x0054fd33                      ; 0054feb6
        ;   XREF to: 0054fd33 (CONDITIONAL_JUMP)  ; LAB_0054fd33
        ;   Label: LAB_0054feb6
    CMP EAX,dword ptr [ESP + 0x8c]      ; 0054febc
    JGE 0x0054fd33                      ; 0054fec3
        ;   XREF to: 0054fd33 (CONDITIONAL_JUMP)  ; LAB_0054fd33
    MOV dword ptr [ESP + 0x8c],EAX      ; 0054fec9
    JMP 0x0054fd33                      ; 0054fed0
        ;   XREF to: 0054fd33 (UNCONDITIONAL_JUMP)  ; LAB_0054fd33
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054fed5
        ;   Label: LAB_0054fed5
    MOV ECX,dword ptr [EAX + 0x14d164]  ; 0054fed8
    XOR EDI,EDI                         ; 0054fede
    TEST ECX,ECX                        ; 0054fee0
    JLE 0x005500bc                      ; 0054fee2
        ;   XREF to: 005500bc (CONDITIONAL_JUMP)  ; LAB_005500bc
    MOV ESI,EAX                         ; 0054fee8
    MOV EBX,dword ptr [0x007c637c]      ; 0054feea | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_0054feea
    PUSH EBX                            ; 0054fef0
    MOV EAX,dword ptr [ESI + 0x14d168]  ; 0054fef1
    PUSH EAX                            ; 0054fef7
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0054fef8
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0054fefd
    MOV EBX,EAX                         ; 0054ff00
    MOV dword ptr [ESP + 0x74],EAX      ; 0054ff02
    TEST EAX,EAX                        ; 0054ff06
    JZ 0x0054ffac                       ; 0054ff08
        ;   XREF to: 0054ffac (CONDITIONAL_JUMP)  ; LAB_0054ffac
    PUSH EBX                            ; 0054ff0e
    MOV EAX,dword ptr [EAX + 0x154]     ; 0054ff0f
    CALL dword ptr [EAX + 0x10c]        ; 0054ff15
    ADD ESP,0x4                         ; 0054ff1b
    TEST EAX,EAX                        ; 0054ff1e
    JNZ 0x0054ffac                      ; 0054ff20
        ;   XREF to: 0054ffac (CONDITIONAL_JUMP)  ; LAB_0054ffac
    MOV dword ptr [ESP + 0x60],EAX      ; 0054ff26
    LEA EAX,[ESP + 0x60]                ; 0054ff2a
    PUSH EAX                            ; 0054ff2e
    LEA EAX,[ESP + 0x44]                ; 0054ff2f
    PUSH EAX                            ; 0054ff33
    ADD EBX,0x20                        ; 0054ff34
    PUSH 0x0                            ; 0054ff37
    PUSH EBX                            ; 0054ff39
    MOV ECX,dword ptr [0x0061c010]      ; 0054ff3a | DAT_0061c010
    PUSH ECX                            ; 0054ff40
    CALL core_fire.cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0 ; 0054ff41
        ;   XREF to: 004b6ce0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 0054ff46
    TEST EAX,EAX                        ; 0054ff49
    JZ 0x0054ffac                       ; 0054ff4b
        ;   XREF to: 0054ffac (CONDITIONAL_JUMP)  ; LAB_0054ffac
    LEA EAX,[ESP + 0x4]                 ; 0054ff4d
    PUSH EAX                            ; 0054ff51
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0054ff52
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0054ff57
    MOV EBX,0x4                         ; 0054ff5a
    MOV EAX,dword ptr [ESP + 0x60]      ; 0054ff5f
    LEA EDX,[ESP + 0x10]                ; 0054ff63
    MOV dword ptr [ESP + 0x8],EAX       ; 0054ff67
    LEA EAX,[ESP + 0x40]                ; 0054ff6b
    MOV dword ptr [ESP + 0x34],EBX      ; 0054ff6f
    CMP EDX,EAX                         ; 0054ff73
    JZ 0x0054ff8f                       ; 0054ff75
        ;   XREF to: 0054ff8f (CONDITIONAL_JUMP)  ; LAB_0054ff8f
    MOV EAX,dword ptr [ESP + 0x40]      ; 0054ff77
    MOV dword ptr [ESP + 0x10],EAX      ; 0054ff7b
    MOV EAX,dword ptr [ESP + 0x44]      ; 0054ff7f
    MOV dword ptr [ESP + 0x14],EAX      ; 0054ff83
    MOV EAX,dword ptr [ESP + 0x48]      ; 0054ff87
    MOV dword ptr [ESP + 0x18],EAX      ; 0054ff8b
    LEA EAX,[ESP + 0x4]                 ; 0054ff8f
        ;   Label: LAB_0054ff8f
    MOV EDX,dword ptr [ESP + 0x74]      ; 0054ff93
    PUSH EAX                            ; 0054ff97
    MOV EAX,dword ptr [ESP + 0x78]      ; 0054ff98
    MOV EDX,dword ptr [EDX + 0x154]     ; 0054ff9c
    PUSH EAX                            ; 0054ffa2
    CALL dword ptr [EDX + 0x108]        ; 0054ffa3
    ADD ESP,0x8                         ; 0054ffa9
    MOV EDX,dword ptr [0x01cd0dfc]      ; 0054ffac | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0054ffac
    PUSH EDX                            ; 0054ffb2
    MOV ECX,dword ptr [ESI + 0x14d168]  ; 0054ffb3
    PUSH ECX                            ; 0054ffb9
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0054ffba
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV EBX,EAX                         ; 0054ffbf
    ADD ESP,0x8                         ; 0054ffc1
    TEST EAX,EAX                        ; 0054ffc4
    JZ 0x00550007                       ; 0054ffc6
        ;   XREF to: 00550007 (CONDITIONAL_JUMP)  ; LAB_00550007
    PUSH 0x0                            ; 0054ffc8
    PUSH 0x0                            ; 0054ffca
    ADD EAX,0x20                        ; 0054ffcc
    PUSH 0x0                            ; 0054ffcf
    PUSH EAX                            ; 0054ffd1
    MOV EDX,dword ptr [0x0061c010]      ; 0054ffd2 | DAT_0061c010
    PUSH EDX                            ; 0054ffd8
    MOV dword ptr [ESP + 0x84],EAX      ; 0054ffd9
    CALL core_fire.cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0 ; 0054ffe0
        ;   XREF to: 004b6ce0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 0054ffe5
    TEST EAX,EAX                        ; 0054ffe8
    JZ 0x00550007                       ; 0054ffea
        ;   XREF to: 00550007 (CONDITIONAL_JUMP)  ; LAB_00550007
    PUSH EBX                            ; 0054ffec
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40 ; 0054ffed
        ;   XREF to: 004e3a40 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0054fff2
    TEST EAX,EAX                        ; 0054fff5
    JZ 0x00550007                       ; 0054fff7
        ;   XREF to: 00550007 (CONDITIONAL_JUMP)  ; LAB_00550007
    MOV ECX,dword ptr [ESP + 0x70]      ; 0054fff9
    PUSH ECX                            ; 0054fffd
    PUSH EBX                            ; 0054fffe
    CALL core_glass.cpp_FUN_004e34b0    ; 0054ffff
        ;   XREF to: 004e34b0 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004e34b0()
    ADD ESP,0x8                         ; 00550004
    MOV EBX,dword ptr [0x02c8ae44]      ; 00550007 | g_CTriggerClassInfo.name_hash
        ;   Label: LAB_00550007
    PUSH EBX                            ; 0055000d
    MOV EAX,dword ptr [ESI + 0x14d168]  ; 0055000e
    PUSH EAX                            ; 00550014
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00550015
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV EBX,EAX                         ; 0055001a
    ADD ESP,0x8                         ; 0055001c
    TEST EAX,EAX                        ; 0055001f
    JZ 0x00550066                       ; 00550021
        ;   XREF to: 00550066 (CONDITIONAL_JUMP)  ; LAB_00550066
    CMP dword ptr [EAX + 0x174],0x7     ; 00550023
    JNZ 0x00550066                      ; 0055002a
        ;   XREF to: 00550066 (CONDITIONAL_JUMP)  ; LAB_00550066
    CMP byte ptr [EAX + 0x308],0x0      ; 0055002c
    JNZ 0x00550066                      ; 00550033
        ;   XREF to: 00550066 (CONDITIONAL_JUMP)  ; LAB_00550066
    LEA EAX,[ESP + 0x58]                ; 00550035
    PUSH EAX                            ; 00550039
    XOR ECX,ECX                         ; 0055003a
    PUSH ECX                            ; 0055003c
    LEA EAX,[EBX + 0x20]                ; 0055003d
    PUSH 0x0                            ; 00550040
    PUSH EAX                            ; 00550042
    MOV EAX,[0x0061c010]                ; 00550043 | DAT_0061c010
    PUSH EAX                            ; 00550048
    MOV dword ptr [ESP + 0x6c],ECX      ; 00550049
    CALL core_fire.cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0 ; 0055004d
        ;   XREF to: 004b6ce0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 00550052
    TEST EAX,EAX                        ; 00550055
    JZ 0x00550066                       ; 00550057
        ;   XREF to: 00550066 (CONDITIONAL_JUMP)  ; LAB_00550066
    PUSH dword ptr [ESP + 0x58]         ; 00550059
    PUSH EBX                            ; 0055005d
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_0059be30 ; 0055005e
        ;   XREF to: 0059be30 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_0059be30(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 00550063
    MOV EDX,dword ptr [0x01cc4184]      ; 00550066 | g_CFlameCanClassInfo.name_hash
        ;   Label: LAB_00550066
    PUSH EDX                            ; 0055006c
    MOV ECX,dword ptr [ESI + 0x14d168]  ; 0055006d
    PUSH ECX                            ; 00550073
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00550074
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV EBX,EAX                         ; 00550079
    ADD ESP,0x8                         ; 0055007b
    TEST EAX,EAX                        ; 0055007e
    JZ 0x005500a7                       ; 00550080
        ;   XREF to: 005500a7 (CONDITIONAL_JUMP)  ; LAB_005500a7
    PUSH 0x0                            ; 00550082
    PUSH 0x0                            ; 00550084
    ADD EAX,0x20                        ; 00550086
    PUSH 0x0                            ; 00550089
    PUSH EAX                            ; 0055008b
    MOV EAX,[0x0061c010]                ; 0055008c | DAT_0061c010
    PUSH EAX                            ; 00550091
    CALL core_fire.cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0 ; 00550092
        ;   XREF to: 004b6ce0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 00550097
    TEST EAX,EAX                        ; 0055009a
    JZ 0x005500a7                       ; 0055009c
        ;   XREF to: 005500a7 (CONDITIONAL_JUMP)  ; LAB_005500a7
    PUSH EBX                            ; 0055009e
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180 ; 0055009f
        ;   XREF to: 004b9180 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 005500a4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005500a7
        ;   Label: LAB_005500a7
    INC EDI                             ; 005500aa
    MOV EBX,dword ptr [EAX + 0x14d164]  ; 005500ab
    ADD ESI,0x4                         ; 005500b1
    CMP EDI,EBX                         ; 005500b4
    JL 0x0054feea                       ; 005500b6
        ;   XREF to: 0054feea (CONDITIONAL_JUMP)  ; LAB_0054feea
    MOV EAX,[0x0061d95c]                ; 005500bc | g_CGamePtr
        ;   Label: LAB_005500bc
    MOV ESI,dword ptr [EAX + 0x228]     ; 005500c1 | g_CGameInstance.field504_0x228
    TEST ESI,ESI                        ; 005500c7
    JZ 0x00550230                       ; 005500c9
        ;   XREF to: 00550230 (CONDITIONAL_JUMP)  ; LAB_00550230
    CMP ESI,0x2                         ; 005500cf
    JNZ 0x005501e0                      ; 005500d2
        ;   XREF to: 005501e0 (CONDITIONAL_JUMP)  ; LAB_005501e0
    XOR EAX,EAX                         ; 005500d8
    MOV dword ptr [ESP + 0x7c],EAX      ; 005500da
    MOV EAX,dword ptr [ESP + 0x88]      ; 005500de
    XOR EDX,EDX                         ; 005500e5
    DEC EAX                             ; 005500e7
    MOV dword ptr [ESP + 0x78],EDX      ; 005500e8
    MOV dword ptr [ESP + 0x6c],EAX      ; 005500ec
    TEST EAX,EAX                        ; 005500f0
    JLE 0x0055017d                      ; 005500f2
        ;   XREF to: 0055017d (CONDITIONAL_JUMP)  ; LAB_0055017d
    MOV EAX,dword ptr [ESP + 0x88]      ; 005500f8
    SHL EAX,0x2                         ; 005500ff
    MOV dword ptr [ESP + 0x68],EAX      ; 00550102
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00550106
        ;   Label: LAB_00550106
    MOV EDI,dword ptr [ESP + 0x88]      ; 0055010a
    INC EBX                             ; 00550111
    CMP EBX,EDI                         ; 00550112
    JGE 0x00550161                      ; 00550114
        ;   XREF to: 00550161 (CONDITIONAL_JUMP)  ; LAB_00550161
    MOV EDI,dword ptr [ESP + 0x68]      ; 00550116
    MOV EDX,dword ptr [ESP + 0x78]      ; 0055011a
    LEA EAX,[EBX*0x4 + 0x0]             ; 0055011e
    MOV ESI,dword ptr [EAX + 0x2026370] ; 00550125
        ;   Label: LAB_00550125
    MOV ECX,dword ptr [EDX + 0x2026370] ; 0055012b
    CMP ECX,ESI                         ; 00550131
    JGE 0x00550159                      ; 00550133
        ;   XREF to: 00550159 (CONDITIONAL_JUMP)  ; LAB_00550159
    MOV dword ptr [EDX + 0x2026370],ESI ; 00550135
    MOV dword ptr [EAX + 0x2026370],ECX ; 0055013b
    MOV ECX,dword ptr [EAX + 0x20282b0] ; 00550141
    MOV ESI,dword ptr [EDX + 0x20282b0] ; 00550147
    MOV dword ptr [EDX + 0x20282b0],ECX ; 0055014d
    MOV dword ptr [EAX + 0x20282b0],ESI ; 00550153
    ADD EAX,0x4                         ; 00550159
        ;   Label: LAB_00550159
    INC EBX                             ; 0055015c
    CMP EAX,EDI                         ; 0055015d
    JL 0x00550125                       ; 0055015f
        ;   XREF to: 00550125 (CONDITIONAL_JUMP)  ; LAB_00550125
    MOV EDX,dword ptr [ESP + 0x78]      ; 00550161
        ;   Label: LAB_00550161
    MOV ECX,dword ptr [ESP + 0x7c]      ; 00550165
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00550169
    ADD EDX,0x4                         ; 0055016d
    INC ECX                             ; 00550170
    MOV dword ptr [ESP + 0x78],EDX      ; 00550171
    MOV dword ptr [ESP + 0x7c],ECX      ; 00550175
    CMP ECX,EBX                         ; 00550179
    JL 0x00550106                       ; 0055017b
        ;   XREF to: 00550106 (CONDITIONAL_JUMP)  ; LAB_00550106
    MOV ESI,dword ptr [ESP + 0x88]      ; 0055017d
        ;   Label: LAB_0055017d
    MOV EDI,0x14                        ; 00550184
    CMP ESI,EDI                         ; 00550189
    JGE 0x0055018f                      ; 0055018b
        ;   XREF to: 0055018f (CONDITIONAL_JUMP)  ; LAB_0055018f
    MOV EDI,ESI                         ; 0055018d
    XOR EBX,EBX                         ; 0055018f
        ;   Label: LAB_0055018f
    TEST EDI,EDI                        ; 00550191
    JLE 0x005501e0                      ; 00550193
        ;   XREF to: 005501e0 (CONDITIONAL_JUMP)  ; LAB_005501e0
    XOR ESI,ESI                         ; 00550195
    FILD dword ptr [ESI + 0x2026370]    ; 00550197
        ;   Label: LAB_00550197
    FMUL double ptr [0x005f088e]        ; 0055019d | DAT_005f088e
    FMUL double ptr [0x005f0896]        ; 005501a3 | DAT_005f0896
    FMUL double ptr [0x005f089e]        ; 005501a9 | DAT_005f089e
    FDIV float ptr [ESP]                ; 005501af
    SUB ESP,0x8                         ; 005501b2
    FSTP double ptr [ESP]               ; 005501b5
    MOV EAX,dword ptr [ESI + 0x20282b0] ; 005501b8
    PUSH EAX                            ; 005501be
    PUSH EBX                            ; 005501bf
    PUSH 0x5f0850                       ; 005501c0 | = "%d. %s : %3.2f ms\n"
    MOV EDX,dword ptr [0x00611100]      ; 005501c5 | g_CConsolePtr
    PUSH EDX                            ; 005501cb | g_CConsoleInstance
    ADD ESI,0x4                         ; 005501cc
    INC EBX                             ; 005501cf
    CALL engine_console.cpp_FUN_00445430 ; 005501d0
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x18                        ; 005501d5
    CMP EBX,EDI                         ; 005501d8
    JL 0x00550197                       ; 005501da
        ;   XREF to: 00550197 (CONDITIONAL_JUMP)  ; LAB_00550197
    LEA EAX,[EAX]                       ; 005501dc
    MOV EDI,dword ptr [ESP + 0x64]      ; 005501e0
        ;   Label: LAB_005501e0
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 005501e4
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    SUB EAX,EDI                         ; 005501e9
    MOV dword ptr [ESP + 0x98],EAX      ; 005501eb
    FILD dword ptr [ESP + 0x98]         ; 005501f2
    FMUL double ptr [0x005f088e]        ; 005501f9 | DAT_005f088e
    FMUL double ptr [0x005f0896]        ; 005501ff | DAT_005f0896
    FMUL double ptr [0x005f089e]        ; 00550205 | DAT_005f089e
    FDIV float ptr [ESP]                ; 0055020b
    SUB ESP,0x8                         ; 0055020e
    MOV EAX,dword ptr [ESP + 0x90]      ; 00550211
    FSTP double ptr [ESP]               ; 00550218
    PUSH EAX                            ; 0055021b
    PUSH 0x5f0863                       ; 0055021c | = "Process time (%d actors) : %3.2f ms\n"
    MOV EDX,dword ptr [0x00611100]      ; 00550221 | g_CConsolePtr
    PUSH EDX                            ; 00550227 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00550228
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x14                        ; 0055022d
    MOV EDX,dword ptr [EBP + 0x14]      ; 00550230
        ;   Label: LAB_00550230
    MOV ECX,dword ptr [EDX + 0x14d164]  ; 00550233
    XOR EAX,EAX                         ; 00550239
    TEST ECX,ECX                        ; 0055023b
    JLE 0x00550250                      ; 0055023d
        ;   XREF to: 00550250 (CONDITIONAL_JUMP)  ; LAB_00550250
    MOV EDX,dword ptr [EBP + 0x14]      ; 0055023f
    INC EAX                             ; 00550242
        ;   Label: LAB_00550242
    CMP EAX,dword ptr [EDX + 0x14d164]  ; 00550243
    JL 0x00550242                       ; 00550249
        ;   XREF to: 00550242 (CONDITIONAL_JUMP)  ; LAB_00550242
    LEA EAX,[EAX]                       ; 0055024b
    MOV ECX,ECX                         ; 0055024e
    MOV ESP,EBP                         ; 00550250
        ;   Label: LAB_00550250
    POP EBP                             ; 00550252
    POP EDI                             ; 00550253
    POP ESI                             ; 00550254
    POP EBX                             ; 00550255
    RET                                 ; 00550256

