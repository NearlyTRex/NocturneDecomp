; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_fldnotes_cpp_FUN_004a9c30(int param_1,char *param_2)
;
;
; XREF[8]:
;   core_fldnotes.cpp_FUN_004aa810 at 004aaea7
;   core_fldnotes.cpp_FUN_004ab8f0 at 004ab911
;   core_fldnotes.cpp_FUN_004aba10 at 004aba31
;   core_fldnotes.cpp_FUN_004abb30 at 004abb4d
;   core_fldnotes.cpp_FUN_004abb90 at 004abbb1
;   core_fldnotes.cpp_FUN_004abcb0 at 004abcd1
;   core_fldnotes.cpp_FUN_004ac900 at 004acac0
;   unkaddr_004a76f0.cpp_FUN_004a79f0 at 004a7a0a
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9c30
        ;   Label: core_fldnotes.cpp_FUN_004a9c30
    PUSH ESI                            ; 004a9c31
    PUSH EDI                            ; 004a9c32
    PUSH EBP                            ; 004a9c33
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a9c34
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a9c38
    MOV EDX,dword ptr [EDI + 0x150]     ; 004a9c3c
    XOR ESI,ESI                         ; 004a9c42
    TEST EDX,EDX                        ; 004a9c44
    JLE 0x004a9c6c                      ; 004a9c46
        ;   XREF to: 004a9c6c (CONDITIONAL_JUMP)  ; LAB_004a9c6c
    MOV EBX,EDI                         ; 004a9c48
    PUSH EBP                            ; 004a9c4a
        ;   Label: LAB_004a9c4a
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a9c4b
    PUSH EAX                            ; 004a9c51
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004a9c52
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a9c57
    TEST EAX,EAX                        ; 004a9c5a
    JZ 0x004a9c73                       ; 004a9c5c
        ;   XREF to: 004a9c73 (CONDITIONAL_JUMP)  ; LAB_004a9c73
    INC ESI                             ; 004a9c5e
    MOV ECX,dword ptr [EDI + 0x150]     ; 004a9c5f
    ADD EBX,0x4                         ; 004a9c65
    CMP ESI,ECX                         ; 004a9c68
    JL 0x004a9c4a                       ; 004a9c6a
        ;   XREF to: 004a9c4a (CONDITIONAL_JUMP)  ; LAB_004a9c4a
    XOR EAX,EAX                         ; 004a9c6c
        ;   Label: LAB_004a9c6c
    POP EBP                             ; 004a9c6e
    POP EDI                             ; 004a9c6f
    POP ESI                             ; 004a9c70
    POP EBX                             ; 004a9c71
    RET                                 ; 004a9c72
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a9c73
        ;   Label: LAB_004a9c73
    POP EBP                             ; 004a9c79
    POP EDI                             ; 004a9c7a
    POP ESI                             ; 004a9c7b
    POP EBX                             ; 004a9c7c
    RET                                 ; 004a9c7d

