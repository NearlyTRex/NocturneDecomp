; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00421ca0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_00422ed0 at 00422ed5
;   FUN_00584eb0 at 00584eb5
;
; Called Functions:
;   FUN_004085c0
;   FUN_0041da00
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421ca0
        ;   Label: FUN_00421ca0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00421ca1
    PUSH EBX                            ; 00421ca5
    CALL FUN_004085c0                   ; 00421ca6
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 00421cab
    ADD EAX,0x158                       ; 00421cae
    PUSH EAX                            ; 00421cb3
    CALL FUN_00468860                   ; 00421cb4
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 00421cb9
    ADD EAX,0x23c                       ; 00421cbc
    PUSH EAX                            ; 00421cc1
    CALL FUN_0041da00                   ; 00421cc2
        ;   XREF to: 0041da00 (UNCONDITIONAL_CALL)  ; undefined FUN_0041da00()
    LEA EBX,[EAX + 0xfffffc6c]          ; 00421cc7
    MOV dword ptr [EBX + 0x154],0x5fce54 ; 00421ccd
    MOV dword ptr [EBX + 0x390],0x0     ; 00421cd7
    MOV dword ptr [EBX + 0x30c],0x41a00000 ; 00421ce1
    LEA EAX,[EBX + 0x300]               ; 00421ceb
    MOV dword ptr [EBX + 0x310],0x0     ; 00421cf1
    MOV dword ptr [EAX + 0x8],0x0       ; 00421cfb
    MOV EDX,dword ptr [EAX + 0x8]       ; 00421d02
    MOV dword ptr [EAX + 0x4],EDX       ; 00421d05
    MOV EDX,dword ptr [EAX + 0x4]       ; 00421d08
    MOV dword ptr [EAX],EDX             ; 00421d0b
    MOV byte ptr [EBX + 0x2d4],0x0      ; 00421d0d
    MOV byte ptr [EBX + 0x2e8],0x0      ; 00421d14
    MOV dword ptr [EBX + 0x2fc],0x0     ; 00421d1b
    MOV dword ptr [EBX + 0x314],0x0     ; 00421d25
    MOV dword ptr [EBX + 0x31c],0x0     ; 00421d2f
    MOV dword ptr [EBX + 0x318],0x0     ; 00421d39
    MOV dword ptr [EBX + 0x320],0x0     ; 00421d43
    MOV byte ptr [EBX + 0x32c],0x0      ; 00421d4d
    MOV dword ptr [EBX + 0x324],0x0     ; 00421d54
    LEA EAX,[EBX + 0x66c]               ; 00421d5e
    MOV dword ptr [EBX + 0x5f0],0x0     ; 00421d64
    ADD ESP,0x4                         ; 00421d6e
    MOV dword ptr [EAX + 0x8],0x0       ; 00421d71
    PUSH 0x5d4bf4                       ; 00421d78
    MOV EDX,dword ptr [EAX + 0x8]       ; 00421d7d
    MOV dword ptr [EAX + 0x4],EDX       ; 00421d80
    MOV EDX,dword ptr [EAX + 0x4]       ; 00421d83
    MOV dword ptr [EAX],EDX             ; 00421d86
    LEA EAX,[EBX + 0x158]               ; 00421d88
    PUSH EAX                            ; 00421d8e
    CALL FUN_00468950                   ; 00421d8f
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    MOV dword ptr [EBX + 0x5e8],0xffffffff ; 00421d94
    MOV dword ptr [EBX + 0x5f4],0x1     ; 00421d9e
    MOV dword ptr [EBX + 0x5f8],0x1     ; 00421da8
    MOV dword ptr [EBX + 0x5fc],0x0     ; 00421db2
    MOV byte ptr [EBX + 0x600],0x0      ; 00421dbc
    ADD ESP,0x8                         ; 00421dc3
    MOV dword ptr [EBX + 0x664],0x0     ; 00421dc6
    MOV EAX,EBX                         ; 00421dd0
    MOV dword ptr [EBX + 0x668],0x0     ; 00421dd2
    POP EBX                             ; 00421ddc
    RET                                 ; 00421ddd

