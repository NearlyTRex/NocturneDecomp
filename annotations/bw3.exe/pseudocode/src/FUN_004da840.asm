; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004da840(void)
;
;
; XREF[1]:
;   FUN_004b7f90 at 004b8655
;
; Called Functions:
;   FUN_0040d400
;
; *****************************************************************************

section .text

    PUSH 0x1d70890                      ; 004da840
        ;   Label: FUN_004da840
    CALL FUN_0040d400                   ; 004da845
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 004da84a
    PUSH 0x1d708a4                      ; 004da84d
    CALL FUN_0040d400                   ; 004da852
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 004da857
    PUSH 0x1d708b8                      ; 004da85a
    CALL FUN_0040d400                   ; 004da85f
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 004da864
    LEA EAX,[EAX]                       ; 004da867
    LEA EDX,[EDX]                       ; 004da86d
    RET                                 ; 004da870

