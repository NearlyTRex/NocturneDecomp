; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b0b40(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_grave1.kfm_005851fd
;   undefined1* PTR_FUN_0059e5d4 = 004b0bd0
;
; Called Functions:
;   FUN_00409d30
;   FUN_00454490
;   FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0b40
        ;   Label: FUN_004b0b40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b0b41
    PUSH EBX                            ; 004b0b45
    CALL FUN_00409d30                   ; 004b0b46
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    ADD ESP,0x4                         ; 004b0b4b
    ADD EAX,0x150                       ; 004b0b4e
    PUSH EAX                            ; 004b0b53
    CALL FUN_00454490                   ; 004b0b54
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined FUN_00454490()
    ADD ESP,0x4                         ; 004b0b59
    LEA EBX,[EAX + 0xfffffeb0]          ; 004b0b5c
    PUSH 0x5851fd                       ; 004b0b62 | = "grave1.kfm"
    LEA EAX,[EBX + 0x150]               ; 004b0b67
    PUSH EAX                            ; 004b0b6d
    MOV dword ptr [EBX + 0x14c],0x59e5d4 ; 004b0b6e | PTR_FUN_0059e5d4
    CALL FUN_00454580                   ; 004b0b78
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    MOV dword ptr [EBX + 0x2cc],0x0     ; 004b0b7d
    MOV dword ptr [EBX + 0x2d0],0x41f00000 ; 004b0b87
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004b0b91
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004b0b9b
    MOV dword ptr [EBX + 0x2dc],0x1     ; 004b0ba5
    ADD ESP,0x8                         ; 004b0baf
    MOV byte ptr [EBX + 0x2e0],0x0      ; 004b0bb2
    MOV EAX,EBX                         ; 004b0bb9
    MOV byte ptr [EBX + 0x344],0x0      ; 004b0bbb
    POP EBX                             ; 004b0bc2
    RET                                 ; 004b0bc3

