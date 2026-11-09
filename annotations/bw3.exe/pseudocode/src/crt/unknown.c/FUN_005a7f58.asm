; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005a7f58(undefined4 param_1)
;
;
; XREF[1]:
;   crt_stdio.c_fclose_FUN_005a3bc0 at 005a3c9c
;
; Called Functions:
;   crt_unknown.c_FUN_005abb64
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a7f58
        ;   Label: crt_unknown.c_FUN_005a7f58
    PUSH EDX                            ; 005a7f5c
    CALL crt_unknown.c_FUN_005abb64     ; 005a7f5d
        ;   XREF to: 005abb64 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abb64()
    ADD ESP,0x4                         ; 005a7f62
    LEA EAX,[EAX]                       ; 005a7f65

