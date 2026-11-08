; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e2a20(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f95cc
;   undefined4 DAT_005f95d0
;
; Called Functions:
;   FUN_0044fd70
;   FUN_005899d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2a20
        ;   Label: FUN_004e2a20
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e2a21
    PUSH EDX                            ; 004e2a25
    CALL FUN_005899d0                   ; 004e2a26
        ;   XREF to: 005899d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005899d0()
    ADD ESP,0x4                         ; 004e2a2b
    PUSH 0x5dbffc                       ; 004e2a2e
    MOV EBX,EAX                         ; 004e2a33
    ADD EAX,0x2b4                       ; 004e2a35
    PUSH EAX                            ; 004e2a3a
    MOV dword ptr [EAX + -0x4],0x5f95f4 ; 004e2a3b
    CALL FUN_0044fd70                   ; 004e2a42
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV dword ptr [EBX + 0x6d8],0x0     ; 004e2a47
    MOV dword ptr [EBX + 0x6d4],0x0     ; 004e2a51
    MOV dword ptr [EBX + 0x434],0x0     ; 004e2a5b
    MOV dword ptr [EBX + 0x438],0x0     ; 004e2a65
    MOV dword ptr [EBX + 0x43c],0xb     ; 004e2a6f
    MOV dword ptr [EBX + 0x440],0x0     ; 004e2a79
    MOV dword ptr [EBX + 0x444],0x42000000 ; 004e2a83
    MOV dword ptr [EBX + 0x448],0x1     ; 004e2a8d
    MOV dword ptr [EBX + 0x6e8],0x1     ; 004e2a97
    FLD float ptr [0x005f95cc]          ; 004e2aa1 | DAT_005f95cc
    MOV dword ptr [EBX + 0x44c],0x0     ; 004e2aa7
    FLD float ptr [0x005f95d0]          ; 004e2ab1 | DAT_005f95d0
    MOV dword ptr [EBX + 0x6e4],0x0     ; 004e2ab7
    ADD ESP,0x8                         ; 004e2ac1
    MOV dword ptr [EBX + 0x6e0],0x3f800000 ; 004e2ac4
    MOV EAX,EBX                         ; 004e2ace
    FXCH                                ; 004e2ad0
    FSTP float ptr [EBX + 0x6c0]        ; 004e2ad2
    FSTP float ptr [EBX + 0x6dc]        ; 004e2ad8
    POP EBX                             ; 004e2ade
    RET                                 ; 004e2adf

