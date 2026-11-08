; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d8800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_004d8a10 at 004d8a3c
;
; Called Functions:
;   FUN_004d8180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8800
        ;   Label: FUN_004d8800
    PUSH ESI                            ; 004d8801
    PUSH EDI                            ; 004d8802
    PUSH EBP                            ; 004d8803
    MOV EDX,dword ptr [ESP + 0x28]      ; 004d8804
    PUSH EDX                            ; 004d8808
    MOV ECX,dword ptr [ESP + 0x28]      ; 004d8809
    PUSH ECX                            ; 004d880d
    MOV EBX,dword ptr [ESP + 0x28]      ; 004d880e
    PUSH EBX                            ; 004d8812
    MOV ESI,dword ptr [ESP + 0x28]      ; 004d8813
    PUSH ESI                            ; 004d8817
    MOV EDI,dword ptr [ESP + 0x28]      ; 004d8818
    PUSH EDI                            ; 004d881c
    MOV EBP,dword ptr [ESP + 0x28]      ; 004d881d
    PUSH EBP                            ; 004d8821
    PUSH 0x1cee1a4                      ; 004d8822
    CALL FUN_004d8180                   ; 004d8827
        ;   XREF to: 004d8180 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8180()
    ADD ESP,0x1c                        ; 004d882c
    POP EBP                             ; 004d882f
    POP EDI                             ; 004d8830
    POP ESI                             ; 004d8831
    POP EBX                             ; 004d8832
    RET                                 ; 004d8833

