; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a23c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[21]:
;   FUN_00410490 at 0041103c
;   FUN_00424550 at 00424bda
;   FUN_0047b270 at 0047b455
;   FUN_00487eb0 at 00487fe0
;   FUN_00499350 at 00499461
;   FUN_00499eb0 at 00499f00
;   FUN_0049d090 at 0049d41d
;   FUN_0049fdf0 at 004a0364
;   FUN_004a2090 at 004a227c
;   FUN_004a5b10 at 004a5b89
;   ... and 11 more
;
; Referenced Globals:
;   undefined4 DAT_01cb4eb0
;   undefined4 DAT_01cb4ef0
;
; Called Functions:
;   FUN_0040cea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a23c0
        ;   Label: FUN_004a23c0
    PUSH EDI                            ; 004a23c1
    PUSH EBP                            ; 004a23c2
    MOV EDX,dword ptr [0x01cb4eb0]      ; 004a23c3 | DAT_01cb4eb0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a23c9
    ADD EAX,EDX                         ; 004a23d0
    SHL EAX,0x2                         ; 004a23d2
    MOV EBX,0x1cb4eb4                   ; 004a23d5
    ADD EAX,EDX                         ; 004a23da
    INC EDX                             ; 004a23dc
    SHL EAX,0x2                         ; 004a23dd
    MOV dword ptr [0x01cb4eb0],EDX      ; 004a23e0 | DAT_01cb4eb0
    ADD EBX,EAX                         ; 004a23e6
    CMP EDX,0x100                       ; 004a23e8
    JL 0x004a23fa                       ; 004a23ee
        ;   XREF to: 004a23fa (CONDITIONAL_JUMP)  ; LAB_004a23fa
    PUSH ESI                            ; 004a23f0
    XOR ESI,ESI                         ; 004a23f1
    MOV dword ptr [0x01cb4eb0],ESI      ; 004a23f3 | DAT_01cb4eb0
    POP ESI                             ; 004a23f9
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a23fa
        ;   Label: LAB_004a23fa
    PUSH EDI                            ; 004a23fe
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a23ff
    PUSH EBP                            ; 004a2403
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a2404 | DAT_01cb4ef0
    PUSH EBX                            ; 004a2407
    CALL dword ptr [EAX]                ; 004a2408
    ADD ESP,0xc                         ; 004a240a
    PUSH 0xffff                         ; 004a240d
    PUSH 0xc000                         ; 004a2412
    CALL FUN_0040cea0                   ; 004a2417
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 004a241c
    MOV EDX,EAX                         ; 004a241f
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a2421
    IMUL EDX                            ; 004a2425
    SHRD EAX,EDX,0x10                   ; 004a2427
    MOV dword ptr [EBX + 0x48],0x0      ; 004a242b
    MOV dword ptr [EBX + 0x40],EAX      ; 004a2432
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a2435
    MOV dword ptr [EBX + 0x44],EAX      ; 004a2439
    MOV EAX,dword ptr [ESP + 0x24]      ; 004a243c
    MOV dword ptr [EBX + 0x4c],EAX      ; 004a2440
    MOV EAX,dword ptr [ESP + 0x28]      ; 004a2443
    MOV dword ptr [EBX + 0x50],EAX      ; 004a2447
    POP EBP                             ; 004a244a
    POP EDI                             ; 004a244b
    POP EBX                             ; 004a244c
    RET                                 ; 004a244d

