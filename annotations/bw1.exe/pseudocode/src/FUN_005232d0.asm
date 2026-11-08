; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005232d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_00414e00 at 00414ea7
;   FUN_00592aa0 at 00592bee
;   FUN_005a6b00 at 005a6c3f
;
; Called Functions:
;   FUN_005226a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005232d0
        ;   Label: FUN_005232d0
    PUSH ESI                            ; 005232d1
    MOV EDX,dword ptr [ESP + 0x18]      ; 005232d2
    PUSH EDX                            ; 005232d6
    MOV EDX,dword ptr [ESP + 0x14]      ; 005232d7
    LEA EAX,[EDX*0x4 + 0x0]             ; 005232db
    MOV ECX,dword ptr [ESP + 0x18]      ; 005232e2
    SUB EAX,EDX                         ; 005232e6
    MOV EBX,dword ptr [ESP + 0x20]      ; 005232e8
    SHL EAX,0x6                         ; 005232ec
    MOV ESI,dword ptr [ESP + 0x10]      ; 005232ef
    ADD EAX,EDX                         ; 005232f3
    PUSH ECX                            ; 005232f5
    SHL EAX,0x3                         ; 005232f6
    PUSH EBX                            ; 005232f9
    ADD EAX,ESI                         ; 005232fa
    PUSH EAX                            ; 005232fc
    CALL FUN_005226a0                   ; 005232fd
        ;   XREF to: 005226a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005226a0()
    ADD ESP,0x10                        ; 00523302
    POP ESI                             ; 00523305
    POP EBX                             ; 00523306
    RET                                 ; 00523307

