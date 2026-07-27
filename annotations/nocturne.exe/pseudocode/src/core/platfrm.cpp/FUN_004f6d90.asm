; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_platfrm_cpp_FUN_004f6d90(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
;
; Referenced Globals:
;   undefined4 DAT_005a1360
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b7650
;   undefined4 DAT_005be368
;   undefined4 DAT_007f7370
;   undefined4 DAT_014b7190
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01fb1b14
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6d90
        ;   Label: core_platfrm.cpp_FUN_004f6d90
    PUSH ESI                            ; 004f6d91
    SUB ESP,0x24                        ; 004f6d92
    MOV ESI,dword ptr [ESP + 0x30]      ; 004f6d95
    MOV EDX,dword ptr [0x005ae704]      ; 004f6d99 | DAT_005ae704
    PUSH EDX                            ; 004f6d9f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004f6da0
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 004f6da5
    TEST EAX,EAX                        ; 004f6da8
    JNZ 0x004f6dde                      ; 004f6daa
        ;   XREF to: 004f6dde (CONDITIONAL_JUMP)  ; LAB_004f6dde
    CMP dword ptr [ESP + 0x34],0x0      ; 004f6dac
    JZ 0x004f6dde                       ; 004f6db1
        ;   XREF to: 004f6dde (CONDITIONAL_JUMP)  ; LAB_004f6dde
    CMP dword ptr [ESI + 0x4b8],0x2     ; 004f6db3
    JGE 0x004f6dc5                      ; 004f6dba
        ;   XREF to: 004f6dc5 (CONDITIONAL_JUMP)  ; LAB_004f6dc5
    CMP dword ptr [ESI + 0x4c0],0x0     ; 004f6dbc
    JZ 0x004f6dde                       ; 004f6dc3
        ;   XREF to: 004f6dde (CONDITIONAL_JUMP)  ; LAB_004f6dde
    CMP dword ptr [ESI + 0x4c0],0x0     ; 004f6dc5
        ;   Label: LAB_004f6dc5
    JZ 0x004f6e18                       ; 004f6dcc
        ;   XREF to: 004f6e18 (CONDITIONAL_JUMP)  ; LAB_004f6e18
    MOV EAX,dword ptr [ESI + 0x2cc]     ; 004f6dce
    CMP EAX,0x3                         ; 004f6dd4
    JZ 0x004f6dde                       ; 004f6dd7
        ;   XREF to: 004f6dde (CONDITIONAL_JUMP)  ; LAB_004f6dde
    CMP EAX,0x4                         ; 004f6dd9
    JNZ 0x004f6de4                      ; 004f6ddc
        ;   XREF to: 004f6de4 (CONDITIONAL_JUMP)  ; LAB_004f6de4
    ADD ESP,0x24                        ; 004f6dde
        ;   Label: LAB_004f6dde
    POP ESI                             ; 004f6de1
    POP EBX                             ; 004f6de2
    RET                                 ; 004f6de3
    LEA EAX,[ESI + 0x3b0]               ; 004f6de4
        ;   Label: LAB_004f6de4
    PUSH EAX                            ; 004f6dea
    MOV ECX,dword ptr [0x005b7650]      ; 004f6deb | DAT_005b7650
    PUSH ECX                            ; 004f6df1
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004f6df2
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 004f6df7
    TEST EAX,EAX                        ; 004f6dfa
    JNZ 0x004f6dde                      ; 004f6dfc
        ;   XREF to: 004f6dde (CONDITIONAL_JUMP)  ; LAB_004f6dde
    LEA EAX,[ESI + 0x34c]               ; 004f6dfe
    PUSH EAX                            ; 004f6e04
    MOV EBX,dword ptr [0x005b7650]      ; 004f6e05 | DAT_005b7650
    PUSH EBX                            ; 004f6e0b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004f6e0c
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 004f6e11
    TEST EAX,EAX                        ; 004f6e14
    JNZ 0x004f6dde                      ; 004f6e16
        ;   XREF to: 004f6dde (CONDITIONAL_JUMP)  ; LAB_004f6dde
    PUSH EDI                            ; 004f6e18
        ;   Label: LAB_004f6e18
    MOV EDI,dword ptr [0x005ae704]      ; 004f6e19 | DAT_005ae704
    PUSH EDI                            ; 004f6e1f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004f6e20
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 004f6e25
    TEST EAX,EAX                        ; 004f6e28
    JNZ 0x004f6e43                      ; 004f6e2a
        ;   XREF to: 004f6e43 (CONDITIONAL_JUMP)  ; LAB_004f6e43
    CMP dword ptr [ESI + 0x4c0],0x0     ; 004f6e2c
    JNZ 0x004f6f1a                      ; 004f6e33
        ;   XREF to: 004f6f1a (CONDITIONAL_JUMP)  ; LAB_004f6f1a
    MOV dword ptr [ESI + 0x4b8],0x3     ; 004f6e39
    PUSH ESI                            ; 004f6e43
        ;   Label: LAB_004f6e43
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004f6e44
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    ADD ESP,0x4                         ; 004f6e49
    PUSH 0x0                            ; 004f6e4c
    LEA EBX,[ESP + 0x8]                 ; 004f6e4e
    PUSH EBX                            ; 004f6e52
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004f6e53
    PUSH ESI                            ; 004f6e59
    CALL dword ptr [EAX + 0x14]         ; 004f6e5a
    ADD ESP,0x8                         ; 004f6e5d
    PUSH EAX                            ; 004f6e60
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004f6e61
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 004f6e66
    TEST EAX,EAX                        ; 004f6e69
    JZ 0x004f6f0a                       ; 004f6e6b
        ;   XREF to: 004f6f0a (CONDITIONAL_JUMP)  ; LAB_004f6f0a
    CMP dword ptr [ESI + 0x50c],0x0     ; 004f6e71
    JZ 0x004f6f29                       ; 004f6e78
        ;   XREF to: 004f6f29 (CONDITIONAL_JUMP)  ; LAB_004f6f29
    MOV EDX,dword ptr [0x005ae704]      ; 004f6e7e | DAT_005ae704
    PUSH EDX                            ; 004f6e84 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004f6e85
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 004f6e8a
    TEST EAX,EAX                        ; 004f6e8d
    JNZ 0x004f6f29                      ; 004f6e8f
        ;   XREF to: 004f6f29 (CONDITIONAL_JUMP)  ; LAB_004f6f29
    MOV EAX,[0x005be368]                ; 004f6e95 | DAT_005be368
    LEA EBX,[ESP + 0x1c]                ; 004f6e9a
    MOV dword ptr [EAX + 0x15a890],0x1  ; 004f6e9e | DAT_01fb1b14
    LEA EAX,[ESI + 0x20]                ; 004f6ea8
    FLD float ptr [EAX]                 ; 004f6eab
    FMUL float ptr [0x005a1360]         ; 004f6ead | DAT_005a1360
    FISTP dword ptr [EBX]               ; 004f6eb3
    FLD float ptr [EAX + 0x4]           ; 004f6eb5
    FMUL float ptr [0x005a1360]         ; 004f6eb8 | DAT_005a1360
    FISTP dword ptr [EBX + 0x4]         ; 004f6ebe
    FLD float ptr [EAX + 0x8]           ; 004f6ec1
    FMUL float ptr [0x005a1360]         ; 004f6ec4 | DAT_005a1360
    FISTP dword ptr [EBX + 0x8]         ; 004f6eca
    PUSH 0x0                            ; 004f6ecd
    LEA EAX,[ESP + 0x20]                ; 004f6ecf
    PUSH EAX                            ; 004f6ed3
    MOV ECX,dword ptr [0x007f7370]      ; 004f6ed4 | DAT_007f7370
    PUSH ECX                            ; 004f6eda
    CALL core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0 ; 004f6edb
        ;   XREF to: 004475a0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0()
    ADD ESP,0xc                         ; 004f6ee0
    PUSH -0x1                           ; 004f6ee3
    MOV [0x014b7190],EAX                ; 004f6ee5 | DAT_014b7190
    LEA EAX,[ESI + 0x150]               ; 004f6eea
    PUSH 0x0                            ; 004f6ef0
    PUSH EAX                            ; 004f6ef2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 004f6ef3
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0()
    MOV EAX,[0x005be368]                ; 004f6ef8 | DAT_005be368
    ADD ESP,0xc                         ; 004f6efd
    MOV dword ptr [EAX + 0x15a890],0x0  ; 004f6f00 | DAT_01fb1b14
    PUSH ESI                            ; 004f6f0a
        ;   Label: LAB_004f6f0a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004f6f0b
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 004f6f10
    POP EDI                             ; 004f6f13
    ADD ESP,0x24                        ; 004f6f14
    POP ESI                             ; 004f6f17
    POP EBX                             ; 004f6f18
    RET                                 ; 004f6f19
    MOV dword ptr [ESI + 0x71c],0x1     ; 004f6f1a
        ;   Label: LAB_004f6f1a
    JMP 0x004f6e43                      ; 004f6f24
        ;   XREF to: 004f6e43 (UNCONDITIONAL_JUMP)  ; LAB_004f6e43
    PUSH -0x1                           ; 004f6f29
        ;   Label: LAB_004f6f29
    LEA EAX,[ESI + 0x150]               ; 004f6f2b
    PUSH 0x0                            ; 004f6f31
    PUSH EAX                            ; 004f6f33
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 004f6f34
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0()
    ADD ESP,0xc                         ; 004f6f39
    PUSH ESI                            ; 004f6f3c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004f6f3d
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 004f6f42
    POP EDI                             ; 004f6f45
    ADD ESP,0x24                        ; 004f6f46
    POP ESI                             ; 004f6f49
    POP EBX                             ; 004f6f4a
    RET                                 ; 004f6f4b

