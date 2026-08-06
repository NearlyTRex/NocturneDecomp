; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; Local Variables:
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
; XREF[14]:
;   core_charactr.cpp_CCharacter_FUN_004270e0 at 004271ac
;   core_charactr.cpp_CCharacter_FUN_0042a150 at 0042a16e
;   core_cloth.cpp_CCloth_setup_FUN_004359e0 at 00435dc5
;   core_mimic.cpp_CMimic_FUN_004d4f30 at 004d5702
;   core_mimic.cpp_CMimic_setup_FUN_004d4650 at 004d48b1
;   core_passngr.cpp_CPassenger_setup_FUN_004ef6d0 at 004ef70e
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880 at 0051b892
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0 at 0051b90e
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0 at 00519c7a
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20 at 0051aded
;   ... and 4 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d3c0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
    PUSH ESI                            ; 0051d3c1
    PUSH EDI                            ; 0051d3c2
    PUSH EBP                            ; 0051d3c3
    SUB ESP,0x2c                        ; 0051d3c4
    MOV EDI,dword ptr [ESP + 0x40]      ; 0051d3c7
    PUSH EDI                            ; 0051d3cb
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051d3cc
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    XOR EBP,EBP                         ; 0051d3d1
    ADD ESP,0x4                         ; 0051d3d3
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0051d3d6
    MOV dword ptr [ESP + 0x10],EAX      ; 0051d3dc
    TEST EDX,EDX                        ; 0051d3e0
    JLE 0x0051d4d6                      ; 0051d3e2
        ;   XREF to: 0051d4d6 (CONDITIONAL_JUMP)  ; LAB_0051d4d6
    LEA EBX,[EDI + 0xe80]               ; 0051d3e8
    MOV dword ptr [ESP + 0x24],EBP      ; 0051d3ee
    MOV dword ptr [ESP + 0x1c],EAX      ; 0051d3f2
    MOV dword ptr [ESP + 0x28],EBX      ; 0051d3f6
    LEA EBX,[EDI + 0x58]                ; 0051d3fa
    MOV EDX,dword ptr [ESP + 0x28]      ; 0051d3fd
    MOV dword ptr [ESP + 0xc],EBX       ; 0051d401
    LEA ESI,[EDI + 0x6b0]               ; 0051d405
    MOV dword ptr [ESP + 0x18],EDX      ; 0051d40b
    MOV EBX,EDI                         ; 0051d40f
    MOV dword ptr [ESP + 0x20],ESI      ; 0051d411
    MOV ESI,EDI                         ; 0051d415
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051d417
        ;   Label: LAB_0051d417
    PUSH EAX                            ; 0051d41b
    IMUL EAX,EBP,0x30                   ; 0051d41c
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0051d41f
    PUSH EDX                            ; 0051d423
    MOV dword ptr [ESP + 0x1c],EAX      ; 0051d424
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70 ; 0051d428
        ;   XREF to: 0055cd70 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70(CMatrix3x4f * matrix_out, CQuaternion4f * quat_in)
    MOV ECX,dword ptr [EBX + 0xcf0]     ; 0051d42d
    ADD ESP,0x8                         ; 0051d433
    CMP ECX,0x3f800000                  ; 0051d436
    JNZ 0x0051d4e8                      ; 0051d43c
        ;   XREF to: 0051d4e8 (CONDITIONAL_JUMP)  ; LAB_0051d4e8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051d442
        ;   Label: LAB_0051d442
    MOV EAX,dword ptr [EAX + 0x2857c]   ; 0051d446
    TEST EAX,EAX                        ; 0051d44c
    JL 0x0051d5a5                       ; 0051d44e
        ;   XREF to: 0051d5a5 (CONDITIONAL_JUMP)  ; LAB_0051d5a5
    IMUL EAX,EAX,0x30                   ; 0051d454
    ADD EAX,dword ptr [ESP + 0x28]      ; 0051d457
    MOV ECX,dword ptr [ESP + 0x24]      ; 0051d45b
    PUSH EAX                            ; 0051d45f
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051d460
    ADD EAX,ECX                         ; 0051d464
    PUSH EAX                            ; 0051d466
    LEA EAX,[ESP + 0x8]                 ; 0051d467
    PUSH EAX                            ; 0051d46b
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0051d46c
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0051d471
    MOV EAX,dword ptr [ESP]             ; 0051d474
    MOV dword ptr [ESI + 0xe8c],EAX     ; 0051d477
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051d47d
    MOV dword ptr [ESI + 0xe9c],EAX     ; 0051d481
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051d487
    MOV dword ptr [ESI + 0xeac],EAX     ; 0051d48b
    MOV ECX,dword ptr [ESP + 0x18]      ; 0051d491
        ;   Label: LAB_0051d491
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051d495
    MOV EDX,dword ptr [ESP + 0x24]      ; 0051d499
    ADD EBX,0x4                         ; 0051d49d
    ADD ESI,0x30                        ; 0051d4a0
    INC EBP                             ; 0051d4a3
    ADD ECX,0x30                        ; 0051d4a4
    ADD EAX,0x10                        ; 0051d4a7
    ADD EDX,0xc                         ; 0051d4aa
    MOV dword ptr [ESP + 0x18],ECX      ; 0051d4ad
    MOV dword ptr [ESP + 0x20],EAX      ; 0051d4b1
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0051d4b5
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051d4b9
    MOV dword ptr [ESP + 0x24],EDX      ; 0051d4bd
    ADD ECX,0x24                        ; 0051d4c1
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0051d4c4
    MOV dword ptr [ESP + 0x1c],ECX      ; 0051d4ca
    CMP EBP,EDX                         ; 0051d4ce
    JL 0x0051d417                       ; 0051d4d0
        ;   XREF to: 0051d417 (CONDITIONAL_JUMP)  ; LAB_0051d417
    MOV dword ptr [EDI + 0x2230],0xffffffff ; 0051d4d6
        ;   Label: LAB_0051d4d6
    ADD ESP,0x2c                        ; 0051d4e0
    POP EBP                             ; 0051d4e3
    POP EDI                             ; 0051d4e4
    POP ESI                             ; 0051d4e5
    POP EBX                             ; 0051d4e6
    RET                                 ; 0051d4e7
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051d4e8
        ;   Label: LAB_0051d4e8
    FLD float ptr [EBX + 0xcf0]         ; 0051d4ec
    FMUL float ptr [EDI + EAX*0x1 + 0xe80] ; 0051d4f2
    FSTP float ptr [EDI + EAX*0x1 + 0xe80] ; 0051d4f9
    FLD float ptr [EBX + 0xcf0]         ; 0051d500
    FMUL float ptr [EDI + EAX*0x1 + 0xe84] ; 0051d506
    FSTP float ptr [EDI + EAX*0x1 + 0xe84] ; 0051d50d
    FLD float ptr [EBX + 0xcf0]         ; 0051d514
    FMUL float ptr [EDI + EAX*0x1 + 0xe88] ; 0051d51a
    FSTP float ptr [EDI + EAX*0x1 + 0xe88] ; 0051d521
    FLD float ptr [EBX + 0xcf0]         ; 0051d528
    FMUL float ptr [EDI + EAX*0x1 + 0xe90] ; 0051d52e
    FSTP float ptr [EDI + EAX*0x1 + 0xe90] ; 0051d535
    FLD float ptr [EBX + 0xcf0]         ; 0051d53c
    FMUL float ptr [EDI + EAX*0x1 + 0xe94] ; 0051d542
    FSTP float ptr [EDI + EAX*0x1 + 0xe94] ; 0051d549
    FLD float ptr [EBX + 0xcf0]         ; 0051d550
    FMUL float ptr [EDI + EAX*0x1 + 0xe98] ; 0051d556
    FSTP float ptr [EDI + EAX*0x1 + 0xe98] ; 0051d55d
    FLD float ptr [EBX + 0xcf0]         ; 0051d564
    FMUL float ptr [EDI + EAX*0x1 + 0xea0] ; 0051d56a
    FSTP float ptr [EDI + EAX*0x1 + 0xea0] ; 0051d571
    FLD float ptr [EBX + 0xcf0]         ; 0051d578
    FMUL float ptr [EDI + EAX*0x1 + 0xea4] ; 0051d57e
    FSTP float ptr [EDI + EAX*0x1 + 0xea4] ; 0051d585
    FLD float ptr [EBX + 0xcf0]         ; 0051d58c
    FMUL float ptr [EDI + EAX*0x1 + 0xea8] ; 0051d592
    FSTP float ptr [EDI + EAX*0x1 + 0xea8] ; 0051d599
    JMP 0x0051d442                      ; 0051d5a0
        ;   XREF to: 0051d442 (UNCONDITIONAL_JUMP)  ; LAB_0051d442
    MOV EAX,dword ptr [ESP + 0x24]      ; 0051d5a5
        ;   Label: LAB_0051d5a5
    FLD float ptr [EDI + EAX*0x1 + 0x58] ; 0051d5a9
    FADD float ptr [EDI + 0x6a4]        ; 0051d5ad
    FSTP float ptr [ESI + 0xe8c]        ; 0051d5b3
    FLD float ptr [EDI + EAX*0x1 + 0x5c] ; 0051d5b9
    FADD float ptr [EDI + 0x6a8]        ; 0051d5bd
    FSTP float ptr [ESI + 0xe9c]        ; 0051d5c3
    FLD float ptr [EDI + EAX*0x1 + 0x60] ; 0051d5c9
    FADD float ptr [EDI + 0x6ac]        ; 0051d5cd
    FSTP float ptr [ESI + 0xeac]        ; 0051d5d3
    JMP 0x0051d491                      ; 0051d5d9
        ;   XREF to: 0051d491 (UNCONDITIONAL_JUMP)  ; LAB_0051d491

