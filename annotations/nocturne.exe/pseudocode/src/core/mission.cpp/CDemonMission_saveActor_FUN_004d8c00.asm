; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_004d8c00(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5)
;
;
; XREF[1]:
;   core_actor.cpp_archiveActor_FUN_0040c980 at 0040c9f2
;
; Referenced Globals:
;   TerminatedCString s_s_08x_00589c47
;   TerminatedCString s_s_00589c4c
;   string s_//_%s_00589c51
;   TerminatedCString s_anon_00589c5a
;   string s_(none)_005bb0d0
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8c00
        ;   Label: core_mission.cpp_CDemonMission_saveActor_FUN_004d8c00
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d8c01
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d8c05
    CMP EDX,0xff000000                  ; 004d8c09
    JNC 0x004d8c44                      ; 004d8c0f
        ;   XREF to: 004d8c44 (CONDITIONAL_JUMP)  ; LAB_004d8c44
    MOV EAX,0x5bb0d0                    ; 004d8c11 | = "(none)"
    TEST EDX,EDX                        ; 004d8c16
    JZ 0x004d8c1c                       ; 004d8c18
        ;   XREF to: 004d8c1c (CONDITIONAL_JUMP)  ; LAB_004d8c1c
    MOV EAX,EDX                         ; 004d8c1a
    PUSH EAX                            ; 004d8c1c | = "(none)"
        ;   Label: LAB_004d8c1c
    PUSH 0x589c4c                       ; 004d8c1d | = "\"%s\""
    PUSH EBX                            ; 004d8c22
        ;   Label: LAB_004d8c22
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d8c23
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004d8c28
    MOV EDX,dword ptr [ESP + 0x18]      ; 004d8c2b
    TEST EDX,EDX                        ; 004d8c2f
    JZ 0x004d8c4c                       ; 004d8c31
        ;   XREF to: 004d8c4c (CONDITIONAL_JUMP)  ; LAB_004d8c4c
    PUSH EDX                            ; 004d8c33
    PUSH 0x589c51                       ; 004d8c34 | = "\t\t// %s\n"
    PUSH EBX                            ; 004d8c39
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d8c3a
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004d8c3f
    POP EBX                             ; 004d8c42
    RET                                 ; 004d8c43
    PUSH EDX                            ; 004d8c44
        ;   Label: LAB_004d8c44
    PUSH 0x589c47                       ; 004d8c45 | = "%08x"
    JMP 0x004d8c22                      ; 004d8c4a
        ;   XREF to: 004d8c22 (UNCONDITIONAL_JUMP)  ; LAB_004d8c22
    PUSH 0x589c5a                       ; 004d8c4c | = "\n"
        ;   Label: LAB_004d8c4c
    PUSH EBX                            ; 004d8c51
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004d8c52
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004d8c57
    POP EBX                             ; 004d8c5a
    RET                                 ; 004d8c5b

