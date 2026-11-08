; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a2450(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[6]:
;   FUN_00410490 at 00410e08
;   FUN_00486d40 at 004870c0
;   FUN_004ae850 at 004aec06
;   FUN_004d0fc0 at 004d124f
;   FUN_00527d70 at 0052819a
;   FUN_0056b410 at 0056b6f4
;
; Referenced Globals:
;   undefined4 DAT_01cbb9b8
;
; Called Functions:
;   FUN_0049a390
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004a2450
        ;   Label: FUN_004a2450
    PUSH EDI                            ; 004a2451
    MOV EDX,dword ptr [0x01cbb9b8]      ; 004a2452 | DAT_01cbb9b8
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a2458
    SUB EAX,EDX                         ; 004a245f
    SHL EAX,0x3                         ; 004a2461
    SUB EAX,EDX                         ; 004a2464
    SHL EAX,0x2                         ; 004a2466
    INC EDX                             ; 004a2469
    ADD EAX,0x1cbb9bc                   ; 004a246a
    MOV dword ptr [0x01cbb9b8],EDX      ; 004a246f | DAT_01cbb9b8
    CMP EDX,0x14                        ; 004a2475
    JL 0x004a2484                       ; 004a2478
        ;   XREF to: 004a2484 (CONDITIONAL_JUMP)  ; LAB_004a2484
    PUSH EBX                            ; 004a247a
    XOR EBX,EBX                         ; 004a247b
    MOV dword ptr [0x01cbb9b8],EBX      ; 004a247d | DAT_01cbb9b8
    POP EBX                             ; 004a2483
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a2484
        ;   Label: LAB_004a2484
    PUSH ESI                            ; 004a2488
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a2489
    PUSH EDI                            ; 004a248d
    PUSH EAX                            ; 004a248e
    CALL FUN_0049a390                   ; 004a248f
        ;   XREF to: 0049a390 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a390()
    ADD ESP,0xc                         ; 004a2494
    POP EDI                             ; 004a2497
    POP ESI                             ; 004a2498
    RET                                 ; 004a2499

