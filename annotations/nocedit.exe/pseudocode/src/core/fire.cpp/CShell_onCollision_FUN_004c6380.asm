; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fire_cpp_CShell_onCollision_FUN_004c6380(CShell *this_ptr,CVector3f *collision_normal)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   collision_normal
; Local Variables:
; float            Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   TerminatedCString s_shell_kfm_00629fcb
;   TerminatedCString s_sh_sh_c_15_00629fd5
;   TerminatedCString s_s_44_sh_c_2_00629fe3
;   double DOUBLE_00629ff3 = 0.25
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CSound* g_CSoundPtr = 03f6af64
;   CFireEffect g_CFireEffectInstance
;   uint[3] g_ShellBounceSoundHandles
;   undefined4 g_ShellBounceSoundHandles[1]
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_sound.cpp_CSound_playActorSound_FUN_005b3a40
;   crt_string.c__stricmp_FUN_005fe7f0
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6380
        ;   Label: core_fire.cpp_CShell_onCollision_FUN_004c6380
    PUSH ESI                            ; 004c6381
    PUSH EDI                            ; 004c6382
    PUSH EBP                            ; 004c6383
    MOV EBP,ESP                         ; 004c6384
    SUB ESP,0x8                         ; 004c6386
    MOV EDI,dword ptr [EBP + 0x14]      ; 004c6389
    MOV EAX,0x4                         ; 004c638c
    MOV EDX,dword ptr [EDI + 0x50]      ; 004c6391
    SUB EAX,EDX                         ; 004c6394
    MOV dword ptr [EBP + -0x4],EAX      ; 004c6396
    FILD dword ptr [EBP + -0x4]         ; 004c6399
    FMUL double ptr [0x00629ff3]        ; 004c639c | DOUBLE_00629ff3
    FST float ptr [EBP + -0x8]          ; 004c63a2
    FLDZ                                ; 004c63a5
    FCOMPP                              ; 004c63a7
    FNSTSW AX                           ; 004c63a9
    SAHF                                ; 004c63ab
    JBE 0x004c63b3                      ; 004c63ac
        ;   XREF to: 004c63b3 (CONDITIONAL_JUMP)  ; LAB_004c63b3
    XOR ECX,ECX                         ; 004c63ae
    MOV dword ptr [EBP + -0x8],ECX      ; 004c63b0
    PUSH 0x40c90fdb                     ; 004c63b3
        ;   Label: LAB_004c63b3
    PUSH 0xc0c90fdb                     ; 004c63b8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c63bd
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 004c63c2
    ADD ESP,0x8                         ; 004c63c5
    FLD float ptr [EBP + -0x4]          ; 004c63c8
    FMUL float ptr [EBP + -0x8]         ; 004c63cb
    PUSH 0x40490fdb                     ; 004c63ce
    PUSH 0xc0490fdb                     ; 004c63d3
    FSTP float ptr [EDI + 0x44]         ; 004c63d8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c63db
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 004c63e0
    FLD float ptr [EBP + -0x4]          ; 004c63e3
    FMUL float ptr [EBP + -0x8]         ; 004c63e6
    ADD ESP,0x8                         ; 004c63e9
    MOV EBX,dword ptr [EDI + 0x50]      ; 004c63ec
    FSTP float ptr [EDI + 0x48]         ; 004c63ef
    TEST EBX,EBX                        ; 004c63f2
    JNZ 0x004c6419                      ; 004c63f4
        ;   XREF to: 004c6419 (CONDITIONAL_JUMP)  ; LAB_004c6419
    XOR ESI,ESI                         ; 004c63f6
    MOV EAX,dword ptr [EBX + 0x2d141dc] ; 004c63f8 | g_ShellBounceSoundHandles | g_ShellBounceSoundHandles[1]
        ;   Label: LAB_004c63f8
    PUSH EAX                            ; 004c63fe
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004c63ff
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004c6404
    TEST EAX,EAX                        ; 004c6407
    JZ 0x004c6414                       ; 004c6409
        ;   XREF to: 004c6414 (CONDITIONAL_JUMP)  ; LAB_004c6414
    ADD EBX,0x4                         ; 004c640b
    INC ESI                             ; 004c640e
    CMP EBX,0xc                         ; 004c640f
    JL 0x004c63f8                       ; 004c6412
        ;   XREF to: 004c63f8 (CONDITIONAL_JUMP)  ; LAB_004c63f8
    CMP ESI,0x3                         ; 004c6414
        ;   Label: LAB_004c6414
    JNZ 0x004c6429                      ; 004c6417
        ;   XREF to: 004c6429 (CONDITIONAL_JUMP)  ; LAB_004c6429
    MOV EDX,dword ptr [EDI + 0x50]      ; 004c6419
        ;   Label: LAB_004c6419
    INC EDX                             ; 004c641c
    XOR EAX,EAX                         ; 004c641d
    MOV dword ptr [EDI + 0x50],EDX      ; 004c641f
    MOV ESP,EBP                         ; 004c6422
    POP EBP                             ; 004c6424
    POP EDI                             ; 004c6425
    POP ESI                             ; 004c6426
    POP EBX                             ; 004c6427
    RET                                 ; 004c6428
    PUSH 0x629fcb                       ; 004c6429 | = "shell.kfm"
        ;   Label: LAB_004c6429
    MOV EAX,dword ptr [EDI + 0x54]      ; 004c642e
    PUSH EAX                            ; 004c6431
    SHL ESI,0x2                         ; 004c6432
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004c6435
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004c643a
    TEST EAX,EAX                        ; 004c643d
    JNZ 0x004c6472                      ; 004c643f
        ;   XREF to: 004c6472 (CONDITIONAL_JUMP)  ; LAB_004c6472
    PUSH EDI                            ; 004c6441
    PUSH 0x629fd5                       ; 004c6442 | = "sh-sh?c @ .15"
    MOV EBX,dword ptr [0x0067a3d0]      ; 004c6447 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EBX                            ; 004c644d | g_CFireEffectInstance
    MOV EAX,[0x00681ef8]                ; 004c644e | g_CSoundPtr | g_CSoundInstance
    PUSH EAX                            ; 004c6453 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 004c6454
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004c6459
    MOV dword ptr [ESI + 0x2d141dc],EAX ; 004c645c | g_ShellBounceSoundHandles[1]
    MOV EDX,dword ptr [EDI + 0x50]      ; 004c6462
    INC EDX                             ; 004c6465
    XOR EAX,EAX                         ; 004c6466
    MOV dword ptr [EDI + 0x50],EDX      ; 004c6468
    MOV ESP,EBP                         ; 004c646b
    POP EBP                             ; 004c646d
    POP EDI                             ; 004c646e
    POP ESI                             ; 004c646f
    POP EBX                             ; 004c6470
    RET                                 ; 004c6471
    PUSH EDI                            ; 004c6472
        ;   Label: LAB_004c6472
    PUSH 0x629fe3                       ; 004c6473 | = "44-sh?c @ .2"
    MOV EDX,dword ptr [0x0067a3d0]      ; 004c6478 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EDX                            ; 004c647e | g_CFireEffectInstance
    MOV ECX,dword ptr [0x00681ef8]      ; 004c647f | g_CSoundPtr | g_CSoundInstance
    PUSH ECX                            ; 004c6485 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 004c6486
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004c648b
    MOV dword ptr [ESI + 0x2d141dc],EAX ; 004c648e | g_ShellBounceSoundHandles[1]
    MOV EDX,dword ptr [EDI + 0x50]      ; 004c6494
    INC EDX                             ; 004c6497
    XOR EAX,EAX                         ; 004c6498
    MOV dword ptr [EDI + 0x50],EDX      ; 004c649a
    MOV ESP,EBP                         ; 004c649d
    POP EBP                             ; 004c649f
    POP EDI                             ; 004c64a0
    POP ESI                             ; 004c64a1
    POP EBX                             ; 004c64a2
    RET                                 ; 004c64a3

