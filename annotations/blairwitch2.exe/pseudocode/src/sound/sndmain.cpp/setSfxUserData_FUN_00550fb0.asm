; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_setSfxUserData_FUN_00550fb0(uint param_1,int param_2,void *param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   sound_sndmain.cpp_FUN_0054d3a0
;   sound_sndmain.cpp_FUN_00551440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550fb0
        ;   Label: sound_sndmain.cpp_setSfxUserData_FUN_00550fb0
    PUSH ESI                            ; 00550fb1
    MOV EBX,dword ptr [ESP + 0x10]      ; 00550fb2
    TEST EBX,EBX                        ; 00550fb6
    JL 0x00550fbf                       ; 00550fb8
        ;   XREF to: 00550fbf (CONDITIONAL_JUMP)  ; LAB_00550fbf
    CMP EBX,0x2                         ; 00550fba
    JL 0x00550fe3                       ; 00550fbd
        ;   XREF to: 00550fe3 (CONDITIONAL_JUMP)  ; LAB_00550fe3
    PUSH EBX                            ; 00550fbf
        ;   Label: LAB_00550fbf
    MOV EDX,0x5e8d35                    ; 00550fc0
    MOV ECX,0x10cd                      ; 00550fc5
    PUSH 0x5e8d4a                       ; 00550fca
    MOV dword ptr [0x01d046a0],EDX      ; 00550fcf | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00550fd5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00550fdb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00550fe0
    PUSH 0x1                            ; 00550fe3
        ;   Label: LAB_00550fe3
    MOV ESI,dword ptr [ESP + 0x10]      ; 00550fe5
    PUSH ESI                            ; 00550fe9
    CALL sound_sndmain.cpp_FUN_0054d3a0 ; 00550fea
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_0054d3a0(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00550fef
    TEST EAX,EAX                        ; 00550ff2
    JNZ 0x00550ff9                      ; 00550ff4
        ;   XREF to: 00550ff9 (CONDITIONAL_JUMP)  ; LAB_00550ff9
    POP ESI                             ; 00550ff6
    POP EBX                             ; 00550ff7
    RET                                 ; 00550ff8
    SHL EBX,0x2                         ; 00550ff9
        ;   Label: LAB_00550ff9
    ADD EAX,EBX                         ; 00550ffc
    MOV EBX,dword ptr [ESP + 0x14]      ; 00550ffe
    MOV dword ptr [EAX + 0x44],EBX      ; 00551002
    CALL sound_sndmain.cpp_FUN_00551440 ; 00551005
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
    MOV EAX,0x1                         ; 0055100a
    POP ESI                             ; 0055100f
    POP EBX                             ; 00551010
    RET                                 ; 00551011

