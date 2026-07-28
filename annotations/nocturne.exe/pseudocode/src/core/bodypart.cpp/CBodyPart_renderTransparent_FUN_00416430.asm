; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_bodypart_cpp_CBodyPart_renderTransparent_FUN_00416430(CBodyPart *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005be368
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01fb1b24
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030
;   core_flame.cpp_FUN_0048d5d0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00416430
        ;   Label: core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00416430
    PUSH EBP                            ; 00416431
    MOV EDI,dword ptr [ESP + 0xc]       ; 00416432
    CMP dword ptr [EDI + 0xf14],0x0     ; 00416436
    JZ 0x004164f0                       ; 0041643d
        ;   XREF to: 004164f0 (CONDITIONAL_JUMP)  ; LAB_004164f0
    CMP dword ptr [EDI + 0x150],0x1     ; 00416443
    JLE 0x00416459                      ; 0041644a
        ;   XREF to: 00416459 (CONDITIONAL_JUMP)  ; LAB_00416459
    CMP dword ptr [EDI + 0x744],0x0     ; 0041644c
    JZ 0x004164f0                       ; 00416453
        ;   XREF to: 004164f0 (CONDITIONAL_JUMP)  ; LAB_004164f0
    PUSH EBX                            ; 00416459
        ;   Label: LAB_00416459
    CMP dword ptr [EDI + 0xc9c],0x0     ; 0041645a
    JZ 0x004164b9                       ; 00416461
        ;   XREF to: 004164b9 (CONDITIONAL_JUMP)  ; LAB_004164b9
    MOV EBX,dword ptr [0x005be368]      ; 00416463 | DAT_005be368
    MOV EAX,dword ptr [EDI + 0xc98]     ; 00416469
    PUSH EDI                            ; 0041646f
    MOV dword ptr [EBX + 0x15a8a0],EAX  ; 00416470 | DAT_01fb1b24
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00416476
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 0041647b
    MOV EBP,dword ptr [EDI + 0xca8]     ; 0041647e
    PUSH EBP                            ; 00416484
    MOV EAX,[0x005ae704]                ; 00416485 | DAT_005ae704
    PUSH EAX                            ; 0041648a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 0041648b
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00416490
    PUSH 0x2e7                          ; 00416493
    PUSH EDI                            ; 00416498
    CALL core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030 ; 00416499
        ;   XREF to: 00416030 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030(CBodyPart * this_ptr, int render_flags)
    ADD ESP,0x8                         ; 0041649e
    PUSH EDI                            ; 004164a1
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004164a2
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    MOV EAX,[0x005be368]                ; 004164a7 | DAT_005be368
    ADD ESP,0x4                         ; 004164ac
    MOV dword ptr [EAX + 0x15a8a0],0x0  ; 004164af | DAT_01fb1b24
    MOV EDX,dword ptr [EDI + 0x744]     ; 004164b9
        ;   Label: LAB_004164b9
    XOR EBX,EBX                         ; 004164bf
    TEST EDX,EDX                        ; 004164c1
    JLE 0x004164e7                      ; 004164c3
        ;   XREF to: 004164e7 (CONDITIONAL_JUMP)  ; LAB_004164e7
    PUSH ESI                            ; 004164c5
    LEA ESI,[EDI + 0x754]               ; 004164c6
    PUSH ESI                            ; 004164cc
        ;   Label: LAB_004164cc
    CALL core_flame.cpp_FUN_0048d5d0    ; 004164cd
        ;   XREF to: 0048d5d0 (UNCONDITIONAL_CALL)  ; undefined core_flame.cpp_FUN_0048d5d0()
    INC EBX                             ; 004164d2
    ADD ESP,0x4                         ; 004164d3
    MOV ECX,dword ptr [EDI + 0x744]     ; 004164d6
    ADD ESI,0x2a8                       ; 004164dc
    CMP EBX,ECX                         ; 004164e2
    JL 0x004164cc                       ; 004164e4
        ;   XREF to: 004164cc (CONDITIONAL_JUMP)  ; LAB_004164cc
    POP ESI                             ; 004164e6
    MOV EAX,0x1                         ; 004164e7
        ;   Label: LAB_004164e7
    POP EBX                             ; 004164ec
    POP EBP                             ; 004164ed
    POP EDI                             ; 004164ee
    RET                                 ; 004164ef
    XOR EAX,EAX                         ; 004164f0
        ;   Label: LAB_004164f0
    POP EBP                             ; 004164f2
    POP EDI                             ; 004164f3
    RET                                 ; 004164f4

