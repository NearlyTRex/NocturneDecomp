; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_FUN_0056bf00(CDemonActor *param_1,int param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_00563060 at 00563db3
;
; Referenced Globals:
;   undefined4 DAT_005ebc65
;   undefined4 DAT_005ebc6d
;   undefined4 DAT_005ebc75
;   undefined4 DAT_005ebc7d
;   undefined4 DAT_005ebc85
;   undefined4 DAT_005ebc8d
;   undefined4 DAT_005ebc95
;   undefined4 DAT_005ebc9d
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_005fc200
;   undefined4 DAT_005fc204
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CCharacterClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.threat_count
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dirmat.cpp_FUN_00449530
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00535e10
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056bf00
        ;   Label: core_stranger.cpp_FUN_0056bf00
    PUSH ESI                            ; 0056bf01
    PUSH EDI                            ; 0056bf02
    PUSH EBP                            ; 0056bf03
    MOV EBP,ESP                         ; 0056bf04
    SUB ESP,0x21c                       ; 0056bf06
    AND ESP,0xfffffff8                  ; 0056bf0c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0056bf0f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056bf12
    ADD EAX,0x25674                     ; 0056bf15
    MOV dword ptr [ESP + 0x208],EAX     ; 0056bf1a
    CMP ESI,0x1                         ; 0056bf21
    JZ 0x0056c347                       ; 0056bf24
        ;   XREF to: 0056c347 (CONDITIONAL_JUMP)  ; LAB_0056c347
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056bf2a
        ;   Label: LAB_0056bf2a
    MOV EDX,dword ptr [EAX + 0x25698]   ; 0056bf2d
    TEST EDX,EDX                        ; 0056bf33
    JNZ 0x0056c376                      ; 0056bf35
        ;   XREF to: 0056c376 (CONDITIONAL_JUMP)  ; LAB_0056c376
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056bf3b
    MOV dword ptr [EAX + 0xc],EDX       ; 0056bf42
    MOV dword ptr [EAX + 0x4],EDX       ; 0056bf45
    LEA EAX,[ESI*0x8 + 0x0]             ; 0056bf48
    MOV EBX,EAX                         ; 0056bf4f
    SHL EAX,0x4                         ; 0056bf51
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056bf54
    SUB EAX,EBX                         ; 0056bf57
    ADD EAX,ECX                         ; 0056bf59
    MOV EBX,dword ptr [EAX + 0x2620]    ; 0056bf5b
    TEST EBX,EBX                        ; 0056bf61
    JZ 0x0056bf74                       ; 0056bf63
        ;   XREF to: 0056bf74 (CONDITIONAL_JUMP)  ; LAB_0056bf74
    PUSH EBX                            ; 0056bf65
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 0056bf66
    CALL dword ptr [EDX + 0x7c]         ; 0056bf6c
    ADD ESP,0x4                         ; 0056bf6f
    MOV EDX,EAX                         ; 0056bf72
    TEST DL,0x4                         ; 0056bf74
        ;   Label: LAB_0056bf74
    JZ 0x0056c35b                       ; 0056bf77
        ;   XREF to: 0056c35b (CONDITIONAL_JUMP)  ; LAB_0056c35b
    MOV dword ptr [ESP + 0x1e4],0x3     ; 0056bf7d
    TEST ESI,ESI                        ; 0056bf88
        ;   Label: LAB_0056bf88
    JNZ 0x0056c388                      ; 0056bf8a
        ;   XREF to: 0056c388 (CONDITIONAL_JUMP)  ; LAB_0056c388
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056bf90
    CMP dword ptr [EAX + 0x24378],0x2   ; 0056bf93
    JNZ 0x0056bfaa                      ; 0056bf9a
        ;   XREF to: 0056bfaa (CONDITIONAL_JUMP)  ; LAB_0056bfaa
    CMP dword ptr [ESP + 0x1e4],0x0     ; 0056bf9c
    JZ 0x0056c36f                       ; 0056bfa4
        ;   XREF to: 0056c36f (CONDITIONAL_JUMP)  ; LAB_0056c36f
    MOV ESI,0xbfa78d36                  ; 0056bfaa
        ;   Label: LAB_0056bfaa
    MOV EDI,0x3f060a92                  ; 0056bfaf
    MOV EAX,[0x0264be64]                ; 0056bfb4 | DAT_0264be64
    MOV EBX,dword ptr [0x0264be3c]      ; 0056bfb9 | DAT_0264be3c
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0056bfbf
    MOV dword ptr [ESP + 0x200],ESI     ; 0056bfc6
    MOV dword ptr [ESP + 0x1fc],EDI     ; 0056bfcd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056bfd4
        ;   Label: LAB_0056bfd4
    FLD float ptr [EAX + 0x10a94]       ; 0056bfd7
    FMUL float ptr [0x005ebc65]         ; 0056bfdd | DAT_005ebc65
    FMUL double ptr [0x005ebc6d]        ; 0056bfe3 | DAT_005ebc6d
    FMUL float ptr [EBP + 0x1c]         ; 0056bfe9
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056bfec
    FLD float ptr [EAX]                 ; 0056bff3
    FXCH                                ; 0056bff5
    FADD ST0,ST1                        ; 0056bff7
    MOV dword ptr [EAX + 0x4],0x0       ; 0056bff9
    FSTP ST1                            ; 0056c000
    FST float ptr [EAX]                 ; 0056c002
    FCOMP float ptr [0x005fc200]        ; 0056c004 | DAT_005fc200
    FNSTSW AX                           ; 0056c00a
    SAHF                                ; 0056c00c
    JNC 0x0056c01e                      ; 0056c00d
        ;   XREF to: 0056c01e (CONDITIONAL_JUMP)  ; LAB_0056c01e
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c00f
    MOV EDX,dword ptr [0x005fc200]      ; 0056c016 | DAT_005fc200
    MOV dword ptr [EAX],EDX             ; 0056c01c
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c01e
        ;   Label: LAB_0056c01e
    FLD float ptr [EAX]                 ; 0056c025
    FCOMP float ptr [0x005fc204]        ; 0056c027 | DAT_005fc204
    FNSTSW AX                           ; 0056c02d
    SAHF                                ; 0056c02f
    JBE 0x0056c041                      ; 0056c030
        ;   XREF to: 0056c041 (CONDITIONAL_JUMP)  ; LAB_0056c041
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c032
    MOV EDX,dword ptr [0x005fc204]      ; 0056c039 | DAT_005fc204
    MOV dword ptr [EAX],EDX             ; 0056c03f
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c041
        ;   Label: LAB_0056c041
    FLD float ptr [EAX + 0xc]           ; 0056c048
    FCOMP float ptr [ESP + 0x200]       ; 0056c04b
    FNSTSW AX                           ; 0056c052
    SAHF                                ; 0056c054
    JNC 0x0056c068                      ; 0056c055
        ;   XREF to: 0056c068 (CONDITIONAL_JUMP)  ; LAB_0056c068
    MOV EDX,dword ptr [ESP + 0x208]     ; 0056c057
    MOV EAX,dword ptr [ESP + 0x200]     ; 0056c05e
    MOV dword ptr [EDX + 0xc],EAX       ; 0056c065
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c068
        ;   Label: LAB_0056c068
    FLD float ptr [EAX + 0xc]           ; 0056c06f
    FCOMP float ptr [ESP + 0x1fc]       ; 0056c072
    FNSTSW AX                           ; 0056c079
    SAHF                                ; 0056c07b
    JBE 0x0056c08f                      ; 0056c07c
        ;   XREF to: 0056c08f (CONDITIONAL_JUMP)  ; LAB_0056c08f
    MOV EDX,dword ptr [ESP + 0x208]     ; 0056c07e
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0056c085
    MOV dword ptr [EDX + 0xc],EAX       ; 0056c08c
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c08f
        ;   Label: LAB_0056c08f
    FLD float ptr [EAX + 0x4]           ; 0056c096
    FCOMP float ptr [ESP + 0x200]       ; 0056c099
    FNSTSW AX                           ; 0056c0a0
    SAHF                                ; 0056c0a2
    JNC 0x0056c0b6                      ; 0056c0a3
        ;   XREF to: 0056c0b6 (CONDITIONAL_JUMP)  ; LAB_0056c0b6
    MOV EDX,dword ptr [ESP + 0x208]     ; 0056c0a5
    MOV EAX,dword ptr [ESP + 0x200]     ; 0056c0ac
    MOV dword ptr [EDX + 0x4],EAX       ; 0056c0b3
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c0b6
        ;   Label: LAB_0056c0b6
    FLD float ptr [EAX + 0x4]           ; 0056c0bd
    FCOMP float ptr [ESP + 0x1fc]       ; 0056c0c0
    FNSTSW AX                           ; 0056c0c7
    SAHF                                ; 0056c0c9
    JBE 0x0056c0dd                      ; 0056c0ca
        ;   XREF to: 0056c0dd (CONDITIONAL_JUMP)  ; LAB_0056c0dd
    MOV EDX,dword ptr [ESP + 0x208]     ; 0056c0cc
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0056c0d3
    MOV dword ptr [EDX + 0x4],EAX       ; 0056c0da
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c0dd
        ;   Label: LAB_0056c0dd
    MOV dword ptr [EAX + 0x1c],0x0      ; 0056c0e4
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056c0eb
    MOV dword ptr [ESP + 0x1f8],EAX     ; 0056c0ee
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c0f5
    MOV EAX,dword ptr [EAX]             ; 0056c0fc
    MOV dword ptr [ESP + 0x1f4],EAX     ; 0056c0fe
    CMP dword ptr [ESP + 0x1e4],0x3     ; 0056c105
    JZ 0x0056c7e3                       ; 0056c10d
        ;   XREF to: 0056c7e3 (CONDITIONAL_JUMP)  ; LAB_0056c7e3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056c113
    MOV EDX,dword ptr [EAX + 0x24378]   ; 0056c116
    TEST EDX,EDX                        ; 0056c11c
    JNZ 0x0056c7e3                      ; 0056c11e
        ;   XREF to: 0056c7e3 (CONDITIONAL_JUMP)  ; LAB_0056c7e3
    MOV dword ptr [ESP + 0x11c],EDX     ; 0056c124
    MOV dword ptr [ESP + 0x120],EDX     ; 0056c12b
    MOV dword ptr [ESP + 0x118],EDX     ; 0056c132
    MOV EDX,dword ptr [EAX + 0x25698]   ; 0056c139
    TEST EDX,EDX                        ; 0056c13f
    JZ 0x0056c1a9                       ; 0056c141
        ;   XREF to: 0056c1a9 (CONDITIONAL_JUMP)  ; LAB_0056c1a9
    MOV EAX,EDX                         ; 0056c143
    PUSH EAX                            ; 0056c145
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 0056c146
    LEA ESI,[ESP + 0x1a0]               ; 0056c14c
    LEA EDI,[ESP + 0x158]               ; 0056c153
    CALL dword ptr [EDX + 0xe8]         ; 0056c15a
    LEA ESI,[ESP + 0x1a0]               ; 0056c160
    LEA EDX,[ESP + 0x158]               ; 0056c167
    ADD ESP,0x4                         ; 0056c16e
    LEA EAX,[ESP + 0x118]               ; 0056c171
    MOVSD ES:EDI,ESI                    ; 0056c178
    MOVSD ES:EDI,ESI                    ; 0056c179
    MOVSD ES:EDI,ESI                    ; 0056c17a
    CMP EAX,EDX                         ; 0056c17b
    JZ 0x0056c1a9                       ; 0056c17d
        ;   XREF to: 0056c1a9 (CONDITIONAL_JUMP)  ; LAB_0056c1a9
    MOV EAX,dword ptr [ESP + 0x154]     ; 0056c17f
    MOV dword ptr [ESP + 0x118],EAX     ; 0056c186
    MOV EAX,dword ptr [ESP + 0x158]     ; 0056c18d
    MOV dword ptr [ESP + 0x11c],EAX     ; 0056c194
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0056c19b
    MOV dword ptr [ESP + 0x120],EAX     ; 0056c1a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056c1a9
        ;   Label: LAB_0056c1a9
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 0056c1ac
    ADD EAX,0x2b4                       ; 0056c1b3
    TEST ECX,ECX                        ; 0056c1b8
    JNZ 0x0056c40e                      ; 0056c1ba
        ;   XREF to: 0056c40e (CONDITIONAL_JUMP)  ; LAB_0056c40e
    PUSH EBX                            ; 0056c1c0
    PUSH EAX                            ; 0056c1c1
    LEA ESI,[ESP + 0xf0]                ; 0056c1c2
    LEA EDI,[ESP + 0x144]               ; 0056c1c9
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0 ; 0056c1d0
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0xf0]                ; 0056c1d5
    LEA EAX,[ESP + 0x144]               ; 0056c1dc
    ADD ESP,0x8                         ; 0056c1e3
    LEA EDX,[ESP + 0x184]               ; 0056c1e6
    MOVSD ES:EDI,ESI                    ; 0056c1ed
    MOVSD ES:EDI,ESI                    ; 0056c1ee
    MOVSD ES:EDI,ESI                    ; 0056c1ef
    CMP EDX,EAX                         ; 0056c1f0
    JNZ 0x0056c3df                      ; 0056c1f2
        ;   XREF to: 0056c3df (CONDITIONAL_JUMP)  ; LAB_0056c3df
    LEA EAX,[ESP + 0x184]               ; 0056c1f8
        ;   Label: LAB_0056c1f8
    PUSH EAX                            ; 0056c1ff
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056c200
    PUSH ESI                            ; 0056c203
    LEA ESI,[ESP + 0x168]               ; 0056c204
    LEA EDI,[ESP + 0xe4]                ; 0056c20b
    CALL core_actor.cpp_FUN_00408d70    ; 0056c212
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0056c217
    LEA ESI,[ESP + 0x160]               ; 0056c21a
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c221
    MOVSD ES:EDI,ESI                    ; 0056c228
    MOVSD ES:EDI,ESI                    ; 0056c229
    MOVSD ES:EDI,ESI                    ; 0056c22a
    MOV EAX,dword ptr [EAX]             ; 0056c22b
    XOR EDI,EDI                         ; 0056c22d
    MOV dword ptr [ESP + 0x100],EAX     ; 0056c22f
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c236
    MOV dword ptr [ESP + 0x108],EDI     ; 0056c23d
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056c244
    MOV dword ptr [ESP + 0x104],EAX     ; 0056c247
    LEA EAX,[ESP + 0x100]               ; 0056c24e
    PUSH EAX                            ; 0056c255
    LEA EAX,[ESP + 0x94]                ; 0056c256
    PUSH EAX                            ; 0056c25d
    LEA ESI,[ESP + 0x174]               ; 0056c25e
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 0056c265
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV ECX,0x3f800000                  ; 0056c26a
    ADD ESP,0x8                         ; 0056c26f
    LEA EAX,[ESP + 0x178]               ; 0056c272
    MOV dword ptr [ESP + 0x178],EDI     ; 0056c279
    PUSH EAX                            ; 0056c280
    LEA EAX,[ESP + 0x94]                ; 0056c281
    MOV dword ptr [ESP + 0x180],EDI     ; 0056c288
    PUSH EAX                            ; 0056c28f
    MOV dword ptr [ESP + 0x188],ECX     ; 0056c290
    LEA EDI,[ESP + 0xc0]                ; 0056c297
    CALL core_dirmat.cpp_FUN_00449530   ; 0056c29e
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x174]               ; 0056c2a3
    ADD ESP,0x8                         ; 0056c2aa
    MOVSD ES:EDI,ESI                    ; 0056c2ad
    MOVSD ES:EDI,ESI                    ; 0056c2ae
    MOVSD ES:EDI,ESI                    ; 0056c2af
    MOV EBX,0x7149f2ca                  ; 0056c2b0
    XOR ESI,ESI                         ; 0056c2b5
    MOV dword ptr [ESP + 0x20c],EBX     ; 0056c2b7
    MOV dword ptr [ESP + 0x1ec],ESI     ; 0056c2be
    MOV dword ptr [ESP + 0x1f0],ESI     ; 0056c2c5
    MOV EAX,[0x0061b5a8]                ; 0056c2cc | g_CDemonSetPtr
        ;   Label: LAB_0056c2cc
    MOV EDX,dword ptr [ESP + 0x1ec]     ; 0056c2d1
    CMP EDX,dword ptr [EAX + 0x152f30]  ; 0056c2d8 | g_CDemonSetInstance.threat_count
    JGE 0x0056c7f1                      ; 0056c2de
        ;   XREF to: 0056c7f1 (CONDITIONAL_JUMP)  ; LAB_0056c7f1
    MOV ESI,dword ptr [ESP + 0x1f0]     ; 0056c2e4
    MOV EBX,dword ptr [0x007bdc94]      ; 0056c2eb | g_CCharacterClassInfo.name_hash
    ADD EAX,ESI                         ; 0056c2f1
    PUSH EBX                            ; 0056c2f3
    MOV EDI,dword ptr [EAX + 0x152f34]  ; 0056c2f4
    PUSH EDI                            ; 0056c2fa
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0056c2fb
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 0056c300
    ADD ESP,0x8                         ; 0056c302
    TEST EAX,EAX                        ; 0056c305
    JZ 0x0056c491                       ; 0056c307
        ;   XREF to: 0056c491 (CONDITIONAL_JUMP)  ; LAB_0056c491
    PUSH EBX                            ; 0056c30d
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0056c30e
    CALL dword ptr [EAX + 0x114]        ; 0056c314
    ADD ESP,0x4                         ; 0056c31a
    TEST EAX,EAX                        ; 0056c31d
    JZ 0x0056c47c                       ; 0056c31f
        ;   XREF to: 0056c47c (CONDITIONAL_JUMP)  ; LAB_0056c47c
    MOV EBX,dword ptr [ESP + 0x1ec]     ; 0056c325
        ;   Label: LAB_0056c325
    MOV ECX,dword ptr [ESP + 0x1f0]     ; 0056c32c
    INC EBX                             ; 0056c333
    ADD ECX,0x4                         ; 0056c334
    MOV dword ptr [ESP + 0x1ec],EBX     ; 0056c337
    MOV dword ptr [ESP + 0x1f0],ECX     ; 0056c33e
    JMP 0x0056c2cc                      ; 0056c345
        ;   XREF to: 0056c2cc (UNCONDITIONAL_JUMP)  ; LAB_0056c2cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056c347
        ;   Label: LAB_0056c347
    ADD EAX,0x25654                     ; 0056c34a
    MOV dword ptr [ESP + 0x208],EAX     ; 0056c34f
    JMP 0x0056bf2a                      ; 0056c356
        ;   XREF to: 0056bf2a (UNCONDITIONAL_JUMP)  ; LAB_0056bf2a
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c35b
        ;   Label: LAB_0056c35b
    MOV dword ptr [EAX + 0x8],0x0       ; 0056c362
    MOV dword ptr [EAX],0x0             ; 0056c369
    MOV ESP,EBP                         ; 0056c36f
        ;   Label: LAB_0056c36f
    POP EBP                             ; 0056c371
    POP EDI                             ; 0056c372
    POP ESI                             ; 0056c373
    POP EBX                             ; 0056c374
    RET                                 ; 0056c375
    MOV EAX,dword ptr [EDX + 0x43c]     ; 0056c376
        ;   Label: LAB_0056c376
    MOV dword ptr [ESP + 0x1e4],EAX     ; 0056c37c
    JMP 0x0056bf88                      ; 0056c383
        ;   XREF to: 0056bf88 (UNCONDITIONAL_JUMP)  ; LAB_0056bf88
    MOV EAX,[0x0264be68]                ; 0056c388 | DAT_0264be68
        ;   Label: LAB_0056c388
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0056c38d
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 0056c394
    MOV EBX,dword ptr [0x0264be40]      ; 0056c39b | DAT_0264be40
    TEST EAX,EAX                        ; 0056c3a1
    JNZ 0x0056c3c2                      ; 0056c3a3
        ;   XREF to: 0056c3c2 (CONDITIONAL_JUMP)  ; LAB_0056c3c2
    MOV EDI,0x3fa78d36                  ; 0056c3a5
    MOV ESI,0xbf060a92                  ; 0056c3aa
    MOV dword ptr [ESP + 0x1fc],EDI     ; 0056c3af
    MOV dword ptr [ESP + 0x200],ESI     ; 0056c3b6
    JMP 0x0056bfd4                      ; 0056c3bd
        ;   XREF to: 0056bfd4 (UNCONDITIONAL_JUMP)  ; LAB_0056bfd4
    MOV ECX,0x3f060a92                  ; 0056c3c2
        ;   Label: LAB_0056c3c2
    MOV EDX,0xbf060a92                  ; 0056c3c7
    MOV dword ptr [ESP + 0x1fc],ECX     ; 0056c3cc
    MOV dword ptr [ESP + 0x200],EDX     ; 0056c3d3
    JMP 0x0056bfd4                      ; 0056c3da
        ;   XREF to: 0056bfd4 (UNCONDITIONAL_JUMP)  ; LAB_0056bfd4
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0056c3df
        ;   Label: LAB_0056c3df
    MOV dword ptr [ESP + 0x184],EAX     ; 0056c3e6
    MOV EAX,dword ptr [ESP + 0x140]     ; 0056c3ed
    MOV dword ptr [ESP + 0x188],EAX     ; 0056c3f4
    MOV EAX,dword ptr [ESP + 0x144]     ; 0056c3fb
    MOV dword ptr [ESP + 0x18c],EAX     ; 0056c402
    JMP 0x0056c1f8                      ; 0056c409
        ;   XREF to: 0056c1f8 (UNCONDITIONAL_JUMP)  ; LAB_0056c1f8
    MOV EBX,dword ptr [ESP + 0x1d4]     ; 0056c40e
        ;   Label: LAB_0056c40e
    PUSH EBX                            ; 0056c415
    PUSH EAX                            ; 0056c416
    LEA ESI,[ESP + 0x12c]               ; 0056c417
    LEA EDI,[ESP + 0x114]               ; 0056c41e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0 ; 0056c425
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x12c]               ; 0056c42a
    LEA EDX,[ESP + 0x114]               ; 0056c431
    ADD ESP,0x8                         ; 0056c438
    LEA EAX,[ESP + 0x184]               ; 0056c43b
    MOVSD ES:EDI,ESI                    ; 0056c442
    MOVSD ES:EDI,ESI                    ; 0056c443
    MOVSD ES:EDI,ESI                    ; 0056c444
    CMP EAX,EDX                         ; 0056c445
    JZ 0x0056c1f8                       ; 0056c447
        ;   XREF to: 0056c1f8 (CONDITIONAL_JUMP)  ; LAB_0056c1f8
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0056c44d
    MOV dword ptr [ESP + 0x184],EAX     ; 0056c454
    MOV EAX,dword ptr [ESP + 0x110]     ; 0056c45b
    MOV dword ptr [ESP + 0x188],EAX     ; 0056c462
    MOV EAX,dword ptr [ESP + 0x114]     ; 0056c469
    MOV dword ptr [ESP + 0x18c],EAX     ; 0056c470
    JMP 0x0056c1f8                      ; 0056c477
        ;   XREF to: 0056c1f8 (UNCONDITIONAL_JUMP)  ; LAB_0056c1f8
    PUSH EBX                            ; 0056c47c
        ;   Label: LAB_0056c47c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056c47d
    CALL dword ptr [EAX + 0x78]         ; 0056c483
    ADD ESP,0x4                         ; 0056c486
    TEST EAX,EAX                        ; 0056c489
    JNZ 0x0056c325                      ; 0056c48b
        ;   XREF to: 0056c325 (CONDITIONAL_JUMP)  ; LAB_0056c325
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 0056c491
        ;   Label: LAB_0056c491
    MOV EAX,[0x0061b5a8]                ; 0056c498 | g_CDemonSetPtr
    ADD EAX,EDX                         ; 0056c49d
    PUSH 0x5f22b0                       ; 0056c49f | g_CVectorTypeInfo
    MOV EAX,dword ptr [EAX + 0x152f34]  ; 0056c4a4
    PUSH 0xa                            ; 0056c4aa
    MOV dword ptr [ESP + 0x218],EAX     ; 0056c4ac
    LEA EAX,[ESP + 0x20]                ; 0056c4b3
    PUSH EAX                            ; 0056c4b7
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0056c4b8
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0056c4bd
    LEA EAX,[ESP + 0x18]                ; 0056c4c0
    PUSH EAX                            ; 0056c4c4
    MOV ECX,dword ptr [ESP + 0x214]     ; 0056c4c5
    MOV EBX,dword ptr [ESP + 0x214]     ; 0056c4cc
    PUSH ECX                            ; 0056c4d3
    MOV EBX,dword ptr [EBX + 0x2b0]     ; 0056c4d4
    CALL dword ptr [EBX + 0x5c]         ; 0056c4da
    ADD ESP,0x8                         ; 0056c4dd
    MOV dword ptr [ESP + 0x204],EAX     ; 0056c4e0
    CMP EAX,0x1                         ; 0056c4e7
    JL 0x0056c325                       ; 0056c4ea
        ;   XREF to: 0056c325 (CONDITIONAL_JUMP)  ; LAB_0056c325
    XOR EBX,EBX                         ; 0056c4f0
    MOV dword ptr [ESP + 0x214],EBX     ; 0056c4f2
    TEST EAX,EAX                        ; 0056c4f9
    JLE 0x0056c325                      ; 0056c4fb
        ;   XREF to: 0056c325 (CONDITIONAL_JUMP)  ; LAB_0056c325
    LEA EBX,[ESP + 0x18]                ; 0056c501
    PUSH EBX                            ; 0056c505
        ;   Label: LAB_0056c505
    MOV EAX,dword ptr [ESP + 0x214]     ; 0056c506
    PUSH EAX                            ; 0056c50d
    LEA ESI,[ESP + 0x1bc]               ; 0056c50e
    LEA EDI,[ESP + 0xcc]                ; 0056c515
    CALL core_actor.cpp_FUN_00408d70    ; 0056c51c
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x1bc]               ; 0056c521
    ADD ESP,0x8                         ; 0056c528
    LEA EAX,[ESP + 0xc4]                ; 0056c52b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056c532
    PUSH EAX                            ; 0056c535
    MOVSD ES:EDI,ESI                    ; 0056c536
    MOVSD ES:EDI,ESI                    ; 0056c537
    MOVSD ES:EDI,ESI                    ; 0056c538
    PUSH EDX                            ; 0056c539
    LEA ESI,[ESP + 0xd8]                ; 0056c53a
    LEA EDI,[ESP + 0x138]               ; 0056c541
    CALL core_actor.cpp_FUN_00408de0    ; 0056c548
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xd8]                ; 0056c54d
    ADD ESP,0x8                         ; 0056c554
    MOVSD ES:EDI,ESI                    ; 0056c557
    MOVSD ES:EDI,ESI                    ; 0056c558
    MOVSD ES:EDI,ESI                    ; 0056c559
    FLD float ptr [ESP + 0x130]         ; 0056c55a
    FLD float ptr [ESP + 0x134]         ; 0056c561
    FLD float ptr [ESP + 0x138]         ; 0056c568
    LEA EDI,[ESP + 0x148]               ; 0056c56f
    LEA ESI,[ESP + 0x190]               ; 0056c576
    FXCH ST2                            ; 0056c57d
    FSUB float ptr [ESP + 0x184]        ; 0056c57f
    FXCH                                ; 0056c586
    FSUB float ptr [ESP + 0x188]        ; 0056c588
    FXCH ST2                            ; 0056c58f
    FSUB float ptr [ESP + 0x18c]        ; 0056c591
    FXCH                                ; 0056c598
    FSTP float ptr [ESP + 0x190]        ; 0056c59a
    FXCH                                ; 0056c5a1
    FSTP float ptr [ESP + 0x194]        ; 0056c5a3
    FSTP float ptr [ESP + 0x198]        ; 0056c5aa
    MOVSD ES:EDI,ESI                    ; 0056c5b1
    MOVSD ES:EDI,ESI                    ; 0056c5b2
    MOVSD ES:EDI,ESI                    ; 0056c5b3
    FLDZ                                ; 0056c5b4
    FLD float ptr [ESP + 0x150]         ; 0056c5b6
    FSTP double ptr [ESP]               ; 0056c5bd
    FCOMP double ptr [ESP]              ; 0056c5c0
    FNSTSW AX                           ; 0056c5c3
    SAHF                                ; 0056c5c5
    JC 0x0056c5ee                       ; 0056c5c6
        ;   XREF to: 0056c5ee (CONDITIONAL_JUMP)  ; LAB_0056c5ee
    MOV ESI,dword ptr [ESP + 0x214]     ; 0056c5c8
        ;   Label: LAB_0056c5c8
    MOV EDI,dword ptr [ESP + 0x204]     ; 0056c5cf
    INC ESI                             ; 0056c5d6
    ADD EBX,0xc                         ; 0056c5d7
    MOV dword ptr [ESP + 0x214],ESI     ; 0056c5da
    CMP ESI,EDI                         ; 0056c5e1
    JGE 0x0056c325                      ; 0056c5e3
        ;   XREF to: 0056c325 (CONDITIONAL_JUMP)  ; LAB_0056c325
    JMP 0x0056c505                      ; 0056c5e9
        ;   XREF to: 0056c505 (UNCONDITIONAL_JUMP)  ; LAB_0056c505
    FLD double ptr [ESP]                ; 0056c5ee
        ;   Label: LAB_0056c5ee
    FCOMP double ptr [0x005ebc95]       ; 0056c5f1 | DAT_005ebc95
    FNSTSW AX                           ; 0056c5f7
    SAHF                                ; 0056c5f9
    JA 0x0056c5c8                       ; 0056c5fa
        ;   XREF to: 0056c5c8 (CONDITIONAL_JUMP)  ; LAB_0056c5c8
    LEA EAX,[ESP + 0x148]               ; 0056c5fc
    PUSH EAX                            ; 0056c603
    LEA ESI,[ESP + 0xf8]                ; 0056c604
    LEA EDI,[ESP + 0x1ac]               ; 0056c60b
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0056c612
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0xf8]                ; 0056c617
    ADD ESP,0x4                         ; 0056c61e
    MOV ECX,0x3f060a92                  ; 0056c621
    FLD float ptr [ESP + 0x150]         ; 0056c626
    MOV dword ptr [ESP + 0x14],ECX      ; 0056c62d
    MOVSD ES:EDI,ESI                    ; 0056c631
    MOVSD ES:EDI,ESI                    ; 0056c632
    MOVSD ES:EDI,ESI                    ; 0056c633
    FCOMP double ptr [0x005ebc9d]       ; 0056c634 | DAT_005ebc9d
    FNSTSW AX                           ; 0056c63a
    SAHF                                ; 0056c63c
    JNC 0x0056c647                      ; 0056c63d
        ;   XREF to: 0056c647 (CONDITIONAL_JUMP)  ; LAB_0056c647
    MOV dword ptr [ESP + 0x14],0x3fc90fdb ; 0056c63f
    FLD float ptr [ESP + 0x1a8]         ; 0056c647
        ;   Label: LAB_0056c647
    FABS                                ; 0056c64e
    FLD float ptr [ESP + 0x14]          ; 0056c650
    FCOMPP                              ; 0056c654
    FNSTSW AX                           ; 0056c656
    SAHF                                ; 0056c658
    JC 0x0056c5c8                       ; 0056c659
        ;   XREF to: 0056c5c8 (CONDITIONAL_JUMP)  ; LAB_0056c5c8
    FLD float ptr [ESP + 0x1ac]         ; 0056c65f
    FCOMP float ptr [ESP + 0x200]       ; 0056c666
    FNSTSW AX                           ; 0056c66d
    SAHF                                ; 0056c66f
    JC 0x0056c5c8                       ; 0056c670
        ;   XREF to: 0056c5c8 (CONDITIONAL_JUMP)  ; LAB_0056c5c8
    FLD float ptr [ESP + 0x1ac]         ; 0056c676
    FCOMP float ptr [ESP + 0x1fc]       ; 0056c67d
    FNSTSW AX                           ; 0056c684
    SAHF                                ; 0056c686
    JA 0x0056c5c8                       ; 0056c687
        ;   XREF to: 0056c5c8 (CONDITIONAL_JUMP)  ; LAB_0056c5c8
    FLD float ptr [ESP + 0x14c]         ; 0056c68d
    FMUL ST0                            ; 0056c694
    FLD float ptr [ESP + 0x148]         ; 0056c696
    FMUL ST0                            ; 0056c69d
    FADDP                               ; 0056c69f
    FLD float ptr [ESP + 0x150]         ; 0056c6a1
    FMUL ST0                            ; 0056c6a8
    FADDP                               ; 0056c6aa
    FSQRT                               ; 0056c6ac
    FLD1                                ; 0056c6ae
    FLD float ptr [ESP + 0x14c]         ; 0056c6b0
    FXCH                                ; 0056c6b7
    FDIV ST0,ST2                        ; 0056c6b9
    FXCH                                ; 0056c6bb
    FMUL ST1                            ; 0056c6bd
    FLD float ptr [ESP + 0x148]         ; 0056c6bf
    FMUL ST2                            ; 0056c6c6
    FXCH                                ; 0056c6c8
    FST float ptr [ESP + 0x14c]         ; 0056c6ca
    FMUL float ptr [ESP + 0xbc]         ; 0056c6d1
    FXCH                                ; 0056c6d8
    FST float ptr [ESP + 0x148]         ; 0056c6da
    FMUL float ptr [ESP + 0xb8]         ; 0056c6e1
    FLD float ptr [ESP + 0x150]         ; 0056c6e8
    FMULP ST3                           ; 0056c6ef
    FADDP                               ; 0056c6f1
    FXCH                                ; 0056c6f3
    FST float ptr [ESP + 0x150]         ; 0056c6f5
    FMUL float ptr [ESP + 0xc0]         ; 0056c6fc
    FADDP                               ; 0056c703
    FSUBR double ptr [0x005ebc6d]       ; 0056c705 | DAT_005ebc6d
    FXCH                                ; 0056c70b
    FMUL double ptr [0x005ebc75]        ; 0056c70d | DAT_005ebc75
    FADDP                               ; 0056c713
    FST float ptr [ESP + 0x10]          ; 0056c715
    FCOMP float ptr [ESP + 0x20c]       ; 0056c719
    FNSTSW AX                           ; 0056c720
    SAHF                                ; 0056c722
    JNC 0x0056c5c8                      ; 0056c723
        ;   XREF to: 0056c5c8 (CONDITIONAL_JUMP)  ; LAB_0056c5c8
    MOV EDI,dword ptr [0x0061b5a8]      ; 0056c729 | g_CDemonSetPtr
    PUSH EDI                            ; 0056c72f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0056c730
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056c735
    PUSH 0x2                            ; 0056c738
    MOV EAX,[0x0061b5a8]                ; 0056c73a | g_CDemonSetPtr
    PUSH EAX                            ; 0056c73f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0 ; 0056c740
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0056c745
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056c748
    PUSH EDX                            ; 0056c74b
    MOV ECX,dword ptr [0x0061b5a8]      ; 0056c74c | g_CDemonSetPtr
    PUSH ECX                            ; 0056c752 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0056c753
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056c758
    MOV ESI,dword ptr [ESP + 0x210]     ; 0056c75b
    PUSH ESI                            ; 0056c762
    MOV EDI,dword ptr [0x0061b5a8]      ; 0056c763 | g_CDemonSetPtr
    PUSH EDI                            ; 0056c769 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0056c76a
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056c76f
    LEA EAX,[ESP + 0xc4]                ; 0056c772
    PUSH EAX                            ; 0056c779
    LEA EAX,[ESP + 0xe0]                ; 0056c77a
    PUSH EAX                            ; 0056c781
    MOV EAX,[0x0061b5a8]                ; 0056c782 | g_CDemonSetPtr
    PUSH EAX                            ; 0056c787 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00535e10 ; 0056c788
        ;   XREF to: 00535e10 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00535e10(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 0056c78d
    MOV EDX,dword ptr [0x0061b5a8]      ; 0056c790 | g_CDemonSetPtr
    PUSH EDX                            ; 0056c796 | g_CDemonSetInstance
    MOV ESI,EAX                         ; 0056c797
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0056c799
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056c79e
    TEST ESI,ESI                        ; 0056c7a1
    JNZ 0x0056c5c8                      ; 0056c7a3
        ;   XREF to: 0056c5c8 (CONDITIONAL_JUMP)  ; LAB_0056c5c8
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056c7a9
    MOV dword ptr [ESP + 0x20c],EAX     ; 0056c7ad
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 0056c7b4
    MOV dword ptr [ESP + 0x1f8],EAX     ; 0056c7bb
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 0056c7c2
    MOV dword ptr [ESP + 0x1f4],EAX     ; 0056c7c9
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c7d0
    MOV dword ptr [EAX + 0x1c],0x1      ; 0056c7d7
    JMP 0x0056c5c8                      ; 0056c7de
        ;   XREF to: 0056c5c8 (UNCONDITIONAL_JUMP)  ; LAB_0056c5c8
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c7e3
        ;   Label: LAB_0056c7e3
    MOV dword ptr [EAX + 0xc],0x0       ; 0056c7ea
    FLD float ptr [EBP + 0x1c]          ; 0056c7f1
        ;   Label: LAB_0056c7f1
    FMUL float ptr [0x005ebc65]         ; 0056c7f4 | DAT_005ebc65
    FST double ptr [ESP + 0x8]          ; 0056c7fa
    FMUL double ptr [0x005ebc7d]        ; 0056c7fe | DAT_005ebc7d
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 0056c804
    FSTP float ptr [ESP + 0x1e8]        ; 0056c80b
    TEST ESI,ESI                        ; 0056c812
    JZ 0x0056c827                       ; 0056c814
        ;   XREF to: 0056c827 (CONDITIONAL_JUMP)  ; LAB_0056c827
    FLD double ptr [ESP + 0x8]          ; 0056c816
    FMUL double ptr [0x005ebc85]        ; 0056c81a | DAT_005ebc85
    FSTP float ptr [ESP + 0x1e8]        ; 0056c820
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c827
        ;   Label: LAB_0056c827
    FLD float ptr [ESP + 0x1f8]         ; 0056c82e
    FSUB float ptr [EAX + 0xc]          ; 0056c835
    SUB ESP,0x4                         ; 0056c838
    FSTP float ptr [ESP]                ; 0056c83b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0056c83e
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x21c],EAX     ; 0056c843
    FLD float ptr [ESP + 0x21c]         ; 0056c84a
    ADD ESP,0x4                         ; 0056c851
    FLD float ptr [ESP + 0x1f4]         ; 0056c854
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c85b
    FXCH                                ; 0056c862
    FSTP float ptr [ESP + 0x1dc]        ; 0056c864
    FSUB float ptr [EAX + 0x8]          ; 0056c86b
    SUB ESP,0x4                         ; 0056c86e
    FSTP float ptr [ESP]                ; 0056c871
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0056c874
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x21c],EAX     ; 0056c879
    FLD float ptr [ESP + 0x21c]         ; 0056c880
    ADD ESP,0x4                         ; 0056c887
    FLD float ptr [ESP + 0x1e8]         ; 0056c88a
    FLD float ptr [ESP + 0x1dc]         ; 0056c891
    FXCH ST2                            ; 0056c898
    FSTP float ptr [ESP + 0x1e0]        ; 0056c89a
    FCHS                                ; 0056c8a1
    FSTP float ptr [ESP + 0x1d8]        ; 0056c8a3
    FCOMP float ptr [ESP + 0x1d8]       ; 0056c8aa
    FNSTSW AX                           ; 0056c8b1
    SAHF                                ; 0056c8b3
    JNC 0x0056c8c4                      ; 0056c8b4
        ;   XREF to: 0056c8c4 (CONDITIONAL_JUMP)  ; LAB_0056c8c4
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0056c8b6
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0056c8bd
    FLD float ptr [ESP + 0x1dc]         ; 0056c8c4
        ;   Label: LAB_0056c8c4
    FCOMP float ptr [ESP + 0x1e8]       ; 0056c8cb
    FNSTSW AX                           ; 0056c8d2
    SAHF                                ; 0056c8d4
    JBE 0x0056c8e5                      ; 0056c8d5
        ;   XREF to: 0056c8e5 (CONDITIONAL_JUMP)  ; LAB_0056c8e5
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 0056c8d7
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0056c8de
    FLD float ptr [ESP + 0x1e0]         ; 0056c8e5
        ;   Label: LAB_0056c8e5
    FLD float ptr [ESP + 0x1e8]         ; 0056c8ec
    FCHS                                ; 0056c8f3
    FSTP float ptr [ESP + 0x1d0]        ; 0056c8f5
    FCOMP float ptr [ESP + 0x1d0]       ; 0056c8fc
    FNSTSW AX                           ; 0056c903
    SAHF                                ; 0056c905
    JNC 0x0056c916                      ; 0056c906
        ;   XREF to: 0056c916 (CONDITIONAL_JUMP)  ; LAB_0056c916
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0056c908
    MOV dword ptr [ESP + 0x1e0],EAX     ; 0056c90f
    FLD float ptr [ESP + 0x1e0]         ; 0056c916
        ;   Label: LAB_0056c916
    FCOMP float ptr [ESP + 0x1e8]       ; 0056c91d
    FNSTSW AX                           ; 0056c924
    SAHF                                ; 0056c926
    JBE 0x0056c937                      ; 0056c927
        ;   XREF to: 0056c937 (CONDITIONAL_JUMP)  ; LAB_0056c937
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 0056c929
    MOV dword ptr [ESP + 0x1e0],EAX     ; 0056c930
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c937
        ;   Label: LAB_0056c937
    FLD float ptr [EAX + 0xc]           ; 0056c93e
    FADD float ptr [ESP + 0x1dc]        ; 0056c941
    SUB ESP,0x4                         ; 0056c948
    FSTP float ptr [ESP]                ; 0056c94b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0056c94e
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x21c],EAX     ; 0056c953
    FLD float ptr [ESP + 0x21c]         ; 0056c95a
    ADD ESP,0x4                         ; 0056c961
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c964
    FLD float ptr [EAX + 0x8]           ; 0056c96b
    FADD float ptr [ESP + 0x1e0]        ; 0056c96e
    SUB ESP,0x4                         ; 0056c975
    FXCH                                ; 0056c978
    FSTP float ptr [EAX + 0xc]          ; 0056c97a
    FSTP float ptr [ESP]                ; 0056c97d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0056c980
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x21c],EAX     ; 0056c985
    FLD float ptr [ESP + 0x21c]         ; 0056c98c
    ADD ESP,0x4                         ; 0056c993
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c996
    FSTP float ptr [EAX + 0x8]          ; 0056c99d
    MOV EDI,dword ptr [EAX + 0x1c]      ; 0056c9a0
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 0056c9a3
    CMP EDI,0x1                         ; 0056c9aa
    JNZ 0x0056c36f                      ; 0056c9ad
        ;   XREF to: 0056c36f (CONDITIONAL_JUMP)  ; LAB_0056c36f
    FLD float ptr [EAX + 0xc]           ; 0056c9b3
    FSUB float ptr [ESP + 0x1f8]        ; 0056c9b6
    FABS                                ; 0056c9bd
    FCOMP double ptr [0x005ebc8d]       ; 0056c9bf | DAT_005ebc8d
    FNSTSW AX                           ; 0056c9c5
    SAHF                                ; 0056c9c7
    JNC 0x0056c36f                      ; 0056c9c8
        ;   XREF to: 0056c36f (CONDITIONAL_JUMP)  ; LAB_0056c36f
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c9ce
    FLD float ptr [EAX + 0x8]           ; 0056c9d5
    FSUB float ptr [ESP + 0x1f4]        ; 0056c9d8
    FABS                                ; 0056c9df
    FCOMP double ptr [0x005ebc8d]       ; 0056c9e1 | DAT_005ebc8d
    FNSTSW AX                           ; 0056c9e7
    SAHF                                ; 0056c9e9
    JNC 0x0056c36f                      ; 0056c9ea
        ;   XREF to: 0056c36f (CONDITIONAL_JUMP)  ; LAB_0056c36f
    MOV EAX,dword ptr [ESP + 0x208]     ; 0056c9f0
    MOV dword ptr [EAX + 0x1c],0x2      ; 0056c9f7
    MOV ESP,EBP                         ; 0056c9fe
    POP EBP                             ; 0056ca00
    POP EDI                             ; 0056ca01
    POP ESI                             ; 0056ca02
    POP EBX                             ; 0056ca03
    RET                                 ; 0056ca04

