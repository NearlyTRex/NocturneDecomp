; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004915e0(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_0048e2b0 at 0048e324
;   FUN_00491280 at 004912d7
;   FUN_004b5190 at 004b552c
;
; Called Functions:
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004915e0
        ;   Label: FUN_004915e0
    PUSH ESI                            ; 004915e1
    PUSH EDI                            ; 004915e2
    PUSH EBP                            ; 004915e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004915e4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004915e8
    MOV EDX,dword ptr [EDI + 0x3210]    ; 004915ec
    XOR EBX,EBX                         ; 004915f2
    TEST EDX,EDX                        ; 004915f4
    JLE 0x0049161a                      ; 004915f6
        ;   XREF to: 0049161a (CONDITIONAL_JUMP)  ; LAB_0049161a
    LEA ESI,[EDI + 0x3214]              ; 004915f8
    PUSH EBP                            ; 004915fe
        ;   Label: LAB_004915fe
    PUSH ESI                            ; 004915ff
    CALL FUN_005b8130                   ; 00491600
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00491605
    TEST EAX,EAX                        ; 00491608
    JZ 0x00491624                       ; 0049160a
        ;   XREF to: 00491624 (CONDITIONAL_JUMP)  ; LAB_00491624
    INC EBX                             ; 0049160c
    MOV ECX,dword ptr [EDI + 0x3210]    ; 0049160d
    ADD ESI,0x20                        ; 00491613
    CMP EBX,ECX                         ; 00491616
    JL 0x004915fe                       ; 00491618
        ;   XREF to: 004915fe (CONDITIONAL_JUMP)  ; LAB_004915fe
    MOV EAX,0xffffffff                  ; 0049161a
        ;   Label: LAB_0049161a
    POP EBP                             ; 0049161f
    POP EDI                             ; 00491620
    POP ESI                             ; 00491621
    POP EBX                             ; 00491622
    RET                                 ; 00491623
    MOV EAX,EBX                         ; 00491624
        ;   Label: LAB_00491624
    POP EBP                             ; 00491626
    POP EDI                             ; 00491627
    POP ESI                             ; 00491628
    POP EBX                             ; 00491629
    RET                                 ; 0049162a

