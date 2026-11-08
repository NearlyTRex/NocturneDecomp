; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b7190(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_00415120 at 004151c7
;   FUN_0056fe50 at 0056ff9e
;   FUN_00582ec0 at 00582fff
;
; Called Functions:
;   FUN_005b6560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7190
        ;   Label: FUN_005b7190
    PUSH ESI                            ; 005b7191
    MOV EDX,dword ptr [ESP + 0x18]      ; 005b7192
    PUSH EDX                            ; 005b7196
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b7197
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b719b
    MOV ECX,dword ptr [ESP + 0x18]      ; 005b71a2
    SUB EAX,EDX                         ; 005b71a6
    MOV EBX,dword ptr [ESP + 0x20]      ; 005b71a8
    SHL EAX,0x6                         ; 005b71ac
    MOV ESI,dword ptr [ESP + 0x10]      ; 005b71af
    ADD EAX,EDX                         ; 005b71b3
    PUSH ECX                            ; 005b71b5
    SHL EAX,0x3                         ; 005b71b6
    PUSH EBX                            ; 005b71b9
    ADD EAX,ESI                         ; 005b71ba
    PUSH EAX                            ; 005b71bc
    CALL FUN_005b6560                   ; 005b71bd
        ;   XREF to: 005b6560 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6560()
    ADD ESP,0x10                        ; 005b71c2
    POP ESI                             ; 005b71c5
    POP EBX                             ; 005b71c6
    RET                                 ; 005b71c7

