; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053ba00(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_005fed24
;
; Called Functions:
;   FUN_004a1e90
;   FUN_004ce630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ba00
        ;   Label: FUN_0053ba00
    PUSH ESI                            ; 0053ba01
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053ba02
    PUSH EDX                            ; 0053ba06
    PUSH 0x0                            ; 0053ba07
    MOV ECX,dword ptr [0x005fed24]      ; 0053ba09 | DAT_005fed24
    PUSH ECX                            ; 0053ba0f
    CALL FUN_004ce630                   ; 0053ba10
        ;   XREF to: 004ce630 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce630()
    ADD ESP,0xc                         ; 0053ba15
    MOV EBX,dword ptr [ESP + 0x10]      ; 0053ba18
    PUSH EBX                            ; 0053ba1c
    PUSH 0x0                            ; 0053ba1d
    MOV ESI,dword ptr [0x005fc5a0]      ; 0053ba1f | DAT_005fc5a0
    PUSH ESI                            ; 0053ba25
    CALL FUN_004a1e90                   ; 0053ba26
        ;   XREF to: 004a1e90 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1e90()
    ADD ESP,0xc                         ; 0053ba2b
    POP ESI                             ; 0053ba2e
    POP EBX                             ; 0053ba2f
    RET                                 ; 0053ba30

