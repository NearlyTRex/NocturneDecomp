; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004fd330(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd330
        ;   Label: FUN_004fd330
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fd331
    PUSH EBX                            ; 004fd335
    CALL FUN_004085c0                   ; 004fd336
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 004fd33b
    ADD EAX,0x158                       ; 004fd33e
    PUSH EAX                            ; 004fd343
    CALL FUN_00468860                   ; 004fd344
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 004fd349
    LEA EBX,[EAX + 0xfffffea8]          ; 004fd34c
    PUSH 0x5e6b63                       ; 004fd352
    LEA EAX,[EBX + 0x158]               ; 004fd357
    PUSH EAX                            ; 004fd35d
    MOV dword ptr [EBX + 0x154],0x602c04 ; 004fd35e
    CALL FUN_00468950                   ; 004fd368
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    MOV dword ptr [EBX + 0x2d4],0x40000000 ; 004fd36d
    MOV dword ptr [EBX + 0x2d8],0x41200000 ; 004fd377
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004fd381
    LEA EAX,[EBX + 0x2e4]               ; 004fd38b
    MOV dword ptr [EBX + 0x2e0],0x0     ; 004fd391
    MOV dword ptr [EAX + 0x8],0x0       ; 004fd39b
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fd3a2
    MOV dword ptr [EAX + 0x4],EDX       ; 004fd3a5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004fd3a8
    MOV dword ptr [EAX],EDX             ; 004fd3ab
    LEA EAX,[EBX + 0x2f0]               ; 004fd3ad
    MOV dword ptr [EAX + 0x8],0x0       ; 004fd3b3
    ADD ESP,0x8                         ; 004fd3ba
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fd3bd
    MOV dword ptr [EAX + 0x4],EDX       ; 004fd3c0
    MOV EDX,dword ptr [EAX + 0x4]       ; 004fd3c3
    MOV dword ptr [EAX],EDX             ; 004fd3c6
    MOV EAX,EBX                         ; 004fd3c8
    MOV dword ptr [EBX + 0x2fc],0x0     ; 004fd3ca
    POP EBX                             ; 004fd3d4
    RET                                 ; 004fd3d5

