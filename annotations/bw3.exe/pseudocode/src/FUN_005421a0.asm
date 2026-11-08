; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005421a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00542f40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005421a0
        ;   Label: FUN_005421a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005421a1
    PUSH EBX                            ; 005421a5
    CALL FUN_00542f40                   ; 005421a6
        ;   XREF to: 00542f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00542f40()
    ADD ESP,0x4                         ; 005421ab
    MOV EAX,EBX                         ; 005421ae
    POP EBX                             ; 005421b0
    RET                                 ; 005421b1

