; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00575990(void)
;
;
; XREF[2]:
;   FUN_005759b0 at 005759b4
;   FUN_00575aa0 at 00575aae
;
; Referenced Globals:
;   undefined4 DAT_02c8103c
;
; Called Functions:
;   FUN_00575980
;
; *****************************************************************************

section .text

    CALL FUN_00575980                   ; 00575990
        ;   XREF to: 00575980 (UNCONDITIONAL_CALL)  ; undefined FUN_00575980()
        ;   Label: FUN_00575990
    TEST EAX,EAX                        ; 00575995
    JZ 0x0057599e                       ; 00575997
        ;   XREF to: 0057599e (CONDITIONAL_JUMP)  ; LAB_0057599e
    MOV EAX,[0x02c8103c]                ; 00575999 | DAT_02c8103c
    RET                                 ; 0057599e
        ;   Label: LAB_0057599e

