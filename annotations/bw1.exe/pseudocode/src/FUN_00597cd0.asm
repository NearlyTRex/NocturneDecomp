; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00597cd0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004ce580 at 004ced3c
;
; Referenced Globals:
;   undefined4 DAT_02c8a680
;
; Called Functions:
;   FUN_00597710
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00597cd0
        ;   Label: FUN_00597cd0
    PUSH EDX                            ; 00597cd4
    MOV ECX,dword ptr [0x02c8a680]      ; 00597cd5 | DAT_02c8a680
    PUSH ECX                            ; 00597cdb
    CALL FUN_00597710                   ; 00597cdc
        ;   XREF to: 00597710 (UNCONDITIONAL_CALL)  ; undefined FUN_00597710()
    ADD ESP,0x8                         ; 00597ce1
    RET                                 ; 00597ce4

