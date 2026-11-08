; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00546190(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[2]:
;   FUN_00453d80 at 00453e54
;   FUN_00565ff0 at 005660cd
;
; Called Functions:
;   FUN_005461c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546190
        ;   Label: FUN_00546190
    MOV EAX,dword ptr [ESP + 0xc]       ; 00546191
    MOV EDX,dword ptr [ESP + 0x18]      ; 00546195
    PUSH EDX                            ; 00546199
    MOV ECX,dword ptr [ESP + 0x18]      ; 0054619a
    PUSH ECX                            ; 0054619e
    PUSH dword ptr [ESP + 0x18]         ; 0054619f
    PUSH EAX                            ; 005461a3
    ADD EAX,0xc                         ; 005461a4
    PUSH EAX                            ; 005461a7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005461a8
    PUSH EBX                            ; 005461ac
    CALL FUN_005461c0                   ; 005461ad
        ;   XREF to: 005461c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005461c0()
    ADD ESP,0x18                        ; 005461b2
    POP EBX                             ; 005461b5
    RET                                 ; 005461b6

