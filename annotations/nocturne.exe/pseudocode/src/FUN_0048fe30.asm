; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0048fe30(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0044cc00 at 0044cc26
;
; Called Functions:
;   FUN_00490420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048fe30
        ;   Label: FUN_0048fe30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048fe31
    PUSH EBX                            ; 0048fe35
    CALL FUN_00490420                   ; 0048fe36
        ;   XREF to: 00490420 (UNCONDITIONAL_CALL)  ; undefined FUN_00490420()
    ADD ESP,0x4                         ; 0048fe3b
    MOV EAX,EBX                         ; 0048fe3e
    POP EBX                             ; 0048fe40
    RET                                 ; 0048fe41

