; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00402540(undefined4 param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00480480 at 00480682
;
; Called Functions:
;   FUN_004018b0
;   FUN_00402440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402540
        ;   Label: FUN_00402540
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402541
    PUSH EDX                            ; 00402545
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402546
    PUSH ECX                            ; 0040254a
    CALL FUN_004018b0                   ; 0040254b
        ;   XREF to: 004018b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004018b0()
    ADD ESP,0x4                         ; 00402550
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402553
    SUB EDX,EAX                         ; 00402557
    LEA EAX,[EDX + 0x2]                 ; 00402559
    PUSH EAX                            ; 0040255c
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040255d
    PUSH EBX                            ; 00402561
    CALL FUN_00402440                   ; 00402562
        ;   XREF to: 00402440 (UNCONDITIONAL_CALL)  ; undefined FUN_00402440()
    ADD ESP,0xc                         ; 00402567
    POP EBX                             ; 0040256a
    RET                                 ; 0040256b

