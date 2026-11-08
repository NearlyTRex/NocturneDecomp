; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005ad4c0(undefined4 param_1)
;
;
; XREF[15]:
;   FUN_00410460 at 00410465
;   FUN_00449770 at 00449776
;   FUN_004924e0 at 004924e6
;   FUN_0049e000 at 0049e006
;   FUN_004b95c0 at 004b95c6
;   FUN_004b9910 at 004b9916
;   FUN_004e85d0 at 004e85d6
;   FUN_004ffeb0 at 004ffeb6
;   FUN_00501610 at 00501616
;   FUN_00509550 at 00509558
;   ... and 5 more
;
; Referenced Globals:
;   TerminatedCString s_gat_kfm_005f989a
;   void* PTR_FUN_00607e74 = 005ad640
;
; Called Functions:
;   FUN_004085c0
;   FUN_0041da00
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad4c0
        ;   Label: FUN_005ad4c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ad4c1
    PUSH EBX                            ; 005ad4c5
    CALL FUN_004085c0                   ; 005ad4c6
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 005ad4cb
    ADD EAX,0x158                       ; 005ad4ce
    PUSH EAX                            ; 005ad4d3
    CALL FUN_00468860                   ; 005ad4d4
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 005ad4d9
    ADD EAX,0x1b0                       ; 005ad4dc
    PUSH EAX                            ; 005ad4e1
    CALL FUN_0041da00                   ; 005ad4e2
        ;   XREF to: 0041da00 (UNCONDITIONAL_CALL)  ; undefined FUN_0041da00()
    LEA EBX,[EAX + 0xfffffcf8]          ; 005ad4e7
    MOV dword ptr [EBX + 0x154],0x607e74 ; 005ad4ed | PTR_FUN_00607e74
    MOV dword ptr [EBX + 0x564],0x40a00000 ; 005ad4f7
    MOV dword ptr [EBX + 0x300],0x0     ; 005ad501
    MOV dword ptr [EBX + 0x2d4],0x0     ; 005ad50b
    MOV dword ptr [EBX + 0x304],0x0     ; 005ad515
    MOV dword ptr [EBX + 0x568],0x14    ; 005ad51f
    MOV dword ptr [EBX + 0x56c],0x0     ; 005ad529
    MOV dword ptr [EBX + 0x2d8],0x0     ; 005ad533
    MOV dword ptr [EBX + 0x2dc],0x0     ; 005ad53d
    MOV dword ptr [EBX + 0x2e0],0x0     ; 005ad547
    MOV dword ptr [EBX + 0x2e4],0x0     ; 005ad551
    MOV dword ptr [EBX + 0x2e8],0x43480000 ; 005ad55b
    MOV dword ptr [EBX + 0x2ec],0x0     ; 005ad565
    ADD ESP,0x4                         ; 005ad56f
    MOV dword ptr [EBX + 0x2f0],0x1     ; 005ad572
    PUSH 0x5f989a                       ; 005ad57c | = "gat.kfm"
    MOV dword ptr [EBX + 0x2f4],0xff    ; 005ad581
    LEA EAX,[EBX + 0x158]               ; 005ad58b
    MOV dword ptr [EBX + 0x2f8],0x0     ; 005ad591
    PUSH EAX                            ; 005ad59b
    MOV dword ptr [EBX + 0x2fc],0x0     ; 005ad59c
    CALL FUN_00468950                   ; 005ad5a6
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 005ad5ab
    MOV dword ptr [EBX + 0x570],0x0     ; 005ad5ae
    MOV EAX,EBX                         ; 005ad5b8
    MOV dword ptr [EBX + 0x574],0x0     ; 005ad5ba
    POP EBX                             ; 005ad5c4
    RET                                 ; 005ad5c5

