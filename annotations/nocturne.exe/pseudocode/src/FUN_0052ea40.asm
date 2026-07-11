; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052ea40(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[7]:
;   FUN_0047ac50 at 0047c50d
;   FUN_004a0550 at 004a05cf
;   FUN_005049b0 at 00504b2a
;   FUN_0052ddf0 at 0052dee5
;   FUN_0052e9d0 at 0052ea22
;   FUN_00554980 at 00554d2b
;   FUN_00554fd0 at 00555002
;
; Called Functions:
;   FUN_0052d120
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0052ea40
        ;   Label: FUN_0052ea40
    PUSH 0x0                            ; 0052ea42
    PUSH 0x0                            ; 0052ea44
    PUSH 0x0                            ; 0052ea46
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0052ea48
    PUSH 0x0                            ; 0052ea4c
    PUSH EDX                            ; 0052ea4e
    MOV ECX,dword ptr [ESP + 0x20]      ; 0052ea4f
    PUSH ECX                            ; 0052ea53
    CALL FUN_0052d120                   ; 0052ea54
        ;   XREF to: 0052d120 (UNCONDITIONAL_CALL)  ; undefined FUN_0052d120()
    ADD ESP,0x1c                        ; 0052ea59
    RET                                 ; 0052ea5c

