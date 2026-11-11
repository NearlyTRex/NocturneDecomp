; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_0054a3c0(CDeformableModel *this_ptr,int bone_index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; Local Variables:
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0054b5b0 at 0054ba98
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d1d56
;   TerminatedCString s_Out_of_memory_005d1d6b
;   undefined4 DAT_005e4760
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420
;   core_skeleton.cpp_FUN_0054dbd0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a3c0
        ;   Label: core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0054a3c0
    PUSH EDI                            ; 0054a3c1
    PUSH EBP                            ; 0054a3c2
    SUB ESP,0x6c                        ; 0054a3c3
    MOV EBP,dword ptr [ESP + 0x80]      ; 0054a3c6
    MOV EBX,0x7149f2ca                  ; 0054a3cd
    XOR EDX,EDX                         ; 0054a3d2
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0054a3d4
    MOV dword ptr [ESP + 0x38],EDX      ; 0054a3d8
    MOV dword ptr [ESP + 0x30],EBX      ; 0054a3dc
    MOV dword ptr [ESP + 0x48],EDX      ; 0054a3e0
    MOV EDI,dword ptr [EAX + 0xc00]     ; 0054a3e4
    MOV dword ptr [ESP + 0x34],EDX      ; 0054a3ea
    CMP EDI,0x2                         ; 0054a3ee
    JGE 0x0054a3fc                      ; 0054a3f1
        ;   XREF to: 0054a3fc (CONDITIONAL_JUMP)  ; LAB_0054a3fc
    XOR EAX,EAX                         ; 0054a3f3
    ADD ESP,0x6c                        ; 0054a3f5
    POP EBP                             ; 0054a3f8
    POP EDI                             ; 0054a3f9
    POP EBX                             ; 0054a3fa
    RET                                 ; 0054a3fb
    PUSH 0x23a4                         ; 0054a3fc
        ;   Label: LAB_0054a3fc
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0054a401
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0054a406
    TEST EAX,EAX                        ; 0054a409
    JZ 0x0054a416                       ; 0054a40b
        ;   XREF to: 0054a416 (CONDITIONAL_JUMP)  ; LAB_0054a416
    PUSH EAX                            ; 0054a40d
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00 ; 0054a40e
        ;   XREF to: 0054bf00 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054a413
    MOV dword ptr [ESP + 0x54],EAX      ; 0054a416
        ;   Label: LAB_0054a416
    TEST EAX,EAX                        ; 0054a41a
    JNZ 0x0054a440                      ; 0054a41c
        ;   XREF to: 0054a440 (CONDITIONAL_JUMP)  ; LAB_0054a440
    MOV EAX,0x5d1d56                    ; 0054a41e | = "..\\core\\skeleton.cpp"
    MOV EDX,0x600                       ; 0054a423
    PUSH 0x5d1d6b                       ; 0054a428 | = "Out of memory"
    MOV [0x01d71de0],EAX                ; 0054a42d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0054a432 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0054a438
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0054a43d
    PUSH ESI                            ; 0054a440
        ;   Label: LAB_0054a440
    MOV ECX,dword ptr [ESP + 0x80]      ; 0054a441
    PUSH ECX                            ; 0054a448
    MOV EBX,dword ptr [ESP + 0x5c]      ; 0054a449
    PUSH EBX                            ; 0054a44d
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0 ; 0054a44e
        ;   XREF to: 0054e6e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
    ADD ESP,0x8                         ; 0054a453
    PUSH EBX                            ; 0054a456
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 ; 0054a457
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054a45c
    PUSH EBX                            ; 0054a45f
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10 ; 0054a460
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054a465
    PUSH 0x0                            ; 0054a468
    PUSH EBX                            ; 0054a46a
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420 ; 0054a46b
        ;   XREF to: 0054e420 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0054a470
    PUSH EBP                            ; 0054a473
    PUSH EBX                            ; 0054a474
    LEA ESI,[ESP + 0x18]                ; 0054a475
    LEA EDI,[ESP + 0xc]                 ; 0054a479
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 0054a47d
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 0054a482
    LEA ESI,[ESP + 0x10]                ; 0054a485
    MOV EAX,dword ptr [ESP + 0x80]      ; 0054a489
    MOVSD ES:EDI,ESI                    ; 0054a490
    MOVSD ES:EDI,ESI                    ; 0054a491
    MOVSD ES:EDI,ESI                    ; 0054a492
    XOR ECX,ECX                         ; 0054a493
    MOV EBX,dword ptr [EAX + 0xc00]     ; 0054a495
    MOV dword ptr [ESP + 0x44],ECX      ; 0054a49b
    TEST EBX,EBX                        ; 0054a49f
    JLE 0x0054a680                      ; 0054a4a1
        ;   XREF to: 0054a680 (CONDITIONAL_JUMP)  ; LAB_0054a680
    MOV dword ptr [ESP + 0x40],EAX      ; 0054a4a7
    MOV EAX,dword ptr [ESP + 0x40]      ; 0054a4ab
        ;   Label: LAB_0054a4ab
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0054a4af
    MOV dword ptr [ESP + 0x48],EAX      ; 0054a4b3
    IMUL EAX,EBX,0x12                   ; 0054a4b7
    XOR EDI,EDI                         ; 0054a4ba
    MOV dword ptr [ESP + 0x64],EDI      ; 0054a4bc
    MOV dword ptr [ESP + 0x54],EAX      ; 0054a4c0
    MOV EAX,dword ptr [ESP + 0x40]      ; 0054a4c4
    MOV dword ptr [ESP + 0x60],EDI      ; 0054a4c8
    MOV dword ptr [ESP + 0x50],EDI      ; 0054a4cc
    MOV ESI,dword ptr [EAX + 0xc24]     ; 0054a4d0
    MOV dword ptr [ESP + 0x68],EDI      ; 0054a4d6
    TEST ESI,ESI                        ; 0054a4da
    JLE 0x0054a562                      ; 0054a4dc
        ;   XREF to: 0054a562 (CONDITIONAL_JUMP)  ; LAB_0054a562
    MOV EAX,dword ptr [ESP + 0x80]      ; 0054a4e2
        ;   Label: LAB_0054a4e2
    MOV ESI,dword ptr [ESP + 0x54]      ; 0054a4e9
    MOV EAX,dword ptr [EAX + 0x7c]      ; 0054a4ed
    ADD EAX,ESI                         ; 0054a4f0
    MOV EDI,EAX                         ; 0054a4f2
    ADD EAX,0x6                         ; 0054a4f4
    MOV dword ptr [ESP + 0x5c],EAX      ; 0054a4f7
    XOR EAX,EAX                         ; 0054a4fb
        ;   Label: LAB_0054a4fb
    MOV AX,word ptr [EDI]               ; 0054a4fd
    IMUL EAX,EAX,0x34                   ; 0054a500
    MOV ESI,dword ptr [ESP + 0x80]      ; 0054a503
    MOV ESI,dword ptr [ESI + 0x40]      ; 0054a50a
    ADD ESI,EAX                         ; 0054a50d
    MOV EBX,ESI                         ; 0054a50f
    MOV EDX,ESI                         ; 0054a511
    XOR EAX,EAX                         ; 0054a513
    XOR ECX,ECX                         ; 0054a515
        ;   Label: LAB_0054a515
    MOV CL,byte ptr [ESI]               ; 0054a517
    CMP EAX,ECX                         ; 0054a519
    JGE 0x0054a588                      ; 0054a51b
        ;   XREF to: 0054a588 (CONDITIONAL_JUMP)  ; LAB_0054a588
    XOR ECX,ECX                         ; 0054a521
    MOV CL,byte ptr [EBX + 0x1]         ; 0054a523
    CMP ECX,EBP                         ; 0054a526
    JZ 0x0054a60b                       ; 0054a528
        ;   XREF to: 0054a60b (CONDITIONAL_JUMP)  ; LAB_0054a60b
    ADD EDX,0x4                         ; 0054a52e
    INC EAX                             ; 0054a531
    INC EBX                             ; 0054a532
    JMP 0x0054a515                      ; 0054a533
        ;   XREF to: 0054a515 (UNCONDITIONAL_JUMP)  ; LAB_0054a515
    MOV EDI,dword ptr [ESP + 0x54]      ; 0054a535
        ;   Label: LAB_0054a535
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0054a539
    MOV EDX,dword ptr [ESP + 0x50]      ; 0054a53d
    INC EAX                             ; 0054a541
    INC EDX                             ; 0054a542
    MOV dword ptr [ESP + 0x4c],EAX      ; 0054a543
    MOV dword ptr [ESP + 0x50],EDX      ; 0054a547
    MOV EAX,EDX                         ; 0054a54b
    MOV EDX,dword ptr [ESP + 0x48]      ; 0054a54d
    ADD EDI,0x12                        ; 0054a551
    MOV ECX,dword ptr [EDX + 0xc24]     ; 0054a554
    MOV dword ptr [ESP + 0x54],EDI      ; 0054a55a
    CMP EAX,ECX                         ; 0054a55e
    JL 0x0054a4e2                       ; 0054a560
        ;   XREF to: 0054a4e2 (CONDITIONAL_JUMP)  ; LAB_0054a4e2
    FLD float ptr [ESP + 0x68]          ; 0054a562
        ;   Label: LAB_0054a562
    FCOMP float ptr [ESP + 0x3c]        ; 0054a566
    FNSTSW AX                           ; 0054a56a
    SAHF                                ; 0054a56c
    JBE 0x0054a620                      ; 0054a56d
        ;   XREF to: 0054a620 (CONDITIONAL_JUMP)  ; LAB_0054a620
    MOV EAX,dword ptr [ESP + 0x68]      ; 0054a573
    MOV dword ptr [ESP + 0x3c],EAX      ; 0054a577
    MOV EAX,dword ptr [ESP + 0x44]      ; 0054a57b
    MOV dword ptr [ESP + 0x38],EAX      ; 0054a57f
    JMP 0x0054a657                      ; 0054a583
        ;   XREF to: 0054a657 (UNCONDITIONAL_JUMP)  ; LAB_0054a657
    XOR EAX,EAX                         ; 0054a588
        ;   Label: LAB_0054a588
    MOV AX,word ptr [EDI]               ; 0054a58a
    IMUL EAX,EAX,0xc                    ; 0054a58d
    MOV EDX,dword ptr [ESP + 0x58]      ; 0054a590
    MOV EDX,dword ptr [EDX + 0x2324]    ; 0054a594
    LEA EBX,[ESP + 0x1c]                ; 0054a59a
    ADD EAX,EDX                         ; 0054a59e
    FILD dword ptr [EAX]                ; 0054a5a0
    FMUL float ptr [0x005e4760]         ; 0054a5a2 | DAT_005e4760
    FSTP float ptr [EBX]                ; 0054a5a8
    FILD dword ptr [EAX + 0x4]          ; 0054a5aa
    FMUL float ptr [0x005e4760]         ; 0054a5ad | DAT_005e4760
    FSTP float ptr [EBX + 0x4]          ; 0054a5b3
    FILD dword ptr [EAX + 0x8]          ; 0054a5b6
    FMUL float ptr [0x005e4760]         ; 0054a5b9 | DAT_005e4760
    FSTP float ptr [EBX + 0x8]          ; 0054a5bf
    FLD float ptr [ESP + 0x1c]          ; 0054a5c2
    FSUB float ptr [ESP + 0x4]          ; 0054a5c6
    FMUL ST0                            ; 0054a5ca
    FLD float ptr [ESP + 0x20]          ; 0054a5cc
    FSUB float ptr [ESP + 0x8]          ; 0054a5d0
    FMUL ST0                            ; 0054a5d4
    FLD float ptr [ESP + 0x24]          ; 0054a5d6
    FXCH                                ; 0054a5da
    FADDP ST2,ST0                       ; 0054a5dc
    FSUB float ptr [ESP + 0xc]          ; 0054a5de
    FMUL ST0                            ; 0054a5e2
    ADD EDI,0x2                         ; 0054a5e4
    MOV EAX,dword ptr [ESP + 0x60]      ; 0054a5e7
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0054a5eb
    FADDP                               ; 0054a5ef
    INC EAX                             ; 0054a5f1
    FADD float ptr [ESP + 0x64]         ; 0054a5f2
    MOV dword ptr [ESP + 0x60],EAX      ; 0054a5f6
    FSTP float ptr [ESP + 0x64]         ; 0054a5fa
    CMP EDI,EDX                         ; 0054a5fe
    JZ 0x0054a535                       ; 0054a600
        ;   XREF to: 0054a535 (CONDITIONAL_JUMP)  ; LAB_0054a535
    JMP 0x0054a4fb                      ; 0054a606
        ;   XREF to: 0054a4fb (UNCONDITIONAL_JUMP)  ; LAB_0054a4fb
    FLD float ptr [ESP + 0x68]          ; 0054a60b
        ;   Label: LAB_0054a60b
    FADD float ptr [EDX + 0x4]          ; 0054a60f
    FSTP float ptr [ESP + 0x68]         ; 0054a612
    ADD EDX,0x4                         ; 0054a616
    INC EAX                             ; 0054a619
    INC EBX                             ; 0054a61a
    JMP 0x0054a515                      ; 0054a61b
        ;   XREF to: 0054a515 (UNCONDITIONAL_JUMP)  ; LAB_0054a515
    TEST dword ptr [ESP + 0x3c],0x7fffffff ; 0054a620
        ;   Label: LAB_0054a620
    JNZ 0x0054a657                      ; 0054a628
        ;   XREF to: 0054a657 (CONDITIONAL_JUMP)  ; LAB_0054a657
    MOV EAX,dword ptr [ESP + 0x60]      ; 0054a62a
    MOV dword ptr [ESP + 0x6c],EAX      ; 0054a62e
    FILD dword ptr [ESP + 0x6c]         ; 0054a632
    FDIVR float ptr [ESP + 0x64]        ; 0054a636
    FST float ptr [ESP + 0x64]          ; 0054a63a
    FCOMP float ptr [ESP + 0x34]        ; 0054a63e
    FNSTSW AX                           ; 0054a642
    SAHF                                ; 0054a644
    JNC 0x0054a657                      ; 0054a645
        ;   XREF to: 0054a657 (CONDITIONAL_JUMP)  ; LAB_0054a657
    MOV EAX,dword ptr [ESP + 0x64]      ; 0054a647
    MOV dword ptr [ESP + 0x34],EAX      ; 0054a64b
    MOV EAX,dword ptr [ESP + 0x44]      ; 0054a64f
    MOV dword ptr [ESP + 0x38],EAX      ; 0054a653
    MOV ESI,dword ptr [ESP + 0x40]      ; 0054a657
        ;   Label: LAB_0054a657
    MOV EDI,dword ptr [ESP + 0x44]      ; 0054a65b
    MOV EDX,dword ptr [ESP + 0x80]      ; 0054a65f
    ADD ESI,0x60                        ; 0054a666
    INC EDI                             ; 0054a669
    MOV ECX,dword ptr [EDX + 0xc00]     ; 0054a66a
    MOV dword ptr [ESP + 0x40],ESI      ; 0054a670
    MOV dword ptr [ESP + 0x44],EDI      ; 0054a674
    CMP EDI,ECX                         ; 0054a678
    JL 0x0054a4ab                       ; 0054a67a
        ;   XREF to: 0054a4ab (CONDITIONAL_JUMP)  ; LAB_0054a4ab
    MOV EBX,dword ptr [ESP + 0x58]      ; 0054a680
        ;   Label: LAB_0054a680
    TEST EBX,EBX                        ; 0054a684
    JZ 0x0054a693                       ; 0054a686
        ;   XREF to: 0054a693 (CONDITIONAL_JUMP)  ; LAB_0054a693
    PUSH 0x2                            ; 0054a688
    MOV EAX,dword ptr [EBX + 0x50]      ; 0054a68a
    PUSH EBX                            ; 0054a68d
    CALL dword ptr [EAX]                ; 0054a68e
    ADD ESP,0x8                         ; 0054a690
    MOV EAX,dword ptr [ESP + 0x38]      ; 0054a693
        ;   Label: LAB_0054a693
    POP ESI                             ; 0054a697
    ADD ESP,0x6c                        ; 0054a698
    POP EBP                             ; 0054a69b
    POP EDI                             ; 0054a69c
    POP EBX                             ; 0054a69d
    RET                                 ; 0054a69e

