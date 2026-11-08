; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004aef90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_004b5eb0 at 004b5ef0
;
; Called Functions:
;   FUN_00532160
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004aef90
        ;   Label: FUN_004aef90
    MOV EDX,dword ptr [ESP + 0x10]      ; 004aef94
    MOV dword ptr [EAX + 0x4c],EDX      ; 004aef98
    MOV EDX,dword ptr [ESP + 0xc]       ; 004aef9b
    PUSH EDX                            ; 004aef9f
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aefa0
    PUSH ECX                            ; 004aefa4
    PUSH EAX                            ; 004aefa5
    CALL FUN_00532160                   ; 004aefa6
        ;   XREF to: 00532160 (UNCONDITIONAL_CALL)  ; undefined FUN_00532160()
    ADD ESP,0xc                         ; 004aefab
    MOV EAX,EAX                         ; 004aefae

