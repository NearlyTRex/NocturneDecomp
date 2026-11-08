; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0000(int *param_1,undefined4 param_2,int param_3)
;
;
; XREF[5]:
;   FUN_004f5bc0 at 004f5bf7
;   FUN_004f6a80 at 004f6a9e
;   FUN_004f7590 at 004f765b
;   FUN_00532b80 at 00532ba9
;   FUN_00534420 at 00534442
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;
; Called Functions:
;   FUN_004031c0
;   FUN_0040d6f0
;   FUN_0057a8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0000
        ;   Label: FUN_004e0000
    PUSH EBP                            ; 004e0001
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e0002
    CMP dword ptr [EBX + 0xc],0x0       ; 004e0006
    JZ 0x004e0061                       ; 004e000a
        ;   XREF to: 004e0061 (CONDITIONAL_JUMP)  ; LAB_004e0061
    CMP dword ptr [ESP + 0x14],0x0      ; 004e000c
    JNZ 0x004e0064                      ; 004e0011
        ;   XREF to: 004e0064 (CONDITIONAL_JUMP)  ; LAB_004e0064
    CMP dword ptr [0x005fba1c],0x1e0    ; 004e0013 | DAT_005fba1c
        ;   Label: LAB_004e0013
    JNZ 0x004e0061                      ; 004e001d
        ;   XREF to: 004e0061 (CONDITIONAL_JUMP)  ; LAB_004e0061
    PUSH EDI                            ; 004e001f
    MOV EDI,dword ptr [EBX]             ; 004e0020
    INC EDI                             ; 004e0022
    MOV EBP,dword ptr [EBX + 0x4]       ; 004e0023
    MOV dword ptr [EBX],EDI             ; 004e0026
    CMP EDI,EBP                         ; 004e0028
    JLE 0x004e002e                      ; 004e002a
        ;   XREF to: 004e002e (CONDITIONAL_JUMP)  ; LAB_004e002e
    MOV dword ptr [EBX],EBP             ; 004e002c
    MOV EDX,dword ptr [EBX]             ; 004e002e
        ;   Label: LAB_004e002e
    MOV ECX,dword ptr [EBX + 0x4]       ; 004e0030
    MOV EAX,EDX                         ; 004e0033
    SAR EDX,0x1f                        ; 004e0035
    IDIV ECX                            ; 004e0038
    IMUL EDX,EAX,0xd8ef                 ; 004e003a
    ADD EDX,0x2710                      ; 004e0040
    PUSH EDX                            ; 004e0046
    PUSH 0x12a                          ; 004e0047
    PUSH 0x4b                           ; 004e004c
    PUSH 0x1d70be8                      ; 004e004e
    CALL FUN_0040d6f0                   ; 004e0053
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d6f0()
    ADD ESP,0x10                        ; 004e0058
    CALL FUN_0057a8a0                   ; 004e005b
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
    POP EDI                             ; 004e0060
    POP EBP                             ; 004e0061
        ;   Label: LAB_004e0061
    POP EBX                             ; 004e0062
    RET                                 ; 004e0063
    MOV EDX,dword ptr [0x005fba1c]      ; 004e0064 | DAT_005fba1c
        ;   Label: LAB_004e0064
    PUSH 0x0                            ; 004e006a
    DEC EDX                             ; 004e006c
    PUSH EDX                            ; 004e006d
    MOV EDX,dword ptr [0x005fba18]      ; 004e006e | DAT_005fba18
    DEC EDX                             ; 004e0074
    PUSH EDX                            ; 004e0075
    PUSH 0x0                            ; 004e0076
    PUSH 0x0                            ; 004e0078
    CALL FUN_004031c0                   ; 004e007a
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    ADD ESP,0x14                        ; 004e007f
    JMP 0x004e0013                      ; 004e0082
        ;   XREF to: 004e0013 (UNCONDITIONAL_JUMP)  ; LAB_004e0013

