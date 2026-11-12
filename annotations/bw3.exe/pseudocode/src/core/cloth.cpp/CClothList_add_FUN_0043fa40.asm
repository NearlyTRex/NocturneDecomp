; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_add_FUN_0043fa40(CClothList *this_ptr,char *filename)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[2]:
;   core_prye.cpp_CPrye_ctor_FUN_00517f80 at 00518417
;   core_pryemorp.cpp_CPryeMorph_ctor_FUN_005273b0 at 005274d2
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043fa40
        ;   Label: core_cloth.cpp_CClothList_add_FUN_0043fa40
    PUSH ESI                            ; 0043fa41
    PUSH EDI                            ; 0043fa42
    MOV EBX,dword ptr [ESP + 0x10]      ; 0043fa43
    CMP dword ptr [EBX],0xa             ; 0043fa47
    JGE 0x0043fa90                      ; 0043fa4a
        ;   XREF to: 0043fa90 (CONDITIONAL_JUMP)  ; LAB_0043fa90
    MOV EDX,dword ptr [EBX]             ; 0043fa4c
        ;   Label: LAB_0043fa4c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0043fa4e
    ADD EAX,EDX                         ; 0043fa55
    LEA EDI,[EBX + 0x4]                 ; 0043fa57
    SHL EAX,0x3                         ; 0043fa5a
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043fa5d
    ADD EDI,EAX                         ; 0043fa61
    PUSH EDI                            ; 0043fa63
    MOV AL,byte ptr [ESI]               ; 0043fa64
        ;   Label: LAB_0043fa64
    MOV byte ptr [EDI],AL               ; 0043fa66
    CMP AL,0x0                          ; 0043fa68
    JZ 0x0043fa7c                       ; 0043fa6a
        ;   XREF to: 0043fa7c (CONDITIONAL_JUMP)  ; LAB_0043fa7c
    MOV AL,byte ptr [ESI + 0x1]         ; 0043fa6c
    ADD ESI,0x2                         ; 0043fa6f
    MOV byte ptr [EDI + 0x1],AL         ; 0043fa72
    ADD EDI,0x2                         ; 0043fa75
    CMP AL,0x0                          ; 0043fa78
    JNZ 0x0043fa64                      ; 0043fa7a
        ;   XREF to: 0043fa64 (CONDITIONAL_JUMP)  ; LAB_0043fa64
    POP EDI                             ; 0043fa7c
        ;   Label: LAB_0043fa7c
    MOV EAX,dword ptr [EBX]             ; 0043fa7d
    MOV dword ptr [EBX + EAX*0x4 + 0x194],0x0 ; 0043fa7f
    INC dword ptr [EBX]                 ; 0043fa8a
    POP EDI                             ; 0043fa8c
    POP ESI                             ; 0043fa8d
    POP EBX                             ; 0043fa8e
    RET                                 ; 0043fa8f
    MOV ECX,0x5b9226                    ; 0043fa90
        ;   Label: LAB_0043fa90
    MOV ESI,0x5de                       ; 0043fa95
    PUSH 0x5b9238                       ; 0043fa9a
    MOV dword ptr [0x01d71de0],ECX      ; 0043fa9f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0043faa5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043faab
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0043fab0
    JMP 0x0043fa4c                      ; 0043fab3
        ;   XREF to: 0043fa4c (UNCONDITIONAL_JUMP)  ; LAB_0043fa4c

