; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ca9a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004caa60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca9a0
        ;   Label: FUN_004ca9a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ca9a1
    PUSH EBX                            ; 004ca9a5
    CALL FUN_004caa60                   ; 004ca9a6
        ;   XREF to: 004caa60 (UNCONDITIONAL_CALL)  ; undefined FUN_004caa60()
    ADD ESP,0x4                         ; 004ca9ab
    MOV EAX,EBX                         ; 004ca9ae
    POP EBX                             ; 004ca9b0
    RET                                 ; 004ca9b1

