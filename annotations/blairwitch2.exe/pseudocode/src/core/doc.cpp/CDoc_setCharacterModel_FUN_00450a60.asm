; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_doc_cpp_CDoc_setCharacterModel_FUN_00450a60(CDoc *this_ptr,char *model_name,char *cloth_name)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   model_name
; char *           Stack[0xc]:4   cloth_name
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setCharacterModel_FUN_0042b440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450a60
        ;   Label: core_doc.cpp_CDoc_setCharacterModel_FUN_00450a60
    PUSH ESI                            ; 00450a61
    PUSH EDI                            ; 00450a62
    PUSH EBP                            ; 00450a63
    MOV EBP,dword ptr [ESP + 0x14]      ; 00450a64
    MOV ESI,dword ptr [ESP + 0x18]      ; 00450a68
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00450a6c
    PUSH EBX                            ; 00450a70
    PUSH ESI                            ; 00450a71
    PUSH EBP                            ; 00450a72
    CALL core_charactr.cpp_CCharacter_setCharacterModel_FUN_0042b440 ; 00450a73
        ;   XREF to: 0042b440 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setCharacterModel_FUN_0042b440(CCharacter * this_ptr, char * model_name, char * cloth_name)
    ADD ESP,0xc                         ; 00450a78
    LEA EDI,[EBP + 0x257b0]             ; 00450a7b
    PUSH EDI                            ; 00450a81
    MOV AL,byte ptr [ESI]               ; 00450a82
        ;   Label: LAB_00450a82
    MOV byte ptr [EDI],AL               ; 00450a84
    CMP AL,0x0                          ; 00450a86
    JZ 0x00450a9a                       ; 00450a88
        ;   XREF to: 00450a9a (CONDITIONAL_JUMP)  ; LAB_00450a9a
    MOV AL,byte ptr [ESI + 0x1]         ; 00450a8a
    ADD ESI,0x2                         ; 00450a8d
    MOV byte ptr [EDI + 0x1],AL         ; 00450a90
    ADD EDI,0x2                         ; 00450a93
    CMP AL,0x0                          ; 00450a96
    JNZ 0x00450a82                      ; 00450a98
        ;   XREF to: 00450a82 (CONDITIONAL_JUMP)  ; LAB_00450a82
    POP EDI                             ; 00450a9a
        ;   Label: LAB_00450a9a
    LEA EDI,[EBP + 0x258b0]             ; 00450a9b
    MOV ESI,EBX                         ; 00450aa1
    PUSH EDI                            ; 00450aa3
    MOV AL,byte ptr [ESI]               ; 00450aa4
        ;   Label: LAB_00450aa4
    MOV byte ptr [EDI],AL               ; 00450aa6
    CMP AL,0x0                          ; 00450aa8
    JZ 0x00450abc                       ; 00450aaa
        ;   XREF to: 00450abc (CONDITIONAL_JUMP)  ; LAB_00450abc
    MOV AL,byte ptr [ESI + 0x1]         ; 00450aac
    ADD ESI,0x2                         ; 00450aaf
    MOV byte ptr [EDI + 0x1],AL         ; 00450ab2
    ADD EDI,0x2                         ; 00450ab5
    CMP AL,0x0                          ; 00450ab8
    JNZ 0x00450aa4                      ; 00450aba
        ;   XREF to: 00450aa4 (CONDITIONAL_JUMP)  ; LAB_00450aa4
    POP EDI                             ; 00450abc
        ;   Label: LAB_00450abc
    POP EBP                             ; 00450abd
    POP EDI                             ; 00450abe
    POP ESI                             ; 00450abf
    POP EBX                             ; 00450ac0
    RET                                 ; 00450ac1

