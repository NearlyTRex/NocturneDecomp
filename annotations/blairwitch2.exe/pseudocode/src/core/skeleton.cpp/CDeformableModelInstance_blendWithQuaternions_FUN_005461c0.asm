; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_005461c0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CQuaternion4f *  Stack[0x8]:4   source_quaternions
; CVector3f *      Stack[0xc]:4   source_position
; float            Stack[0x10]:4   blend_weight
; int              Stack[0x14]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x18]:4   blend_callback
; Local Variables:
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xe8]:1  local_e8
; undefined        Stack[-0xd8]:1  local_d8
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0xb8]:1  local_b8
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x98]:1  local_98
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
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
;   core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_00546190 at 005461ad
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e72ff
;   TerminatedCString s_Write_me_005e7314
;   undefined4 DAT_005e731f
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
;   core_xform.cpp_multiplyQuaternion_FUN_00593c60
;   core_xform.cpp_negateFirstComponent_FUN_00593c00
;   core_xform.cpp_slerpQuaternion_FUN_00593df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005461c0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_005461c0
    PUSH ESI                            ; 005461c1
    PUSH EDI                            ; 005461c2
    PUSH EBP                            ; 005461c3
    SUB ESP,0xf8                        ; 005461c4
    FLD float ptr [ESP + 0x118]         ; 005461ca
    FCOMP double ptr [0x005e731f]       ; 005461d1 | DAT_005e731f
    FNSTSW AX                           ; 005461d7
    SAHF                                ; 005461d9
    JA 0x005461e7                       ; 005461da
        ;   XREF to: 005461e7 (CONDITIONAL_JUMP)  ; LAB_005461e7
    ADD ESP,0xf8                        ; 005461dc
        ;   Label: LAB_005461dc
    POP EBP                             ; 005461e2
    POP EDI                             ; 005461e3
    POP ESI                             ; 005461e4
    POP EBX                             ; 005461e5
    RET                                 ; 005461e6
    MOV EDX,dword ptr [ESP + 0x10c]     ; 005461e7
        ;   Label: LAB_005461e7
    PUSH EDX                            ; 005461ee
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 005461ef
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005461f4
    MOV EBX,dword ptr [ESP + 0x10c]     ; 005461f7
    MOV ESI,dword ptr [ESP + 0x10c]     ; 005461fe
    MOV dword ptr [ESP + 0xf0],EAX      ; 00546205
    MOV ECX,dword ptr [EBX + 0x2250]    ; 0054620c
    ADD ESI,0x6b0                       ; 00546212
    TEST ECX,ECX                        ; 00546218
    JNZ 0x00546498                      ; 0054621a
        ;   XREF to: 00546498 (CONDITIONAL_JUMP)  ; LAB_00546498
    MOV ECX,dword ptr [EAX + 0x1d1f8]   ; 00546220
    XOR EBX,EBX                         ; 00546226
    TEST ECX,ECX                        ; 00546228
    JLE 0x00546303                      ; 0054622a
        ;   XREF to: 00546303 (CONDITIONAL_JUMP)  ; LAB_00546303
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00546230
    MOV EBP,dword ptr [ESP + 0x110]     ; 00546237
    MOV dword ptr [ESP + 0xe4],ESI      ; 0054623e
    MOV dword ptr [ESP + 0xdc],EAX      ; 00546245
    MOV ECX,dword ptr [ESP + 0x11c]     ; 0054624c
        ;   Label: LAB_0054624c
    PUSH ECX                            ; 00546253
    PUSH EBX                            ; 00546254
    MOV ESI,dword ptr [ESP + 0xf8]      ; 00546255
    PUSH ESI                            ; 0054625c
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0 ; 0054625d
        ;   XREF to: 00540fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 00546262
    TEST EAX,EAX                        ; 00546265
    JL 0x005462c8                       ; 00546267
        ;   XREF to: 005462c8 (CONDITIONAL_JUMP)  ; LAB_005462c8
    MOV EDI,dword ptr [ESP + 0x10c]     ; 00546269
    PUSH EDI                            ; 00546270
    PUSH EAX                            ; 00546271
    MOV EAX,dword ptr [ESP + 0x124]     ; 00546272
    PUSH dword ptr [ESP + 0x120]        ; 00546279
    PUSH EAX                            ; 00546280
    PUSH EBX                            ; 00546281
    CALL dword ptr [ESP + 0x134]        ; 00546282
    MOV dword ptr [ESP + 0x108],EAX     ; 00546289
    FLD float ptr [ESP + 0x108]         ; 00546290
    ADD ESP,0x14                        ; 00546297
    SUB ESP,0x4                         ; 0054629a
    FSTP float ptr [ESP]                ; 0054629d
    PUSH EBP                            ; 005462a0
    MOV EDX,dword ptr [ESP + 0xec]      ; 005462a1
    PUSH EDX                            ; 005462a8
    LEA ESI,[ESP + 0xc]                 ; 005462a9
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 005462ad
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    ADD ESP,0xc                         ; 005462b2
    MOV EDI,dword ptr [ESP + 0xdc]      ; 005462b5
    MOV ESI,ESP                         ; 005462bc
    LEA EDI,[EDI + 0x6b0]               ; 005462be
    MOVSD ES:EDI,ESI                    ; 005462c4
    MOVSD ES:EDI,ESI                    ; 005462c5
    MOVSD ES:EDI,ESI                    ; 005462c6
    MOVSD ES:EDI,ESI                    ; 005462c7
    MOV ESI,dword ptr [ESP + 0xdc]      ; 005462c8
        ;   Label: LAB_005462c8
    MOV EDI,dword ptr [ESP + 0xe4]      ; 005462cf
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005462d6
    ADD EBP,0x10                        ; 005462dd
    INC EBX                             ; 005462e0
    ADD ESI,0x10                        ; 005462e1
    ADD EDI,0x10                        ; 005462e4
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 005462e7
    MOV dword ptr [ESP + 0xdc],ESI      ; 005462ed
    MOV dword ptr [ESP + 0xe4],EDI      ; 005462f4
    CMP EBX,EDX                         ; 005462fb
    JL 0x0054624c                       ; 005462fd
        ;   XREF to: 0054624c (CONDITIONAL_JUMP)  ; LAB_0054624c
    CMP dword ptr [ESP + 0x11c],0x0     ; 00546303
        ;   Label: LAB_00546303
    JGE 0x005461dc                      ; 0054630b
        ;   XREF to: 005461dc (CONDITIONAL_JUMP)  ; LAB_005461dc
    MOV ESI,dword ptr [ESP + 0x10c]     ; 00546311
    LEA EDI,[ESP + 0x98]                ; 00546318
    LEA ESI,[ESI + 0x508]               ; 0054631f
    MOVSD ES:EDI,ESI                    ; 00546325
    MOVSD ES:EDI,ESI                    ; 00546326
    MOVSD ES:EDI,ESI                    ; 00546327
    MOV EAX,dword ptr [ESP + 0x114]     ; 00546328
    FLD float ptr [ESP + 0x98]          ; 0054632f
    FMUL float ptr [EAX]                ; 00546336
    FLD float ptr [ESP + 0x9c]          ; 00546338
    FMUL float ptr [EAX + 0x4]          ; 0054633f
    FLD float ptr [ESP + 0xa0]          ; 00546342
    FMUL float ptr [EAX + 0x8]          ; 00546349
    FXCH ST2                            ; 0054634c
    FST float ptr [ESP + 0x98]          ; 0054634e
    FLD float ptr [ESP + 0x118]         ; 00546355
    FXCH                                ; 0054635c
    FMUL ST1                            ; 0054635e
    FXCH ST2                            ; 00546360
    FST float ptr [ESP + 0x9c]          ; 00546362
    FMUL ST1                            ; 00546369
    FXCH ST3                            ; 0054636b
    FST float ptr [ESP + 0xa0]          ; 0054636d
    FMUL ST1                            ; 00546374
    FLD1                                ; 00546376
    MOV EBX,dword ptr [ESP + 0x10c]     ; 00546378
    FSUBRP ST2,ST0                      ; 0054637f
    LEA EDI,[ESP + 0xbc]                ; 00546381
    LEA ESI,[ESP + 0x80]                ; 00546388
    FXCH ST2                            ; 0054638f
    FSTP float ptr [ESP + 0x80]         ; 00546391
    FXCH ST2                            ; 00546398
    FSTP float ptr [ESP + 0x84]         ; 0054639a
    FSTP float ptr [ESP + 0x88]         ; 005463a1
    MOVSD ES:EDI,ESI                    ; 005463a8
    MOVSD ES:EDI,ESI                    ; 005463a9
    MOVSD ES:EDI,ESI                    ; 005463aa
    FSTP float ptr [ESP + 0xd4]         ; 005463ab
    FLD float ptr [EBX + 0x6a4]         ; 005463b2
    FMUL float ptr [ESP + 0xd4]         ; 005463b8
    FLD float ptr [EBX + 0x6a8]         ; 005463bf
    FMUL float ptr [ESP + 0xd4]         ; 005463c5
    FLD float ptr [EBX + 0x6ac]         ; 005463cc
    FMUL float ptr [ESP + 0xd4]         ; 005463d2
    ADD EBX,0x6a4                       ; 005463d9
    LEA EDI,[ESP + 0xc8]                ; 005463df
    LEA ESI,[ESP + 0x8c]                ; 005463e6
    FXCH ST2                            ; 005463ed
    FSTP float ptr [ESP + 0x8c]         ; 005463ef
    FSTP float ptr [ESP + 0x90]         ; 005463f6
    FSTP float ptr [ESP + 0x94]         ; 005463fd
    MOVSD ES:EDI,ESI                    ; 00546404
    MOVSD ES:EDI,ESI                    ; 00546405
    MOVSD ES:EDI,ESI                    ; 00546406
    LEA EAX,[ESP + 0xb0]                ; 00546407
    FLD float ptr [ESP + 0xc8]          ; 0054640e
    FLD float ptr [ESP + 0xcc]          ; 00546415
    FLD float ptr [ESP + 0xd0]          ; 0054641c
    LEA EDI,[ESP + 0xb0]                ; 00546423
    LEA ESI,[ESP + 0xa4]                ; 0054642a
    FXCH ST2                            ; 00546431
    FADD float ptr [ESP + 0xbc]         ; 00546433
    FXCH                                ; 0054643a
    FADD float ptr [ESP + 0xc0]         ; 0054643c
    FXCH ST2                            ; 00546443
    FADD float ptr [ESP + 0xc4]         ; 00546445
    FXCH                                ; 0054644c
    FSTP float ptr [ESP + 0xa4]         ; 0054644e
    FXCH                                ; 00546455
    FSTP float ptr [ESP + 0xa8]         ; 00546457
    FSTP float ptr [ESP + 0xac]         ; 0054645e
    MOVSD ES:EDI,ESI                    ; 00546465
    MOVSD ES:EDI,ESI                    ; 00546466
    MOVSD ES:EDI,ESI                    ; 00546467
    CMP EBX,EAX                         ; 00546468
    JZ 0x005461dc                       ; 0054646a
        ;   XREF to: 005461dc (CONDITIONAL_JUMP)  ; LAB_005461dc
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00546470
    MOV dword ptr [EBX],EAX             ; 00546477
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00546479
    MOV dword ptr [EBX + 0x4],EAX       ; 00546480
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00546483
    MOV dword ptr [EBX + 0x8],EAX       ; 0054648a
    ADD ESP,0xf8                        ; 0054648d
    POP EBP                             ; 00546493
    POP EDI                             ; 00546494
    POP ESI                             ; 00546495
    POP EBX                             ; 00546496
    RET                                 ; 00546497
    CMP ECX,0x1                         ; 00546498
        ;   Label: LAB_00546498
    JNZ 0x0054661b                      ; 0054649b
        ;   XREF to: 0054661b (CONDITIONAL_JUMP)  ; LAB_0054661b
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 005464a1
    XOR EBP,EBP                         ; 005464a7
    TEST EDX,EDX                        ; 005464a9
    JLE 0x00546303                      ; 005464ab
        ;   XREF to: 00546303 (CONDITIONAL_JUMP)  ; LAB_00546303
    MOV EBX,dword ptr [ESP + 0x110]     ; 005464b1
    MOV dword ptr [ESP + 0xe0],EAX      ; 005464b8
    MOV dword ptr [ESP + 0xe8],ESI      ; 005464bf
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005464c6
    MOV dword ptr [ESP + 0xd8],ESI      ; 005464cd
    MOV dword ptr [ESP + 0xec],EAX      ; 005464d4
    MOV ECX,dword ptr [ESP + 0x11c]     ; 005464db
        ;   Label: LAB_005464db
    PUSH ECX                            ; 005464e2
    PUSH EBP                            ; 005464e3
    MOV ESI,dword ptr [ESP + 0xf8]      ; 005464e4
    PUSH ESI                            ; 005464eb
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0 ; 005464ec
        ;   XREF to: 00540fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 005464f1
    TEST EAX,EAX                        ; 005464f4
    JL 0x0054654c                       ; 005464f6
        ;   XREF to: 0054654c (CONDITIONAL_JUMP)  ; LAB_0054654c
    MOV EAX,dword ptr [ESP + 0xe0]      ; 005464f8
    MOV EAX,dword ptr [EAX + 0x1d21c]   ; 005464ff
    TEST EAX,EAX                        ; 00546505
    JGE 0x0054659d                      ; 00546507
        ;   XREF to: 0054659d (CONDITIONAL_JUMP)  ; LAB_0054659d
    LEA EDI,[ESP + 0x10]                ; 0054650d
    MOV ESI,EBX                         ; 00546511
    MOVSD ES:EDI,ESI                    ; 00546513
        ;   Label: LAB_00546513
    MOVSD ES:EDI,ESI                    ; 00546514
    MOVSD ES:EDI,ESI                    ; 00546515
    MOVSD ES:EDI,ESI                    ; 00546516
    LEA EAX,[ESP + 0x10]                ; 00546517
    PUSH dword ptr [ESP + 0x118]        ; 0054651b
    PUSH EAX                            ; 00546522
    MOV ECX,dword ptr [ESP + 0xf0]      ; 00546523
    PUSH ECX                            ; 0054652a
    LEA ESI,[ESP + 0x6c]                ; 0054652b
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 0054652f
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    ADD ESP,0xc                         ; 00546534
    MOV EDI,dword ptr [ESP + 0xec]      ; 00546537
    LEA ESI,[ESP + 0x60]                ; 0054653e
    LEA EDI,[EDI + 0x6b0]               ; 00546542
    MOVSD ES:EDI,ESI                    ; 00546548
    MOVSD ES:EDI,ESI                    ; 00546549
    MOVSD ES:EDI,ESI                    ; 0054654a
    MOVSD ES:EDI,ESI                    ; 0054654b
    MOV ESI,dword ptr [ESP + 0xe0]      ; 0054654c
        ;   Label: LAB_0054654c
    MOV EDI,dword ptr [ESP + 0xec]      ; 00546553
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0054655a
    ADD EBX,0x10                        ; 00546561
    INC EBP                             ; 00546564
    ADD EAX,0x10                        ; 00546565
    ADD ESI,0x24                        ; 00546568
    MOV dword ptr [ESP + 0xe8],EAX      ; 0054656b
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00546572
    ADD EDI,0x10                        ; 00546579
    MOV dword ptr [ESP + 0xe0],ESI      ; 0054657c
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00546583
    MOV dword ptr [ESP + 0xec],EDI      ; 00546589
    CMP EBP,EDX                         ; 00546590
    JGE 0x00546303                      ; 00546592
        ;   XREF to: 00546303 (CONDITIONAL_JUMP)  ; LAB_00546303
    JMP 0x005464db                      ; 00546598
        ;   XREF to: 005464db (UNCONDITIONAL_JUMP)  ; LAB_005464db
    SHL EAX,0x4                         ; 0054659d
        ;   Label: LAB_0054659d
    MOV dword ptr [ESP + 0xf4],EAX      ; 005465a0
    MOV EAX,dword ptr [ESP + 0x110]     ; 005465a7
    ADD EAX,dword ptr [ESP + 0xf4]      ; 005465ae
    PUSH EAX                            ; 005465b5
    LEA ESI,[ESP + 0x24]                ; 005465b6
    LEA EDI,[ESP + 0x44]                ; 005465ba
    CALL core_xform.cpp_negateFirstComponent_FUN_00593c00 ; 005465be
        ;   XREF to: 00593c00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_00593c00()
    ADD ESP,0x4                         ; 005465c3
    LEA EAX,[ESP + 0x40]                ; 005465c6
    LEA ESI,[ESP + 0x20]                ; 005465ca
    PUSH EAX                            ; 005465ce
    MOVSD ES:EDI,ESI                    ; 005465cf
    MOVSD ES:EDI,ESI                    ; 005465d0
    MOVSD ES:EDI,ESI                    ; 005465d1
    MOVSD ES:EDI,ESI                    ; 005465d2
    PUSH EBX                            ; 005465d3
    LEA ESI,[ESP + 0x78]                ; 005465d4
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 005465d8
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 005465dd
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005465e0
    MOV EDX,dword ptr [ESP + 0xf4]      ; 005465e7
    LEA EDI,[ESP + 0x30]                ; 005465ee
    ADD EAX,EDX                         ; 005465f2
    LEA ESI,[ESP + 0x70]                ; 005465f4
    PUSH EAX                            ; 005465f8
    LEA EAX,[ESP + 0x34]                ; 005465f9
    MOVSD ES:EDI,ESI                    ; 005465fd
    MOVSD ES:EDI,ESI                    ; 005465fe
    MOVSD ES:EDI,ESI                    ; 005465ff
    MOVSD ES:EDI,ESI                    ; 00546600
    PUSH EAX                            ; 00546601
    LEA ESI,[ESP + 0x58]                ; 00546602
    LEA EDI,[ESP + 0x18]                ; 00546606
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 0054660a
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0x58]                ; 0054660f
    ADD ESP,0x8                         ; 00546613
    JMP 0x00546513                      ; 00546616
        ;   XREF to: 00546513 (UNCONDITIONAL_JUMP)  ; LAB_00546513
    MOV EBP,0x5e72ff                    ; 0054661b | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0054661b
    MOV EAX,0xae4                       ; 00546620
    PUSH 0x5e7314                       ; 00546625 | = "Write me!"
    MOV dword ptr [0x01d046a0],EBP      ; 0054662a | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00546630 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00546635
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054663a
    JMP 0x00546303                      ; 0054663d
        ;   XREF to: 00546303 (UNCONDITIONAL_JUMP)  ; LAB_00546303

