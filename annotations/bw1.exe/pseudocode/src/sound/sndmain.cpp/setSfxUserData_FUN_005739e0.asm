; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_setSfxUserData_FUN_005739e0(uint param_1,int param_2,void *param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   sound_sndmain.cpp_FUN_0056fa10
;   sound_sndmain.cpp_FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005739e0
        ;   Label: sound_sndmain.cpp_setSfxUserData_FUN_005739e0
    PUSH ESI                            ; 005739e1
    MOV EBX,dword ptr [ESP + 0x10]      ; 005739e2
    TEST EBX,EBX                        ; 005739e6
    JL 0x005739ef                       ; 005739e8
        ;   XREF to: 005739ef (CONDITIONAL_JUMP)  ; LAB_005739ef
    CMP EBX,0x2                         ; 005739ea
    JL 0x00573a13                       ; 005739ed
        ;   XREF to: 00573a13 (CONDITIONAL_JUMP)  ; LAB_00573a13
    PUSH EBX                            ; 005739ef
        ;   Label: LAB_005739ef
    MOV EDX,0x5f3f2f                    ; 005739f0
    MOV ECX,0x10c4                      ; 005739f5
    PUSH 0x5f3f44                       ; 005739fa
    MOV dword ptr [0x01d1d400],EDX      ; 005739ff | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00573a05 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00573a0b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00573a10
    PUSH 0x1                            ; 00573a13
        ;   Label: LAB_00573a13
    MOV ESI,dword ptr [ESP + 0x10]      ; 00573a15
    PUSH ESI                            ; 00573a19
    CALL sound_sndmain.cpp_FUN_0056fa10 ; 00573a1a
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_0056fa10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00573a1f
    TEST EAX,EAX                        ; 00573a22
    JNZ 0x00573a29                      ; 00573a24
        ;   XREF to: 00573a29 (CONDITIONAL_JUMP)  ; LAB_00573a29
    POP ESI                             ; 00573a26
    POP EBX                             ; 00573a27
    RET                                 ; 00573a28
    SHL EBX,0x2                         ; 00573a29
        ;   Label: LAB_00573a29
    ADD EAX,EBX                         ; 00573a2c
    MOV EBX,dword ptr [ESP + 0x14]      ; 00573a2e
    MOV dword ptr [EAX + 0x44],EBX      ; 00573a32
    CALL sound_sndmain.cpp_FUN_00573e70 ; 00573a35
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
    MOV EAX,0x1                         ; 00573a3a
    POP ESI                             ; 00573a3f
    POP EBX                             ; 00573a40
    RET                                 ; 00573a41

