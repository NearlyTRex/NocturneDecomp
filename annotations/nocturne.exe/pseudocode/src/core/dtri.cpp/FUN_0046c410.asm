; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtri_cpp_FUN_0046c410(void *param_1,_FILE *param_2)
;
;
; Called Functions:
;   crt_stdio.c_fwrite_FUN_00563a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c410
        ;   Label: core_dtri.cpp_FUN_0046c410
    PUSH ESI                            ; 0046c411
    MOV EBX,dword ptr [ESP + 0xc]       ; 0046c412
    MOV ESI,dword ptr [ESP + 0x10]      ; 0046c416
    PUSH ESI                            ; 0046c41a
    PUSH 0x1                            ; 0046c41b
    PUSH 0xc                            ; 0046c41d
    PUSH EBX                            ; 0046c41f
    CALL crt_stdio.c_fwrite_FUN_00563a50 ; 0046c420
        ;   XREF to: 00563a50 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_00563a50(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046c425
    PUSH ESI                            ; 0046c428
    PUSH 0x1                            ; 0046c429
    PUSH 0xc                            ; 0046c42b
    LEA EAX,[EBX + 0xc]                 ; 0046c42d
    PUSH EAX                            ; 0046c430
    CALL crt_stdio.c_fwrite_FUN_00563a50 ; 0046c431
        ;   XREF to: 00563a50 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_00563a50(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046c436
    PUSH ESI                            ; 0046c439
    PUSH 0x1                            ; 0046c43a
    PUSH 0xc                            ; 0046c43c
    LEA EAX,[EBX + 0x18]                ; 0046c43e
    PUSH EAX                            ; 0046c441
    CALL crt_stdio.c_fwrite_FUN_00563a50 ; 0046c442
        ;   XREF to: 00563a50 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_00563a50(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046c447
    PUSH ESI                            ; 0046c44a
    PUSH 0x1                            ; 0046c44b
    PUSH 0x14                           ; 0046c44d
    ADD EBX,0x24                        ; 0046c44f
    PUSH EBX                            ; 0046c452
    CALL crt_stdio.c_fwrite_FUN_00563a50 ; 0046c453
        ;   XREF to: 00563a50 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_00563a50(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046c458
    POP ESI                             ; 0046c45b
    POP EBX                             ; 0046c45c
    RET                                 ; 0046c45d

