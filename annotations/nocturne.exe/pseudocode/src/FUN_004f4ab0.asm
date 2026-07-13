; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f4ab0(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_004f4630 at 004f4694
;   FUN_004f46b0 at 004f46f1
;   FUN_004f4e40 at 004f4ed4
;
; Called Functions:
;   FUN_004f4a00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f4ab0
        ;   Label: FUN_004f4ab0
    PUSH EAX                            ; 004f4ab4
    PUSH EAX                            ; 004f4ab5
    CALL FUN_004f4a00                   ; 004f4ab6
        ;   XREF to: 004f4a00 (UNCONDITIONAL_CALL)  ; undefined FUN_004f4a00()
    ADD ESP,0x8                         ; 004f4abb
    RET                                 ; 004f4abe

