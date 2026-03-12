; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_applyRotation_FUN_0043e1a0(CCloth *this_ptr,CVector3f *euler)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   euler
; Local Variables:
; CMatrix3x3f      Stack[-0x5c]:36  local_5c
; CVector3f        Stack[-0x34]:12  local_34
; CVector3f        Stack[-0x28]:12  local_28
; CVector3f        Stack[-0x1c]:12  local_1c
;
; XREF[1]:
;   core_cloth.cpp_CClothList_applyRotation_FUN_0043c3a0 at 0043c3c2
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e1a0
        ;   Label: core_cloth.cpp_CCloth_applyRotation_FUN_0043e1a0
    PUSH ESI                            ; 0043e1a1
    PUSH EDI                            ; 0043e1a2
    PUSH EBP                            ; 0043e1a3
    SUB ESP,0x4c                        ; 0043e1a4
    MOV EBX,dword ptr [ESP + 0x64]      ; 0043e1a7
    MOV EAX,dword ptr [ESP + 0x60]      ; 0043e1ab
    FLD float ptr [EBX]                 ; 0043e1af
    FSUB float ptr [EAX + 0x3fe54]      ; 0043e1b1
    FSTP float ptr [ESP + 0x28]         ; 0043e1b7
    FLD float ptr [EBX + 0x4]           ; 0043e1bb
    FSUB float ptr [EAX + 0x3fe58]      ; 0043e1be
    FSTP float ptr [ESP + 0x2c]         ; 0043e1c4
    FLD float ptr [EBX + 0x8]           ; 0043e1c8
    FSUB float ptr [EAX + 0x3fe5c]      ; 0043e1cb
    ADD EAX,0x3fe54                     ; 0043e1d1
    FSTP float ptr [ESP + 0x30]         ; 0043e1d6
    CMP EAX,EBX                         ; 0043e1da
    JZ 0x0043e1ee                       ; 0043e1dc
        ;   XREF to: 0043e1ee (CONDITIONAL_JUMP)  ; LAB_0043e1ee
    MOV EDX,dword ptr [EBX]             ; 0043e1de
    MOV dword ptr [EAX],EDX             ; 0043e1e0
    MOV EDX,dword ptr [EBX + 0x4]       ; 0043e1e2
    MOV dword ptr [EAX + 0x4],EDX       ; 0043e1e5
    MOV EDX,dword ptr [EBX + 0x8]       ; 0043e1e8
    MOV dword ptr [EAX + 0x8],EDX       ; 0043e1eb
    LEA EAX,[ESP + 0x28]                ; 0043e1ee
        ;   Label: LAB_0043e1ee
    PUSH EAX                            ; 0043e1f2
    LEA EAX,[ESP + 0x4]                 ; 0043e1f3
    PUSH EAX                            ; 0043e1f7
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0043e1f8
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0043e1fd
    MOV EAX,dword ptr [ESP + 0x60]      ; 0043e200
    MOV EDX,dword ptr [EAX + 0x104]     ; 0043e204
    XOR EDI,EDI                         ; 0043e20a
    TEST EDX,EDX                        ; 0043e20c
    JLE 0x0043e290                      ; 0043e20e
        ;   XREF to: 0043e290 (CONDITIONAL_JUMP)  ; LAB_0043e290
    LEA EBP,[EAX + 0x56d8]              ; 0043e214
    LEA EBX,[EBP + 0x24]                ; 0043e21a
    IMUL ESI,EDI,0x11c                  ; 0043e21d
        ;   Label: LAB_0043e21d
    ADD ESI,EBP                         ; 0043e223
    PUSH ESI                            ; 0043e225
    LEA EAX,[ESP + 0x38]                ; 0043e226
    PUSH EAX                            ; 0043e22a
    LEA EAX,[ESP + 0x8]                 ; 0043e22b
    PUSH EAX                            ; 0043e22f
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0043e230
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0043e235
    CMP ESI,EAX                         ; 0043e238
    JZ 0x0043e24c                       ; 0043e23a
        ;   XREF to: 0043e24c (CONDITIONAL_JUMP)  ; LAB_0043e24c
    MOV EDX,dword ptr [EAX]             ; 0043e23c
    MOV dword ptr [ESI],EDX             ; 0043e23e
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043e240
    MOV dword ptr [ESI + 0x4],EDX       ; 0043e243
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043e246
    MOV dword ptr [ESI + 0x8],EDX       ; 0043e249
    IMUL EAX,EDI,0x11c                  ; 0043e24c
        ;   Label: LAB_0043e24c
    ADD EAX,EBP                         ; 0043e252
    PUSH EAX                            ; 0043e254
    LEA EAX,[ESP + 0x44]                ; 0043e255
    PUSH EAX                            ; 0043e259
    LEA EAX,[ESP + 0x8]                 ; 0043e25a
    PUSH EAX                            ; 0043e25e
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0043e25f
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0043e264
    CMP EBX,EAX                         ; 0043e267
    JZ 0x0043e27b                       ; 0043e269
        ;   XREF to: 0043e27b (CONDITIONAL_JUMP)  ; LAB_0043e27b
    MOV EDX,dword ptr [EAX]             ; 0043e26b
    MOV dword ptr [EBX],EDX             ; 0043e26d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043e26f
    MOV dword ptr [EBX + 0x4],EDX       ; 0043e272
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043e275
    MOV dword ptr [EBX + 0x8],EDX       ; 0043e278
    MOV EAX,dword ptr [ESP + 0x60]      ; 0043e27b
        ;   Label: LAB_0043e27b
    INC EDI                             ; 0043e27f
    MOV ECX,dword ptr [EAX + 0x104]     ; 0043e280
    ADD EBX,0x11c                       ; 0043e286
    CMP EDI,ECX                         ; 0043e28c
    JL 0x0043e21d                       ; 0043e28e
        ;   XREF to: 0043e21d (CONDITIONAL_JUMP)  ; LAB_0043e21d
    ADD ESP,0x4c                        ; 0043e290
        ;   Label: LAB_0043e290
    POP EBP                             ; 0043e293
    POP EDI                             ; 0043e294
    POP ESI                             ; 0043e295
    POP EBX                             ; 0043e296
    RET                                 ; 0043e297

