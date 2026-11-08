; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055b0b0(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   FUN_0052ddf0 at 0052e022
;
; Referenced Globals:
;   TerminatedCString s_core_sound_cpp_005ea927
;   TerminatedCString s_CSound_setReverbPreset_i_005ea939
;   undefined4 DAT_0061c070
;   undefined4 DAT_0061c074
;   undefined4 DAT_0061c078
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_0055b080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055b0b0
        ;   Label: FUN_0055b0b0
    MOV EBX,dword ptr [ESP + 0xc]       ; 0055b0b1
    TEST EBX,EBX                        ; 0055b0b5
    JL 0x0055b0e4                       ; 0055b0b7
        ;   XREF to: 0055b0e4 (CONDITIONAL_JUMP)  ; LAB_0055b0e4
    CMP EBX,0x1b                        ; 0055b0b9
    JGE 0x0055b0e4                      ; 0055b0bc
        ;   XREF to: 0055b0e4 (CONDITIONAL_JUMP)  ; LAB_0055b0e4
    MOV EAX,EBX                         ; 0055b0be
        ;   Label: LAB_0055b0be
    SHL EAX,0x4                         ; 0055b0c0
    PUSH dword ptr [EAX + 0x61c078]     ; 0055b0c3 | DAT_0061c078
    PUSH dword ptr [EAX + 0x61c074]     ; 0055b0c9 | DAT_0061c074
    MOV EBX,dword ptr [ESP + 0x10]      ; 0055b0cf
    PUSH dword ptr [EAX + 0x61c070]     ; 0055b0d3 | DAT_0061c070
    PUSH EBX                            ; 0055b0d9
    CALL FUN_0055b080                   ; 0055b0da
        ;   XREF to: 0055b080 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b080()
    ADD ESP,0x10                        ; 0055b0df
    POP EBX                             ; 0055b0e2
    RET                                 ; 0055b0e3
    MOV EDX,0x5ea927                    ; 0055b0e4 | = "..\\core\\sound.cpp"
        ;   Label: LAB_0055b0e4
    MOV ECX,0x404                       ; 0055b0e9
    PUSH 0x5ea939                       ; 0055b0ee | = "CSound::setReverbPreset - invalid index"
    MOV dword ptr [0x01d046a0],EDX      ; 0055b0f3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0055b0f9 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0055b0ff
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0055b104
    JMP 0x0055b0be                      ; 0055b107
        ;   XREF to: 0055b0be (UNCONDITIONAL_JUMP)  ; LAB_0055b0be

