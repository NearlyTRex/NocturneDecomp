; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059aa80(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0266783c
;   undefined4 DAT_02667850
;
; Called Functions:
;   FUN_0040d420
;   FUN_0044fc80
;   FUN_0059ab30
;   FUN_005b7f5f
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x5f6f60                       ; 0059aa80
        ;   Label: FUN_0059aa80
    PUSH 0x4                            ; 0059aa85
    PUSH 0x26677ec                      ; 0059aa87
    CALL FUN_005b7f5f                   ; 0059aa8c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 0059aa91
    PUSH 0x61e9ab                       ; 0059aa94
    CALL FUN_005b8d8c                   ; 0059aa99
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 0059aa9e
    PUSH 0x266783c                      ; 0059aaa1
    CALL FUN_0059ab30                   ; 0059aaa6
        ;   XREF to: 0059ab30 (UNCONDITIONAL_CALL)  ; undefined FUN_0059ab30()
    ADD ESP,0x4                         ; 0059aaab
    MOV EDX,0x5fe584                    ; 0059aaae
    PUSH 0x61e9bb                       ; 0059aab3
    MOV dword ptr [0x0266783c],EDX      ; 0059aab8 | DAT_0266783c
    CALL FUN_005b8d8c                   ; 0059aabe
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 0059aac3
    PUSH 0x2667850                      ; 0059aac6
    CALL FUN_0059ab30                   ; 0059aacb
        ;   XREF to: 0059ab30 (UNCONDITIONAL_CALL)  ; undefined FUN_0059ab30()
    ADD ESP,0x4                         ; 0059aad0
    PUSH 0x2667854                      ; 0059aad3
    CALL FUN_0040d420                   ; 0059aad8
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 0059aadd
    PUSH 0x5fe5f0                       ; 0059aae0
    PUSH 0x1e                           ; 0059aae5
    PUSH 0x266789c                      ; 0059aae7
    CALL FUN_005b7f5f                   ; 0059aaec
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 0059aaf1
    PUSH 0x2667dc4                      ; 0059aaf4
    CALL FUN_0044fc80                   ; 0059aaf9
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 0059aafe
    PUSH 0x2667f40                      ; 0059ab01
    CALL FUN_0044fc80                   ; 0059ab06
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 0059ab0b
    MOV ECX,0x5fe524                    ; 0059ab0e
    PUSH 0x61e9cb                       ; 0059ab13
    MOV dword ptr [0x02667850],ECX      ; 0059ab18 | DAT_02667850
    CALL FUN_005b8d8c                   ; 0059ab1e
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 0059ab23
    RET                                 ; 0059ab26

