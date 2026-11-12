; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_00459ff0(CDemonActor *param_1,int param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
;
; XREF[1]:
;   core_doc.cpp_FUN_00450c60 at 00451ab3
;
; Referenced Globals:
;   undefined4 DAT_005d0527
;   undefined4 DAT_005d052f
;   undefined4 DAT_005d0537
;   undefined4 DAT_005d053f
;   undefined4 DAT_005d0547
;   undefined4 DAT_005d054f
;   undefined4 DAT_005d0557
;   undefined4 DAT_005d055f
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_005f515c
;   undefined4 DAT_005f5160
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 DAT_01b4d264
;   undefined4 DAT_01b4d268
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
;   core_skeleton.cpp_FUN_005469a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459ff0
        ;   Label: core_doc.cpp_FUN_00459ff0
    PUSH ESI                            ; 00459ff1
    PUSH EDI                            ; 00459ff2
    PUSH EBP                            ; 00459ff3
    MOV EBP,ESP                         ; 00459ff4
    SUB ESP,0x22c                       ; 00459ff6
    AND ESP,0xfffffff8                  ; 00459ffc
    MOV ESI,dword ptr [EBP + 0x18]      ; 00459fff
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045a002
    ADD EAX,0x25674                     ; 0045a005
    MOV dword ptr [ESP + 0x214],EAX     ; 0045a00a
    CMP ESI,0x1                         ; 0045a011
    JZ 0x0045a438                       ; 0045a014
        ;   XREF to: 0045a438 (CONDITIONAL_JUMP)  ; LAB_0045a438
    CMP ESI,0x1                         ; 0045a01a
        ;   Label: LAB_0045a01a
    JZ 0x0045a460                       ; 0045a01d
        ;   XREF to: 0045a460 (CONDITIONAL_JUMP)  ; LAB_0045a460
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045a023
    MOV EDX,dword ptr [EAX + 0x25698]   ; 0045a026
    TEST EDX,EDX                        ; 0045a02c
    JNZ 0x0045a467                      ; 0045a02e
        ;   XREF to: 0045a467 (CONDITIONAL_JUMP)  ; LAB_0045a467
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a034
    MOV dword ptr [EAX + 0xc],EDX       ; 0045a03b
    MOV dword ptr [EAX + 0x4],EDX       ; 0045a03e
    LEA EAX,[ESI*0x8 + 0x0]             ; 0045a041
    MOV EBX,EAX                         ; 0045a048
    SHL EAX,0x4                         ; 0045a04a
    MOV ECX,dword ptr [EBP + 0x14]      ; 0045a04d
    SUB EAX,EBX                         ; 0045a050
    ADD EAX,ECX                         ; 0045a052
    MOV EBX,dword ptr [EAX + 0x2620]    ; 0045a054
    TEST EBX,EBX                        ; 0045a05a
    JZ 0x0045a06d                       ; 0045a05c
        ;   XREF to: 0045a06d (CONDITIONAL_JUMP)  ; LAB_0045a06d
    PUSH EBX                            ; 0045a05e
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 0045a05f
    CALL dword ptr [EDX + 0x7c]         ; 0045a065
    ADD ESP,0x4                         ; 0045a068
    MOV EDX,EAX                         ; 0045a06b
    TEST DL,0x4                         ; 0045a06d
        ;   Label: LAB_0045a06d
    JZ 0x0045a44c                       ; 0045a070
        ;   XREF to: 0045a44c (CONDITIONAL_JUMP)  ; LAB_0045a44c
    MOV dword ptr [ESP + 0x1ec],0x3     ; 0045a076
    TEST ESI,ESI                        ; 0045a081
        ;   Label: LAB_0045a081
    JNZ 0x0045a479                      ; 0045a083
        ;   XREF to: 0045a479 (CONDITIONAL_JUMP)  ; LAB_0045a479
    MOV EDX,0xbfa78d36                  ; 0045a089
    MOV ECX,0x3f060a92                  ; 0045a08e
    MOV EAX,[0x01b4d264]                ; 0045a093 | DAT_01b4d264
    MOV EBX,dword ptr [0x01b4d28c]      ; 0045a098 | DAT_01b4d28c
    MOV dword ptr [ESP + 0x20c],EDX     ; 0045a09e
    MOV dword ptr [ESP + 0x208],ECX     ; 0045a0a5
    MOV dword ptr [ESP + 0x1e4],EAX     ; 0045a0ac
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045a0b3
        ;   Label: LAB_0045a0b3
    FLD float ptr [EAX + 0x10a94]       ; 0045a0b6
    FMUL float ptr [0x005d0527]         ; 0045a0bc | DAT_005d0527
    FMUL double ptr [0x005d052f]        ; 0045a0c2 | DAT_005d052f
    FMUL float ptr [EBP + 0x1c]         ; 0045a0c8
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a0cb
    FLD float ptr [EAX]                 ; 0045a0d2
    FXCH                                ; 0045a0d4
    FADD ST0,ST1                        ; 0045a0d6
    MOV dword ptr [EAX + 0x4],0x0       ; 0045a0d8
    FSTP ST1                            ; 0045a0df
    FST float ptr [EAX]                 ; 0045a0e1
    FCOMP float ptr [0x005f515c]        ; 0045a0e3 | DAT_005f515c
    FNSTSW AX                           ; 0045a0e9
    SAHF                                ; 0045a0eb
    JNC 0x0045a0fd                      ; 0045a0ec
        ;   XREF to: 0045a0fd (CONDITIONAL_JUMP)  ; LAB_0045a0fd
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a0ee
    MOV EDX,dword ptr [0x005f515c]      ; 0045a0f5 | DAT_005f515c
    MOV dword ptr [EAX],EDX             ; 0045a0fb
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a0fd
        ;   Label: LAB_0045a0fd
    FLD float ptr [EAX]                 ; 0045a104
    FCOMP float ptr [0x005f5160]        ; 0045a106 | DAT_005f5160
    FNSTSW AX                           ; 0045a10c
    SAHF                                ; 0045a10e
    JBE 0x0045a120                      ; 0045a10f
        ;   XREF to: 0045a120 (CONDITIONAL_JUMP)  ; LAB_0045a120
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a111
    MOV EDX,dword ptr [0x005f5160]      ; 0045a118 | DAT_005f5160
    MOV dword ptr [EAX],EDX             ; 0045a11e
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a120
        ;   Label: LAB_0045a120
    FLD float ptr [EAX + 0xc]           ; 0045a127
    FCOMP float ptr [ESP + 0x20c]       ; 0045a12a
    FNSTSW AX                           ; 0045a131
    SAHF                                ; 0045a133
    JNC 0x0045a147                      ; 0045a134
        ;   XREF to: 0045a147 (CONDITIONAL_JUMP)  ; LAB_0045a147
    MOV EDX,dword ptr [ESP + 0x214]     ; 0045a136
    MOV EAX,dword ptr [ESP + 0x20c]     ; 0045a13d
    MOV dword ptr [EDX + 0xc],EAX       ; 0045a144
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a147
        ;   Label: LAB_0045a147
    FLD float ptr [EAX + 0xc]           ; 0045a14e
    FCOMP float ptr [ESP + 0x208]       ; 0045a151
    FNSTSW AX                           ; 0045a158
    SAHF                                ; 0045a15a
    JBE 0x0045a16e                      ; 0045a15b
        ;   XREF to: 0045a16e (CONDITIONAL_JUMP)  ; LAB_0045a16e
    MOV EDX,dword ptr [ESP + 0x214]     ; 0045a15d
    MOV EAX,dword ptr [ESP + 0x208]     ; 0045a164
    MOV dword ptr [EDX + 0xc],EAX       ; 0045a16b
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a16e
        ;   Label: LAB_0045a16e
    FLD float ptr [EAX + 0x4]           ; 0045a175
    FCOMP float ptr [ESP + 0x20c]       ; 0045a178
    FNSTSW AX                           ; 0045a17f
    SAHF                                ; 0045a181
    JNC 0x0045a195                      ; 0045a182
        ;   XREF to: 0045a195 (CONDITIONAL_JUMP)  ; LAB_0045a195
    MOV EDX,dword ptr [ESP + 0x214]     ; 0045a184
    MOV EAX,dword ptr [ESP + 0x20c]     ; 0045a18b
    MOV dword ptr [EDX + 0x4],EAX       ; 0045a192
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a195
        ;   Label: LAB_0045a195
    FLD float ptr [EAX + 0x4]           ; 0045a19c
    FCOMP float ptr [ESP + 0x208]       ; 0045a19f
    FNSTSW AX                           ; 0045a1a6
    SAHF                                ; 0045a1a8
    JBE 0x0045a1bc                      ; 0045a1a9
        ;   XREF to: 0045a1bc (CONDITIONAL_JUMP)  ; LAB_0045a1bc
    MOV EDX,dword ptr [ESP + 0x214]     ; 0045a1ab
    MOV EAX,dword ptr [ESP + 0x208]     ; 0045a1b2
    MOV dword ptr [EDX + 0x4],EAX       ; 0045a1b9
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a1bc
        ;   Label: LAB_0045a1bc
    MOV dword ptr [EAX + 0x1c],0x0      ; 0045a1c3
    MOV EAX,dword ptr [EAX + 0x4]       ; 0045a1ca
    MOV dword ptr [ESP + 0x200],EAX     ; 0045a1cd
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a1d4
    MOV EAX,dword ptr [EAX]             ; 0045a1db
    MOV ESI,dword ptr [ESP + 0x1ec]     ; 0045a1dd
    MOV dword ptr [ESP + 0x204],EAX     ; 0045a1e4
    CMP ESI,0x3                         ; 0045a1eb
    JZ 0x0045a91d                       ; 0045a1ee
        ;   XREF to: 0045a91d (CONDITIONAL_JUMP)  ; LAB_0045a91d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045a1f4
    MOV EDI,dword ptr [EAX + 0x24378]   ; 0045a1f7
    TEST EDI,EDI                        ; 0045a1fd
    JNZ 0x0045a91d                      ; 0045a1ff
        ;   XREF to: 0045a91d (CONDITIONAL_JUMP)  ; LAB_0045a91d
    MOV dword ptr [ESP + 0x11c],EDI     ; 0045a205
    MOV dword ptr [ESP + 0x120],EDI     ; 0045a20c
    MOV dword ptr [ESP + 0x118],EDI     ; 0045a213
    MOV ESI,dword ptr [EAX + 0x25698]   ; 0045a21a
    TEST ESI,ESI                        ; 0045a220
    JZ 0x0045a288                       ; 0045a222
        ;   XREF to: 0045a288 (CONDITIONAL_JUMP)  ; LAB_0045a288
    PUSH ESI                            ; 0045a224
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 0045a225
    LEA ESI,[ESP + 0x170]               ; 0045a22b
    LEA EDI,[ESP + 0x194]               ; 0045a232
    CALL dword ptr [EDX + 0xe8]         ; 0045a239
    LEA ESI,[ESP + 0x170]               ; 0045a23f
    LEA EDX,[ESP + 0x194]               ; 0045a246
    ADD ESP,0x4                         ; 0045a24d
    LEA EAX,[ESP + 0x118]               ; 0045a250
    MOVSD ES:EDI,ESI                    ; 0045a257
    MOVSD ES:EDI,ESI                    ; 0045a258
    MOVSD ES:EDI,ESI                    ; 0045a259
    CMP EAX,EDX                         ; 0045a25a
    JZ 0x0045a288                       ; 0045a25c
        ;   XREF to: 0045a288 (CONDITIONAL_JUMP)  ; LAB_0045a288
    MOV EAX,dword ptr [ESP + 0x190]     ; 0045a25e
    MOV dword ptr [ESP + 0x118],EAX     ; 0045a265
    MOV EAX,dword ptr [ESP + 0x194]     ; 0045a26c
    MOV dword ptr [ESP + 0x11c],EAX     ; 0045a273
    MOV EAX,dword ptr [ESP + 0x198]     ; 0045a27a
    MOV dword ptr [ESP + 0x120],EAX     ; 0045a281
    MOV EDI,dword ptr [ESP + 0x1ec]     ; 0045a288
        ;   Label: LAB_0045a288
    TEST EDI,EDI                        ; 0045a28f
    JNZ 0x0045a4d5                      ; 0045a291
        ;   XREF to: 0045a4d5 (CONDITIONAL_JUMP)  ; LAB_0045a4d5
    MOV EDX,dword ptr [ESP + 0x1e4]     ; 0045a297
        ;   Label: LAB_0045a297
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045a29e
    PUSH EDX                            ; 0045a2a1
    ADD EAX,0x2b4                       ; 0045a2a2
    PUSH EAX                            ; 0045a2a7
    LEA ESI,[ESP + 0xd8]                ; 0045a2a8
    LEA EDI,[ESP + 0x15c]               ; 0045a2af
    CALL core_skeleton.cpp_FUN_005469a0 ; 0045a2b6
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    LEA ESI,[ESP + 0xd8]                ; 0045a2bb
    LEA EAX,[ESP + 0x15c]               ; 0045a2c2
    ADD ESP,0x8                         ; 0045a2c9
    LEA EDX,[ESP + 0x160]               ; 0045a2cc
    MOVSD ES:EDI,ESI                    ; 0045a2d3
    MOVSD ES:EDI,ESI                    ; 0045a2d4
    MOVSD ES:EDI,ESI                    ; 0045a2d5
    CMP EDX,EAX                         ; 0045a2d6
    JNZ 0x0045a54d                      ; 0045a2d8
        ;   XREF to: 0045a54d (CONDITIONAL_JUMP)  ; LAB_0045a54d
    LEA EAX,[ESP + 0x160]               ; 0045a2de
        ;   Label: LAB_0045a2de
    PUSH EAX                            ; 0045a2e5
    MOV ECX,dword ptr [EBP + 0x14]      ; 0045a2e6
    PUSH ECX                            ; 0045a2e9
    LEA ESI,[ESP + 0x1a4]               ; 0045a2ea
    LEA EDI,[ESP + 0x1bc]               ; 0045a2f1
    CALL core_actor.cpp_FUN_00408d70    ; 0045a2f8
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0045a2fd
    LEA ESI,[ESP + 0x19c]               ; 0045a300
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a307
    MOVSD ES:EDI,ESI                    ; 0045a30e
    MOVSD ES:EDI,ESI                    ; 0045a30f
    MOVSD ES:EDI,ESI                    ; 0045a310
    MOV EAX,dword ptr [EAX]             ; 0045a311
    XOR EBX,EBX                         ; 0045a313
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0045a315
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a31c
    MOV dword ptr [ESP + 0x1b0],EBX     ; 0045a323
    MOV EAX,dword ptr [EAX + 0x4]       ; 0045a32a
    MOV dword ptr [ESP + 0x1ac],EAX     ; 0045a32d
    LEA EAX,[ESP + 0x1a8]               ; 0045a334
    PUSH EAX                            ; 0045a33b
    LEA EAX,[ESP + 0x94]                ; 0045a33c
    PUSH EAX                            ; 0045a343
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 0045a344
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,0x3f800000                  ; 0045a349
    ADD ESP,0x8                         ; 0045a34e
    MOV dword ptr [ESP + 0x12c],EAX     ; 0045a351
    LEA EAX,[ESP + 0x124]               ; 0045a358
    LEA ESI,[ESP + 0x178]               ; 0045a35f
    PUSH EAX                            ; 0045a366
    LEA EAX,[ESP + 0x94]                ; 0045a367
    LEA EDI,[ESP + 0xc8]                ; 0045a36e
    PUSH EAX                            ; 0045a375
    MOV dword ptr [ESP + 0x12c],EBX     ; 0045a376
    MOV dword ptr [ESP + 0x130],EBX     ; 0045a37d
    CALL core_dirmat.cpp_FUN_00449530   ; 0045a384
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x180]               ; 0045a389
    ADD ESP,0x8                         ; 0045a390
    MOV EDX,0x7149f2ca                  ; 0045a393
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045a398
    MOV dword ptr [ESP + 0x218],EDX     ; 0045a39b
    MOV dword ptr [ESP + 0x1f8],EBX     ; 0045a3a2
    MOV dword ptr [ESP + 0x1fc],EBX     ; 0045a3a9
    ADD EAX,0x20                        ; 0045a3b0
    MOVSD ES:EDI,ESI                    ; 0045a3b3
    MOVSD ES:EDI,ESI                    ; 0045a3b4
    MOVSD ES:EDI,ESI                    ; 0045a3b5
    MOV dword ptr [ESP + 0x1f4],EAX     ; 0045a3b6
    MOV EAX,[0x0061b5a8]                ; 0045a3bd | g_CDemonSetPtr
        ;   Label: LAB_0045a3bd
    MOV EDX,dword ptr [ESP + 0x1f8]     ; 0045a3c2
    CMP EDX,dword ptr [EAX + 0x152f30]  ; 0045a3c9 | g_CDemonSetInstance.threat_count
    JGE 0x0045a92b                      ; 0045a3cf
        ;   XREF to: 0045a92b (CONDITIONAL_JUMP)  ; LAB_0045a92b
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0045a3d5
    MOV EDI,dword ptr [0x007bdc94]      ; 0045a3dc | g_CCharacterClassInfo.name_hash
    ADD EAX,EDX                         ; 0045a3e2
    PUSH EDI                            ; 0045a3e4
    MOV ECX,dword ptr [EAX + 0x152f34]  ; 0045a3e5
    PUSH ECX                            ; 0045a3eb
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0045a3ec
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 0045a3f1
    ADD ESP,0x8                         ; 0045a3f3
    TEST EAX,EAX                        ; 0045a3f6
    JZ 0x0045a5c6                       ; 0045a3f8
        ;   XREF to: 0045a5c6 (CONDITIONAL_JUMP)  ; LAB_0045a5c6
    PUSH EBX                            ; 0045a3fe
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0045a3ff
    CALL dword ptr [EAX + 0x114]        ; 0045a405
    ADD ESP,0x4                         ; 0045a40b
    TEST EAX,EAX                        ; 0045a40e
    JZ 0x0045a57c                       ; 0045a410
        ;   XREF to: 0045a57c (CONDITIONAL_JUMP)  ; LAB_0045a57c
    MOV EDX,dword ptr [ESP + 0x1f8]     ; 0045a416
        ;   Label: LAB_0045a416
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0045a41d
    INC EDX                             ; 0045a424
    ADD EAX,0x4                         ; 0045a425
    MOV dword ptr [ESP + 0x1f8],EDX     ; 0045a428
    MOV dword ptr [ESP + 0x1fc],EAX     ; 0045a42f
    JMP 0x0045a3bd                      ; 0045a436
        ;   XREF to: 0045a3bd (UNCONDITIONAL_JUMP)  ; LAB_0045a3bd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045a438
        ;   Label: LAB_0045a438
    ADD EAX,0x25654                     ; 0045a43b
    MOV dword ptr [ESP + 0x214],EAX     ; 0045a440
    JMP 0x0045a01a                      ; 0045a447
        ;   XREF to: 0045a01a (UNCONDITIONAL_JUMP)  ; LAB_0045a01a
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a44c
        ;   Label: LAB_0045a44c
    MOV dword ptr [EAX + 0x8],0x0       ; 0045a453
    MOV dword ptr [EAX],0x0             ; 0045a45a
    MOV ESP,EBP                         ; 0045a460
        ;   Label: LAB_0045a460
    POP EBP                             ; 0045a462
    POP EDI                             ; 0045a463
    POP ESI                             ; 0045a464
    POP EBX                             ; 0045a465
    RET                                 ; 0045a466
    MOV EAX,dword ptr [EDX + 0x43c]     ; 0045a467
        ;   Label: LAB_0045a467
    MOV dword ptr [ESP + 0x1ec],EAX     ; 0045a46d
    JMP 0x0045a081                      ; 0045a474
        ;   XREF to: 0045a081 (UNCONDITIONAL_JUMP)  ; LAB_0045a081
    MOV EAX,[0x01b4d268]                ; 0045a479 | DAT_01b4d268
        ;   Label: LAB_0045a479
    MOV dword ptr [ESP + 0x1e4],EAX     ; 0045a47e
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0045a485
    MOV EBX,dword ptr [0x01b4d290]      ; 0045a48c | DAT_01b4d290
    TEST EAX,EAX                        ; 0045a492
    JNZ 0x0045a4b3                      ; 0045a494
        ;   XREF to: 0045a4b3 (CONDITIONAL_JUMP)  ; LAB_0045a4b3
    MOV EAX,0x3fa78d36                  ; 0045a496
        ;   Label: LAB_0045a496
    MOV EDI,0xbf060a92                  ; 0045a49b
    MOV dword ptr [ESP + 0x208],EAX     ; 0045a4a0
    MOV dword ptr [ESP + 0x20c],EDI     ; 0045a4a7
    JMP 0x0045a0b3                      ; 0045a4ae
        ;   XREF to: 0045a0b3 (UNCONDITIONAL_JUMP)  ; LAB_0045a0b3
    CMP EAX,0x5                         ; 0045a4b3
        ;   Label: LAB_0045a4b3
    JZ 0x0045a496                       ; 0045a4b6
        ;   XREF to: 0045a496 (CONDITIONAL_JUMP)  ; LAB_0045a496
    MOV ESI,0x3f060a92                  ; 0045a4b8
    MOV ECX,0xbf060a92                  ; 0045a4bd
    MOV dword ptr [ESP + 0x208],ESI     ; 0045a4c2
    MOV dword ptr [ESP + 0x20c],ECX     ; 0045a4c9
    JMP 0x0045a0b3                      ; 0045a4d0
        ;   XREF to: 0045a0b3 (UNCONDITIONAL_JUMP)  ; LAB_0045a0b3
    CMP EDI,0x5                         ; 0045a4d5
        ;   Label: LAB_0045a4d5
    JZ 0x0045a297                       ; 0045a4d8
        ;   XREF to: 0045a297 (CONDITIONAL_JUMP)  ; LAB_0045a297
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045a4de
    PUSH EBX                            ; 0045a4e1
    ADD EAX,0x2b4                       ; 0045a4e2
    PUSH EAX                            ; 0045a4e7
    LEA ESI,[ESP + 0xfc]                ; 0045a4e8
    LEA EDI,[ESP + 0x144]               ; 0045a4ef
    CALL core_skeleton.cpp_FUN_005469a0 ; 0045a4f6
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    LEA ESI,[ESP + 0xfc]                ; 0045a4fb
    LEA EAX,[ESP + 0x144]               ; 0045a502
    ADD ESP,0x8                         ; 0045a509
    LEA EDX,[ESP + 0x160]               ; 0045a50c
    MOVSD ES:EDI,ESI                    ; 0045a513
    MOVSD ES:EDI,ESI                    ; 0045a514
    MOVSD ES:EDI,ESI                    ; 0045a515
    CMP EDX,EAX                         ; 0045a516
    JZ 0x0045a2de                       ; 0045a518
        ;   XREF to: 0045a2de (CONDITIONAL_JUMP)  ; LAB_0045a2de
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0045a51e
    MOV dword ptr [ESP + 0x160],EAX     ; 0045a525
    MOV EAX,dword ptr [ESP + 0x140]     ; 0045a52c
    MOV dword ptr [ESP + 0x164],EAX     ; 0045a533
    MOV EAX,dword ptr [ESP + 0x144]     ; 0045a53a
    MOV dword ptr [ESP + 0x168],EAX     ; 0045a541
    JMP 0x0045a2de                      ; 0045a548
        ;   XREF to: 0045a2de (UNCONDITIONAL_JUMP)  ; LAB_0045a2de
    MOV EAX,dword ptr [ESP + 0x154]     ; 0045a54d
        ;   Label: LAB_0045a54d
    MOV dword ptr [ESP + 0x160],EAX     ; 0045a554
    MOV EAX,dword ptr [ESP + 0x158]     ; 0045a55b
    MOV dword ptr [ESP + 0x164],EAX     ; 0045a562
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0045a569
    MOV dword ptr [ESP + 0x168],EAX     ; 0045a570
    JMP 0x0045a2de                      ; 0045a577
        ;   XREF to: 0045a2de (UNCONDITIONAL_JUMP)  ; LAB_0045a2de
    PUSH EBX                            ; 0045a57c
        ;   Label: LAB_0045a57c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045a57d
    CALL dword ptr [EAX + 0x78]         ; 0045a583
    ADD ESP,0x4                         ; 0045a586
    TEST EAX,EAX                        ; 0045a589
    JNZ 0x0045a416                      ; 0045a58b
        ;   XREF to: 0045a416 (CONDITIONAL_JUMP)  ; LAB_0045a416
    MOV EAX,dword ptr [ESP + 0x1f4]     ; 0045a591
    FLD float ptr [EAX]                 ; 0045a598
    FSUB float ptr [EBX + 0x20]         ; 0045a59a
    FMUL ST0                            ; 0045a59d
    FLD float ptr [EAX + 0x4]           ; 0045a59f
    FSUB float ptr [EBX + 0x24]         ; 0045a5a2
    FMUL ST0                            ; 0045a5a5
    FLD float ptr [EAX + 0x8]           ; 0045a5a7
    FXCH                                ; 0045a5aa
    FADDP ST2,ST0                       ; 0045a5ac
    FSUB float ptr [EBX + 0x28]         ; 0045a5ae
    FMUL ST0                            ; 0045a5b1
    FADDP                               ; 0045a5b3
    FSQRT                               ; 0045a5b5
    FCOMP double ptr [0x005d0557]       ; 0045a5b7 | DAT_005d0557
    FNSTSW AX                           ; 0045a5bd
    SAHF                                ; 0045a5bf
    JA 0x0045a416                       ; 0045a5c0
        ;   XREF to: 0045a416 (CONDITIONAL_JUMP)  ; LAB_0045a416
    MOV EBX,dword ptr [ESP + 0x1fc]     ; 0045a5c6
        ;   Label: LAB_0045a5c6
    MOV EAX,[0x0061b5a8]                ; 0045a5cd | g_CDemonSetPtr
    ADD EAX,EBX                         ; 0045a5d2
    PUSH 0x5f22b0                       ; 0045a5d4 | g_CVectorTypeInfo
    MOV EAX,dword ptr [EAX + 0x152f34]  ; 0045a5d9
    PUSH 0xa                            ; 0045a5df
    MOV dword ptr [ESP + 0x224],EAX     ; 0045a5e1
    LEA EAX,[ESP + 0x20]                ; 0045a5e8
    PUSH EAX                            ; 0045a5ec
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0045a5ed
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0045a5f2
    LEA EAX,[ESP + 0x18]                ; 0045a5f5
    PUSH EAX                            ; 0045a5f9
    MOV ESI,dword ptr [ESP + 0x220]     ; 0045a5fa
    MOV EBX,dword ptr [ESP + 0x220]     ; 0045a601
    PUSH ESI                            ; 0045a608
    MOV EBX,dword ptr [EBX + 0x2b0]     ; 0045a609
    CALL dword ptr [EBX + 0x5c]         ; 0045a60f
    ADD ESP,0x8                         ; 0045a612
    MOV dword ptr [ESP + 0x210],EAX     ; 0045a615
    CMP EAX,0x1                         ; 0045a61c
    JL 0x0045a416                       ; 0045a61f
        ;   XREF to: 0045a416 (CONDITIONAL_JUMP)  ; LAB_0045a416
    XOR EDI,EDI                         ; 0045a625
    MOV dword ptr [ESP + 0x220],EDI     ; 0045a627
    TEST EAX,EAX                        ; 0045a62e
    JLE 0x0045a416                      ; 0045a630
        ;   XREF to: 0045a416 (CONDITIONAL_JUMP)  ; LAB_0045a416
    LEA EBX,[ESP + 0x18]                ; 0045a636
    PUSH EBX                            ; 0045a63a
        ;   Label: LAB_0045a63a
    MOV ECX,dword ptr [ESP + 0x220]     ; 0045a63b
    PUSH ECX                            ; 0045a642
    LEA ESI,[ESP + 0xc0]                ; 0045a643
    LEA EDI,[ESP + 0x18c]               ; 0045a64a
    CALL core_actor.cpp_FUN_00408d70    ; 0045a651
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xc0]                ; 0045a656
    ADD ESP,0x8                         ; 0045a65d
    LEA EAX,[ESP + 0x184]               ; 0045a660
    MOVSD ES:EDI,ESI                    ; 0045a667
    MOVSD ES:EDI,ESI                    ; 0045a668
    MOVSD ES:EDI,ESI                    ; 0045a669
    PUSH EAX                            ; 0045a66a
    MOV ESI,dword ptr [EBP + 0x14]      ; 0045a66b
    PUSH ESI                            ; 0045a66e
    LEA ESI,[ESP + 0xe4]                ; 0045a66f
    LEA EDI,[ESP + 0xf0]                ; 0045a676
    CALL core_actor.cpp_FUN_00408de0    ; 0045a67d
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xe4]                ; 0045a682
    ADD ESP,0x8                         ; 0045a689
    MOVSD ES:EDI,ESI                    ; 0045a68c
    MOVSD ES:EDI,ESI                    ; 0045a68d
    MOVSD ES:EDI,ESI                    ; 0045a68e
    FLD float ptr [ESP + 0xe8]          ; 0045a68f
    FLD float ptr [ESP + 0xec]          ; 0045a696
    FLD float ptr [ESP + 0xf0]          ; 0045a69d
    LEA EDI,[ESP + 0x10c]               ; 0045a6a4
    LEA ESI,[ESP + 0x148]               ; 0045a6ab
    FXCH ST2                            ; 0045a6b2
    FSUB float ptr [ESP + 0x160]        ; 0045a6b4
    FXCH                                ; 0045a6bb
    FSUB float ptr [ESP + 0x164]        ; 0045a6bd
    FXCH ST2                            ; 0045a6c4
    FSUB float ptr [ESP + 0x168]        ; 0045a6c6
    FXCH                                ; 0045a6cd
    FSTP float ptr [ESP + 0x148]        ; 0045a6cf
    FXCH                                ; 0045a6d6
    FSTP float ptr [ESP + 0x14c]        ; 0045a6d8
    FSTP float ptr [ESP + 0x150]        ; 0045a6df
    MOVSD ES:EDI,ESI                    ; 0045a6e6
    MOVSD ES:EDI,ESI                    ; 0045a6e7
    MOVSD ES:EDI,ESI                    ; 0045a6e8
    FLDZ                                ; 0045a6e9
    FLD float ptr [ESP + 0x114]         ; 0045a6eb
    FSTP double ptr [ESP + 0x8]         ; 0045a6f2
    FCOMP double ptr [ESP + 0x8]        ; 0045a6f6
    FNSTSW AX                           ; 0045a6fa
    SAHF                                ; 0045a6fc
    JC 0x0045a725                       ; 0045a6fd
        ;   XREF to: 0045a725 (CONDITIONAL_JUMP)  ; LAB_0045a725
    MOV EAX,dword ptr [ESP + 0x220]     ; 0045a6ff
        ;   Label: LAB_0045a6ff
    MOV EDX,dword ptr [ESP + 0x210]     ; 0045a706
    INC EAX                             ; 0045a70d
    ADD EBX,0xc                         ; 0045a70e
    MOV dword ptr [ESP + 0x220],EAX     ; 0045a711
    CMP EAX,EDX                         ; 0045a718
    JGE 0x0045a416                      ; 0045a71a
        ;   XREF to: 0045a416 (CONDITIONAL_JUMP)  ; LAB_0045a416
    JMP 0x0045a63a                      ; 0045a720
        ;   XREF to: 0045a63a (UNCONDITIONAL_JUMP)  ; LAB_0045a63a
    FLD double ptr [ESP + 0x8]          ; 0045a725
        ;   Label: LAB_0045a725
    FCOMP double ptr [0x005d0557]       ; 0045a729 | DAT_005d0557
    FNSTSW AX                           ; 0045a72f
    SAHF                                ; 0045a731
    JA 0x0045a6ff                       ; 0045a732
        ;   XREF to: 0045a6ff (CONDITIONAL_JUMP)  ; LAB_0045a6ff
    LEA EAX,[ESP + 0x10c]               ; 0045a734
    PUSH EAX                            ; 0045a73b
    LEA ESI,[ESP + 0x134]               ; 0045a73c
    LEA EDI,[ESP + 0x104]               ; 0045a743
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0045a74a
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x134]               ; 0045a74f
    ADD ESP,0x4                         ; 0045a756
    MOVSD ES:EDI,ESI                    ; 0045a759
    MOVSD ES:EDI,ESI                    ; 0045a75a
    MOVSD ES:EDI,ESI                    ; 0045a75b
    MOV EDI,0x3f060a92                  ; 0045a75c
    FLD float ptr [ESP + 0x114]         ; 0045a761
    MOV dword ptr [ESP + 0x10],EDI      ; 0045a768
    FCOMP double ptr [0x005d055f]       ; 0045a76c | DAT_005d055f
    FNSTSW AX                           ; 0045a772
    SAHF                                ; 0045a774
    JNC 0x0045a77f                      ; 0045a775
        ;   XREF to: 0045a77f (CONDITIONAL_JUMP)  ; LAB_0045a77f
    MOV dword ptr [ESP + 0x10],0x3fc90fdb ; 0045a777
    FLD float ptr [ESP + 0x100]         ; 0045a77f
        ;   Label: LAB_0045a77f
    FABS                                ; 0045a786
    FLD float ptr [ESP + 0x10]          ; 0045a788
    FCOMPP                              ; 0045a78c
    FNSTSW AX                           ; 0045a78e
    SAHF                                ; 0045a790
    JC 0x0045a6ff                       ; 0045a791
        ;   XREF to: 0045a6ff (CONDITIONAL_JUMP)  ; LAB_0045a6ff
    FLD float ptr [ESP + 0x104]         ; 0045a797
    FCOMP float ptr [ESP + 0x20c]       ; 0045a79e
    FNSTSW AX                           ; 0045a7a5
    SAHF                                ; 0045a7a7
    JC 0x0045a6ff                       ; 0045a7a8
        ;   XREF to: 0045a6ff (CONDITIONAL_JUMP)  ; LAB_0045a6ff
    FLD float ptr [ESP + 0x104]         ; 0045a7ae
    FCOMP float ptr [ESP + 0x208]       ; 0045a7b5
    FNSTSW AX                           ; 0045a7bc
    SAHF                                ; 0045a7be
    JA 0x0045a6ff                       ; 0045a7bf
        ;   XREF to: 0045a6ff (CONDITIONAL_JUMP)  ; LAB_0045a6ff
    FLD float ptr [ESP + 0x110]         ; 0045a7c5
    FMUL ST0                            ; 0045a7cc
    FLD float ptr [ESP + 0x10c]         ; 0045a7ce
    FMUL ST0                            ; 0045a7d5
    FADDP                               ; 0045a7d7
    FLD float ptr [ESP + 0x114]         ; 0045a7d9
    FMUL ST0                            ; 0045a7e0
    FADDP                               ; 0045a7e2
    FSQRT                               ; 0045a7e4
    FLD1                                ; 0045a7e6
    FLD float ptr [ESP + 0x110]         ; 0045a7e8
    FXCH                                ; 0045a7ef
    FDIV ST0,ST2                        ; 0045a7f1
    FXCH                                ; 0045a7f3
    FMUL ST1                            ; 0045a7f5
    FLD float ptr [ESP + 0x10c]         ; 0045a7f7
    FMUL ST2                            ; 0045a7fe
    FXCH                                ; 0045a800
    FST float ptr [ESP + 0x110]         ; 0045a802
    FMUL float ptr [ESP + 0xc8]         ; 0045a809
    FXCH                                ; 0045a810
    FST float ptr [ESP + 0x10c]         ; 0045a812
    FMUL float ptr [ESP + 0xc4]         ; 0045a819
    FLD float ptr [ESP + 0x114]         ; 0045a820
    FMULP ST3                           ; 0045a827
    FADDP                               ; 0045a829
    FXCH                                ; 0045a82b
    FST float ptr [ESP + 0x114]         ; 0045a82d
    FMUL float ptr [ESP + 0xcc]         ; 0045a834
    FADDP                               ; 0045a83b
    FSUBR double ptr [0x005d052f]       ; 0045a83d | DAT_005d052f
    FXCH                                ; 0045a843
    FMUL double ptr [0x005d0537]        ; 0045a845 | DAT_005d0537
    FADDP                               ; 0045a84b
    FST float ptr [ESP + 0x14]          ; 0045a84d
    FCOMP float ptr [ESP + 0x218]       ; 0045a851
    FNSTSW AX                           ; 0045a858
    SAHF                                ; 0045a85a
    JNC 0x0045a6ff                      ; 0045a85b
        ;   XREF to: 0045a6ff (CONDITIONAL_JUMP)  ; LAB_0045a6ff
    MOV EDX,dword ptr [0x0061b5a8]      ; 0045a861 | g_CDemonSetPtr
    PUSH EDX                            ; 0045a867 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0045a868
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0045a86d
    PUSH 0x2                            ; 0045a870
    MOV ECX,dword ptr [0x0061b5a8]      ; 0045a872 | g_CDemonSetPtr
    PUSH ECX                            ; 0045a878 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0 ; 0045a879
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0045a87e
    MOV ESI,dword ptr [EBP + 0x14]      ; 0045a881
    PUSH ESI                            ; 0045a884
    MOV EDI,dword ptr [0x0061b5a8]      ; 0045a885 | g_CDemonSetPtr
    PUSH EDI                            ; 0045a88b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0045a88c
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0045a891
    MOV EAX,dword ptr [ESP + 0x21c]     ; 0045a894
    PUSH EAX                            ; 0045a89b
    MOV EDX,dword ptr [0x0061b5a8]      ; 0045a89c | g_CDemonSetPtr
    PUSH EDX                            ; 0045a8a2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0045a8a3
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0045a8a8
    LEA EAX,[ESP + 0x184]               ; 0045a8ab
    PUSH EAX                            ; 0045a8b2
    LEA EAX,[ESP + 0x1b8]               ; 0045a8b3
    PUSH EAX                            ; 0045a8ba
    MOV ECX,dword ptr [0x0061b5a8]      ; 0045a8bb | g_CDemonSetPtr
    PUSH ECX                            ; 0045a8c1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00535e10 ; 0045a8c2
        ;   XREF to: 00535e10 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00535e10(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 0045a8c7
    MOV EDI,dword ptr [0x0061b5a8]      ; 0045a8ca | g_CDemonSetPtr
    PUSH EDI                            ; 0045a8d0 | g_CDemonSetInstance
    MOV ESI,EAX                         ; 0045a8d1
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0045a8d3
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0045a8d8
    TEST ESI,ESI                        ; 0045a8db
    JNZ 0x0045a6ff                      ; 0045a8dd
        ;   XREF to: 0045a6ff (CONDITIONAL_JUMP)  ; LAB_0045a6ff
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045a8e3
    MOV dword ptr [ESP + 0x218],EAX     ; 0045a8e7
    MOV EAX,dword ptr [ESP + 0x104]     ; 0045a8ee
    MOV dword ptr [ESP + 0x200],EAX     ; 0045a8f5
    MOV EAX,dword ptr [ESP + 0x100]     ; 0045a8fc
    MOV dword ptr [ESP + 0x204],EAX     ; 0045a903
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a90a
    MOV dword ptr [EAX + 0x1c],0x1      ; 0045a911
    JMP 0x0045a6ff                      ; 0045a918
        ;   XREF to: 0045a6ff (UNCONDITIONAL_JUMP)  ; LAB_0045a6ff
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a91d
        ;   Label: LAB_0045a91d
    MOV dword ptr [EAX + 0xc],0x0       ; 0045a924
    FLD float ptr [EBP + 0x1c]          ; 0045a92b
        ;   Label: LAB_0045a92b
    FMUL float ptr [0x005d0527]         ; 0045a92e | DAT_005d0527
    FST double ptr [ESP]                ; 0045a934
    FMUL double ptr [0x005d053f]        ; 0045a937 | DAT_005d053f
    MOV ECX,dword ptr [ESP + 0x1ec]     ; 0045a93d
    FSTP float ptr [ESP + 0x1f0]        ; 0045a944
    TEST ECX,ECX                        ; 0045a94b
    JZ 0x0045a95f                       ; 0045a94d
        ;   XREF to: 0045a95f (CONDITIONAL_JUMP)  ; LAB_0045a95f
    FLD double ptr [ESP]                ; 0045a94f
    FMUL double ptr [0x005d0547]        ; 0045a952 | DAT_005d0547
    FSTP float ptr [ESP + 0x1f0]        ; 0045a958
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a95f
        ;   Label: LAB_0045a95f
    FLD float ptr [ESP + 0x200]         ; 0045a966
    FSUB float ptr [EAX + 0xc]          ; 0045a96d
    SUB ESP,0x4                         ; 0045a970
    FSTP float ptr [ESP]                ; 0045a973
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0045a976
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x22c],EAX     ; 0045a97b
    FLD float ptr [ESP + 0x22c]         ; 0045a982
    ADD ESP,0x4                         ; 0045a989
    FLD float ptr [ESP + 0x204]         ; 0045a98c
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045a993
    FXCH                                ; 0045a99a
    FSTP float ptr [ESP + 0x1e8]        ; 0045a99c
    FSUB float ptr [EAX + 0x8]          ; 0045a9a3
    SUB ESP,0x4                         ; 0045a9a6
    FSTP float ptr [ESP]                ; 0045a9a9
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0045a9ac
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x22c],EAX     ; 0045a9b1
    FLD float ptr [ESP + 0x22c]         ; 0045a9b8
    ADD ESP,0x4                         ; 0045a9bf
    FLD float ptr [ESP + 0x1f0]         ; 0045a9c2
    FLD float ptr [ESP + 0x1e8]         ; 0045a9c9
    FXCH ST2                            ; 0045a9d0
    FSTP float ptr [ESP + 0x224]        ; 0045a9d2
    FCHS                                ; 0045a9d9
    FSTP float ptr [ESP + 0x1e0]        ; 0045a9db
    FCOMP float ptr [ESP + 0x1e0]       ; 0045a9e2
    FNSTSW AX                           ; 0045a9e9
    SAHF                                ; 0045a9eb
    JNC 0x0045a9fc                      ; 0045a9ec
        ;   XREF to: 0045a9fc (CONDITIONAL_JUMP)  ; LAB_0045a9fc
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 0045a9ee
    MOV dword ptr [ESP + 0x1e8],EAX     ; 0045a9f5
    FLD float ptr [ESP + 0x1e8]         ; 0045a9fc
        ;   Label: LAB_0045a9fc
    FCOMP float ptr [ESP + 0x1f0]       ; 0045aa03
    FNSTSW AX                           ; 0045aa0a
    SAHF                                ; 0045aa0c
    JBE 0x0045aa1d                      ; 0045aa0d
        ;   XREF to: 0045aa1d (CONDITIONAL_JUMP)  ; LAB_0045aa1d
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 0045aa0f
    MOV dword ptr [ESP + 0x1e8],EAX     ; 0045aa16
    FLD float ptr [ESP + 0x224]         ; 0045aa1d
        ;   Label: LAB_0045aa1d
    FLD float ptr [ESP + 0x1f0]         ; 0045aa24
    FCHS                                ; 0045aa2b
    FSTP float ptr [ESP + 0x1dc]        ; 0045aa2d
    FCOMP float ptr [ESP + 0x1dc]       ; 0045aa34
    FNSTSW AX                           ; 0045aa3b
    SAHF                                ; 0045aa3d
    JNC 0x0045aa4e                      ; 0045aa3e
        ;   XREF to: 0045aa4e (CONDITIONAL_JUMP)  ; LAB_0045aa4e
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 0045aa40
    MOV dword ptr [ESP + 0x224],EAX     ; 0045aa47
    FLD float ptr [ESP + 0x224]         ; 0045aa4e
        ;   Label: LAB_0045aa4e
    FCOMP float ptr [ESP + 0x1f0]       ; 0045aa55
    FNSTSW AX                           ; 0045aa5c
    SAHF                                ; 0045aa5e
    JBE 0x0045aa6f                      ; 0045aa5f
        ;   XREF to: 0045aa6f (CONDITIONAL_JUMP)  ; LAB_0045aa6f
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 0045aa61
    MOV dword ptr [ESP + 0x224],EAX     ; 0045aa68
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045aa6f
        ;   Label: LAB_0045aa6f
    FLD float ptr [EAX + 0xc]           ; 0045aa76
    FADD float ptr [ESP + 0x1e8]        ; 0045aa79
    SUB ESP,0x4                         ; 0045aa80
    FSTP float ptr [ESP]                ; 0045aa83
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0045aa86
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x22c],EAX     ; 0045aa8b
    FLD float ptr [ESP + 0x22c]         ; 0045aa92
    ADD ESP,0x4                         ; 0045aa99
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045aa9c
    FLD float ptr [EAX + 0x8]           ; 0045aaa3
    FADD float ptr [ESP + 0x224]        ; 0045aaa6
    SUB ESP,0x4                         ; 0045aaad
    FXCH                                ; 0045aab0
    FSTP float ptr [EAX + 0xc]          ; 0045aab2
    FSTP float ptr [ESP]                ; 0045aab5
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0045aab8
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x22c],EAX     ; 0045aabd
    FLD float ptr [ESP + 0x22c]         ; 0045aac4
    ADD ESP,0x4                         ; 0045aacb
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045aace
    FSTP float ptr [EAX + 0x8]          ; 0045aad5
    MOV EBX,dword ptr [EAX + 0x1c]      ; 0045aad8
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 0045aadb
    CMP EBX,0x1                         ; 0045aae2
    JNZ 0x0045a460                      ; 0045aae5
        ;   XREF to: 0045a460 (CONDITIONAL_JUMP)  ; LAB_0045a460
    FLD float ptr [EAX + 0xc]           ; 0045aaeb
    FSUB float ptr [ESP + 0x200]        ; 0045aaee
    FABS                                ; 0045aaf5
    FCOMP double ptr [0x005d054f]       ; 0045aaf7 | DAT_005d054f
    FNSTSW AX                           ; 0045aafd
    SAHF                                ; 0045aaff
    JNC 0x0045a460                      ; 0045ab00
        ;   XREF to: 0045a460 (CONDITIONAL_JUMP)  ; LAB_0045a460
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045ab06
    FLD float ptr [EAX + 0x8]           ; 0045ab0d
    FSUB float ptr [ESP + 0x204]        ; 0045ab10
    FABS                                ; 0045ab17
    FCOMP double ptr [0x005d054f]       ; 0045ab19 | DAT_005d054f
    FNSTSW AX                           ; 0045ab1f
    SAHF                                ; 0045ab21
    JNC 0x0045a460                      ; 0045ab22
        ;   XREF to: 0045a460 (CONDITIONAL_JUMP)  ; LAB_0045a460
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045ab28
    MOV dword ptr [EAX + 0x1c],0x2      ; 0045ab2f
    MOV ESP,EBP                         ; 0045ab36
    POP EBP                             ; 0045ab38
    POP EDI                             ; 0045ab39
    POP ESI                             ; 0045ab3a
    POP EBX                             ; 0045ab3b
    RET                                 ; 0045ab3c

