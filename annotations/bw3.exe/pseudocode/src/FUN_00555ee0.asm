; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555ee0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_00560a70 at 00560a7e
;   FUN_00560ab0 at 00560aba
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555ee0 | DAT_02ceb91c
        ;   Label: FUN_00555ee0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555ee6
    SUB EAX,EDX                         ; 00555eed
    SHL EAX,0x5                         ; 00555eef
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555ef2
    MOV dword ptr [EAX + 0x2ceb960],EDX ; 00555ef6
    RET                                 ; 00555efc

