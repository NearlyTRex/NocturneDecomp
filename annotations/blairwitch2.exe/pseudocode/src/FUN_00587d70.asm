; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00587d70(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0059c5e0 at 0059c5e5
;
; Called Functions:
;   FUN_005776f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00587d70
        ;   Label: FUN_00587d70
    PUSH EDX                            ; 00587d74
    CALL FUN_005776f0                   ; 00587d75
        ;   XREF to: 005776f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005776f0()
    MOV dword ptr [EAX + 0x2b0],0x5fde34 ; 00587d7a
    MOV dword ptr [EAX + 0x2bc],0x3f000000 ; 00587d84
    MOV dword ptr [EAX + 0x2c0],0x3f800000 ; 00587d8e
    MOV dword ptr [EAX + 0x2c4],0x3f000000 ; 00587d98
    MOV dword ptr [EAX + 0x4d0],0x0     ; 00587da2
    ADD ESP,0x4                         ; 00587dac
    MOV dword ptr [EAX + 0x6b8],0x0     ; 00587daf
    RET                                 ; 00587db9

