; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_muzzle_cpp_FUN_0059dae0(int param_1,char *param_2,char *param_3)
;
;
; XREF[4]:
;   core_confedrt.cpp_FUN_005a0bd0 at 005a0f6d
;   core_confzomb.cpp_FUN_005a2240 at 005a2440
;   core_union.cpp_FUN_005a4d50 at 005a4dd9
;   core_unionzom.cpp_FUN_005a4330 at 005a43b5
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059dae0
        ;   Label: core_muzzle.cpp_FUN_0059dae0
    PUSH ESI                            ; 0059dae1
    PUSH EDI                            ; 0059dae2
    PUSH EBP                            ; 0059dae3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0059dae4
    MOV EDX,dword ptr [EDI + 0x838]     ; 0059dae8
    TEST EDX,EDX                        ; 0059daee
    JZ 0x0059db23                       ; 0059daf0
        ;   XREF to: 0059db23 (CONDITIONAL_JUMP)  ; LAB_0059db23
    XOR EBX,EBX                         ; 0059daf2
    TEST EDX,EDX                        ; 0059daf4
    JLE 0x0059db23                      ; 0059daf6
        ;   XREF to: 0059db23 (CONDITIONAL_JUMP)  ; LAB_0059db23
    LEA ESI,[EDI + 0x1f4]               ; 0059daf8
    PUSH ESI                            ; 0059dafe
        ;   Label: LAB_0059dafe
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0059daff
    PUSH EAX                            ; 0059db03
    MOV EBP,EBX                         ; 0059db04
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0059db06
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    SHL EBP,0x5                         ; 0059db0b
    ADD ESP,0x8                         ; 0059db0e
    TEST EAX,EAX                        ; 0059db11
    JZ 0x0059db2a                       ; 0059db13
        ;   XREF to: 0059db2a (CONDITIONAL_JUMP)  ; LAB_0059db2a
    INC EBX                             ; 0059db15
        ;   Label: LAB_0059db15
    MOV EBP,dword ptr [EDI + 0x838]     ; 0059db16
    ADD ESI,0x20                        ; 0059db1c
    CMP EBX,EBP                         ; 0059db1f
    JL 0x0059dafe                       ; 0059db21
        ;   XREF to: 0059dafe (CONDITIONAL_JUMP)  ; LAB_0059dafe
    XOR EAX,EAX                         ; 0059db23
        ;   Label: LAB_0059db23
    POP EBP                             ; 0059db25
    POP EDI                             ; 0059db26
    POP ESI                             ; 0059db27
    POP EBX                             ; 0059db28
    RET                                 ; 0059db29
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0059db2a
        ;   Label: LAB_0059db2a
    PUSH EDX                            ; 0059db2e
    MOV ECX,dword ptr [EDI + EBP*0x1 + 0x210] ; 0059db2f
    PUSH ECX                            ; 0059db36
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0059db37
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059db3c
    TEST EAX,EAX                        ; 0059db3f
    JNZ 0x0059db15                      ; 0059db41
        ;   XREF to: 0059db15 (CONDITIONAL_JUMP)  ; LAB_0059db15
    MOV EAX,0x1                         ; 0059db43
    POP EBP                             ; 0059db48
    POP EDI                             ; 0059db49
    POP ESI                             ; 0059db4a
    POP EBX                             ; 0059db4b
    RET                                 ; 0059db4c

