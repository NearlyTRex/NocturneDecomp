; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00402820(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_004027f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402820
        ;   Label: FUN_00402820
    MOV EDX,dword ptr [ESP + 0xc]       ; 00402821
    PUSH EDX                            ; 00402825
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402826
    PUSH ECX                            ; 0040282a
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040282b
    PUSH EBX                            ; 0040282f
    CALL FUN_004027f0                   ; 00402830
        ;   XREF to: 004027f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004027f0()
    ADD ESP,0xc                         ; 00402835
    POP EBX                             ; 00402838
    RET                                 ; 00402839

