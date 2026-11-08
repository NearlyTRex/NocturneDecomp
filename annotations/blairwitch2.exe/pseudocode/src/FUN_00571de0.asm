; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00571de0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Hand_005ec418
;   TerminatedCString s_Bip01_R_Hand_005ec425
;
; Called Functions:
;   FUN_00510510
;   FUN_00540e80
;   FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571de0
        ;   Label: FUN_00571de0
    PUSH ESI                            ; 00571de1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00571de2
    PUSH EBX                            ; 00571de6
    CALL FUN_00510510                   ; 00571de7
        ;   XREF to: 00510510 (UNCONDITIONAL_CALL)  ; undefined FUN_00510510()
    ADD ESP,0x4                         ; 00571dec
    LEA EAX,[EBX + 0x2b4]               ; 00571def
    PUSH EAX                            ; 00571df5
    CALL FUN_00547890                   ; 00571df6
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 00571dfb
    PUSH 0x1                            ; 00571dfe
    PUSH 0x5ec418                       ; 00571e00 | = "Bip01 L Hand"
    PUSH EAX                            ; 00571e05
    MOV ESI,EAX                         ; 00571e06
    CALL FUN_00540e80                   ; 00571e08
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 00571e0d
    PUSH 0x1                            ; 00571e10
    PUSH 0x5ec425                       ; 00571e12 | = "Bip01 R Hand"
    PUSH ESI                            ; 00571e17
    MOV dword ptr [EBX + 0x24348],EAX   ; 00571e18
    CALL FUN_00540e80                   ; 00571e1e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    MOV dword ptr [EBX + 0x261c],0x0    ; 00571e23
    MOV dword ptr [EBX + 0x2694],0x0    ; 00571e2d
    MOV dword ptr [EBX + 0x2434c],EAX   ; 00571e37
    MOV EAX,dword ptr [EBX + 0x24348]   ; 00571e3d
    MOV dword ptr [EBX + 0x2618],EAX    ; 00571e43
    MOV EAX,dword ptr [EBX + 0x2434c]   ; 00571e49
    ADD ESP,0xc                         ; 00571e4f
    MOV dword ptr [EBX + 0x2690],EAX    ; 00571e52
    POP ESI                             ; 00571e58
    POP EBX                             ; 00571e59
    RET                                 ; 00571e5a

