; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040f300(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005d33a1
;   TerminatedCString s_Bip01_L_Clavicle_005d33ac
;   TerminatedCString s_Bip01_R_Clavicle_005d33bd
;   TerminatedCString s_Bip01_L_UpperArm_005d33ce
;   TerminatedCString s_Bip01_R_UpperArm_005d33df
;   TerminatedCString s_Bip01_L_ForeArm_005d33f0
;   TerminatedCString s_Bip01_R_ForeArm_005d3400
;   TerminatedCString s_Bip01_L_Foot_005d3410
;   TerminatedCString s_Bip01_R_Foot_005d341d
;   TerminatedCString s_Bip01_L_Thigh_005d342a
;   TerminatedCString s_Bip01_R_Thigh_005d3438
;   TerminatedCString s_Bip01_L_Calf_005d3446
;   TerminatedCString s_Bip01_R_Calf_005d3453
;   TerminatedCString s_Bip01_L_Hand_005d3460
;   TerminatedCString s_Bip01_R_Hand_005d346d
;   ... and 21 more
;
; Called Functions:
;   FUN_004688e0
;   FUN_004eaa10
;   FUN_005634f0
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f300
        ;   Label: FUN_0040f300
    PUSH ESI                            ; 0040f301
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040f302
    PUSH ESI                            ; 0040f306
    CALL FUN_004eaa10                   ; 0040f307
        ;   XREF to: 004eaa10 (UNCONDITIONAL_CALL)  ; undefined FUN_004eaa10()
    ADD ESP,0x4                         ; 0040f30c
    LEA EAX,[ESI + 0x158]               ; 0040f30f
    PUSH EAX                            ; 0040f315
    CALL FUN_00569f30                   ; 0040f316
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 0040f31b
    PUSH 0x1                            ; 0040f31e
    PUSH 0x5d33a1                       ; 0040f320 | = "Bip01 head"
    PUSH EAX                            ; 0040f325
    MOV EBX,EAX                         ; 0040f326
    CALL FUN_005634f0                   ; 0040f328
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f32d
    PUSH 0x1                            ; 0040f330
    PUSH 0x5d33ac                       ; 0040f332 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 0040f337
    MOV [0x007c3498],EAX                ; 0040f338 | DAT_007c3498
    CALL FUN_005634f0                   ; 0040f33d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f342
    PUSH 0x1                            ; 0040f345
    PUSH 0x5d33bd                       ; 0040f347 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 0040f34c
    MOV [0x007c349c],EAX                ; 0040f34d | DAT_007c349c
    CALL FUN_005634f0                   ; 0040f352
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f357
    PUSH 0x1                            ; 0040f35a
    PUSH 0x5d33ce                       ; 0040f35c | = "Bip01 L UpperArm"
    PUSH EBX                            ; 0040f361
    MOV [0x007c34a0],EAX                ; 0040f362 | DAT_007c34a0
    CALL FUN_005634f0                   ; 0040f367
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f36c
    PUSH 0x1                            ; 0040f36f
    PUSH 0x5d33df                       ; 0040f371 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 0040f376
    MOV [0x007c34a4],EAX                ; 0040f377 | DAT_007c34a4
    CALL FUN_005634f0                   ; 0040f37c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f381
    PUSH 0x1                            ; 0040f384
    PUSH 0x5d33f0                       ; 0040f386 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 0040f38b
    MOV [0x007c34a8],EAX                ; 0040f38c | DAT_007c34a8
    CALL FUN_005634f0                   ; 0040f391
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f396
    PUSH 0x1                            ; 0040f399
    PUSH 0x5d3400                       ; 0040f39b | = "Bip01 R ForeArm"
    PUSH EBX                            ; 0040f3a0
    MOV [0x007c34ac],EAX                ; 0040f3a1 | DAT_007c34ac
    CALL FUN_005634f0                   ; 0040f3a6
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f3ab
    PUSH 0x1                            ; 0040f3ae
    PUSH 0x5d3410                       ; 0040f3b0 | = "Bip01 L Foot"
    PUSH EBX                            ; 0040f3b5
    MOV [0x007c34b0],EAX                ; 0040f3b6 | DAT_007c34b0
    CALL FUN_005634f0                   ; 0040f3bb
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f3c0
    PUSH 0x1                            ; 0040f3c3
    PUSH 0x5d341d                       ; 0040f3c5 | = "Bip01 R Foot"
    PUSH EBX                            ; 0040f3ca
    MOV [0x007c34b4],EAX                ; 0040f3cb | DAT_007c34b4
    CALL FUN_005634f0                   ; 0040f3d0
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f3d5
    MOV [0x007c34b8],EAX                ; 0040f3d8 | DAT_007c34b8
    PUSH 0x1                            ; 0040f3dd
    PUSH 0x5d342a                       ; 0040f3df | = "Bip01 L Thigh"
    PUSH EBX                            ; 0040f3e4
    CALL FUN_005634f0                   ; 0040f3e5
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f3ea
    PUSH 0x1                            ; 0040f3ed
    PUSH 0x5d3438                       ; 0040f3ef | = "Bip01 R Thigh"
    PUSH EBX                            ; 0040f3f4
    MOV [0x007c34bc],EAX                ; 0040f3f5 | DAT_007c34bc
    CALL FUN_005634f0                   ; 0040f3fa
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f3ff
    PUSH 0x1                            ; 0040f402
    PUSH 0x5d3446                       ; 0040f404 | = "Bip01 L Calf"
    PUSH EBX                            ; 0040f409
    MOV [0x007c34c0],EAX                ; 0040f40a | DAT_007c34c0
    CALL FUN_005634f0                   ; 0040f40f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f414
    PUSH 0x1                            ; 0040f417
    PUSH 0x5d3453                       ; 0040f419 | = "Bip01 R Calf"
    PUSH EBX                            ; 0040f41e
    MOV [0x007c34c4],EAX                ; 0040f41f | DAT_007c34c4
    CALL FUN_005634f0                   ; 0040f424
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f429
    PUSH 0x1                            ; 0040f42c
    PUSH 0x5d3460                       ; 0040f42e | = "Bip01 L Hand"
    PUSH EBX                            ; 0040f433
    MOV [0x007c34c8],EAX                ; 0040f434 | DAT_007c34c8
    CALL FUN_005634f0                   ; 0040f439
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f43e
    PUSH 0x1                            ; 0040f441
    PUSH 0x5d346d                       ; 0040f443 | = "Bip01 R Hand"
    PUSH EBX                            ; 0040f448
    MOV [0x007c34cc],EAX                ; 0040f449 | DAT_007c34cc
    CALL FUN_005634f0                   ; 0040f44e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f453
    PUSH 0x1                            ; 0040f456
    PUSH 0x5d347a                       ; 0040f458 | = "Bip01 Spine2"
    PUSH EBX                            ; 0040f45d
    MOV [0x007c34d0],EAX                ; 0040f45e | DAT_007c34d0
    CALL FUN_005634f0                   ; 0040f463
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f468
    PUSH 0x1                            ; 0040f46b
    PUSH 0x5d3487                       ; 0040f46d | = "Bip01 Spine"
    PUSH EBX                            ; 0040f472
    MOV [0x007c34d4],EAX                ; 0040f473 | DAT_007c34d4
    CALL FUN_005634f0                   ; 0040f478
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f47d
    PUSH 0x1                            ; 0040f480
    PUSH 0x5d3493                       ; 0040f482 | = "Bip01 Spine1"
    PUSH EBX                            ; 0040f487
    MOV [0x007c34d8],EAX                ; 0040f488 | DAT_007c34d8
    CALL FUN_005634f0                   ; 0040f48d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0040f492
    MOV dword ptr [ESI + 0x20084],0x0   ; 0040f495
    PUSH 0x7c351c                       ; 0040f49f | DAT_007c351c
    MOV dword ptr [ESI + 0x2750],EAX    ; 0040f4a4
    CALL FUN_004688e0                   ; 0040f4aa
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 0040f4af
    POP ESI                             ; 0040f4b2
    POP EBX                             ; 0040f4b3
    RET                                 ; 0040f4b4

