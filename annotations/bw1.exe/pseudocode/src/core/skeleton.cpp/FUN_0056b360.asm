; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_0056b360(SPose *param_1,float *param_2,float *param_3,float param_4,CDeformableModelInstance *param_5)
;
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_computeBoneModelMatrices_FUN_0056b130
;   core_xform.cpp_slerpQuaternion_FUN_005b7940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b360
        ;   Label: core_skeleton.cpp_FUN_0056b360
    PUSH ESI                            ; 0056b361
    PUSH EDI                            ; 0056b362
    PUSH EBP                            ; 0056b363
    SUB ESP,0x68                        ; 0056b364
    MOV EBX,dword ptr [ESP + 0x80]      ; 0056b367
    FLD float ptr [ESP + 0x88]          ; 0056b36e
    FLDZ                                ; 0056b375
    FCOMPP                              ; 0056b377
    FNSTSW AX                           ; 0056b379
    SAHF                                ; 0056b37b
    JA 0x0056b510                       ; 0056b37c
        ;   XREF to: 0056b510 (CONDITIONAL_JUMP)  ; LAB_0056b510
    FLD float ptr [ESP + 0x88]          ; 0056b382
        ;   Label: LAB_0056b382
    FLD1                                ; 0056b389
    FCOMPP                              ; 0056b38b
    FNSTSW AX                           ; 0056b38d
    SAHF                                ; 0056b38f
    JNC 0x0056b39d                      ; 0056b390
        ;   XREF to: 0056b39d (CONDITIONAL_JUMP)  ; LAB_0056b39d
    MOV dword ptr [ESP + 0x88],0x3f800000 ; 0056b392
    MOV EAX,dword ptr [ESP + 0x84]      ; 0056b39d
        ;   Label: LAB_0056b39d
    FLD float ptr [ESP + 0x88]          ; 0056b3a4
    FLD float ptr [EAX]                 ; 0056b3ab
    FMUL ST1                            ; 0056b3ad
    FLD float ptr [EAX + 0x4]           ; 0056b3af
    FMUL ST2                            ; 0056b3b2
    FLD float ptr [EAX + 0x8]           ; 0056b3b4
    FMUL ST3                            ; 0056b3b7
    LEA EDI,[ESP + 0x4c]                ; 0056b3b9
    LEA ESI,[ESP + 0x10]                ; 0056b3bd
    FLD1                                ; 0056b3c1
    FSUBRP ST4,ST0                      ; 0056b3c3
    FXCH ST2                            ; 0056b3c5
    FSTP float ptr [ESP + 0x10]         ; 0056b3c7
    FSTP float ptr [ESP + 0x14]         ; 0056b3cb
    FSTP float ptr [ESP + 0x18]         ; 0056b3cf
    MOVSD ES:EDI,ESI                    ; 0056b3d3
    MOVSD ES:EDI,ESI                    ; 0056b3d4
    MOVSD ES:EDI,ESI                    ; 0056b3d5
    FSTP float ptr [ESP + 0x58]         ; 0056b3d6
    FLD float ptr [EBX]                 ; 0056b3da
    FMUL float ptr [ESP + 0x58]         ; 0056b3dc
    FLD float ptr [EBX + 0x4]           ; 0056b3e0
    FMUL float ptr [ESP + 0x58]         ; 0056b3e3
    FLD float ptr [EBX + 0x8]           ; 0056b3e7
    FMUL float ptr [ESP + 0x58]         ; 0056b3ea
    LEA EDI,[ESP + 0x34]                ; 0056b3ee
    LEA ESI,[ESP + 0x1c]                ; 0056b3f2
    FXCH ST2                            ; 0056b3f6
    FSTP float ptr [ESP + 0x1c]         ; 0056b3f8
    FSTP float ptr [ESP + 0x20]         ; 0056b3fc
    FSTP float ptr [ESP + 0x24]         ; 0056b400
    MOVSD ES:EDI,ESI                    ; 0056b404
    MOVSD ES:EDI,ESI                    ; 0056b405
    MOVSD ES:EDI,ESI                    ; 0056b406
    FLD float ptr [ESP + 0x34]          ; 0056b407
    FLD float ptr [ESP + 0x38]          ; 0056b40b
    FLD float ptr [ESP + 0x3c]          ; 0056b40f
    LEA EDI,[ESP + 0x40]                ; 0056b413
    LEA ESI,[ESP + 0x28]                ; 0056b417
    FXCH ST2                            ; 0056b41b
    FADD float ptr [ESP + 0x4c]         ; 0056b41d
    FXCH                                ; 0056b421
    FADD float ptr [ESP + 0x50]         ; 0056b423
    FXCH ST2                            ; 0056b427
    FADD float ptr [ESP + 0x54]         ; 0056b429
    FXCH                                ; 0056b42d
    FSTP float ptr [ESP + 0x28]         ; 0056b42f
    FXCH                                ; 0056b433
    FSTP float ptr [ESP + 0x2c]         ; 0056b435
    FSTP float ptr [ESP + 0x30]         ; 0056b439
    MOVSD ES:EDI,ESI                    ; 0056b43d
    MOVSD ES:EDI,ESI                    ; 0056b43e
    MOVSD ES:EDI,ESI                    ; 0056b43f
    LEA EAX,[ESP + 0x40]                ; 0056b440
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0056b444
    CMP EAX,ESI                         ; 0056b448
    JZ 0x0056b460                       ; 0056b44a
        ;   XREF to: 0056b460 (CONDITIONAL_JUMP)  ; LAB_0056b460
    MOV EAX,dword ptr [ESP + 0x40]      ; 0056b44c
    MOV dword ptr [ESI],EAX             ; 0056b450
    MOV EAX,dword ptr [ESP + 0x44]      ; 0056b452
    MOV dword ptr [ESI + 0x4],EAX       ; 0056b456
    MOV EAX,dword ptr [ESP + 0x48]      ; 0056b459
    MOV dword ptr [ESI + 0x8],EAX       ; 0056b45d
    MOV EDI,dword ptr [ESP + 0x8c]      ; 0056b460
        ;   Label: LAB_0056b460
    PUSH EDI                            ; 0056b467
    XOR EBP,EBP                         ; 0056b468
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0056b46a
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056b46f
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0056b472
    MOV dword ptr [ESP + 0x5c],EAX      ; 0056b478
    TEST EDX,EDX                        ; 0056b47c
    JLE 0x0056b4f0                      ; 0056b47e
        ;   XREF to: 0056b4f0 (CONDITIONAL_JUMP)  ; LAB_0056b4f0
    MOV EAX,dword ptr [ESP + 0x84]      ; 0056b480
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0056b487
    ADD EBX,0xc                         ; 0056b48b
    ADD EAX,0xc                         ; 0056b48e
    MOV dword ptr [ESP + 0x64],ESI      ; 0056b491
    MOV dword ptr [ESP + 0x60],EAX      ; 0056b495
    MOV ECX,dword ptr [ESP + 0x60]      ; 0056b499
        ;   Label: LAB_0056b499
    PUSH dword ptr [ESP + 0x88]         ; 0056b49d
    PUSH ECX                            ; 0056b4a4
    PUSH EBX                            ; 0056b4a5
    LEA ESI,[ESP + 0xc]                 ; 0056b4a6
    CALL core_xform.cpp_slerpQuaternion_FUN_005b7940 ; 0056b4aa
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_005b7940()
    ADD ESP,0xc                         ; 0056b4af
    MOV EDI,dword ptr [ESP + 0x64]      ; 0056b4b2
    MOV ESI,ESP                         ; 0056b4b6
    LEA EDI,[EDI + 0xc]                 ; 0056b4b8
    INC EBP                             ; 0056b4bb
    ADD EBX,0x10                        ; 0056b4bc
    MOVSD ES:EDI,ESI                    ; 0056b4bf
    MOVSD ES:EDI,ESI                    ; 0056b4c0
    MOVSD ES:EDI,ESI                    ; 0056b4c1
    MOVSD ES:EDI,ESI                    ; 0056b4c2
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0056b4c3
    MOV ESI,dword ptr [ESP + 0x64]      ; 0056b4c7
    MOV EDI,dword ptr [ESP + 0x60]      ; 0056b4cb
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0056b4cf
    ADD ESI,0x10                        ; 0056b4d5
    ADD EDI,0x10                        ; 0056b4d8
    MOV dword ptr [ESP + 0x64],ESI      ; 0056b4db
    MOV dword ptr [ESP + 0x60],EDI      ; 0056b4df
    CMP EBP,EDX                         ; 0056b4e3
    JL 0x0056b499                       ; 0056b4e5
        ;   XREF to: 0056b499 (CONDITIONAL_JUMP)  ; LAB_0056b499
    LEA EAX,[EAX]                       ; 0056b4e7
    LEA EDX,[EDX]                       ; 0056b4ed
    MOV ECX,dword ptr [ESP + 0x8c]      ; 0056b4f0
        ;   Label: LAB_0056b4f0
    PUSH ECX                            ; 0056b4f7
    MOV EBX,dword ptr [ESP + 0x80]      ; 0056b4f8
    PUSH EBX                            ; 0056b4ff
    CALL core_skeleton.cpp_computeBoneModelMatrices_FUN_0056b130 ; 0056b500
        ;   XREF to: 0056b130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_computeBoneModelMatrices_FUN_0056b130(SPose * bone_data, CDeformableModelInstance * instance_ptr)
    ADD ESP,0x8                         ; 0056b505
    ADD ESP,0x68                        ; 0056b508
    POP EBP                             ; 0056b50b
    POP EDI                             ; 0056b50c
    POP ESI                             ; 0056b50d
    POP EBX                             ; 0056b50e
    RET                                 ; 0056b50f
    XOR EDX,EDX                         ; 0056b510
        ;   Label: LAB_0056b510
    MOV dword ptr [ESP + 0x88],EDX      ; 0056b512
    JMP 0x0056b382                      ; 0056b519
        ;   XREF to: 0056b382 (UNCONDITIONAL_JUMP)  ; LAB_0056b382

