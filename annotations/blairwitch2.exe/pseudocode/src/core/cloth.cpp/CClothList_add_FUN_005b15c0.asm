; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_add_FUN_005b15c0(CClothList *this_ptr,char *filename)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[7]:
;   core_belling.cpp_CBelling_ctor_FUN_005a8f80 at 005a900b
;   core_bwgrndma.cpp_CGrandma_ctor_FUN_005a7b10 at 005a7b9b
;   core_charactr.cpp_CCharacter_setCharacterModel_FUN_0042b440 at 0042b516
;   core_doc.cpp_CDoc_ctor_FUN_004500d0 at 0045042b
;   core_hellhag.cpp_CHag_ctor_FUN_005aa600 at 005aa63c
;   core_stranger.cpp_CStranger_ctor_FUN_005627f0 at 00562b6e
;   core_villain.cpp_CSteuben_ctor_FUN_005a5b40 at 005a5bcb
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005f11e9
;   TerminatedCString s_CClothList_add_list_is_f_005f11fb
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b15c0
        ;   Label: core_cloth.cpp_CClothList_add_FUN_005b15c0
    PUSH ESI                            ; 005b15c1
    PUSH EDI                            ; 005b15c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005b15c3
    CMP dword ptr [EBX],0xa             ; 005b15c7
    JGE 0x005b1610                      ; 005b15ca
        ;   XREF to: 005b1610 (CONDITIONAL_JUMP)  ; LAB_005b1610
    MOV EDX,dword ptr [EBX]             ; 005b15cc
        ;   Label: LAB_005b15cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b15ce
    ADD EAX,EDX                         ; 005b15d5
    LEA EDI,[EBX + 0x4]                 ; 005b15d7
    SHL EAX,0x3                         ; 005b15da
    MOV ESI,dword ptr [ESP + 0x14]      ; 005b15dd
    ADD EDI,EAX                         ; 005b15e1
    PUSH EDI                            ; 005b15e3
    MOV AL,byte ptr [ESI]               ; 005b15e4
        ;   Label: LAB_005b15e4
    MOV byte ptr [EDI],AL               ; 005b15e6
    CMP AL,0x0                          ; 005b15e8
    JZ 0x005b15fc                       ; 005b15ea
        ;   XREF to: 005b15fc (CONDITIONAL_JUMP)  ; LAB_005b15fc
    MOV AL,byte ptr [ESI + 0x1]         ; 005b15ec
    ADD ESI,0x2                         ; 005b15ef
    MOV byte ptr [EDI + 0x1],AL         ; 005b15f2
    ADD EDI,0x2                         ; 005b15f5
    CMP AL,0x0                          ; 005b15f8
    JNZ 0x005b15e4                      ; 005b15fa
        ;   XREF to: 005b15e4 (CONDITIONAL_JUMP)  ; LAB_005b15e4
    POP EDI                             ; 005b15fc
        ;   Label: LAB_005b15fc
    MOV EAX,dword ptr [EBX]             ; 005b15fd
    MOV dword ptr [EBX + EAX*0x4 + 0x194],0x0 ; 005b15ff
    INC dword ptr [EBX]                 ; 005b160a
    POP EDI                             ; 005b160c
    POP ESI                             ; 005b160d
    POP EBX                             ; 005b160e
    RET                                 ; 005b160f
    MOV ECX,0x5f11e9                    ; 005b1610 | = "..\\core\\cloth.cpp"
        ;   Label: LAB_005b1610
    MOV ESI,0x5de                       ; 005b1615
    PUSH 0x5f11fb                       ; 005b161a | = "CClothList::add - list is full"
    MOV dword ptr [0x01d046a0],ECX      ; 005b161f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 005b1625 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005b162b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005b1630
    JMP 0x005b15cc                      ; 005b1633
        ;   XREF to: 005b15cc (UNCONDITIONAL_JUMP)  ; LAB_005b15cc

