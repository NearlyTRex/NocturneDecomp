; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00568210(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004625f0
;   FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568210
        ;   Label: FUN_00568210
    MOV EDX,dword ptr [ESP + 0x8]       ; 00568211
    PUSH EDX                            ; 00568215
    CALL FUN_0057ad70                   ; 00568216
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; undefined FUN_0057ad70()
    ADD ESP,0x4                         ; 0056821b
    PUSH 0x5d5c63                       ; 0056821e
    MOV EBX,EAX                         ; 00568223
    ADD EAX,0x158                       ; 00568225
    PUSH EAX                            ; 0056822a
    MOV dword ptr [EAX + -0x4],0x5e4c94 ; 0056822b
    CALL FUN_004625f0                   ; 00568232
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    MOV dword ptr [EBX + 0x2d8],0x0     ; 00568237
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00568241
    MOV dword ptr [EBX + 0x2e4],0x1     ; 0056824b
    MOV dword ptr [EBX + 0x2e8],0x42480000 ; 00568255
    MOV dword ptr [EBX + 0x56c],0xffffffff ; 0056825f
    ADD ESP,0x8                         ; 00568269
    MOV dword ptr [EBX + 0x574],0x3     ; 0056826c
    MOV EAX,EBX                         ; 00568276
    MOV dword ptr [EBX + 0x57c],0x0     ; 00568278
    POP EBX                             ; 00568282
    RET                                 ; 00568283

