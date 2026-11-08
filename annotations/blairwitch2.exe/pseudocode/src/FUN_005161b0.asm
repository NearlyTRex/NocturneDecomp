; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005161b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00516200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005161b0
        ;   Label: FUN_005161b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005161b1
    PUSH EBX                            ; 005161b5
    CALL FUN_00516200                   ; 005161b6
        ;   XREF to: 00516200 (UNCONDITIONAL_CALL)  ; undefined FUN_00516200()
    ADD ESP,0x4                         ; 005161bb
    MOV EAX,EBX                         ; 005161be
    POP EBX                             ; 005161c0
    RET                                 ; 005161c1

