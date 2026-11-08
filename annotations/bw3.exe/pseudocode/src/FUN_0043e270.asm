; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043e270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_0043fc00 at 0043fc34
;
; Called Functions:
;   FUN_0043e2a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e270
        ;   Label: FUN_0043e270
    PUSH ESI                            ; 0043e271
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043e272
    PUSH EDX                            ; 0043e276
    PUSH dword ptr [ESP + 0x20]         ; 0043e277
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0043e27b
    PUSH dword ptr [ESP + 0x20]         ; 0043e27f
    PUSH ECX                            ; 0043e283
    MOV EBX,dword ptr [ESP + 0x20]      ; 0043e284
    PUSH EBX                            ; 0043e288
    MOV ESI,dword ptr [ESP + 0x20]      ; 0043e289
    PUSH ESI                            ; 0043e28d
    CALL FUN_0043e2a0                   ; 0043e28e
        ;   XREF to: 0043e2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043e2a0()
    ADD ESP,0x18                        ; 0043e293
    POP ESI                             ; 0043e296
    POP EBX                             ; 0043e297
    RET                                 ; 0043e298

