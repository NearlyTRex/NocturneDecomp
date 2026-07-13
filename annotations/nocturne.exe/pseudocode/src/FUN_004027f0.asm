; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004027f0(undefined4 param_1,int param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_00402820 at 00402830
;   FUN_00402840 at 00402891
;
; Called Functions:
;   FUN_00401ed0
;   FUN_00402600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004027f0
        ;   Label: FUN_004027f0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004027f1
    PUSH EDX                            ; 004027f5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004027f6
    PUSH ECX                            ; 004027fa
    CALL FUN_00401ed0                   ; 004027fb
        ;   XREF to: 00401ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401ed0()
    ADD ESP,0x4                         ; 00402800
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402803
    SUB EDX,EAX                         ; 00402807
    LEA EAX,[EDX + 0x2]                 ; 00402809
    PUSH EAX                            ; 0040280c
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040280d
    PUSH EBX                            ; 00402811
    CALL FUN_00402600                   ; 00402812
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined FUN_00402600()
    ADD ESP,0xc                         ; 00402817
    POP EBX                             ; 0040281a
    RET                                 ; 0040281b

