; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00579270(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0056dfa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00579270
        ;   Label: FUN_00579270
    PUSH EDX                            ; 00579274
    CALL FUN_0056dfa0                   ; 00579275
        ;   XREF to: 0056dfa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056dfa0()
    MOV dword ptr [EAX + 0x154],0x5e6124 ; 0057927a
    MOV dword ptr [EAX + 0x160],0x3f000000 ; 00579284
    MOV dword ptr [EAX + 0x164],0x3f800000 ; 0057928e
    MOV dword ptr [EAX + 0x168],0x3f000000 ; 00579298
    ADD ESP,0x4                         ; 005792a2
    MOV dword ptr [EAX + 0x374],0x0     ; 005792a5
    RET                                 ; 005792af

