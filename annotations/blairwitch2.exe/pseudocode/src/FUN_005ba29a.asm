; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ba29a(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00541370 at 00541420
;
; Called Functions:
;   FUN_005ba242
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba29a
        ;   Label: FUN_005ba29a
    MOV EDX,dword ptr [ESP + 0x10]      ; 005ba29b
    PUSH EDX                            ; 005ba29f
    MOV ECX,dword ptr [ESP + 0x10]      ; 005ba2a0
    PUSH ECX                            ; 005ba2a4
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ba2a5
    PUSH EBX                            ; 005ba2a9
    CALL FUN_005ba242                   ; 005ba2aa
        ;   XREF to: 005ba242 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba242()
    ADD ESP,0xc                         ; 005ba2af
    POP EBX                             ; 005ba2b2
    RET                                 ; 005ba2b3

