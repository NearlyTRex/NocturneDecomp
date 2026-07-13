; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048cbb0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_0059d2c4 = 004ef040
;
; Called Functions:
;   FUN_004ef010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0048cbb0
        ;   Label: FUN_0048cbb0
    PUSH EDX                            ; 0048cbb4
    CALL FUN_004ef010                   ; 0048cbb5
        ;   XREF to: 004ef010 (UNCONDITIONAL_CALL)  ; undefined FUN_004ef010()
    ADD ESP,0x4                         ; 0048cbba
    MOV dword ptr [EAX + 0x34],0x59d2c4 ; 0048cbbd | PTR_FUN_0059d2c4
    RET                                 ; 0048cbc4

