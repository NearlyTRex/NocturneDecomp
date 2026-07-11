; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e1960(undefined4 *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_004d5770 at 004d57ee
;   FUN_0054e1e0 at 0054e1fd
;
; Called Functions:
;   FUN_004e1010
;   FUN_004e1990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1960
        ;   Label: FUN_004e1960
    PUSH 0x1                            ; 004e1961
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e1963
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e1967
    PUSH EDX                            ; 004e196b
    MOV ECX,dword ptr [EAX]             ; 004e196c
    PUSH ECX                            ; 004e196e
    CALL FUN_004e1010                   ; 004e196f
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1010()
    ADD ESP,0xc                         ; 004e1974
    PUSH dword ptr [ESP + 0x10]         ; 004e1977
    PUSH EAX                            ; 004e197b
    MOV EBX,dword ptr [ESP + 0x10]      ; 004e197c
    PUSH EBX                            ; 004e1980
    CALL FUN_004e1990                   ; 004e1981
        ;   XREF to: 004e1990 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1990()
    ADD ESP,0xc                         ; 004e1986
    POP EBX                             ; 004e1989
    RET                                 ; 004e198a

