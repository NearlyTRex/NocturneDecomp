; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00577490(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005726e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577490
        ;   Label: FUN_00577490
    MOV EBX,dword ptr [ESP + 0x8]       ; 00577491
    PUSH EBX                            ; 00577495
    CALL FUN_005726e0                   ; 00577496
        ;   XREF to: 005726e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005726e0()
    ADD ESP,0x4                         ; 0057749b
    MOV EAX,EBX                         ; 0057749e
    POP EBX                             ; 005774a0
    RET                                 ; 005774a1

