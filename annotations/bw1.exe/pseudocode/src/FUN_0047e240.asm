; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0047e240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_00543c00 at 00543c3e
;
; Called Functions:
;   FUN_0047e280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047e240
        ;   Label: FUN_0047e240
    PUSH ESI                            ; 0047e241
    PUSH EDI                            ; 0047e242
    PUSH EBP                            ; 0047e243
    MOV EBX,dword ptr [ESP + 0x14]      ; 0047e244
    MOV EDX,dword ptr [ESP + 0x28]      ; 0047e248
    PUSH EDX                            ; 0047e24c
    MOV ECX,dword ptr [ESP + 0x28]      ; 0047e24d
    PUSH ECX                            ; 0047e251
    MOV ESI,dword ptr [ESP + 0x28]      ; 0047e252
    PUSH ESI                            ; 0047e256
    MOV EDI,dword ptr [ESP + 0x28]      ; 0047e257
    PUSH EDI                            ; 0047e25b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0047e25c
    PUSH EBP                            ; 0047e260
    PUSH EBX                            ; 0047e261
    CALL FUN_0047e280                   ; 0047e262
        ;   XREF to: 0047e280 (UNCONDITIONAL_CALL)  ; undefined FUN_0047e280()
    ADD ESP,0x18                        ; 0047e267
    MOV EAX,EBX                         ; 0047e26a
    POP EBP                             ; 0047e26c
    POP EDI                             ; 0047e26d
    POP ESI                             ; 0047e26e
    POP EBX                             ; 0047e26f
    RET                                 ; 0047e270

