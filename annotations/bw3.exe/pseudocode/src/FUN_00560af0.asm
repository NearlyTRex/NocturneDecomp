; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00560af0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[17]:
;   FUN_0041f360 at 0041f57c
;   FUN_00445130 at 00445550
;   FUN_004459b0 at 004459fe
;   FUN_004628b0 at 00462c70
;   FUN_004634d0 at 00463539
;   FUN_004a5b10 at 004a5cac
;   FUN_004c6eb0 at 004c7273
;   FUN_004d9fc0 at 004d9fd1
;   FUN_004da020 at 004da15e
;   FUN_004dcdb0 at 004dd10a
;   ... and 7 more
;
; Called Functions:
;   FUN_00556700
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00560af0
        ;   Label: FUN_00560af0
    PUSH EDX                            ; 00560af4
    CALL FUN_00556700                   ; 00560af5
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; undefined FUN_00556700()
    ADD ESP,0x4                         ; 00560afa
    RET                                 ; 00560afd

