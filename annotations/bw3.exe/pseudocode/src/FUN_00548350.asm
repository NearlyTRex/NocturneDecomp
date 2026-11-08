; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00548350(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00548370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548350
        ;   Label: FUN_00548350
    MOV EBX,dword ptr [ESP + 0x8]       ; 00548351
    PUSH EBX                            ; 00548355
    CALL FUN_00548370                   ; 00548356
        ;   XREF to: 00548370 (UNCONDITIONAL_CALL)  ; undefined FUN_00548370()
    ADD ESP,0x4                         ; 0054835b
    MOV EAX,EBX                         ; 0054835e
    POP EBX                             ; 00548360
    RET                                 ; 00548361

