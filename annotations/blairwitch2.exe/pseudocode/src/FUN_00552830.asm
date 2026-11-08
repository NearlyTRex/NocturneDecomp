; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00552830(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004ed260 at 004ee037
;
; Called Functions:
;   FUN_005526f0
;   FUN_005527f0
;   FUN_00552810
;
; *****************************************************************************

section .text

    CALL FUN_005527f0                   ; 00552830
        ;   XREF to: 005527f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005527f0()
        ;   Label: FUN_00552830
    PUSH EAX                            ; 00552835
    CALL FUN_00552810                   ; 00552836
        ;   XREF to: 00552810 (UNCONDITIONAL_CALL)  ; undefined FUN_00552810()
    PUSH EAX                            ; 0055283b
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055283c
    PUSH EDX                            ; 00552840
    CALL FUN_005526f0                   ; 00552841
        ;   XREF to: 005526f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005526f0()
    ADD ESP,0xc                         ; 00552846
    RET                                 ; 00552849

