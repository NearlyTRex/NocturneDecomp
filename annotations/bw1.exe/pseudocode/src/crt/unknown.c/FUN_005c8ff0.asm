; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c8ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c21f0 at 005c221f
;
; Called Functions:
;   crt_unknown.c_FUN_005c9020
;   crt_unknown.c_FUN_005cc5a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8ff0
        ;   Label: crt_unknown.c_FUN_005c8ff0
    PUSH ESI                            ; 005c8ff1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c8ff2
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c8ff6
    PUSH EDX                            ; 005c8ffa
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c8ffb
    PUSH ECX                            ; 005c8fff
    CALL crt_unknown.c_FUN_005c9020     ; 005c9000
        ;   XREF to: 005c9020 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9020()
    ADD ESP,0x8                         ; 005c9005
    INC EAX                             ; 005c9008
    PUSH EAX                            ; 005c9009
    MOV ESI,dword ptr [ESP + 0x14]      ; 005c900a
    PUSH ESI                            ; 005c900e
    PUSH EBX                            ; 005c900f
    CALL crt_unknown.c_FUN_005cc5a0     ; 005c9010
        ;   XREF to: 005cc5a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cc5a0()
    ADD ESP,0xc                         ; 005c9015
    MOV EAX,EBX                         ; 005c9018
    POP ESI                             ; 005c901a
    POP EBX                             ; 005c901b
    RET                                 ; 005c901c

