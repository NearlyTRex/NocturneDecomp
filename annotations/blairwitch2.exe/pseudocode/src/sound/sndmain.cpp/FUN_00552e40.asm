; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00552e40(int param_1)
;
;
; XREF[2]:
;   FUN_005523d0 at 00552458
;   FUN_00553680 at 00553772
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e910b
;   TerminatedCString s_selectRecordingDevice_de_005e9120
;   undefined4 DAT_0061bccc
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_00552d00
;   FUN_00552dc0
;   FUN_00552f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552e40
        ;   Label: FUN_00552e40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00552e41
    CALL FUN_00552f50                   ; 00552e45
        ;   XREF to: 00552f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00552f50()
    TEST EAX,EAX                        ; 00552e4a
    JNZ 0x00552e70                      ; 00552e4c
        ;   XREF to: 00552e70 (CONDITIONAL_JUMP)  ; LAB_00552e70
    TEST EBX,EBX                        ; 00552e4e
        ;   Label: LAB_00552e4e
    JGE 0x00552e58                      ; 00552e50
        ;   XREF to: 00552e58 (CONDITIONAL_JUMP)  ; LAB_00552e58
    MOV EBX,dword ptr [0x0061bccc]      ; 00552e52 | DAT_0061bccc
    CALL FUN_00552d00                   ; 00552e58
        ;   XREF to: 00552d00 (UNCONDITIONAL_CALL)  ; undefined FUN_00552d00()
        ;   Label: LAB_00552e58
    CMP EBX,EAX                         ; 00552e5d
    JL 0x00552e95                       ; 00552e5f
        ;   XREF to: 00552e95 (CONDITIONAL_JUMP)  ; LAB_00552e95
    CALL FUN_00552dc0                   ; 00552e61
        ;   XREF to: 00552dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00552dc0()
        ;   Label: LAB_00552e61
    MOV EBX,EAX                         ; 00552e66
    MOV dword ptr [0x0061bccc],EBX      ; 00552e68 | DAT_0061bccc
    POP EBX                             ; 00552e6e
    RET                                 ; 00552e6f
    MOV EDX,0x5e910b                    ; 00552e70 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00552e70
    MOV ECX,0x168a                      ; 00552e75
    PUSH 0x5e9120                       ; 00552e7a | = "selectRecordingDevice - device alread..."
    MOV dword ptr [0x01d046a0],EDX      ; 00552e7f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00552e85 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00552e8b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00552e90
    JMP 0x00552e4e                      ; 00552e93
        ;   XREF to: 00552e4e (UNCONDITIONAL_JUMP)  ; LAB_00552e4e
    TEST EBX,EBX                        ; 00552e95
        ;   Label: LAB_00552e95
    JL 0x00552e61                       ; 00552e97
        ;   XREF to: 00552e61 (CONDITIONAL_JUMP)  ; LAB_00552e61
    MOV dword ptr [0x0061bccc],EBX      ; 00552e99 | DAT_0061bccc
    POP EBX                             ; 00552e9f
    RET                                 ; 00552ea0

