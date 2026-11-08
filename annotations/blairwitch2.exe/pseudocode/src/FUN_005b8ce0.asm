; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b8ce0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[30]:
;   FUN_00415890 at 004158c6
;   FUN_004342d0 at 00434303
;   FUN_00476150 at 00476196
;   FUN_0047fbb0 at 0047fbfc
;   FUN_0047fc30 at 0047fcbe
;   FUN_00480fa0 at 00481016
;   FUN_004813f0 at 0048144e
;   FUN_004839d0 at 00483a2b
;   FUN_00483b00 at 00483b5b
;   FUN_004a31c0 at 004a31de
;   ... and 20 more
;
; Called Functions:
;   FUN_005b8cf8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8ce0
        ;   Label: FUN_005b8ce0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b8ce1
    PUSH EDX                            ; 005b8ce5
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b8ce6
    PUSH EBX                            ; 005b8cea
    CALL FUN_005b8cf8                   ; 005b8ceb
        ;   XREF to: 005b8cf8 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8cf8()
    ADD ESP,0x8                         ; 005b8cf0
    POP EBX                             ; 005b8cf3
    RET                                 ; 005b8cf4

