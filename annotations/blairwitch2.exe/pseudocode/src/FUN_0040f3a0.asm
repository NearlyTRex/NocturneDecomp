; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_0040f3a0(int param_1)
;
;
; Called Functions:
;   FUN_00408a80
;   FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f3a0
        ;   Label: FUN_0040f3a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f3a1
    LEA EAX,[EBX + 0x2b8]               ; 0040f3a5
    PUSH EAX                            ; 0040f3ab
    CALL FUN_0044fd00                   ; 0040f3ac
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 0040f3b1
    PUSH EBX                            ; 0040f3b4
    CALL FUN_00408a80                   ; 0040f3b5
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    MOV EDX,dword ptr [EBX + 0x434]     ; 0040f3ba
    ADD ESP,0x4                         ; 0040f3c0
    TEST EDX,EDX                        ; 0040f3c3
    SETZ AL                             ; 0040f3c5
    AND EAX,0xff                        ; 0040f3c8
    MOV dword ptr [EBX + 0x100],EAX     ; 0040f3cd
    POP EBX                             ; 0040f3d3
    LEA EAX,[EAX]                       ; 0040f3d4
    LEA EDX,[EDX]                       ; 0040f3da
    RET                                 ; 0040f3e0
        ;   Label: LAB_0040f3e0

