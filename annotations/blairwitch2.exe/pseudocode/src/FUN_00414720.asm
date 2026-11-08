; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00414720(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414720
        ;   Label: FUN_00414720
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414721
    PUSH EBX                            ; 00414725
    CALL FUN_00408790                   ; 00414726
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 0041472b
    ADD EAX,0x2b4                       ; 0041472e
    PUSH EAX                            ; 00414733
    CALL FUN_0044fc80                   ; 00414734
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 00414739
    LEA EBX,[EAX + 0xfffffd4c]          ; 0041473c
    PUSH 0x5cbc1f                       ; 00414742
    LEA EAX,[EBX + 0x2b4]               ; 00414747
    PUSH EAX                            ; 0041474d
    MOV dword ptr [EBX + 0x2b0],0x5f3244 ; 0041474e
    CALL FUN_0044fd70                   ; 00414758
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0041475d
    MOV dword ptr [EBX + 0x434],0x41f00000 ; 00414760
    MOV EAX,EBX                         ; 0041476a
    MOV dword ptr [EBX + 0x438],0x41f00000 ; 0041476c
    POP EBX                             ; 00414776
    RET                                 ; 00414777

