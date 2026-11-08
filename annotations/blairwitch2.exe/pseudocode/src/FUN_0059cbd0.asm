; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0059cbd0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe8dc
;
; Called Functions:
;   FUN_00449d90
;   FUN_0044fd00
;   FUN_0044fd70
;   FUN_005899d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059cbd0
        ;   Label: FUN_0059cbd0
    PUSH ESI                            ; 0059cbd1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059cbd2
    PUSH EDX                            ; 0059cbd6
    CALL FUN_005899d0                   ; 0059cbd7
        ;   XREF to: 005899d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005899d0()
    ADD ESP,0x4                         ; 0059cbdc
    PUSH 0x5ef7a2                       ; 0059cbdf
    MOV EBX,EAX                         ; 0059cbe4
    LEA ESI,[EAX + 0x2b4]               ; 0059cbe6
    PUSH ESI                            ; 0059cbec
    MOV dword ptr [EAX + 0x2b0],0x5fe8e4 ; 0059cbed
    CALL FUN_0044fd70                   ; 0059cbf7
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0059cbfc
    PUSH ESI                            ; 0059cbff
    CALL FUN_0044fd00                   ; 0059cc00
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    MOV dword ptr [EBX + 0x434],0x0     ; 0059cc05
    MOV dword ptr [EBX + 0x438],0x0     ; 0059cc0f
    MOV dword ptr [EBX + 0x43c],0xc     ; 0059cc19
    MOV dword ptr [EBX + 0x440],0x0     ; 0059cc23
    MOV dword ptr [EBX + 0x444],0x0     ; 0059cc2d
    MOV dword ptr [EBX + 0x448],0x0     ; 0059cc37
    MOV dword ptr [EBX + 0x6c4],0x0     ; 0059cc41
    MOV dword ptr [EBX + 0x6d0],0x1     ; 0059cc4b
    MOV dword ptr [EBX + 0xfc],0x1      ; 0059cc55
    MOV dword ptr [EBX + 0x6d4],0x0     ; 0059cc5f
    MOV dword ptr [EBX + 0x700],0x0     ; 0059cc69
    MOV dword ptr [EBX + 0x6f8],0x0     ; 0059cc73
    FLD float ptr [0x005fe8dc]          ; 0059cc7d | DAT_005fe8dc
    MOV dword ptr [EBX + 0x704],0x1cb3950 ; 0059cc83
    ADD ESP,0x4                         ; 0059cc8d
    MOV ECX,dword ptr [EBX + 0x704]     ; 0059cc90
    MOV dword ptr [EBX + 0x6fc],0x0     ; 0059cc96
    PUSH ECX                            ; 0059cca0
    FSTP float ptr [EBX + 0x6c0]        ; 0059cca1
    CALL FUN_00449d90                   ; 0059cca7
        ;   XREF to: 00449d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00449d90()
    ADD ESP,0x4                         ; 0059ccac
    MOV EAX,EBX                         ; 0059ccaf
    POP ESI                             ; 0059ccb1
    POP EBX                             ; 0059ccb2
    RET                                 ; 0059ccb3

