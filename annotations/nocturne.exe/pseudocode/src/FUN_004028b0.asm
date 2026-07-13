; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004028b0(undefined4 param_1,int param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_004028f0 at 00402900
;   FUN_00402910 at 00402961
;
; Called Functions:
;   FUN_00401ed0
;   FUN_00402600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004028b0
        ;   Label: FUN_004028b0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004028b1
    PUSH EDX                            ; 004028b5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004028b6
    PUSH ECX                            ; 004028ba
    CALL FUN_00401ed0                   ; 004028bb
        ;   XREF to: 00401ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401ed0()
    LEA EDX,[EAX + -0x1]                ; 004028c0
    MOV EAX,EDX                         ; 004028c3
    SAR EDX,0x1f                        ; 004028c5
    SUB EAX,EDX                         ; 004028c8
    SAR EAX,0x1                         ; 004028ca
    ADD ESP,0x4                         ; 004028cc
    MOV EDX,dword ptr [ESP + 0x10]      ; 004028cf
    SUB EDX,EAX                         ; 004028d3
    PUSH EDX                            ; 004028d5
    MOV EBX,dword ptr [ESP + 0x10]      ; 004028d6
    PUSH EBX                            ; 004028da
    CALL FUN_00402600                   ; 004028db
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined FUN_00402600()
    ADD ESP,0xc                         ; 004028e0
    POP EBX                             ; 004028e3
    RET                                 ; 004028e4

