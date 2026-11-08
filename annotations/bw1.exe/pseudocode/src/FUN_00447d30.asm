; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00447d30(undefined4 param_1)
;
;
; XREF[7]:
;   FUN_00411140 at 00411155
;   FUN_00447b70 at 00447b85
;   FUN_00447be0 at 00447bf5
;   FUN_004c6000 at 004c6015
;   FUN_00507250 at 00507265
;   FUN_00510eb0 at 00510ec5
;   FUN_005a8a10 at 005a8a25
;
; Called Functions:
;   FUN_00447ee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447d30
        ;   Label: FUN_00447d30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447d31
    PUSH EBX                            ; 00447d35
    CALL FUN_00447ee0                   ; 00447d36
        ;   XREF to: 00447ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00447ee0()
    ADD ESP,0x4                         ; 00447d3b
    MOV EAX,EBX                         ; 00447d3e
    POP EBX                             ; 00447d40
    RET                                 ; 00447d41

