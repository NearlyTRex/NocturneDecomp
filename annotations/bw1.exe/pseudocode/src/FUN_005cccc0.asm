; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005cccc0(void)
;
;
; XREF[2]:
;   FUN_005ca868 at 005ca86e
;   FUN_005ca8a4 at 005ca8ad
;
; Referenced Globals:
;   void* PTR_FUN_006265fc = 005c50cc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006265fc]         ; 005cccc0 | PTR_FUN_006265fc
        ;   Label: FUN_005cccc0
    ADD EAX,0xc6                        ; 005cccc6
    RET                                 ; 005ccccb

