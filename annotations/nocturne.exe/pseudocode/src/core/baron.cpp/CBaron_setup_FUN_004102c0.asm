; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_baron_cpp_CBaron_setup_FUN_004102c0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_0057852f
;   TerminatedCString s_Bip01_L_Clavicle_0057853a
;   TerminatedCString s_Bip01_R_Clavicle_0057854b
;   TerminatedCString s_Bip01_L_UpperArm_0057855c
;   TerminatedCString s_Bip01_R_UpperArm_0057856d
;   TerminatedCString s_Bip01_L_ForeArm_0057857e
;   TerminatedCString s_Bip01_R_ForeArm_0057858e
;   TerminatedCString s_Bip01_L_Foot_0057859e
;   TerminatedCString s_Bip01_R_Foot_005785ab
;   TerminatedCString s_Bip01_L_Thigh_005785b8
;   TerminatedCString s_Bip01_R_Thigh_005785c6
;   TerminatedCString s_Bip01_L_Calf_005785d4
;   TerminatedCString s_Bip01_R_Calf_005785e1
;   TerminatedCString s_Bip01_L_Hand_005785ee
;   TerminatedCString s_Bip01_R_Hand_005785fb
;   ... and 21 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   core_hero.cpp_FUN_004b48d0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004102c0
        ;   Label: core_baron.cpp_CBaron_setup_FUN_004102c0
    PUSH ESI                            ; 004102c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004102c2
    PUSH ESI                            ; 004102c6
    CALL core_hero.cpp_FUN_004b48d0     ; 004102c7
        ;   XREF to: 004b48d0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004b48d0()
    ADD ESP,0x4                         ; 004102cc
    LEA EAX,[ESI + 0x150]               ; 004102cf
    PUSH EAX                            ; 004102d5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004102d6
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 004102db
    PUSH 0x1                            ; 004102de
    PUSH 0x57852f                       ; 004102e0 | = "Bip01 head"
    PUSH EAX                            ; 004102e5
    MOV EBX,EAX                         ; 004102e6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004102e8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004102ed
    PUSH 0x1                            ; 004102f0
    PUSH 0x57853a                       ; 004102f2 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 004102f7
    MOV [0x007642e8],EAX                ; 004102f8 | DAT_007642e8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004102fd
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00410302
    PUSH 0x1                            ; 00410305
    PUSH 0x57854b                       ; 00410307 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 0041030c
    MOV [0x007642ec],EAX                ; 0041030d | DAT_007642ec
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00410312
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00410317
    PUSH 0x1                            ; 0041031a
    PUSH 0x57855c                       ; 0041031c | = "Bip01 L UpperArm"
    PUSH EBX                            ; 00410321
    MOV [0x007642f0],EAX                ; 00410322 | DAT_007642f0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00410327
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041032c
    PUSH 0x1                            ; 0041032f
    PUSH 0x57856d                       ; 00410331 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00410336
    MOV [0x007642f4],EAX                ; 00410337 | DAT_007642f4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041033c
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00410341
    PUSH 0x1                            ; 00410344
    PUSH 0x57857e                       ; 00410346 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 0041034b
    MOV [0x007642f8],EAX                ; 0041034c | DAT_007642f8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00410351
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00410356
    PUSH 0x1                            ; 00410359
    PUSH 0x57858e                       ; 0041035b | = "Bip01 R ForeArm"
    PUSH EBX                            ; 00410360
    MOV [0x007642fc],EAX                ; 00410361 | DAT_007642fc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00410366
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041036b
    PUSH 0x1                            ; 0041036e
    PUSH 0x57859e                       ; 00410370 | = "Bip01 L Foot"
    PUSH EBX                            ; 00410375
    MOV [0x00764300],EAX                ; 00410376 | DAT_00764300
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041037b
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00410380
    PUSH 0x1                            ; 00410383
    PUSH 0x5785ab                       ; 00410385 | = "Bip01 R Foot"
    PUSH EBX                            ; 0041038a
    MOV [0x00764304],EAX                ; 0041038b | DAT_00764304
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00410390
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00410395
    MOV [0x00764308],EAX                ; 00410398 | DAT_00764308
    PUSH 0x1                            ; 0041039d
    PUSH 0x5785b8                       ; 0041039f | = "Bip01 L Thigh"
    PUSH EBX                            ; 004103a4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004103a5
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004103aa
    PUSH 0x1                            ; 004103ad
    PUSH 0x5785c6                       ; 004103af | = "Bip01 R Thigh"
    PUSH EBX                            ; 004103b4
    MOV [0x0076430c],EAX                ; 004103b5 | DAT_0076430c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004103ba
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004103bf
    PUSH 0x1                            ; 004103c2
    PUSH 0x5785d4                       ; 004103c4 | = "Bip01 L Calf"
    PUSH EBX                            ; 004103c9
    MOV [0x00764310],EAX                ; 004103ca | DAT_00764310
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004103cf
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004103d4
    PUSH 0x1                            ; 004103d7
    PUSH 0x5785e1                       ; 004103d9 | = "Bip01 R Calf"
    PUSH EBX                            ; 004103de
    MOV [0x00764314],EAX                ; 004103df | DAT_00764314
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004103e4
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004103e9
    PUSH 0x1                            ; 004103ec
    PUSH 0x5785ee                       ; 004103ee | = "Bip01 L Hand"
    PUSH EBX                            ; 004103f3
    MOV [0x00764318],EAX                ; 004103f4 | DAT_00764318
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004103f9
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004103fe
    PUSH 0x1                            ; 00410401
    PUSH 0x5785fb                       ; 00410403 | = "Bip01 R Hand"
    PUSH EBX                            ; 00410408
    MOV [0x0076431c],EAX                ; 00410409 | DAT_0076431c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041040e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00410413
    PUSH 0x1                            ; 00410416
    PUSH 0x578608                       ; 00410418 | = "Bip01 Spine2"
    PUSH EBX                            ; 0041041d
    MOV [0x00764320],EAX                ; 0041041e | DAT_00764320
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00410423
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00410428
    PUSH 0x1                            ; 0041042b
    PUSH 0x578615                       ; 0041042d | = "Bip01 Spine"
    PUSH EBX                            ; 00410432
    MOV [0x00764324],EAX                ; 00410433 | DAT_00764324
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00410438
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041043d
    PUSH 0x1                            ; 00410440
    PUSH 0x578621                       ; 00410442 | = "Bip01 Spine1"
    PUSH EBX                            ; 00410447
    MOV [0x00764328],EAX                ; 00410448 | DAT_00764328
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041044d
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00410452
    MOV dword ptr [ESI + 0x1fb14],0x0   ; 00410455
    PUSH 0x76436c                       ; 0041045f | DAT_0076436c
    MOV dword ptr [ESI + 0x25bc],EAX    ; 00410464
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0041046a
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510()
    ADD ESP,0x4                         ; 0041046f
    POP ESI                             ; 00410472
    POP EBX                             ; 00410473
    RET                                 ; 00410474

