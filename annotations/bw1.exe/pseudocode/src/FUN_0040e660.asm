; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e660(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_004688e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040e660
        ;   Label: FUN_0040e660
    PUSH EDX                            ; 0040e664
    CALL FUN_00408850                   ; 0040e665
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 0040e66a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e66d
    ADD EAX,0x158                       ; 0040e671
    PUSH EAX                            ; 0040e676
    CALL FUN_004688e0                   ; 0040e677
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 0040e67c
    RET                                 ; 0040e67f

