; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b0da0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_00469b40 at 00469c59
;
; Called Functions:
;   FUN_004b0cb0
;   FUN_004b2a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0da0
        ;   Label: FUN_004b0da0
    PUSH ESI                            ; 004b0da1
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b0da2
    PUSH EAX                            ; 004b0da6
    MOV EDX,dword ptr [ESP + 0x20]      ; 004b0da7
    PUSH EDX                            ; 004b0dab
    MOV ECX,dword ptr [ESP + 0x20]      ; 004b0dac
    PUSH ECX                            ; 004b0db0
    MOV EBX,dword ptr [ESP + 0x20]      ; 004b0db1
    PUSH EBX                            ; 004b0db5
    PUSH EAX                            ; 004b0db6
    MOV ESI,dword ptr [ESP + 0x20]      ; 004b0db7
    PUSH ESI                            ; 004b0dbb
    CALL FUN_004b2a80                   ; 004b0dbc
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2a80()
    ADD ESP,0x8                         ; 004b0dc1
    MOV EDX,dword ptr [ESP + 0x20]      ; 004b0dc4
    SUB EDX,EAX                         ; 004b0dc8
    LEA EAX,[EDX + 0x1]                 ; 004b0dca
    PUSH EAX                            ; 004b0dcd
    PUSH ESI                            ; 004b0dce
    CALL FUN_004b0cb0                   ; 004b0dcf
        ;   XREF to: 004b0cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0cb0()
    ADD ESP,0x18                        ; 004b0dd4
    POP ESI                             ; 004b0dd7
    POP EBX                             ; 004b0dd8
    RET                                 ; 004b0dd9

