; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f6c60(int param_1)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6c60
        ;   Label: FUN_004f6c60
    PUSH ESI                            ; 004f6c61
    PUSH EDI                            ; 004f6c62
    PUSH EBP                            ; 004f6c63
    SUB ESP,0x30                        ; 004f6c64
    MOV EBX,dword ptr [ESP + 0x44]      ; 004f6c67
    MOV EDX,dword ptr [0x005ae704]      ; 004f6c6b | DAT_005ae704
    PUSH EDX                            ; 004f6c71 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004f6c72
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 004f6c77
    TEST EAX,EAX                        ; 004f6c7a
    JZ 0x004f6c8b                       ; 004f6c7c
        ;   XREF to: 004f6c8b (CONDITIONAL_JUMP)  ; LAB_004f6c8b
    CMP dword ptr [EBX + 0x510],0x0     ; 004f6c7e
    JZ 0x004f6d41                       ; 004f6c85
        ;   XREF to: 004f6d41 (CONDITIONAL_JUMP)  ; LAB_004f6d41
    CMP dword ptr [EBX + 0x4b8],0x2     ; 004f6c8b
        ;   Label: LAB_004f6c8b
    JG 0x004f6d45                       ; 004f6c92
        ;   XREF to: 004f6d45 (CONDITIONAL_JUMP)  ; LAB_004f6d45
    CMP dword ptr [EBX + 0x4c0],0x0     ; 004f6c98
        ;   Label: LAB_004f6c98
    JZ 0x004f6ccd                       ; 004f6c9f
        ;   XREF to: 004f6ccd (CONDITIONAL_JUMP)  ; LAB_004f6ccd
    MOV EAX,dword ptr [EBX + 0x2cc]     ; 004f6ca1
    CMP EAX,0x3                         ; 004f6ca7
    JZ 0x004f6ccd                       ; 004f6caa
        ;   XREF to: 004f6ccd (CONDITIONAL_JUMP)  ; LAB_004f6ccd
    CMP EAX,0x4                         ; 004f6cac
    JZ 0x004f6ccd                       ; 004f6caf
        ;   XREF to: 004f6ccd (CONDITIONAL_JUMP)  ; LAB_004f6ccd
    CMP dword ptr [EBX + 0x71c],0x0     ; 004f6cb1
    JZ 0x004f6ccd                       ; 004f6cb8
        ;   XREF to: 004f6ccd (CONDITIONAL_JUMP)  ; LAB_004f6ccd
    MOV ESI,dword ptr [0x005ae704]      ; 004f6cba | DAT_005ae704
    PUSH ESI                            ; 004f6cc0 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004f6cc1
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 004f6cc6
    TEST EAX,EAX                        ; 004f6cc9
    JZ 0x004f6d39                       ; 004f6ccb
        ;   XREF to: 004f6d39 (CONDITIONAL_JUMP)  ; LAB_004f6d39
    PUSH EBX                            ; 004f6ccd
        ;   Label: LAB_004f6ccd
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004f6cce
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    ADD ESP,0x4                         ; 004f6cd3
    PUSH 0x0                            ; 004f6cd6
    LEA EDX,[ESP + 0x1c]                ; 004f6cd8
    PUSH EDX                            ; 004f6cdc
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004f6cdd
    PUSH EBX                            ; 004f6ce3
    CALL dword ptr [EAX + 0x14]         ; 004f6ce4
    ADD ESP,0x8                         ; 004f6ce7
    PUSH EAX                            ; 004f6cea
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004f6ceb
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 004f6cf0
    MOV ESI,EAX                         ; 004f6cf3
    TEST EAX,EAX                        ; 004f6cf5
    JZ 0x004f6d2e                       ; 004f6cf7
        ;   XREF to: 004f6d2e (CONDITIONAL_JUMP)  ; LAB_004f6d2e
    CMP dword ptr [EBX + 0x504],0x0     ; 004f6cf9
    JZ 0x004f6d5e                       ; 004f6d00
        ;   XREF to: 004f6d5e (CONDITIONAL_JUMP)  ; LAB_004f6d5e
    MOV EBP,dword ptr [0x005ae704]      ; 004f6d02 | DAT_005ae704
    PUSH EBP                            ; 004f6d08 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004f6d09
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 004f6d0e
    TEST EAX,EAX                        ; 004f6d11
    JZ 0x004f6d5e                       ; 004f6d13
        ;   XREF to: 004f6d5e (CONDITIONAL_JUMP)  ; LAB_004f6d5e
    MOV EDX,ESP                         ; 004f6d15
    PUSH EDX                            ; 004f6d17
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004f6d18
    PUSH EBX                            ; 004f6d1e
    CALL dword ptr [EAX + 0x14]         ; 004f6d1f
    ADD ESP,0x8                         ; 004f6d22
    PUSH EAX                            ; 004f6d25
    CALL core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0 ; 004f6d26
        ;   XREF to: 0041dcc0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0()
    ADD ESP,0x4                         ; 004f6d2b
    PUSH EBX                            ; 004f6d2e
        ;   Label: LAB_004f6d2e
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004f6d2f
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 004f6d34
    MOV EAX,ESI                         ; 004f6d37
    ADD ESP,0x30                        ; 004f6d39
        ;   Label: LAB_004f6d39
    POP EBP                             ; 004f6d3c
    POP EDI                             ; 004f6d3d
    POP ESI                             ; 004f6d3e
    POP EBX                             ; 004f6d3f
    RET                                 ; 004f6d40
    XOR EAX,EAX                         ; 004f6d41
        ;   Label: LAB_004f6d41
    JMP 0x004f6d39                      ; 004f6d43
        ;   XREF to: 004f6d39 (UNCONDITIONAL_JUMP)  ; LAB_004f6d39
    MOV EDI,dword ptr [0x005ae704]      ; 004f6d45 | DAT_005ae704
        ;   Label: LAB_004f6d45
    PUSH EDI                            ; 004f6d4b | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004f6d4c
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 004f6d51
    TEST EAX,EAX                        ; 004f6d54
    JNZ 0x004f6c98                      ; 004f6d56
        ;   XREF to: 004f6c98 (CONDITIONAL_JUMP)  ; LAB_004f6c98
    JMP 0x004f6d39                      ; 004f6d5c
        ;   XREF to: 004f6d39 (UNCONDITIONAL_JUMP)  ; LAB_004f6d39
    PUSH -0x1                           ; 004f6d5e
        ;   Label: LAB_004f6d5e
    LEA EAX,[EBX + 0x150]               ; 004f6d60
    PUSH 0x0                            ; 004f6d66
    PUSH EAX                            ; 004f6d68
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 004f6d69
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0()
    ADD ESP,0xc                         ; 004f6d6e
    PUSH EBX                            ; 004f6d71
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004f6d72
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 004f6d77
    MOV EAX,ESI                         ; 004f6d7a
    ADD ESP,0x30                        ; 004f6d7c
    POP EBP                             ; 004f6d7f
    POP EDI                             ; 004f6d80
    POP ESI                             ; 004f6d81
    POP EBX                             ; 004f6d82
    RET                                 ; 004f6d83

