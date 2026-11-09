; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkaddr_0059d350_cpp_FUN_0059d8e0(char *param_1,char *param_2)
;
;
; XREF[36]:
;   core_confedrt.cpp_FUN_005a1030 at 005a10d5
;   core_confedrt.cpp_FUN_005a1180 at 005a127b
;   core_confzomb.cpp_FUN_005a1f40 at 005a200c
;   core_confzomb.cpp_FUN_005a2130 at 005a2203
;   core_dog1.cpp_FUN_005abfa0 at 005ac07b
;   core_dog1.cpp_FUN_005ac0c0 at 005ac1ee
;   core_dog1.cpp_FUN_005ac200 at 005ac2d5
;   core_dog1.cpp_FUN_005ac2f0 at 005ac510
;   core_ghostchi.cpp_FUN_005a9580 at 005a967b
;   core_hag.cpp_FUN_005aaa80 at 005aab1f
;   ... and 26 more
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d8e0
        ;   Label: unkaddr_0059d350.cpp_FUN_0059d8e0
    PUSH ESI                            ; 0059d8e1
    PUSH EDI                            ; 0059d8e2
    PUSH EBP                            ; 0059d8e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0059d8e4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0059d8e8
    MOV EDX,dword ptr [EDI + 0x834]     ; 0059d8ec
    TEST EDX,EDX                        ; 0059d8f2
    JZ 0x0059d920                       ; 0059d8f4
        ;   XREF to: 0059d920 (CONDITIONAL_JUMP)  ; LAB_0059d920
    XOR ESI,ESI                         ; 0059d8f6
    TEST EDX,EDX                        ; 0059d8f8
    JLE 0x0059d920                      ; 0059d8fa
        ;   XREF to: 0059d920 (CONDITIONAL_JUMP)  ; LAB_0059d920
    MOV EBX,EDI                         ; 0059d8fc
    PUSH EBX                            ; 0059d8fe
        ;   Label: LAB_0059d8fe
    PUSH EBP                            ; 0059d8ff
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0059d900
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    MOV EDX,EAX                         ; 0059d905
    ADD ESP,0x8                         ; 0059d907
    LEA EAX,[ESI + 0x1]                 ; 0059d90a
    TEST EDX,EDX                        ; 0059d90d
    JZ 0x0059d927                       ; 0059d90f
        ;   XREF to: 0059d927 (CONDITIONAL_JUMP)  ; LAB_0059d927
    ADD EBX,0x19                        ; 0059d911
    MOV EDX,dword ptr [EDI + 0x834]     ; 0059d914
    MOV ESI,EAX                         ; 0059d91a
    CMP EAX,EDX                         ; 0059d91c
    JL 0x0059d8fe                       ; 0059d91e
        ;   XREF to: 0059d8fe (CONDITIONAL_JUMP)  ; LAB_0059d8fe
    XOR EAX,EAX                         ; 0059d920
        ;   Label: LAB_0059d920
    POP EBP                             ; 0059d922
    POP EDI                             ; 0059d923
    POP ESI                             ; 0059d924
    POP EBX                             ; 0059d925
    RET                                 ; 0059d926
    MOV dword ptr [EDI + 0x844],EAX     ; 0059d927
        ;   Label: LAB_0059d927
    MOV EAX,0x1                         ; 0059d92d
    POP EBP                             ; 0059d932
    POP EDI                             ; 0059d933
    POP ESI                             ; 0059d934
    POP EBX                             ; 0059d935
    RET                                 ; 0059d936

