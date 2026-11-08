; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005624b0(void)
;
;
; Called Functions:
;   FUN_0040cc00
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005624b0
        ;   Label: FUN_005624b0
    PUSH 0x41700000                     ; 005624b3
    PUSH 0x41200000                     ; 005624b8
    CALL FUN_0040cc00                   ; 005624bd
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0xc],EAX       ; 005624c2
    FLD float ptr [ESP + 0xc]           ; 005624c6
    ADD ESP,0x8                         ; 005624ca
    FSTP float ptr [ESP]                ; 005624cd
    MOV EAX,dword ptr [ESP]             ; 005624d0
    ADD ESP,0x8                         ; 005624d3
    LEA EAX,[EAX]                       ; 005624d6
    LEA EDX,[EDX]                       ; 005624dc
    RET                                 ; 005624e0
        ;   Label: LAB_005624e0

