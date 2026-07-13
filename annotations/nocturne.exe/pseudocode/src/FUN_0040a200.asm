; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040a200(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[54]:
;   FUN_0040a540 at 0040a593
;   FUN_0040a740 at 0040a901
;   FUN_0040b300 at 0040b3aa
;   FUN_00410a80 at 00410aeb
;   FUN_00410bf0 at 00410c36
;   FUN_004145f0 at 00414903
;   FUN_00416d40 at 00416fcd
;   FUN_0041e5e0 at 0041e937
;   FUN_004247f0 at 00424d4d
;   FUN_00425050 at 0042506c
;   ... and 44 more
;
; Called Functions:
;   FUN_0044da40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a200
        ;   Label: FUN_0040a200
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040a201
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040a205
    PUSH EDX                            ; 0040a209
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040a20a
    PUSH EBX                            ; 0040a20e
    ADD EAX,0x3c                        ; 0040a20f
    PUSH EAX                            ; 0040a212
    CALL FUN_0044da40                   ; 0040a213
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined FUN_0044da40()
    ADD ESP,0xc                         ; 0040a218
    MOV EAX,EBX                         ; 0040a21b
    POP EBX                             ; 0040a21d
    RET                                 ; 0040a21e

