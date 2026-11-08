; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056f090(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_stand_005ebf72
;
; Called Functions:
;   FUN_004d02e0
;   FUN_00503620
;   FUN_00503950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f090
        ;   Label: FUN_0056f090
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056f091
    PUSH EBX                            ; 0056f095
    ADD EBX,0x2b4                       ; 0056f096
    CALL FUN_004d02e0                   ; 0056f09c
        ;   XREF to: 004d02e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d02e0()
    MOV dword ptr [EBX + 0x253e0],0x0   ; 0056f0a1
    ADD ESP,0x4                         ; 0056f0ab
    MOV dword ptr [EBX + 0x253e4],0x0   ; 0056f0ae
    PUSH 0x0                            ; 0056f0b8
    MOV dword ptr [EBX + 0x253f0],0x0   ; 0056f0ba
    PUSH 0x5ebf72                       ; 0056f0c4 | = "stand"
    MOV dword ptr [EBX + 0x2a50],0x0    ; 0056f0c9
    PUSH EBX                            ; 0056f0d3
    MOV dword ptr [EBX + 0x2a54],0x0    ; 0056f0d4
    CALL FUN_00503950                   ; 0056f0de
        ;   XREF to: 00503950 (UNCONDITIONAL_CALL)  ; undefined FUN_00503950()
    ADD ESP,0xc                         ; 0056f0e3
    PUSH 0x1                            ; 0056f0e6
    PUSH 0x0                            ; 0056f0e8
    PUSH EBX                            ; 0056f0ea
    CALL FUN_00503620                   ; 0056f0eb
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0056f0f0
    POP EBX                             ; 0056f0f3
    RET                                 ; 0056f0f4

