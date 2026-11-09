; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004ed870(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d76cfc
;   undefined4 DAT_01d76d00
;   undefined4 DAT_01d7977c
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed870
        ;   Label: engine_mini3d.cpp_FUN_004ed870
    PUSH ESI                            ; 004ed871
    PUSH EDI                            ; 004ed872
    PUSH EBP                            ; 004ed873
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ed874
    MOV EDX,dword ptr [0x01d76d00]      ; 004ed878 | DAT_01d76d00
    INC EDX                             ; 004ed87e
    MOV dword ptr [0x01d76d00],EDX      ; 004ed87f | DAT_01d76d00
    CMP EDX,0x9                         ; 004ed885
    JG 0x004ed8de                       ; 004ed888
        ;   XREF to: 004ed8de (CONDITIONAL_JUMP)  ; LAB_004ed8de
    MOV EAX,[0x01d76d00]                ; 004ed88a | DAT_01d76d00
        ;   Label: LAB_004ed88a
    SHL EAX,0x2                         ; 004ed88f
    MOV EDX,EAX                         ; 004ed892
    SHL EAX,0x4                         ; 004ed894
    SUB EAX,EDX                         ; 004ed897
    MOV ECX,0xf                         ; 004ed899
    ADD EAX,0x1d76d04                   ; 004ed89e
    MOV EDX,dword ptr [0x01d76cfc]      ; 004ed8a3 | DAT_01d76cfc
    MOV EDI,EAX                         ; 004ed8a9
    MOV ESI,EDX                         ; 004ed8ab
    MOVSD.REP ES:EDI,ESI                ; 004ed8ad
    FLD float ptr [EDX + 0x24]          ; 004ed8af
    FSUB float ptr [EBX]                ; 004ed8b2
    MOV EBP,0x1                         ; 004ed8b4
    FSTP float ptr [EAX + 0x24]         ; 004ed8b9
    FLD float ptr [EDX + 0x28]          ; 004ed8bc
    FSUB float ptr [EBX + 0x4]          ; 004ed8bf
    MOV dword ptr [0x01d7977c],EBP      ; 004ed8c2 | DAT_01d7977c
    FSTP float ptr [EAX + 0x28]         ; 004ed8c8
    FLD float ptr [EDX + 0x2c]          ; 004ed8cb
    FSUB float ptr [EBX + 0x8]          ; 004ed8ce
    MOV [0x01d76cfc],EAX                ; 004ed8d1 | DAT_01d76cfc
    FSTP float ptr [EAX + 0x2c]         ; 004ed8d6
    POP EBP                             ; 004ed8d9
    POP EDI                             ; 004ed8da
    POP ESI                             ; 004ed8db
    POP EBX                             ; 004ed8dc
    RET                                 ; 004ed8dd
    MOV ESI,0x5c7f38                    ; 004ed8de
        ;   Label: LAB_004ed8de
    MOV EDI,0x4e3                       ; 004ed8e3
    PUSH 0x5c7f4d                       ; 004ed8e8
    MOV dword ptr [0x01d71de0],ESI      ; 004ed8ed | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004ed8f3 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ed8f9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ed8fe
    JMP 0x004ed88a                      ; 004ed901
        ;   XREF to: 004ed88a (UNCONDITIONAL_JUMP)  ; LAB_004ed88a

