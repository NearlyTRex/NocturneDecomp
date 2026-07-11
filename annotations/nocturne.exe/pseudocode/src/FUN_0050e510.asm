; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050e510(int *param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0047ac50 at 0047c9c3
;
; Called Functions:
;   FUN_0050e4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e510
        ;   Label: FUN_0050e510
    PUSH ESI                            ; 0050e511
    PUSH EDI                            ; 0050e512
    PUSH EBP                            ; 0050e513
    MOV EDI,dword ptr [ESP + 0x14]      ; 0050e514
    MOV EBP,dword ptr [ESP + 0x18]      ; 0050e518
    MOV EDX,dword ptr [EDI]             ; 0050e51c
    XOR EBX,EBX                         ; 0050e51e
    TEST EDX,EDX                        ; 0050e520
    JLE 0x0050e53b                      ; 0050e522
        ;   XREF to: 0050e53b (CONDITIONAL_JUMP)  ; LAB_0050e53b
    MOV ESI,EDI                         ; 0050e524
    CMP EBP,dword ptr [ESI + 0x14c]     ; 0050e526
        ;   Label: LAB_0050e526
    JZ 0x0050e540                       ; 0050e52c
        ;   XREF to: 0050e540 (CONDITIONAL_JUMP)  ; LAB_0050e540
    INC EBX                             ; 0050e52e
        ;   Label: LAB_0050e52e
    MOV ECX,dword ptr [EDI]             ; 0050e52f
    ADD ESI,0x1a0                       ; 0050e531
    CMP EBX,ECX                         ; 0050e537
    JL 0x0050e526                       ; 0050e539
        ;   XREF to: 0050e526 (CONDITIONAL_JUMP)  ; LAB_0050e526
    POP EBP                             ; 0050e53b
        ;   Label: LAB_0050e53b
    POP EDI                             ; 0050e53c
    POP ESI                             ; 0050e53d
    POP EBX                             ; 0050e53e
    RET                                 ; 0050e53f
    PUSH dword ptr [ESP + 0x1c]         ; 0050e540
        ;   Label: LAB_0050e540
    PUSH EBX                            ; 0050e544
    PUSH EDI                            ; 0050e545
    CALL FUN_0050e4c0                   ; 0050e546
        ;   XREF to: 0050e4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050e4c0()
    ADD ESP,0xc                         ; 0050e54b
    JMP 0x0050e52e                      ; 0050e54e
        ;   XREF to: 0050e52e (UNCONDITIONAL_JUMP)  ; LAB_0050e52e

