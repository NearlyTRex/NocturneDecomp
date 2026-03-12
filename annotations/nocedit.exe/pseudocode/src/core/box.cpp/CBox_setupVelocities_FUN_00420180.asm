; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_setupVelocities_FUN_00420180(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   linear_velocity
; CVector3f *      Stack[0xc]:4   angular_velocity
; Local Variables:
; CVector3f        Stack[-0x14]:12  local_14
;
; XREF[3]:
;   core_bodypart.cpp_CBodyPart_onDropped_FUN_00419fd0 at 0041a023
;   core_boxactor.cpp_CBoxActor_onDropped_FUN_004224f0 at 00422539
;   core_fire.cpp_CToss_create_FUN_004c3ee0 at 004c3fd1
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420180
        ;   Label: core_box.cpp_CBox_setupVelocities_FUN_00420180
    PUSH ESI                            ; 00420181
    SUB ESP,0xc                         ; 00420182
    MOV EBX,dword ptr [ESP + 0x18]      ; 00420185
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00420189
    MOV ESI,dword ptr [ESP + 0x20]      ; 0042018d
    TEST EDX,EDX                        ; 00420191
    JZ 0x004201d8                       ; 00420193
        ;   XREF to: 004201d8 (CONDITIONAL_JUMP)  ; LAB_004201d8
    LEA EAX,[EBX + 0x40]                ; 00420195
    CMP EAX,EDX                         ; 00420198
    JZ 0x004201ac                       ; 0042019a
        ;   XREF to: 004201ac (CONDITIONAL_JUMP)  ; LAB_004201ac
    MOV ECX,dword ptr [EDX]             ; 0042019c
    MOV dword ptr [EAX],ECX             ; 0042019e
    MOV ECX,dword ptr [EDX + 0x4]       ; 004201a0
    MOV dword ptr [EAX + 0x4],ECX       ; 004201a3
    MOV ECX,dword ptr [EDX + 0x8]       ; 004201a6
    MOV dword ptr [EAX + 0x8],ECX       ; 004201a9
    LEA EAX,[EBX + 0x40]                ; 004201ac
        ;   Label: LAB_004201ac
    PUSH EAX                            ; 004201af
    LEA EAX,[ESP + 0x4]                 ; 004201b0
    PUSH EAX                            ; 004201b4
    LEA EAX,[EBX + 0x18]                ; 004201b5
    PUSH EAX                            ; 004201b8
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 004201b9
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x4c]                ; 004201be
    ADD ESP,0xc                         ; 004201c1
    CMP EDX,EAX                         ; 004201c4
    JZ 0x004201d8                       ; 004201c6
        ;   XREF to: 004201d8 (CONDITIONAL_JUMP)  ; LAB_004201d8
    MOV ECX,dword ptr [EAX]             ; 004201c8
    MOV dword ptr [EDX],ECX             ; 004201ca
    MOV ECX,dword ptr [EAX + 0x4]       ; 004201cc
    MOV dword ptr [EDX + 0x4],ECX       ; 004201cf
    MOV ECX,dword ptr [EAX + 0x8]       ; 004201d2
    MOV dword ptr [EDX + 0x8],ECX       ; 004201d5
    TEST ESI,ESI                        ; 004201d8
        ;   Label: LAB_004201d8
    JZ 0x004201e3                       ; 004201da
        ;   XREF to: 004201e3 (CONDITIONAL_JUMP)  ; LAB_004201e3
    LEA EAX,[EBX + 0x70]                ; 004201dc
    CMP EAX,ESI                         ; 004201df
    JNZ 0x004201e9                      ; 004201e1
        ;   XREF to: 004201e9 (CONDITIONAL_JUMP)  ; LAB_004201e9
    ADD ESP,0xc                         ; 004201e3
        ;   Label: LAB_004201e3
    POP ESI                             ; 004201e6
    POP EBX                             ; 004201e7
    RET                                 ; 004201e8
    MOV EDX,dword ptr [ESI]             ; 004201e9
        ;   Label: LAB_004201e9
    MOV dword ptr [EAX],EDX             ; 004201eb
    MOV EDX,dword ptr [ESI + 0x4]       ; 004201ed
    MOV dword ptr [EAX + 0x4],EDX       ; 004201f0
    MOV EDX,dword ptr [ESI + 0x8]       ; 004201f3
    MOV dword ptr [EAX + 0x8],EDX       ; 004201f6
    ADD ESP,0xc                         ; 004201f9
    POP ESI                             ; 004201fc
    POP EBX                             ; 004201fd
    RET                                 ; 004201fe

