; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d50d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004625f0
;   FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d50d0
        ;   Label: FUN_004d50d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d50d1
    PUSH EDX                            ; 004d50d5
    CALL FUN_0057ad70                   ; 004d50d6
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; undefined FUN_0057ad70()
    ADD ESP,0x4                         ; 004d50db
    PUSH 0x5c519e                       ; 004d50de
    MOV EBX,EAX                         ; 004d50e3
    ADD EAX,0x158                       ; 004d50e5
    PUSH EAX                            ; 004d50ea
    MOV dword ptr [EAX + -0x4],0x5e17c4 ; 004d50eb
    CALL FUN_004625f0                   ; 004d50f2
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    MOV dword ptr [EBX + 0x2e0],0x7     ; 004d50f7
    MOV dword ptr [EBX + 0x56c],0xffffffff ; 004d5101
    MOV dword ptr [EBX + 0x568],0x0     ; 004d510b
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004d5115
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004d511f
    MOV dword ptr [EBX + 0x2e4],0x0     ; 004d5129
    MOV dword ptr [EBX + 0x2e8],0x40a00000 ; 004d5133
    MOV dword ptr [EBX + 0x2ec],0x0     ; 004d513d
    MOV dword ptr [EBX + 0x57c],0x0     ; 004d5147
    ADD ESP,0x8                         ; 004d5151
    MOV dword ptr [EBX + 0x574],0x1     ; 004d5154
    MOV EAX,EBX                         ; 004d515e
    MOV dword ptr [EBX + 0x578],0x2     ; 004d5160
    POP EBX                             ; 004d516a
    RET                                 ; 004d516b

