; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fire_cpp_CShell_onCollision_FUN_004a0b90(CShell *this_ptr,CVector3f *collision_normal)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   collision_normal
;
; Referenced Globals:
;   TerminatedCString s_shell_kfm_005c0949
;   TerminatedCString s_sh_sh_c_15_005c0953
;   TerminatedCString s_s_44_sh_c_2_005c0961
;   undefined4 DAT_005c0970
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_006045f8
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_sound.cpp_CSound_playActorSound_FUN_005609d0
;   crt_string.c__stricmp_FUN_005a3260
;   sound_sndmain.cpp_FUN_00556700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0b90
        ;   Label: core_fire.cpp_CShell_onCollision_FUN_004a0b90
    PUSH ESI                            ; 004a0b91
    PUSH EDI                            ; 004a0b92
    PUSH EBP                            ; 004a0b93
    MOV EBP,ESP                         ; 004a0b94
    SUB ESP,0x8                         ; 004a0b96
    MOV EDI,dword ptr [EBP + 0x14]      ; 004a0b99
    MOV EAX,0x4                         ; 004a0b9c
    MOV EDX,dword ptr [EDI + 0x58]      ; 004a0ba1
    SUB EAX,EDX                         ; 004a0ba4
    MOV dword ptr [EBP + -0x4],EAX      ; 004a0ba6
    FILD dword ptr [EBP + -0x4]         ; 004a0ba9
    FMUL double ptr [0x005c0970]        ; 004a0bac | DAT_005c0970
    FST float ptr [EBP + -0x8]          ; 004a0bb2
    FLDZ                                ; 004a0bb5
    FCOMPP                              ; 004a0bb7
    FNSTSW AX                           ; 004a0bb9
    SAHF                                ; 004a0bbb
    JBE 0x004a0bc3                      ; 004a0bbc
        ;   XREF to: 004a0bc3 (CONDITIONAL_JUMP)  ; LAB_004a0bc3
    XOR ECX,ECX                         ; 004a0bbe
    MOV dword ptr [EBP + -0x8],ECX      ; 004a0bc0
    PUSH 0x40c90fdb                     ; 004a0bc3
        ;   Label: LAB_004a0bc3
    PUSH 0xc0c90fdb                     ; 004a0bc8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004a0bcd
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 004a0bd2
    ADD ESP,0x8                         ; 004a0bd5
    FLD float ptr [EBP + -0x4]          ; 004a0bd8
    FMUL float ptr [EBP + -0x8]         ; 004a0bdb
    PUSH 0x40490fdb                     ; 004a0bde
    PUSH 0xc0490fdb                     ; 004a0be3
    FSTP float ptr [EDI + 0x4c]         ; 004a0be8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004a0beb
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 004a0bf0
    FLD float ptr [EBP + -0x4]          ; 004a0bf3
    FMUL float ptr [EBP + -0x8]         ; 004a0bf6
    ADD ESP,0x8                         ; 004a0bf9
    MOV EBX,dword ptr [EDI + 0x58]      ; 004a0bfc
    FSTP float ptr [EDI + 0x50]         ; 004a0bff
    TEST EBX,EBX                        ; 004a0c02
    JNZ 0x004a0c29                      ; 004a0c04
        ;   XREF to: 004a0c29 (CONDITIONAL_JUMP)  ; LAB_004a0c29
    XOR ESI,ESI                         ; 004a0c06
    MOV EAX,dword ptr [EBX + 0x1c74e90] ; 004a0c08
        ;   Label: LAB_004a0c08
    PUSH EAX                            ; 004a0c0e
    CALL sound_sndmain.cpp_FUN_00556700 ; 004a0c0f
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004a0c14
    TEST EAX,EAX                        ; 004a0c17
    JZ 0x004a0c24                       ; 004a0c19
        ;   XREF to: 004a0c24 (CONDITIONAL_JUMP)  ; LAB_004a0c24
    ADD EBX,0x4                         ; 004a0c1b
    INC ESI                             ; 004a0c1e
    CMP EBX,0xc                         ; 004a0c1f
    JL 0x004a0c08                       ; 004a0c22
        ;   XREF to: 004a0c08 (CONDITIONAL_JUMP)  ; LAB_004a0c08
    CMP ESI,0x3                         ; 004a0c24
        ;   Label: LAB_004a0c24
    JNZ 0x004a0c39                      ; 004a0c27
        ;   XREF to: 004a0c39 (CONDITIONAL_JUMP)  ; LAB_004a0c39
    MOV EDX,dword ptr [EDI + 0x58]      ; 004a0c29
        ;   Label: LAB_004a0c29
    INC EDX                             ; 004a0c2c
    XOR EAX,EAX                         ; 004a0c2d
    MOV dword ptr [EDI + 0x58],EDX      ; 004a0c2f
    MOV ESP,EBP                         ; 004a0c32
    POP EBP                             ; 004a0c34
    POP EDI                             ; 004a0c35
    POP ESI                             ; 004a0c36
    POP EBX                             ; 004a0c37
    RET                                 ; 004a0c38
    PUSH 0x5c0949                       ; 004a0c39 | = "shell.kfm"
        ;   Label: LAB_004a0c39
    MOV EAX,dword ptr [EDI + 0x5c]      ; 004a0c3e
    PUSH EAX                            ; 004a0c41
    SHL ESI,0x2                         ; 004a0c42
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004a0c45
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a0c4a
    TEST EAX,EAX                        ; 004a0c4d
    JNZ 0x004a0c82                      ; 004a0c4f
        ;   XREF to: 004a0c82 (CONDITIONAL_JUMP)  ; LAB_004a0c82
    PUSH EDI                            ; 004a0c51
    PUSH 0x5c0953                       ; 004a0c52 | = "sh-sh?c @ .15"
    MOV EBX,dword ptr [0x005fc5a0]      ; 004a0c57 | DAT_005fc5a0
    PUSH EBX                            ; 004a0c5d
    MOV EAX,[0x006045f8]                ; 004a0c5e | DAT_006045f8
    PUSH EAX                            ; 004a0c63
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004a0c64
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004a0c69
    MOV dword ptr [ESI + 0x1c74e90],EAX ; 004a0c6c
    MOV EDX,dword ptr [EDI + 0x58]      ; 004a0c72
    INC EDX                             ; 004a0c75
    XOR EAX,EAX                         ; 004a0c76
    MOV dword ptr [EDI + 0x58],EDX      ; 004a0c78
    MOV ESP,EBP                         ; 004a0c7b
    POP EBP                             ; 004a0c7d
    POP EDI                             ; 004a0c7e
    POP ESI                             ; 004a0c7f
    POP EBX                             ; 004a0c80
    RET                                 ; 004a0c81
    PUSH EDI                            ; 004a0c82
        ;   Label: LAB_004a0c82
    PUSH 0x5c0961                       ; 004a0c83 | = "44-sh?c @ .2"
    MOV EDX,dword ptr [0x005fc5a0]      ; 004a0c88 | DAT_005fc5a0
    PUSH EDX                            ; 004a0c8e
    MOV ECX,dword ptr [0x006045f8]      ; 004a0c8f | DAT_006045f8
    PUSH ECX                            ; 004a0c95
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004a0c96
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004a0c9b
    MOV dword ptr [ESI + 0x1c74e90],EAX ; 004a0c9e
    MOV EDX,dword ptr [EDI + 0x58]      ; 004a0ca4
    INC EDX                             ; 004a0ca7
    XOR EAX,EAX                         ; 004a0ca8
    MOV dword ptr [EDI + 0x58],EDX      ; 004a0caa
    MOV ESP,EBP                         ; 004a0cad
    POP EBP                             ; 004a0caf
    POP EDI                             ; 004a0cb0
    POP ESI                             ; 004a0cb1
    POP EBX                             ; 004a0cb2
    RET                                 ; 004a0cb3

