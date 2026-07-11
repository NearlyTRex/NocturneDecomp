; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00553d90(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00545b90 at 00545b96
;
; Referenced Globals:
;   string s_gat.kfm_00597b99
;   undefined1* PTR_FUN_005a4154 = 00553f10
;
; Called Functions:
;   FUN_00409d30
;   FUN_0041a610
;   FUN_00454490
;   FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553d90
        ;   Label: FUN_00553d90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00553d91
    PUSH EBX                            ; 00553d95
    CALL FUN_00409d30                   ; 00553d96
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    ADD ESP,0x4                         ; 00553d9b
    ADD EAX,0x150                       ; 00553d9e
    PUSH EAX                            ; 00553da3
    CALL FUN_00454490                   ; 00553da4
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined FUN_00454490()
    ADD ESP,0x4                         ; 00553da9
    ADD EAX,0x1b0                       ; 00553dac
    PUSH EAX                            ; 00553db1
    CALL FUN_0041a610                   ; 00553db2
        ;   XREF to: 0041a610 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a610()
    LEA EBX,[EAX + 0xfffffd00]          ; 00553db7
    MOV dword ptr [EBX + 0x14c],0x5a4154 ; 00553dbd | PTR_FUN_005a4154
    MOV dword ptr [EBX + 0x55c],0x40a00000 ; 00553dc7
    MOV dword ptr [EBX + 0x2f8],0x0     ; 00553dd1
    MOV dword ptr [EBX + 0x2cc],0x0     ; 00553ddb
    MOV dword ptr [EBX + 0x2fc],0x0     ; 00553de5
    MOV dword ptr [EBX + 0x560],0x14    ; 00553def
    MOV dword ptr [EBX + 0x564],0x0     ; 00553df9
    MOV dword ptr [EBX + 0x100],0x1     ; 00553e03
    MOV dword ptr [EBX + 0x2d0],0x0     ; 00553e0d
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00553e17
    MOV dword ptr [EBX + 0x2d8],0x0     ; 00553e21
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00553e2b
    MOV dword ptr [EBX + 0x2e0],0x43480000 ; 00553e35
    MOV dword ptr [EBX + 0x2e4],0x0     ; 00553e3f
    ADD ESP,0x4                         ; 00553e49
    MOV dword ptr [EBX + 0x2e8],0x1     ; 00553e4c
    PUSH 0x597b99                       ; 00553e56 | = "gat.kfm"
    MOV dword ptr [EBX + 0x2ec],0xff    ; 00553e5b
    LEA EAX,[EBX + 0x150]               ; 00553e65
    MOV dword ptr [EBX + 0x2f0],0x0     ; 00553e6b
    PUSH EAX                            ; 00553e75
    MOV dword ptr [EBX + 0x2f4],0x0     ; 00553e76
    CALL FUN_00454580                   ; 00553e80
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    ADD ESP,0x8                         ; 00553e85
    MOV dword ptr [EBX + 0x568],0x0     ; 00553e88
    MOV EAX,EBX                         ; 00553e92
    MOV dword ptr [EBX + 0x56c],0x0     ; 00553e94
    POP EBX                             ; 00553e9e
    RET                                 ; 00553e9f

