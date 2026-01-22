; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, CVector3f * source_position, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CQuaternion4f *  Stack[0x8]:4   source_quaternions
; CVector3f *      Stack[0xc]:4   source_position
; float            Stack[0x10]:4   blend_weight
; int              Stack[0x14]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x18]:4   blend_callback
; Local Variables:
; undefined1       Stack[-0xd8]:1  local_d8
; undefined1       Stack[-0xc8]:1  local_c8
; undefined1       Stack[-0xb8]:1  local_b8
; undefined1       Stack[-0xa8]:1  local_a8
; undefined1       Stack[-0x98]:1  local_98
; undefined1       Stack[-0x88]:1  local_88
; undefined1       Stack[-0x78]:1  local_78
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
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
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230 at 0059f24d
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064edf8
;   TerminatedCString s_Write_me_0064ee0d
;   double DOUBLE_0064ee18 = 0.00100000000000000
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
;   core_xform.cpp_multiplyQuaternion_FUN_005f7640
;   core_xform.cpp_negateFirstComponent_FUN_005f75e0
;   core_xform.cpp_slerpQuaternion_FUN_005f77e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059f260
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260
    PUSH ESI                            ; 0059f261
    PUSH EDI                            ; 0059f262
    PUSH EBP                            ; 0059f263
    SUB ESP,0xd8                        ; 0059f264
    FLD float ptr [ESP + 0xf8]          ; 0059f26a
    FCOMP double ptr [0x0064ee18]       ; 0059f271 | DOUBLE_0064ee18
    FNSTSW AX                           ; 0059f277
    SAHF                                ; 0059f279
    JA 0x0059f287                       ; 0059f27a
        ;   XREF to: 0059f287 (CONDITIONAL_JUMP)  ; LAB_0059f287
    ADD ESP,0xd8                        ; 0059f27c
        ;   Label: LAB_0059f27c
    POP EBP                             ; 0059f282
    POP EDI                             ; 0059f283
    POP ESI                             ; 0059f284
    POP EBX                             ; 0059f285
    RET                                 ; 0059f286
    MOV EDX,dword ptr [ESP + 0xec]      ; 0059f287
        ;   Label: LAB_0059f287
    PUSH EDX                            ; 0059f28e
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0059f28f
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059f294
    MOV EBX,dword ptr [ESP + 0xec]      ; 0059f297
    MOV EBP,EAX                         ; 0059f29e
    MOV ESI,dword ptr [ESP + 0xec]      ; 0059f2a0
    MOV ECX,dword ptr [EBX + 0x2250]    ; 0059f2a7
    ADD ESI,0x6b0                       ; 0059f2ad
    TEST ECX,ECX                        ; 0059f2b3
    JNZ 0x0059f527                      ; 0059f2b5
        ;   XREF to: 0059f527 (CONDITIONAL_JUMP)  ; LAB_0059f527
    MOV EDI,dword ptr [EAX + 0x28558]   ; 0059f2bb
    XOR EBX,EBX                         ; 0059f2c1
    TEST EDI,EDI                        ; 0059f2c3
    JLE 0x0059f3a5                      ; 0059f2c5
        ;   XREF to: 0059f3a5 (CONDITIONAL_JUMP)  ; LAB_0059f3a5
    MOV EAX,dword ptr [ESP + 0xec]      ; 0059f2cb
    MOV dword ptr [ESP + 0xc4],EAX      ; 0059f2d2
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0059f2d9
    MOV dword ptr [ESP + 0xbc],ESI      ; 0059f2e0
    MOV dword ptr [ESP + 0xcc],EAX      ; 0059f2e7
    MOV EDI,dword ptr [ESP + 0xfc]      ; 0059f2ee
        ;   Label: LAB_0059f2ee
    PUSH EDI                            ; 0059f2f5
    PUSH EBX                            ; 0059f2f6
    PUSH EBP                            ; 0059f2f7
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100 ; 0059f2f8
        ;   XREF to: 0059a100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0059f2fd
    TEST EAX,EAX                        ; 0059f300
    JL 0x0059f363                       ; 0059f302
        ;   XREF to: 0059f363 (CONDITIONAL_JUMP)  ; LAB_0059f363
    MOV EDX,dword ptr [ESP + 0xec]      ; 0059f304
    PUSH EDX                            ; 0059f30b
    PUSH EAX                            ; 0059f30c
    PUSH dword ptr [ESP + 0x100]        ; 0059f30d
    PUSH EDI                            ; 0059f314
    PUSH EBX                            ; 0059f315
    CALL dword ptr [ESP + 0x114]        ; 0059f316
    MOV dword ptr [ESP + 0xe8],EAX      ; 0059f31d
    FLD float ptr [ESP + 0xe8]          ; 0059f324
    ADD ESP,0x14                        ; 0059f32b
    SUB ESP,0x4                         ; 0059f32e
    MOV ESI,dword ptr [ESP + 0xd0]      ; 0059f331
    FSTP float ptr [ESP]                ; 0059f338
    PUSH ESI                            ; 0059f33b
    MOV EDI,dword ptr [ESP + 0xc4]      ; 0059f33c
    PUSH EDI                            ; 0059f343
    LEA ESI,[ESP + 0xc]                 ; 0059f344
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 0059f348
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    ADD ESP,0xc                         ; 0059f34d
    MOV EDI,dword ptr [ESP + 0xc4]      ; 0059f350
    MOV ESI,ESP                         ; 0059f357
    LEA EDI,[EDI + 0x6b0]               ; 0059f359
    MOVSD ES:EDI,ESI                    ; 0059f35f
    MOVSD ES:EDI,ESI                    ; 0059f360
    MOVSD ES:EDI,ESI                    ; 0059f361
    MOVSD ES:EDI,ESI                    ; 0059f362
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0059f363
        ;   Label: LAB_0059f363
    MOV EDX,dword ptr [ESP + 0xbc]      ; 0059f36a
    MOV ECX,dword ptr [ESP + 0xcc]      ; 0059f371
    INC EBX                             ; 0059f378
    MOV ESI,dword ptr [EBP + 0x28558]   ; 0059f379
    ADD EAX,0x10                        ; 0059f37f
    ADD EDX,0x10                        ; 0059f382
    ADD ECX,0x10                        ; 0059f385
    MOV dword ptr [ESP + 0xc4],EAX      ; 0059f388
    MOV dword ptr [ESP + 0xbc],EDX      ; 0059f38f
    MOV dword ptr [ESP + 0xcc],ECX      ; 0059f396
    CMP EBX,ESI                         ; 0059f39d
    JL 0x0059f2ee                       ; 0059f39f
        ;   XREF to: 0059f2ee (CONDITIONAL_JUMP)  ; LAB_0059f2ee
    CMP dword ptr [ESP + 0xfc],0x0      ; 0059f3a5
        ;   Label: LAB_0059f3a5
    JGE 0x0059f27c                      ; 0059f3ad
        ;   XREF to: 0059f27c (CONDITIONAL_JUMP)  ; LAB_0059f27c
    MOV EBX,dword ptr [ESP + 0xec]      ; 0059f3b3
    MOV EAX,dword ptr [EBX + 0x508]     ; 0059f3ba
    ADD EBX,0x508                       ; 0059f3c0
    MOV dword ptr [ESP + 0x8c],EAX      ; 0059f3c6
    LEA EAX,[EBX + 0x4]                 ; 0059f3cd
    MOV EAX,dword ptr [EAX]             ; 0059f3d0
    MOV dword ptr [ESP + 0x90],EAX      ; 0059f3d2
    LEA EAX,[EBX + 0x8]                 ; 0059f3d9
    MOV EAX,dword ptr [EAX]             ; 0059f3dc
    MOV dword ptr [ESP + 0x94],EAX      ; 0059f3de
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0059f3e5
    FLD float ptr [ESP + 0x8c]          ; 0059f3ec
    FMUL float ptr [EAX]                ; 0059f3f3
    FLD float ptr [ESP + 0x90]          ; 0059f3f5
    FXCH                                ; 0059f3fc
    FSTP float ptr [ESP + 0x8c]         ; 0059f3fe
    FMUL float ptr [EAX + 0x4]          ; 0059f405
    FLD float ptr [ESP + 0xf8]          ; 0059f408
    FLD float ptr [ESP + 0x8c]          ; 0059f40f
    FMUL ST1                            ; 0059f416
    FLD float ptr [ESP + 0x94]          ; 0059f418
    FXCH ST3                            ; 0059f41f
    FSTP float ptr [ESP + 0x90]         ; 0059f421
    FXCH ST2                            ; 0059f428
    FMUL float ptr [EAX + 0x8]          ; 0059f42a
    FLD float ptr [ESP + 0x90]          ; 0059f42d
    FMUL ST2                            ; 0059f434
    FLD ST2                             ; 0059f436
    FLD1                                ; 0059f438
    FSUBRP                              ; 0059f43a
    FXCH ST2                            ; 0059f43c
    FST float ptr [ESP + 0x94]          ; 0059f43e
    FMULP ST3                           ; 0059f445
    FXCH                                ; 0059f447
    FSTP float ptr [ESP + 0xb0]         ; 0059f449
    MOV EBX,dword ptr [ESP + 0xec]      ; 0059f450
    FXCH ST2                            ; 0059f457
    FSTP float ptr [ESP + 0x80]         ; 0059f459
    FXCH                                ; 0059f460
    FSTP float ptr [ESP + 0x84]         ; 0059f462
    FSTP float ptr [ESP + 0x88]         ; 0059f469
    FLD float ptr [EBX + 0x6a4]         ; 0059f470
    FMUL float ptr [ESP + 0xb0]         ; 0059f476
    FSTP float ptr [ESP + 0x98]         ; 0059f47d
    FLD float ptr [EBX + 0x6a8]         ; 0059f484
    FMUL float ptr [ESP + 0xb0]         ; 0059f48a
    FSTP float ptr [ESP + 0x9c]         ; 0059f491
    FLD float ptr [EBX + 0x6ac]         ; 0059f498
    FMUL float ptr [ESP + 0xb0]         ; 0059f49e
    ADD EBX,0x6a4                       ; 0059f4a5
    LEA EAX,[ESP + 0xa4]                ; 0059f4ab
    FLD float ptr [ESP + 0x98]          ; 0059f4b2
    FADD float ptr [ESP + 0x80]         ; 0059f4b9
    FLD float ptr [ESP + 0x9c]          ; 0059f4c0
    FXCH                                ; 0059f4c7
    FSTP float ptr [ESP + 0xa4]         ; 0059f4c9
    FADD float ptr [ESP + 0x84]         ; 0059f4d0
    FXCH                                ; 0059f4d7
    FST float ptr [ESP + 0xa0]          ; 0059f4d9
    FADD float ptr [ESP + 0x88]         ; 0059f4e0
    FXCH                                ; 0059f4e7
    FSTP float ptr [ESP + 0xa8]         ; 0059f4e9
    FSTP float ptr [ESP + 0xac]         ; 0059f4f0
    CMP EBX,EAX                         ; 0059f4f7
    JZ 0x0059f27c                       ; 0059f4f9
        ;   XREF to: 0059f27c (CONDITIONAL_JUMP)  ; LAB_0059f27c
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0059f4ff
    MOV dword ptr [EBX],EAX             ; 0059f506
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0059f508
    MOV dword ptr [EBX + 0x4],EAX       ; 0059f50f
    MOV EAX,dword ptr [ESP + 0xac]      ; 0059f512
    MOV dword ptr [EBX + 0x8],EAX       ; 0059f519
    ADD ESP,0xd8                        ; 0059f51c
    POP EBP                             ; 0059f522
    POP EDI                             ; 0059f523
    POP ESI                             ; 0059f524
    POP EBX                             ; 0059f525
    RET                                 ; 0059f526
    CMP ECX,0x1                         ; 0059f527
        ;   Label: LAB_0059f527
    JNZ 0x0059f6b6                      ; 0059f52a
        ;   XREF to: 0059f6b6 (CONDITIONAL_JUMP)  ; LAB_0059f6b6
    XOR EDX,EDX                         ; 0059f530
    MOV ECX,dword ptr [EAX + 0x28558]   ; 0059f532
    MOV dword ptr [ESP + 0xd0],EDX      ; 0059f538
    TEST ECX,ECX                        ; 0059f53f
    JLE 0x0059f3a5                      ; 0059f541
        ;   XREF to: 0059f3a5 (CONDITIONAL_JUMP)  ; LAB_0059f3a5
    MOV EBX,dword ptr [ESP + 0xf0]      ; 0059f547
    MOV dword ptr [ESP + 0xc8],EAX      ; 0059f54e
    MOV dword ptr [ESP + 0xb8],ESI      ; 0059f555
    MOV EAX,dword ptr [ESP + 0xec]      ; 0059f55c
    MOV dword ptr [ESP + 0xb4],ESI      ; 0059f563
    MOV dword ptr [ESP + 0xc0],EAX      ; 0059f56a
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0059f571
        ;   Label: LAB_0059f571
    PUSH EAX                            ; 0059f578
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0059f579
    PUSH EDX                            ; 0059f580
    PUSH EBP                            ; 0059f581
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100 ; 0059f582
        ;   XREF to: 0059a100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0059f587
    TEST EAX,EAX                        ; 0059f58a
    JL 0x0059f5e2                       ; 0059f58c
        ;   XREF to: 0059f5e2 (CONDITIONAL_JUMP)  ; LAB_0059f5e2
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0059f58e
    MOV EAX,dword ptr [EAX + 0x2857c]   ; 0059f595
    TEST EAX,EAX                        ; 0059f59b
    JGE 0x0059f63a                      ; 0059f59d
        ;   XREF to: 0059f63a (CONDITIONAL_JUMP)  ; LAB_0059f63a
    LEA EDI,[ESP + 0x10]                ; 0059f5a3
    MOV ESI,EBX                         ; 0059f5a7
    MOVSD ES:EDI,ESI                    ; 0059f5a9
        ;   Label: LAB_0059f5a9
    MOVSD ES:EDI,ESI                    ; 0059f5aa
    MOVSD ES:EDI,ESI                    ; 0059f5ab
    MOVSD ES:EDI,ESI                    ; 0059f5ac
    LEA EAX,[ESP + 0x10]                ; 0059f5ad
    PUSH dword ptr [ESP + 0xf8]         ; 0059f5b1
    PUSH EAX                            ; 0059f5b8
    MOV EDI,dword ptr [ESP + 0xc0]      ; 0059f5b9
    PUSH EDI                            ; 0059f5c0
    LEA ESI,[ESP + 0x6c]                ; 0059f5c1
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 0059f5c5
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    ADD ESP,0xc                         ; 0059f5ca
    MOV EDI,dword ptr [ESP + 0xc0]      ; 0059f5cd
    LEA ESI,[ESP + 0x60]                ; 0059f5d4
    LEA EDI,[EDI + 0x6b0]               ; 0059f5d8
    MOVSD ES:EDI,ESI                    ; 0059f5de
    MOVSD ES:EDI,ESI                    ; 0059f5df
    MOVSD ES:EDI,ESI                    ; 0059f5e0
    MOVSD ES:EDI,ESI                    ; 0059f5e1
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0059f5e2
        ;   Label: LAB_0059f5e2
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0059f5e9
    MOV ECX,dword ptr [ESP + 0xb8]      ; 0059f5f0
    MOV ESI,dword ptr [ESP + 0xd0]      ; 0059f5f7
    ADD EBX,0x10                        ; 0059f5fe
    MOV EDI,dword ptr [EBP + 0x28558]   ; 0059f601
    ADD EAX,0x24                        ; 0059f607
    ADD EDX,0x10                        ; 0059f60a
    ADD ECX,0x10                        ; 0059f60d
    INC ESI                             ; 0059f610
    MOV dword ptr [ESP + 0xc8],EAX      ; 0059f611
    MOV dword ptr [ESP + 0xc0],EDX      ; 0059f618
    MOV dword ptr [ESP + 0xb8],ECX      ; 0059f61f
    MOV dword ptr [ESP + 0xd0],ESI      ; 0059f626
    CMP ESI,EDI                         ; 0059f62d
    JGE 0x0059f3a5                      ; 0059f62f
        ;   XREF to: 0059f3a5 (CONDITIONAL_JUMP)  ; LAB_0059f3a5
    JMP 0x0059f571                      ; 0059f635
        ;   XREF to: 0059f571 (UNCONDITIONAL_JUMP)  ; LAB_0059f571
    SHL EAX,0x4                         ; 0059f63a
        ;   Label: LAB_0059f63a
    MOV dword ptr [ESP + 0xd4],EAX      ; 0059f63d
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0059f644
    ADD EAX,dword ptr [ESP + 0xd4]      ; 0059f64b
    PUSH EAX                            ; 0059f652
    LEA ESI,[ESP + 0x24]                ; 0059f653
    LEA EDI,[ESP + 0x44]                ; 0059f657
    CALL core_xform.cpp_negateFirstComponent_FUN_005f75e0 ; 0059f65b
        ;   XREF to: 005f75e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f * vector_in, CQuaternion4f * vector_out)
    ADD ESP,0x4                         ; 0059f660
    LEA EAX,[ESP + 0x40]                ; 0059f663
    LEA ESI,[ESP + 0x20]                ; 0059f667
    PUSH EAX                            ; 0059f66b
    MOVSD ES:EDI,ESI                    ; 0059f66c
    MOVSD ES:EDI,ESI                    ; 0059f66d
    MOVSD ES:EDI,ESI                    ; 0059f66e
    MOVSD ES:EDI,ESI                    ; 0059f66f
    PUSH EBX                            ; 0059f670
    LEA ESI,[ESP + 0x78]                ; 0059f671
    LEA EDI,[ESP + 0x38]                ; 0059f675
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0059f679
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x78]                ; 0059f67e
    ADD ESP,0x8                         ; 0059f682
    MOVSD ES:EDI,ESI                    ; 0059f685
    MOVSD ES:EDI,ESI                    ; 0059f686
    MOVSD ES:EDI,ESI                    ; 0059f687
    MOVSD ES:EDI,ESI                    ; 0059f688
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0059f689
    ADD EAX,dword ptr [ESP + 0xd4]      ; 0059f690
    PUSH EAX                            ; 0059f697
    LEA EAX,[ESP + 0x34]                ; 0059f698
    PUSH EAX                            ; 0059f69c
    LEA ESI,[ESP + 0x58]                ; 0059f69d
    LEA EDI,[ESP + 0x18]                ; 0059f6a1
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0059f6a5
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x58]                ; 0059f6aa
    ADD ESP,0x8                         ; 0059f6ae
    JMP 0x0059f5a9                      ; 0059f6b1
        ;   XREF to: 0059f5a9 (UNCONDITIONAL_JUMP)  ; LAB_0059f5a9
    MOV EBP,0x64edf8                    ; 0059f6b6 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0059f6b6
    MOV EAX,0xad5                       ; 0059f6bb
    PUSH 0x64ee0d                       ; 0059f6c0 | = "Write me!"
    MOV dword ptr [0x02f0ca48],EBP      ; 0059f6c5 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0059f6cb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059f6d0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0059f6d5
    JMP 0x0059f3a5                      ; 0059f6d8
        ;   XREF to: 0059f3a5 (UNCONDITIONAL_JUMP)  ; LAB_0059f3a5

