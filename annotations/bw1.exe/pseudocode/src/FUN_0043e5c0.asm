; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0043e5c0(undefined4 param_1)
;
;
; XREF[5]:
;   FUN_00441cc0 at 00441cf6
;   FUN_004c6270 at 004c6286
;   FUN_0050f0c0 at 0050f0d5
;   FUN_00592e00 at 00592e14
;   FUN_005a5170 at 005a5192
;
; Referenced Globals:
;   undefined4 DAT_005fd910
;   undefined4 DAT_005fd930
;
; Called Functions:
;   FUN_004667e0
;   FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043e5c0
        ;   Label: FUN_0043e5c0
    PUSH EAX                            ; 0043e5c4
    CALL FUN_004667e0                   ; 0043e5c5
        ;   XREF to: 004667e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004667e0()
    ADD ESP,0x4                         ; 0043e5ca
    PUSH 0x5fd910                       ; 0043e5cd | DAT_005fd910
    PUSH 0x320                          ; 0043e5d2
    ADD EAX,0x398                       ; 0043e5d7
    PUSH EAX                            ; 0043e5dc
    CALL FUN_005c0357                   ; 0043e5dd
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 0043e5e2
    PUSH 0x5fd930                       ; 0043e5e5 | DAT_005fd930
    PUSH 0x32                           ; 0043e5ea
    ADD EAX,0x377b8                     ; 0043e5ec
    PUSH EAX                            ; 0043e5f1
    CALL FUN_005c0357                   ; 0043e5f2
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    MOV dword ptr [EAX + 0x2fac],0x0    ; 0043e5f7
    MOV dword ptr [EAX + -0x4],0x0      ; 0043e601
    ADD ESP,0xc                         ; 0043e608
    MOV dword ptr [EAX + -0xc],0x0      ; 0043e60b
    SUB EAX,0x37b50                     ; 0043e612
    RET                                 ; 0043e617

