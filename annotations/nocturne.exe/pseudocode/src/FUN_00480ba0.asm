; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00480ba0(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00480950 at 0048099d
;   FUN_00480b30 at 00480b3e
;
; Called Functions:
;   FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480ba0
        ;   Label: FUN_00480ba0
    PUSH ESI                            ; 00480ba1
    PUSH EDI                            ; 00480ba2
    PUSH EBP                            ; 00480ba3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00480ba4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00480ba8
    MOV EDX,dword ptr [EDI + 0x34e8]    ; 00480bac
    XOR EBX,EBX                         ; 00480bb2
    TEST EDX,EDX                        ; 00480bb4
    JLE 0x00480bda                      ; 00480bb6
        ;   XREF to: 00480bda (CONDITIONAL_JUMP)  ; LAB_00480bda
    LEA ESI,[EDI + 0x34ec]              ; 00480bb8
    PUSH EBP                            ; 00480bbe
        ;   Label: LAB_00480bbe
    PUSH ESI                            ; 00480bbf
    CALL FUN_00564520                   ; 00480bc0
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 00480bc5
    TEST EAX,EAX                        ; 00480bc8
    JZ 0x00480be4                       ; 00480bca
        ;   XREF to: 00480be4 (CONDITIONAL_JUMP)  ; LAB_00480be4
    INC EBX                             ; 00480bcc
    MOV ECX,dword ptr [EDI + 0x34e8]    ; 00480bcd
    ADD ESI,0x1e                        ; 00480bd3
    CMP EBX,ECX                         ; 00480bd6
    JL 0x00480bbe                       ; 00480bd8
        ;   XREF to: 00480bbe (CONDITIONAL_JUMP)  ; LAB_00480bbe
    MOV EAX,0xffffffff                  ; 00480bda
        ;   Label: LAB_00480bda
    POP EBP                             ; 00480bdf
    POP EDI                             ; 00480be0
    POP ESI                             ; 00480be1
    POP EBX                             ; 00480be2
    RET                                 ; 00480be3
    MOV EAX,EBX                         ; 00480be4
        ;   Label: LAB_00480be4
    POP EBP                             ; 00480be6
    POP EDI                             ; 00480be7
    POP ESI                             ; 00480be8
    POP EBX                             ; 00480be9
    RET                                 ; 00480bea

