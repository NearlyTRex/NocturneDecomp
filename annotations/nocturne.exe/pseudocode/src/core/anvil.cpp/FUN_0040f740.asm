; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_anvil_cpp_FUN_0040f740(int param_1)
;
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
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

    PUSH EBX                            ; 0040f740
        ;   Label: core_anvil.cpp_FUN_0040f740
    SUB ESP,0x18                        ; 0040f741
    MOV EBX,dword ptr [ESP + 0x20]      ; 0040f744
    CMP dword ptr [EBX + 0x334],0x0     ; 0040f748
    JNZ 0x0040f758                      ; 0040f74f
        ;   XREF to: 0040f758 (CONDITIONAL_JUMP)  ; LAB_0040f758
    XOR EAX,EAX                         ; 0040f751
    ADD ESP,0x18                        ; 0040f753
    POP EBX                             ; 0040f756
    RET                                 ; 0040f757
    PUSH EDI                            ; 0040f758
        ;   Label: LAB_0040f758
    PUSH ESI                            ; 0040f759
    LEA EAX,[EBX + 0x20]                ; 0040f75a
    PUSH EAX                            ; 0040f75d
    MOV ECX,dword ptr [0x005ae704]      ; 0040f75e | DAT_005ae704
    PUSH ECX                            ; 0040f764 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 0040f765
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00()
    ADD ESP,0x8                         ; 0040f76a
    PUSH 0x0                            ; 0040f76d
    LEA EAX,[EBX + 0x30]                ; 0040f76f
    PUSH EAX                            ; 0040f772
    MOV ESI,dword ptr [0x005ae704]      ; 0040f773 | DAT_005ae704
    PUSH ESI                            ; 0040f779 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0040f77a
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0()
    ADD ESP,0xc                         ; 0040f77f
    PUSH 0x0                            ; 0040f782
    LEA EAX,[ESP + 0xc]                 ; 0040f784
    PUSH EAX                            ; 0040f788
    MOV ESI,dword ptr [EBX + 0x14c]     ; 0040f789
    PUSH EBX                            ; 0040f78f
    CALL dword ptr [ESI + 0x14]         ; 0040f790
    ADD ESP,0x8                         ; 0040f793
    PUSH EAX                            ; 0040f796
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0040f797
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 0040f79c
    MOV ESI,EAX                         ; 0040f79f
    TEST EAX,EAX                        ; 0040f7a1
    JZ 0x0040f7b8                       ; 0040f7a3
        ;   XREF to: 0040f7b8 (CONDITIONAL_JUMP)  ; LAB_0040f7b8
    PUSH -0x1                           ; 0040f7a5
    ADD EBX,0x150                       ; 0040f7a7
    PUSH 0x0                            ; 0040f7ad
    PUSH EBX                            ; 0040f7af
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0040f7b0
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0()
    ADD ESP,0xc                         ; 0040f7b5
    MOV EDI,dword ptr [0x005ae704]      ; 0040f7b8 | DAT_005ae704
        ;   Label: LAB_0040f7b8
    PUSH EDI                            ; 0040f7be | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0040f7bf
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0040f7c4
    MOV EAX,ESI                         ; 0040f7c7
    POP ESI                             ; 0040f7c9
    POP EDI                             ; 0040f7ca
    ADD ESP,0x18                        ; 0040f7cb
    POP EBX                             ; 0040f7ce
    RET                                 ; 0040f7cf

