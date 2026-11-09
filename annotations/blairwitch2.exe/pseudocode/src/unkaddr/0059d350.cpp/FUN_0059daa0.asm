; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkaddr_0059d350_cpp_FUN_0059daa0(int param_1,char *param_2)
;
;
; XREF[42]:
;   core_basicnpc.cpp_FUN_005a48d0 at 005a48e2
;   core_belling.cpp_FUN_005a9080 at 005a9092
;   core_confedrt.cpp_FUN_005a0b20 at 005a0b75
;   core_confedrt.cpp_FUN_005a0bd0 at 005a0bf1
;   core_confedrt.cpp_FUN_005a12d0 at 005a12e1
;   core_confzomb.cpp_FUN_005a1e10 at 005a1e65
;   core_confzomb.cpp_FUN_005a2240 at 005a2269
;   core_confzomb.cpp_FUN_005a24a0 at 005a24b1
;   core_dog1.cpp_FUN_005abe90 at 005abf00
;   core_dog1.cpp_FUN_005ac2f0 at 005ac32d
;   ... and 32 more
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0059daa0
        ;   Label: unkaddr_0059d350.cpp_FUN_0059daa0
    CMP dword ptr [ECX + 0x834],0x0     ; 0059daa4
    JNZ 0x0059dab0                      ; 0059daab
        ;   XREF to: 0059dab0 (CONDITIONAL_JUMP)  ; LAB_0059dab0
    XOR EAX,EAX                         ; 0059daad
        ;   Label: LAB_0059daad
    RET                                 ; 0059daaf
    MOV EDX,dword ptr [ECX + 0x840]     ; 0059dab0
        ;   Label: LAB_0059dab0
    DEC EDX                             ; 0059dab6
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059dab7
    SUB EAX,EDX                         ; 0059dabe
    SHL EAX,0x3                         ; 0059dac0
    ADD EAX,EDX                         ; 0059dac3
    ADD EAX,ECX                         ; 0059dac5
    PUSH EAX                            ; 0059dac7
    MOV ECX,dword ptr [ESP + 0xc]       ; 0059dac8
    PUSH ECX                            ; 0059dacc
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0059dacd
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059dad2
    TEST EAX,EAX                        ; 0059dad5
    JNZ 0x0059daad                      ; 0059dad7
        ;   XREF to: 0059daad (CONDITIONAL_JUMP)  ; LAB_0059daad
    MOV EAX,0x1                         ; 0059dad9
    RET                                 ; 0059dade

