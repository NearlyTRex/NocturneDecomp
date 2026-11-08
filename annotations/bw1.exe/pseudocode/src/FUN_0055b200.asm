; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055b200(int param_1)
;
;
; XREF[3]:
;   FUN_0051bdc0 at 0051beb6
;   FUN_00539810 at 005399a1
;   FUN_00544460 at 005461a2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0055b200
        ;   Label: FUN_0055b200
    FLD float ptr [EDX + 0x15aecc]      ; 0055b204
    FLDZ                                ; 0055b20a
    FCOMPP                              ; 0055b20c
    FNSTSW AX                           ; 0055b20e
    SAHF                                ; 0055b210
    JC 0x0055b214                       ; 0055b211
        ;   XREF to: 0055b214 (CONDITIONAL_JUMP)  ; LAB_0055b214
    RET                                 ; 0055b213
    MOV dword ptr [EDX + 0x15aecc],0x1e3ce508 ; 0055b214
        ;   Label: LAB_0055b214
    RET                                 ; 0055b21e

