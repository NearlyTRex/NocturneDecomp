; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052ece0(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005088f0 at 00508d2d
;
; Referenced Globals:
;   string s_..\\core\\sound.cpp_00594c03
;   string s_CSound::setReverbPreset_-_invali_00594c15
;   undefined4 DAT_005bed70
;   undefined4 DAT_005bed74
;   undefined4 DAT_005bed78
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   FUN_0052ecb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ece0
        ;   Label: FUN_0052ece0
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052ece1
    TEST EBX,EBX                        ; 0052ece5
    JL 0x0052ed14                       ; 0052ece7
        ;   XREF to: 0052ed14 (CONDITIONAL_JUMP)  ; LAB_0052ed14
    CMP EBX,0x1b                        ; 0052ece9
    JGE 0x0052ed14                      ; 0052ecec
        ;   XREF to: 0052ed14 (CONDITIONAL_JUMP)  ; LAB_0052ed14
    MOV EAX,EBX                         ; 0052ecee
        ;   Label: LAB_0052ecee
    SHL EAX,0x4                         ; 0052ecf0
    PUSH dword ptr [EAX + 0x5bed78]     ; 0052ecf3 | DAT_005bed78
    PUSH dword ptr [EAX + 0x5bed74]     ; 0052ecf9 | DAT_005bed74
    MOV EBX,dword ptr [ESP + 0x10]      ; 0052ecff
    PUSH dword ptr [EAX + 0x5bed70]     ; 0052ed03 | DAT_005bed70
    PUSH EBX                            ; 0052ed09
    CALL FUN_0052ecb0                   ; 0052ed0a
        ;   XREF to: 0052ecb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ecb0()
    ADD ESP,0x10                        ; 0052ed0f
    POP EBX                             ; 0052ed12
    RET                                 ; 0052ed13
    MOV EDX,0x594c03                    ; 0052ed14 | = "..\\core\\sound.cpp"
        ;   Label: LAB_0052ed14
    MOV ECX,0x402                       ; 0052ed19
    PUSH 0x594c15                       ; 0052ed1e | = "CSound::setReverbPreset - invalid index"
    MOV dword ptr [0x01cc4800],EDX      ; 0052ed23 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0052ed29 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0052ed2f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0052ed34
    JMP 0x0052ecee                      ; 0052ed37
        ;   XREF to: 0052ecee (UNCONDITIONAL_JUMP)  ; LAB_0052ecee

