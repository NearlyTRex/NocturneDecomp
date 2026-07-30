; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_boneguy_cpp_CBoneGuy_renderTransparent_FUN_00419c20(CCharacter *param_1)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
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
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419c20
        ;   Label: core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_00419c20
    PUSH EBP                            ; 00419c21
    SUB ESP,0x18                        ; 00419c22
    MOV EBX,dword ptr [ESP + 0x24]      ; 00419c25
    CMP dword ptr [EBX + 0x2404],0x0    ; 00419c29
    JZ 0x00419c3a                       ; 00419c30
        ;   XREF to: 00419c3a (CONDITIONAL_JUMP)  ; LAB_00419c3a
    XOR EAX,EAX                         ; 00419c32
    ADD ESP,0x18                        ; 00419c34
    POP EBP                             ; 00419c37
    POP EBX                             ; 00419c38
    RET                                 ; 00419c39
    PUSH ESI                            ; 00419c3a
        ;   Label: LAB_00419c3a
    PUSH EBX                            ; 00419c3b
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00419c3c
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 00419c41
    PUSH 0x0                            ; 00419c44
    LEA EAX,[ESP + 0x8]                 ; 00419c46
    PUSH EAX                            ; 00419c4a
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00419c4b
    PUSH EBX                            ; 00419c51
    CALL dword ptr [EDX + 0x14]         ; 00419c52
    ADD ESP,0x8                         ; 00419c55
    PUSH EAX                            ; 00419c58
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00419c59
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 00419c5e
    MOV ESI,EAX                         ; 00419c61
    TEST EAX,EAX                        ; 00419c63
    JZ 0x00419cc4                       ; 00419c65
        ;   XREF to: 00419cc4 (CONDITIONAL_JUMP)  ; LAB_00419cc4
    PUSH EDI                            ; 00419c67
    PUSH 0x0                            ; 00419c68
    MOV ECX,dword ptr [0x005ae704]      ; 00419c6a | DAT_005ae704
    PUSH ECX                            ; 00419c70 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0 ; 00419c71
        ;   XREF to: 004619f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 00419c76
    PUSH 0xffff                         ; 00419c79
    MOV EDI,dword ptr [0x005ae704]      ; 00419c7e | DAT_005ae704
    MOV EAX,[0x005be368]                ; 00419c84 | DAT_005be368
    PUSH EDI                            ; 00419c89 | DAT_01b4d738
    MOV dword ptr [EAX + 0x15a8a0],0x1  ; 00419c8a | DAT_01fb1b24
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00419c94
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00419c99
    PUSH EBX                            ; 00419c9c
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20 ; 00419c9d
        ;   XREF to: 00425c20 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00419ca2
    MOV EBP,dword ptr [0x005ae704]      ; 00419ca5 | DAT_005ae704
    MOV EAX,[0x005be368]                ; 00419cab | DAT_005be368
    PUSH EBP                            ; 00419cb0 | DAT_01b4d738
    MOV dword ptr [EAX + 0x15a8a0],0x0  ; 00419cb1 | DAT_01fb1b24
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0 ; 00419cbb
        ;   XREF to: 00461db0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00419cc0
    POP EDI                             ; 00419cc3
    PUSH EBX                            ; 00419cc4
        ;   Label: LAB_00419cc4
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00419cc5
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00419cca
    MOV EAX,ESI                         ; 00419ccd
    POP ESI                             ; 00419ccf
    ADD ESP,0x18                        ; 00419cd0
    POP EBP                             ; 00419cd3
    POP EBX                             ; 00419cd4
    RET                                 ; 00419cd5

