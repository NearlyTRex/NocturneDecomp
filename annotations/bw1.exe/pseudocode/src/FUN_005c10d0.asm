; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c10d0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[30]:
;   FUN_00418d00 at 00418d36
;   FUN_00442ff0 at 00443023
;   FUN_0048e640 at 0048e686
;   FUN_00498210 at 0049825c
;   FUN_00498290 at 0049831e
;   FUN_00499600 at 00499676
;   FUN_00499a50 at 00499aae
;   FUN_0049c030 at 0049c08b
;   FUN_0049c160 at 0049c1bb
;   FUN_004bbbf0 at 004bbc0e
;   ... and 20 more
;
; Called Functions:
;   FUN_005c10e8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c10d0
        ;   Label: FUN_005c10d0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c10d1
    PUSH EDX                            ; 005c10d5
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c10d6
    PUSH EBX                            ; 005c10da
    CALL FUN_005c10e8                   ; 005c10db
        ;   XREF to: 005c10e8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c10e8()
    ADD ESP,0x8                         ; 005c10e0
    POP EBX                             ; 005c10e3
    RET                                 ; 005c10e4

