; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00527c10(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e386c
;
; Called Functions:
;   FUN_004625f0
;   FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527c10
        ;   Label: FUN_00527c10
    MOV EDX,dword ptr [ESP + 0x8]       ; 00527c11
    PUSH EDX                            ; 00527c15
    CALL FUN_0057ad70                   ; 00527c16
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; undefined FUN_0057ad70()
    ADD ESP,0x4                         ; 00527c1b
    PUSH 0x5cdae8                       ; 00527c1e
    MOV EBX,EAX                         ; 00527c23
    ADD EAX,0x158                       ; 00527c25
    PUSH EAX                            ; 00527c2a
    MOV dword ptr [EAX + -0x4],0x5e3874 ; 00527c2b
    CALL FUN_004625f0                   ; 00527c32
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    MOV dword ptr [EBX + 0x594],0x40400000 ; 00527c37
    MOV dword ptr [EBX + 0x2d8],0x2     ; 00527c41
    MOV dword ptr [EBX + 0x2dc],0x3     ; 00527c4b
    MOV dword ptr [EBX + 0x2e0],0x9     ; 00527c55
    MOV dword ptr [EBX + 0x2e4],0x1     ; 00527c5f
    MOV dword ptr [EBX + 0x2e8],0x420c0000 ; 00527c69
    FLD float ptr [0x005e386c]          ; 00527c73 | DAT_005e386c
    MOV dword ptr [EBX + 0x2ec],0x0     ; 00527c79
    ADD ESP,0x8                         ; 00527c83
    MOV dword ptr [EBX + 0x598],0x0     ; 00527c86
    MOV EAX,EBX                         ; 00527c90
    FSTP float ptr [EBX + 0x564]        ; 00527c92
    POP EBX                             ; 00527c98
    RET                                 ; 00527c99

