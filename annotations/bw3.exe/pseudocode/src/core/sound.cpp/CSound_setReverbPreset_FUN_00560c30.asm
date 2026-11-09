; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_00560c30(CSound *this_ptr,int index)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 00534ac2
;
; Referenced Globals:
;   TerminatedCString s_core_sound_cpp_005d537b
;   TerminatedCString s_CSound_setReverbPreset_i_005d538d
;   undefined4 DAT_00604600
;   undefined4 DAT_00604604
;   undefined4 DAT_00604608
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_sound.cpp_CSound_set3DListenerOrientRight_FUN_00560c00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560c30
        ;   Label: core_sound.cpp_CSound_setReverbPreset_FUN_00560c30
    MOV EBX,dword ptr [ESP + 0xc]       ; 00560c31
    TEST EBX,EBX                        ; 00560c35
    JL 0x00560c64                       ; 00560c37
        ;   XREF to: 00560c64 (CONDITIONAL_JUMP)  ; LAB_00560c64
    CMP EBX,0x1b                        ; 00560c39
    JGE 0x00560c64                      ; 00560c3c
        ;   XREF to: 00560c64 (CONDITIONAL_JUMP)  ; LAB_00560c64
    MOV EAX,EBX                         ; 00560c3e
        ;   Label: LAB_00560c3e
    SHL EAX,0x4                         ; 00560c40
    PUSH dword ptr [EAX + 0x604608]     ; 00560c43 | DAT_00604608
    PUSH dword ptr [EAX + 0x604604]     ; 00560c49 | DAT_00604604
    MOV EBX,dword ptr [ESP + 0x10]      ; 00560c4f
    PUSH dword ptr [EAX + 0x604600]     ; 00560c53 | DAT_00604600
    PUSH EBX                            ; 00560c59
    CALL core_sound.cpp_CSound_set3DListenerOrientRight_FUN_00560c00 ; 00560c5a
        ;   XREF to: 00560c00 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_set3DListenerOrientRight_FUN_00560c00(CSound * this_ptr, float listener_orient_x, float listener_orient_y, float listener_orient_z)
    ADD ESP,0x10                        ; 00560c5f
    POP EBX                             ; 00560c62
    RET                                 ; 00560c63
    MOV EDX,0x5d537b                    ; 00560c64 | = "..\\core\\sound.cpp"
        ;   Label: LAB_00560c64
    MOV ECX,0x3fd                       ; 00560c69
    PUSH 0x5d538d                       ; 00560c6e | = "CSound::setReverbPreset - invalid index"
    MOV dword ptr [0x01d71de0],EDX      ; 00560c73 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00560c79 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00560c7f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00560c84
    JMP 0x00560c3e                      ; 00560c87
        ;   XREF to: 00560c3e (UNCONDITIONAL_JUMP)  ; LAB_00560c3e

