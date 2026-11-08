; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053fec0(void)
;
;
; Called Functions:
;   FUN_0040cf60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0053fec0
        ;   Label: FUN_0053fec0
    PUSH 0x41700000                     ; 0053fec3
    PUSH 0x41200000                     ; 0053fec8
    CALL FUN_0040cf60                   ; 0053fecd
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xc],EAX       ; 0053fed2
    FLD float ptr [ESP + 0xc]           ; 0053fed6
    ADD ESP,0x8                         ; 0053feda
    FSTP float ptr [ESP]                ; 0053fedd
    MOV EAX,dword ptr [ESP]             ; 0053fee0
    ADD ESP,0x8                         ; 0053fee3
    LEA EAX,[EAX]                       ; 0053fee6
    LEA EDX,[EDX]                       ; 0053feec
    RET                                 ; 0053fef0
        ;   Label: LAB_0053fef0

