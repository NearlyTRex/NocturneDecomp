; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004bbcf0(int param_1)
;
;
; XREF[1]:
;   FUN_004bbf60 at 004bbfb2
;
; Called Functions:
;   FUN_004993a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bbcf0
        ;   Label: FUN_004bbcf0
    PUSH 0x0                            ; 004bbcf4
    ADD EAX,0x148                       ; 004bbcf6
    PUSH EAX                            ; 004bbcfb
    CALL FUN_004993a0                   ; 004bbcfc
        ;   XREF to: 004993a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004993a0()
    ADD ESP,0x8                         ; 004bbd01
    SUB EAX,0x148                       ; 004bbd04
    RET                                 ; 004bbd09

