; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_ghoul_cpp_CGhoul_getTargetPoint_FUN_004e84a0(CGhoul *this_ptr,CVector3f *out_point)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
; Local Variables:
; CMatrix3x4f      Stack[-0x7c]:48  local_7c
; CMatrix3x4f      Stack[-0x4c]:48  local_4c
; CVector3f        Stack[-0x1c]:12  local_1c
;
; Referenced Globals:
;   int[11] g_GhoulIndices
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e84a0
        ;   Label: core_ghoul.cpp_CGhoul_getTargetPoint_FUN_004e84a0
    PUSH ESI                            ; 004e84a1
    PUSH EDI                            ; 004e84a2
    PUSH EBP                            ; 004e84a3
    MOV EBP,ESP                         ; 004e84a4
    SUB ESP,0x6c                        ; 004e84a6
    MOV EBX,dword ptr [EBP + 0x18]      ; 004e84a9
    MOV EDX,dword ptr [0x02d832fc]      ; 004e84ac | g_GhoulIndices
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e84b2
    PUSH EDX                            ; 004e84b5
    ADD ESI,0x158                       ; 004e84b6
    PUSH ESI                            ; 004e84bc
    LEA ESI,[EBP + -0x3c]               ; 004e84bd
    LEA EDI,[EBP + -0x6c]               ; 004e84c0
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820 ; 004e84c3
        ;   XREF to: 0059f820 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820(CDeformableModelInstance * this_ptr, int bone_index, CMatrix3x4f * out_matrix)
    JMP 0x03fc447a                      ; 004e84c8
        ;   XREF to: 03fc447a (UNCONDITIONAL_JUMP)  ; LAB_03fc447a
    ADD ESP,0x8                         ; 004e84d2
        ;   Label: LAB_004e84d2
    LEA ESI,[EBP + -0x6c]               ; 004e84d5
    PUSH ESI                            ; 004e84d8
    MOV dword ptr [EBP + -0x8],0x3f333333 ; 004e84d9
    LEA ESI,[EBP + -0xc]                ; 004e84e0
    PUSH ESI                            ; 004e84e3
    MOV EDI,0x3e99999a                  ; 004e84e4
    XOR ECX,ECX                         ; 004e84e9
    PUSH EBX                            ; 004e84eb
    MOV dword ptr [EBP + -0xc],ECX      ; 004e84ec
    MOV dword ptr [EBP + -0x4],EDI      ; 004e84ef
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 004e84f2
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 004e84f7
    MOV EAX,EBX                         ; 004e84fa
    MOV ESP,EBP                         ; 004e84fc
    POP EBP                             ; 004e84fe
    POP EDI                             ; 004e84ff
    POP ESI                             ; 004e8500
    POP EBX                             ; 004e8501
    RET                                 ; 004e8502
    MOV ECX,0xc                         ; 03fc447a
        ;   Label: LAB_03fc447a
    LEA ESI,[EBP + -0x3c]               ; 03fc447f
    MOV ECX,dword ptr [ESI]             ; 03fc4482
    MOV dword ptr [EDI],ECX             ; 03fc4484
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc4486
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc4489
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc448c
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc448f
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc4492
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc4495
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc4498
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc449b
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc449e
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc44a1
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc44a4
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc44a7
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc44aa
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc44ad
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc44b0
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc44b3
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc44b6
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc44b9
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc44bc
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc44bf
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc44c2
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc44c5
    ADD ESI,0x30                        ; 03fc44c8
    ADD EDI,0x30                        ; 03fc44cb
    XOR ECX,ECX                         ; 03fc44ce
    JMP 0x004e84d2                      ; 03fc44d0
        ;   XREF to: 004e84d2 (UNCONDITIONAL_JUMP)  ; LAB_004e84d2

