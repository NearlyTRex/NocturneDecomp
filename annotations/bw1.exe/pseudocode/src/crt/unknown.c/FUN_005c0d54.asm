; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c0d54(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   crt_stdio.c_fclose_FUN_005c0d10 at 005c0d47
;   crt_unknown.c_FUN_005ca05c at 005ca0ac
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005c0e40
;   crt_unknown.c_FUN_005c6ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0d54
        ;   Label: crt_unknown.c_FUN_005c0d54
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c0d55
    PUSH EDX                            ; 005c0d59
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c0d5a
    PUSH EBX                            ; 005c0d5e
    CALL crt_stdio.c_fclose_FUN_005c0e40 ; 005c0d5f
        ;   XREF to: 005c0e40 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0e40()
    ADD ESP,0x8                         ; 005c0d64
    MOV ECX,dword ptr [ESP + 0x8]       ; 005c0d67
    PUSH ECX                            ; 005c0d6b
    MOV EBX,EAX                         ; 005c0d6c
    CALL crt_unknown.c_FUN_005c6ae0     ; 005c0d6e
        ;   XREF to: 005c6ae0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6ae0()
    ADD ESP,0x4                         ; 005c0d73
    MOV EAX,EBX                         ; 005c0d76
    POP EBX                             ; 005c0d78
    RET                                 ; 005c0d79

