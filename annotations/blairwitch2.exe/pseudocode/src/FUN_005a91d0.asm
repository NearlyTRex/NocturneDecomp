; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a91d0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2668460                      ; 005a91d0
        ;   Label: FUN_005a91d0
    PUSH 0x1                            ; 005a91d5
    PUSH 0x61ec90                       ; 005a91d7
    PUSH 0x5a9200                       ; 005a91dc
    PUSH 0x5f08a7                       ; 005a91e1
    PUSH 0x266886c                      ; 005a91e6
    CALL FUN_0040c450                   ; 005a91eb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 005a91f0
    RET                                 ; 005a91f3

