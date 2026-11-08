; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047ffd0(int *param_1)
;
;
; XREF[1]:
;   FUN_00543c00 at 00543c55
;
; Called Functions:
;   FUN_0047fe30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047ffd0
        ;   Label: FUN_0047ffd0
    MOV EAX,dword ptr [EDX + 0x4]       ; 0047ffd4
    DEC EAX                             ; 0047ffd7
    PUSH EAX                            ; 0047ffd8
    MOV EAX,dword ptr [EDX]             ; 0047ffd9
    DEC EAX                             ; 0047ffdb
    PUSH EAX                            ; 0047ffdc
    PUSH 0x0                            ; 0047ffdd
    PUSH 0x0                            ; 0047ffdf
    PUSH EDX                            ; 0047ffe1
    CALL FUN_0047fe30                   ; 0047ffe2
        ;   XREF to: 0047fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0047fe30()
    ADD ESP,0x14                        ; 0047ffe7
    RET                                 ; 0047ffea

