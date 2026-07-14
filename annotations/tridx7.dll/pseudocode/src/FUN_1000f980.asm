; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_1000f980(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_1000f8f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 1000f980
        ;   Label: FUN_1000f980
    PUSH ESI                            ; 1000f984
    MOV ESI,dword ptr [ESP + 0xc]       ; 1000f985
    PUSH 0x0                            ; 1000f989
    MOV ECX,dword ptr [ESP + 0xc]       ; 1000f98b
    PUSH EAX                            ; 1000f98f
    PUSH ESI                            ; 1000f990
    PUSH ECX                            ; 1000f991
    CALL FUN_1000f8f0                   ; 1000f992
        ;   XREF to: 1000f8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_1000f8f0()
    ADD ESP,0x10                        ; 1000f997
    MOV EAX,ESI                         ; 1000f99a
    POP ESI                             ; 1000f99c
    RET                                 ; 1000f99d

