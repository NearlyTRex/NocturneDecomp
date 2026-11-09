; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_fire_cpp_FUN_0049b890(CVector3f *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_shell_kfm_005d573a
;   TerminatedCString s_sh_sh_c_15_005d5744
;   TerminatedCString s_s_44_sh_c_2_005d5752
;   undefined4 DAT_005d5762
;   undefined4 DAT_00614d30
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50
;   crt_string.c__stricmp_FUN_005b8130
;   sound_sndmain.cpp_FUN_00550b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b890
        ;   Label: core_fire.cpp_FUN_0049b890
    PUSH ESI                            ; 0049b891
    PUSH EDI                            ; 0049b892
    PUSH EBP                            ; 0049b893
    MOV EBP,ESP                         ; 0049b894
    SUB ESP,0x8                         ; 0049b896
    MOV EDI,dword ptr [EBP + 0x14]      ; 0049b899
    MOV EAX,0x4                         ; 0049b89c
    MOV EDX,dword ptr [EDI + 0x58]      ; 0049b8a1
    SUB EAX,EDX                         ; 0049b8a4
    MOV dword ptr [EBP + -0x4],EAX      ; 0049b8a6
    FILD dword ptr [EBP + -0x4]         ; 0049b8a9
    FMUL double ptr [0x005d5762]        ; 0049b8ac | DAT_005d5762
    FST float ptr [EBP + -0x8]          ; 0049b8b2
    FLDZ                                ; 0049b8b5
    FCOMPP                              ; 0049b8b7
    FNSTSW AX                           ; 0049b8b9
    SAHF                                ; 0049b8bb
    JBE 0x0049b8c3                      ; 0049b8bc
        ;   XREF to: 0049b8c3 (CONDITIONAL_JUMP)  ; LAB_0049b8c3
    XOR ECX,ECX                         ; 0049b8be
    MOV dword ptr [EBP + -0x8],ECX      ; 0049b8c0
    PUSH 0x40c90fdb                     ; 0049b8c3
        ;   Label: LAB_0049b8c3
    PUSH 0xc0c90fdb                     ; 0049b8c8
    CALL core_actor.cpp_FUN_0040cf60    ; 0049b8cd
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [EBP + -0x4],EAX      ; 0049b8d2
    ADD ESP,0x8                         ; 0049b8d5
    FLD float ptr [EBP + -0x4]          ; 0049b8d8
    FMUL float ptr [EBP + -0x8]         ; 0049b8db
    PUSH 0x40490fdb                     ; 0049b8de
    PUSH 0xc0490fdb                     ; 0049b8e3
    FSTP float ptr [EDI + 0x4c]         ; 0049b8e8
    CALL core_actor.cpp_FUN_0040cf60    ; 0049b8eb
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [EBP + -0x4],EAX      ; 0049b8f0
    FLD float ptr [EBP + -0x4]          ; 0049b8f3
    FMUL float ptr [EBP + -0x8]         ; 0049b8f6
    ADD ESP,0x8                         ; 0049b8f9
    MOV EBX,dword ptr [EDI + 0x58]      ; 0049b8fc
    FSTP float ptr [EDI + 0x50]         ; 0049b8ff
    TEST EBX,EBX                        ; 0049b902
    JNZ 0x0049b929                      ; 0049b904
        ;   XREF to: 0049b929 (CONDITIONAL_JUMP)  ; LAB_0049b929
    XOR ESI,ESI                         ; 0049b906
    MOV EAX,dword ptr [EBX + 0x1c3f8d0] ; 0049b908
        ;   Label: LAB_0049b908
    PUSH EAX                            ; 0049b90e
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0049b90f
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0049b914
    TEST EAX,EAX                        ; 0049b917
    JZ 0x0049b924                       ; 0049b919
        ;   XREF to: 0049b924 (CONDITIONAL_JUMP)  ; LAB_0049b924
    ADD EBX,0x4                         ; 0049b91b
    INC ESI                             ; 0049b91e
    CMP EBX,0xc                         ; 0049b91f
    JL 0x0049b908                       ; 0049b922
        ;   XREF to: 0049b908 (CONDITIONAL_JUMP)  ; LAB_0049b908
    CMP ESI,0x3                         ; 0049b924
        ;   Label: LAB_0049b924
    JNZ 0x0049b939                      ; 0049b927
        ;   XREF to: 0049b939 (CONDITIONAL_JUMP)  ; LAB_0049b939
    MOV EDX,dword ptr [EDI + 0x58]      ; 0049b929
        ;   Label: LAB_0049b929
    INC EDX                             ; 0049b92c
    XOR EAX,EAX                         ; 0049b92d
    MOV dword ptr [EDI + 0x58],EDX      ; 0049b92f
    MOV ESP,EBP                         ; 0049b932
    POP EBP                             ; 0049b934
    POP EDI                             ; 0049b935
    POP ESI                             ; 0049b936
    POP EBX                             ; 0049b937
    RET                                 ; 0049b938
    PUSH 0x5d573a                       ; 0049b939 | = "shell.kfm"
        ;   Label: LAB_0049b939
    MOV EAX,dword ptr [EDI + 0x5c]      ; 0049b93e
    PUSH EAX                            ; 0049b941
    SHL ESI,0x2                         ; 0049b942
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0049b945
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049b94a
    TEST EAX,EAX                        ; 0049b94d
    JNZ 0x0049b982                      ; 0049b94f
        ;   XREF to: 0049b982 (CONDITIONAL_JUMP)  ; LAB_0049b982
    PUSH EDI                            ; 0049b951
    PUSH 0x5d5744                       ; 0049b952 | = "sh-sh?c @ .15"
    MOV EBX,dword ptr [0x00614d30]      ; 0049b957 | DAT_00614d30
    PUSH EBX                            ; 0049b95d
    MOV EAX,[0x0061c068]                ; 0049b95e | DAT_0061c068
    PUSH EAX                            ; 0049b963
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 0049b964
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0049b969
    MOV dword ptr [ESI + 0x1c3f8d0],EAX ; 0049b96c
    MOV EDX,dword ptr [EDI + 0x58]      ; 0049b972
    INC EDX                             ; 0049b975
    XOR EAX,EAX                         ; 0049b976
    MOV dword ptr [EDI + 0x58],EDX      ; 0049b978
    MOV ESP,EBP                         ; 0049b97b
    POP EBP                             ; 0049b97d
    POP EDI                             ; 0049b97e
    POP ESI                             ; 0049b97f
    POP EBX                             ; 0049b980
    RET                                 ; 0049b981
    PUSH EDI                            ; 0049b982
        ;   Label: LAB_0049b982
    PUSH 0x5d5752                       ; 0049b983 | = "44-sh?c @ .2"
    MOV EDX,dword ptr [0x00614d30]      ; 0049b988 | DAT_00614d30
    PUSH EDX                            ; 0049b98e
    MOV ECX,dword ptr [0x0061c068]      ; 0049b98f | DAT_0061c068
    PUSH ECX                            ; 0049b995
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 0049b996
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0049b99b
    MOV dword ptr [ESI + 0x1c3f8d0],EAX ; 0049b99e
    MOV EDX,dword ptr [EDI + 0x58]      ; 0049b9a4
    INC EDX                             ; 0049b9a7
    XOR EAX,EAX                         ; 0049b9a8
    MOV dword ptr [EDI + 0x58],EDX      ; 0049b9aa
    MOV ESP,EBP                         ; 0049b9ad
    POP EBP                             ; 0049b9af
    POP EDI                             ; 0049b9b0
    POP ESI                             ; 0049b9b1
    POP EBX                             ; 0049b9b2
    RET                                 ; 0049b9b3

