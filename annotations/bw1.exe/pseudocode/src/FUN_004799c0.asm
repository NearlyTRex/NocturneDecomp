; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004799c0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0048a9b0 at 0048aa0b
;
; Called Functions:
;   FUN_00479ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004799c0
        ;   Label: FUN_004799c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004799c1
    PUSH EBX                            ; 004799c5
    CALL FUN_00479ae0                   ; 004799c6
        ;   XREF to: 00479ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00479ae0()
    ADD ESP,0x4                         ; 004799cb
    MOV EAX,EBX                         ; 004799ce
    POP EBX                             ; 004799d0
    RET                                 ; 004799d1

