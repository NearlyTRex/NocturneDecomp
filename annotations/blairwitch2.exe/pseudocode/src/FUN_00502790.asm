; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00502790(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00540840 at 00540860
;
; Called Functions:
;   FUN_005027b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502790
        ;   Label: FUN_00502790
    MOV EBX,dword ptr [ESP + 0x8]       ; 00502791
    PUSH EBX                            ; 00502795
    CALL FUN_005027b0                   ; 00502796
        ;   XREF to: 005027b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005027b0()
    ADD ESP,0x4                         ; 0050279b
    MOV EAX,EBX                         ; 0050279e
    POP EBX                             ; 005027a0
    RET                                 ; 005027a1

