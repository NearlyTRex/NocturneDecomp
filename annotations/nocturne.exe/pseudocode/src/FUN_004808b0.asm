; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004808b0(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0047dba0 at 0047dc14
;   FUN_00480550 at 004805a7
;
; Called Functions:
;   FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004808b0
        ;   Label: FUN_004808b0
    PUSH ESI                            ; 004808b1
    PUSH EDI                            ; 004808b2
    PUSH EBP                            ; 004808b3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004808b4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004808b8
    MOV EDX,dword ptr [EDI + 0x3210]    ; 004808bc
    XOR EBX,EBX                         ; 004808c2
    TEST EDX,EDX                        ; 004808c4
    JLE 0x004808ea                      ; 004808c6
        ;   XREF to: 004808ea (CONDITIONAL_JUMP)  ; LAB_004808ea
    LEA ESI,[EDI + 0x3214]              ; 004808c8
    PUSH EBP                            ; 004808ce
        ;   Label: LAB_004808ce
    PUSH ESI                            ; 004808cf
    CALL FUN_00564520                   ; 004808d0
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 004808d5
    TEST EAX,EAX                        ; 004808d8
    JZ 0x004808f4                       ; 004808da
        ;   XREF to: 004808f4 (CONDITIONAL_JUMP)  ; LAB_004808f4
    INC EBX                             ; 004808dc
    MOV ECX,dword ptr [EDI + 0x3210]    ; 004808dd
    ADD ESI,0x20                        ; 004808e3
    CMP EBX,ECX                         ; 004808e6
    JL 0x004808ce                       ; 004808e8
        ;   XREF to: 004808ce (CONDITIONAL_JUMP)  ; LAB_004808ce
    MOV EAX,0xffffffff                  ; 004808ea
        ;   Label: LAB_004808ea
    POP EBP                             ; 004808ef
    POP EDI                             ; 004808f0
    POP ESI                             ; 004808f1
    POP EBX                             ; 004808f2
    RET                                 ; 004808f3
    MOV EAX,EBX                         ; 004808f4
        ;   Label: LAB_004808f4
    POP EBP                             ; 004808f6
    POP EDI                             ; 004808f7
    POP ESI                             ; 004808f8
    POP EBX                             ; 004808f9
    RET                                 ; 004808fa

