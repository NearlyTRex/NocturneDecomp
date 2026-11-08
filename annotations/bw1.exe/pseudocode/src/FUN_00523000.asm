; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00523000(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
;
;
; Called Functions:
;   FUN_00522170
;   FUN_005221d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523000
        ;   Label: FUN_00523000
    PUSH ESI                            ; 00523001
    PUSH EDI                            ; 00523002
    PUSH EBP                            ; 00523003
    MOV EDX,dword ptr [ESP + 0x18]      ; 00523004
    LEA EAX,[EDX*0x4 + 0x0]             ; 00523008
    SUB EAX,EDX                         ; 0052300f
    SHL EAX,0x6                         ; 00523011
    ADD EAX,EDX                         ; 00523014
    MOV EBX,dword ptr [ESP + 0x14]      ; 00523016
    SHL EAX,0x3                         ; 0052301a
    ADD EBX,EAX                         ; 0052301d
    PUSH EBX                            ; 0052301f
    CALL FUN_00522170                   ; 00523020
        ;   XREF to: 00522170 (UNCONDITIONAL_CALL)  ; undefined FUN_00522170()
    ADD ESP,0x4                         ; 00523025
    MOV EDX,dword ptr [ESP + 0x30]      ; 00523028
    PUSH EDX                            ; 0052302c
    MOV ECX,dword ptr [ESP + 0x30]      ; 0052302d
    PUSH ECX                            ; 00523031
    PUSH 0x3c                           ; 00523032
    MOV ESI,dword ptr [ESP + 0x34]      ; 00523034
    PUSH ESI                            ; 00523038
    MOV EDI,dword ptr [ESP + 0x34]      ; 00523039
    PUSH EDI                            ; 0052303d
    MOV EBP,dword ptr [ESP + 0x34]      ; 0052303e
    PUSH EBP                            ; 00523042
    MOV EAX,dword ptr [ESP + 0x34]      ; 00523043
    PUSH EAX                            ; 00523047
    PUSH EBX                            ; 00523048
    CALL FUN_005221d0                   ; 00523049
        ;   XREF to: 005221d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005221d0()
    ADD ESP,0x20                        ; 0052304e
    POP EBP                             ; 00523051
    POP EDI                             ; 00523052
    POP ESI                             ; 00523053
    POP EBX                             ; 00523054
    RET                                 ; 00523055

