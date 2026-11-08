; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b70d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_0056f3a0 at 0056f62f
;   FUN_00581660 at 00581762
;
; Called Functions:
;   FUN_005b63b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b70d0
        ;   Label: FUN_005b70d0
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b70d1
    PUSH EDX                            ; 005b70d5
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b70d6
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b70da
    SUB EAX,EDX                         ; 005b70e1
    SHL EAX,0x6                         ; 005b70e3
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b70e6
    ADD EAX,EDX                         ; 005b70ea
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b70ec
    SHL EAX,0x3                         ; 005b70f0
    PUSH ECX                            ; 005b70f3
    ADD EAX,EBX                         ; 005b70f4
    PUSH EAX                            ; 005b70f6
    CALL FUN_005b63b0                   ; 005b70f7
        ;   XREF to: 005b63b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b63b0()
    ADD ESP,0xc                         ; 005b70fc
    POP EBX                             ; 005b70ff
    RET                                 ; 005b7100

