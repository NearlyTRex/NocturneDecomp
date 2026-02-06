; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cloth_cpp_CCloth_deleteCollisionBone_FUN_0043c3a0(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_cloth.cpp_CCloth_applyRotation_FUN_0043e1a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c3a0
        ;   Label: core_cloth.cpp_CCloth_deleteCollisionBone_FUN_0043c3a0
    PUSH EDI                            ; 0043c3a1
    PUSH EBP                            ; 0043c3a2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0043c3a3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0043c3a7
    MOV EDX,dword ptr [EDI]             ; 0043c3ab
    XOR EBX,EBX                         ; 0043c3ad
    TEST EDX,EDX                        ; 0043c3af
    JLE 0x0043c3d1                      ; 0043c3b1
        ;   XREF to: 0043c3d1 (CONDITIONAL_JUMP)  ; LAB_0043c3d1
    PUSH ESI                            ; 0043c3b3
    MOV ESI,EDI                         ; 0043c3b4
    PUSH EBP                            ; 0043c3b6
        ;   Label: LAB_0043c3b6
    MOV ECX,dword ptr [ESI + 0x194]     ; 0043c3b7
    PUSH ECX                            ; 0043c3bd
    ADD ESI,0x4                         ; 0043c3be
    INC EBX                             ; 0043c3c1
    CALL core_cloth.cpp_CCloth_applyRotation_FUN_0043e1a0 ; 0043c3c2
        ;   XREF to: 0043e1a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_applyRotation_FUN_0043e1a0(CCloth * this_ptr, CVector3f * euler)
    MOV EAX,dword ptr [EDI]             ; 0043c3c7
    ADD ESP,0x8                         ; 0043c3c9
    CMP EBX,EAX                         ; 0043c3cc
    JL 0x0043c3b6                       ; 0043c3ce
        ;   XREF to: 0043c3b6 (CONDITIONAL_JUMP)  ; LAB_0043c3b6
    POP ESI                             ; 0043c3d0
    POP EBP                             ; 0043c3d1
        ;   Label: LAB_0043c3d1
    POP EDI                             ; 0043c3d2
    POP EBX                             ; 0043c3d3
    RET                                 ; 0043c3d4

