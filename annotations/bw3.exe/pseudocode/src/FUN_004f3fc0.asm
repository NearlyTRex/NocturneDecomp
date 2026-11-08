; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f3fc0(int param_1)
;
;
; XREF[1]:
;   FUN_004c9ba0 at 004c9bb5
;
; Called Functions:
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3fc0
        ;   Label: FUN_004f3fc0
    PUSH 0x5e29e0                       ; 004f3fc4
    PUSH 0x5                            ; 004f3fc9
    ADD EAX,0x98                        ; 004f3fcb
    PUSH EAX                            ; 004f3fd0
    CALL FUN_005a30d7                   ; 004f3fd1
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 004f3fd6
    SUB EAX,0x98                        ; 004f3fd9
    RET                                 ; 004f3fde

