; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d0090(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00522350 at 00528459
;
; Called Functions:
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d0090
        ;   Label: FUN_004d0090
    PUSH 0x34                           ; 004d0094
    PUSH 0x0                            ; 004d0096
    ADD EAX,0x10a68                     ; 004d0098
    MOV EDX,dword ptr [ESP + 0x10]      ; 004d009d
    PUSH EAX                            ; 004d00a1
    MOV dword ptr [EAX + 0x14bd0],EDX   ; 004d00a2
    CALL FUN_005b77c0                   ; 004d00a8
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 004d00ad
    RET                                 ; 004d00b0

