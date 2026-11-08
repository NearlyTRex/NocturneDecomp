; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410c20(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_0040cc00
;   FUN_00411060
;   FUN_00447db0
;   FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410c20
        ;   Label: FUN_00410c20
    SUB ESP,0x4                         ; 00410c21
    MOV EBX,dword ptr [ESP + 0xc]       ; 00410c24
    LEA EAX,[EBX + 0x188]               ; 00410c28
    PUSH EAX                            ; 00410c2e
    CALL FUN_004688e0                   ; 00410c2f
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 00410c34
    LEA EAX,[EBX + 0x158]               ; 00410c37
    PUSH EAX                            ; 00410c3d
    LEA EAX,[EBX + 0x178]               ; 00410c3e
    PUSH EAX                            ; 00410c44
    CALL FUN_00447db0                   ; 00410c45
        ;   XREF to: 00447db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00447db0()
    ADD ESP,0x8                         ; 00410c4a
    PUSH EBX                            ; 00410c4d
    CALL FUN_00408850                   ; 00410c4e
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 00410c53
    PUSH EBX                            ; 00410c56
    CALL FUN_00411060                   ; 00410c57
        ;   XREF to: 00411060 (UNCONDITIONAL_CALL)  ; undefined FUN_00411060()
    ADD ESP,0x4                         ; 00410c5c
    PUSH dword ptr [EBX + 0x37c]        ; 00410c5f
    PUSH dword ptr [EBX + 0x378]        ; 00410c65
    MOV dword ptr [EBX + 0x380],0x0     ; 00410c6b
    CALL FUN_0040cc00                   ; 00410c75
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x8],EAX       ; 00410c7a
    MOV EAX,dword ptr [ESP + 0x8]       ; 00410c7e
    MOV dword ptr [EBX + 0x384],EAX     ; 00410c82
    ADD ESP,0x8                         ; 00410c88
    ADD ESP,0x4                         ; 00410c8b
    POP EBX                             ; 00410c8e
    RET                                 ; 00410c8f

