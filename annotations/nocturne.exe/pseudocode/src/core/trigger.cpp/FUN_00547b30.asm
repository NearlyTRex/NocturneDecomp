; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trigger_cpp_FUN_00547b30(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0xb8]:1  local_b8
; undefined        Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; Referenced Globals:
;   undefined1* switchdataD_00547af4 = 00547b63
;   undefined1* switchdataD_00547b1c = 00547bdb
;   float FLOAT_005969a7 = 0.5
;   double DOUBLE_005969af = 65536
;   undefined4 DAT_005a3640
;   undefined4 DAT_005b7650
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005baf90
;   undefined4 DAT_005be368
;   undefined4 CVector3f_01c70708.y
;   undefined4 DAT_01cae0d4
;   undefined4 DAT_01cc9450
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_event.cpp_CEventList_executeCommands_FUN_0047ab70
;   core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0048c160
;   core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0
;   core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0
;   core_trigger.cpp_CTrigger_containsActor_FUN_005487b0
;   shape_edittool.cpp_wildcardStringMatch_FUN_004775b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547b30
        ;   Label: core_trigger.cpp_FUN_00547b30
    PUSH ESI                            ; 00547b31
    PUSH EDI                            ; 00547b32
    PUSH EBP                            ; 00547b33
    MOV EBP,ESP                         ; 00547b34
    SUB ESP,0xac                        ; 00547b36
    AND ESP,0xfffffff8                  ; 00547b3c
    MOV ESI,dword ptr [EBP + 0x14]      ; 00547b3f
    XOR EDX,EDX                         ; 00547b42
    MOV EAX,dword ptr [ESI + 0x16c]     ; 00547b44
    MOV dword ptr [ESP + 0x8c],EDX      ; 00547b4a
    MOV dword ptr [ESI + 0x2f4],EDX     ; 00547b51
    CMP EAX,0x9                         ; 00547b57
    JA 0x00547bc9                       ; 00547b5a
        ;   XREF to: 00547bc9 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x547af4]  ; 00547b5c | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[ESI + 0x20]                ; 00547b63
        ;   Label: caseD_0
    PUSH dword ptr [ESI + 0x150]        ; 00547b66
    PUSH EAX                            ; 00547b6c
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0 ; 00547b6d
        ;   XREF to: 004b45b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0()
    ADD ESP,0x8                         ; 00547b72
    TEST EAX,EAX                        ; 00547b75
    JZ 0x00547bc9                       ; 00547b77
        ;   XREF to: 00547bc9 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x20]                ; 00547b79
    PUSH EAX                            ; 00547b7d
    MOV EBX,dword ptr [ESI + 0x14c]     ; 00547b7e
    PUSH ESI                            ; 00547b84
    XOR EDI,EDI                         ; 00547b85
    CALL dword ptr [EBX + 0x14]         ; 00547b87
    MOV EBX,dword ptr [0x01cae0d4]      ; 00547b8a | DAT_01cae0d4
    ADD ESP,0x8                         ; 00547b90
    TEST EBX,EBX                        ; 00547b93
    JLE 0x00547bc9                      ; 00547b95
        ;   XREF to: 00547bc9 (CONDITIONAL_JUMP)  ; default
    XOR EBX,EBX                         ; 00547b97
    MOV EDX,dword ptr [EBX + 0x1cae0d8] ; 00547b99
        ;   Label: LAB_00547b99
    PUSH EDX                            ; 00547b9f
    PUSH ESI                            ; 00547ba0
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_005487b0 ; 00547ba1
        ;   XREF to: 005487b0 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_containsActor_FUN_005487b0()
    ADD ESP,0x8                         ; 00547ba6
    TEST EAX,EAX                        ; 00547ba9
    JZ 0x00547c2c                       ; 00547bab
        ;   XREF to: 00547c2c (CONDITIONAL_JUMP)  ; LAB_00547c2c
    MOV ECX,0x1                         ; 00547bb1
    MOV EAX,dword ptr [EBX + 0x1cae0d8] ; 00547bb6
    MOV dword ptr [ESP + 0x8c],ECX      ; 00547bbc
        ;   Label: LAB_00547bbc
    MOV dword ptr [ESI + 0x2f4],EAX     ; 00547bc3
    MOV EAX,dword ptr [ESI + 0x154]     ; 00547bc9
        ;   Label: default
    CMP EAX,0x3                         ; 00547bcf
    JA 0x00547bf4                       ; 00547bd2
        ;   XREF to: 00547bf4 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x547b1c]  ; 00547bd4 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV ECX,dword ptr [ESP + 0x8c]      ; 00547bdb
        ;   Label: caseD_0
    TEST ECX,ECX                        ; 00547be2
    JZ 0x00548077                       ; 00547be4
        ;   XREF to: 00548077 (CONDITIONAL_JUMP)  ; LAB_00548077
    MOV dword ptr [ESI + 0x164],0x1     ; 00547bea
        ;   Label: LAB_00547bea
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00547bf4
        ;   Label: default
    MOV EDI,dword ptr [ESI + 0x164]     ; 00547bfb
    MOV dword ptr [ESI + 0x2e4],EAX     ; 00547c01
    TEST EDI,EDI                        ; 00547c07
    JZ 0x005480d5                       ; 00547c09
        ;   XREF to: 005480d5 (CONDITIONAL_JUMP)  ; LAB_005480d5
    ADD ESI,0x21c                       ; 00547c0f
    PUSH ESI                            ; 00547c15
    MOV EDX,dword ptr [0x005b7650]      ; 00547c16 | DAT_005b7650
    PUSH EDX                            ; 00547c1c
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 00547c1d
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_executeCommands_FUN_0047ab70()
    ADD ESP,0x8                         ; 00547c22
    MOV ESP,EBP                         ; 00547c25
    POP EBP                             ; 00547c27
    POP EDI                             ; 00547c28
    POP ESI                             ; 00547c29
    POP EBX                             ; 00547c2a
    RET                                 ; 00547c2b
    MOV EAX,[0x01cae0d4]                ; 00547c2c | DAT_01cae0d4
        ;   Label: LAB_00547c2c
    INC EDI                             ; 00547c31
    ADD EBX,0x4                         ; 00547c32
    CMP EDI,EAX                         ; 00547c35
    JL 0x00547b99                       ; 00547c37
        ;   XREF to: 00547b99 (CONDITIONAL_JUMP)  ; LAB_00547b99
    JMP 0x00547bc9                      ; 00547c3d
        ;   XREF to: 00547bc9 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI + 0x360],0x0     ; 00547c3f
        ;   Label: caseD_1
    JNZ 0x00547c64                      ; 00547c46
        ;   XREF to: 00547c64 (CONDITIONAL_JUMP)  ; LAB_00547c64
    LEA EAX,[ESI + 0x170]               ; 00547c48
    PUSH EAX                            ; 00547c4e
    MOV EDI,dword ptr [0x005baf90]      ; 00547c4f | DAT_005baf90
    PUSH EDI                            ; 00547c55 | DAT_01cc9450
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0 ; 00547c56
        ;   XREF to: 004d90a0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0()
    ADD ESP,0x8                         ; 00547c5b
    MOV dword ptr [ESI + 0x360],EAX     ; 00547c5e
    MOV EAX,dword ptr [ESI + 0x360]     ; 00547c64
        ;   Label: LAB_00547c64
    TEST EAX,EAX                        ; 00547c6a
    JZ 0x00547bc9                       ; 00547c6c
        ;   XREF to: 00547bc9 (CONDITIONAL_JUMP)  ; default
    MOV EDX,dword ptr [EAX + 0x70]      ; 00547c72
    MOV EBX,EAX                         ; 00547c75
    CMP EDX,0x1                         ; 00547c77
    JNZ 0x00547bc9                      ; 00547c7a
        ;   XREF to: 00547bc9 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[ESI + 0x20]                ; 00547c80
    LEA EDI,[EBX + 0x20]                ; 00547c83
    FLD float ptr [EAX]                 ; 00547c86
    FSUB float ptr [EDI]                ; 00547c88
    FMUL ST0                            ; 00547c8a
    FLD float ptr [EAX + 0x4]           ; 00547c8c
    FSUB float ptr [EDI + 0x4]          ; 00547c8f
    FMUL ST0                            ; 00547c92
    FLD float ptr [EAX + 0x8]           ; 00547c94
    FXCH                                ; 00547c97
    FADDP ST2,ST0                       ; 00547c99
    FSUB float ptr [EDI + 0x8]          ; 00547c9b
    FMUL ST0                            ; 00547c9e
    FLD float ptr [ESI + 0x150]         ; 00547ca0
    FXCH                                ; 00547ca6
    FADDP ST2,ST0                       ; 00547ca8
    FMUL float ptr [ESI + 0x150]        ; 00547caa
    FXCH                                ; 00547cb0
    FCOMPP                              ; 00547cb2
    FNSTSW AX                           ; 00547cb4
    SAHF                                ; 00547cb6
    JA 0x00547bc9                       ; 00547cb7
        ;   XREF to: 00547bc9 (CONDITIONAL_JUMP)  ; default
    PUSH EBX                            ; 00547cbd
    PUSH ESI                            ; 00547cbe
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_005487b0 ; 00547cbf
        ;   XREF to: 005487b0 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_containsActor_FUN_005487b0()
    ADD ESP,0x8                         ; 00547cc4
    TEST EAX,EAX                        ; 00547cc7
    JZ 0x00547bc9                       ; 00547cc9
        ;   XREF to: 00547bc9 (CONDITIONAL_JUMP)  ; default
    MOV ECX,0x1                         ; 00547ccf
    MOV EAX,dword ptr [ESI + 0x360]     ; 00547cd4
    JMP 0x00547bbc                      ; 00547cda
        ;   XREF to: 00547bbc (UNCONDITIONAL_JUMP)  ; LAB_00547bbc
    LEA EAX,[ESI + 0x20]                ; 00547cdf
        ;   Label: caseD_2
    PUSH dword ptr [ESI + 0x150]        ; 00547ce2
    PUSH EAX                            ; 00547ce8
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0 ; 00547ce9
        ;   XREF to: 004b45b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0()
    ADD ESP,0x8                         ; 00547cee
    TEST EAX,EAX                        ; 00547cf1
    JZ 0x00547bc9                       ; 00547cf3
        ;   XREF to: 00547bc9 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x8]                 ; 00547cf9
    PUSH EAX                            ; 00547cfd
    MOV EBX,dword ptr [ESI + 0x14c]     ; 00547cfe
    PUSH ESI                            ; 00547d04
    CALL dword ptr [EBX + 0x14]         ; 00547d05
    LEA EBX,[EAX + 0xc]                 ; 00547d08
    FLD float ptr [EAX]                 ; 00547d0b
    FADD float ptr [EBX]                ; 00547d0d
    ADD ESP,0x8                         ; 00547d0f
    FST float ptr [ESP + 0x38]          ; 00547d12
    FLD float ptr [EAX + 0x4]           ; 00547d16
    FADD float ptr [EBX + 0x4]          ; 00547d19
    FXCH                                ; 00547d1c
    FLD float ptr [0x005969a7]          ; 00547d1e | FLOAT_005969a7
    FXCH                                ; 00547d24
    FMUL ST1                            ; 00547d26
    FXCH ST2                            ; 00547d28
    FST float ptr [ESP + 0x3c]          ; 00547d2a
    FMUL ST1                            ; 00547d2e
    FLD float ptr [EAX + 0x8]           ; 00547d30
    FADD float ptr [EBX + 0x8]          ; 00547d33
    LEA EAX,[ESP + 0x50]                ; 00547d36
    FST float ptr [ESP + 0x40]          ; 00547d3a
    FMULP ST2                           ; 00547d3e
    PUSH EAX                            ; 00547d40
    LEA EAX,[ESP + 0x60]                ; 00547d41
    FXCH ST2                            ; 00547d45
    FSTP float ptr [ESP + 0x54]         ; 00547d47
    PUSH EAX                            ; 00547d4b
    FXCH                                ; 00547d4c
    FSTP float ptr [ESP + 0x5c]         ; 00547d4e
    PUSH ESI                            ; 00547d52
    FSTP float ptr [ESP + 0x64]         ; 00547d53
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00547d57
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    MOV EBX,EAX                         ; 00547d5c
    LEA EAX,[ESP + 0x74]                ; 00547d5e
    ADD ESP,0xc                         ; 00547d62
    CMP EAX,EBX                         ; 00547d65
    JZ 0x00547d7d                       ; 00547d67
        ;   XREF to: 00547d7d (CONDITIONAL_JUMP)  ; LAB_00547d7d
    MOV EAX,dword ptr [EBX]             ; 00547d69
    MOV dword ptr [ESP + 0x68],EAX      ; 00547d6b
    MOV EAX,dword ptr [EBX + 0x4]       ; 00547d6f
    MOV dword ptr [ESP + 0x6c],EAX      ; 00547d72
    MOV EAX,dword ptr [EBX + 0x8]       ; 00547d76
    MOV dword ptr [ESP + 0x70],EAX      ; 00547d79
    LEA EBX,[ESP + 0x44]                ; 00547d7d
        ;   Label: LAB_00547d7d
    LEA EAX,[ESP + 0x68]                ; 00547d81
    FLD float ptr [EAX]                 ; 00547d85
    FMUL float ptr [0x005a3640]         ; 00547d87 | DAT_005a3640
    FISTP dword ptr [EBX]               ; 00547d8d
    FLD float ptr [EAX + 0x4]           ; 00547d8f
    FMUL float ptr [0x005a3640]         ; 00547d92 | DAT_005a3640
    FISTP dword ptr [EBX + 0x4]         ; 00547d98
    FLD float ptr [EAX + 0x8]           ; 00547d9b
    FMUL float ptr [0x005a3640]         ; 00547d9e | DAT_005a3640
    FISTP dword ptr [EBX + 0x8]         ; 00547da4
    PUSH 0x0                            ; 00547da7
    LEA EAX,[ESP + 0x48]                ; 00547da9
    PUSH EAX                            ; 00547dad
    MOV EDX,dword ptr [0x005be368]      ; 00547dae | DAT_005be368
    PUSH EDX                            ; 00547db4 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0 ; 00547db5
        ;   XREF to: 0050b5c0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0()
    FLD float ptr [ESI + 0x214]         ; 00547dba
    ADD ESP,0xc                         ; 00547dc0
    FMUL double ptr [0x005969af]        ; 00547dc3 | DOUBLE_005969af
    MOV dword ptr [ESP + 0xa8],EAX      ; 00547dc9
    FILD dword ptr [ESP + 0xa8]         ; 00547dd0
    FSTP double ptr [ESP]               ; 00547dd7
    FCOMP double ptr [ESP]              ; 00547dda
    FNSTSW AX                           ; 00547ddd
    SAHF                                ; 00547ddf
    JA 0x00547bc9                       ; 00547de0
        ;   XREF to: 00547bc9 (CONDITIONAL_JUMP)  ; default
    FLD float ptr [ESI + 0x218]         ; 00547de6
    FMUL double ptr [0x005969af]        ; 00547dec | DOUBLE_005969af
    FCOMP double ptr [ESP]              ; 00547df2
    FNSTSW AX                           ; 00547df5
    SAHF                                ; 00547df7
    JC 0x00547bc9                       ; 00547df8
        ;   XREF to: 00547bc9 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESP + 0x8c],0x1      ; 00547dfe
    JMP 0x00547bc9                      ; 00547e09
        ;   XREF to: 00547bc9 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESI + 0x2e8]     ; 00547e0e
        ;   Label: caseD_3
    MOV dword ptr [ESP + 0x8c],EAX      ; 00547e14
    MOV dword ptr [ESI + 0x2e8],0x0     ; 00547e1b
    JMP 0x00547bc9                      ; 00547e25
        ;   XREF to: 00547bc9 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESI + 0x364]         ; 00547e2a
        ;   Label: caseD_7
    FSUB float ptr [EBP + 0x18]         ; 00547e30
    FST float ptr [ESI + 0x364]         ; 00547e33
    FLDZ                                ; 00547e39
    FCOMPP                              ; 00547e3b
    FNSTSW AX                           ; 00547e3d
    SAHF                                ; 00547e3f
    JBE 0x00547e48                      ; 00547e40
        ;   XREF to: 00547e48 (CONDITIONAL_JUMP)  ; LAB_00547e48
    MOV dword ptr [ESI + 0x364],EDX     ; 00547e42
    FLD float ptr [ESI + 0x2f0]         ; 00547e48
        ;   Label: LAB_00547e48
    FLDZ                                ; 00547e4e
    FCOMPP                              ; 00547e50
    FNSTSW AX                           ; 00547e52
    SAHF                                ; 00547e54
    JC 0x00547e68                       ; 00547e55
        ;   XREF to: 00547e68 (CONDITIONAL_JUMP)  ; LAB_00547e68
    MOV EAX,0x1                         ; 00547e57
    MOV dword ptr [ESP + 0x8c],EAX      ; 00547e5c
    JMP 0x00547bc9                      ; 00547e63
        ;   XREF to: 00547bc9 (UNCONDITIONAL_JUMP)  ; default
    XOR EAX,EAX                         ; 00547e68
        ;   Label: LAB_00547e68
    MOV dword ptr [ESP + 0x8c],EAX      ; 00547e6a
    JMP 0x00547bc9                      ; 00547e71
        ;   XREF to: 00547bc9 (UNCONDITIONAL_JUMP)  ; default
    LEA EBX,[ESI + 0x20]                ; 00547e76
        ;   Label: caseD_6
    PUSH dword ptr [ESI + 0x150]        ; 00547e79
    PUSH EBX                            ; 00547e7f
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0 ; 00547e80
        ;   XREF to: 004b45b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0()
    ADD ESP,0x8                         ; 00547e85
    TEST EAX,EAX                        ; 00547e88
    JZ 0x00547bc9                       ; 00547e8a
        ;   XREF to: 00547bc9 (CONDITIONAL_JUMP)  ; default
    FLD float ptr [ESI + 0x158]         ; 00547e90
    FMUL ST0                            ; 00547e96
    FLD float ptr [ESI + 0x15c]         ; 00547e98
    FMUL ST0                            ; 00547e9e
    FADDP                               ; 00547ea0
    FLD float ptr [ESI + 0x160]         ; 00547ea2
    FMUL ST0                            ; 00547ea8
    FADDP                               ; 00547eaa
    PUSH 0x0                            ; 00547eac
    FSTP float ptr [ESP + 0xa8]         ; 00547eae
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00547eb5
    MOV EDI,dword ptr [0x01c7070c]      ; 00547ebc | CVector3f_01c70708.y
    SAR EAX,0x1                         ; 00547ec2
    PUSH 0x0                            ; 00547ec4
    ADD EAX,EDI                         ; 00547ec6
    PUSH EAX                            ; 00547ec8
    PUSH EBX                            ; 00547ec9
    MOV EAX,[0x005b80f0]                ; 00547eca | DAT_005b80f0
    PUSH EAX                            ; 00547ecf
    CALL core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0048c160 ; 00547ed0
        ;   XREF to: 0048c160 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0048c160()
    ADD ESP,0x14                        ; 00547ed5
    MOV dword ptr [ESP + 0x8c],EAX      ; 00547ed8
    JMP 0x00547bc9                      ; 00547edf
        ;   XREF to: 00547bc9 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[ESI + 0x20]                ; 00547ee4
        ;   Label: caseD_8
    PUSH dword ptr [ESI + 0x150]        ; 00547ee7
    PUSH EAX                            ; 00547eed
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0 ; 00547eee
        ;   XREF to: 004b45b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0()
    ADD ESP,0x8                         ; 00547ef3
    TEST EAX,EAX                        ; 00547ef6
    JZ 0x00547bc9                       ; 00547ef8
        ;   XREF to: 00547bc9 (CONDITIONAL_JUMP)  ; default
    XOR EDI,EDI                         ; 00547efe
    MOV dword ptr [ESP + 0x98],EDI      ; 00547f00
    MOV EAX,[0x005be368]                ; 00547f07 | DAT_005be368
        ;   Label: LAB_00547f07
    CMP EDI,dword ptr [EAX + 0x14cd6c]  ; 00547f0c | DAT_01fa3ff0
    JGE 0x00547bc9                      ; 00547f12
        ;   XREF to: 00547bc9 (CONDITIONAL_JUMP)  ; default
    ADD EAX,dword ptr [ESP + 0x98]      ; 00547f18
    MOV EBX,dword ptr [EAX + 0x14cd70]  ; 00547f1f | DAT_01fa3ff4 | DAT_01fa3ff8
    PUSH EBX                            ; 00547f25
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00547f26
    CALL dword ptr [EAX + 0x54]         ; 00547f2c
    ADD ESP,0x4                         ; 00547f2f
    TEST EAX,EAX                        ; 00547f32
    JNZ 0x00547f4a                      ; 00547f34
        ;   XREF to: 00547f4a (CONDITIONAL_JUMP)  ; LAB_00547f4a
    MOV EBX,dword ptr [ESP + 0x98]      ; 00547f36
        ;   Label: LAB_00547f36
    ADD EBX,0x4                         ; 00547f3d
    INC EDI                             ; 00547f40
    MOV dword ptr [ESP + 0x98],EBX      ; 00547f41
    JMP 0x00547f07                      ; 00547f48
        ;   XREF to: 00547f07 (UNCONDITIONAL_JUMP)  ; LAB_00547f07
    PUSH EBX                            ; 00547f4a
        ;   Label: LAB_00547f4a
    PUSH ESI                            ; 00547f4b
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_005487b0 ; 00547f4c
        ;   XREF to: 005487b0 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_containsActor_FUN_005487b0()
    ADD ESP,0x8                         ; 00547f51
    TEST EAX,EAX                        ; 00547f54
    JZ 0x00547f36                       ; 00547f56
        ;   XREF to: 00547f36 (CONDITIONAL_JUMP)  ; LAB_00547f36
    MOV EDI,0x1                         ; 00547f58
    MOV dword ptr [ESI + 0x2f4],EBX     ; 00547f5d
    MOV dword ptr [ESP + 0x8c],EDI      ; 00547f63
    JMP 0x00547bc9                      ; 00547f6a
        ;   XREF to: 00547bc9 (UNCONDITIONAL_JUMP)  ; default
    LEA EBX,[ESI + 0x20]                ; 00547f6f
        ;   Label: caseD_9
    PUSH dword ptr [ESI + 0x150]        ; 00547f72
    PUSH EBX                            ; 00547f78
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0 ; 00547f79
        ;   XREF to: 004b45b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0()
    ADD ESP,0x8                         ; 00547f7e
    TEST EAX,EAX                        ; 00547f81
    JZ 0x00547bc9                       ; 00547f83
        ;   XREF to: 00547bc9 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[ESI + 0x170]               ; 00547f89
    MOV dword ptr [ESP + 0xa0],EBX      ; 00547f8f
    XOR EDI,EDI                         ; 00547f96
    MOV dword ptr [ESP + 0x90],EAX      ; 00547f98
    LEA EAX,[ESI + 0x1c0]               ; 00547f9f
    MOV dword ptr [ESP + 0x9c],EDI      ; 00547fa5
    MOV dword ptr [ESP + 0x94],EAX      ; 00547fac
    MOV EAX,[0x005be368]                ; 00547fb3 | DAT_005be368
        ;   Label: LAB_00547fb3
    CMP EDI,dword ptr [EAX + 0x14cd6c]  ; 00547fb8 | DAT_01fa3ff0
    JGE 0x00547bc9                      ; 00547fbe
        ;   XREF to: 00547bc9 (CONDITIONAL_JUMP)  ; default
    ADD EAX,dword ptr [ESP + 0x9c]      ; 00547fc4
    MOV EBX,dword ptr [EAX + 0x14cd70]  ; 00547fcb | DAT_01fa3ff4 | DAT_01fa3ff8
    LEA EAX,[EBX + 0x20]                ; 00547fd1
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00547fd4
    FLD float ptr [EAX]                 ; 00547fdb
    FSUB float ptr [EDX]                ; 00547fdd
    FMUL ST0                            ; 00547fdf
    FLD float ptr [EAX + 0x4]           ; 00547fe1
    FSUB float ptr [EDX + 0x4]          ; 00547fe4
    FMUL ST0                            ; 00547fe7
    FLD float ptr [EAX + 0x8]           ; 00547fe9
    FXCH                                ; 00547fec
    FADDP ST2,ST0                       ; 00547fee
    FSUB float ptr [EDX + 0x8]          ; 00547ff0
    FMUL ST0                            ; 00547ff3
    FLD float ptr [ESI + 0x150]         ; 00547ff5
    FXCH                                ; 00547ffb
    FADDP ST2,ST0                       ; 00547ffd
    FMUL float ptr [ESI + 0x150]        ; 00547fff
    FXCH                                ; 00548005
    FCOMPP                              ; 00548007
    FNSTSW AX                           ; 00548009
    SAHF                                ; 0054800b
    JBE 0x00548022                      ; 0054800c
        ;   XREF to: 00548022 (CONDITIONAL_JUMP)  ; LAB_00548022
    MOV EBX,dword ptr [ESP + 0x9c]      ; 0054800e
        ;   Label: LAB_0054800e
    ADD EBX,0x4                         ; 00548015
    INC EDI                             ; 00548018
    MOV dword ptr [ESP + 0x9c],EBX      ; 00548019
    JMP 0x00547fb3                      ; 00548020
        ;   XREF to: 00547fb3 (UNCONDITIONAL_JUMP)  ; LAB_00547fb3
    CMP EBX,ESI                         ; 00548022
        ;   Label: LAB_00548022
    JZ 0x0054800e                       ; 00548024
        ;   XREF to: 0054800e (CONDITIONAL_JUMP)  ; LAB_0054800e
    MOV EAX,dword ptr [ESP + 0x94]      ; 00548026
    PUSH EAX                            ; 0054802d
    PUSH EBX                            ; 0054802e
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0054802f
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 00548034
    TEST EAX,EAX                        ; 00548037
    JZ 0x0054800e                       ; 00548039
        ;   XREF to: 0054800e (CONDITIONAL_JUMP)  ; LAB_0054800e
    PUSH 0x0                            ; 0054803b
    PUSH EBX                            ; 0054803d
    MOV EDX,dword ptr [ESP + 0x98]      ; 0054803e
    PUSH EDX                            ; 00548045
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004775b0 ; 00548046
        ;   XREF to: 004775b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_wildcardStringMatch_FUN_004775b0()
    ADD ESP,0xc                         ; 0054804b
    TEST EAX,EAX                        ; 0054804e
    JZ 0x0054800e                       ; 00548050
        ;   XREF to: 0054800e (CONDITIONAL_JUMP)  ; LAB_0054800e
    PUSH EBX                            ; 00548052
    PUSH ESI                            ; 00548053
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_005487b0 ; 00548054
        ;   XREF to: 005487b0 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_containsActor_FUN_005487b0()
    ADD ESP,0x8                         ; 00548059
    TEST EAX,EAX                        ; 0054805c
    JZ 0x0054800e                       ; 0054805e
        ;   XREF to: 0054800e (CONDITIONAL_JUMP)  ; LAB_0054800e
    MOV ECX,0x1                         ; 00548060
    MOV dword ptr [ESI + 0x2f4],EBX     ; 00548065
    MOV dword ptr [ESP + 0x8c],ECX      ; 0054806b
    JMP 0x00547bc9                      ; 00548072
        ;   XREF to: 00547bc9 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI + 0x154],0x0     ; 00548077
        ;   Label: LAB_00548077
    JNZ 0x00547bf4                      ; 0054807e
        ;   XREF to: 00547bf4 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESI + 0x164],ECX     ; 00548084
    JMP 0x00547bf4                      ; 0054808a
        ;   XREF to: 00547bf4 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI + 0x2e4],0x0     ; 0054808f
        ;   Label: caseD_2
    JNZ 0x005480a6                      ; 00548096
        ;   XREF to: 005480a6 (CONDITIONAL_JUMP)  ; LAB_005480a6
    CMP dword ptr [ESP + 0x8c],0x0      ; 00548098
    JNZ 0x00547bea                      ; 005480a0
        ;   XREF to: 00547bea (CONDITIONAL_JUMP)  ; LAB_00547bea
    MOV dword ptr [ESI + 0x164],0x0     ; 005480a6
        ;   Label: LAB_005480a6
    JMP 0x00547bf4                      ; 005480b0
        ;   XREF to: 00547bf4 (UNCONDITIONAL_JUMP)  ; default
    MOV EBX,dword ptr [ESI + 0x2e4]     ; 005480b5
        ;   Label: caseD_3
    CMP EBX,0x1                         ; 005480bb
    JNZ 0x005480a6                      ; 005480be
        ;   XREF to: 005480a6 (CONDITIONAL_JUMP)  ; LAB_005480a6
    CMP dword ptr [ESP + 0x8c],0x0      ; 005480c0
    JNZ 0x005480a6                      ; 005480c8
        ;   XREF to: 005480a6 (CONDITIONAL_JUMP)  ; LAB_005480a6
    MOV dword ptr [ESI + 0x164],EBX     ; 005480ca
    JMP 0x00547bf4                      ; 005480d0
        ;   XREF to: 00547bf4 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[ESI + 0x280]               ; 005480d5
        ;   Label: LAB_005480d5
    PUSH EAX                            ; 005480db
    MOV EAX,[0x005b7650]                ; 005480dc | DAT_005b7650
    PUSH EAX                            ; 005480e1
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 005480e2
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_executeCommands_FUN_0047ab70()
    ADD ESP,0x8                         ; 005480e7
    MOV dword ptr [ESI + 0x2f4],EDI     ; 005480ea
    MOV ESP,EBP                         ; 005480f0
    POP EBP                             ; 005480f2
    POP EDI                             ; 005480f3
    POP ESI                             ; 005480f4
    POP EBX                             ; 005480f5
    RET                                 ; 005480f6

