; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a01d0(int param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_0059e6a0 at 0059e793
;
; Called Functions:
;   FUN_00502f10
;   FUN_00503860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a01d0
        ;   Label: FUN_005a01d0
    PUSH ESI                            ; 005a01d1
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a01d2
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a01d6
    ADD EAX,0x2b4                       ; 005a01da
    PUSH EAX                            ; 005a01df
    CALL FUN_00503860                   ; 005a01e0
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; undefined FUN_00503860()
    ADD ESP,0x4                         ; 005a01e5
    PUSH 0x1                            ; 005a01e8
    MOV ESI,EAX                         ; 005a01ea
    LEA EAX,[EBX + 0x4]                 ; 005a01ec
    PUSH EAX                            ; 005a01ef
    PUSH ESI                            ; 005a01f0
    CALL FUN_00502f10                   ; 005a01f1
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00502f10()
    MOV EDX,EAX                         ; 005a01f6
    MOV dword ptr [EBX + 0x24],EAX      ; 005a01f8
    SHL EAX,0x3                         ; 005a01fb
    ADD EAX,EDX                         ; 005a01fe
    SHL EAX,0x2                         ; 005a0200
    SUB EAX,EDX                         ; 005a0203
    MOV EAX,dword ptr [ESI + EAX*0x8 + 0x1c8c] ; 005a0205
    MOV EDX,dword ptr [EBX + 0x24]      ; 005a020c
    MOV dword ptr [EBX + 0x28],EAX      ; 005a020f
    LEA EAX,[EDX*0x8 + 0x0]             ; 005a0212
    ADD EAX,EDX                         ; 005a0219
    SHL EAX,0x2                         ; 005a021b
    SUB EAX,EDX                         ; 005a021e
    FILD dword ptr [EBX + 0x28]         ; 005a0220
    FDIV float ptr [ESI + EAX*0x8 + 0x1c48] ; 005a0223
    MOV dword ptr [EBX],0x0             ; 005a022a
    MOV dword ptr [EBX + 0x34],0x0      ; 005a0230
    ADD ESP,0xc                         ; 005a0237
    FSTP float ptr [EBX + 0x30]         ; 005a023a
    POP ESI                             ; 005a023d
    POP EBX                             ; 005a023e
    RET                                 ; 005a023f

