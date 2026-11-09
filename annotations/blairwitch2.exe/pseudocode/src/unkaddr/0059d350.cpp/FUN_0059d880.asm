; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkaddr_0059d350_cpp_FUN_0059d880(int param_1,char *param_2)
;
;
; XREF[5]:
;   core_dog1.cpp_FUN_005ac0c0 at 005ac175
;   core_ghostchi.cpp_FUN_005a9770 at 005a986b
;   core_hag.cpp_FUN_005aae80 at 005ab23e
;   unkafter_basicene.cpp_FUN_0059ef90 at 0059f0b0
;   unkafter_basicene.cpp_FUN_005a0380 at 005a0764
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005b8c30
;   unkaddr_0059d350.cpp_FUN_0059d940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d880
        ;   Label: unkaddr_0059d350.cpp_FUN_0059d880
    PUSH ESI                            ; 0059d881
    PUSH EDI                            ; 0059d882
    PUSH EBP                            ; 0059d883
    MOV EDI,dword ptr [ESP + 0x14]      ; 0059d884
    MOV EDX,dword ptr [EDI + 0x838]     ; 0059d888
    TEST EDX,EDX                        ; 0059d88e
    JZ 0x0059d8c3                       ; 0059d890
        ;   XREF to: 0059d8c3 (CONDITIONAL_JUMP)  ; LAB_0059d8c3
    XOR EBX,EBX                         ; 0059d892
    TEST EDX,EDX                        ; 0059d894
    JLE 0x0059d8c3                      ; 0059d896
        ;   XREF to: 0059d8c3 (CONDITIONAL_JUMP)  ; LAB_0059d8c3
    LEA ESI,[EDI + 0x1f4]               ; 0059d898
    PUSH ESI                            ; 0059d89e
        ;   Label: LAB_0059d89e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0059d89f
    PUSH EAX                            ; 0059d8a3
    MOV EBP,EBX                         ; 0059d8a4
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0059d8a6
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    SHL EBP,0x5                         ; 0059d8ab
    ADD ESP,0x8                         ; 0059d8ae
    TEST EAX,EAX                        ; 0059d8b1
    JZ 0x0059d8ca                       ; 0059d8b3
        ;   XREF to: 0059d8ca (CONDITIONAL_JUMP)  ; LAB_0059d8ca
    INC EBX                             ; 0059d8b5
    MOV EBP,dword ptr [EDI + 0x838]     ; 0059d8b6
    ADD ESI,0x20                        ; 0059d8bc
    CMP EBX,EBP                         ; 0059d8bf
    JL 0x0059d89e                       ; 0059d8c1
        ;   XREF to: 0059d89e (CONDITIONAL_JUMP)  ; LAB_0059d89e
    XOR EAX,EAX                         ; 0059d8c3
        ;   Label: LAB_0059d8c3
    POP EBP                             ; 0059d8c5
    POP EDI                             ; 0059d8c6
    POP ESI                             ; 0059d8c7
    POP EBX                             ; 0059d8c8
    RET                                 ; 0059d8c9
    MOV EDX,dword ptr [EDI + EBP*0x1 + 0x210] ; 0059d8ca
        ;   Label: LAB_0059d8ca
    PUSH EDX                            ; 0059d8d1
    PUSH EDI                            ; 0059d8d2
    CALL unkaddr_0059d350.cpp_FUN_0059d940 ; 0059d8d3
        ;   XREF to: 0059d940 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d940()
    ADD ESP,0x8                         ; 0059d8d8
    POP EBP                             ; 0059d8db
    POP EDI                             ; 0059d8dc
    POP ESI                             ; 0059d8dd
    POP EBX                             ; 0059d8de
    RET                                 ; 0059d8df

