; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00553f50(int param_1)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; XREF[1]:
;   FUN_004113f0 at 004113f5
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553f50
        ;   Label: FUN_00553f50
    PUSH ESI                            ; 00553f51
    SUB ESP,0x18                        ; 00553f52
    MOV EBX,dword ptr [ESP + 0x24]      ; 00553f55
    PUSH EBX                            ; 00553f59
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00553f5a
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    ADD ESP,0x4                         ; 00553f5f
    PUSH 0x0                            ; 00553f62
    LEA EAX,[ESP + 0x4]                 ; 00553f64
    PUSH EAX                            ; 00553f68
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00553f69
    PUSH EBX                            ; 00553f6f
    CALL dword ptr [ESI + 0x14]         ; 00553f70
    ADD ESP,0x8                         ; 00553f73
    PUSH EAX                            ; 00553f76
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00553f77
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 00553f7c
    MOV ESI,EAX                         ; 00553f7f
    TEST EAX,EAX                        ; 00553f81
    JZ 0x00553f98                       ; 00553f83
        ;   XREF to: 00553f98 (CONDITIONAL_JUMP)  ; LAB_00553f98
    PUSH -0x1                           ; 00553f85
    LEA EAX,[EBX + 0x150]               ; 00553f87
    PUSH 0x0                            ; 00553f8d
    PUSH EAX                            ; 00553f8f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00553f90
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0()
    ADD ESP,0xc                         ; 00553f95
    PUSH EBX                            ; 00553f98
        ;   Label: LAB_00553f98
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00553f99
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 00553f9e
    MOV EDX,dword ptr [0x005ae704]      ; 00553fa1 | DAT_005ae704
    PUSH EDX                            ; 00553fa7 | DAT_01b4d738
    MOV dword ptr [EBX + 0x56c],0x0     ; 00553fa8
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00553fb2
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 00553fb7
    TEST EAX,EAX                        ; 00553fba
    JNZ 0x00553fc2                      ; 00553fbc
        ;   XREF to: 00553fc2 (CONDITIONAL_JUMP)  ; LAB_00553fc2
    TEST ESI,ESI                        ; 00553fbe
    JNZ 0x00553fca                      ; 00553fc0
        ;   XREF to: 00553fca (CONDITIONAL_JUMP)  ; LAB_00553fca
    MOV EAX,ESI                         ; 00553fc2
        ;   Label: LAB_00553fc2
    ADD ESP,0x18                        ; 00553fc4
    POP ESI                             ; 00553fc7
    POP EBX                             ; 00553fc8
    RET                                 ; 00553fc9
    MOV dword ptr [EBX + 0x56c],0x1     ; 00553fca
        ;   Label: LAB_00553fca
    MOV EAX,ESI                         ; 00553fd4
    ADD ESP,0x18                        ; 00553fd6
    POP ESI                             ; 00553fd9
    POP EBX                             ; 00553fda
    RET                                 ; 00553fdb

