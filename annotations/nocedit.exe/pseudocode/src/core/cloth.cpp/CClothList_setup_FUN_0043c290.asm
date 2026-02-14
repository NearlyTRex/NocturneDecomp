; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cloth_cpp_CClothList_setup_FUN_0043c290(CClothList *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler
; CDeformableModelInstance * Stack[0x10]:4   model_ptr
;
; XREF[1]:
;   core_succubus.cpp_CSuccubus_setup_FUN_005c6b60 at 005c6bec
;
; Called Functions:
;   core_cloth.cpp_CCloth_setup_FUN_00439710
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0043c290
        ;   Label: core_cloth.cpp_CClothList_setup_FUN_0043c290
    PUSH EDI                            ; 0043c291
    PUSH EBP                            ; 0043c292
    MOV EDI,dword ptr [ESP + 0x10]      ; 0043c293
    MOV EBP,dword ptr [ESP + 0x14]      ; 0043c297
    MOV EDX,dword ptr [EDI]             ; 0043c29b
    XOR ESI,ESI                         ; 0043c29d
    TEST EDX,EDX                        ; 0043c29f
    JLE 0x0043c2cb                      ; 0043c2a1
        ;   XREF to: 0043c2cb (CONDITIONAL_JUMP)  ; LAB_0043c2cb
    PUSH EBX                            ; 0043c2a3
    MOV EBX,EDI                         ; 0043c2a4
    MOV ECX,dword ptr [ESP + 0x20]      ; 0043c2a6
        ;   Label: LAB_0043c2a6
    PUSH ECX                            ; 0043c2aa
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043c2ab
    PUSH EAX                            ; 0043c2af
    PUSH EBP                            ; 0043c2b0
    MOV EDX,dword ptr [EBX + 0x194]     ; 0043c2b1
    PUSH EDX                            ; 0043c2b7
    ADD EBX,0x4                         ; 0043c2b8
    INC ESI                             ; 0043c2bb
    CALL core_cloth.cpp_CCloth_setup_FUN_00439710 ; 0043c2bc
        ;   XREF to: 00439710 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_setup_FUN_00439710(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    MOV ECX,dword ptr [EDI]             ; 0043c2c1
    ADD ESP,0x10                        ; 0043c2c3
    CMP ESI,ECX                         ; 0043c2c6
    JL 0x0043c2a6                       ; 0043c2c8
        ;   XREF to: 0043c2a6 (CONDITIONAL_JUMP)  ; LAB_0043c2a6
    POP EBX                             ; 0043c2ca
    POP EBP                             ; 0043c2cb
        ;   Label: LAB_0043c2cb
    POP EDI                             ; 0043c2cc
    POP ESI                             ; 0043c2cd
    RET                                 ; 0043c2ce

