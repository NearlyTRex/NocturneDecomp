; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_blendBoneTransformData_FUN_0051f3f0(SPose *result_pose,SPose *bone_data_out,SPose *bone_data_in,float blend_weight,CDeformableModelInstance *instance_ptr)
;
; Parameters:
; SPose *          Stack[0x4]:4   result_pose
; SPose *          Stack[0x8]:4   bone_data_out
; SPose *          Stack[0xc]:4   bone_data_in
; float            Stack[0x10]:4   blend_weight
; CDeformableModelInstance * Stack[0x14]:4   instance_ptr
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
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
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_computeBoneWorldMatrices_FUN_0051f1d0
;   core_xform.cpp_slerpQuaternion_FUN_0055d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f3f0
        ;   Label: core_skeleton.cpp_blendBoneTransformData_FUN_0051f3f0
    PUSH ESI                            ; 0051f3f1
    PUSH EDI                            ; 0051f3f2
    PUSH EBP                            ; 0051f3f3
    SUB ESP,0x44                        ; 0051f3f4
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0051f3f7
    MOV ESI,dword ptr [ESP + 0x60]      ; 0051f3fb
    FLD float ptr [ESP + 0x64]          ; 0051f3ff
    FLDZ                                ; 0051f403
    FCOMPP                              ; 0051f405
    FNSTSW AX                           ; 0051f407
    SAHF                                ; 0051f409
    JA 0x0051f55a                       ; 0051f40a
        ;   XREF to: 0051f55a (CONDITIONAL_JUMP)  ; LAB_0051f55a
    FLD float ptr [ESP + 0x64]          ; 0051f410
        ;   Label: LAB_0051f410
    FLD1                                ; 0051f414
    FCOMPP                              ; 0051f416
    FNSTSW AX                           ; 0051f418
    SAHF                                ; 0051f41a
    JNC 0x0051f425                      ; 0051f41b
        ;   XREF to: 0051f425 (CONDITIONAL_JUMP)  ; LAB_0051f425
    MOV dword ptr [ESP + 0x64],0x3f800000 ; 0051f41d
    FLD float ptr [ESP + 0x64]          ; 0051f425
        ;   Label: LAB_0051f425
    FLD float ptr [ESI]                 ; 0051f429
    FMUL ST1                            ; 0051f42b
    FSTP float ptr [ESP + 0x1c]         ; 0051f42d
    FLD float ptr [ESI + 0x4]           ; 0051f431
    FMUL ST1                            ; 0051f434
    FLD ST1                             ; 0051f436
    FLD1                                ; 0051f438
    FSUBRP                              ; 0051f43a
    FXCH                                ; 0051f43c
    FSTP float ptr [ESP + 0x20]         ; 0051f43e
    FLD float ptr [ESI + 0x8]           ; 0051f442
    FMULP ST2                           ; 0051f445
    FSTP float ptr [ESP + 0x34]         ; 0051f447
    FSTP float ptr [ESP + 0x24]         ; 0051f44b
    FLD float ptr [EDI]                 ; 0051f44f
    FMUL float ptr [ESP + 0x34]         ; 0051f451
    FSTP float ptr [ESP + 0x28]         ; 0051f455
    FLD float ptr [EDI + 0x4]           ; 0051f459
    FMUL float ptr [ESP + 0x34]         ; 0051f45c
    FSTP float ptr [ESP + 0x2c]         ; 0051f460
    FLD float ptr [EDI + 0x8]           ; 0051f464
    FMUL float ptr [ESP + 0x34]         ; 0051f467
    LEA EAX,[ESP + 0x10]                ; 0051f46b
    MOV EBX,dword ptr [ESP + 0x58]      ; 0051f46f
    FLD float ptr [ESP + 0x28]          ; 0051f473
    FADD float ptr [ESP + 0x1c]         ; 0051f477
    FLD float ptr [ESP + 0x2c]          ; 0051f47b
    FXCH                                ; 0051f47f
    FSTP float ptr [ESP + 0x10]         ; 0051f481
    FADD float ptr [ESP + 0x20]         ; 0051f485
    FXCH                                ; 0051f489
    FST float ptr [ESP + 0x30]          ; 0051f48b
    FADD float ptr [ESP + 0x24]         ; 0051f48f
    FXCH                                ; 0051f493
    FSTP float ptr [ESP + 0x14]         ; 0051f495
    FSTP float ptr [ESP + 0x18]         ; 0051f499
    CMP EAX,EBX                         ; 0051f49d
    JZ 0x0051f4b5                       ; 0051f49f
        ;   XREF to: 0051f4b5 (CONDITIONAL_JUMP)  ; LAB_0051f4b5
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051f4a1
    MOV dword ptr [EBX],EAX             ; 0051f4a5
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051f4a7
    MOV dword ptr [EBX + 0x4],EAX       ; 0051f4ab
    MOV EAX,dword ptr [ESP + 0x18]      ; 0051f4ae
    MOV dword ptr [EBX + 0x8],EAX       ; 0051f4b2
    MOV EBP,dword ptr [ESP + 0x68]      ; 0051f4b5
        ;   Label: LAB_0051f4b5
    PUSH EBP                            ; 0051f4b9
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051f4ba
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051f4bf
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0051f4c2
    XOR EBP,EBP                         ; 0051f4c8
    MOV dword ptr [ESP + 0x38],EAX      ; 0051f4ca
    TEST EDX,EDX                        ; 0051f4ce
    JLE 0x0051f540                      ; 0051f4d0
        ;   XREF to: 0051f540 (CONDITIONAL_JUMP)  ; LAB_0051f540
    MOV EBX,dword ptr [ESP + 0x58]      ; 0051f4d2
    ADD EDI,0xc                         ; 0051f4d6
    ADD ESI,0xc                         ; 0051f4d9
    MOV dword ptr [ESP + 0x40],EDI      ; 0051f4dc
    MOV dword ptr [ESP + 0x3c],ESI      ; 0051f4e0
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0051f4e4
        ;   Label: LAB_0051f4e4
    PUSH dword ptr [ESP + 0x64]         ; 0051f4e8
    PUSH ECX                            ; 0051f4ec
    MOV ESI,dword ptr [ESP + 0x48]      ; 0051f4ed
    PUSH ESI                            ; 0051f4f1
    LEA ESI,[ESP + 0xc]                 ; 0051f4f2
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 0051f4f6
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_0055d2d0()
    LEA ESI,[ESP + 0xc]                 ; 0051f4fb
    ADD ESP,0xc                         ; 0051f4ff
    LEA EDI,[EBX + 0xc]                 ; 0051f502
    ADD EBX,0x10                        ; 0051f505
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0051f508
    MOVSD ES:EDI,ESI                    ; 0051f50c
    MOVSD ES:EDI,ESI                    ; 0051f50d
    MOVSD ES:EDI,ESI                    ; 0051f50e
    MOVSD ES:EDI,ESI                    ; 0051f50f
    ADD EAX,0x10                        ; 0051f510
    MOV EDI,dword ptr [ESP + 0x40]      ; 0051f513
    MOV dword ptr [ESP + 0x3c],EAX      ; 0051f517
    MOV EAX,dword ptr [ESP + 0x38]      ; 0051f51b
    INC EBP                             ; 0051f51f
    ADD EDI,0x10                        ; 0051f520
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0051f523
    MOV dword ptr [ESP + 0x40],EDI      ; 0051f529
    CMP EBP,EDX                         ; 0051f52d
    JL 0x0051f4e4                       ; 0051f52f
        ;   XREF to: 0051f4e4 (CONDITIONAL_JUMP)  ; LAB_0051f4e4
    LEA EAX,[EAX]                       ; 0051f531
    LEA EDX,[EDX]                       ; 0051f537
    LEA EAX,[EAX]                       ; 0051f53d
    MOV ECX,dword ptr [ESP + 0x68]      ; 0051f540
        ;   Label: LAB_0051f540
    PUSH ECX                            ; 0051f544
    MOV EBX,dword ptr [ESP + 0x5c]      ; 0051f545
    PUSH EBX                            ; 0051f549
    CALL core_skeleton.cpp_computeBoneWorldMatrices_FUN_0051f1d0 ; 0051f54a
        ;   XREF to: 0051f1d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_computeBoneWorldMatrices_FUN_0051f1d0(SPose * bone_data, CDeformableModelInstance * instance_ptr)
    ADD ESP,0x8                         ; 0051f54f
    ADD ESP,0x44                        ; 0051f552
    POP EBP                             ; 0051f555
    POP EDI                             ; 0051f556
    POP ESI                             ; 0051f557
    POP EBX                             ; 0051f558
    RET                                 ; 0051f559
    XOR EDX,EDX                         ; 0051f55a
        ;   Label: LAB_0051f55a
    MOV dword ptr [ESP + 0x64],EDX      ; 0051f55c
    JMP 0x0051f410                      ; 0051f560
        ;   XREF to: 0051f410 (UNCONDITIONAL_JUMP)  ; LAB_0051f410

