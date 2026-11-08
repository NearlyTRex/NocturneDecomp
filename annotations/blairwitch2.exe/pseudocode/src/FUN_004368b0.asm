; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004368b0(int param_1)
;
;
; XREF[2]:
;   FUN_00436680 at 004366cc
;   FUN_004b6170 at 004b6190
;
; Referenced Globals:
;   TerminatedCString s_console_txt_00609ed8
;
; Called Functions:
;   FUN_00461440
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004368b0
        ;   Label: FUN_004368b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004368b1
    PUSH 0xfa0                          ; 004368b5
    PUSH 0x0                            ; 004368ba
    LEA EAX,[EBX + 0x8]                 ; 004368bc
    PUSH EAX                            ; 004368bf
    CALL FUN_005b77c0                   ; 004368c0
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 004368c5
    MOV dword ptr [EBX + 0xfa8],0x0     ; 004368c8
    PUSH 0x609ed8                       ; 004368d2 | = "console.txt"
    MOV dword ptr [EBX + 0xfac],0x0     ; 004368d7
    CALL FUN_00461440                   ; 004368e1
        ;   XREF to: 00461440 (UNCONDITIONAL_CALL)  ; undefined FUN_00461440()
    ADD ESP,0x4                         ; 004368e6
    POP EBX                             ; 004368e9
    RET                                 ; 004368ea

