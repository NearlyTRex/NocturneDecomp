; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00552d60(int param_1,undefined4 *param_2)
;
;
; XREF[2]:
;   FUN_00552dc0 at 00552de3
;   FUN_00553680 at 00553714
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e90cf
;   TerminatedCString s_getRecordingDeviceInfo_i_005e90e4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_00552d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552d60
        ;   Label: FUN_00552d60
    PUSH ESI                            ; 00552d61
    PUSH EDI                            ; 00552d62
    MOV EBX,dword ptr [ESP + 0x10]      ; 00552d63
    CALL FUN_00552d00                   ; 00552d67
        ;   XREF to: 00552d00 (UNCONDITIONAL_CALL)  ; undefined FUN_00552d00()
    TEST EBX,EBX                        ; 00552d6c
    JL 0x00552d91                       ; 00552d6e
        ;   XREF to: 00552d91 (CONDITIONAL_JUMP)  ; LAB_00552d91
    CMP EBX,EAX                         ; 00552d70
    JGE 0x00552d91                      ; 00552d72
        ;   XREF to: 00552d91 (CONDITIONAL_JUMP)  ; LAB_00552d91
    MOV EAX,EBX                         ; 00552d74
        ;   Label: LAB_00552d74
    SHL EAX,0x5                         ; 00552d76
    ADD EAX,EBX                         ; 00552d79
    MOV ECX,0x42                        ; 00552d7b
    MOV EDI,dword ptr [ESP + 0x14]      ; 00552d80
    LEA ESI,[EAX*0x8 + 0x2649028]       ; 00552d84
    MOVSD.REP ES:EDI,ESI                ; 00552d8b
    POP EDI                             ; 00552d8d
    POP ESI                             ; 00552d8e
    POP EBX                             ; 00552d8f
    RET                                 ; 00552d90
    MOV EDX,0x5e90cf                    ; 00552d91 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00552d91
    MOV ECX,0x165e                      ; 00552d96
    PUSH 0x5e90e4                       ; 00552d9b | = "getRecordingDeviceInfo - invalid index"
    MOV dword ptr [0x01d046a0],EDX      ; 00552da0 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00552da6 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00552dac
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00552db1
    JMP 0x00552d74                      ; 00552db4
        ;   XREF to: 00552d74 (UNCONDITIONAL_JUMP)  ; LAB_00552d74

