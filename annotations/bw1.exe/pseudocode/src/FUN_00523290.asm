; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00523290(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[6]:
;   FUN_00414e00 at 00414e88
;   FUN_00510c20 at 00510d34
;   FUN_00521070 at 0052110a
;   FUN_00532cd0 at 00532d70
;   FUN_00592aa0 at 00592bca
;   FUN_005a6b00 at 005a6c2b
;
; Called Functions:
;   FUN_00522650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523290
        ;   Label: FUN_00523290
    MOV EDX,dword ptr [ESP + 0x10]      ; 00523291
    PUSH EDX                            ; 00523295
    MOV EDX,dword ptr [ESP + 0x10]      ; 00523296
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052329a
    SUB EAX,EDX                         ; 005232a1
    SHL EAX,0x6                         ; 005232a3
    MOV ECX,dword ptr [ESP + 0x18]      ; 005232a6
    ADD EAX,EDX                         ; 005232aa
    MOV EBX,dword ptr [ESP + 0xc]       ; 005232ac
    SHL EAX,0x3                         ; 005232b0
    PUSH ECX                            ; 005232b3
    ADD EAX,EBX                         ; 005232b4
    PUSH EAX                            ; 005232b6
    CALL FUN_00522650                   ; 005232b7
        ;   XREF to: 00522650 (UNCONDITIONAL_CALL)  ; undefined FUN_00522650()
    ADD ESP,0xc                         ; 005232bc
    POP EBX                             ; 005232bf
    RET                                 ; 005232c0

