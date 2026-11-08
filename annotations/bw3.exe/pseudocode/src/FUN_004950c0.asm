; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004950c0(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00494e70 at 00494ebd
;   FUN_00495050 at 0049505e
;
; Called Functions:
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004950c0
        ;   Label: FUN_004950c0
    PUSH ESI                            ; 004950c1
    PUSH EDI                            ; 004950c2
    PUSH EBP                            ; 004950c3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004950c4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004950c8
    MOV EDX,dword ptr [EDI + 0x34e8]    ; 004950cc
    XOR EBX,EBX                         ; 004950d2
    TEST EDX,EDX                        ; 004950d4
    JLE 0x004950fa                      ; 004950d6
        ;   XREF to: 004950fa (CONDITIONAL_JUMP)  ; LAB_004950fa
    LEA ESI,[EDI + 0x34ec]              ; 004950d8
    PUSH EBP                            ; 004950de
        ;   Label: LAB_004950de
    PUSH ESI                            ; 004950df
    CALL FUN_005a3260                   ; 004950e0
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004950e5
    TEST EAX,EAX                        ; 004950e8
    JZ 0x00495104                       ; 004950ea
        ;   XREF to: 00495104 (CONDITIONAL_JUMP)  ; LAB_00495104
    INC EBX                             ; 004950ec
    MOV ECX,dword ptr [EDI + 0x34e8]    ; 004950ed
    ADD ESI,0x1e                        ; 004950f3
    CMP EBX,ECX                         ; 004950f6
    JL 0x004950de                       ; 004950f8
        ;   XREF to: 004950de (CONDITIONAL_JUMP)  ; LAB_004950de
    MOV EAX,0xffffffff                  ; 004950fa
        ;   Label: LAB_004950fa
    POP EBP                             ; 004950ff
    POP EDI                             ; 00495100
    POP ESI                             ; 00495101
    POP EBX                             ; 00495102
    RET                                 ; 00495103
    MOV EAX,EBX                         ; 00495104
        ;   Label: LAB_00495104
    POP EBP                             ; 00495106
    POP EDI                             ; 00495107
    POP ESI                             ; 00495108
    POP EBX                             ; 00495109
    RET                                 ; 0049510a

