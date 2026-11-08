; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004309a0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; Called Functions:
;   FUN_00408bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004309a0
        ;   Label: FUN_004309a0
    PUSH ESI                            ; 004309a1
    PUSH EDI                            ; 004309a2
    SUB ESP,0x18                        ; 004309a3
    MOV EBX,dword ptr [ESP + 0x28]      ; 004309a6
    CMP dword ptr [EBX + 0x27b0],0x0    ; 004309aa
    JZ 0x004309bc                       ; 004309b1
        ;   XREF to: 004309bc (CONDITIONAL_JUMP)  ; LAB_004309bc
    XOR EAX,EAX                         ; 004309b3
    ADD ESP,0x18                        ; 004309b5
    POP EDI                             ; 004309b8
    POP ESI                             ; 004309b9
    POP EBX                             ; 004309ba
    RET                                 ; 004309bb
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004309bc
        ;   Label: LAB_004309bc
    PUSH ECX                            ; 004309c0
    PUSH EBX                            ; 004309c1
    LEA ESI,[ESP + 0x8]                 ; 004309c2
    LEA EDI,[ESP + 0x14]                ; 004309c6
    CALL FUN_00408bf0                   ; 004309ca
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA ESI,[ESP + 0x8]                 ; 004309cf
    ADD ESP,0x8                         ; 004309d3
    LEA EAX,[ESP + 0xc]                 ; 004309d6
    PUSH dword ptr [ESP + 0x30]         ; 004309da
    MOVSD ES:EDI,ESI                    ; 004309de
    MOVSD ES:EDI,ESI                    ; 004309df
    MOVSD ES:EDI,ESI                    ; 004309e0
    PUSH EAX                            ; 004309e1
    MOV ESI,dword ptr [EBX + 0x154]     ; 004309e2
    PUSH EBX                            ; 004309e8
    CALL dword ptr [ESI + 0xac]         ; 004309e9
    ADD ESP,0xc                         ; 004309ef
    TEST EAX,EAX                        ; 004309f2
    JNZ 0x00430a0a                      ; 004309f4
        ;   XREF to: 00430a0a (CONDITIONAL_JUMP)  ; LAB_00430a0a
    MOV EAX,dword ptr [ESP + 0x34]      ; 004309f6
    MOV dword ptr [EAX + 0x4],0x0       ; 004309fa
    XOR EAX,EAX                         ; 00430a01
    ADD ESP,0x18                        ; 00430a03
    POP EDI                             ; 00430a06
    POP ESI                             ; 00430a07
    POP EBX                             ; 00430a08
    RET                                 ; 00430a09
    MOV ESI,dword ptr [ESP + 0x34]      ; 00430a0a
        ;   Label: LAB_00430a0a
    PUSH ESI                            ; 00430a0e
    MOV EAX,dword ptr [EBX + 0x154]     ; 00430a0f
    PUSH EBX                            ; 00430a15
    CALL dword ptr [EAX + 0x108]        ; 00430a16
    MOV EAX,0x1                         ; 00430a1c
    ADD ESP,0x8                         ; 00430a21
    ADD ESP,0x18                        ; 00430a24
    POP EDI                             ; 00430a27
    POP ESI                             ; 00430a28
    POP EBX                             ; 00430a29
    RET                                 ; 00430a2a

