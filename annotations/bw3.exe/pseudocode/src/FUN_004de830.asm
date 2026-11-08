; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004de830(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_00462500
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004de830
        ;   Label: FUN_004de830
    MOV EBX,dword ptr [ESP + 0x8]       ; 004de831
    PUSH EBX                            ; 004de835
    CALL FUN_00408600                   ; 004de836
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 004de83b
    ADD EAX,0x158                       ; 004de83e
    PUSH EAX                            ; 004de843
    CALL FUN_00462500                   ; 004de844
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 004de849
    LEA EBX,[EAX + 0xfffffea8]          ; 004de84c
    PUSH 0x5c669f                       ; 004de852
    LEA EAX,[EBX + 0x158]               ; 004de857
    PUSH EAX                            ; 004de85d
    MOV dword ptr [EBX + 0x154],0x5e2154 ; 004de85e
    CALL FUN_004625f0                   ; 004de868
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 004de86d
    MOV dword ptr [EBX + 0x2d4],0x1     ; 004de870
    MOV EAX,EBX                         ; 004de87a
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004de87c
    POP EBX                             ; 004de886
    RET                                 ; 004de887

