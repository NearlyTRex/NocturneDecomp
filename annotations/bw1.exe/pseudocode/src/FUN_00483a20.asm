; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483a20(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_0054e3c0 at 0054e3db
;
; Called Functions:
;   FUN_004ffa90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483a20
        ;   Label: FUN_00483a20
    MOV EAX,dword ptr [ESP + 0xc]       ; 00483a21
    MOV EDX,dword ptr [EAX + 0x8]       ; 00483a25
    PUSH EDX                            ; 00483a28
    MOV ECX,dword ptr [EAX + 0x4]       ; 00483a29
    PUSH ECX                            ; 00483a2c
    MOV EBX,dword ptr [EAX]             ; 00483a2d
    PUSH EBX                            ; 00483a2f
    CALL FUN_004ffa90                   ; 00483a30
        ;   XREF to: 004ffa90 (UNCONDITIONAL_CALL)  ; undefined FUN_004ffa90()
    ADD ESP,0xc                         ; 00483a35
    POP EBX                             ; 00483a38
    RET                                 ; 00483a39

