; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00519ec0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_0051b370 at 0051b3a6
;   FUN_0051bf10 at 0051bf53
;
; Called Functions:
;   FUN_0051a8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519ec0
        ;   Label: FUN_00519ec0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00519ec1
    PUSH EBX                            ; 00519ec5
    CALL FUN_0051a8f0                   ; 00519ec6
        ;   XREF to: 0051a8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051a8f0()
    ADD ESP,0x4                         ; 00519ecb
    MOV EAX,EBX                         ; 00519ece
    POP EBX                             ; 00519ed0
    RET                                 ; 00519ed1

