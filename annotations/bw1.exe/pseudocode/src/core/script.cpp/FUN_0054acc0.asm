; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_FUN_0054acc0(CScript *this_ptr,char *label_name)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   label_name
;
; XREF[2]:
;   core_script.cpp_CScript_step_FUN_00544460 at 00544605
;   core_script.cpp_FUN_00544310 at 0054433d
;
; Called Functions:
;   core_script.cpp_skipWhitespace_FUN_005432b0
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054acc0
        ;   Label: core_script.cpp_FUN_0054acc0
    PUSH ESI                            ; 0054acc1
    PUSH EDI                            ; 0054acc2
    PUSH EBP                            ; 0054acc3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0054acc4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0054acc8
    MOV EDX,dword ptr [EDI + 0x2c]      ; 0054accc
    XOR EBX,EBX                         ; 0054accf
    TEST EDX,EDX                        ; 0054acd1
    JLE 0x0054acee                      ; 0054acd3
        ;   XREF to: 0054acee (CONDITIONAL_JUMP)  ; LAB_0054acee
    XOR ESI,ESI                         ; 0054acd5
    MOV EAX,dword ptr [EDI + 0x30]      ; 0054acd7
        ;   Label: LAB_0054acd7
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0054acda
    CMP byte ptr [EAX],0x3a             ; 0054acde
    JZ 0x0054acf8                       ; 0054ace1
        ;   XREF to: 0054acf8 (CONDITIONAL_JUMP)  ; LAB_0054acf8
    INC EBX                             ; 0054ace3
        ;   Label: LAB_0054ace3
    MOV ECX,dword ptr [EDI + 0x2c]      ; 0054ace4
    ADD ESI,0x8                         ; 0054ace7
    CMP EBX,ECX                         ; 0054acea
    JL 0x0054acd7                       ; 0054acec
        ;   XREF to: 0054acd7 (CONDITIONAL_JUMP)  ; LAB_0054acd7
    MOV EAX,0xffffffff                  ; 0054acee
        ;   Label: LAB_0054acee
    POP EBP                             ; 0054acf3
    POP EDI                             ; 0054acf4
    POP ESI                             ; 0054acf5
    POP EBX                             ; 0054acf6
    RET                                 ; 0054acf7
    PUSH EBP                            ; 0054acf8
        ;   Label: LAB_0054acf8
    INC EAX                             ; 0054acf9
    PUSH EAX                            ; 0054acfa
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054acfb
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 0054ad00
    PUSH EAX                            ; 0054ad03
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0054ad04
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054ad09
    TEST EAX,EAX                        ; 0054ad0c
    JNZ 0x0054ace3                      ; 0054ad0e
        ;   XREF to: 0054ace3 (CONDITIONAL_JUMP)  ; LAB_0054ace3
    MOV EAX,EBX                         ; 0054ad10
    POP EBP                             ; 0054ad12
    POP EDI                             ; 0054ad13
    POP ESI                             ; 0054ad14
    POP EBX                             ; 0054ad15
    RET                                 ; 0054ad16

