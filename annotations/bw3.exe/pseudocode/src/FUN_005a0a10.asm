; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a0a10(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0040ce40
;   FUN_00508f40
;   FUN_0050acc0
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0a10
        ;   Label: FUN_005a0a10
    SUB ESP,0x4                         ; 005a0a11
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a0a14
    PUSH EBX                            ; 005a0a18
    CALL FUN_00508f40                   ; 005a0a19
        ;   XREF to: 00508f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00508f40()
    ADD ESP,0x4                         ; 005a0a1e
    ADD EAX,0x206c8                     ; 005a0a21
    PUSH EAX                            ; 005a0a26
    CALL FUN_0050acc0                   ; 005a0a27
        ;   XREF to: 0050acc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050acc0()
    LEA EBX,[EAX + 0xfffdf938]          ; 005a0a2c
    MOV dword ptr [EBX + 0x154],0x5e8684 ; 005a0a32
    MOV dword ptr [EBX + 0x326c],0x3f19999a ; 005a0a3c
    ADD ESP,0x4                         ; 005a0a46
    MOV dword ptr [EBX + 0x3270],0x3f666666 ; 005a0a49
    PUSH 0x3f8ccccd                     ; 005a0a53
    MOV dword ptr [EBX + 0x327c],0x3fcccccd ; 005a0a58
    PUSH 0x3f666666                     ; 005a0a62
    MOV dword ptr [EBX + 0x3280],0xc479c000 ; 005a0a67
    CALL FUN_0040ce40                   ; 005a0a71
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x8],EAX       ; 005a0a76
    FLD float ptr [ESP + 0x8]           ; 005a0a7a
    ADD ESP,0x8                         ; 005a0a7e
    PUSH 0x5da566                       ; 005a0a81
    LEA EAX,[EBX + 0x158]               ; 005a0a86
    PUSH EAX                            ; 005a0a8c
    FSTP float ptr [EBX + 0x33fac]      ; 005a0a8d
    CALL FUN_0054eae0                   ; 005a0a93
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV dword ptr [EBX + 0x27c0],0x0    ; 005a0a98
    MOV dword ptr [EBX + 0x33fa4],0x0   ; 005a0aa2
    MOV dword ptr [EBX + 0x33fa8],0x0   ; 005a0aac
    MOV dword ptr [EBX + 0x33fb4],0x0   ; 005a0ab6
    MOV dword ptr [EBX + 0x33fcc],0xffff ; 005a0ac0
    MOV dword ptr [EBX + 0x206bc],0x64  ; 005a0aca
    ADD ESP,0x8                         ; 005a0ad4
    MOV dword ptr [EBX + 0x206c4],0x40000000 ; 005a0ad7
    MOV EAX,EBX                         ; 005a0ae1
    MOV dword ptr [EBX + 0x33fc4],0xffffffff ; 005a0ae3
    ADD ESP,0x4                         ; 005a0aed
    POP EBX                             ; 005a0af0
    RET                                 ; 005a0af1

