; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fire_cpp_CShell_onCollision_FUN_00489850(CShell *this_ptr,CVector3f *collision_normal)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   collision_normal
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_shell_kfm_00581434
;   TerminatedCString s_sh_sh_c_15_0058143e
;   TerminatedCString s_s_44_sh_c_2_0058144c
;   double DOUBLE_0058145c = 0.25
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005bed68
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_sound.cpp_CSound_playActorSound_FUN_0052ea60
;   crt_string.c__stricmp_FUN_00564520
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489850
        ;   Label: core_fire.cpp_CShell_onCollision_FUN_00489850
    PUSH ESI                            ; 00489851
    PUSH EDI                            ; 00489852
    PUSH EBP                            ; 00489853
    MOV EBP,ESP                         ; 00489854
    SUB ESP,0x8                         ; 00489856
    MOV EDI,dword ptr [EBP + 0x14]      ; 00489859
    MOV EAX,0x4                         ; 0048985c
    MOV EDX,dword ptr [EDI + 0x50]      ; 00489861
    SUB EAX,EDX                         ; 00489864
    MOV dword ptr [EBP + -0x4],EAX      ; 00489866
    FILD dword ptr [EBP + -0x4]         ; 00489869
    FMUL double ptr [0x0058145c]        ; 0048986c | DOUBLE_0058145c
    FST float ptr [EBP + -0x8]          ; 00489872
    FLDZ                                ; 00489875
    FCOMPP                              ; 00489877
    FNSTSW AX                           ; 00489879
    SAHF                                ; 0048987b
    JBE 0x00489883                      ; 0048987c
        ;   XREF to: 00489883 (CONDITIONAL_JUMP)  ; LAB_00489883
    XOR ECX,ECX                         ; 0048987e
    MOV dword ptr [EBP + -0x8],ECX      ; 00489880
    PUSH 0x40c90fdb                     ; 00489883
        ;   Label: LAB_00489883
    PUSH 0xc0c90fdb                     ; 00489888
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0048988d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 00489892
    ADD ESP,0x8                         ; 00489895
    FLD float ptr [EBP + -0x4]          ; 00489898
    FMUL float ptr [EBP + -0x8]         ; 0048989b
    PUSH 0x40490fdb                     ; 0048989e
    PUSH 0xc0490fdb                     ; 004898a3
    FSTP float ptr [EDI + 0x44]         ; 004898a8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004898ab
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 004898b0
    FLD float ptr [EBP + -0x4]          ; 004898b3
    FMUL float ptr [EBP + -0x8]         ; 004898b6
    ADD ESP,0x8                         ; 004898b9
    MOV EBX,dword ptr [EDI + 0x50]      ; 004898bc
    FSTP float ptr [EDI + 0x48]         ; 004898bf
    TEST EBX,EBX                        ; 004898c2
    JNZ 0x004898e9                      ; 004898c4
        ;   XREF to: 004898e9 (CONDITIONAL_JUMP)  ; LAB_004898e9
    XOR ESI,ESI                         ; 004898c6
    MOV EAX,dword ptr [EBX + 0x1c0a130] ; 004898c8
        ;   Label: LAB_004898c8
    PUSH EAX                            ; 004898ce
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004898cf
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004898d4
    TEST EAX,EAX                        ; 004898d7
    JZ 0x004898e4                       ; 004898d9
        ;   XREF to: 004898e4 (CONDITIONAL_JUMP)  ; LAB_004898e4
    ADD EBX,0x4                         ; 004898db
    INC ESI                             ; 004898de
    CMP EBX,0xc                         ; 004898df
    JL 0x004898c8                       ; 004898e2
        ;   XREF to: 004898c8 (CONDITIONAL_JUMP)  ; LAB_004898c8
    CMP ESI,0x3                         ; 004898e4
        ;   Label: LAB_004898e4
    JNZ 0x004898f9                      ; 004898e7
        ;   XREF to: 004898f9 (CONDITIONAL_JUMP)  ; LAB_004898f9
    MOV EDX,dword ptr [EDI + 0x50]      ; 004898e9
        ;   Label: LAB_004898e9
    INC EDX                             ; 004898ec
    XOR EAX,EAX                         ; 004898ed
    MOV dword ptr [EDI + 0x50],EDX      ; 004898ef
    MOV ESP,EBP                         ; 004898f2
    POP EBP                             ; 004898f4
    POP EDI                             ; 004898f5
    POP ESI                             ; 004898f6
    POP EBX                             ; 004898f7
    RET                                 ; 004898f8
    PUSH 0x581434                       ; 004898f9 | = "shell.kfm"
        ;   Label: LAB_004898f9
    MOV EAX,dword ptr [EDI + 0x54]      ; 004898fe
    PUSH EAX                            ; 00489901
    SHL ESI,0x2                         ; 00489902
    CALL crt_string.c__stricmp_FUN_00564520 ; 00489905
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048990a
    TEST EAX,EAX                        ; 0048990d
    JNZ 0x00489942                      ; 0048990f
        ;   XREF to: 00489942 (CONDITIONAL_JUMP)  ; LAB_00489942
    PUSH EDI                            ; 00489911
    PUSH 0x58143e                       ; 00489912 | = "sh-sh?c @ .15"
    MOV EBX,dword ptr [0x005b80f0]      ; 00489917 | DAT_005b80f0
    PUSH EBX                            ; 0048991d
    MOV EAX,[0x005bed68]                ; 0048991e | DAT_005bed68
    PUSH EAX                            ; 00489923
    CALL core_sound.cpp_CSound_playActorSound_FUN_0052ea60 ; 00489924
        ;   XREF to: 0052ea60 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0052ea60(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00489929
    MOV dword ptr [ESI + 0x1c0a130],EAX ; 0048992c
    MOV EDX,dword ptr [EDI + 0x50]      ; 00489932
    INC EDX                             ; 00489935
    XOR EAX,EAX                         ; 00489936
    MOV dword ptr [EDI + 0x50],EDX      ; 00489938
    MOV ESP,EBP                         ; 0048993b
    POP EBP                             ; 0048993d
    POP EDI                             ; 0048993e
    POP ESI                             ; 0048993f
    POP EBX                             ; 00489940
    RET                                 ; 00489941
    PUSH EDI                            ; 00489942
        ;   Label: LAB_00489942
    PUSH 0x58144c                       ; 00489943 | = "44-sh?c @ .2"
    MOV EDX,dword ptr [0x005b80f0]      ; 00489948 | DAT_005b80f0
    PUSH EDX                            ; 0048994e
    MOV ECX,dword ptr [0x005bed68]      ; 0048994f | DAT_005bed68
    PUSH ECX                            ; 00489955
    CALL core_sound.cpp_CSound_playActorSound_FUN_0052ea60 ; 00489956
        ;   XREF to: 0052ea60 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0052ea60(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0048995b
    MOV dword ptr [ESI + 0x1c0a130],EAX ; 0048995e
    MOV EDX,dword ptr [EDI + 0x50]      ; 00489964
    INC EDX                             ; 00489967
    XOR EAX,EAX                         ; 00489968
    MOV dword ptr [EDI + 0x50],EDX      ; 0048996a
    MOV ESP,EBP                         ; 0048996d
    POP EBP                             ; 0048996f
    POP EDI                             ; 00489970
    POP ESI                             ; 00489971
    POP EBX                             ; 00489972
    RET                                 ; 00489973

