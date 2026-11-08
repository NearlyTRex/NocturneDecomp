; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046cf50(int param_1)
;
;
; Called Functions:
;   FUN_0040cf60
;   FUN_0044fd00
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046cf50
        ;   Label: FUN_0046cf50
    SUB ESP,0x4                         ; 0046cf51
    MOV EBX,dword ptr [ESP + 0xc]       ; 0046cf54
    LEA EAX,[EBX + 0x2b4]               ; 0046cf58
    PUSH EAX                            ; 0046cf5e
    CALL FUN_0044fd00                   ; 0046cf5f
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    LEA EAX,[EBX + 0x20]                ; 0046cf64
    LEA EDX,[EBX + 0x454]               ; 0046cf67
    MOV dword ptr [EBX + 0x448],0x0     ; 0046cf6d
    ADD ESP,0x4                         ; 0046cf77
    MOV ECX,dword ptr [EDX]             ; 0046cf7a
    MOV dword ptr [EAX],ECX             ; 0046cf7c
    MOV ECX,dword ptr [EDX + 0x4]       ; 0046cf7e
    MOV dword ptr [EAX + 0x4],ECX       ; 0046cf81
    MOV ECX,dword ptr [EDX + 0x8]       ; 0046cf84
    MOV dword ptr [EAX + 0x8],ECX       ; 0046cf87
    PUSH dword ptr [EBX + 0x440]        ; 0046cf8a
    PUSH dword ptr [EBX + 0x43c]        ; 0046cf90
    CALL FUN_0040cf60                   ; 0046cf96
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 0046cf9b
    FLD float ptr [ESP + 0x8]           ; 0046cf9f
    ADD ESP,0x8                         ; 0046cfa3
    PUSH 0x5d1789                       ; 0046cfa6
    PUSH 0x1bd3848                      ; 0046cfab
    FSTP float ptr [EBX + 0x438]        ; 0046cfb0
    CALL FUN_0044fd70                   ; 0046cfb6
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0046cfbb
    PUSH 0x1bd3848                      ; 0046cfbe
    CALL FUN_0044fd00                   ; 0046cfc3
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 0046cfc8
    MOV dword ptr [EBX + 0x494],0x0     ; 0046cfcb
    ADD ESP,0x4                         ; 0046cfd5
    POP EBX                             ; 0046cfd8
    RET                                 ; 0046cfd9

