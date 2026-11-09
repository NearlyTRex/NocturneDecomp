; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005b8a04(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   crt_stdio.c_fclose_FUN_005b89c0 at 005b89f7
;   crt_unknown.c_FUN_005c1d0c at 005c1d5c
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005b8af0
;   crt_unknown.c_FUN_005be810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8a04
        ;   Label: crt_unknown.c_FUN_005b8a04
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b8a05
    PUSH EDX                            ; 005b8a09
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b8a0a
    PUSH EBX                            ; 005b8a0e
    CALL crt_stdio.c_fclose_FUN_005b8af0 ; 005b8a0f
        ;   XREF to: 005b8af0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b8af0()
    ADD ESP,0x8                         ; 005b8a14
    MOV ECX,dword ptr [ESP + 0x8]       ; 005b8a17
    PUSH ECX                            ; 005b8a1b
    MOV EBX,EAX                         ; 005b8a1c
    CALL crt_unknown.c_FUN_005be810     ; 005b8a1e
        ;   XREF to: 005be810 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be810()
    ADD ESP,0x4                         ; 005b8a23
    MOV EAX,EBX                         ; 005b8a26
    POP EBX                             ; 005b8a28
    RET                                 ; 005b8a29

