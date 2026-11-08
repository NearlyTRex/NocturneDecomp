; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051b5a0(int param_1)
;
;
; XREF[1]:
;   FUN_0051a3b0 at 0051a3b6
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;   undefined4 DAT_01d06aa0
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_0051b420
;   FUN_0051b4d0
;   FUN_00559580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b5a0
        ;   Label: FUN_0051b5a0
    PUSH EDI                            ; 0051b5a1
    PUSH EBP                            ; 0051b5a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051b5a3
    CMP dword ptr [EBX + 0x1118],0x0    ; 0051b5a7
    JZ 0x0051b5ce                       ; 0051b5ae
        ;   XREF to: 0051b5ce (CONDITIONAL_JUMP)  ; LAB_0051b5ce
    PUSH ESI                            ; 0051b5b0
    PUSH 0x1                            ; 0051b5b1
        ;   Label: LAB_0051b5b1
    MOV ECX,dword ptr [EBX + 0x1118]    ; 0051b5b3
    PUSH ECX                            ; 0051b5b9
    PUSH EBX                            ; 0051b5ba
    CALL FUN_0051b4d0                   ; 0051b5bb
        ;   XREF to: 0051b4d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b4d0()
    MOV ESI,dword ptr [EBX + 0x1118]    ; 0051b5c0
    ADD ESP,0xc                         ; 0051b5c6
    TEST ESI,ESI                        ; 0051b5c9
    JNZ 0x0051b5b1                      ; 0051b5cb
        ;   XREF to: 0051b5b1 (CONDITIONAL_JUMP)  ; LAB_0051b5b1
    POP ESI                             ; 0051b5cd
    PUSH EBX                            ; 0051b5ce
        ;   Label: LAB_0051b5ce
    CALL FUN_0051b420                   ; 0051b5cf
        ;   XREF to: 0051b420 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b420()
    ADD ESP,0x4                         ; 0051b5d4
    MOV EBP,dword ptr [0x00622c18]      ; 0051b5d7 | DAT_00622c18
    XOR EDI,EDI                         ; 0051b5dd
    PUSH EBP                            ; 0051b5df | DAT_01e82168
    MOV dword ptr [0x01d06aa0],EDI      ; 0051b5e0 | DAT_01d06aa0
    MOV dword ptr [EBX + 0x1454],0xffffffff ; 0051b5e6
    CALL FUN_00559580                   ; 0051b5f0
        ;   XREF to: 00559580 (UNCONDITIONAL_CALL)  ; undefined FUN_00559580()
    ADD ESP,0x4                         ; 0051b5f5
    MOV dword ptr [EBX + 0x1130],EDI    ; 0051b5f8
    POP EBP                             ; 0051b5fe
    POP EDI                             ; 0051b5ff
    POP EBX                             ; 0051b600
    RET                                 ; 0051b601

