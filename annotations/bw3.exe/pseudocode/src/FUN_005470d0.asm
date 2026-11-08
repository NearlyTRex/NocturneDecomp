; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005470d0(void)
;
;
; Called Functions:
;   FUN_0040ce40
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005470d0
        ;   Label: FUN_005470d0
    PUSH 0x41700000                     ; 005470d3
    PUSH 0x41200000                     ; 005470d8
    CALL FUN_0040ce40                   ; 005470dd
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0xc],EAX       ; 005470e2
    FLD float ptr [ESP + 0xc]           ; 005470e6
    ADD ESP,0x8                         ; 005470ea
    FSTP float ptr [ESP]                ; 005470ed
    MOV EAX,dword ptr [ESP]             ; 005470f0
    ADD ESP,0x8                         ; 005470f3
    LEA EAX,[EAX]                       ; 005470f6
    LEA EDX,[EDX]                       ; 005470fc
    RET                                 ; 00547100
        ;   Label: LAB_00547100

