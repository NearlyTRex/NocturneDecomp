; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045fdf0(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045fdf0
        ;   Label: FUN_0045fdf0
    SUB ESP,0x30                        ; 0045fdf1
    MOV EBX,dword ptr [ESP + 0x38]      ; 0045fdf4
    CMP dword ptr [ESP + 0x3c],0x0      ; 0045fdf8
    JZ 0x0045fe08                       ; 0045fdfd
        ;   XREF to: 0045fe08 (CONDITIONAL_JUMP)  ; LAB_0045fe08
    CMP dword ptr [EBX + 0xb24],0x2     ; 0045fdff
    JGE 0x0045fe0d                      ; 0045fe06
        ;   XREF to: 0045fe0d (CONDITIONAL_JUMP)  ; LAB_0045fe0d
    ADD ESP,0x30                        ; 0045fe08
        ;   Label: LAB_0045fe08
    POP EBX                             ; 0045fe0b
    RET                                 ; 0045fe0c
    PUSH EDI                            ; 0045fe0d
        ;   Label: LAB_0045fe0d
    PUSH ESI                            ; 0045fe0e
    PUSH EBX                            ; 0045fe0f
    MOV dword ptr [EBX + 0xb24],0x3     ; 0045fe10
    CALL FUN_004089d0                   ; 0045fe1a
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 0045fe1f
    PUSH 0x0                            ; 0045fe22
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045fe24
    PUSH EBX                            ; 0045fe2a
    LEA ESI,[ESP + 0x10]                ; 0045fe2b
    LEA EDI,[ESP + 0x28]                ; 0045fe2f
    CALL dword ptr [EAX + 0x24]         ; 0045fe33
    MOV ECX,0x6                         ; 0045fe36
    ADD ESP,0x4                         ; 0045fe3b
    LEA EAX,[ESP + 0x24]                ; 0045fe3e
    LEA ESI,[ESP + 0xc]                 ; 0045fe42
    PUSH EAX                            ; 0045fe46
    MOVSD.REP ES:EDI,ESI                ; 0045fe47
    CALL FUN_0041a840                   ; 0045fe49
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 0045fe4e
    TEST EAX,EAX                        ; 0045fe51
    JZ 0x0045fe68                       ; 0045fe53
        ;   XREF to: 0045fe68 (CONDITIONAL_JUMP)  ; LAB_0045fe68
    PUSH -0x1                           ; 0045fe55
    LEA EAX,[EBX + 0x2b4]               ; 0045fe57
    PUSH 0x0                            ; 0045fe5d
    PUSH EAX                            ; 0045fe5f
    CALL FUN_0044fcc0                   ; 0045fe60
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 0045fe65
    PUSH EBX                            ; 0045fe68
        ;   Label: LAB_0045fe68
    CALL FUN_00408a10                   ; 0045fe69
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 0045fe6e
    POP ESI                             ; 0045fe71
    POP EDI                             ; 0045fe72
    ADD ESP,0x30                        ; 0045fe73
    POP EBX                             ; 0045fe76
    RET                                 ; 0045fe77

