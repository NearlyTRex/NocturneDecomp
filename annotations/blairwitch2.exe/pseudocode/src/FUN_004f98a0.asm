; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f98a0(int param_1)
;
;
; XREF[1]:
;   FUN_004c48a0 at 004c48b5
;
; Called Functions:
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f98a0
        ;   Label: FUN_004f98a0
    PUSH 0x5fa1d0                       ; 004f98a4
    PUSH 0x5                            ; 004f98a9
    ADD EAX,0x98                        ; 004f98ab
    PUSH EAX                            ; 004f98b0
    CALL FUN_005b7f5f                   ; 004f98b1
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 004f98b6
    SUB EAX,0x98                        ; 004f98b9
    RET                                 ; 004f98be

