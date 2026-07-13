; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004df270(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004df290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df270
        ;   Label: FUN_004df270
    MOV EBX,dword ptr [ESP + 0x8]       ; 004df271
    PUSH EBX                            ; 004df275
    CALL FUN_004df290                   ; 004df276
        ;   XREF to: 004df290 (UNCONDITIONAL_CALL)  ; undefined FUN_004df290()
    ADD ESP,0x4                         ; 004df27b
    MOV EAX,EBX                         ; 004df27e
    POP EBX                             ; 004df280
    RET                                 ; 004df281

