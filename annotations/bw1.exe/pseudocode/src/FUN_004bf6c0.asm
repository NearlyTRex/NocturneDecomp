; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bf6c0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004bad40 at 004bad6e
;
; Referenced Globals:
;   undefined4 DAT_005fca10
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 004bf6c0 | DAT_005fca10
        ;   Label: FUN_004bf6c0
    PUSH 0x3                            ; 004bf6c5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bf6c7
    PUSH EDX                            ; 004bf6cb
    CALL FUN_005c1066                   ; 004bf6cc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004bf6d1
    RET                                 ; 004bf6d4

