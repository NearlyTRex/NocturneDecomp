; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00519ae0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_005180a0 at 005180be
;
; Called Functions:
;   FUN_0051b280
;   FUN_0051b480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519ae0
        ;   Label: FUN_00519ae0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00519ae1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00519ae5
    PUSH EBX                            ; 00519ae9
    MOV dword ptr [EBX + 0x2a6c],EAX    ; 00519aea
    CALL FUN_0051b280                   ; 00519af0
        ;   XREF to: 0051b280 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b280()
    ADD ESP,0x4                         ; 00519af5
    PUSH EBX                            ; 00519af8
    CALL FUN_0051b480                   ; 00519af9
        ;   XREF to: 0051b480 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b480()
    ADD ESP,0x4                         ; 00519afe
    POP EBX                             ; 00519b01
    RET                                 ; 00519b02

