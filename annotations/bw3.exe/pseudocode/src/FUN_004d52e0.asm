; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d52e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00556230
;   FUN_0057af40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d52e0
        ;   Label: FUN_004d52e0
    PUSH EDX                            ; 004d52e4
    CALL FUN_0057af40                   ; 004d52e5
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; undefined FUN_0057af40()
    ADD ESP,0x4                         ; 004d52ea
    PUSH 0x5c5200                       ; 004d52ed
    CALL FUN_00556230                   ; 004d52f2
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 004d52f7
    PUSH 0x5c520f                       ; 004d52fa
    CALL FUN_00556230                   ; 004d52ff
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 004d5304
    PUSH 0x5c5220                       ; 004d5307
    CALL FUN_00556230                   ; 004d530c
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 004d5311
    RET                                 ; 004d5314

