; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00402cf0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_00402d30 at 00402d46
;   FUN_0045d760 at 0045d9b2
;
; Called Functions:
;   FUN_00401ed0
;   FUN_00402a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402cf0
        ;   Label: FUN_00402cf0
    PUSH ESI                            ; 00402cf1
    MOV EDX,dword ptr [ESP + 0x18]      ; 00402cf2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00402cf6
    PUSH EDX                            ; 00402cfa
    MOV ESI,dword ptr [ESP + 0x10]      ; 00402cfb
    MOV ECX,dword ptr [ESP + 0x18]      ; 00402cff
    PUSH ESI                            ; 00402d03
    ADD EBX,ECX                         ; 00402d04
    CALL FUN_00401ed0                   ; 00402d06
        ;   XREF to: 00401ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401ed0()
    LEA EDX,[EBX + 0x1]                 ; 00402d0b
    SUB EDX,EAX                         ; 00402d0e
    INC EDX                             ; 00402d10
    MOV EAX,EDX                         ; 00402d11
    SAR EDX,0x1f                        ; 00402d13
    SUB EAX,EDX                         ; 00402d16
    SAR EAX,0x1                         ; 00402d18
    ADD ESP,0x4                         ; 00402d1a
    PUSH EAX                            ; 00402d1d
    PUSH ESI                            ; 00402d1e
    CALL FUN_00402a60                   ; 00402d1f
        ;   XREF to: 00402a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00402a60()
    ADD ESP,0xc                         ; 00402d24
    POP ESI                             ; 00402d27
    POP EBX                             ; 00402d28
    RET                                 ; 00402d29

