; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cabf0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005baf90
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cc9454
;
; Called Functions:
;   FUN_004544d0
;   FUN_00454530
;   FUN_00460aa0
;   thunk_FUN_004cdbc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cabf0
        ;   Label: FUN_004cabf0
    PUSH ESI                            ; 004cabf1
    PUSH EBP                            ; 004cabf2
    MOV EBP,ESP                         ; 004cabf3
    SUB ESP,0x4                         ; 004cabf5
    MOV ESI,dword ptr [EBP + 0x10]      ; 004cabf8
    MOV EBX,dword ptr [EBP + 0x14]      ; 004cabfb
    LEA EAX,[EBX*0x4 + 0x0]             ; 004cabfe
    SUB EAX,EBX                         ; 004cac05
    SHL EAX,0x5                         ; 004cac07
    LEA EBX,[ESI + 0x1338]              ; 004cac0a
    ADD EBX,EAX                         ; 004cac10
    MOV EAX,[0x005baf90]                ; 004cac12 | DAT_005baf90
    CMP dword ptr [EAX + 0x4],0x0       ; 004cac17 | DAT_01cc9454
    JNZ 0x004cac2f                      ; 004cac1b
        ;   XREF to: 004cac2f (CONDITIONAL_JUMP)  ; LAB_004cac2f
    FLD float ptr [EBX + 0x18]          ; 004cac1d
    FLDZ                                ; 004cac20
    FCOMPP                              ; 004cac22
    FNSTSW AX                           ; 004cac24
    SAHF                                ; 004cac26
    JC 0x004cac2f                       ; 004cac27
        ;   XREF to: 004cac2f (CONDITIONAL_JUMP)  ; LAB_004cac2f
    MOV ESP,EBP                         ; 004cac29
    POP EBP                             ; 004cac2b
    POP ESI                             ; 004cac2c
    POP EBX                             ; 004cac2d
    RET                                 ; 004cac2e
    LEA EAX,[EBX + 0x1c]                ; 004cac2f
        ;   Label: LAB_004cac2f
    PUSH EAX                            ; 004cac32
    LEA EAX,[EBX + 0x28]                ; 004cac33
    PUSH EAX                            ; 004cac36
    MOV ECX,dword ptr [0x005ae704]      ; 004cac37 | DAT_005ae704
    PUSH ECX                            ; 004cac3d | DAT_01b4d738
    CALL FUN_00460aa0                   ; 004cac3e
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460aa0()
    ADD ESP,0xc                         ; 004cac43
    PUSH -0x1                           ; 004cac46
    ADD ESI,0x448                       ; 004cac48
    PUSH ESI                            ; 004cac4e
    CALL FUN_00454530                   ; 004cac4f
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined FUN_00454530()
    MOV EAX,dword ptr [EAX + 0x100]     ; 004cac54
    DEC EAX                             ; 004cac5a
    MOV dword ptr [EBP + -0x4],EAX      ; 004cac5b
    ADD ESP,0x4                         ; 004cac5e
    FILD dword ptr [EBP + -0x4]         ; 004cac61
    FMUL float ptr [EBX + 0x18]         ; 004cac64
    SUB ESP,0x4                         ; 004cac67
    FSTP float ptr [ESP]                ; 004cac6a
    PUSH ESI                            ; 004cac6d
    CALL FUN_004544d0                   ; 004cac6e
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004544d0()
    ADD ESP,0xc                         ; 004cac73
    MOV EBX,dword ptr [0x005ae704]      ; 004cac76 | DAT_005ae704
    PUSH EBX                            ; 004cac7c | DAT_01b4d738
    CALL thunk_FUN_004cdbc0             ; 004cac7d
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004cdbc0()
    ADD ESP,0x4                         ; 004cac82
    MOV ESP,EBP                         ; 004cac85
    POP EBP                             ; 004cac87
    POP ESI                             ; 004cac88
    POP EBX                             ; 004cac89
    RET                                 ; 004cac8a

