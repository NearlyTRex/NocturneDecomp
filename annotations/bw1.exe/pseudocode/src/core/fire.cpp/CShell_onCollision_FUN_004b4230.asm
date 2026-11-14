; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fire_cpp_CShell_onCollision_FUN_004b4230(CShell *this_ptr,CVector3f *collision_normal)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   collision_normal
;
; Referenced Globals:
;   TerminatedCString s_shell_kfm_005df57c
;   TerminatedCString s_sh_sh_c_15_005df586
;   TerminatedCString s_s_44_sh_c_2_005df594
;   undefined4 DAT_005df5a4
;   undefined4 DAT_0061c010
;   undefined4 DAT_006236b8
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_sound.cpp_CSound_playActorSound_FUN_0057d8a0
;   crt_string.c__stricmp_FUN_005c04e0
;   sound_sndmain.cpp_isSfxPlaying_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4230
        ;   Label: core_fire.cpp_CShell_onCollision_FUN_004b4230
    PUSH ESI                            ; 004b4231
    PUSH EDI                            ; 004b4232
    PUSH EBP                            ; 004b4233
    MOV EBP,ESP                         ; 004b4234
    SUB ESP,0x8                         ; 004b4236
    MOV EDI,dword ptr [EBP + 0x14]      ; 004b4239
    MOV EAX,0x4                         ; 004b423c
    MOV EDX,dword ptr [EDI + 0x58]      ; 004b4241
    SUB EAX,EDX                         ; 004b4244
    MOV dword ptr [EBP + -0x4],EAX      ; 004b4246
    FILD dword ptr [EBP + -0x4]         ; 004b4249
    FMUL double ptr [0x005df5a4]        ; 004b424c | DAT_005df5a4
    FST float ptr [EBP + -0x8]          ; 004b4252
    FLDZ                                ; 004b4255
    FCOMPP                              ; 004b4257
    FNSTSW AX                           ; 004b4259
    SAHF                                ; 004b425b
    JBE 0x004b4263                      ; 004b425c
        ;   XREF to: 004b4263 (CONDITIONAL_JUMP)  ; LAB_004b4263
    XOR ECX,ECX                         ; 004b425e
    MOV dword ptr [EBP + -0x8],ECX      ; 004b4260
    PUSH 0x40c90fdb                     ; 004b4263
        ;   Label: LAB_004b4263
    PUSH 0xc0c90fdb                     ; 004b4268
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004b426d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 004b4272
    ADD ESP,0x8                         ; 004b4275
    FLD float ptr [EBP + -0x4]          ; 004b4278
    FMUL float ptr [EBP + -0x8]         ; 004b427b
    PUSH 0x40490fdb                     ; 004b427e
    PUSH 0xc0490fdb                     ; 004b4283
    FSTP float ptr [EDI + 0x4c]         ; 004b4288
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004b428b
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 004b4290
    FLD float ptr [EBP + -0x4]          ; 004b4293
    FMUL float ptr [EBP + -0x8]         ; 004b4296
    ADD ESP,0x8                         ; 004b4299
    MOV EBX,dword ptr [EDI + 0x58]      ; 004b429c
    FSTP float ptr [EDI + 0x50]         ; 004b429f
    TEST EBX,EBX                        ; 004b42a2
    JNZ 0x004b42c9                      ; 004b42a4
        ;   XREF to: 004b42c9 (CONDITIONAL_JUMP)  ; LAB_004b42c9
    XOR ESI,ESI                         ; 004b42a6
    MOV EAX,dword ptr [EBX + 0x1c58a90] ; 004b42a8
        ;   Label: LAB_004b42a8
    PUSH EAX                            ; 004b42ae
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 004b42af
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004b42b4
    TEST EAX,EAX                        ; 004b42b7
    JZ 0x004b42c4                       ; 004b42b9
        ;   XREF to: 004b42c4 (CONDITIONAL_JUMP)  ; LAB_004b42c4
    ADD EBX,0x4                         ; 004b42bb
    INC ESI                             ; 004b42be
    CMP EBX,0xc                         ; 004b42bf
    JL 0x004b42a8                       ; 004b42c2
        ;   XREF to: 004b42a8 (CONDITIONAL_JUMP)  ; LAB_004b42a8
    CMP ESI,0x3                         ; 004b42c4
        ;   Label: LAB_004b42c4
    JNZ 0x004b42d9                      ; 004b42c7
        ;   XREF to: 004b42d9 (CONDITIONAL_JUMP)  ; LAB_004b42d9
    MOV EDX,dword ptr [EDI + 0x58]      ; 004b42c9
        ;   Label: LAB_004b42c9
    INC EDX                             ; 004b42cc
    XOR EAX,EAX                         ; 004b42cd
    MOV dword ptr [EDI + 0x58],EDX      ; 004b42cf
    MOV ESP,EBP                         ; 004b42d2
    POP EBP                             ; 004b42d4
    POP EDI                             ; 004b42d5
    POP ESI                             ; 004b42d6
    POP EBX                             ; 004b42d7
    RET                                 ; 004b42d8
    PUSH 0x5df57c                       ; 004b42d9 | = "shell.kfm"
        ;   Label: LAB_004b42d9
    MOV EAX,dword ptr [EDI + 0x5c]      ; 004b42de
    PUSH EAX                            ; 004b42e1
    SHL ESI,0x2                         ; 004b42e2
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004b42e5
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b42ea
    TEST EAX,EAX                        ; 004b42ed
    JNZ 0x004b4322                      ; 004b42ef
        ;   XREF to: 004b4322 (CONDITIONAL_JUMP)  ; LAB_004b4322
    PUSH EDI                            ; 004b42f1
    PUSH 0x5df586                       ; 004b42f2 | = "sh-sh?c @ .15"
    MOV EBX,dword ptr [0x0061c010]      ; 004b42f7 | DAT_0061c010
    PUSH EBX                            ; 004b42fd
    MOV EAX,[0x006236b8]                ; 004b42fe | DAT_006236b8
    PUSH EAX                            ; 004b4303
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 004b4304
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004b4309
    MOV dword ptr [ESI + 0x1c58a90],EAX ; 004b430c
    MOV EDX,dword ptr [EDI + 0x58]      ; 004b4312
    INC EDX                             ; 004b4315
    XOR EAX,EAX                         ; 004b4316
    MOV dword ptr [EDI + 0x58],EDX      ; 004b4318
    MOV ESP,EBP                         ; 004b431b
    POP EBP                             ; 004b431d
    POP EDI                             ; 004b431e
    POP ESI                             ; 004b431f
    POP EBX                             ; 004b4320
    RET                                 ; 004b4321
    PUSH EDI                            ; 004b4322
        ;   Label: LAB_004b4322
    PUSH 0x5df594                       ; 004b4323 | = "44-sh?c @ .2"
    MOV EDX,dword ptr [0x0061c010]      ; 004b4328 | DAT_0061c010
    PUSH EDX                            ; 004b432e
    MOV ECX,dword ptr [0x006236b8]      ; 004b432f | DAT_006236b8
    PUSH ECX                            ; 004b4335
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 004b4336
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004b433b
    MOV dword ptr [ESI + 0x1c58a90],EAX ; 004b433e
    MOV EDX,dword ptr [EDI + 0x58]      ; 004b4344
    INC EDX                             ; 004b4347
    XOR EAX,EAX                         ; 004b4348
    MOV dword ptr [EDI + 0x58],EDX      ; 004b434a
    MOV ESP,EBP                         ; 004b434d
    POP EBP                             ; 004b434f
    POP EDI                             ; 004b4350
    POP ESI                             ; 004b4351
    POP EBX                             ; 004b4352
    RET                                 ; 004b4353

