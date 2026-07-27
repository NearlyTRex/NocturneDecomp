; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_crate_cpp_FUN_0043cbc0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043cbc0
        ;   Label: core_crate.cpp_FUN_0043cbc0
    PUSH ESI                            ; 0043cbc1
    SUB ESP,0x18                        ; 0043cbc2
    MOV EBX,dword ptr [ESP + 0x24]      ; 0043cbc5
    LEA EAX,[EBX + 0x20]                ; 0043cbc9
    PUSH EAX                            ; 0043cbcc
    MOV EDX,dword ptr [0x005ae704]      ; 0043cbcd | DAT_005ae704
    PUSH EDX                            ; 0043cbd3 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 0043cbd4
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00()
    ADD ESP,0x8                         ; 0043cbd9
    PUSH 0x0                            ; 0043cbdc
    LEA EAX,[EBX + 0x30]                ; 0043cbde
    PUSH EAX                            ; 0043cbe1
    MOV ECX,dword ptr [0x005ae704]      ; 0043cbe2 | DAT_005ae704
    PUSH ECX                            ; 0043cbe8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0043cbe9
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0()
    ADD ESP,0xc                         ; 0043cbee
    PUSH 0x0                            ; 0043cbf1
    LEA EAX,[ESP + 0x4]                 ; 0043cbf3
    PUSH EAX                            ; 0043cbf7
    MOV ESI,dword ptr [EBX + 0x14c]     ; 0043cbf8
    PUSH EBX                            ; 0043cbfe
    CALL dword ptr [ESI + 0x14]         ; 0043cbff
    ADD ESP,0x8                         ; 0043cc02
    PUSH EAX                            ; 0043cc05
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0043cc06
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 0043cc0b
    MOV ESI,EAX                         ; 0043cc0e
    TEST EAX,EAX                        ; 0043cc10
    JNZ 0x0043cc31                      ; 0043cc12
        ;   XREF to: 0043cc31 (CONDITIONAL_JUMP)  ; LAB_0043cc31
    MOV EBX,dword ptr [0x005ae704]      ; 0043cc14 | DAT_005ae704
        ;   Label: LAB_0043cc14
    PUSH EBX                            ; 0043cc1a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0043cc1b
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0043cc20
    MOV EAX,ESI                         ; 0043cc23
    ADD ESP,0x18                        ; 0043cc25
    POP ESI                             ; 0043cc28
    POP EBX                             ; 0043cc29
    LEA EAX,[EAX]                       ; 0043cc2a
    PUSH -0x1                           ; 0043cc31
        ;   Label: LAB_0043cc31
    ADD EBX,0x150                       ; 0043cc33
    PUSH 0x0                            ; 0043cc39
    PUSH EBX                            ; 0043cc3b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0043cc3c
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0()
    ADD ESP,0xc                         ; 0043cc41
    JMP 0x0043cc14                      ; 0043cc44
        ;   XREF to: 0043cc14 (UNCONDITIONAL_JUMP)  ; LAB_0043cc14

