; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_playTaunt_FUN_0051f330(CMobster *this_ptr,int taunt_category)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   taunt_category
; Local Variables:
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mobster.cpp_CMobster_process_FUN_0051ce40 at 0051d612
;
; Referenced Globals:
;   TerminatedCString s_mobster_cheese_c_c_d_wav_005e9f66
;   undefined4 DAT_005e9f82
;   CGame* g_CGamePtr = 01ccf390
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_006236b8
;   undefined4 g_CGameInstance.foul_language_flag
;   undefined4 g_CMobsterClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.enemy_count
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_sound.cpp_CSound_getSoundDuration_FUN_0057d9e0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   sound_sndmain.cpp_isSfxPlaying_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f330
        ;   Label: core_mobster.cpp_CMobster_playTaunt_FUN_0051f330
    PUSH ESI                            ; 0051f331
    PUSH EDI                            ; 0051f332
    PUSH EBP                            ; 0051f333
    MOV EBP,ESP                         ; 0051f334
    SUB ESP,0x70                        ; 0051f336
    AND ESP,0xfffffff8                  ; 0051f339
    MOV ESI,dword ptr [EBP + 0x14]      ; 0051f33c
    FLD float ptr [ESI + 0xc280]        ; 0051f33f
    FLDZ                                ; 0051f345
    FCOMPP                              ; 0051f347
    FNSTSW AX                           ; 0051f349
    SAHF                                ; 0051f34b
    JC 0x0051f398                       ; 0051f34c
        ;   XREF to: 0051f398 (CONDITIONAL_JUMP)  ; LAB_0051f398
    MOV EBX,dword ptr [EBP + 0x18]      ; 0051f34e
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051f351
    XOR EDI,EDI                         ; 0051f354
    ADD EAX,0x60                        ; 0051f356
    SHL EBX,0x2                         ; 0051f359
    MOV dword ptr [ESP + 0x64],EAX      ; 0051f35c
    MOV EDX,dword ptr [EBX + 0x1d33bec] ; 0051f360
        ;   Label: LAB_0051f360
    INC EDX                             ; 0051f366
    MOV EAX,[0x0061d95c]                ; 0051f367 | g_CGamePtr
    MOV dword ptr [EBX + 0x1d33bec],EDX ; 0051f36c
    CMP dword ptr [EAX + 0x1c],0x0      ; 0051f372 | g_CGameInstance.foul_language_flag
    JNZ 0x0051f39f                      ; 0051f376
        ;   XREF to: 0051f39f (CONDITIONAL_JUMP)  ; LAB_0051f39f
    CMP dword ptr [EBP + 0x18],0x1      ; 0051f378
    JNZ 0x0051f39f                      ; 0051f37c
        ;   XREF to: 0051f39f (CONDITIONAL_JUMP)  ; LAB_0051f39f
    CMP EDX,0x6                         ; 0051f37e
    JNZ 0x0051f39f                      ; 0051f381
        ;   XREF to: 0051f39f (CONDITIONAL_JUMP)  ; LAB_0051f39f
    INC EDI                             ; 0051f383
        ;   Label: LAB_0051f383
    CMP EDI,0x3                         ; 0051f384
    JL 0x0051f360                       ; 0051f387
        ;   XREF to: 0051f360 (CONDITIONAL_JUMP)  ; LAB_0051f360
    FLD float ptr [ESI + 0xc280]        ; 0051f389
        ;   Label: LAB_0051f389
    FLDZ                                ; 0051f38f
    FCOMPP                              ; 0051f391
    FNSTSW AX                           ; 0051f393
    SAHF                                ; 0051f395
    JC 0x0051f3ff                       ; 0051f396
        ;   XREF to: 0051f3ff (CONDITIONAL_JUMP)  ; LAB_0051f3ff
    MOV ESP,EBP                         ; 0051f398
        ;   Label: LAB_0051f398
    POP EBP                             ; 0051f39a
    POP EDI                             ; 0051f39b
    POP ESI                             ; 0051f39c
    POP EBX                             ; 0051f39d
    RET                                 ; 0051f39e
    MOV ECX,dword ptr [EBX + 0x1d33bec] ; 0051f39f
        ;   Label: LAB_0051f39f
    PUSH ECX                            ; 0051f3a5
    MOV EAX,dword ptr [ESP + 0x68]      ; 0051f3a6
    PUSH EAX                            ; 0051f3aa
    XOR EAX,EAX                         ; 0051f3ab
    MOV AL,byte ptr [ESI + 0xc27c]      ; 0051f3ad
    PUSH EAX                            ; 0051f3b3
    PUSH 0x5e9f66                       ; 0051f3b4 | = "mobster-cheese-%c-%c-%d.wav"
    LEA EAX,[ESP + 0x10]                ; 0051f3b9
    PUSH EAX                            ; 0051f3bd
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0051f3be
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x14                        ; 0051f3c3
    MOV EAX,ESP                         ; 0051f3c6
    PUSH EAX                            ; 0051f3c8
    MOV EDX,dword ptr [0x006236b8]      ; 0051f3c9 | DAT_006236b8
    PUSH EDX                            ; 0051f3cf
    CALL core_sound.cpp_CSound_getSoundDuration_FUN_0057d9e0 ; 0051f3d0
        ;   XREF to: 0057d9e0 (UNCONDITIONAL_CALL)  ; float core_sound.cpp_CSound_getSoundDuration_FUN_0057d9e0(CSound * this_ptr, char * sound_name)
    MOV dword ptr [ESP + 0x74],EAX      ; 0051f3d5
    MOV EAX,dword ptr [ESP + 0x74]      ; 0051f3d9
    MOV dword ptr [ESI + 0xc280],EAX    ; 0051f3dd
    ADD ESP,0x8                         ; 0051f3e3
    FLD float ptr [ESI + 0xc280]        ; 0051f3e6
    FLDZ                                ; 0051f3ec
    FCOMPP                              ; 0051f3ee
    FNSTSW AX                           ; 0051f3f0
    SAHF                                ; 0051f3f2
    JC 0x0051f389                       ; 0051f3f3
        ;   XREF to: 0051f389 (CONDITIONAL_JUMP)  ; LAB_0051f389
    XOR ECX,ECX                         ; 0051f3f5
    MOV dword ptr [EBX + 0x1d33bec],ECX ; 0051f3f7
    JMP 0x0051f383                      ; 0051f3fd
        ;   XREF to: 0051f383 (UNCONDITIONAL_JUMP)  ; LAB_0051f383
    FLD float ptr [ESI + 0xc280]        ; 0051f3ff
        ;   Label: LAB_0051f3ff
    MOV EBX,dword ptr [ESI + 0xc308]    ; 0051f405
    FADD float ptr [0x005e9f82]         ; 0051f40b | DAT_005e9f82
    PUSH EBX                            ; 0051f411
    FSTP float ptr [ESI + 0xc280]       ; 0051f412
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 0051f418
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0051f41d
    TEST EAX,EAX                        ; 0051f420
    JNZ 0x0051f398                      ; 0051f422
        ;   XREF to: 0051f398 (CONDITIONAL_JUMP)  ; LAB_0051f398
    MOV dword ptr [ESP + 0x68],EAX      ; 0051f428
    XOR EDI,EDI                         ; 0051f42c
    XOR EBX,EBX                         ; 0051f42e
    MOV EAX,[0x00622c18]                ; 0051f430 | g_CDemonSetPtr
        ;   Label: LAB_0051f430
    CMP EDI,dword ptr [EAX + 0x150fec]  ; 0051f435 | g_CDemonSetInstance.enemy_count
    JGE 0x0051f48a                      ; 0051f43b
        ;   XREF to: 0051f48a (CONDITIONAL_JUMP)  ; LAB_0051f48a
    MOV EDX,dword ptr [ESP + 0x68]      ; 0051f43d
    MOV ECX,dword ptr [0x01d33c68]      ; 0051f441 | g_CMobsterClassInfo.name_hash
    ADD EAX,EDX                         ; 0051f447
    PUSH ECX                            ; 0051f449
    MOV ECX,dword ptr [EAX + 0x150ff0]  ; 0051f44a
    PUSH ECX                            ; 0051f450
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0051f451
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0051f456
    TEST EAX,EAX                        ; 0051f459
    JNZ 0x0051f46b                      ; 0051f45b
        ;   XREF to: 0051f46b (CONDITIONAL_JUMP)  ; LAB_0051f46b
    MOV ECX,dword ptr [ESP + 0x68]      ; 0051f45d
        ;   Label: LAB_0051f45d
    ADD ECX,0x4                         ; 0051f461
    INC EDI                             ; 0051f464
    MOV dword ptr [ESP + 0x68],ECX      ; 0051f465
    JMP 0x0051f430                      ; 0051f469
        ;   XREF to: 0051f430 (UNCONDITIONAL_JUMP)  ; LAB_0051f430
    MOV EDX,dword ptr [EAX + 0xc300]    ; 0051f46b
        ;   Label: LAB_0051f46b
    PUSH EDX                            ; 0051f471
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 0051f472
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0051f477
    TEST EAX,EAX                        ; 0051f47a
    JZ 0x0051f45d                       ; 0051f47c
        ;   XREF to: 0051f45d (CONDITIONAL_JUMP)  ; LAB_0051f45d
    INC EBX                             ; 0051f47e
    CMP EBX,0x3                         ; 0051f47f
    JG 0x0051f398                       ; 0051f482
        ;   XREF to: 0051f398 (CONDITIONAL_JUMP)  ; LAB_0051f398
    JMP 0x0051f45d                      ; 0051f488
        ;   XREF to: 0051f45d (UNCONDITIONAL_JUMP)  ; LAB_0051f45d
    MOV EAX,ESP                         ; 0051f48a
        ;   Label: LAB_0051f48a
    PUSH EAX                            ; 0051f48c
    MOV EBX,dword ptr [ESI + 0x154]     ; 0051f48d
    PUSH ESI                            ; 0051f493
    CALL dword ptr [EBX + 0x2c]         ; 0051f494
    ADD ESP,0x8                         ; 0051f497
    MOV dword ptr [ESI + 0xc300],EAX    ; 0051f49a
    MOV ESP,EBP                         ; 0051f4a0
    POP EBP                             ; 0051f4a2
    POP EDI                             ; 0051f4a3
    POP ESI                             ; 0051f4a4
    POP EBX                             ; 0051f4a5
    RET                                 ; 0051f4a6

