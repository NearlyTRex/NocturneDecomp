; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0059c060(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c060
        ;   Label: FUN_0059c060
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059c061
    PUSH EBX                            ; 0059c065
    CALL FUN_00408790                   ; 0059c066
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 0059c06b
    ADD EAX,0x2b4                       ; 0059c06e
    PUSH EAX                            ; 0059c073
    CALL FUN_0044fc80                   ; 0059c074
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 0059c079
    LEA EBX,[EAX + 0xfffffd4c]          ; 0059c07c
    PUSH 0x5ef5b1                       ; 0059c082
    LEA EAX,[EBX + 0x2b4]               ; 0059c087
    PUSH EAX                            ; 0059c08d
    MOV dword ptr [EBX + 0x2b0],0x5fe634 ; 0059c08e
    CALL FUN_0044fd70                   ; 0059c098
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0059c09d
    MOV EAX,EBX                         ; 0059c0a0
    MOV dword ptr [EBX + 0x430],0x0     ; 0059c0a2
    POP EBX                             ; 0059c0ac
    RET                                 ; 0059c0ad

