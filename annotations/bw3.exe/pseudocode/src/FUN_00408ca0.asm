; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408ca0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_006045f8
;
; Called Functions:
;   FUN_00560a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408ca0
        ;   Label: FUN_00408ca0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408ca1
    LEA EAX,[EDX + 0x20]                ; 00408ca5
    PUSH dword ptr [ESP + 0x10]         ; 00408ca8
    PUSH EAX                            ; 00408cac
    MOV ECX,dword ptr [ESP + 0x14]      ; 00408cad
    PUSH ECX                            ; 00408cb1
    PUSH EDX                            ; 00408cb2
    MOV EBX,dword ptr [0x006045f8]      ; 00408cb3 | DAT_006045f8
    PUSH EBX                            ; 00408cb9
    CALL FUN_00560a70                   ; 00408cba
        ;   XREF to: 00560a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00560a70()
    ADD ESP,0x14                        ; 00408cbf
    POP EBX                             ; 00408cc2
    RET                                 ; 00408cc3

