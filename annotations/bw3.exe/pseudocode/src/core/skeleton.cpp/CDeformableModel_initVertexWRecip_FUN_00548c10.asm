; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_00548c10(CDeformableModel *this_ptr,int lod_index,CVector3i *lod_vertices)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; CVector3i *      Stack[0xc]:4   lod_vertices
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_0054e550 at 0054e57a
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6e24c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548c10
        ;   Label: core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_00548c10
    PUSH ESI                            ; 00548c11
    PUSH EDI                            ; 00548c12
    PUSH EBP                            ; 00548c13
    MOV EDI,dword ptr [0x005f2afc]      ; 00548c14 | DAT_005f2afc
    MOV EBP,dword ptr [0x01c6e24c]      ; 00548c1a | DAT_01c6e24c
    MOV ESI,dword ptr [ESP + 0x18]      ; 00548c20
    MOV ECX,dword ptr [ESP + 0x14]      ; 00548c24
    SHL ESI,0x2                         ; 00548c28
    ADD ESI,ECX                         ; 00548c2b
    XOR EAX,EAX                         ; 00548c2d
    MOV EBX,dword ptr [ESI + 0x2c]      ; 00548c2f
    XOR EDX,EDX                         ; 00548c32
    TEST EBX,EBX                        ; 00548c34
    JLE 0x00548c50                      ; 00548c36
        ;   XREF to: 00548c50 (CONDITIONAL_JUMP)  ; LAB_00548c50
    MOV ECX,dword ptr [EDI]             ; 00548c38 | DAT_01bdd7e4
        ;   Label: LAB_00548c38
    MOV dword ptr [ECX + EAX*0x1 + 0x2c],EBP ; 00548c3a
    INC EDX                             ; 00548c3e
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00548c3f
    ADD EAX,0x30                        ; 00548c42
    CMP EDX,ECX                         ; 00548c45
    JL 0x00548c38                       ; 00548c47
        ;   XREF to: 00548c38 (CONDITIONAL_JUMP)  ; LAB_00548c38
    LEA EAX,[EAX]                       ; 00548c49
    NOP                                 ; 00548c4f
    MOV dword ptr [0x01c6e24c],EBP      ; 00548c50 | DAT_01c6e24c
        ;   Label: LAB_00548c50
    MOV dword ptr [0x005f2afc],EDI      ; 00548c56 | DAT_005f2afc
    POP EBP                             ; 00548c5c
    POP EDI                             ; 00548c5d
    POP ESI                             ; 00548c5e
    POP EBX                             ; 00548c5f
    RET                                 ; 00548c60

