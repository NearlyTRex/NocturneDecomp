; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a9b70(int param_1)
;
;
; Called Functions:
;   FUN_0059f980
;   FUN_005a8290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9b70
        ;   Label: FUN_005a9b70
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a9b71
    PUSH EDX                            ; 005a9b75
    CALL FUN_0059f980                   ; 005a9b76
        ;   XREF to: 0059f980 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f980()
    ADD ESP,0x4                         ; 005a9b7b
    MOV EBX,EAX                         ; 005a9b7e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a9b80
    ADD EAX,0x264                       ; 005a9b84
    PUSH EAX                            ; 005a9b89
    CALL FUN_005a8290                   ; 005a9b8a
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8290()
    ADD ESP,0x4                         ; 005a9b8f
    MOV EAX,EBX                         ; 005a9b92
    POP EBX                             ; 005a9b94
    RET                                 ; 005a9b95

