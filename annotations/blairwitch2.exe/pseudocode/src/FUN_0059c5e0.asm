; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059c5e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00587d70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059c5e0
        ;   Label: FUN_0059c5e0
    PUSH EDX                            ; 0059c5e4
    CALL FUN_00587d70                   ; 0059c5e5
        ;   XREF to: 00587d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00587d70()
    MOV dword ptr [EAX + 0x2b0],0x5fe7b4 ; 0059c5ea
    ADD ESP,0x4                         ; 0059c5f4
    MOV dword ptr [EAX + 0x6b8],0x1     ; 0059c5f7
    RET                                 ; 0059c601

