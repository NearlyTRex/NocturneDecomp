; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005299e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00525eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005299e0
        ;   Label: FUN_005299e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005299e1
    PUSH EBX                            ; 005299e5
    CALL FUN_00525eb0                   ; 005299e6
        ;   XREF to: 00525eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525eb0()
    ADD ESP,0x4                         ; 005299eb
    MOV EAX,EBX                         ; 005299ee
    POP EBX                             ; 005299f0
    RET                                 ; 005299f1

