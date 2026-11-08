; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e5ff0(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_004e4730 at 004e4754
;
; Called Functions:
;   FUN_004e4790
;   FUN_004e5fa0
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x2       ; 004e5ff0
        ;   Label: FUN_004e5ff0
    JNZ 0x004e5ff8                      ; 004e5ff5
        ;   XREF to: 004e5ff8 (CONDITIONAL_JUMP)  ; LAB_004e5ff8
    RET                                 ; 004e5ff7
    PUSH ESI                            ; 004e5ff8
        ;   Label: LAB_004e5ff8
    PUSH EBX                            ; 004e5ff9
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e5ffa
    PUSH ECX                            ; 004e5ffe
    CALL FUN_004e5fa0                   ; 004e5fff
        ;   XREF to: 004e5fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5fa0()
    ADD ESP,0x4                         ; 004e6004
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e6007
    PUSH EBX                            ; 004e600b
    MOV ESI,dword ptr [ESP + 0x14]      ; 004e600c
    PUSH ESI                            ; 004e6010
    PUSH EAX                            ; 004e6011
    CALL FUN_004e4790                   ; 004e6012
        ;   XREF to: 004e4790 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4790()
    ADD ESP,0xc                         ; 004e6017
    POP EBX                             ; 004e601a
    POP ESI                             ; 004e601b
    RET                                 ; 004e601c

