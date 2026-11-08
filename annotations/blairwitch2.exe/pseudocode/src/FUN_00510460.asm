; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00510460(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_004d0f30 at 004d0f38
;   FUN_004d12d0 at 004d12d8
;   FUN_004d4780 at 004d4788
;   FUN_00511410 at 00511418
;   FUN_00571b30 at 00571b36
;   FUN_00571db0 at 00571db6
;
; Called Functions:
;   FUN_0040cf60
;   FUN_00422340
;   FUN_00511c90
;   FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510460
        ;   Label: FUN_00510460
    SUB ESP,0x4                         ; 00510461
    MOV EBX,dword ptr [ESP + 0xc]       ; 00510464
    PUSH EBX                            ; 00510468
    CALL FUN_00422340                   ; 00510469
        ;   XREF to: 00422340 (UNCONDITIONAL_CALL)  ; undefined FUN_00422340()
    ADD ESP,0x4                         ; 0051046e
    ADD EAX,0x10a60                     ; 00510471
    PUSH EAX                            ; 00510476
    CALL FUN_00511c90                   ; 00510477
        ;   XREF to: 00511c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00511c90()
    LEA EBX,[EAX + 0xfffef5a0]          ; 0051047c
    MOV dword ptr [EBX + 0x2b0],0x5fa754 ; 00510482
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 0051048c
    ADD ESP,0x4                         ; 00510496
    MOV dword ptr [EBX + 0x3434],0x3f666666 ; 00510499
    PUSH 0x3f8ccccd                     ; 005104a3
    MOV dword ptr [EBX + 0x3440],0x3fcccccd ; 005104a8
    PUSH 0x3f666666                     ; 005104b2
    MOV dword ptr [EBX + 0x3444],0xc479c000 ; 005104b7
    CALL FUN_0040cf60                   ; 005104c1
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 005104c6
    FLD float ptr [ESP + 0x8]           ; 005104ca
    ADD ESP,0x8                         ; 005104ce
    PUSH 0x5e14b9                       ; 005104d1
    LEA EAX,[EBX + 0x2b4]               ; 005104d6
    PUSH EAX                            ; 005104dc
    FSTP float ptr [EBX + 0x24344]      ; 005104dd
    CALL FUN_005478b0                   ; 005104e3
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    MOV dword ptr [EBX + 0x282c],0x0    ; 005104e8
    ADD ESP,0x8                         ; 005104f2
    MOV dword ptr [EBX + 0x2433c],0x0   ; 005104f5
    MOV EAX,EBX                         ; 005104ff
    MOV dword ptr [EBX + 0x24340],0x0   ; 00510501
    ADD ESP,0x4                         ; 0051050b
    POP EBX                             ; 0051050e
    RET                                 ; 0051050f

