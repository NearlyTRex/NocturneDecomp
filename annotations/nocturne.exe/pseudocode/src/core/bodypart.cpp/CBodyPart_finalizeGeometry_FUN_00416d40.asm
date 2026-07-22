; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(int param_1)
;
; Local Variables:
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
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
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[15]:
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412de0 at 00413007
;   core_batman.cpp_CBatman_processDismemberment_FUN_004145f0 at 00414794
;   core_bodypart.cpp_CBodyPart_archive_FUN_00416570 at 004168a1
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0f0 at 0041a22e
;   core_bride.cpp_CBride_processDismemberment_FUN_00420a10 at 00420b42
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 at 00427e9d
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_0043c360 at 0043c4ec
;   core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_0045a1a0 at 0045a1fc
;   core_gargoyle.cpp_CGargoyle_processDismemberment_FUN_004a8330 at 004a84b6
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004ab190 at 004ab32f
;   ... and 5 more
;
; Referenced Globals:
;   double DOUBLE_005790b2 = 0.00390625
;   double DOUBLE_005790ba = 65535
;   undefined4 DAT_02dd1184
;   undefined4 DAT_02dd1188
;   undefined4 DAT_02dd118c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417730
;   core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0
;   core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_00417d70
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;   crt_math.c_round_FUN_00563a30
;   crt_memory.c_memset_FUN_00563cc0
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004c3920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416d40
        ;   Label: core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40
    PUSH ESI                            ; 00416d41
    PUSH EDI                            ; 00416d42
    PUSH EBP                            ; 00416d43
    MOV EBP,ESP                         ; 00416d44
    SUB ESP,0x8c                        ; 00416d46
    AND ESP,0xfffffff8                  ; 00416d4c
    MOV EDI,dword ptr [EBP + 0x14]      ; 00416d4f
    CMP dword ptr [EDI + 0x16c],0x3     ; 00416d52
    JL 0x00416d64                       ; 00416d59
        ;   XREF to: 00416d64 (CONDITIONAL_JUMP)  ; LAB_00416d64
    CMP dword ptr [EDI + 0x178],0x1     ; 00416d5b
    JGE 0x00416dc4                      ; 00416d62
        ;   XREF to: 00416dc4 (CONDITIONAL_JUMP)  ; LAB_00416dc4
    PUSH 0x0                            ; 00416d64
        ;   Label: LAB_00416d64
    PUSH 0x0                            ; 00416d66
    PUSH EDI                            ; 00416d68
    MOV dword ptr [EDI + 0x70],0x2      ; 00416d69
    CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0 ; 00416d70
        ;   XREF to: 00415ee0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0()
    LEA EAX,[EDI + 0x160]               ; 00416d75
    ADD ESP,0xc                         ; 00416d7b
    MOV EDX,EAX                         ; 00416d7e
    CMP EAX,0x2dd1184                   ; 00416d80
    JZ 0x00416da1                       ; 00416d85
        ;   XREF to: 00416da1 (CONDITIONAL_JUMP)  ; LAB_00416da1
    MOV ECX,dword ptr [0x02dd1184]      ; 00416d87 | DAT_02dd1184
    MOV dword ptr [EAX],ECX             ; 00416d8d
    MOV ECX,dword ptr [0x02dd1188]      ; 00416d8f | DAT_02dd1188
    MOV dword ptr [EAX + 0x4],ECX       ; 00416d95
    MOV ECX,dword ptr [0x02dd118c]      ; 00416d98 | DAT_02dd118c
    MOV dword ptr [EAX + 0x8],ECX       ; 00416d9e
    ADD EDI,0x154                       ; 00416da1
        ;   Label: LAB_00416da1
    CMP EDI,EDX                         ; 00416da7
    JNZ 0x00416db2                      ; 00416da9
        ;   XREF to: 00416db2 (CONDITIONAL_JUMP)  ; LAB_00416db2
    MOV ESP,EBP                         ; 00416dab
        ;   Label: LAB_00416dab
    POP EBP                             ; 00416dad
    POP EDI                             ; 00416dae
    POP ESI                             ; 00416daf
    POP EBX                             ; 00416db0
    RET                                 ; 00416db1
    MOV EAX,dword ptr [EDX]             ; 00416db2
        ;   Label: LAB_00416db2
    MOV dword ptr [EDI],EAX             ; 00416db4
    MOV EAX,dword ptr [EDX + 0x4]       ; 00416db6
    MOV dword ptr [EDI + 0x4],EAX       ; 00416db9
    MOV EAX,dword ptr [EDX + 0x8]       ; 00416dbc
    MOV dword ptr [EDI + 0x8],EAX       ; 00416dbf
    JMP 0x00416dab                      ; 00416dc2
        ;   XREF to: 00416dab (UNCONDITIONAL_JUMP)  ; LAB_00416dab
    LEA EAX,[ESP + 0x40]                ; 00416dc4
        ;   Label: LAB_00416dc4
    PUSH EAX                            ; 00416dc8
    LEA EAX,[ESP + 0x50]                ; 00416dc9
    PUSH EAX                            ; 00416dcd
    PUSH EDI                            ; 00416dce
    CALL core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417730 ; 00416dcf
        ;   XREF to: 00417730 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417730()
    ADD ESP,0xc                         ; 00416dd4
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00416dd7
    MOV EBX,dword ptr [ESP + 0x40]      ; 00416ddb
    ADD EDX,EBX                         ; 00416ddf
    MOV EAX,EDX                         ; 00416de1
    SAR EDX,0x1f                        ; 00416de3
    SUB EAX,EDX                         ; 00416de6
    SAR EAX,0x1                         ; 00416de8
    MOV EDX,dword ptr [ESP + 0x50]      ; 00416dea
    MOV dword ptr [ESP + 0x24],EAX      ; 00416dee
    MOV ESI,EAX                         ; 00416df2
    MOV EAX,dword ptr [ESP + 0x44]      ; 00416df4
    ADD EDX,EAX                         ; 00416df8
    MOV EAX,EDX                         ; 00416dfa
    SAR EDX,0x1f                        ; 00416dfc
    SUB EAX,EDX                         ; 00416dff
    SAR EAX,0x1                         ; 00416e01
    MOV ECX,dword ptr [ESP + 0x48]      ; 00416e03
    MOV EDX,dword ptr [ESP + 0x54]      ; 00416e07
    ADD EDX,ECX                         ; 00416e0b
    MOV EBX,EAX                         ; 00416e0d
    MOV EAX,EDX                         ; 00416e0f
    SAR EDX,0x1f                        ; 00416e11
    SUB EAX,EDX                         ; 00416e14
    SAR EAX,0x1                         ; 00416e16
    NEG ESI                             ; 00416e18
    MOV dword ptr [ESP + 0x24],ESI      ; 00416e1a
    NEG EBX                             ; 00416e1e
    XOR ECX,ECX                         ; 00416e20
    MOV ESI,EAX                         ; 00416e22
    MOV dword ptr [ESP + 0x20],EAX      ; 00416e24
    NEG ESI                             ; 00416e28
    MOV EAX,dword ptr [EDI + 0x16c]     ; 00416e2a
    MOV dword ptr [ESP + 0x20],ESI      ; 00416e30
    TEST EAX,EAX                        ; 00416e34
    JLE 0x00416e70                      ; 00416e36
        ;   XREF to: 00416e70 (CONDITIONAL_JUMP)  ; LAB_00416e70
    XOR EDX,EDX                         ; 00416e38
    MOV EAX,dword ptr [EDI + 0x170]     ; 00416e3a
        ;   Label: LAB_00416e3a
    MOV ESI,dword ptr [ESP + 0x24]      ; 00416e40
    ADD dword ptr [EDX + EAX*0x1],ESI   ; 00416e44
    ADD dword ptr [EDX + EAX*0x1 + 0x4],EBX ; 00416e47
    MOV ESI,dword ptr [ESP + 0x20]      ; 00416e4b
    ADD dword ptr [EDX + EAX*0x1 + 0x8],ESI ; 00416e4f
    INC ECX                             ; 00416e53
    MOV EAX,dword ptr [EDI + 0x16c]     ; 00416e54
    ADD EDX,0xc                         ; 00416e5a
    CMP ECX,EAX                         ; 00416e5d
    JL 0x00416e3a                       ; 00416e5f
        ;   XREF to: 00416e3a (CONDITIONAL_JUMP)  ; LAB_00416e3a
    LEA EAX,[EAX]                       ; 00416e61
    LEA EDX,[EDX]                       ; 00416e67
    LEA EAX,[EAX]                       ; 00416e6d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00416e70
        ;   Label: LAB_00416e70
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00416e74
    MOV ECX,dword ptr [ESP + 0x50]      ; 00416e78
    MOV ESI,dword ptr [ESP + 0x54]      ; 00416e7c
    ADD EDX,EAX                         ; 00416e80
    ADD ECX,EBX                         ; 00416e82
    MOV EAX,dword ptr [ESP + 0x20]      ; 00416e84
    MOV dword ptr [ESP + 0x4c],EDX      ; 00416e88
    MOV EDX,dword ptr [ESP + 0x40]      ; 00416e8c
    ADD ESI,EAX                         ; 00416e90
    MOV EAX,dword ptr [ESP + 0x24]      ; 00416e92
    MOV dword ptr [ESP + 0x54],ESI      ; 00416e96
    MOV ESI,dword ptr [ESP + 0x48]      ; 00416e9a
    ADD EDX,EAX                         ; 00416e9e
    MOV EAX,dword ptr [ESP + 0x20]      ; 00416ea0
    MOV dword ptr [ESP + 0x50],ECX      ; 00416ea4
    ADD ESI,EAX                         ; 00416ea8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00416eaa
    MOV ECX,dword ptr [ESP + 0x44]      ; 00416eae
    MOV dword ptr [ESP + 0x84],EAX      ; 00416eb2
    ADD ECX,EBX                         ; 00416eb9
    FLD double ptr [0x005790b2]         ; 00416ebb | DOUBLE_005790b2
    FILD dword ptr [ESP + 0x84]         ; 00416ec1
    FMUL ST1                            ; 00416ec8
    MOV dword ptr [ESP + 0x44],ECX      ; 00416eca
    MOV dword ptr [ESP + 0x40],EDX      ; 00416ece
    MOV dword ptr [ESP + 0x48],ESI      ; 00416ed2
    FSTP float ptr [EDI + 0x154]        ; 00416ed6
    MOV EAX,dword ptr [ESP + 0x50]      ; 00416edc
    MOV dword ptr [ESP + 0x84],EAX      ; 00416ee0
    FILD dword ptr [ESP + 0x84]         ; 00416ee7
    FMUL ST1                            ; 00416eee
    FSTP float ptr [EDI + 0x158]        ; 00416ef0
    MOV EAX,dword ptr [ESP + 0x54]      ; 00416ef6
    MOV dword ptr [ESP + 0x84],EAX      ; 00416efa
    FILD dword ptr [ESP + 0x84]         ; 00416f01
    FMUL ST1                            ; 00416f08
    FSTP float ptr [EDI + 0x15c]        ; 00416f0a
    MOV EAX,dword ptr [ESP + 0x40]      ; 00416f10
    MOV dword ptr [ESP + 0x84],EAX      ; 00416f14
    FILD dword ptr [ESP + 0x84]         ; 00416f1b
    FMUL ST1                            ; 00416f22
    FSTP float ptr [EDI + 0x160]        ; 00416f24
    MOV EAX,dword ptr [ESP + 0x44]      ; 00416f2a
    MOV dword ptr [ESP + 0x84],EAX      ; 00416f2e
    MOV dword ptr [ESP + 0x88],EBX      ; 00416f35
    FILD dword ptr [ESP + 0x84]         ; 00416f3c
    FMUL ST1                            ; 00416f43
    FILD dword ptr [ESP + 0x88]         ; 00416f45
    FMUL ST2                            ; 00416f4c
    FXCH                                ; 00416f4e
    FSTP float ptr [EDI + 0x164]        ; 00416f50
    MOV EAX,dword ptr [ESP + 0x48]      ; 00416f56
    MOV dword ptr [ESP + 0x88],EAX      ; 00416f5a
    MOV EAX,dword ptr [ESP + 0x20]      ; 00416f61
    FILD dword ptr [ESP + 0x88]         ; 00416f65
    MOV dword ptr [ESP + 0x88],EAX      ; 00416f6c
    FMUL ST2                            ; 00416f73
    FILD dword ptr [ESP + 0x88]         ; 00416f75
    FMUL ST3                            ; 00416f7c
    FXCH ST2                            ; 00416f7e
    FSTP float ptr [ESP + 0x84]         ; 00416f80
    MOV EAX,dword ptr [ESP + 0x24]      ; 00416f87
    FSTP float ptr [EDI + 0x168]        ; 00416f8b
    MOV dword ptr [ESP + 0x88],EAX      ; 00416f91
    MOV EAX,dword ptr [ESP + 0x84]      ; 00416f98
    FSTP float ptr [ESP + 0x84]         ; 00416f9f
    MOV dword ptr [ESP + 0x38],EAX      ; 00416fa6
    MOV EAX,dword ptr [ESP + 0x84]      ; 00416faa
    MOV dword ptr [ESP + 0x3c],EAX      ; 00416fb1
    LEA EAX,[ESP + 0x34]                ; 00416fb5
    PUSH EAX                            ; 00416fb9
    LEA EAX,[ESP + 0x5c]                ; 00416fba
    FILD dword ptr [ESP + 0x8c]         ; 00416fbe
    PUSH EAX                            ; 00416fc5
    FMULP                               ; 00416fc6
    PUSH EDI                            ; 00416fc8
    FSTP float ptr [ESP + 0x40]         ; 00416fc9
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 00416fcd
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    MOV EDX,EAX                         ; 00416fd2
    LEA EAX,[EDI + 0x20]                ; 00416fd4
    FLD float ptr [EDX]                 ; 00416fd7
    FSUBR float ptr [EAX]               ; 00416fd9
    FSTP float ptr [EAX]                ; 00416fdb
    FLD float ptr [EDX + 0x4]           ; 00416fdd
    FSUBR float ptr [EAX + 0x4]         ; 00416fe0
    FSTP float ptr [EAX + 0x4]          ; 00416fe3
    FLD float ptr [EDX + 0x8]           ; 00416fe6
    FSUBR float ptr [EAX + 0x8]         ; 00416fe9
    ADD ESP,0xc                         ; 00416fec
    FSTP float ptr [EAX + 0x8]          ; 00416fef
    MOV EAX,dword ptr [EDI + 0x284]     ; 00416ff2
    XOR EDX,EDX                         ; 00416ff8
    TEST EAX,EAX                        ; 00416ffa
    JLE 0x00417040                      ; 00416ffc
        ;   XREF to: 00417040 (CONDITIONAL_JUMP)  ; LAB_00417040
    LEA EAX,[EDI + 0x288]               ; 00416ffe
    FLD float ptr [EAX]                 ; 00417004
        ;   Label: LAB_00417004
    FADD float ptr [ESP + 0x34]         ; 00417006
    FLD float ptr [EAX + 0x4]           ; 0041700a
    FXCH                                ; 0041700d
    FSTP float ptr [EAX]                ; 0041700f
    FADD float ptr [ESP + 0x38]         ; 00417011
    FLD float ptr [EAX + 0x8]           ; 00417015
    FXCH                                ; 00417018
    FSTP float ptr [EAX + 0x4]          ; 0041701a
    FADD float ptr [ESP + 0x3c]         ; 0041701d
    INC EDX                             ; 00417021
    FSTP float ptr [EAX + 0x8]          ; 00417022
    MOV ECX,dword ptr [EDI + 0x284]     ; 00417025
    ADD EAX,0x194                       ; 0041702b
    CMP EDX,ECX                         ; 00417030
    JL 0x00417004                       ; 00417032
        ;   XREF to: 00417004 (CONDITIONAL_JUMP)  ; LAB_00417004
    LEA EAX,[EAX]                       ; 00417034
    LEA EDX,[EDX]                       ; 0041703a
    MOV EBX,dword ptr [EDI + 0x744]     ; 00417040
        ;   Label: LAB_00417040
    XOR ESI,ESI                         ; 00417046
    TEST EBX,EBX                        ; 00417048
    JLE 0x004170d0                      ; 0041704a
        ;   XREF to: 004170d0 (CONDITIONAL_JUMP)  ; LAB_004170d0
    LEA EAX,[EDI + 0x748]               ; 00417050
    LEA EBX,[EDI + 0x774]               ; 00417056
    MOV dword ptr [ESP + 0x78],EAX      ; 0041705c
    IMUL EAX,ESI,0x2a8                  ; 00417060
        ;   Label: LAB_00417060
    ADD EAX,dword ptr [ESP + 0x78]      ; 00417066
    FLD float ptr [EAX]                 ; 0041706a
    FADD float ptr [ESP + 0x34]         ; 0041706c
    FLD float ptr [EAX + 0x4]           ; 00417070
    FXCH                                ; 00417073
    FSTP float ptr [EAX]                ; 00417075
    FADD float ptr [ESP + 0x38]         ; 00417077
    FLD float ptr [EAX + 0x8]           ; 0041707b
    FXCH                                ; 0041707e
    FSTP float ptr [EAX + 0x4]          ; 00417080
    FADD float ptr [ESP + 0x3c]         ; 00417083
    PUSH EAX                            ; 00417087
    FSTP float ptr [EAX + 0x8]          ; 00417088
    LEA EAX,[ESP + 0x68]                ; 0041708b
    PUSH EAX                            ; 0041708f
    PUSH EDI                            ; 00417090
    ADD EBX,0x2a8                       ; 00417091
    INC ESI                             ; 00417097
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00417098
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    MOV EDX,dword ptr [EAX]             ; 0041709d
    MOV dword ptr [EBX + 0xfffffd58],EDX ; 0041709f
    MOV EDX,dword ptr [EAX + 0x4]       ; 004170a5
    MOV dword ptr [EBX + 0xfffffd5c],EDX ; 004170a8
    MOV EDX,dword ptr [EAX + 0x8]       ; 004170ae
    MOV dword ptr [EBX + 0xfffffd60],EDX ; 004170b1
    MOV ECX,dword ptr [EDI + 0x744]     ; 004170b7
    ADD ESP,0xc                         ; 004170bd
    CMP ESI,ECX                         ; 004170c0
    JL 0x00417060                       ; 004170c2
        ;   XREF to: 00417060 (CONDITIONAL_JUMP)  ; LAB_00417060
    LEA EAX,[EAX]                       ; 004170c4
    LEA EDX,[EDX]                       ; 004170ca
    MOV EDX,dword ptr [EDI + 0x16c]     ; 004170d0
        ;   Label: LAB_004170d0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004170d6
    SUB EAX,EDX                         ; 004170dd
    SHL EAX,0x2                         ; 004170df
    PUSH EAX                            ; 004170e2
    PUSH 0x0                            ; 004170e3
    MOV EBX,dword ptr [EDI + 0x174]     ; 004170e5
    PUSH EBX                            ; 004170eb
    XOR ESI,ESI                         ; 004170ec
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004170ee
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 004170f3
    MOV EAX,dword ptr [EDI + 0x178]     ; 004170f6
    MOV dword ptr [ESP + 0x80],ESI      ; 004170fc
    TEST EAX,EAX                        ; 00417103
    JLE 0x00417189                      ; 00417105
        ;   XREF to: 00417189 (CONDITIONAL_JUMP)  ; LAB_00417189
    MOV dword ptr [ESP + 0x7c],ESI      ; 0041710b
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0041710f
        ;   Label: LAB_0041710f
    MOV EBX,dword ptr [EDI + 0x17c]     ; 00417113
    ADD EBX,EDX                         ; 00417119
    MOV dword ptr [EBX + 0x4],0x3       ; 0041711b
    PUSH EBX                            ; 00417122
    MOV ECX,dword ptr [EDI + 0x170]     ; 00417123
    PUSH ECX                            ; 00417129
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004c3920 ; 0041712a
        ;   XREF to: 004c3920 (UNCONDITIONAL_CALL)  ; undefined engine_keyframe.c_calculateSurfaceNormal_FUN_004c3920()
    ADD ESP,0x8                         ; 0041712f
    MOV ESI,dword ptr [EBX + 0x4]       ; 00417132
    XOR EDX,EDX                         ; 00417135
    TEST ESI,ESI                        ; 00417137
    JLE 0x00417165                      ; 00417139
        ;   XREF to: 00417165 (CONDITIONAL_JUMP)  ; LAB_00417165
    MOV ECX,EBX                         ; 0041713b
    IMUL ESI,dword ptr [ECX + 0x18],0xc ; 0041713d
        ;   Label: LAB_0041713d
    MOV EAX,dword ptr [EDI + 0x174]     ; 00417141
    ADD EAX,ESI                         ; 00417147
    MOV ESI,dword ptr [EBX + 0x8]       ; 00417149
    ADD dword ptr [EAX],ESI             ; 0041714c
    MOV ESI,dword ptr [EBX + 0xc]       ; 0041714e
    ADD dword ptr [EAX + 0x4],ESI       ; 00417151
    MOV ESI,dword ptr [EBX + 0x10]      ; 00417154
    ADD dword ptr [EAX + 0x8],ESI       ; 00417157
    INC EDX                             ; 0041715a
    MOV ESI,dword ptr [EBX + 0x4]       ; 0041715b
    ADD ECX,0xc                         ; 0041715e
    CMP EDX,ESI                         ; 00417161
    JL 0x0041713d                       ; 00417163
        ;   XREF to: 0041713d (CONDITIONAL_JUMP)  ; LAB_0041713d
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00417165
        ;   Label: LAB_00417165
    MOV ECX,dword ptr [ESP + 0x80]      ; 00417169
    MOV EBX,dword ptr [EDI + 0x178]     ; 00417170
    ADD EDX,0x3c                        ; 00417176
    INC ECX                             ; 00417179
    MOV dword ptr [ESP + 0x7c],EDX      ; 0041717a
    MOV dword ptr [ESP + 0x80],ECX      ; 0041717e
    CMP ECX,EBX                         ; 00417185
    JL 0x0041710f                       ; 00417187
        ;   XREF to: 0041710f (CONDITIONAL_JUMP)  ; LAB_0041710f
    MOV ESI,dword ptr [EDI + 0x16c]     ; 00417189
        ;   Label: LAB_00417189
    XOR EBX,EBX                         ; 0041718f
    TEST ESI,ESI                        ; 00417191
    JLE 0x0041722e                      ; 00417193
        ;   XREF to: 0041722e (CONDITIONAL_JUMP)  ; LAB_0041722e
    XOR ECX,ECX                         ; 00417199
    MOV EDX,dword ptr [EDI + 0x174]     ; 0041719b
        ;   Label: LAB_0041719b
    ADD EDX,ECX                         ; 004171a1
    FILD dword ptr [EDX]                ; 004171a3
    FST double ptr [ESP + 0x18]         ; 004171a5
    FMUL double ptr [ESP + 0x18]        ; 004171a9
    FILD dword ptr [EDX + 0x4]          ; 004171ad
    FST double ptr [ESP + 0x10]         ; 004171b0
    FMUL double ptr [ESP + 0x10]        ; 004171b4
    FILD dword ptr [EDX + 0x8]          ; 004171b8
    FXCH                                ; 004171bb
    FADDP ST2,ST0                       ; 004171bd
    FST double ptr [ESP + 0x8]          ; 004171bf
    FMUL double ptr [ESP + 0x8]         ; 004171c3
    FADDP                               ; 004171c7
    FSQRT                               ; 004171c9
    FLDZ                                ; 004171cb
    FXCH                                ; 004171cd
    FSTP double ptr [ESP]               ; 004171cf
    FCOMP double ptr [ESP]              ; 004171d2
    FNSTSW AX                           ; 004171d5
    SAHF                                ; 004171d7
    JNC 0x00417305                      ; 004171d8
        ;   XREF to: 00417305 (CONDITIONAL_JUMP)  ; LAB_00417305
    FLD double ptr [ESP + 0x18]         ; 004171de
    FLD double ptr [0x005790ba]         ; 004171e2 | DOUBLE_005790ba
    FDIV double ptr [ESP]               ; 004171e8
    FXCH                                ; 004171eb
    FMUL ST1                            ; 004171ed
    FLD double ptr [ESP + 0x10]         ; 004171ef
    FMUL ST2                            ; 004171f3
    FLD double ptr [ESP + 0x8]          ; 004171f5
    FMULP ST3                           ; 004171f9
    FXCH                                ; 004171fb
    CALL crt_math.c_round_FUN_00563a30  ; 004171fd
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 00417202
    CALL crt_math.c_round_FUN_00563a30  ; 00417204
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 00417209
    CALL crt_math.c_round_FUN_00563a30  ; 0041720b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 00417210
    FISTP dword ptr [EDX]               ; 00417212
    FXCH                                ; 00417214
    FISTP dword ptr [EDX + 0x4]         ; 00417216
    FISTP dword ptr [EDX + 0x8]         ; 00417219
    INC EBX                             ; 0041721c
        ;   Label: LAB_0041721c
    MOV EAX,dword ptr [EDI + 0x16c]     ; 0041721d
    ADD ECX,0xc                         ; 00417223
    CMP EBX,EAX                         ; 00417226
    JL 0x0041719b                       ; 00417228
        ;   XREF to: 0041719b (CONDITIONAL_JUMP)  ; LAB_0041719b
    PUSH EDI                            ; 0041722e
        ;   Label: LAB_0041722e
    CALL core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_00417d70 ; 0041722f
        ;   XREF to: 00417d70 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_00417d70()
    LEA EAX,[EDI + 0xcf4]               ; 00417234
    LEA EDX,[EDI + 0x278]               ; 0041723a
    ADD ESP,0x4                         ; 00417240
    CMP EAX,EDX                         ; 00417243
    JZ 0x00417257                       ; 00417245
        ;   XREF to: 00417257 (CONDITIONAL_JUMP)  ; LAB_00417257
    MOV ECX,dword ptr [EDX]             ; 00417247
    MOV dword ptr [EAX],ECX             ; 00417249
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041724b
    MOV dword ptr [EAX + 0x4],ECX       ; 0041724e
    MOV ECX,dword ptr [EDX + 0x8]       ; 00417251
    MOV dword ptr [EAX + 0x8],ECX       ; 00417254
    LEA EAX,[EDI + 0x278]               ; 00417257
        ;   Label: LAB_00417257
    PUSH EAX                            ; 0041725d
    LEA EAX,[ESP + 0x2c]                ; 0041725e
    PUSH EAX                            ; 00417262
    LEA EAX,[EDI + 0xccc]               ; 00417263
    PUSH EAX                            ; 00417269
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 0041726a
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    LEA EDX,[EDI + 0xd00]               ; 0041726f
    ADD ESP,0xc                         ; 00417275
    CMP EDX,EAX                         ; 00417278
    JZ 0x0041728c                       ; 0041727a
        ;   XREF to: 0041728c (CONDITIONAL_JUMP)  ; LAB_0041728c
    MOV ECX,dword ptr [EAX]             ; 0041727c
    MOV dword ptr [EDX],ECX             ; 0041727e
    MOV ECX,dword ptr [EAX + 0x4]       ; 00417280
    MOV dword ptr [EDX + 0x4],ECX       ; 00417283
    MOV ECX,dword ptr [EAX + 0x8]       ; 00417286
    MOV dword ptr [EDX + 0x8],ECX       ; 00417289
    PUSH 0x40490fdb                     ; 0041728c
        ;   Label: LAB_0041728c
    PUSH 0xc0490fdb                     ; 00417291
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00417296
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x90],EAX      ; 0041729b
    FLD float ptr [ESP + 0x90]          ; 004172a2
    ADD ESP,0x8                         ; 004172a9
    PUSH 0x40490fdb                     ; 004172ac
    PUSH 0xc0490fdb                     ; 004172b1
    FSTP float ptr [EDI + 0xd24]        ; 004172b6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004172bc
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x90],EAX      ; 004172c1
    FLD float ptr [ESP + 0x90]          ; 004172c8
    ADD ESP,0x8                         ; 004172cf
    PUSH 0x4116cbe4                     ; 004172d2
    PUSH 0xc116cbe4                     ; 004172d7
    FSTP float ptr [EDI + 0xd2c]        ; 004172dc
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004172e2
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x90],EAX      ; 004172e7
    MOV EAX,dword ptr [ESP + 0x90]      ; 004172ee
    MOV dword ptr [EDI + 0xd28],EAX     ; 004172f5
    ADD ESP,0x8                         ; 004172fb
    MOV ESP,EBP                         ; 004172fe
    POP EBP                             ; 00417300
    POP EDI                             ; 00417301
    POP ESI                             ; 00417302
    POP EBX                             ; 00417303
    RET                                 ; 00417304
    MOV dword ptr [EDX + 0x8],0x0       ; 00417305
        ;   Label: LAB_00417305
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041730c
    MOV dword ptr [EDX + 0x4],EAX       ; 0041730f
    MOV dword ptr [EDX],EAX             ; 00417312
    JMP 0x0041721c                      ; 00417314
        ;   XREF to: 0041721c (UNCONDITIONAL_JUMP)  ; LAB_0041721c

