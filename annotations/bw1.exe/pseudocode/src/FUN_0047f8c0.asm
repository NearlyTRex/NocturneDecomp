; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047f8c0(int *param_1)
;
;
; XREF[1]:
;   FUN_00543c00 at 00543d99
;
; Called Functions:
;   FUN_0047f860
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047f8c0
        ;   Label: FUN_0047f8c0
    MOV EAX,dword ptr [EDX + 0x4]       ; 0047f8c4
    DEC EAX                             ; 0047f8c7
    PUSH EAX                            ; 0047f8c8
    MOV EAX,dword ptr [EDX]             ; 0047f8c9
    DEC EAX                             ; 0047f8cb
    PUSH EAX                            ; 0047f8cc
    PUSH 0x0                            ; 0047f8cd
    PUSH 0x0                            ; 0047f8cf
    PUSH EDX                            ; 0047f8d1
    CALL FUN_0047f860                   ; 0047f8d2
        ;   XREF to: 0047f860 (UNCONDITIONAL_CALL)  ; undefined FUN_0047f860()
    ADD ESP,0x14                        ; 0047f8d7
    RET                                 ; 0047f8da

