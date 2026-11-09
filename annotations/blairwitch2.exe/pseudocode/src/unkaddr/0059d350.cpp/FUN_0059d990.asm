; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkaddr_0059d350_cpp_FUN_0059d990(char *param_1,char *param_2)
;
;
; XREF[18]:
;   core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0 at 005a4854
;   core_belling.cpp_CBelling_ctor_FUN_005a8f80 at 005a902c
;   core_confedrt.cpp_CConfederate_ctor_FUN_005a0840 at 005a0949
;   core_confzomb.cpp_CConfederateZombie_ctor_FUN_005a1b40 at 005a1c3f
;   core_dog1.cpp_CDog_ctor_FUN_005aba40 at 005abb2b
;   core_ghostchi.cpp_CGhostChild_ctor_FUN_005a9230 at 005a932a
;   core_grandma.cpp_CGrandma_ctor_FUN_005a7b10 at 005a7bbc
;   core_hag.cpp_CHag_ctor_FUN_005aa600 at 005aa735
;   core_hand.cpp_CHand_ctor_FUN_005a9c00 at 005a9cf1
;   core_robin.cpp_CRobin_ctor_FUN_005a5e70 at 005a5f2f
;   ... and 8 more
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d990
        ;   Label: unkaddr_0059d350.cpp_FUN_0059d990
    PUSH ESI                            ; 0059d991
    PUSH EDI                            ; 0059d992
    PUSH EBP                            ; 0059d993
    MOV EDI,dword ptr [ESP + 0x14]      ; 0059d994
    MOV EBP,dword ptr [ESP + 0x18]      ; 0059d998
    MOV EDX,dword ptr [EDI + 0x834]     ; 0059d99c
    TEST EDX,EDX                        ; 0059d9a2
    JZ 0x0059d9d0                       ; 0059d9a4
        ;   XREF to: 0059d9d0 (CONDITIONAL_JUMP)  ; LAB_0059d9d0
    XOR ESI,ESI                         ; 0059d9a6
    TEST EDX,EDX                        ; 0059d9a8
    JLE 0x0059d9d0                      ; 0059d9aa
        ;   XREF to: 0059d9d0 (CONDITIONAL_JUMP)  ; LAB_0059d9d0
    MOV EBX,EDI                         ; 0059d9ac
    PUSH EBX                            ; 0059d9ae
        ;   Label: LAB_0059d9ae
    PUSH EBP                            ; 0059d9af
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0059d9b0
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    MOV EDX,EAX                         ; 0059d9b5
    ADD ESP,0x8                         ; 0059d9b7
    LEA EAX,[ESI + 0x1]                 ; 0059d9ba
    TEST EDX,EDX                        ; 0059d9bd
    JZ 0x0059d9d7                       ; 0059d9bf
        ;   XREF to: 0059d9d7 (CONDITIONAL_JUMP)  ; LAB_0059d9d7
    ADD EBX,0x19                        ; 0059d9c1
    MOV EDX,dword ptr [EDI + 0x834]     ; 0059d9c4
    MOV ESI,EAX                         ; 0059d9ca
    CMP EAX,EDX                         ; 0059d9cc
    JL 0x0059d9ae                       ; 0059d9ce
        ;   XREF to: 0059d9ae (CONDITIONAL_JUMP)  ; LAB_0059d9ae
    XOR EAX,EAX                         ; 0059d9d0
        ;   Label: LAB_0059d9d0
    POP EBP                             ; 0059d9d2
    POP EDI                             ; 0059d9d3
    POP ESI                             ; 0059d9d4
    POP EBX                             ; 0059d9d5
    RET                                 ; 0059d9d6
    MOV dword ptr [EDI + 0x83c],EAX     ; 0059d9d7
        ;   Label: LAB_0059d9d7
    MOV EAX,0x1                         ; 0059d9dd
    POP EBP                             ; 0059d9e2
    POP EDI                             ; 0059d9e3
    POP ESI                             ; 0059d9e4
    POP EBX                             ; 0059d9e5
    RET                                 ; 0059d9e6

