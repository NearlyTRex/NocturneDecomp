; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005485c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; XREF[1]:
;   FUN_00427210 at 0042724d
;
; Called Functions:
;   FUN_00543d80
;   FUN_005471f0
;   FUN_00547810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005485c0
        ;   Label: FUN_005485c0
    PUSH ESI                            ; 005485c1
    PUSH EDI                            ; 005485c2
    PUSH EBP                            ; 005485c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005485c4
    MOV EAX,dword ptr [ESP + 0x20]      ; 005485c8
    CMP EAX,dword ptr [EBX + 0x2230]    ; 005485cc
    JNZ 0x00548611                      ; 005485d2
        ;   XREF to: 00548611 (CONDITIONAL_JUMP)  ; LAB_00548611
    LEA EAX,[EBX + 0x21b8]              ; 005485d4
        ;   Label: LAB_005485d4
    PUSH EAX                            ; 005485da
    LEA EAX,[EBX + 0x2140]              ; 005485db
    PUSH EAX                            ; 005485e1
    MOV ECX,dword ptr [EBX + 0x2234]    ; 005485e2
    PUSH ECX                            ; 005485e8
    MOV ESI,dword ptr [EBX + 0x2230]    ; 005485e9
    PUSH ESI                            ; 005485ef
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005485f0
    PUSH EDI                            ; 005485f4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005485f5
    PUSH EBP                            ; 005485f9
    PUSH EBX                            ; 005485fa
    CALL FUN_00547810                   ; 005485fb
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; undefined FUN_00547810()
    ADD ESP,0x4                         ; 00548600
    PUSH EAX                            ; 00548603
    CALL FUN_00543d80                   ; 00548604
        ;   XREF to: 00543d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00543d80()
    ADD ESP,0x1c                        ; 00548609
    POP EBP                             ; 0054860c
    POP EDI                             ; 0054860d
    POP ESI                             ; 0054860e
    POP EBX                             ; 0054860f
    RET                                 ; 00548610
    PUSH EAX                            ; 00548611
        ;   Label: LAB_00548611
    PUSH EBX                            ; 00548612
    CALL FUN_005471f0                   ; 00548613
        ;   XREF to: 005471f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005471f0()
    ADD ESP,0x8                         ; 00548618
    JMP 0x005485d4                      ; 0054861b
        ;   XREF to: 005485d4 (UNCONDITIONAL_JUMP)  ; LAB_005485d4

