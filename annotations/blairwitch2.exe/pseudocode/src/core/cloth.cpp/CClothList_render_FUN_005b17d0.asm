; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_render_FUN_005b17d0(CClothList *this_ptr,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
; CDeformableModelInstance * Stack[0x8]:4   model_ptr
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00424bd0 at 00424c5e
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_0056fe50 at 0056fefa
;
; Called Functions:
;   core_cloth.cpp_CCloth_render_FUN_005b0fe0
;   core_cloth.cpp_CCloth_saveJoinedLight_FUN_005b0ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b17d0
        ;   Label: core_cloth.cpp_CClothList_render_FUN_005b17d0
    PUSH ESI                            ; 005b17d1
    PUSH EDI                            ; 005b17d2
    PUSH EBP                            ; 005b17d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005b17d4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005b17d8
    TEST EBP,EBP                        ; 005b17dc
    JZ 0x005b1810                       ; 005b17de
        ;   XREF to: 005b1810 (CONDITIONAL_JUMP)  ; LAB_005b1810
    MOV EDX,dword ptr [EDI]             ; 005b17e0
    XOR ESI,ESI                         ; 005b17e2
    TEST EDX,EDX                        ; 005b17e4
    JLE 0x005b1810                      ; 005b17e6
        ;   XREF to: 005b1810 (CONDITIONAL_JUMP)  ; LAB_005b1810
    MOV EBX,EDI                         ; 005b17e8
    PUSH EBP                            ; 005b17ea
        ;   Label: LAB_005b17ea
    MOV ECX,dword ptr [EBX + 0x194]     ; 005b17eb
    PUSH ECX                            ; 005b17f1
    ADD EBX,0x4                         ; 005b17f2
    INC ESI                             ; 005b17f5
    CALL core_cloth.cpp_CCloth_saveJoinedLight_FUN_005b0ef0 ; 005b17f6
        ;   XREF to: 005b0ef0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_saveJoinedLight_FUN_005b0ef0(CCloth * this_ptr, CDeformableModelInstance * model_ptr)
    MOV EAX,dword ptr [EDI]             ; 005b17fb
    ADD ESP,0x8                         ; 005b17fd
    CMP ESI,EAX                         ; 005b1800
    JL 0x005b17ea                       ; 005b1802
        ;   XREF to: 005b17ea (CONDITIONAL_JUMP)  ; LAB_005b17ea
    LEA EAX,[EAX]                       ; 005b1804
    LEA EDX,[EDX]                       ; 005b180a
    MOV EDX,dword ptr [EDI]             ; 005b1810
        ;   Label: LAB_005b1810
    XOR ESI,ESI                         ; 005b1812
    TEST EDX,EDX                        ; 005b1814
    JLE 0x005b1840                      ; 005b1816
        ;   XREF to: 005b1840 (CONDITIONAL_JUMP)  ; LAB_005b1840
    MOV EBX,EDI                         ; 005b1818
    PUSH EBP                            ; 005b181a
        ;   Label: LAB_005b181a
    MOV ECX,dword ptr [EBX + 0x194]     ; 005b181b
    PUSH ECX                            ; 005b1821
    ADD EBX,0x4                         ; 005b1822
    INC ESI                             ; 005b1825
    CALL core_cloth.cpp_CCloth_render_FUN_005b0fe0 ; 005b1826
        ;   XREF to: 005b0fe0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_005b0fe0(CCloth * this_ptr, CDeformableModelInstance * deformable_model)
    MOV EAX,dword ptr [EDI]             ; 005b182b
    ADD ESP,0x8                         ; 005b182d
    CMP ESI,EAX                         ; 005b1830
    JL 0x005b181a                       ; 005b1832
        ;   XREF to: 005b181a (CONDITIONAL_JUMP)  ; LAB_005b181a
    LEA EAX,[EAX]                       ; 005b1834
    LEA EDX,[EDX]                       ; 005b183a
    POP EBP                             ; 005b1840
        ;   Label: LAB_005b1840
    POP EDI                             ; 005b1841
    POP ESI                             ; 005b1842
    POP EBX                             ; 005b1843
    RET                                 ; 005b1844

