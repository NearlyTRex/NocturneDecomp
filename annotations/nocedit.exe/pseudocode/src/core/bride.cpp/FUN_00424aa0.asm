; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bride.cpp_FUN_00424aa0()
;
; Local Variables:
; undefined1       Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_00822cdc
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424aa0
        ;   Label: core_bride.cpp_FUN_00424aa0
    PUSH ESI                            ; 00424aa1
    PUSH EDI                            ; 00424aa2
    PUSH EBP                            ; 00424aa3
    MOV EBP,ESP                         ; 00424aa4
    SUB ESP,0x6c                        ; 00424aa6
    MOV EBX,dword ptr [EBP + 0x18]      ; 00424aa9
    MOV EDX,dword ptr [0x00822cdc]      ; 00424aac | DAT_00822cdc
    MOV ESI,dword ptr [EBP + 0x14]      ; 00424ab2
    PUSH EDX                            ; 00424ab5
    ADD ESI,0x158                       ; 00424ab6
    PUSH ESI                            ; 00424abc
    LEA ESI,[EBP + -0x3c]               ; 00424abd
    LEA EDI,[EBP + -0x6c]               ; 00424ac0
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820 ; 00424ac3
        ;   XREF to: 0059f820 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820(CDeformableModelInstance * this_ptr, int bone_index, CMatrix3x4f * out_matrix)
    MOV ECX,0xc                         ; 00424ac8
    LEA ESI,[EBP + -0x3c]               ; 00424acd
    MOVSD.REP ES:EDI,ESI                ; 00424ad0
    ADD ESP,0x8                         ; 00424ad2
    LEA ESI,[EBP + -0x6c]               ; 00424ad5
    PUSH ESI                            ; 00424ad8
    MOV dword ptr [EBP + -0x8],0x3f333333 ; 00424ad9
    LEA ESI,[EBP + -0xc]                ; 00424ae0
    PUSH ESI                            ; 00424ae3
    MOV EDI,0x3e99999a                  ; 00424ae4
    XOR ECX,ECX                         ; 00424ae9
    PUSH EBX                            ; 00424aeb
    MOV dword ptr [EBP + -0xc],ECX      ; 00424aec
    MOV dword ptr [EBP + -0x4],EDI      ; 00424aef
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00424af2
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00424af7
    MOV EAX,EBX                         ; 00424afa
    MOV ESP,EBP                         ; 00424afc
    POP EBP                             ; 00424afe
    POP EDI                             ; 00424aff
    POP ESI                             ; 00424b00
    POP EBX                             ; 00424b01
    RET                                 ; 00424b02

