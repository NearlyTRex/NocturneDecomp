; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00552870(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004ed260 at 004edfc2
;
; Called Functions:
;   FUN_005526f0
;   FUN_005527d0
;   FUN_00552810
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00552870
        ;   Label: FUN_00552870
    PUSH EDX                            ; 00552874
    CALL FUN_00552810                   ; 00552875
        ;   XREF to: 00552810 (UNCONDITIONAL_CALL)  ; undefined FUN_00552810()
    PUSH EAX                            ; 0055287a
    CALL FUN_005527d0                   ; 0055287b
        ;   XREF to: 005527d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005527d0()
    PUSH EAX                            ; 00552880
    CALL FUN_005526f0                   ; 00552881
        ;   XREF to: 005526f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005526f0()
    ADD ESP,0xc                         ; 00552886
    RET                                 ; 00552889

