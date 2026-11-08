; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005adde0(int param_1)
;
;
; XREF[9]:
;   FUN_00449a50 at 00449ab1
;   FUN_00492590 at 00492596
;   FUN_0049e1a0 at 0049e204
;   FUN_004e8630 at 004e868e
;   FUN_00500310 at 00500323
;   FUN_00501a70 at 00501a83
;   FUN_00540080 at 005400de
;   FUN_00561760 at 005617c4
;   FUN_00598420 at 005984b8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005adde0
        ;   Label: FUN_005adde0
    MOV ECX,dword ptr [EDX + 0x568]     ; 005adde4
    TEST ECX,ECX                        ; 005addea
    JLE 0x005ade00                      ; 005addec
        ;   XREF to: 005ade00 (CONDITIONAL_JUMP)  ; LAB_005ade00
    PUSH EBX                            ; 005addee
    MOV EAX,0x1                         ; 005addef
    MOV EBX,ECX                         ; 005addf4
    SUB EBX,EAX                         ; 005addf6
    MOV dword ptr [EDX + 0x568],EBX     ; 005addf8
    POP EBX                             ; 005addfe
    RET                                 ; 005addff
    XOR EAX,EAX                         ; 005ade00
        ;   Label: LAB_005ade00
    RET                                 ; 005ade02

