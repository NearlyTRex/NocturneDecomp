; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d05f0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004d0610 at 004d074c
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   FUN_0046b850
;
; *****************************************************************************

section .text

    PUSH 0x24d                          ; 004d05f0
        ;   Label: FUN_004d05f0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d05f5
    PUSH EDX                            ; 004d05f9
    MOV ECX,dword ptr [0x005f2afc]      ; 004d05fa | DAT_005f2afc
    PUSH ECX                            ; 004d0600 | DAT_01bdd7e4
    CALL FUN_0046b850                   ; 004d0601
        ;   XREF to: 0046b850 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b850()
    ADD ESP,0xc                         ; 004d0606
    RET                                 ; 004d0609

