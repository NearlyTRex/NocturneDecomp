; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056cd00(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_00462500
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056cd00
        ;   Label: FUN_0056cd00
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056cd01
    PUSH EBX                            ; 0056cd05
    CALL FUN_00408600                   ; 0056cd06
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 0056cd0b
    ADD EAX,0x158                       ; 0056cd0e
    PUSH EAX                            ; 0056cd13
    CALL FUN_00462500                   ; 0056cd14
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 0056cd19
    LEA EBX,[EAX + 0xfffffea8]          ; 0056cd1c
    PUSH 0x5d6567                       ; 0056cd22
    LEA EAX,[EBX + 0x158]               ; 0056cd27
    PUSH EAX                            ; 0056cd2d
    MOV dword ptr [EBX + 0x154],0x5e5694 ; 0056cd2e
    CALL FUN_004625f0                   ; 0056cd38
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0056cd3d
    MOV EAX,EBX                         ; 0056cd40
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0056cd42
    POP EBX                             ; 0056cd4c
    RET                                 ; 0056cd4d

