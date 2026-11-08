; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059daa0(int param_1,undefined4 param_2)
;
;
; XREF[42]:
;   FUN_0059e8c0 at 0059e9b5
;   FUN_0059f6b0 at 0059f6c2
;   FUN_0059f930 at 0059f93f
;   FUN_005a0270 at 005a029e
;   FUN_005a0b20 at 005a0b75
;   FUN_005a0bd0 at 005a0bf1
;   FUN_005a12d0 at 005a12e1
;   FUN_005a1e10 at 005a1e65
;   FUN_005a2240 at 005a2269
;   FUN_005a24a0 at 005a24b1
;   ... and 32 more
;
; Called Functions:
;   FUN_005b8c30
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0059daa0
        ;   Label: FUN_0059daa0
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
    CALL FUN_005b8c30                   ; 0059dacd
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8c30()
    ADD ESP,0x8                         ; 0059dad2
    TEST EAX,EAX                        ; 0059dad5
    JNZ 0x0059daad                      ; 0059dad7
        ;   XREF to: 0059daad (CONDITIONAL_JUMP)  ; LAB_0059daad
    MOV EAX,0x1                         ; 0059dad9
    RET                                 ; 0059dade

