; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f8fe0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0047a590 at 0047a5f7
;   FUN_0047f210 at 0047f37f
;
; Called Functions:
;   FUN_004f90d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f8fe0
        ;   Label: FUN_004f8fe0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f8fe4
    PUSH EDX                            ; 004f8fe8
    PUSH EAX                            ; 004f8fe9
    PUSH EDX                            ; 004f8fea
    PUSH EAX                            ; 004f8feb
    CALL FUN_004f90d0                   ; 004f8fec
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f90d0()
    ADD ESP,0x10                        ; 004f8ff1
    RET                                 ; 004f8ff4

