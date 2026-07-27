; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_tvbat_cpp_FUN_0054bfd0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054bfd0
        ;   Label: core_tvbat.cpp_FUN_0054bfd0
    SUB ESP,0x18                        ; 0054bfd1
    MOV EBX,dword ptr [ESP + 0x20]      ; 0054bfd4
    CMP dword ptr [EBX + 0xbee0],0x3    ; 0054bfd8
    JNZ 0x0054bfe8                      ; 0054bfdf
        ;   XREF to: 0054bfe8 (CONDITIONAL_JUMP)  ; LAB_0054bfe8
    XOR EAX,EAX                         ; 0054bfe1
    ADD ESP,0x18                        ; 0054bfe3
    POP EBX                             ; 0054bfe6
    RET                                 ; 0054bfe7
    PUSH ESI                            ; 0054bfe8
        ;   Label: LAB_0054bfe8
    PUSH EBX                            ; 0054bfe9
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0054bfea
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    ADD ESP,0x4                         ; 0054bfef
    PUSH 0x0                            ; 0054bff2
    LEA EAX,[ESP + 0x8]                 ; 0054bff4
    PUSH EAX                            ; 0054bff8
    MOV ESI,dword ptr [EBX + 0x14c]     ; 0054bff9
    PUSH EBX                            ; 0054bfff
    CALL dword ptr [ESI + 0x14]         ; 0054c000
    ADD ESP,0x8                         ; 0054c003
    PUSH EAX                            ; 0054c006
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0054c007
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 0054c00c
    MOV ESI,EAX                         ; 0054c00f
    TEST EAX,EAX                        ; 0054c011
    JZ 0x0054c02c                       ; 0054c013
        ;   XREF to: 0054c02c (CONDITIONAL_JUMP)  ; LAB_0054c02c
    PUSH -0x1                           ; 0054c015
    LEA EAX,[EBX + 0xbd28]              ; 0054c017
    PUSH dword ptr [EBX + 0xbd24]       ; 0054c01d
    PUSH EAX                            ; 0054c023
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0054c024
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0()
    ADD ESP,0xc                         ; 0054c029
    PUSH EBX                            ; 0054c02c
        ;   Label: LAB_0054c02c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0054c02d
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 0054c032
    MOV EAX,ESI                         ; 0054c035
    POP ESI                             ; 0054c037
    ADD ESP,0x18                        ; 0054c038
    POP EBX                             ; 0054c03b
    RET                                 ; 0054c03c

