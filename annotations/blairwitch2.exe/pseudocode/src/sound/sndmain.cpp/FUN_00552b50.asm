; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00552b50(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_004ed260 at 004ee15b
;   FUN_00553680 at 005537a4
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e907c
;   TerminatedCString s_enableHwSoundMixing_Can_005e9091
;   undefined4 DAT_0061bcb0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_00552b10
;
; *****************************************************************************

section .text

    CALL FUN_00552b10                   ; 00552b50
        ;   XREF to: 00552b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00552b10()
        ;   Label: FUN_00552b50
    TEST EAX,EAX                        ; 00552b55
    JNZ 0x00552b63                      ; 00552b57
        ;   XREF to: 00552b63 (CONDITIONAL_JUMP)  ; LAB_00552b63
    MOV EAX,dword ptr [ESP + 0x4]       ; 00552b59
    MOV [0x0061bcb0],EAX                ; 00552b5d | DAT_0061bcb0
    RET                                 ; 00552b62
    MOV EDX,0x5e907c                    ; 00552b63 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00552b63
    MOV ECX,0x1598                      ; 00552b68
    PUSH 0x5e9091                       ; 00552b6d | = "enableHwSoundMixing - Can't do this w..."
    MOV dword ptr [0x01d046a0],EDX      ; 00552b72 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00552b78 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00552b7e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00552b83
    MOV EAX,dword ptr [ESP + 0x4]       ; 00552b86
    MOV [0x0061bcb0],EAX                ; 00552b8a | DAT_0061bcb0
    RET                                 ; 00552b8f

