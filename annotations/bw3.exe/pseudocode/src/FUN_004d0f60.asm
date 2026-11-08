; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d0f60(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004625f0
;   FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0f60
        ;   Label: FUN_004d0f60
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d0f61
    PUSH EDX                            ; 004d0f65
    CALL FUN_0057ad70                   ; 004d0f66
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; undefined FUN_0057ad70()
    ADD ESP,0x4                         ; 004d0f6b
    PUSH 0x5c49cc                       ; 004d0f6e
    MOV EBX,EAX                         ; 004d0f73
    ADD EAX,0x158                       ; 004d0f75
    PUSH EAX                            ; 004d0f7a
    MOV dword ptr [EAX + -0x4],0x5e1094 ; 004d0f7b
    CALL FUN_004625f0                   ; 004d0f82
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004d0f87
    MOV dword ptr [EBX + 0x2dc],0x1     ; 004d0f91
    MOV dword ptr [EBX + 0x2e4],0x1     ; 004d0f9b
    ADD ESP,0x8                         ; 004d0fa5
    MOV dword ptr [EBX + 0x2e8],0x42480000 ; 004d0fa8
    MOV EAX,EBX                         ; 004d0fb2
    MOV dword ptr [EBX + 0x2ec],0x0     ; 004d0fb4
    POP EBX                             ; 004d0fbe
    RET                                 ; 004d0fbf

