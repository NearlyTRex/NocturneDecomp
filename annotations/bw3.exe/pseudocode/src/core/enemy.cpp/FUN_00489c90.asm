; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_enemy_cpp_FUN_00489c90(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_boneguy.cpp_CBaalSkel_processDamage_FUN_0041a810 at 0041a85d
;   core_charactr.cpp_FUN_0042ff70 at 0042ffca
;   core_charactr.cpp_FUN_004300e0 at 00430410
;   core_enemy.cpp_CEnemy_randomize_FUN_0048a220 at 0048a261
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_Bullet_005bdcb0
;   TerminatedCString s_CAmmo_Mana_005bdcbd
;   TerminatedCString s_CHealthItemSmall_005bdcc8
;   undefined4 DAT_005bdcdb
;   undefined4 DAT_005bdcdf
;   undefined4 DAT_005bdce7
;   undefined4 DAT_005bdcef
;   undefined4 DAT_00600530
;   undefined4 g_CBoxActorClassInfo.name_hash
;   undefined4 DAT_01d5ba14
;   undefined4 DAT_01d81080
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_inv.cpp_FUN_004dba30
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489c90
        ;   Label: core_enemy.cpp_FUN_00489c90
    PUSH ESI                            ; 00489c91
    PUSH EDI                            ; 00489c92
    PUSH EBP                            ; 00489c93
    MOV EBP,ESP                         ; 00489c94
    SUB ESP,0x50                        ; 00489c96
    AND ESP,0xfffffff8                  ; 00489c99
    MOV EAX,dword ptr [EBP + 0x14]      ; 00489c9c
    MOV EDX,dword ptr [EAX + 0xcecc]    ; 00489c9f
    TEST EDX,EDX                        ; 00489ca5
    JNZ 0x00489e63                      ; 00489ca7
        ;   XREF to: 00489e63 (CONDITIONAL_JUMP)  ; LAB_00489e63
    MOV EBX,dword ptr [EAX + 0xce64]    ; 00489cad
    MOV dword ptr [ESP + 0x38],EDX      ; 00489cb3
    TEST EBX,EBX                        ; 00489cb7
    JLE 0x00489e56                      ; 00489cb9
        ;   XREF to: 00489e56 (CONDITIONAL_JUMP)  ; LAB_00489e56
    ADD EAX,0x20                        ; 00489cbf
    MOV dword ptr [ESP + 0x3c],EAX      ; 00489cc2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00489cc6
    ADD EAX,0x30                        ; 00489cc9
    MOV dword ptr [ESP + 0x40],EAX      ; 00489ccc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00489cd0
    ADD EAX,0xcf48                      ; 00489cd3
    MOV dword ptr [ESP + 0x30],EAX      ; 00489cd8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00489cdc
    ADD EAX,0xce68                      ; 00489cdf
    MOV dword ptr [ESP + 0x28],EAX      ; 00489ce4
    MOV EAX,[0x01d5ba14]                ; 00489ce8 | DAT_01d5ba14
        ;   Label: LAB_00489ce8
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00489ced
    PUSH 0xa                            ; 00489cf4
    ADD EAX,0x206e8                     ; 00489cf6
    PUSH EAX                            ; 00489cfb
    XOR EBX,EBX                         ; 00489cfc
    CALL core_inv.cpp_FUN_004dba30      ; 00489cfe
        ;   XREF to: 004dba30 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dba30()
    ADD ESP,0x8                         ; 00489d03
    TEST EAX,EAX                        ; 00489d06
    JZ 0x00489d0f                       ; 00489d08
        ;   XREF to: 00489d0f (CONDITIONAL_JUMP)  ; LAB_00489d0f
    MOV EBX,0x1                         ; 00489d0a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00489d0f
        ;   Label: LAB_00489d0f
    CMP byte ptr [EAX + 0xce68],0x0     ; 00489d12
    JZ 0x00489e6a                       ; 00489d19
        ;   XREF to: 00489e6a (CONDITIONAL_JUMP)  ; LAB_00489e6a
    MOV EDX,dword ptr [ESP + 0x28]      ; 00489d1f
    PUSH EDX                            ; 00489d23
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 00489d24
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c4f0(char * class_name)
    ADD ESP,0x4                         ; 00489d29
    MOV ECX,dword ptr [0x007e17b4]      ; 00489d2c | g_CBoxActorClassInfo.name_hash
    PUSH ECX                            ; 00489d32
    PUSH EAX                            ; 00489d33
    MOV EBX,EAX                         ; 00489d34
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00489d36
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 00489d3b
    ADD ESP,0x8                         ; 00489d3d
    TEST EAX,EAX                        ; 00489d40
    JZ 0x00489d74                       ; 00489d42
        ;   XREF to: 00489d74 (CONDITIONAL_JUMP)  ; LAB_00489d74
    MOV EDI,dword ptr [ESP + 0x30]      ; 00489d44
    SUB ECX,ECX                         ; 00489d48
    DEC ECX                             ; 00489d4a
    XOR EAX,EAX                         ; 00489d4b
    SCASB.REPNE ES:EDI                  ; 00489d4d
    NOT ECX                             ; 00489d4f
    DEC ECX                             ; 00489d51
    TEST ECX,ECX                        ; 00489d52
    JBE 0x00489d74                      ; 00489d54
        ;   XREF to: 00489d74 (CONDITIONAL_JUMP)  ; LAB_00489d74
    MOV EDI,dword ptr [ESP + 0x30]      ; 00489d56
    PUSH EDI                            ; 00489d5a
    LEA EAX,[ESI + 0x158]               ; 00489d5b
    PUSH EAX                            ; 00489d61
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 00489d62
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00489d67
    MOV dword ptr [ESI + 0x314],0x2     ; 00489d6a
    TEST EBX,EBX                        ; 00489d74
        ;   Label: LAB_00489d74
    JZ 0x00489e3c                       ; 00489d76
        ;   XREF to: 00489e3c (CONDITIONAL_JUMP)  ; LAB_00489e3c
    PUSH 0x40000000                     ; 00489d7c
    PUSH 0xc0000000                     ; 00489d81
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00489d86
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x24],EAX      ; 00489d8b
    ADD ESP,0x8                         ; 00489d8f
    PUSH 0x40000000                     ; 00489d92
    PUSH 0xc0000000                     ; 00489d97
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00489d9c
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x54],EAX      ; 00489da1
    FLD float ptr [ESP + 0x54]          ; 00489da5
    ADD ESP,0x8                         ; 00489da9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00489dac
    MOV dword ptr [ESP + 0x24],EAX      ; 00489db0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00489db4
    LEA EDI,[ESP + 0x10]                ; 00489db8
    FLD float ptr [EAX]                 ; 00489dbc
    MOV EAX,dword ptr [EAX + 0x4]       ; 00489dbe
    LEA ESI,[ESP + 0x4]                 ; 00489dc1
    MOV dword ptr [ESP + 0x8],EAX       ; 00489dc5
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00489dc9
    FADDP                               ; 00489dcd
    FLD float ptr [EAX + 0x8]           ; 00489dcf
    FADD float ptr [ESP + 0x24]         ; 00489dd2
    FXCH                                ; 00489dd6
    FSTP float ptr [ESP + 0x4]          ; 00489dd8
    FSTP float ptr [ESP + 0xc]          ; 00489ddc
    MOVSD ES:EDI,ESI                    ; 00489de0
    MOVSD ES:EDI,ESI                    ; 00489de1
    MOVSD ES:EDI,ESI                    ; 00489de2
    LEA ESI,[EBX + 0x20]                ; 00489de3
    MOV EAX,dword ptr [ESP + 0x10]      ; 00489de6
    MOV dword ptr [ESI],EAX             ; 00489dea
    MOV EAX,dword ptr [ESP + 0x14]      ; 00489dec
    MOV dword ptr [ESI + 0x4],EAX       ; 00489df0
    MOV EAX,dword ptr [ESP + 0x18]      ; 00489df3
    MOV dword ptr [ESI + 0x8],EAX       ; 00489df7
    MOV EAX,dword ptr [EBP + 0x14]      ; 00489dfa
    MOV EAX,dword ptr [EAX + 0x2c]      ; 00489dfd
    MOV EDX,dword ptr [ESP + 0x40]      ; 00489e00
    MOV dword ptr [EBX + 0x2c],EAX      ; 00489e04
    LEA EAX,[EBX + 0x30]                ; 00489e07
    CMP EAX,EDX                         ; 00489e0a
    JZ 0x00489e20                       ; 00489e0c
        ;   XREF to: 00489e20 (CONDITIONAL_JUMP)  ; LAB_00489e20
    MOV ECX,EDX                         ; 00489e0e
    MOV EDX,dword ptr [ECX]             ; 00489e10
    MOV dword ptr [EAX],EDX             ; 00489e12
    MOV EDX,dword ptr [ECX + 0x4]       ; 00489e14
    MOV dword ptr [EAX + 0x4],EDX       ; 00489e17
    MOV EDX,dword ptr [ECX + 0x8]       ; 00489e1a
    MOV dword ptr [EAX + 0x8],EDX       ; 00489e1d
    PUSH EBX                            ; 00489e20
        ;   Label: LAB_00489e20
    MOV EAX,dword ptr [EBX + 0x154]     ; 00489e21
    CALL dword ptr [EAX]                ; 00489e27
    ADD ESP,0x4                         ; 00489e29
    PUSH EBX                            ; 00489e2c
    MOV ECX,dword ptr [0x00600530]      ; 00489e2d | DAT_00600530
    PUSH ECX                            ; 00489e33 | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930 ; 00489e34
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00489e39
    MOV ESI,dword ptr [ESP + 0x38]      ; 00489e3c
        ;   Label: LAB_00489e3c
    MOV ECX,dword ptr [EBP + 0x14]      ; 00489e40
    INC ESI                             ; 00489e43
    MOV EDI,dword ptr [ECX + 0xce64]    ; 00489e44
    MOV dword ptr [ESP + 0x38],ESI      ; 00489e4a
    CMP ESI,EDI                         ; 00489e4e
    JL 0x00489ce8                       ; 00489e50
        ;   XREF to: 00489ce8 (CONDITIONAL_JUMP)  ; LAB_00489ce8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00489e56
        ;   Label: LAB_00489e56
    MOV dword ptr [EAX + 0xcecc],0x1    ; 00489e59
    MOV ESP,EBP                         ; 00489e63
        ;   Label: LAB_00489e63
    POP EBP                             ; 00489e65
    POP EDI                             ; 00489e66
    POP ESI                             ; 00489e67
    POP EBX                             ; 00489e68
    RET                                 ; 00489e69
    MOV EDX,0x41200000                  ; 00489e6a
        ;   Label: LAB_00489e6a
    XOR EAX,EAX                         ; 00489e6f
    MOV dword ptr [ESP + 0x44],EDX      ; 00489e71
    MOV dword ptr [ESP],EDX             ; 00489e75
    MOV dword ptr [ESP + 0x48],EAX      ; 00489e78
    TEST EBX,EBX                        ; 00489e7c
    JZ 0x00489e84                       ; 00489e7e
        ;   XREF to: 00489e84 (CONDITIONAL_JUMP)  ; LAB_00489e84
    MOV dword ptr [ESP + 0x48],EDX      ; 00489e80
    MOV EBX,dword ptr [0x01d5ba14]      ; 00489e84 | DAT_01d5ba14
        ;   Label: LAB_00489e84
    MOV EBX,dword ptr [EBX*0x4 + 0x1d5ba04] ; 00489e8a
    MOV EAX,dword ptr [EBX + 0x20b80]   ; 00489e91
    MOV EDX,EAX                         ; 00489e97
    MOV ECX,0x19                        ; 00489e99
    SAR EDX,0x1f                        ; 00489e9e
    IDIV ECX                            ; 00489ea1
    FLD float ptr [EBX + 0x2538]        ; 00489ea3
    FMUL float ptr [0x005bdcdb]         ; 00489ea9 | DAT_005bdcdb
    FILD dword ptr [EBX + 0x20b84]      ; 00489eaf
    FMUL double ptr [0x005bdce7]        ; 00489eb5 | DAT_005bdce7
    FXCH                                ; 00489ebb
    FSUBR float ptr [0x005bdcdf]        ; 00489ebd | DAT_005bdcdf
    FXCH                                ; 00489ec3
    FSUBR double ptr [0x005bdcef]       ; 00489ec5 | DAT_005bdcef
    FXCH                                ; 00489ecb
    FMUL float ptr [ESP + 0x44]         ; 00489ecd
    FLD float ptr [ESP]                 ; 00489ed1
    FMULP ST2                           ; 00489ed4
    MOV ECX,0x5                         ; 00489ed6
    SUB ECX,EAX                         ; 00489edb
    MOV dword ptr [ESP + 0x4c],ECX      ; 00489edd
    FILD dword ptr [ESP + 0x4c]         ; 00489ee1
    FMUL float ptr [ESP + 0x48]         ; 00489ee5
    FLDZ                                ; 00489ee9
    FXCH ST2                            ; 00489eeb
    FSTP float ptr [ESP + 0x44]         ; 00489eed
    FXCH ST2                            ; 00489ef1
    FSTP float ptr [ESP]                ; 00489ef3
    FXCH                                ; 00489ef6
    FSTP float ptr [ESP + 0x48]         ; 00489ef8
    FCOMP float ptr [ESP + 0x44]        ; 00489efc
    FNSTSW AX                           ; 00489f00
    SAHF                                ; 00489f02
    JBE 0x00489f0b                      ; 00489f03
        ;   XREF to: 00489f0b (CONDITIONAL_JUMP)  ; LAB_00489f0b
    XOR ESI,ESI                         ; 00489f05
    MOV dword ptr [ESP + 0x44],ESI      ; 00489f07
    FLDZ                                ; 00489f0b
        ;   Label: LAB_00489f0b
    FCOMP float ptr [ESP + 0x48]        ; 00489f0d
    FNSTSW AX                           ; 00489f11
    SAHF                                ; 00489f13
    JBE 0x00489f1c                      ; 00489f14
        ;   XREF to: 00489f1c (CONDITIONAL_JUMP)  ; LAB_00489f1c
    XOR EDI,EDI                         ; 00489f16
    MOV dword ptr [ESP + 0x48],EDI      ; 00489f18
    FLDZ                                ; 00489f1c
        ;   Label: LAB_00489f1c
    FCOMP float ptr [ESP]               ; 00489f1e
    FNSTSW AX                           ; 00489f21
    SAHF                                ; 00489f23
    JBE 0x00489f2b                      ; 00489f24
        ;   XREF to: 00489f2b (CONDITIONAL_JUMP)  ; LAB_00489f2b
    XOR EAX,EAX                         ; 00489f26
    MOV dword ptr [ESP],EAX             ; 00489f28
    FLD float ptr [ESP + 0x44]          ; 00489f2b
        ;   Label: LAB_00489f2b
    FADD float ptr [ESP + 0x48]         ; 00489f2f
    FADD float ptr [ESP]                ; 00489f33
    SUB ESP,0x4                         ; 00489f36
    FSTP float ptr [ESP]                ; 00489f39
    PUSH 0x0                            ; 00489f3c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00489f3e
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x54],EAX      ; 00489f43
    FLD float ptr [ESP + 0x54]          ; 00489f47
    ADD ESP,0x8                         ; 00489f4b
    CALL crt_math.c_round_FUN_005a3120  ; 00489f4e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x2c]        ; 00489f53
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00489f57
    MOV dword ptr [ESP + 0x4c],EAX      ; 00489f5b
    FILD dword ptr [ESP + 0x4c]         ; 00489f5f
    FST float ptr [ESP + 0x34]          ; 00489f63
    FCOMP float ptr [ESP]               ; 00489f67
    FNSTSW AX                           ; 00489f6a
    SAHF                                ; 00489f6c
    JC 0x00489f93                       ; 00489f6d
        ;   XREF to: 00489f93 (CONDITIONAL_JUMP)  ; LAB_00489f93
    FLD float ptr [ESP]                 ; 00489f6f
    FADD float ptr [ESP + 0x48]         ; 00489f72
    FCOMP float ptr [ESP + 0x34]        ; 00489f76
    FNSTSW AX                           ; 00489f7a
    SAHF                                ; 00489f7c
    JBE 0x00489fa7                      ; 00489f7d
        ;   XREF to: 00489fa7 (CONDITIONAL_JUMP)  ; LAB_00489fa7
    PUSH 0x5bdcbd                       ; 00489f7f | = "CAmmo_Mana"
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 00489f84
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c4f0(char * class_name)
    ADD ESP,0x4                         ; 00489f89
    MOV EBX,EAX                         ; 00489f8c
    JMP 0x00489d74                      ; 00489f8e
        ;   XREF to: 00489d74 (UNCONDITIONAL_JUMP)  ; LAB_00489d74
    PUSH 0x5bdcb0                       ; 00489f93 | = "CAmmo_Bullet"
        ;   Label: LAB_00489f93
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 00489f98
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c4f0(char * class_name)
    ADD ESP,0x4                         ; 00489f9d
    MOV EBX,EAX                         ; 00489fa0
    JMP 0x00489d74                      ; 00489fa2
        ;   XREF to: 00489d74 (UNCONDITIONAL_JUMP)  ; LAB_00489d74
    PUSH 0x5bdcc8                       ; 00489fa7 | = "CHealthItemSmall"
        ;   Label: LAB_00489fa7
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 00489fac
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c4f0(char * class_name)
    ADD ESP,0x4                         ; 00489fb1
    MOV EBX,EAX                         ; 00489fb4
    JMP 0x00489d74                      ; 00489fb6
        ;   XREF to: 00489d74 (UNCONDITIONAL_JUMP)  ; LAB_00489d74

