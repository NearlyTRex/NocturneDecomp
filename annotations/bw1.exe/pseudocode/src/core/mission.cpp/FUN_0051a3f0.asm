; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051a3f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_004d7250 at 004d7511
;   FUN_0051bad0 at 0051bc1f
;   FUN_0052e120 at 0052e740
;
; Referenced Globals:
;   TerminatedCString s_rt_005e9079
;   TerminatedCString s_world_005e907c
;   TerminatedCString s_core_mission_cpp_005e9082
;   TerminatedCString s_CDemonMission_load_Unabl_005e9096
;   TerminatedCString s_Loading_mission_005e90c0
;   undefined4 DAT_0061f2e0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00479180
;   FUN_004fe9c0
;   FUN_005030e0
;   FUN_0051a4f0
;   FUN_0051c240
;   FUN_00531090
;   FUN_005c0d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a3f0
        ;   Label: FUN_0051a3f0
    PUSH EDI                            ; 0051a3f1
    PUSH EBP                            ; 0051a3f2
    PUSH 0x5e9079                       ; 0051a3f3 | = "rt"
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051a3f8
    PUSH EDX                            ; 0051a3fc
    PUSH 0x5e907c                       ; 0051a3fd | = "world"
    CALL FUN_00479180                   ; 0051a402
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; undefined FUN_00479180()
    ADD ESP,0xc                         ; 0051a407
    MOV EBX,EAX                         ; 0051a40a
    TEST EAX,EAX                        ; 0051a40c
    JZ 0x0051a45c                       ; 0051a40e
        ;   XREF to: 0051a45c (CONDITIONAL_JUMP)  ; LAB_0051a45c
    PUSH 0x0                            ; 0051a410
        ;   Label: LAB_0051a410
    PUSH 0x5e90c0                       ; 0051a412 | = "Loading mission"
    CALL FUN_00531090                   ; 0051a417
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0051a41c
    PUSH EAX                            ; 0051a41f
    MOV EDI,dword ptr [0x0061f2e0]      ; 0051a420 | DAT_0061f2e0
    PUSH EDI                            ; 0051a426
    CALL FUN_004fe9c0                   ; 0051a427
        ;   XREF to: 004fe9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fe9c0()
    ADD ESP,0xc                         ; 0051a42c
    MOV EBP,dword ptr [ESP + 0x18]      ; 0051a42f
    PUSH EBP                            ; 0051a433
    PUSH EBX                            ; 0051a434
    MOV EAX,dword ptr [ESP + 0x18]      ; 0051a435
    PUSH EAX                            ; 0051a439
    CALL FUN_0051a4f0                   ; 0051a43a
        ;   XREF to: 0051a4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051a4f0()
    ADD ESP,0xc                         ; 0051a43f
    PUSH EBX                            ; 0051a442
    CALL FUN_005c0d10                   ; 0051a443
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 0051a448
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051a44b
    PUSH EDX                            ; 0051a44f
    CALL FUN_0051c240                   ; 0051a450
        ;   XREF to: 0051c240 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c240()
    ADD ESP,0x4                         ; 0051a455
    POP EBP                             ; 0051a458
    POP EDI                             ; 0051a459
    POP EBX                             ; 0051a45a
    RET                                 ; 0051a45b
    PUSH ESI                            ; 0051a45c
        ;   Label: LAB_0051a45c
    MOV ECX,0x5e9082                    ; 0051a45d | = "..\\core\\mission.cpp"
    MOV ESI,0xa3                        ; 0051a462
    PUSH 0x5e9096                       ; 0051a467 | = "CDemonMission::load - Unable to open ..."
    MOV dword ptr [0x01d1d400],ECX      ; 0051a46c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0051a472 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051a478
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0051a47d
    POP ESI                             ; 0051a480
    JMP 0x0051a410                      ; 0051a481
        ;   XREF to: 0051a410 (UNCONDITIONAL_JUMP)  ; LAB_0051a410

