; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_setSfxUserData_FUN_00556b40(uint param_1,int param_2,void *param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   sound_sndmain.cpp_FUN_00552f10
;   sound_sndmain.cpp_FUN_00556fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556b40
        ;   Label: sound_sndmain.cpp_setSfxUserData_FUN_00556b40
    PUSH ESI                            ; 00556b41
    MOV EBX,dword ptr [ESP + 0x10]      ; 00556b42
    TEST EBX,EBX                        ; 00556b46
    JL 0x00556b4f                       ; 00556b48
        ;   XREF to: 00556b4f (CONDITIONAL_JUMP)  ; LAB_00556b4f
    CMP EBX,0x2                         ; 00556b4a
    JL 0x00556b73                       ; 00556b4d
        ;   XREF to: 00556b73 (CONDITIONAL_JUMP)  ; LAB_00556b73
    PUSH EBX                            ; 00556b4f
        ;   Label: LAB_00556b4f
    MOV EDX,0x5d3819                    ; 00556b50
    MOV ECX,0x10d5                      ; 00556b55
    PUSH 0x5d382e                       ; 00556b5a
    MOV dword ptr [0x01d71de0],EDX      ; 00556b5f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00556b65 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00556b6b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00556b70
    PUSH 0x1                            ; 00556b73
        ;   Label: LAB_00556b73
    MOV ESI,dword ptr [ESP + 0x10]      ; 00556b75
    PUSH ESI                            ; 00556b79
    CALL sound_sndmain.cpp_FUN_00552f10 ; 00556b7a
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_00552f10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00556b7f
    TEST EAX,EAX                        ; 00556b82
    JNZ 0x00556b89                      ; 00556b84
        ;   XREF to: 00556b89 (CONDITIONAL_JUMP)  ; LAB_00556b89
    POP ESI                             ; 00556b86
    POP EBX                             ; 00556b87
    RET                                 ; 00556b88
    SHL EBX,0x2                         ; 00556b89
        ;   Label: LAB_00556b89
    ADD EAX,EBX                         ; 00556b8c
    MOV EBX,dword ptr [ESP + 0x14]      ; 00556b8e
    MOV dword ptr [EAX + 0x44],EBX      ; 00556b92
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 00556b95
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
    MOV EAX,0x1                         ; 00556b9a
    POP ESI                             ; 00556b9f
    POP EBX                             ; 00556ba0
    RET                                 ; 00556ba1

