; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a4ad0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c0b05
;   undefined4 DAT_005c0b0d
;   undefined4 DAT_005c0b15
;   undefined4 DAT_005c0b1d
;
; Called Functions:
;   FUN_0045ab30
;   FUN_004625f0
;   FUN_0057ad70
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a4ad0
        ;   Label: FUN_004a4ad0
    PUSH ESI                            ; 004a4ad1
    PUSH EBP                            ; 004a4ad2
    MOV EBP,ESP                         ; 004a4ad3
    SUB ESP,0x8                         ; 004a4ad5
    AND ESP,0xfffffff8                  ; 004a4ad8
    MOV EBX,dword ptr [EBP + 0x10]      ; 004a4adb
    PUSH EBX                            ; 004a4ade
    CALL FUN_0057ad70                   ; 004a4adf
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; undefined FUN_0057ad70()
    ADD ESP,0x4                         ; 004a4ae4
    PUSH 0x5dbca0                       ; 004a4ae7
    PUSH 0xc                            ; 004a4aec
    ADD EAX,0x614                       ; 004a4aee
    PUSH EAX                            ; 004a4af3
    CALL FUN_005a30d7                   ; 004a4af4
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 004a4af9
    LEA EBX,[EAX + 0xfffff9ec]          ; 004a4afc
    PUSH 0x5c0af8                       ; 004a4b02
    LEA EAX,[EBX + 0x158]               ; 004a4b07
    PUSH EAX                            ; 004a4b0d
    MOV dword ptr [EBX + 0x154],0x5dfd34 ; 004a4b0e
    CALL FUN_004625f0                   ; 004a4b18
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004a4b1d
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004a4b27
    MOV dword ptr [EBX + 0x2e4],0x1     ; 004a4b31
    MOV dword ptr [EBX + 0x2e8],0x42480000 ; 004a4b3b
    MOV dword ptr [EBX + 0x2ec],0x0     ; 004a4b45
    MOV dword ptr [EBX + 0x2e0],0xc     ; 004a4b4f
    MOV dword ptr [EBX + 0x56c],0xa     ; 004a4b59
    MOV dword ptr [EBX + 0x58c],0xf     ; 004a4b63
    MOV dword ptr [EBX + 0x574],0x1     ; 004a4b6d
    ADD ESP,0x8                         ; 004a4b77
    MOV dword ptr [EBX + 0x57c],0x0     ; 004a4b7a
    LEA ESI,[EBX + 0x594]               ; 004a4b84
    MOV dword ptr [EBX + 0x578],0x2     ; 004a4b8a
    PUSH 0x41000000                     ; 004a4b94
    MOV dword ptr [ESI + 0x3c],0x8000   ; 004a4b99
    PUSH ESI                            ; 004a4ba0
    MOV byte ptr [ESI + 0x1c],0x20      ; 004a4ba1
    CALL FUN_0045ab30                   ; 004a4ba5
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; undefined FUN_0045ab30()
    ADD ESP,0x8                         ; 004a4baa
    MOV dword ptr [ESI + 0x20],0x1      ; 004a4bad
    LEA ESI,[EBX + 0x5d4]               ; 004a4bb4
    PUSH 0x41000000                     ; 004a4bba
    MOV dword ptr [ESI + 0x3c],0x8000   ; 004a4bbf
    PUSH ESI                            ; 004a4bc6
    MOV byte ptr [ESI + 0x1c],0x20      ; 004a4bc7
    CALL FUN_0045ab30                   ; 004a4bcb
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; undefined FUN_0045ab30()
    ADD ESP,0x8                         ; 004a4bd0
    MOV EAX,EBX                         ; 004a4bd3
    MOV dword ptr [ESI + 0x20],0x1      ; 004a4bd5
    LEA EDX,[EBX + 0x1fb0]              ; 004a4bdc
    MOV dword ptr [EBX + 0x25c4],0x0    ; 004a4be2
    ADD EAX,0x2a4                       ; 004a4bec
        ;   Label: LAB_004a4bec
    MOV dword ptr [EAX + 0x4c8],0x3f000000 ; 004a4bf1
    MOV dword ptr [EAX + 0x4cc],0x3f800000 ; 004a4bfb
    MOV dword ptr [EAX + 0x4d0],0x3f000000 ; 004a4c05
    MOV dword ptr [EAX + 0x518],0x0     ; 004a4c0f
    MOV dword ptr [EAX + 0x51c],0x0     ; 004a4c19
    CMP EAX,EDX                         ; 004a4c23
    JNZ 0x004a4bec                      ; 004a4c25
        ;   XREF to: 004a4bec (CONDITIONAL_JUMP)  ; LAB_004a4bec
    MOV EAX,EBX                         ; 004a4c27
    XOR EDX,EDX                         ; 004a4c29
    FLD float ptr [0x005c0b0d]          ; 004a4c2b | DAT_005c0b0d
    FLD double ptr [0x005c0b1d]         ; 004a4c31 | DAT_005c0b1d
    FLD double ptr [0x005c0b05]         ; 004a4c37 | DAT_005c0b05
    MOV dword ptr [ESP + 0x4],EDX       ; 004a4c3d
        ;   Label: LAB_004a4c3d
    FILD dword ptr [ESP + 0x4]          ; 004a4c41
    FMUL ST1                            ; 004a4c45
    FADD ST0,ST2                        ; 004a4c47
    ADD EAX,0x2a4                       ; 004a4c49
    FST float ptr [ESP]                 ; 004a4c4e
    MOV ESI,dword ptr [ESP]             ; 004a4c51
    FMUL ST3                            ; 004a4c54
    MOV dword ptr [EAX + 0x4c8],ESI     ; 004a4c56
    MOV dword ptr [EAX + 0x4d0],ESI     ; 004a4c5c
    INC EDX                             ; 004a4c62
    FSTP float ptr [EAX + 0x4cc]        ; 004a4c63
    CMP EDX,0x6                         ; 004a4c69
    JL 0x004a4c3d                       ; 004a4c6c
        ;   XREF to: 004a4c3d (CONDITIONAL_JUMP)  ; LAB_004a4c3d
    FSTP ST0                            ; 004a4c6e
    MOV EDX,0x6                         ; 004a4c70
    FSTP ST0                            ; 004a4c75
    LEA EAX,[EBX + 0xfd8]               ; 004a4c77
    FLD double ptr [0x005c0b1d]         ; 004a4c7d | DAT_005c0b1d
    FLD double ptr [0x005c0b15]         ; 004a4c83 | DAT_005c0b15
    MOV dword ptr [ESP + 0x4],EDX       ; 004a4c89
        ;   Label: LAB_004a4c89
    FILD dword ptr [ESP + 0x4]          ; 004a4c8d
    FMUL ST1                            ; 004a4c91
    FADD ST0,ST2                        ; 004a4c93
    ADD EAX,0x2a4                       ; 004a4c95
    FST float ptr [ESP]                 ; 004a4c9a
    MOV ESI,dword ptr [ESP]             ; 004a4c9d
    FMUL ST3                            ; 004a4ca0
    MOV dword ptr [EAX + 0x4c8],ESI     ; 004a4ca2
    MOV dword ptr [EAX + 0x4d0],ESI     ; 004a4ca8
    INC EDX                             ; 004a4cae
    FSTP float ptr [EAX + 0x4cc]        ; 004a4caf
    CMP EDX,0xc                         ; 004a4cb5
    JL 0x004a4c89                       ; 004a4cb8
        ;   XREF to: 004a4c89 (CONDITIONAL_JUMP)  ; LAB_004a4c89
    FSTP ST0                            ; 004a4cba
    FSTP ST0                            ; 004a4cbc
    MOV EAX,EBX                         ; 004a4cbe
    FSTP ST0                            ; 004a4cc0
    MOV ESP,EBP                         ; 004a4cc2
    POP EBP                             ; 004a4cc4
    POP ESI                             ; 004a4cc5
    POP EBX                             ; 004a4cc6
    RET                                 ; 004a4cc7

