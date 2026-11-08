; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0048a930(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0048a9b0
;   FUN_0048aab0
;   FUN_0048ace0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048a930
        ;   Label: FUN_0048a930
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048a931
    PUSH EBX                            ; 0048a935
    CALL FUN_0048a9b0                   ; 0048a936
        ;   XREF to: 0048a9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048a9b0()
    ADD ESP,0x4                         ; 0048a93b
    PUSH EBX                            ; 0048a93e
    CALL FUN_0048ace0                   ; 0048a93f
        ;   XREF to: 0048ace0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048ace0()
    ADD ESP,0x4                         ; 0048a944
    PUSH EBX                            ; 0048a947
    CALL FUN_0048aab0                   ; 0048a948
        ;   XREF to: 0048aab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048aab0()
    ADD ESP,0x4                         ; 0048a94d
    MOV EAX,EBX                         ; 0048a950
    POP EBX                             ; 0048a952
    RET                                 ; 0048a953

