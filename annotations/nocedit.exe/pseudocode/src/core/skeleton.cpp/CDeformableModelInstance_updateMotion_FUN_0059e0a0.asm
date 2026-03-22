; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0(CDeformableModelInstance *this_ptr,int motion_index,float frame_number,int bone_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   motion_index
; float            Stack[0xc]:4   frame_number
; int              Stack[0x10]:4   bone_index
; Local Variables:
; float[120]       Stack[-0x1a68]:480  afStackY_1a68
; float            Stack[-0x1870]:4  local_1870
; CQuaternion4f[95] Stack[-0x186c]:1520  local_186c
; float[18]        Stack[-0x1274]:72  afStack_1274
; CQuaternion4f    Stack[-0x122c]:16  local_122c
; float[394]       Stack[-0x1214]:1576  afStack_1214
; CQuaternion4f[100] Stack[-0xbec]:1600  local_bec
; int[100]         Stack[-0x5ac]:400  aiStack_5ac
; int[100]         Stack[-0x41c]:400  aiStack_41c
; CQuaternion4f    Stack[-0x28c]:16  local_28c
; CQuaternion4f    Stack[-0x27c]:16  local_27c
; CQuaternion4f    Stack[-0x26c]:16  local_26c
; CQuaternion4f    Stack[-0x25c]:16  local_25c
; float            Stack[-0x24c]:4  local_24c
; undefined4[3]    Stack[-0x248]:12  auStack_248
; CQuaternion4f    Stack[-0x23c]:16  local_23c
; undefined4       Stack[-0x22c]:4  local_22c
; float[7]         Stack[-0x228]:28  afStack_228
; CQuaternion4f    Stack[-0x20c]:16  local_20c
; CQuaternion4f    Stack[-0x1fc]:16  local_1fc
; CQuaternion4f    Stack[-0x1ec]:16  local_1ec
; CQuaternion4f    Stack[-0x1dc]:16  local_1dc
; CQuaternion4f    Stack[-0x1cc]:16  local_1cc
; float            Stack[-0x1bc]:4  local_1bc
; float[3]         Stack[-0x1b8]:12  afStack_1b8
; CQuaternion4f    Stack[-0x1ac]:16  local_1ac
; CQuaternion4f    Stack[-0x19c]:16  local_19c
; CQuaternion4f    Stack[-0x18c]:16  local_18c
; CQuaternion4f    Stack[-0x17c]:16  local_17c
; undefined4       Stack[-0x16c]:4  local_16c
; float[3]         Stack[-0x168]:12  afStack_168
; CQuaternion4f    Stack[-0x15c]:16  local_15c
; CQuaternion4f    Stack[-0x14c]:16  local_14c
; CQuaternion4f    Stack[-0x13c]:16  local_13c
; CQuaternion4f    Stack[-0x12c]:16  local_12c
; CQuaternion4f    Stack[-0x11c]:16  local_11c
; CQuaternion4f    Stack[-0x10c]:16  local_10c
; CQuaternion4f    Stack[-0xfc]:16  local_fc
; CQuaternion4f    Stack[-0xec]:16  local_ec
; CQuaternion4f    Stack[-0xdc]:16  local_dc
; undefined4       Stack[-0xcc]:4  local_cc
; float[3]         Stack[-0xc8]:12  afStack_c8
; CQuaternion4f[2] Stack[-0xbc]:32  local_bc
; float[3]         Stack[-0x94]:12  local_94
; int              Stack[-0x88]:4  local_88
; int              Stack[-0x84]:4  local_84
; int              Stack[-0x80]:4  local_80
; int              Stack[-0x78]:4  local_78
; CQuaternion4f *  Stack[-0x74]:4  local_74
; int              Stack[-0x70]:4  local_70
; CQuaternion4f *  Stack[-0x6c]:4  local_6c
; int              Stack[-0x68]:4  local_68
; int              Stack[-0x64]:4  local_64
; CDeformableModelInstance * Stack[-0x60]:4  local_60
; CDeformableModelInstance * Stack[-0x5c]:4  local_5c
; int              Stack[-0x58]:4  local_58
; int              Stack[-0x54]:4  local_54
; CSkeleton *      Stack[-0x50]:4  local_50
; CSkeleton *      Stack[-0x4c]:4  local_4c
; CDeformableModelInstance * Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; CDeformableModelInstance * Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; CDeformableModelInstance * Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
;
; XREF[4]:
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80 at 004d5202
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 at 0059e02f
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070 at 0059e081
;   core_stranger.cpp_CStranger_extractTurnPose_FUN_005bf720 at 005bf75e
;
; Called Functions:
;   core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
;   core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
;   core_xform.cpp_multiplyQuaternion_FUN_005f7640
;   core_xform.cpp_negateFirstComponent_FUN_005f75e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059e0a0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
    PUSH ESI                            ; 0059e0a1
    PUSH EDI                            ; 0059e0a2
    PUSH EBP                            ; 0059e0a3
    MOV EBP,ESP                         ; 0059e0a4
    SUB ESP,0x185c                      ; 0059e0a6
    AND ESP,0xfffffff8                  ; 0059e0ac
    MOV EDI,dword ptr [EBP + 0x18]      ; 0059e0af
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059e0b2
    PUSH EDX                            ; 0059e0b5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0059e0b6
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    MOV ESI,EAX                         ; 0059e0bb
    ADD ESP,0x4                         ; 0059e0bd
    MOV EBX,EAX                         ; 0059e0c0
    MOV EAX,ESP                         ; 0059e0c2
    PUSH EAX                            ; 0059e0c4
    LEA EAX,[ESP + 0x17ec]              ; 0059e0c5
    PUSH EAX                            ; 0059e0cc
    LEA EAX,[ESP + 0x17f4]              ; 0059e0cd
    PUSH EAX                            ; 0059e0d4
    PUSH dword ptr [EBP + 0x1c]         ; 0059e0d5
    PUSH EDI                            ; 0059e0d8
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059e0d9
    PUSH ECX                            ; 0059e0dc
    CALL core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0 ; 0059e0dd
        ;   XREF to: 0052e4c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0(CMotionController * this_ptr, int motion_index, float frame_number, int * out_frame1, ...)
    ADD ESP,0x18                        ; 0059e0e2
    CMP dword ptr [EBP + 0x20],0x0      ; 0059e0e5
    JL 0x0059e175                       ; 0059e0e9
        ;   XREF to: 0059e175 (CONDITIONAL_JUMP)  ; LAB_0059e175
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059e0ef
    MOV EDX,dword ptr [EAX + 0x2250]    ; 0059e0f2
    CMP EDX,0x1                         ; 0059e0f8
    JZ 0x0059e382                       ; 0059e0fb
        ;   XREF to: 0059e382 (CONDITIONAL_JUMP)  ; LAB_0059e382
    CMP EDX,0x2                         ; 0059e101
    JZ 0x0059e633                       ; 0059e104
        ;   XREF to: 0059e633 (CONDITIONAL_JUMP)  ; LAB_0059e633
    XOR EDI,EDI                         ; 0059e10a
    MOV EAX,dword ptr [ESI + 0x28558]   ; 0059e10c
    MOV dword ptr [ESP + 0x184c],EDI    ; 0059e112
    TEST EAX,EAX                        ; 0059e119
    JLE 0x0059e16e                      ; 0059e11b
        ;   XREF to: 0059e16e (CONDITIONAL_JUMP)  ; LAB_0059e16e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059e11d
    MOV dword ptr [ESP + 0x1810],EAX    ; 0059e120
    MOV ESI,dword ptr [EBP + 0x20]      ; 0059e127
        ;   Label: LAB_0059e127
    PUSH ESI                            ; 0059e12a
    MOV EDI,dword ptr [ESP + 0x1850]    ; 0059e12b
    PUSH EDI                            ; 0059e132
    PUSH EBX                            ; 0059e133
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100 ; 0059e134
        ;   XREF to: 0059a100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0059e139
    TEST EAX,EAX                        ; 0059e13c
    JGE 0x0059eb03                      ; 0059e13e
        ;   XREF to: 0059eb03 (CONDITIONAL_JUMP)  ; LAB_0059eb03
    MOV EAX,dword ptr [ESP + 0x1810]    ; 0059e144
        ;   Label: LAB_0059e144
    MOV EDX,dword ptr [ESP + 0x184c]    ; 0059e14b
    MOV ECX,dword ptr [EBX + 0x28558]   ; 0059e152
    ADD EAX,0x10                        ; 0059e158
    INC EDX                             ; 0059e15b
    MOV dword ptr [ESP + 0x1810],EAX    ; 0059e15c
    MOV dword ptr [ESP + 0x184c],EDX    ; 0059e163
    CMP EDX,ECX                         ; 0059e16a
    JL 0x0059e127                       ; 0059e16c
        ;   XREF to: 0059e127 (CONDITIONAL_JUMP)  ; LAB_0059e127
    MOV ESP,EBP                         ; 0059e16e
        ;   Label: LAB_0059e16e
    POP EBP                             ; 0059e170
    POP EDI                             ; 0059e171
    POP ESI                             ; 0059e172
    POP EBX                             ; 0059e173
    RET                                 ; 0059e174
    XOR ECX,ECX                         ; 0059e175
        ;   Label: LAB_0059e175
    MOV EDI,dword ptr [ESI + 0x28558]   ; 0059e177
    MOV dword ptr [ESP + 0x183c],ECX    ; 0059e17d
    TEST EDI,EDI                        ; 0059e184
    JLE 0x0059e230                      ; 0059e186
        ;   XREF to: 0059e230 (CONDITIONAL_JUMP)  ; LAB_0059e230
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059e18c
    MOV dword ptr [ESP + 0x1814],EAX    ; 0059e18f
    MOV dword ptr [ESP + 0x1834],EAX    ; 0059e196
    MOV ESI,dword ptr [ESP + 0x17e8]    ; 0059e19d
        ;   Label: LAB_0059e19d
    PUSH dword ptr [ESP]                ; 0059e1a4
    PUSH ESI                            ; 0059e1a7
    MOV EDI,dword ptr [ESP + 0x17f4]    ; 0059e1a8
    PUSH EDI                            ; 0059e1af
    MOV EAX,dword ptr [ESP + 0x1848]    ; 0059e1b0
    PUSH EAX                            ; 0059e1b7
    PUSH EBX                            ; 0059e1b8
    LEA ESI,[ESP + 0x1638]              ; 0059e1b9
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070 ; 0059e1c0
        ;   XREF to: 0059a070 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, ...)
    ADD ESP,0x14                        ; 0059e1c5
    LEA ESI,[ESP + 0x1624]              ; 0059e1c8
    MOV EDI,dword ptr [ESP + 0x1814]    ; 0059e1cf
    MOV EAX,dword ptr [ESP + 0x1834]    ; 0059e1d6
    MOV ECX,dword ptr [ESP + 0x1814]    ; 0059e1dd
    LEA EDX,[EAX + 0x4]                 ; 0059e1e4
    LEA EDI,[EDI + 0x6b0]               ; 0059e1e7
    ADD ECX,0x10                        ; 0059e1ed
    MOV dword ptr [ESP + 0x1834],EDX    ; 0059e1f0
    JMP 0x0060e12b                      ; 0059e1f7
        ;   XREF to: 0060e12b (UNCONDITIONAL_JUMP)  ; LAB_0060e12b
    FLD float ptr [EAX + 0x514]         ; 0059e202
        ;   Label: LAB_0059e202
    MOV ESI,dword ptr [ESP + 0x183c]    ; 0059e208
    FSTP float ptr [EAX + 0xcf0]        ; 0059e20f
    INC ESI                             ; 0059e215
    MOV EDI,dword ptr [EBX + 0x28558]   ; 0059e216
    MOV dword ptr [ESP + 0x183c],ESI    ; 0059e21c
    CMP ESI,EDI                         ; 0059e223
    JL 0x0059e19d                       ; 0059e225
        ;   XREF to: 0059e19d (CONDITIONAL_JUMP)  ; LAB_0059e19d
    LEA EAX,[EAX]                       ; 0059e22b
    MOV ECX,ECX                         ; 0059e22e
    MOV ESI,dword ptr [ESP + 0x17e8]    ; 0059e230
        ;   Label: LAB_0059e230
    LEA EAX,[ESI*0x4 + 0x0]             ; 0059e237
    SUB EAX,ESI                         ; 0059e23e
    MOV ESI,dword ptr [EBX + 0x29374]   ; 0059e240
    FLD float ptr [ESI + EAX*0x4]       ; 0059e246
    FMUL float ptr [ESP]                ; 0059e249
    FSTP float ptr [ESP + 0x17c4]       ; 0059e24c
    FLD float ptr [ESI + EAX*0x4 + 0x4] ; 0059e253
    FMUL float ptr [ESP]                ; 0059e257
    FSTP float ptr [ESP + 0x17c8]       ; 0059e25a
    FLD float ptr [ESI + EAX*0x4 + 0x8] ; 0059e261
    FMUL float ptr [ESP]                ; 0059e265
    MOV ESI,dword ptr [ESP + 0x17ec]    ; 0059e268
    FLD float ptr [ESP]                 ; 0059e26f
    LEA EAX,[ESI*0x4 + 0x0]             ; 0059e272
    FLD1                                ; 0059e279
    SUB EAX,ESI                         ; 0059e27b
    FSUBRP                              ; 0059e27d
    LEA ESI,[EAX*0x4 + 0x0]             ; 0059e27f
    FXCH                                ; 0059e286
    FSTP float ptr [ESP + 0x17cc]       ; 0059e288
    MOV EAX,dword ptr [EBX + 0x29374]   ; 0059e28f
    FSTP float ptr [ESP + 0x17f4]       ; 0059e295
    FLD float ptr [ESI + EAX*0x1]       ; 0059e29c
    FMUL float ptr [ESP + 0x17f4]       ; 0059e29f
    FSTP float ptr [ESP + 0x17d0]       ; 0059e2a6
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 0059e2ad
    FMUL float ptr [ESP + 0x17f4]       ; 0059e2b1
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059e2b8
    FSTP float ptr [ESP + 0x17d4]       ; 0059e2bb
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 0059e2c2
    FMUL float ptr [ESP + 0x17f4]       ; 0059e2c6
    ADD EBX,0x6a4                       ; 0059e2cd
    FLD float ptr [ESP + 0x17d0]        ; 0059e2d3
    FADD float ptr [ESP + 0x17c4]       ; 0059e2da
    FLD float ptr [ESP + 0x17d4]        ; 0059e2e1
    FXCH                                ; 0059e2e8
    FSTP float ptr [ESP + 0x17dc]       ; 0059e2ea
    LEA EAX,[ESP + 0x17dc]              ; 0059e2f1
    FADD float ptr [ESP + 0x17c8]       ; 0059e2f8
    FXCH                                ; 0059e2ff
    FST float ptr [ESP + 0x17d8]        ; 0059e301
    FADD float ptr [ESP + 0x17cc]       ; 0059e308
    FXCH                                ; 0059e30f
    FSTP float ptr [ESP + 0x17e0]       ; 0059e311
    FSTP float ptr [ESP + 0x17e4]       ; 0059e318
    CMP EBX,EAX                         ; 0059e31f
    JZ 0x0059e340                       ; 0059e321
        ;   XREF to: 0059e340 (CONDITIONAL_JUMP)  ; LAB_0059e340
    MOV EAX,dword ptr [ESP + 0x17dc]    ; 0059e323
    MOV dword ptr [EBX],EAX             ; 0059e32a
    MOV EAX,dword ptr [ESP + 0x17e0]    ; 0059e32c
    MOV dword ptr [EBX + 0x4],EAX       ; 0059e333
    MOV EAX,dword ptr [ESP + 0x17e4]    ; 0059e336
    MOV dword ptr [EBX + 0x8],EAX       ; 0059e33d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059e340
        ;   Label: LAB_0059e340
    FLD float ptr [EAX + 0x508]         ; 0059e343
    FMUL float ptr [EAX + 0x6a4]        ; 0059e349
    FLD float ptr [EAX + 0x50c]         ; 0059e34f
    FMUL float ptr [EAX + 0x6a8]        ; 0059e355
    FLD float ptr [EAX + 0x510]         ; 0059e35b
    FMUL float ptr [EAX + 0x6ac]        ; 0059e361
    FXCH                                ; 0059e367
    FSTP float ptr [EAX + 0x6a8]        ; 0059e369
    FSTP float ptr [EAX + 0x6ac]        ; 0059e36f
    FSTP float ptr [EAX + 0x6a4]        ; 0059e375
    MOV ESP,EBP                         ; 0059e37b
    POP EBP                             ; 0059e37d
    POP EDI                             ; 0059e37e
    POP ESI                             ; 0059e37f
    POP EBX                             ; 0059e380
    RET                                 ; 0059e381
    XOR EAX,EAX                         ; 0059e382
        ;   Label: LAB_0059e382
    MOV EDX,dword ptr [ESI + 0x28558]   ; 0059e384
    MOV dword ptr [ESP + 0x1854],EAX    ; 0059e38a
    TEST EDX,EDX                        ; 0059e391
    JLE 0x0059e451                      ; 0059e393
        ;   XREF to: 0059e451 (CONDITIONAL_JUMP)  ; LAB_0059e451
    MOV dword ptr [ESP + 0x181c],EAX    ; 0059e399
    MOV dword ptr [ESP + 0x1838],EAX    ; 0059e3a0
    MOV EAX,dword ptr [EBP + 0x20]      ; 0059e3a7
        ;   Label: LAB_0059e3a7
    PUSH EAX                            ; 0059e3aa
    MOV EDX,dword ptr [ESP + 0x1858]    ; 0059e3ab
    PUSH EDX                            ; 0059e3b2
    PUSH EBX                            ; 0059e3b3
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100 ; 0059e3b4
        ;   XREF to: 0059a100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0059e3b9
    MOV ESI,dword ptr [ESP + 0x1838]    ; 0059e3bc
    MOV dword ptr [ESP + ESI*0x1 + 0x12c4],EAX ; 0059e3c3
    TEST EAX,EAX                        ; 0059e3ca
    JL 0x0059e412                       ; 0059e3cc
        ;   XREF to: 0059e412 (CONDITIONAL_JUMP)  ; LAB_0059e412
    MOV ESI,dword ptr [ESP + 0x17e8]    ; 0059e3ce
    PUSH dword ptr [ESP]                ; 0059e3d5
    PUSH ESI                            ; 0059e3d8
    MOV EDI,dword ptr [ESP + 0x17f4]    ; 0059e3d9
    PUSH EDI                            ; 0059e3e0
    MOV EAX,dword ptr [ESP + 0x1860]    ; 0059e3e1
    PUSH EAX                            ; 0059e3e8
    PUSH EBX                            ; 0059e3e9
    LEA ESI,[ESP + 0x17b8]              ; 0059e3ea
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070 ; 0059e3f1
        ;   XREF to: 0059a070 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, ...)
    ADD ESP,0x14                        ; 0059e3f6
    MOV EDI,dword ptr [ESP + 0x181c]    ; 0059e3f9
    LEA ESI,[ESP + 0x17a4]              ; 0059e400
    JMP 0x006089ae                      ; 0059e407
        ;   XREF to: 006089ae (UNCONDITIONAL_JUMP)  ; LAB_006089ae
    MOV EDI,dword ptr [ESP + 0x1838]    ; 0059e412
        ;   Label: LAB_0059e412
    MOV EAX,dword ptr [ESP + 0x181c]    ; 0059e419
    MOV EDX,dword ptr [ESP + 0x1854]    ; 0059e420
    MOV ECX,dword ptr [EBX + 0x28558]   ; 0059e427
    ADD EDI,0x4                         ; 0059e42d
    ADD EAX,0x10                        ; 0059e430
    INC EDX                             ; 0059e433
    MOV dword ptr [ESP + 0x1838],EDI    ; 0059e434
    MOV dword ptr [ESP + 0x181c],EAX    ; 0059e43b
    MOV dword ptr [ESP + 0x1854],EDX    ; 0059e442
    CMP EDX,ECX                         ; 0059e449
    JL 0x0059e3a7                       ; 0059e44b
        ;   XREF to: 0059e3a7 (CONDITIONAL_JUMP)  ; LAB_0059e3a7
    MOV ESI,dword ptr [EBP + 0x20]      ; 0059e451
        ;   Label: LAB_0059e451
    LEA EAX,[ESI*0x8 + 0x0]             ; 0059e454
    ADD EAX,ESI                         ; 0059e45b
    SHL EAX,0x2                         ; 0059e45d
    LEA EDI,[EBX + EAX*0x1]             ; 0059e460
    MOV EDI,dword ptr [EDI + 0x2857c]   ; 0059e463
    TEST EDI,EDI                        ; 0059e469
    JL 0x0059e4a6                       ; 0059e46b
        ;   XREF to: 0059e4a6 (CONDITIONAL_JUMP)  ; LAB_0059e4a6
    MOV ESI,dword ptr [ESP + 0x17e8]    ; 0059e46d
    PUSH dword ptr [ESP]                ; 0059e474
    PUSH ESI                            ; 0059e477
    MOV EAX,dword ptr [ESP + 0x17f4]    ; 0059e478
    PUSH EAX                            ; 0059e47f
    PUSH EDI                            ; 0059e480
    PUSH EBX                            ; 0059e481
    LEA ESI,[ESP + 0x16c8]              ; 0059e482
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070 ; 0059e489
        ;   XREF to: 0059a070 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, ...)
    SHL EDI,0x4                         ; 0059e48e
    ADD ESP,0x14                        ; 0059e491
    LEA ESI,[ESP + 0x16b4]              ; 0059e494
    JMP 0x006089d6                      ; 0059e49b
        ;   XREF to: 006089d6 (UNCONDITIONAL_JUMP)  ; LAB_006089d6
    XOR EDX,EDX                         ; 0059e4a6
        ;   Label: LAB_0059e4a6
    MOV ECX,dword ptr [EBX + 0x28558]   ; 0059e4a8
    MOV dword ptr [ESP + 0x1844],EDX    ; 0059e4ae
    TEST ECX,ECX                        ; 0059e4b5
    JLE 0x0059e16e                      ; 0059e4b7
        ;   XREF to: 0059e16e (CONDITIONAL_JUMP)  ; LAB_0059e16e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059e4bd
    ADD EAX,0x6b0                       ; 0059e4c0
    MOV dword ptr [ESP + 0x1818],EDX    ; 0059e4c5
    MOV dword ptr [ESP + 0x17fc],EAX    ; 0059e4cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059e4d3
    MOV dword ptr [ESP + 0x1824],EBX    ; 0059e4d6
    MOV dword ptr [ESP + 0x1828],EAX    ; 0059e4dd
    MOV EAX,dword ptr [ESP + 0x1818]    ; 0059e4e4
        ;   Label: LAB_0059e4e4
    CMP dword ptr [ESP + EAX*0x1 + 0x12c4],0x0 ; 0059e4eb
    JL 0x0059e52f                       ; 0059e4f3
        ;   XREF to: 0059e52f (CONDITIONAL_JUMP)  ; LAB_0059e52f
    MOV ESI,dword ptr [ESP + 0x1844]    ; 0059e4f5
    MOV EAX,dword ptr [ESP + 0x1824]    ; 0059e4fc
    SHL ESI,0x4                         ; 0059e503
    MOV EAX,dword ptr [EAX + 0x2857c]   ; 0059e506
    MOV dword ptr [ESP + 0x1808],ESI    ; 0059e50c
    TEST EAX,EAX                        ; 0059e513
    JGE 0x0059e584                      ; 0059e515
        ;   XREF to: 0059e584 (CONDITIONAL_JUMP)  ; LAB_0059e584
    MOV EDI,dword ptr [ESP + 0x1828]    ; 0059e517
    LEA ESI,[ESP + ESI*0x1 + 0xc84]     ; 0059e51e
    LEA EDI,[EDI + 0x6b0]               ; 0059e525
        ;   Label: LAB_0059e525
    MOVSD ES:EDI,ESI                    ; 0059e52b
    MOVSD ES:EDI,ESI                    ; 0059e52c
    MOVSD ES:EDI,ESI                    ; 0059e52d
    MOVSD ES:EDI,ESI                    ; 0059e52e
    MOV EDX,dword ptr [ESP + 0x1818]    ; 0059e52f
        ;   Label: LAB_0059e52f
    MOV ECX,dword ptr [ESP + 0x1828]    ; 0059e536
    MOV ESI,dword ptr [ESP + 0x1824]    ; 0059e53d
    MOV EDI,dword ptr [ESP + 0x1844]    ; 0059e544
    ADD EDX,0x4                         ; 0059e54b
    ADD ECX,0x10                        ; 0059e54e
    ADD ESI,0x24                        ; 0059e551
    INC EDI                             ; 0059e554
    MOV dword ptr [ESP + 0x1818],EDX    ; 0059e555
    MOV dword ptr [ESP + 0x1828],ECX    ; 0059e55c
    MOV dword ptr [ESP + 0x1824],ESI    ; 0059e563
    MOV EDX,dword ptr [EBX + 0x28558]   ; 0059e56a
    MOV dword ptr [ESP + 0x1844],EDI    ; 0059e570
    CMP EDI,EDX                         ; 0059e577
    JGE 0x0059e16e                      ; 0059e579
        ;   XREF to: 0059e16e (CONDITIONAL_JUMP)  ; LAB_0059e16e
    JMP 0x0059e4e4                      ; 0059e57f
        ;   XREF to: 0059e4e4 (UNCONDITIONAL_JUMP)  ; LAB_0059e4e4
    SHL EAX,0x4                         ; 0059e584
        ;   Label: LAB_0059e584
    MOV dword ptr [ESP + 0x17f0],EAX    ; 0059e587
    LEA EAX,[ESP + 0xc84]               ; 0059e58e
    ADD EAX,dword ptr [ESP + 0x17f0]    ; 0059e595
    PUSH EAX                            ; 0059e59c
    LEA ESI,[ESP + 0x1718]              ; 0059e59d
    LEA EDI,[ESP + 0x1668]              ; 0059e5a4
    CALL core_xform.cpp_negateFirstComponent_FUN_005f75e0 ; 0059e5ab
        ;   XREF to: 005f75e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f * vector_in, CQuaternion4f * vector_out)
    ADD ESP,0x4                         ; 0059e5b0
    LEA EAX,[ESP + 0x1664]              ; 0059e5b3
    MOV EDX,dword ptr [ESP + 0x1808]    ; 0059e5ba
    PUSH EAX                            ; 0059e5c1
    LEA EAX,[ESP + 0xc88]               ; 0059e5c2
    LEA ESI,[ESP + 0x1718]              ; 0059e5c9
    JMP 0x0060e153                      ; 0059e5d0
        ;   XREF to: 0060e153 (UNCONDITIONAL_JUMP)  ; LAB_0060e153
    PUSH EAX                            ; 0059e5d6
        ;   Label: LAB_0059e5d6
    LEA ESI,[ESP + 0x172c]              ; 0059e5d7
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0059e5de
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    ADD ESP,0x8                         ; 0059e5e3
    MOV EAX,dword ptr [ESP + 0x17fc]    ; 0059e5e6
    MOV ECX,dword ptr [ESP + 0x17f0]    ; 0059e5ed
    LEA EDI,[ESP + 0x17b4]              ; 0059e5f4
    ADD EAX,ECX                         ; 0059e5fb
    LEA ESI,[ESP + 0x1724]              ; 0059e5fd
    PUSH EAX                            ; 0059e604
    JMP 0x0060e176                      ; 0059e605
        ;   XREF to: 0060e176 (UNCONDITIONAL_JUMP)  ; LAB_0060e176
    PUSH EAX                            ; 0059e610
        ;   Label: LAB_0059e610
    LEA ESI,[ESP + 0x163c]              ; 0059e611
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0059e618
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    ADD ESP,0x8                         ; 0059e61d
    MOV EDI,dword ptr [ESP + 0x1828]    ; 0059e620
    LEA ESI,[ESP + 0x1634]              ; 0059e627
    JMP 0x0059e525                      ; 0059e62e
        ;   XREF to: 0059e525 (UNCONDITIONAL_JUMP)  ; LAB_0059e525
    IMUL EDI,EDI,0x54c                  ; 0059e633
        ;   Label: LAB_0059e633
    PUSH EAX                            ; 0059e639
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0059e63a
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059e63f
    XOR ECX,ECX                         ; 0059e642
    MOV dword ptr [ESP + 0x1858],ECX    ; 0059e644
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x9c8] ; 0059e64b
    MOV EDI,dword ptr [ESI + 0x28558]   ; 0059e652
    MOV dword ptr [ESP + 0x1800],EAX    ; 0059e658
    TEST EDI,EDI                        ; 0059e65f
    JLE 0x0059e749                      ; 0059e661
        ;   XREF to: 0059e749 (CONDITIONAL_JUMP)  ; LAB_0059e749
    MOV dword ptr [ESP + 0x182c],ECX    ; 0059e667
    MOV dword ptr [ESP + 0x1830],ECX    ; 0059e66e
    MOV ECX,dword ptr [EBP + 0x20]      ; 0059e675
        ;   Label: LAB_0059e675
    PUSH ECX                            ; 0059e678
    MOV ESI,dword ptr [ESP + 0x185c]    ; 0059e679
    PUSH ESI                            ; 0059e680
    PUSH EBX                            ; 0059e681
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100 ; 0059e682
        ;   XREF to: 0059a100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0059e687
    MOV ESI,dword ptr [ESP + 0x1830]    ; 0059e68a
    MOV dword ptr [ESP + ESI*0x1 + 0x1454],EAX ; 0059e691
    TEST EAX,EAX                        ; 0059e698
    JL 0x0059e70a                       ; 0059e69a
        ;   XREF to: 0059e70a (CONDITIONAL_JUMP)  ; LAB_0059e70a
    MOV EAX,dword ptr [ESP + 0x1800]    ; 0059e69c
    PUSH EAX                            ; 0059e6a3
    MOV EDX,dword ptr [ESP + 0x185c]    ; 0059e6a4
    PUSH EDX                            ; 0059e6ab
    PUSH EBX                            ; 0059e6ac
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050 ; 0059e6ad
        ;   XREF to: 0059a050 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050(CSkeleton * this_ptr, int bone_index, int frame_index)
    ADD ESP,0xc                         ; 0059e6b2
    MOV EDI,dword ptr [ESP + 0x182c]    ; 0059e6b5
    MOV ESI,EAX                         ; 0059e6bc
    LEA EDI,[ESP + EDI*0x1 + 0x644]     ; 0059e6be
    JMP 0x0060e19e                      ; 0059e6c5
        ;   XREF to: 0060e19e (UNCONDITIONAL_JUMP)  ; LAB_0060e19e
    PUSH dword ptr [ESP]                ; 0059e6d0
        ;   Label: LAB_0059e6d0
    PUSH ECX                            ; 0059e6d3
    MOV ESI,dword ptr [ESP + 0x17f4]    ; 0059e6d4
    PUSH ESI                            ; 0059e6db
    MOV EDI,dword ptr [ESP + 0x1864]    ; 0059e6dc
    PUSH EDI                            ; 0059e6e3
    PUSH EBX                            ; 0059e6e4
    LEA ESI,[ESP + 0x1718]              ; 0059e6e5
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070 ; 0059e6ec
        ;   XREF to: 0059a070 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, ...)
    ADD ESP,0x14                        ; 0059e6f1
    MOV EDI,dword ptr [ESP + 0x182c]    ; 0059e6f4
    LEA ESI,[ESP + 0x1704]              ; 0059e6fb
    JMP 0x006089fe                      ; 0059e702
        ;   XREF to: 006089fe (UNCONDITIONAL_JUMP)  ; LAB_006089fe
    MOV ESI,dword ptr [ESP + 0x1830]    ; 0059e70a
        ;   Label: LAB_0059e70a
    MOV EDI,dword ptr [ESP + 0x182c]    ; 0059e711
    MOV EAX,dword ptr [ESP + 0x1858]    ; 0059e718
    MOV EDX,dword ptr [EBX + 0x28558]   ; 0059e71f
    ADD ESI,0x4                         ; 0059e725
    ADD EDI,0x10                        ; 0059e728
    INC EAX                             ; 0059e72b
    MOV dword ptr [ESP + 0x1830],ESI    ; 0059e72c
    MOV dword ptr [ESP + 0x182c],EDI    ; 0059e733
    MOV dword ptr [ESP + 0x1858],EAX    ; 0059e73a
    CMP EAX,EDX                         ; 0059e741
    JL 0x0059e675                       ; 0059e743
        ;   XREF to: 0059e675 (CONDITIONAL_JUMP)  ; LAB_0059e675
    MOV ESI,dword ptr [EBP + 0x20]      ; 0059e749
        ;   Label: LAB_0059e749
    LEA EAX,[ESI*0x8 + 0x0]             ; 0059e74c
    ADD EAX,ESI                         ; 0059e753
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x2857c] ; 0059e755
    MOV dword ptr [ESP + 0x17f8],EAX    ; 0059e75c
    TEST EAX,EAX                        ; 0059e763
    JL 0x0059e7d7                       ; 0059e765
        ;   XREF to: 0059e7d7 (CONDITIONAL_JUMP)  ; LAB_0059e7d7
    MOV ESI,dword ptr [ESP + 0x1800]    ; 0059e767
    MOV EDI,EAX                         ; 0059e76e
    PUSH ESI                            ; 0059e770
    MOV ESI,EDI                         ; 0059e771
    PUSH EAX                            ; 0059e773
    SHL ESI,0x4                         ; 0059e774
    PUSH EBX                            ; 0059e777
    MOV EDI,ESI                         ; 0059e778
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050 ; 0059e77a
        ;   XREF to: 0059a050 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050(CSkeleton * this_ptr, int bone_index, int frame_index)
    ADD ESP,0xc                         ; 0059e77f
    LEA EDI,[ESP + EDI*0x1 + 0x644]     ; 0059e782
    MOV dword ptr [ESP + 0x17f0],ESI    ; 0059e789
    MOV ESI,EAX                         ; 0059e790
    JMP 0x0060e1c6                      ; 0059e792
        ;   XREF to: 0060e1c6 (UNCONDITIONAL_JUMP)  ; LAB_0060e1c6
    PUSH dword ptr [ESP]                ; 0059e79d
        ;   Label: LAB_0059e79d
    PUSH EAX                            ; 0059e7a0
    MOV EDX,dword ptr [ESP + 0x17f4]    ; 0059e7a1
    PUSH EDX                            ; 0059e7a8
    MOV ECX,dword ptr [ESP + 0x1804]    ; 0059e7a9
    PUSH ECX                            ; 0059e7b0
    PUSH EBX                            ; 0059e7b1
    LEA ESI,[ESP + 0x1658]              ; 0059e7b2
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070 ; 0059e7b9
        ;   XREF to: 0059a070 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, ...)
    ADD ESP,0x14                        ; 0059e7be
    MOV EDI,dword ptr [ESP + 0x17f0]    ; 0059e7c1
    LEA ESI,[ESP + 0x1644]              ; 0059e7c8
    JMP 0x00608a23                      ; 0059e7cf
        ;   XREF to: 00608a23 (UNCONDITIONAL_JUMP)  ; LAB_00608a23
    XOR ESI,ESI                         ; 0059e7d7
        ;   Label: LAB_0059e7d7
    MOV EDI,dword ptr [EBX + 0x28558]   ; 0059e7d9
    MOV dword ptr [ESP + 0x1840],ESI    ; 0059e7df
    TEST EDI,EDI                        ; 0059e7e6
    JLE 0x0059e16e                      ; 0059e7e8
        ;   XREF to: 0059e16e (CONDITIONAL_JUMP)  ; LAB_0059e16e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059e7ee
    ADD EAX,0x6b0                       ; 0059e7f1
    MOV dword ptr [ESP + 0x180c],ESI    ; 0059e7f6
    MOV dword ptr [ESP + 0x1804],EAX    ; 0059e7fd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059e804
    MOV dword ptr [ESP + 0x1820],EBX    ; 0059e807
    MOV dword ptr [ESP + 0x1850],EAX    ; 0059e80e
    MOV EAX,dword ptr [ESP + 0x180c]    ; 0059e815
        ;   Label: LAB_0059e815
    CMP dword ptr [ESP + EAX*0x1 + 0x1454],0x0 ; 0059e81c
    JL 0x0059e968                       ; 0059e824
        ;   XREF to: 0059e968 (CONDITIONAL_JUMP)  ; LAB_0059e968
    MOV EAX,dword ptr [ESP + 0x1820]    ; 0059e82a
    MOV EAX,dword ptr [EAX + 0x2857c]   ; 0059e831
    MOV dword ptr [ESP + 0x1848],EAX    ; 0059e837
    MOV EAX,dword ptr [ESP + 0x1840]    ; 0059e83e
    SHL EAX,0x4                         ; 0059e845
    LEA EDI,[ESP + 0x16a4]              ; 0059e848
    LEA ESI,[ESP + EAX*0x1 + 0x644]     ; 0059e84f
    JMP 0x0060e1ee                      ; 0059e856
        ;   XREF to: 0060e1ee (UNCONDITIONAL_JUMP)  ; LAB_0060e1ee
    LEA ESI,[ESP + EAX*0x1 + 0x4]       ; 0059e861
        ;   Label: LAB_0059e861
    JMP 0x0060e216                      ; 0059e865
        ;   XREF to: 0060e216 (UNCONDITIONAL_JUMP)  ; LAB_0060e216
    LEA EDI,[ESP + 0x1784]              ; 0059e870
        ;   Label: LAB_0059e870
    LEA ESI,[ESI + 0x6b0]               ; 0059e877
    MOV ECX,dword ptr [ESP + 0x1848]    ; 0059e87d
    JMP 0x0060e23e                      ; 0059e884
        ;   XREF to: 0060e23e (UNCONDITIONAL_JUMP)  ; LAB_0060e23e
    JGE 0x0059e9bd                      ; 0059e88a
        ;   XREF to: 0059e9bd (CONDITIONAL_JUMP)  ; LAB_0059e9bd
        ;   Label: LAB_0059e88a
    LEA EAX,[ESP + 0x16a4]              ; 0059e890
        ;   Label: LAB_0059e890
    PUSH EAX                            ; 0059e897
    LEA ESI,[ESP + 0x1748]              ; 0059e898
    LEA EDI,[ESP + 0x1698]              ; 0059e89f
    CALL core_xform.cpp_negateFirstComponent_FUN_005f75e0 ; 0059e8a6
        ;   XREF to: 005f75e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f * vector_in, CQuaternion4f * vector_out)
    ADD ESP,0x4                         ; 0059e8ab
    LEA EAX,[ESP + 0x1694]              ; 0059e8ae
    LEA ESI,[ESP + 0x1744]              ; 0059e8b5
    PUSH EAX                            ; 0059e8bc
    JMP 0x0060e261                      ; 0059e8bd
        ;   XREF to: 0060e261 (UNCONDITIONAL_JUMP)  ; LAB_0060e261
    PUSH EAX                            ; 0059e8c8
        ;   Label: LAB_0059e8c8
    LEA ESI,[ESP + 0x15fc]              ; 0059e8c9
    LEA EDI,[ESP + 0x168c]              ; 0059e8d0
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0059e8d7
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    ADD ESP,0x8                         ; 0059e8dc
    LEA EAX,[ESP + 0x1684]              ; 0059e8df
    LEA ESI,[ESP + 0x15f4]              ; 0059e8e6
    PUSH EAX                            ; 0059e8ed
    LEA EAX,[ESP + 0x1788]              ; 0059e8ee
    JMP 0x0060f63b                      ; 0059e8f5
        ;   XREF to: 0060f63b (UNCONDITIONAL_JUMP)  ; LAB_0060f63b
    LEA ESI,[ESP + 0x160c]              ; 0059e8fa
        ;   Label: LAB_0059e8fa
    LEA EDI,[ESP + 0x16fc]              ; 0059e901
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0059e908
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    ADD ESP,0x8                         ; 0059e90d
    LEA ESI,[ESP + 0x1604]              ; 0059e910
    MOV ECX,dword ptr [ESP + 0x1848]    ; 0059e917
    JMP 0x0060f65d                      ; 0059e91e
        ;   XREF to: 0060f65d (UNCONDITIONAL_JUMP)  ; LAB_0060f65d
    JL 0x0059eaf0                       ; 0059e924
        ;   XREF to: 0059eaf0 (CONDITIONAL_JUMP)  ; LAB_0059eaf0
        ;   Label: LAB_0059e924
    MOV EAX,ECX                         ; 0059e92a
    MOV ESI,dword ptr [ESP + 0x1804]    ; 0059e92c
    SHL EAX,0x4                         ; 0059e933
    ADD EAX,ESI                         ; 0059e936
    PUSH EAX                            ; 0059e938
    LEA EAX,[ESP + 0x16f8]              ; 0059e939
    PUSH EAX                            ; 0059e940
    LEA ESI,[ESP + 0x175c]              ; 0059e941
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0059e948
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    ADD ESP,0x8                         ; 0059e94d
    MOV EDI,dword ptr [ESP + 0x1850]    ; 0059e950
    LEA ESI,[ESP + 0x1754]              ; 0059e957
    LEA EDI,[EDI + 0x6b0]               ; 0059e95e
        ;   Label: LAB_0059e95e
    MOVSD ES:EDI,ESI                    ; 0059e964
    MOVSD ES:EDI,ESI                    ; 0059e965
    MOVSD ES:EDI,ESI                    ; 0059e966
    MOVSD ES:EDI,ESI                    ; 0059e967
    MOV EAX,dword ptr [ESP + 0x180c]    ; 0059e968
        ;   Label: LAB_0059e968
    MOV EDX,dword ptr [ESP + 0x1820]    ; 0059e96f
    MOV ECX,dword ptr [ESP + 0x1850]    ; 0059e976
    MOV ESI,dword ptr [ESP + 0x1840]    ; 0059e97d
    MOV EDI,dword ptr [EBX + 0x28558]   ; 0059e984
    ADD EAX,0x4                         ; 0059e98a
    ADD EDX,0x24                        ; 0059e98d
    ADD ECX,0x10                        ; 0059e990
    INC ESI                             ; 0059e993
    MOV dword ptr [ESP + 0x180c],EAX    ; 0059e994
    MOV dword ptr [ESP + 0x1820],EDX    ; 0059e99b
    MOV dword ptr [ESP + 0x1850],ECX    ; 0059e9a2
    MOV dword ptr [ESP + 0x1840],ESI    ; 0059e9a9
    CMP ESI,EDI                         ; 0059e9b0
    JGE 0x0059e16e                      ; 0059e9b2
        ;   XREF to: 0059e16e (CONDITIONAL_JUMP)  ; LAB_0059e16e
    JMP 0x0059e815                      ; 0059e9b8
        ;   XREF to: 0059e815 (UNCONDITIONAL_JUMP)  ; LAB_0059e815
    MOV EAX,ECX                         ; 0059e9bd
        ;   Label: LAB_0059e9bd
    SHL EAX,0x4                         ; 0059e9bf
    MOV dword ptr [ESP + 0x17f0],EAX    ; 0059e9c2
    LEA EAX,[ESP + 0x644]               ; 0059e9c9
    ADD EAX,dword ptr [ESP + 0x17f0]    ; 0059e9d0
    PUSH EAX                            ; 0059e9d7
    LEA ESI,[ESP + 0x1778]              ; 0059e9d8
    LEA EDI,[ESP + 0x16c8]              ; 0059e9df
    CALL core_xform.cpp_negateFirstComponent_FUN_005f75e0 ; 0059e9e6
        ;   XREF to: 005f75e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f * vector_in, CQuaternion4f * vector_out)
    ADD ESP,0x4                         ; 0059e9eb
    LEA EAX,[ESP + 0x16c4]              ; 0059e9ee
    LEA ESI,[ESP + 0x1774]              ; 0059e9f5
    PUSH EAX                            ; 0059e9fc
    LEA EAX,[ESP + 0x16a8]              ; 0059e9fd
    JMP 0x0060f680                      ; 0059ea04
        ;   XREF to: 0060f680 (UNCONDITIONAL_JUMP)  ; LAB_0060f680
    LEA ESI,[ESP + 0x161c]              ; 0059ea09
        ;   Label: LAB_0059ea09
    LEA EDI,[ESP + 0x16ac]              ; 0059ea10
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0059ea17
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x161c]              ; 0059ea1c
    ADD ESP,0x8                         ; 0059ea23
    JMP 0x0060f6a2                      ; 0059ea26
        ;   XREF to: 0060f6a2 (UNCONDITIONAL_JUMP)  ; LAB_0060f6a2
    ADD EAX,dword ptr [ESP + 0x17f0]    ; 0059ea2e
        ;   Label: LAB_0059ea2e
    PUSH EAX                            ; 0059ea35
    LEA ESI,[ESP + 0x1678]              ; 0059ea36
    LEA EDI,[ESP + 0x15e8]              ; 0059ea3d
    CALL core_xform.cpp_negateFirstComponent_FUN_005f75e0 ; 0059ea44
        ;   XREF to: 005f75e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f * vector_in, CQuaternion4f * vector_out)
    ADD ESP,0x4                         ; 0059ea49
    LEA EAX,[ESP + 0x15e4]              ; 0059ea4c
    LEA ESI,[ESP + 0x1674]              ; 0059ea53
    PUSH EAX                            ; 0059ea5a
    LEA EAX,[ESP + 0x1798]              ; 0059ea5b
    JMP 0x0060f6c7                      ; 0059ea62
        ;   XREF to: 0060f6c7 (UNCONDITIONAL_JUMP)  ; LAB_0060f6c7
    LEA ESI,[ESP + 0x16dc]              ; 0059ea67
        ;   Label: LAB_0059ea67
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0059ea6e
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    ADD ESP,0x8                         ; 0059ea73
    LEA EDI,[ESP + 0x1794]              ; 0059ea76
    MOV EAX,dword ptr [ESP + 0x1804]    ; 0059ea7d
    MOV EDX,dword ptr [ESP + 0x17f0]    ; 0059ea84
    LEA ESI,[ESP + 0x16d4]              ; 0059ea8b
    ADD EAX,EDX                         ; 0059ea92
    JMP 0x0060f6e9                      ; 0059ea94
        ;   XREF to: 0060f6e9 (UNCONDITIONAL_JUMP)  ; LAB_0060f6e9
    LEA ESI,[ESP + 0x1768]              ; 0059ea99
        ;   Label: LAB_0059ea99
    LEA EDI,[ESP + 0x16e8]              ; 0059eaa0
    CALL core_xform.cpp_negateFirstComponent_FUN_005f75e0 ; 0059eaa7
        ;   XREF to: 005f75e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f * vector_in, CQuaternion4f * vector_out)
    ADD ESP,0x4                         ; 0059eaac
    LEA EAX,[ESP + 0x16e4]              ; 0059eaaf
    LEA ESI,[ESP + 0x1764]              ; 0059eab6
    PUSH EAX                            ; 0059eabd
    LEA EAX,[ESP + 0x1788]              ; 0059eabe
    JMP 0x0060f70b                      ; 0059eac5
        ;   XREF to: 0060f70b (UNCONDITIONAL_JUMP)  ; LAB_0060f70b
    LEA ESI,[ESP + 0x173c]              ; 0059eaca
        ;   Label: LAB_0059eaca
    LEA EDI,[ESP + 0x178c]              ; 0059ead1
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0059ead8
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x173c]              ; 0059eadd
    JMP 0x0060f72d                      ; 0059eae4
        ;   XREF to: 0060f72d (UNCONDITIONAL_JUMP)  ; LAB_0060f72d
    JMP 0x0059e890                      ; 0059eaeb
        ;   XREF to: 0059e890 (UNCONDITIONAL_JUMP)  ; LAB_0059e890
        ;   Label: LAB_0059eaeb
    MOV EDI,dword ptr [ESP + 0x1850]    ; 0059eaf0
        ;   Label: LAB_0059eaf0
    LEA ESI,[ESP + 0x1604]              ; 0059eaf7
    JMP 0x0059e95e                      ; 0059eafe
        ;   XREF to: 0059e95e (UNCONDITIONAL_JUMP)  ; LAB_0059e95e
    MOV EAX,dword ptr [ESP + 0x17e8]    ; 0059eb03
        ;   Label: LAB_0059eb03
    PUSH dword ptr [ESP]                ; 0059eb0a
    PUSH EAX                            ; 0059eb0d
    MOV EDX,dword ptr [ESP + 0x17f4]    ; 0059eb0e
    PUSH EDX                            ; 0059eb15
    PUSH EDI                            ; 0059eb16
    PUSH EBX                            ; 0059eb17
    LEA ESI,[ESP + 0x1668]              ; 0059eb18
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070 ; 0059eb1f
        ;   XREF to: 0059a070 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, ...)
    ADD ESP,0x14                        ; 0059eb24
    MOV EDI,dword ptr [ESP + 0x1810]    ; 0059eb27
    LEA ESI,[ESP + 0x1654]              ; 0059eb2e
    JMP 0x0060f751                      ; 0059eb35
        ;   XREF to: 0060f751 (UNCONDITIONAL_JUMP)  ; LAB_0060f751
    JMP 0x0059e144                      ; 0059eb3f
        ;   XREF to: 0059e144 (UNCONDITIONAL_JUMP)  ; LAB_0059e144
        ;   Label: LAB_0059eb3f
    LEA EDI,[ESP + EDI*0x1 + 0xc84]     ; 006089ae
        ;   Label: LAB_006089ae
    MOV ECX,dword ptr [ESI]             ; 006089b5
    MOV dword ptr [EDI],ECX             ; 006089b7
    MOV ECX,dword ptr [ESI + 0x4]       ; 006089b9
    MOV dword ptr [EDI + 0x4],ECX       ; 006089bc
    MOV ECX,dword ptr [ESI + 0x8]       ; 006089bf
    MOV dword ptr [EDI + 0x8],ECX       ; 006089c2
    MOV ECX,dword ptr [ESI + 0xc]       ; 006089c5
    MOV dword ptr [EDI + 0xc],ECX       ; 006089c8
    ADD ESI,0x10                        ; 006089cb
    ADD EDI,0x10                        ; 006089ce
    JMP 0x0059e412                      ; 006089d1
        ;   XREF to: 0059e412 (UNCONDITIONAL_JUMP)  ; LAB_0059e412
    LEA EDI,[ESP + EDI*0x1 + 0xc84]     ; 006089d6
        ;   Label: LAB_006089d6
    MOV ECX,dword ptr [ESI]             ; 006089dd
    MOV dword ptr [EDI],ECX             ; 006089df
    MOV ECX,dword ptr [ESI + 0x4]       ; 006089e1
    MOV dword ptr [EDI + 0x4],ECX       ; 006089e4
    MOV ECX,dword ptr [ESI + 0x8]       ; 006089e7
    MOV dword ptr [EDI + 0x8],ECX       ; 006089ea
    MOV ECX,dword ptr [ESI + 0xc]       ; 006089ed
    MOV dword ptr [EDI + 0xc],ECX       ; 006089f0
    ADD ESI,0x10                        ; 006089f3
    ADD EDI,0x10                        ; 006089f6
    JMP 0x0059e4a6                      ; 006089f9
        ;   XREF to: 0059e4a6 (UNCONDITIONAL_JUMP)  ; LAB_0059e4a6
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 006089fe
        ;   Label: LAB_006089fe
    MOV ECX,dword ptr [ESI]             ; 00608a02
    MOV dword ptr [EDI],ECX             ; 00608a04
    MOV ECX,dword ptr [ESI + 0x4]       ; 00608a06
    MOV dword ptr [EDI + 0x4],ECX       ; 00608a09
    MOV ECX,dword ptr [ESI + 0x8]       ; 00608a0c
    MOV dword ptr [EDI + 0x8],ECX       ; 00608a0f
    MOV ECX,dword ptr [ESI + 0xc]       ; 00608a12
    MOV dword ptr [EDI + 0xc],ECX       ; 00608a15
    ADD ESI,0x10                        ; 00608a18
    ADD EDI,0x10                        ; 00608a1b
    JMP 0x0059e70a                      ; 00608a1e
        ;   XREF to: 0059e70a (UNCONDITIONAL_JUMP)  ; LAB_0059e70a
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 00608a23
        ;   Label: LAB_00608a23
    MOV ECX,dword ptr [ESI]             ; 00608a27
    MOV dword ptr [EDI],ECX             ; 00608a29
    MOV ECX,dword ptr [ESI + 0x4]       ; 00608a2b
    MOV dword ptr [EDI + 0x4],ECX       ; 00608a2e
    MOV ECX,dword ptr [ESI + 0x8]       ; 00608a31
    MOV dword ptr [EDI + 0x8],ECX       ; 00608a34
    MOV ECX,dword ptr [ESI + 0xc]       ; 00608a37
    MOV dword ptr [EDI + 0xc],ECX       ; 00608a3a
    ADD ESI,0x10                        ; 00608a3d
    ADD EDI,0x10                        ; 00608a40
    JMP 0x0059e7d7                      ; 00608a43
        ;   XREF to: 0059e7d7 (UNCONDITIONAL_JUMP)  ; LAB_0059e7d7
    MOV ECX,dword ptr [ESI]             ; 0060e12b
        ;   Label: LAB_0060e12b
    MOV dword ptr [EDI],ECX             ; 0060e12d
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060e12f
    MOV dword ptr [EDI + 0x4],ECX       ; 0060e132
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060e135
    MOV dword ptr [EDI + 0x8],ECX       ; 0060e138
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060e13b
    MOV dword ptr [EDI + 0xc],ECX       ; 0060e13e
    ADD ESI,0x10                        ; 0060e141
    ADD EDI,0x10                        ; 0060e144
    MOV dword ptr [ESP + 0x1814],ECX    ; 0060e147
    JMP 0x0059e202                      ; 0060e14e
        ;   XREF to: 0059e202 (UNCONDITIONAL_JUMP)  ; LAB_0059e202
    ADD EAX,EDX                         ; 0060e153
        ;   Label: LAB_0060e153
    MOV ECX,dword ptr [ESI]             ; 0060e155
    MOV dword ptr [EDI],ECX             ; 0060e157
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060e159
    MOV dword ptr [EDI + 0x4],ECX       ; 0060e15c
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060e15f
    MOV dword ptr [EDI + 0x8],ECX       ; 0060e162
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060e165
    MOV dword ptr [EDI + 0xc],ECX       ; 0060e168
    ADD ESI,0x10                        ; 0060e16b
    ADD EDI,0x10                        ; 0060e16e
    JMP 0x0059e5d6                      ; 0060e171
        ;   XREF to: 0059e5d6 (UNCONDITIONAL_JUMP)  ; LAB_0059e5d6
    LEA EAX,[ESP + 0x17b8]              ; 0060e176
        ;   Label: LAB_0060e176
    MOV ECX,dword ptr [ESI]             ; 0060e17d
    MOV dword ptr [EDI],ECX             ; 0060e17f
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060e181
    MOV dword ptr [EDI + 0x4],ECX       ; 0060e184
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060e187
    MOV dword ptr [EDI + 0x8],ECX       ; 0060e18a
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060e18d
    MOV dword ptr [EDI + 0xc],ECX       ; 0060e190
    ADD ESI,0x10                        ; 0060e193
    ADD EDI,0x10                        ; 0060e196
    JMP 0x0059e610                      ; 0060e199
        ;   XREF to: 0059e610 (UNCONDITIONAL_JUMP)  ; LAB_0059e610
    MOV ECX,dword ptr [ESI]             ; 0060e19e
        ;   Label: LAB_0060e19e
    MOV dword ptr [EDI],ECX             ; 0060e1a0
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060e1a2
    MOV dword ptr [EDI + 0x4],ECX       ; 0060e1a5
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060e1a8
    MOV dword ptr [EDI + 0x8],ECX       ; 0060e1ab
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060e1ae
    MOV dword ptr [EDI + 0xc],ECX       ; 0060e1b1
    ADD ESI,0x10                        ; 0060e1b4
    ADD EDI,0x10                        ; 0060e1b7
    MOV ECX,dword ptr [ESP + 0x17e8]    ; 0060e1ba
    JMP 0x0059e6d0                      ; 0060e1c1
        ;   XREF to: 0059e6d0 (UNCONDITIONAL_JUMP)  ; LAB_0059e6d0
    MOV ECX,dword ptr [ESI]             ; 0060e1c6
        ;   Label: LAB_0060e1c6
    MOV dword ptr [EDI],ECX             ; 0060e1c8
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060e1ca
    MOV dword ptr [EDI + 0x4],ECX       ; 0060e1cd
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060e1d0
    MOV dword ptr [EDI + 0x8],ECX       ; 0060e1d3
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060e1d6
    MOV dword ptr [EDI + 0xc],ECX       ; 0060e1d9
    ADD ESI,0x10                        ; 0060e1dc
    ADD EDI,0x10                        ; 0060e1df
    MOV EAX,dword ptr [ESP + 0x17e8]    ; 0060e1e2
    JMP 0x0059e79d                      ; 0060e1e9
        ;   XREF to: 0059e79d (UNCONDITIONAL_JUMP)  ; LAB_0059e79d
    MOV ECX,dword ptr [ESI]             ; 0060e1ee
        ;   Label: LAB_0060e1ee
    MOV dword ptr [EDI],ECX             ; 0060e1f0
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060e1f2
    MOV dword ptr [EDI + 0x4],ECX       ; 0060e1f5
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060e1f8
    MOV dword ptr [EDI + 0x8],ECX       ; 0060e1fb
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060e1fe
    MOV dword ptr [EDI + 0xc],ECX       ; 0060e201
    ADD ESI,0x10                        ; 0060e204
    ADD EDI,0x10                        ; 0060e207
    LEA EDI,[ESP + 0x1794]              ; 0060e20a
    JMP 0x0059e861                      ; 0060e211
        ;   XREF to: 0059e861 (UNCONDITIONAL_JUMP)  ; LAB_0059e861
    MOV ECX,dword ptr [ESI]             ; 0060e216
        ;   Label: LAB_0060e216
    MOV dword ptr [EDI],ECX             ; 0060e218
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060e21a
    MOV dword ptr [EDI + 0x4],ECX       ; 0060e21d
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060e220
    MOV dword ptr [EDI + 0x8],ECX       ; 0060e223
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060e226
    MOV dword ptr [EDI + 0xc],ECX       ; 0060e229
    ADD ESI,0x10                        ; 0060e22c
    ADD EDI,0x10                        ; 0060e22f
    MOV ESI,dword ptr [ESP + 0x1850]    ; 0060e232
    JMP 0x0059e870                      ; 0060e239
        ;   XREF to: 0059e870 (UNCONDITIONAL_JUMP)  ; LAB_0059e870
    MOV ECX,dword ptr [ESI]             ; 0060e23e
        ;   Label: LAB_0060e23e
    MOV dword ptr [EDI],ECX             ; 0060e240
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060e242
    MOV dword ptr [EDI + 0x4],ECX       ; 0060e245
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060e248
    MOV dword ptr [EDI + 0x8],ECX       ; 0060e24b
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060e24e
    MOV dword ptr [EDI + 0xc],ECX       ; 0060e251
    ADD ESI,0x10                        ; 0060e254
    ADD EDI,0x10                        ; 0060e257
    TEST ECX,ECX                        ; 0060e25a
    JMP 0x0059e88a                      ; 0060e25c
        ;   XREF to: 0059e88a (UNCONDITIONAL_JUMP)  ; LAB_0059e88a
    LEA EAX,[ESP + 0x1798]              ; 0060e261
        ;   Label: LAB_0060e261
    MOV ECX,dword ptr [ESI]             ; 0060e268
    MOV dword ptr [EDI],ECX             ; 0060e26a
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060e26c
    MOV dword ptr [EDI + 0x4],ECX       ; 0060e26f
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060e272
    MOV dword ptr [EDI + 0x8],ECX       ; 0060e275
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060e278
    MOV dword ptr [EDI + 0xc],ECX       ; 0060e27b
    ADD ESI,0x10                        ; 0060e27e
    ADD EDI,0x10                        ; 0060e281
    JMP 0x0059e8c8                      ; 0060e284
        ;   XREF to: 0059e8c8 (UNCONDITIONAL_JUMP)  ; LAB_0059e8c8
    MOV ECX,dword ptr [ESI]             ; 0060f63b
        ;   Label: LAB_0060f63b
    MOV dword ptr [EDI],ECX             ; 0060f63d
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f63f
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f642
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f645
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f648
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f64b
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f64e
    ADD ESI,0x10                        ; 0060f651
    ADD EDI,0x10                        ; 0060f654
    PUSH EAX                            ; 0060f657
    JMP 0x0059e8fa                      ; 0060f658
        ;   XREF to: 0059e8fa (UNCONDITIONAL_JUMP)  ; LAB_0059e8fa
    MOV ECX,dword ptr [ESI]             ; 0060f65d
        ;   Label: LAB_0060f65d
    MOV dword ptr [EDI],ECX             ; 0060f65f
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f661
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f664
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f667
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f66a
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f66d
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f670
    ADD ESI,0x10                        ; 0060f673
    ADD EDI,0x10                        ; 0060f676
    TEST ECX,ECX                        ; 0060f679
    JMP 0x0059e924                      ; 0060f67b
        ;   XREF to: 0059e924 (UNCONDITIONAL_JUMP)  ; LAB_0059e924
    MOV ECX,dword ptr [ESI]             ; 0060f680
        ;   Label: LAB_0060f680
    MOV dword ptr [EDI],ECX             ; 0060f682
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f684
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f687
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f68a
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f68d
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f690
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f693
    ADD ESI,0x10                        ; 0060f696
    ADD EDI,0x10                        ; 0060f699
    PUSH EAX                            ; 0060f69c
    JMP 0x0059ea09                      ; 0060f69d
        ;   XREF to: 0059ea09 (UNCONDITIONAL_JUMP)  ; LAB_0059ea09
    MOV ECX,dword ptr [ESI]             ; 0060f6a2
        ;   Label: LAB_0060f6a2
    MOV dword ptr [EDI],ECX             ; 0060f6a4
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f6a6
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f6a9
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f6ac
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f6af
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f6b2
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f6b5
    ADD ESI,0x10                        ; 0060f6b8
    ADD EDI,0x10                        ; 0060f6bb
    LEA EAX,[ESP + 0x4]                 ; 0060f6be
    JMP 0x0059ea2e                      ; 0060f6c2
        ;   XREF to: 0059ea2e (UNCONDITIONAL_JUMP)  ; LAB_0059ea2e
    MOV ECX,dword ptr [ESI]             ; 0060f6c7
        ;   Label: LAB_0060f6c7
    MOV dword ptr [EDI],ECX             ; 0060f6c9
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f6cb
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f6ce
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f6d1
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f6d4
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f6d7
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f6da
    ADD ESI,0x10                        ; 0060f6dd
    ADD EDI,0x10                        ; 0060f6e0
    PUSH EAX                            ; 0060f6e3
    JMP 0x0059ea67                      ; 0060f6e4
        ;   XREF to: 0059ea67 (UNCONDITIONAL_JUMP)  ; LAB_0059ea67
    MOV ECX,dword ptr [ESI]             ; 0060f6e9
        ;   Label: LAB_0060f6e9
    MOV dword ptr [EDI],ECX             ; 0060f6eb
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f6ed
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f6f0
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f6f3
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f6f6
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f6f9
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f6fc
    ADD ESI,0x10                        ; 0060f6ff
    ADD EDI,0x10                        ; 0060f702
    PUSH EAX                            ; 0060f705
    JMP 0x0059ea99                      ; 0060f706
        ;   XREF to: 0059ea99 (UNCONDITIONAL_JUMP)  ; LAB_0059ea99
    MOV ECX,dword ptr [ESI]             ; 0060f70b
        ;   Label: LAB_0060f70b
    MOV dword ptr [EDI],ECX             ; 0060f70d
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f70f
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f712
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f715
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f718
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f71b
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f71e
    ADD ESI,0x10                        ; 0060f721
    ADD EDI,0x10                        ; 0060f724
    PUSH EAX                            ; 0060f727
    JMP 0x0059eaca                      ; 0060f728
        ;   XREF to: 0059eaca (UNCONDITIONAL_JUMP)  ; LAB_0059eaca
    ADD ESP,0x8                         ; 0060f72d
        ;   Label: LAB_0060f72d
    MOV ECX,dword ptr [ESI]             ; 0060f730
    MOV dword ptr [EDI],ECX             ; 0060f732
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f734
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f737
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f73a
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f73d
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f740
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f743
    ADD ESI,0x10                        ; 0060f746
    ADD EDI,0x10                        ; 0060f749
    JMP 0x0059eaeb                      ; 0060f74c
        ;   XREF to: 0059eaeb (UNCONDITIONAL_JUMP)  ; LAB_0059eaeb
    LEA EDI,[EDI + 0x6b0]               ; 0060f751
        ;   Label: LAB_0060f751
    MOV ECX,dword ptr [ESI]             ; 0060f757
    MOV dword ptr [EDI],ECX             ; 0060f759
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f75b
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f75e
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f761
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f764
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f767
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f76a
    ADD ESI,0x10                        ; 0060f76d
    ADD EDI,0x10                        ; 0060f770
    JMP 0x0059eb3f                      ; 0060f773
        ;   XREF to: 0059eb3f (UNCONDITIONAL_JUMP)  ; LAB_0059eb3f

