; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004ae300(CVector3f *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061c010
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01c43530
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1372328_0x14f0a8
;   undefined4 g_CDemonSetInstance.field1372332_0x14f0ac
;
; Called Functions:
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
;   core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0
;   core_particle.cpp_FUN_00532250
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ae300
        ;   Label: core_fire.cpp_FUN_004ae300
    PUSH ESI                            ; 004ae301
    PUSH EDI                            ; 004ae302
    PUSH EBP                            ; 004ae303
    SUB ESP,0x44                        ; 004ae304
    MOV EBP,dword ptr [ESP + 0x58]      ; 004ae307
    MOV EDX,dword ptr [EBP + 0x48]      ; 004ae30b
    TEST EDX,EDX                        ; 004ae30e
    JNZ 0x004ae4b5                      ; 004ae310
        ;   XREF to: 004ae4b5 (CONDITIONAL_JUMP)  ; LAB_004ae4b5
    MOV dword ptr [EBP + 0x48],0x1      ; 004ae316
    MOV dword ptr [EBP + 0x50],EDX      ; 004ae31d
    PUSH EBP                            ; 004ae320
        ;   Label: LAB_004ae320
    CALL core_particle.cpp_FUN_00532250 ; 004ae321
        ;   XREF to: 00532250 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_FUN_00532250()
    MOV EAX,[0x01c43530]                ; 004ae326 | DAT_01c43530
    MOV EDX,EAX                         ; 004ae32b
    SAR EDX,0x1f                        ; 004ae32d
    SHL EDX,0x2                         ; 004ae330
    SBB EAX,EDX                         ; 004ae333
    SAR EAX,0x2                         ; 004ae335
    MOV ESI,dword ptr [EBP + 0x54]      ; 004ae338
    ADD ESI,EAX                         ; 004ae33b
    MOV EAX,[0x01c43530]                ; 004ae33d | DAT_01c43530
    MOV EDX,EAX                         ; 004ae342
    SAR EDX,0x1f                        ; 004ae344
    SUB EAX,EDX                         ; 004ae347
    SAR EAX,0x1                         ; 004ae349
    ADD ESP,0x4                         ; 004ae34b
    MOV EDI,dword ptr [EBP + 0x58]      ; 004ae34e
    MOV dword ptr [EBP + 0x54],ESI      ; 004ae351
    ADD EDI,EAX                         ; 004ae354
    MOV EAX,dword ptr [EBP + 0x4c]      ; 004ae356
    MOV dword ptr [EBP + 0x58],EDI      ; 004ae359
    TEST EAX,EAX                        ; 004ae35c
    JNZ 0x004ae482                      ; 004ae35e
        ;   XREF to: 004ae482 (CONDITIONAL_JUMP)  ; LAB_004ae482
    PUSH EBP                            ; 004ae364
    LEA EBX,[EBP + 0x64]                ; 004ae365
    PUSH EBX                            ; 004ae368
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970 ; 004ae369
        ;   XREF to: 0045e970 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970(CDemonGlobe * this_ptr, CVector3f * position)
    MOV EDX,dword ptr [EBP + 0x40]      ; 004ae36e
    MOV EAX,EDX                         ; 004ae371
    MOV dword ptr [EBX + 0x3c],EDX      ; 004ae373
    SAR EDX,0x1f                        ; 004ae376
    SHL EDX,0x8                         ; 004ae379
    SBB EAX,EDX                         ; 004ae37c
    SAR EAX,0x8                         ; 004ae37e
    MOV EDX,EAX                         ; 004ae381
    SAR EDX,0x1f                        ; 004ae383
    SHL EDX,0x2                         ; 004ae386
    SBB EAX,EDX                         ; 004ae389
    SAR EAX,0x2                         ; 004ae38b
    ADD ESP,0x8                         ; 004ae38e
    PUSH 0x41000000                     ; 004ae391
    PUSH EBX                            ; 004ae396
    MOV byte ptr [EBX + 0x1c],AL        ; 004ae397
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0 ; 004ae39a
        ;   XREF to: 0045e9c0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 004ae39f
    PUSH EBX                            ; 004ae3a2
    MOV EDX,dword ptr [0x00622c18]      ; 004ae3a3 | g_CDemonSetPtr
    PUSH EDX                            ; 004ae3a9 | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x20],0x0      ; 004ae3aa
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960 ; 004ae3b1
        ;   XREF to: 00551960 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960(CDemonSet * this_ptr, CDemonGlobe * globe)
    MOV EAX,[0x01c43530]                ; 004ae3b6 | DAT_01c43530
    MOV ECX,dword ptr [EBP + 0x50]      ; 004ae3bb
    ADD ECX,EAX                         ; 004ae3be
    ADD ESP,0x8                         ; 004ae3c0
    MOV dword ptr [EBP + 0x50],ECX      ; 004ae3c3
    CMP ECX,0x1000                      ; 004ae3c6
    JLE 0x004ae482                      ; 004ae3cc
        ;   XREF to: 004ae482 (CONDITIONAL_JUMP)  ; LAB_004ae482
    PUSH 0xffff                         ; 004ae3d2
    PUSH 0x0                            ; 004ae3d7
    PUSH 0x40000000                     ; 004ae3d9
    PUSH EBP                            ; 004ae3de
    MOV ESI,dword ptr [0x0061c010]      ; 004ae3df | DAT_0061c010
    LEA EDI,[ECX + 0xfffff000]          ; 004ae3e5
    PUSH ESI                            ; 004ae3eb
    MOV dword ptr [EBP + 0x50],EDI      ; 004ae3ec
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30 ; 004ae3ef
        ;   XREF to: 004b5b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004ae3f4
    PUSH 0xffff                         ; 004ae3f7
    PUSH 0x0                            ; 004ae3fc
    PUSH 0x10000                        ; 004ae3fe
    PUSH 0x20000                        ; 004ae403
    PUSH 0x0                            ; 004ae408
    PUSH EBP                            ; 004ae40a
    MOV EAX,[0x0061c010]                ; 004ae40b | DAT_0061c010
    PUSH EAX                            ; 004ae410
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 004ae411
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004ae416
    PUSH 0xffff                         ; 004ae419
    PUSH 0x0                            ; 004ae41e
    PUSH 0x10000                        ; 004ae420
    PUSH 0x20000                        ; 004ae425
    PUSH 0x0                            ; 004ae42a
    PUSH EBP                            ; 004ae42c
    MOV EDX,dword ptr [0x0061c010]      ; 004ae42d | DAT_0061c010
    PUSH EDX                            ; 004ae433
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 004ae434
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004ae439
    PUSH 0xffff                         ; 004ae43c
    PUSH 0x0                            ; 004ae441
    PUSH 0x10000                        ; 004ae443
    PUSH 0x20000                        ; 004ae448
    PUSH 0x0                            ; 004ae44d
    PUSH EBP                            ; 004ae44f
    MOV ECX,dword ptr [0x0061c010]      ; 004ae450 | DAT_0061c010
    PUSH ECX                            ; 004ae456
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 004ae457
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004ae45c
    PUSH 0xffff                         ; 004ae45f
    PUSH 0x0                            ; 004ae464
    PUSH 0x10000                        ; 004ae466
    PUSH 0x20000                        ; 004ae46b
    PUSH 0x0                            ; 004ae470
    PUSH EBP                            ; 004ae472
    MOV EBX,dword ptr [0x0061c010]      ; 004ae473 | DAT_0061c010
    PUSH EBX                            ; 004ae479
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 004ae47a
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004ae47f
    MOV ESI,dword ptr [EBP + 0x4c]      ; 004ae482
        ;   Label: LAB_004ae482
    TEST ESI,ESI                        ; 004ae485
    JNZ 0x004ae4e7                      ; 004ae487
        ;   XREF to: 004ae4e7 (CONDITIONAL_JUMP)  ; LAB_004ae4e7
    MOV EDI,0x41a00000                  ; 004ae489
    MOV ESI,0x40800000                  ; 004ae48e
    MOV dword ptr [ESP + 0x3c],EDI      ; 004ae493
    MOV dword ptr [ESP + 0x40],ESI      ; 004ae497
    XOR ESI,ESI                         ; 004ae49b
        ;   Label: LAB_004ae49b
    XOR EBX,EBX                         ; 004ae49d
    MOV EDI,dword ptr [0x00622c18]      ; 004ae49f | g_CDemonSetPtr
        ;   Label: LAB_004ae49f
    CMP EBX,dword ptr [EDI + 0x14f0a8]  ; 004ae4a5 | g_CDemonSetInstance.field1372328_0x14f0a8
    JL 0x004ae514                       ; 004ae4ab
        ;   XREF to: 004ae514 (CONDITIONAL_JUMP)  ; LAB_004ae514
    ADD ESP,0x44                        ; 004ae4ad
    POP EBP                             ; 004ae4b0
    POP EDI                             ; 004ae4b1
    POP ESI                             ; 004ae4b2
    POP EBX                             ; 004ae4b3
    RET                                 ; 004ae4b4
    MOV EDX,dword ptr [0x01c43530]      ; 004ae4b5 | DAT_01c43530
        ;   Label: LAB_004ae4b5
    MOV EAX,dword ptr [EBP + 0x44]      ; 004ae4bb
    IMUL EDX                            ; 004ae4be
    SHRD EAX,EDX,0x10                   ; 004ae4c0
    MOV ECX,dword ptr [EBP + 0x40]      ; 004ae4c4
    SUB ECX,EAX                         ; 004ae4c7
    MOV dword ptr [EBP + 0x40],ECX      ; 004ae4c9
    TEST ECX,ECX                        ; 004ae4cc
    JGE 0x004ae320                      ; 004ae4ce
        ;   XREF to: 004ae320 (CONDITIONAL_JUMP)  ; LAB_004ae320
    MOV dword ptr [EBP + 0x24],0x0      ; 004ae4d4
    MOV dword ptr [EBP + 0x40],0x0      ; 004ae4db
    JMP 0x004ae320                      ; 004ae4e2
        ;   XREF to: 004ae320 (UNCONDITIONAL_JUMP)  ; LAB_004ae320
    CMP ESI,0x2                         ; 004ae4e7
        ;   Label: LAB_004ae4e7
    JNZ 0x004ae500                      ; 004ae4ea
        ;   XREF to: 004ae500 (CONDITIONAL_JUMP)  ; LAB_004ae500
    MOV EBX,0x40a00000                  ; 004ae4ec
    MOV ECX,0x3f800000                  ; 004ae4f1
    MOV dword ptr [ESP + 0x3c],EBX      ; 004ae4f6
    MOV dword ptr [ESP + 0x40],ECX      ; 004ae4fa
    JMP 0x004ae49b                      ; 004ae4fe
        ;   XREF to: 004ae49b (UNCONDITIONAL_JUMP)  ; LAB_004ae49b
    MOV EDX,0x40a00000                  ; 004ae500
        ;   Label: LAB_004ae500
    MOV EAX,0x3f800000                  ; 004ae505
    MOV dword ptr [ESP + 0x3c],EDX      ; 004ae50a
    MOV dword ptr [ESP + 0x40],EAX      ; 004ae50e
    JMP 0x004ae49b                      ; 004ae512
        ;   XREF to: 004ae49b (UNCONDITIONAL_JUMP)  ; LAB_004ae49b
    MOV EAX,ESP                         ; 004ae514
        ;   Label: LAB_004ae514
    PUSH EAX                            ; 004ae516
    MOV EDI,dword ptr [EDI + ESI*0x1 + 0x14f0ac] ; 004ae517 | g_CDemonSetInstance.field1372332_0x14f0ac
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 004ae51e
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004ae523
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004ae526
    MOV dword ptr [ESP + 0x4],EAX       ; 004ae52a
    MOV EAX,ESP                         ; 004ae52e
    PUSH EAX                            ; 004ae530
    PUSH dword ptr [ESP + 0x44]         ; 004ae531
    PUSH EBP                            ; 004ae535
    MOV EDX,dword ptr [EDI + 0x154]     ; 004ae536
    PUSH EDI                            ; 004ae53c
    ADD ESI,0x4                         ; 004ae53d
    INC EBX                             ; 004ae540
    CALL dword ptr [EDX + 0x100]        ; 004ae541
    ADD ESP,0x10                        ; 004ae547
    JMP 0x004ae49f                      ; 004ae54a
        ;   XREF to: 004ae49f (UNCONDITIONAL_JUMP)  ; LAB_004ae49f

