; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c50e8(undefined4 param_1)
;
;
; XREF[1]:
;   crt_stdio.c_fclose_FUN_005c0e40 at 005c0f1c
;
; Called Functions:
;   crt_unknown.c_FUN_005c8d24
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c50e8
        ;   Label: crt_unknown.c_FUN_005c50e8
    PUSH EDX                            ; 005c50ec
    CALL crt_unknown.c_FUN_005c8d24     ; 005c50ed
        ;   XREF to: 005c8d24 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8d24()
    ADD ESP,0x4                         ; 005c50f2
    LEA EAX,[EAX]                       ; 005c50f5

