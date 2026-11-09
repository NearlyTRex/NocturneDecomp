; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __cdecl core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00460f60(CKeyFramedModel *this_ptr,int frame_index)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
;
; XREF[3]:
;   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_00460fa0 at 00460fbc
;   core_dmodel.cpp_FUN_004618a0 at 00461942
;   core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004f9df0 at 004f9e1a
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00460f60
        ;   Label: core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00460f60
    MOV EAX,dword ptr [ESP + 0x8]       ; 00460f64
    MOV EDX,dword ptr [ECX + 0x100]     ; 00460f68
    CMP EAX,EDX                         ; 00460f6e
    JL 0x00460f75                       ; 00460f70
        ;   XREF to: 00460f75 (CONDITIONAL_JUMP)  ; LAB_00460f75
    LEA EAX,[EDX + -0x1]                ; 00460f72
    TEST EAX,EAX                        ; 00460f75
        ;   Label: LAB_00460f75
    JL 0x00460f9b                       ; 00460f77
        ;   XREF to: 00460f9b (CONDITIONAL_JUMP)  ; LAB_00460f9b
    MOV EDX,dword ptr [ECX + 0x104]     ; 00460f79
        ;   Label: LAB_00460f79
    IMUL EDX,EAX                        ; 00460f7f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00460f82
    SUB EAX,EDX                         ; 00460f89
    LEA EDX,[EAX*0x4 + 0x0]             ; 00460f8b
    MOV EAX,dword ptr [ECX + 0x10c]     ; 00460f92
    ADD EAX,EDX                         ; 00460f98
    RET                                 ; 00460f9a
    XOR EAX,EAX                         ; 00460f9b
        ;   Label: LAB_00460f9b
    JMP 0x00460f79                      ; 00460f9d
        ;   XREF to: 00460f79 (UNCONDITIONAL_JUMP)  ; LAB_00460f79

