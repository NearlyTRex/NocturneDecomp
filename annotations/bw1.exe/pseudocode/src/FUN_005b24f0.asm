; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005b24f0(void)
;
;
; XREF[3]:
;   FUN_004032b0 at 004032b0
;   FUN_004931b0 at 0049331d
;   thunk_FUN_005b24f0 at 004fd250
;
; Referenced Globals:
;   undefined4 DAT_02c9a618
;   undefined4 DAT_02c9a61c
;   undefined4 DAT_02c9a620
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 005b24f0
        ;   Label: FUN_005b24f0
    XOR EAX,EAX                         ; 005b24f2
    MOV dword ptr [0x02c9a61c],EDX      ; 005b24f4 | DAT_02c9a61c
    MOV dword ptr [0x02c9a618],EDX      ; 005b24fa | DAT_02c9a618
    MOV dword ptr [0x02c9a620],EDX      ; 005b2500 | DAT_02c9a620
    RET                                 ; 005b2506

