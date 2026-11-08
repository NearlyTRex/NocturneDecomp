; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e77b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e77b0
        ;   Label: FUN_004e77b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e77b1
    PUSH EBX                            ; 004e77b5
    CALL FUN_00408790                   ; 004e77b6
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 004e77bb
    ADD EAX,0x2b4                       ; 004e77be
    PUSH EAX                            ; 004e77c3
    CALL FUN_0044fc80                   ; 004e77c4
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 004e77c9
    LEA EBX,[EAX + 0xfffffd4c]          ; 004e77cc
    PUSH 0x5dc71d                       ; 004e77d2
    LEA EAX,[EBX + 0x2b4]               ; 004e77d7
    PUSH EAX                            ; 004e77dd
    MOV dword ptr [EBX + 0x2b0],0x5f99c4 ; 004e77de
    CALL FUN_0044fd70                   ; 004e77e8
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 004e77ed
    MOV EAX,EBX                         ; 004e77f0
    MOV dword ptr [EBX + 0x430],0x0     ; 004e77f2
    POP EBX                             ; 004e77fc
    RET                                 ; 004e77fd

