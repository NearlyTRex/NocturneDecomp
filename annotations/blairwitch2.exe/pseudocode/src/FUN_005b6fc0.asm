; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b6fc0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_00414dd0 at 00414e1f
;
; Called Functions:
;   FUN_005b6030
;   FUN_005b63b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6fc0
        ;   Label: FUN_005b6fc0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b6fc1
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b6fc5
    SUB EAX,EDX                         ; 005b6fcc
    SHL EAX,0x6                         ; 005b6fce
    ADD EAX,EDX                         ; 005b6fd1
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b6fd3
    SHL EAX,0x3                         ; 005b6fd7
    ADD EBX,EAX                         ; 005b6fda
    PUSH EBX                            ; 005b6fdc
    CALL FUN_005b6030                   ; 005b6fdd
        ;   XREF to: 005b6030 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6030()
    ADD ESP,0x4                         ; 005b6fe2
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b6fe5
    PUSH EDX                            ; 005b6fe9
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b6fea
    PUSH ECX                            ; 005b6fee
    PUSH EBX                            ; 005b6fef
    CALL FUN_005b63b0                   ; 005b6ff0
        ;   XREF to: 005b63b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b63b0()
    ADD ESP,0xc                         ; 005b6ff5
    POP EBX                             ; 005b6ff8
    RET                                 ; 005b6ff9

