; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0051e350(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
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
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_findPatchToFrame_FUN_0051e120 at 0051e17a
;
; Called Functions:
;   core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_004e2070
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e350
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0051e350
    PUSH ESI                            ; 0051e351
    PUSH EDI                            ; 0051e352
    PUSH EBP                            ; 0051e353
    MOV EBP,ESP                         ; 0051e354
    SUB ESP,0x50                        ; 0051e356
    AND ESP,0xfffffff8                  ; 0051e359
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051e35c
    PUSH EDX                            ; 0051e35f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051e360
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0051e365
    MOV ESI,EAX                         ; 0051e368
    MOV dword ptr [ESP + 0x44],EAX      ; 0051e36a
    MOV EAX,ESP                         ; 0051e36e
    PUSH EAX                            ; 0051e370
    LEA EAX,[ESP + 0x40]                ; 0051e371
    PUSH EAX                            ; 0051e375
    LEA EAX,[ESP + 0x40]                ; 0051e376
    PUSH EAX                            ; 0051e37a
    MOV ECX,dword ptr [EBP + 0x18]      ; 0051e37b
    PUSH dword ptr [EBP + 0x1c]         ; 0051e37e
    PUSH ECX                            ; 0051e381
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051e382
    PUSH EBX                            ; 0051e385
    CALL core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_004e2070 ; 0051e386
        ;   XREF to: 004e2070 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_004e2070()
    ADD ESP,0x18                        ; 0051e38b
    MOV EDI,dword ptr [ESI + 0x28558]   ; 0051e38e
    XOR EBX,EBX                         ; 0051e394
    TEST EDI,EDI                        ; 0051e396
    JLE 0x0051e410                      ; 0051e398
        ;   XREF to: 0051e410 (CONDITIONAL_JUMP)  ; LAB_0051e410
    MOV EAX,dword ptr [EBP + 0x20]      ; 0051e39a
    MOV dword ptr [ESP + 0x4c],EAX      ; 0051e39d
    MOV dword ptr [ESP + 0x48],EAX      ; 0051e3a1
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0051e3a5
        ;   Label: LAB_0051e3a5
    PUSH dword ptr [ESP]                ; 0051e3a9
    PUSH EAX                            ; 0051e3ac
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051e3ad
    PUSH EDX                            ; 0051e3b1
    PUSH EBX                            ; 0051e3b2
    MOV ECX,dword ptr [ESP + 0x54]      ; 0051e3b3
    PUSH ECX                            ; 0051e3b7
    LEA ESI,[ESP + 0x18]                ; 0051e3b8
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80 ; 0051e3bc
        ;   XREF to: 00517a80 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80()
    ADD ESP,0x14                        ; 0051e3c1
    MOV EDI,dword ptr [ESP + 0x48]      ; 0051e3c4
    LEA ESI,[ESP + 0x4]                 ; 0051e3c8
    LEA EDI,[EDI + 0xc]                 ; 0051e3cc
    INC EBX                             ; 0051e3cf
    MOVSD ES:EDI,ESI                    ; 0051e3d0
    MOVSD ES:EDI,ESI                    ; 0051e3d1
    MOVSD ES:EDI,ESI                    ; 0051e3d2
    MOVSD ES:EDI,ESI                    ; 0051e3d3
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0051e3d4
    MOV EDI,dword ptr [ESP + 0x48]      ; 0051e3d8
    LEA ESI,[EAX + 0x4]                 ; 0051e3dc
    MOV dword ptr [EAX + 0x64c],0x3f800000 ; 0051e3df
    MOV EAX,dword ptr [ESP + 0x44]      ; 0051e3e9
    MOV dword ptr [ESP + 0x4c],ESI      ; 0051e3ed
    ADD EDI,0x10                        ; 0051e3f1
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0051e3f4
    MOV dword ptr [ESP + 0x48],EDI      ; 0051e3fa
    CMP EBX,EDX                         ; 0051e3fe
    JL 0x0051e3a5                       ; 0051e400
        ;   XREF to: 0051e3a5 (CONDITIONAL_JUMP)  ; LAB_0051e3a5
    LEA EAX,[EAX]                       ; 0051e402
    LEA EDX,[EDX]                       ; 0051e408
    MOV EAX,EAX                         ; 0051e40e
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0051e410
        ;   Label: LAB_0051e410
    LEA EAX,[EBX*0x4 + 0x0]             ; 0051e414
    SUB EAX,EBX                         ; 0051e41b
    MOV EBX,dword ptr [ESP + 0x44]      ; 0051e41d
    MOV EBX,dword ptr [EBX + 0x29374]   ; 0051e421
    FLD float ptr [EBX + EAX*0x4]       ; 0051e427
    FMUL float ptr [ESP]                ; 0051e42a
    FSTP float ptr [ESP + 0x14]         ; 0051e42d
    FLD float ptr [EBX + EAX*0x4 + 0x4] ; 0051e431
    FMUL float ptr [ESP]                ; 0051e435
    FSTP float ptr [ESP + 0x18]         ; 0051e438
    FLD float ptr [EBX + EAX*0x4 + 0x8] ; 0051e43c
    FMUL float ptr [ESP]                ; 0051e440
    FLD float ptr [ESP]                 ; 0051e443
    MOV EBX,dword ptr [ESP + 0x38]      ; 0051e446
    FLD1                                ; 0051e44a
    LEA EAX,[EBX*0x4 + 0x0]             ; 0051e44c
    FSUBRP                              ; 0051e453
    SUB EAX,EBX                         ; 0051e455
    MOV EBX,dword ptr [ESP + 0x44]      ; 0051e457
    FXCH                                ; 0051e45b
    FSTP float ptr [ESP + 0x1c]         ; 0051e45d
    MOV EBX,dword ptr [EBX + 0x29374]   ; 0051e461
    FSTP float ptr [ESP + 0x40]         ; 0051e467
    FLD float ptr [EBX + EAX*0x4]       ; 0051e46b
    FMUL float ptr [ESP + 0x40]         ; 0051e46e
    FSTP float ptr [ESP + 0x2c]         ; 0051e472
    FLD float ptr [EBX + EAX*0x4 + 0x4] ; 0051e476
    FMUL float ptr [ESP + 0x40]         ; 0051e47a
    FSTP float ptr [ESP + 0x30]         ; 0051e47e
    FLD float ptr [EBX + EAX*0x4 + 0x8] ; 0051e482
    FMUL float ptr [ESP + 0x40]         ; 0051e486
    MOV ECX,dword ptr [EBP + 0x20]      ; 0051e48a
    FLD float ptr [ESP + 0x2c]          ; 0051e48d
    FADD float ptr [ESP + 0x14]         ; 0051e491
    FLD float ptr [ESP + 0x30]          ; 0051e495
    FXCH                                ; 0051e499
    FSTP float ptr [ESP + 0x20]         ; 0051e49b
    LEA EAX,[ESP + 0x20]                ; 0051e49f
    FADD float ptr [ESP + 0x18]         ; 0051e4a3
    FXCH                                ; 0051e4a7
    FST float ptr [ESP + 0x34]          ; 0051e4a9
    FADD float ptr [ESP + 0x1c]         ; 0051e4ad
    FXCH                                ; 0051e4b1
    FSTP float ptr [ESP + 0x24]         ; 0051e4b3
    FSTP float ptr [ESP + 0x28]         ; 0051e4b7
    CMP EAX,ECX                         ; 0051e4bb
    JNZ 0x0051e4fa                      ; 0051e4bd
        ;   XREF to: 0051e4fa (CONDITIONAL_JUMP)  ; LAB_0051e4fa
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051e4bf
        ;   Label: LAB_0051e4bf
    FLD float ptr [EAX + 0x508]         ; 0051e4c2
    MOV EAX,dword ptr [EBP + 0x20]      ; 0051e4c8
    FMUL float ptr [EAX]                ; 0051e4cb
    FSTP float ptr [EAX]                ; 0051e4cd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051e4cf
    FLD float ptr [EAX + 0x50c]         ; 0051e4d2
    MOV EAX,dword ptr [EBP + 0x20]      ; 0051e4d8
    FMUL float ptr [EAX + 0x4]          ; 0051e4db
    FSTP float ptr [EAX + 0x4]          ; 0051e4de
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051e4e1
    FLD float ptr [EAX + 0x510]         ; 0051e4e4
    MOV EAX,dword ptr [EBP + 0x20]      ; 0051e4ea
    FMUL float ptr [EAX + 0x8]          ; 0051e4ed
    FSTP float ptr [EAX + 0x8]          ; 0051e4f0
    MOV ESP,EBP                         ; 0051e4f3
    POP EBP                             ; 0051e4f5
    POP EDI                             ; 0051e4f6
    POP ESI                             ; 0051e4f7
    POP EBX                             ; 0051e4f8
    RET                                 ; 0051e4f9
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051e4fa
        ;   Label: LAB_0051e4fa
    MOV dword ptr [ECX],EAX             ; 0051e4fe
    MOV EAX,dword ptr [ESP + 0x24]      ; 0051e500
    MOV dword ptr [ECX + 0x4],EAX       ; 0051e504
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051e507
    MOV dword ptr [ECX + 0x8],EAX       ; 0051e50b
    JMP 0x0051e4bf                      ; 0051e50e
        ;   XREF to: 0051e4bf (UNCONDITIONAL_JUMP)  ; LAB_0051e4bf

