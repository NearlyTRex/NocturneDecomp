; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00468f80(int *param_1)
;
;
; XREF[1]:
;   FUN_00529210 at 005293a9
;
; Called Functions:
;   FUN_00468f20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00468f80
        ;   Label: FUN_00468f80
    MOV EAX,dword ptr [EDX + 0x4]       ; 00468f84
    DEC EAX                             ; 00468f87
    PUSH EAX                            ; 00468f88
    MOV EAX,dword ptr [EDX]             ; 00468f89
    DEC EAX                             ; 00468f8b
    PUSH EAX                            ; 00468f8c
    PUSH 0x0                            ; 00468f8d
    PUSH 0x0                            ; 00468f8f
    PUSH EDX                            ; 00468f91
    CALL FUN_00468f20                   ; 00468f92
        ;   XREF to: 00468f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00468f20()
    ADD ESP,0x14                        ; 00468f97
    RET                                 ; 00468f9a

