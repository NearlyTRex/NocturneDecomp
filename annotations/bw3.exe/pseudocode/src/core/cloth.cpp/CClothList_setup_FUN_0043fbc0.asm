; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_setup_FUN_0043fbc0(CClothList *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler
; CDeformableModelInstance * Stack[0x10]:4   model_ptr
;
; XREF[4]:
;   core_charactr.cpp_FUN_0042b0e0 at 0042b28d
;   core_spirbear.cpp_FUN_0059aba0 at 0059ac23
;   core_spireagl.cpp_FUN_005992f0 at 0059935f
;   core_spirindi.cpp_FUN_0059a060 at 0059a0e3
;
; Called Functions:
;   core_cloth.cpp_FUN_0043cb00
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0043fbc0
        ;   Label: core_cloth.cpp_CClothList_setup_FUN_0043fbc0
    PUSH EDI                            ; 0043fbc1
    PUSH EBP                            ; 0043fbc2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0043fbc3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0043fbc7
    MOV EDX,dword ptr [EDI]             ; 0043fbcb
    XOR ESI,ESI                         ; 0043fbcd
    TEST EDX,EDX                        ; 0043fbcf
    JLE 0x0043fbfb                      ; 0043fbd1
        ;   XREF to: 0043fbfb (CONDITIONAL_JUMP)  ; LAB_0043fbfb
    PUSH EBX                            ; 0043fbd3
    MOV EBX,EDI                         ; 0043fbd4
    MOV ECX,dword ptr [ESP + 0x20]      ; 0043fbd6
        ;   Label: LAB_0043fbd6
    PUSH ECX                            ; 0043fbda
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043fbdb
    PUSH EAX                            ; 0043fbdf
    PUSH EBP                            ; 0043fbe0
    MOV EDX,dword ptr [EBX + 0x194]     ; 0043fbe1
    PUSH EDX                            ; 0043fbe7
    ADD EBX,0x4                         ; 0043fbe8
    INC ESI                             ; 0043fbeb
    CALL core_cloth.cpp_FUN_0043cb00    ; 0043fbec
        ;   XREF to: 0043cb00 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043cb00()
    MOV ECX,dword ptr [EDI]             ; 0043fbf1
    ADD ESP,0x10                        ; 0043fbf3
    CMP ESI,ECX                         ; 0043fbf6
    JL 0x0043fbd6                       ; 0043fbf8
        ;   XREF to: 0043fbd6 (CONDITIONAL_JUMP)  ; LAB_0043fbd6
    POP EBX                             ; 0043fbfa
    POP EBP                             ; 0043fbfb
        ;   Label: LAB_0043fbfb
    POP EDI                             ; 0043fbfc
    POP ESI                             ; 0043fbfd
    RET                                 ; 0043fbfe

