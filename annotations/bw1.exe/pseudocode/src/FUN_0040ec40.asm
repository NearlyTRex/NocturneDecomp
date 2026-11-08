; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040ec40(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_armour_wav_005d3310
;
; Called Functions:
;   FUN_00430d90
;   FUN_004a0f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ec40
        ;   Label: FUN_0040ec40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ec41
    MOV EDX,dword ptr [EBX + 0x27b0]    ; 0040ec45
    TEST EDX,EDX                        ; 0040ec4b
    JZ 0x0040ec51                       ; 0040ec4d
        ;   XREF to: 0040ec51 (CONDITIONAL_JUMP)  ; LAB_0040ec51
    POP EBX                             ; 0040ec4f
    RET                                 ; 0040ec50
    PUSH 0x1                            ; 0040ec51
        ;   Label: LAB_0040ec51
    PUSH 0xbf800000                     ; 0040ec53
    PUSH EDX                            ; 0040ec58
    PUSH EBX                            ; 0040ec59
    CALL FUN_00430d90                   ; 0040ec5a
        ;   XREF to: 00430d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00430d90()
    ADD ESP,0x10                        ; 0040ec5f
    PUSH 0x5d3310                       ; 0040ec62 | = "armour.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040ec67
    PUSH EBX                            ; 0040ec6d
    CALL dword ptr [EAX + 0x2c]         ; 0040ec6e
    ADD ESP,0x8                         ; 0040ec71
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040ec74
    PUSH ECX                            ; 0040ec78
    PUSH EBX                            ; 0040ec79
    CALL FUN_004a0f00                   ; 0040ec7a
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0f00()
    ADD ESP,0x8                         ; 0040ec7f
    POP EBX                             ; 0040ec82
    RET                                 ; 0040ec83

