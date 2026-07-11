; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00479390(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040a240
;   FUN_0040dda0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479390
        ;   Label: FUN_00479390
    PUSH ESI                            ; 00479391
    SUB ESP,0x28                        ; 00479392
    MOV ESI,dword ptr [ESP + 0x34]      ; 00479395
    MOV EBX,dword ptr [ESP + 0x38]      ; 00479399
    MOV EAX,ESP                         ; 0047939d
    PUSH EAX                            ; 0047939f
    MOV EDX,dword ptr [ESI + 0x14c]     ; 004793a0
    PUSH ESI                            ; 004793a6
    CALL dword ptr [EDX + 0x14]         ; 004793a7
    ADD ESP,0x8                         ; 004793aa
    PUSH dword ptr [ESP + 0xc]          ; 004793ad
    PUSH dword ptr [ESP + 0x4]          ; 004793b1
    CALL FUN_0040dda0                   ; 004793b5
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x2c],EAX      ; 004793ba
    FLD float ptr [ESP + 0x2c]          ; 004793be
    ADD ESP,0x8                         ; 004793c2
    PUSH dword ptr [ESP + 0x10]         ; 004793c5
    PUSH dword ptr [ESP + 0x8]          ; 004793c9
    FSTP float ptr [ESP + 0x20]         ; 004793cd
    CALL FUN_0040dda0                   ; 004793d1
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x2c],EAX      ; 004793d6
    FLD float ptr [ESP + 0x2c]          ; 004793da
    ADD ESP,0x8                         ; 004793de
    PUSH dword ptr [ESP + 0x14]         ; 004793e1
    PUSH dword ptr [ESP + 0xc]          ; 004793e5
    FSTP float ptr [ESP + 0x24]         ; 004793e9
    CALL FUN_0040dda0                   ; 004793ed
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x2c],EAX      ; 004793f2
    FLD float ptr [ESP + 0x2c]          ; 004793f6
    ADD ESP,0x8                         ; 004793fa
    LEA EAX,[ESP + 0x18]                ; 004793fd
    PUSH EAX                            ; 00479401
    PUSH EBX                            ; 00479402
    PUSH ESI                            ; 00479403
    FSTP float ptr [ESP + 0x2c]         ; 00479404
    CALL FUN_0040a240                   ; 00479408
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    ADD ESP,0xc                         ; 0047940d
    MOV EAX,EBX                         ; 00479410
    ADD ESP,0x28                        ; 00479412
    POP ESI                             ; 00479415
    POP EBX                             ; 00479416
    RET                                 ; 00479417

