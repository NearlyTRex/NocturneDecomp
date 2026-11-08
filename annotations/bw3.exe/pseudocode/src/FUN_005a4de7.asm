; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a4de7(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_005a4e29 at 005a4e81
;
; Called Functions:
;   FUN_005abc85
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4de7
        ;   Label: FUN_005a4de7
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a4de8
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a4dec
    PUSH EDX                            ; 005a4df0
    PUSH EAX                            ; 005a4df1
    MOV EBX,dword ptr [EAX + 0x10]      ; 005a4df2
    MOV dword ptr [EAX + 0x10],0x0      ; 005a4df5
    CALL FUN_005abc85                   ; 005a4dfc
        ;   XREF to: 005abc85 (UNCONDITIONAL_CALL)  ; undefined FUN_005abc85()
    ADD ESP,0x8                         ; 005a4e01
    MOV EAX,EBX                         ; 005a4e04
    POP EBX                             ; 005a4e06
    RET                                 ; 005a4e07

