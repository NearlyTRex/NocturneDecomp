; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dfea0(void)
;
;
; XREF[3]:
;   FUN_0047c0f0 at 0047c546
;   FUN_00482350 at 00482474
;   FUN_004b90d0 at 004b9188
;
; Called Functions:
;   FUN_0058ead0
;   FUN_005b8e40
;
; *****************************************************************************

section .text

    CALL FUN_0058ead0                   ; 004dfea0
        ;   XREF to: 0058ead0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ead0()
        ;   Label: FUN_004dfea0
    AND EAX,0xff                        ; 004dfea5
    PUSH EAX                            ; 004dfeaa
    CALL FUN_005b8e40                   ; 004dfeab
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004dfeb0
    RET                                 ; 004dfeb3

