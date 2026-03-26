; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_bride_cpp_CBride_getTargetPoint_FUN_00424aa0(CBride *this_ptr,CVector3f *out_point)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
; Local Variables:
; CMatrix3x4f      Stack[-0x7c]:48  local_7c
; CMatrix3x4f      Stack[-0x4c]:48  local_4c
; CVector3f        Stack[-0x1c]:12  local_1c
;
; Referenced Globals:
;   int[11] g_BrideIndices
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424aa0
        ;   Label: core_bride.cpp_CBride_getTargetPoint_FUN_00424aa0
    PUSH ESI                            ; 00424aa1
    PUSH EDI                            ; 00424aa2
    PUSH EBP                            ; 00424aa3
    MOV EBP,ESP                         ; 00424aa4
    SUB ESP,0x6c                        ; 00424aa6
    MOV EBX,dword ptr [EBP + 0x18]      ; 00424aa9
    MOV EDX,dword ptr [0x00822cdc]      ; 00424aac | g_BrideIndices
    MOV ESI,dword ptr [EBP + 0x14]      ; 00424ab2
    PUSH EDX                            ; 00424ab5
    ADD ESI,0x158                       ; 00424ab6
    PUSH ESI                            ; 00424abc
    LEA ESI,[EBP + -0x3c]               ; 00424abd
    LEA EDI,[EBP + -0x6c]               ; 00424ac0
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820 ; 00424ac3
        ;   XREF to: 0059f820 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820(CDeformableModelInstance * this_ptr, int bone_index, CMatrix3x4f * out_matrix)
    JMP 0x03fc47ee                      ; 00424ac8
        ;   XREF to: 03fc47ee (UNCONDITIONAL_JUMP)  ; LAB_03fc47ee
    ADD ESP,0x8                         ; 00424ad2
        ;   Label: LAB_00424ad2
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
    MOV ECX,0xc                         ; 03fc47ee
        ;   Label: LAB_03fc47ee
    LEA ESI,[EBP + -0x3c]               ; 03fc47f3
    MOV ECX,dword ptr [ESI]             ; 03fc47f6
    MOV dword ptr [EDI],ECX             ; 03fc47f8
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc47fa
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc47fd
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc4800
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc4803
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc4806
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc4809
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc480c
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc480f
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc4812
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc4815
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc4818
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc481b
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc481e
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc4821
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc4824
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc4827
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc482a
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc482d
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc4830
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc4833
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc4836
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc4839
    ADD ESI,0x30                        ; 03fc483c
    ADD EDI,0x30                        ; 03fc483f
    XOR ECX,ECX                         ; 03fc4842
    JMP 0x00424ad2                      ; 03fc4844
        ;   XREF to: 00424ad2 (UNCONDITIONAL_JUMP)  ; LAB_00424ad2

