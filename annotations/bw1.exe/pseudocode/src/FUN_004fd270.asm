; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fd270(void)
;
;
; XREF[3]:
;   FUN_00494690 at 00494afe
;   FUN_0049a9b0 at 0049aad4
;   FUN_004d27b0 at 004d2873
;
; Called Functions:
;   FUN_005b2510
;   FUN_005c12b0
;
; *****************************************************************************

section .text

    CALL FUN_005b2510                   ; 004fd270
        ;   XREF to: 005b2510 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2510()
        ;   Label: FUN_004fd270
    AND EAX,0xff                        ; 004fd275
    PUSH EAX                            ; 004fd27a
    CALL FUN_005c12b0                   ; 004fd27b
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c12b0()
    ADD ESP,0x4                         ; 004fd280
    RET                                 ; 004fd283

