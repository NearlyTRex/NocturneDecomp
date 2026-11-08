; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040f4a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_00462500
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f4a0
        ;   Label: FUN_0040f4a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f4a1
    PUSH EBX                            ; 0040f4a5
    CALL FUN_00408600                   ; 0040f4a6
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 0040f4ab
    ADD EAX,0x158                       ; 0040f4ae
    PUSH EAX                            ; 0040f4b3
    CALL FUN_00462500                   ; 0040f4b4
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 0040f4b9
    LEA EBX,[EAX + 0xfffffea8]          ; 0040f4bc
    PUSH 0x5b62df                       ; 0040f4c2
    LEA EAX,[EBX + 0x158]               ; 0040f4c7
    PUSH EAX                            ; 0040f4cd
    MOV dword ptr [EBX + 0x154],0x5db8b4 ; 0040f4ce
    CALL FUN_004625f0                   ; 0040f4d8
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0040f4dd
    MOV dword ptr [EBX + 0x2d8],0x41f00000 ; 0040f4e0
    MOV EAX,EBX                         ; 0040f4ea
    MOV dword ptr [EBX + 0x2dc],0x41f00000 ; 0040f4ec
    POP EBX                             ; 0040f4f6
    RET                                 ; 0040f4f7

