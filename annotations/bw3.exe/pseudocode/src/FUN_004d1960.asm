; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d1960(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004625f0
;   FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1960
        ;   Label: FUN_004d1960
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d1961
    PUSH EDX                            ; 004d1965
    CALL FUN_0057ad70                   ; 004d1966
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; undefined FUN_0057ad70()
    ADD ESP,0x4                         ; 004d196b
    PUSH 0x5c4a15                       ; 004d196e
    MOV EBX,EAX                         ; 004d1973
    ADD EAX,0x158                       ; 004d1975
    PUSH EAX                            ; 004d197a
    MOV dword ptr [EAX + -0x4],0x5e11d4 ; 004d197b
    CALL FUN_004625f0                   ; 004d1982
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004d1987
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004d1991
    MOV dword ptr [EBX + 0x2e0],0xe     ; 004d199b
    MOV dword ptr [EBX + 0x2e4],0x1     ; 004d19a5
    MOV dword ptr [EBX + 0x2e8],0x42480000 ; 004d19af
    MOV dword ptr [EBX + 0x2ec],0x0     ; 004d19b9
    MOV dword ptr [EBX + 0x56c],0xa     ; 004d19c3
    MOV dword ptr [EBX + 0x58c],0xf     ; 004d19cd
    MOV dword ptr [EBX + 0x574],0x3     ; 004d19d7
    MOV dword ptr [EBX + 0x57c],0x0     ; 004d19e1
    ADD ESP,0x8                         ; 004d19eb
    MOV dword ptr [EBX + 0x594],0x0     ; 004d19ee
    MOV EAX,EBX                         ; 004d19f8
    MOV dword ptr [EBX + 0x598],0x0     ; 004d19fa
    POP EBX                             ; 004d1a04
    RET                                 ; 004d1a05

