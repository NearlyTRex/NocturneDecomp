; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[38]:
;   core_armour.cpp_CArmour_process_FUN_00412260 at 00412273
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 00412f28
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 0041548c
;   core_batman.cpp_CBatman_process_FUN_00416870 at 0041688c
;   core_beast.cpp_FUN_004182a0 at 004182b2
;   core_biggs.cpp_CBiggs_FUN_00418700 at 00418712
;   core_boneguy.cpp_FUN_0041bf90 at 0041c00a
;   core_bride.cpp_FUN_00423a30 at 00423a4c
;   core_bugs.cpp_FUN_004250f0 at 004250fb
;   core_colonel.cpp_FUN_0043fa00 at 0043fa16
;   ... and 28 more
;
; Referenced Globals:
;   double DOUBLE_00617092 = 0.0100000000000000
;   undefined4 DAT_0065b834
;   CGame* g_CGamePtr = 02d81a9c
;   CScript* g_CScriptPtr = 0310f858
;   CGame g_CGameInstance
;   CScript g_CScriptInstance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80
;   core_charactr.cpp_CCharacter_FUN_0042a830
;   core_charactr.cpp_CCharacter_FUN_0042d4d0
;   core_game.cpp_CGame_FUN_004e0bf0
;   core_hero.cpp_FUN_004f22a0
;   core_script.cpp_FUN_00560140
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429870
        ;   Label: core_charactr.cpp_CCharacter_FUN_00429870
    PUSH ESI                            ; 00429871
    PUSH EDI                            ; 00429872
    SUB ESP,0x4                         ; 00429873
    MOV ESI,dword ptr [ESP + 0x14]      ; 00429876
    FLD float ptr [ESI + 0x2dd8]        ; 0042987a
    FSUB float ptr [ESP + 0x18]         ; 00429880
    FST float ptr [ESI + 0x2dd8]        ; 00429884
    FLDZ                                ; 0042988a
    FCOMPP                              ; 0042988c
    FNSTSW AX                           ; 0042988e
    SAHF                                ; 00429890
    JBE 0x0042989d                      ; 00429891 | LAB_0042989d
        ;   XREF to: 0042989d (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x2dd8],0x0    ; 00429893
    PUSH dword ptr [ESP + 0x18]         ; 0042989d
        ;   Label: LAB_0042989d
    PUSH ESI                            ; 004298a1
    CALL core_charactr.cpp_CCharacter_FUN_0042a830 ; 004298a2 | void core_charactr.cpp_CCharacter_FUN_0042a830(CCharacter * this_ptr)
        ;   XREF to: 0042a830 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004298a7
    PUSH dword ptr [ESP + 0x18]         ; 004298aa
    PUSH ESI                            ; 004298ae
    CALL core_charactr.cpp_CCharacter_FUN_0042d4d0 ; 004298af | void core_charactr.cpp_CCharacter_FUN_0042d4d0(CCharacter * this_ptr)
        ;   XREF to: 0042d4d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004298b4
    FLD float ptr [ESI + 0xb7e0]        ; 004298b7
    FSUB float ptr [ESP + 0x18]         ; 004298bd
    FST float ptr [ESI + 0xb7e0]        ; 004298c1
    FLDZ                                ; 004298c7
    FCOMPP                              ; 004298c9
    FNSTSW AX                           ; 004298cb
    SAHF                                ; 004298cd
    JBE 0x004298da                      ; 004298ce | LAB_004298da
        ;   XREF to: 004298da (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0xb7e0],0x0    ; 004298d0
    FLD float ptr [ESI + 0x2618]        ; 004298da
        ;   Label: LAB_004298da
    FLDZ                                ; 004298e0
    FCOMPP                              ; 004298e2
    FNSTSW AX                           ; 004298e4
    SAHF                                ; 004298e6
    JNC 0x0042991c                      ; 004298e7 | LAB_0042991c
        ;   XREF to: 0042991c (CONDITIONAL_JUMP)
    FLD float ptr [ESI + 0x2618]        ; 004298e9
    FSUB float ptr [ESP + 0x18]         ; 004298ef
    FST float ptr [ESI + 0x2618]        ; 004298f3
    FLDZ                                ; 004298f9
    FCOMPP                              ; 004298fb
    FNSTSW AX                           ; 004298fd
    SAHF                                ; 004298ff
    JBE 0x0042991c                      ; 00429900 | LAB_0042991c
        ;   XREF to: 0042991c (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00429902
    MOV EDX,dword ptr [0x00680d50]      ; 00429903 | CScript g_CScriptInstance | CScript * g_CScriptPtr
    PUSH EDX                            ; 00429909 | CScript g_CScriptInstance
    MOV dword ptr [ESI + 0x2618],0x0    ; 0042990a
    CALL core_script.cpp_FUN_00560140   ; 00429914 | undefined core_script.cpp_FUN_00560140()
        ;   XREF to: 00560140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00429919
    CMP dword ptr [ESI + 0x2444],0x2    ; 0042991c
        ;   Label: LAB_0042991c
    JNZ 0x00429952                      ; 00429923 | LAB_00429952
        ;   XREF to: 00429952 (CONDITIONAL_JUMP)
    FLD float ptr [ESI + 0x243c]        ; 00429925
    FDIV float ptr [ESI + 0x2440]       ; 0042992b
    PUSH 0x40000000                     ; 00429931
    SUB ESP,0x4                         ; 00429936
    LEA EAX,[ESI + 0x2448]              ; 00429939
    FSTP float ptr [ESP]                ; 0042993f
    PUSH EAX                            ; 00429942
    MOV EBX,dword ptr [0x0067b654]      ; 00429943 | CGame g_CGameInstance | CGame * g_CGamePtr
    PUSH EBX                            ; 00429949 | CGame g_CGameInstance
    CALL core_game.cpp_CGame_FUN_004e0bf0 ; 0042994a | void core_game.cpp_CGame_FUN_004e0bf0(CGame * this_ptr)
        ;   XREF to: 004e0bf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0042994f
    CMP dword ptr [ESI + 0x240c],0x0    ; 00429952
        ;   Label: LAB_00429952
    JNZ 0x00429a2f                      ; 00429959 | LAB_00429a2f
        ;   XREF to: 00429a2f (CONDITIONAL_JUMP)
    FLD float ptr [ESI + 0x2414]        ; 0042995f
    FCOMP float ptr [0x0065b834]        ; 00429965 | DAT_0065b834
    FNSTSW AX                           ; 0042996b
    SAHF                                ; 0042996d
    JZ 0x00429a33                       ; 0042996e | LAB_00429a33
        ;   XREF to: 00429a33 (CONDITIONAL_JUMP)
    FLD float ptr [ESI + 0xe4]          ; 00429974
        ;   Label: LAB_00429974
    MOV dword ptr [ESI + 0xe4],0x0      ; 0042997a
    FADD float ptr [ESI + 0x24]         ; 00429984
    FLD float ptr [ESI + 0x2414]        ; 00429987
    FXCH                                ; 0042998d
    FSTP float ptr [ESI + 0x24]         ; 0042998f
    FCOMP float ptr [0x0065b834]        ; 00429992 | DAT_0065b834
    FNSTSW AX                           ; 00429998
    SAHF                                ; 0042999a
    JZ 0x004299a6                       ; 0042999b | LAB_004299a6
        ;   XREF to: 004299a6 (CONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0xdc],0x0      ; 0042999d
    JZ 0x004299c9                       ; 004299a4 | LAB_004299c9
        ;   XREF to: 004299c9 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 004299a6
        ;   Label: LAB_004299a6
    MOV EAX,dword ptr [ESI + 0x154]     ; 004299a8
    PUSH dword ptr [ESI + 0x2ddc]       ; 004299ae
    PUSH ESI                            ; 004299b4
    CALL dword ptr [EAX + 0x38]         ; 004299b5
    MOV dword ptr [ESP + 0xc],EAX       ; 004299b8
    MOV EAX,dword ptr [ESP + 0xc]       ; 004299bc
    MOV dword ptr [ESI + 0x2414],EAX    ; 004299c0
    ADD ESP,0xc                         ; 004299c6
    FLD float ptr [ESI + 0x2414]        ; 004299c9
        ;   Label: LAB_004299c9
    FADD double ptr [0x00617092]        ; 004299cf | double DOUBLE_00617092
    FLD float ptr [ESI + 0x24]          ; 004299d5
    FCOMPP                              ; 004299d8
    FNSTSW AX                           ; 004299da
    SAHF                                ; 004299dc
    JNC 0x00429a5d                      ; 004299dd | LAB_00429a5d
        ;   XREF to: 00429a5d (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004299e3
    LEA EBX,[ESI + 0x241c]              ; 004299e8
        ;   Label: LAB_004299e8
    MOV dword ptr [ESI + 0x2410],EAX    ; 004299ee
    MOV dword ptr [EBX + 0x8],0x0       ; 004299f4
    MOV EAX,dword ptr [EBX + 0x8]       ; 004299fb
    MOV dword ptr [EBX + 0x4],EAX       ; 004299fe
    MOV EAX,dword ptr [EBX + 0x4]       ; 00429a01
    MOV dword ptr [EBX],EAX             ; 00429a04
    MOV EDX,dword ptr [ESI + 0xdc]      ; 00429a06
    MOV dword ptr [ESI + 0x2418],0x0    ; 00429a0c
    TEST EDX,EDX                        ; 00429a16
    JNZ 0x00429a23                      ; 00429a18 | LAB_00429a23
        ;   XREF to: 00429a23 (CONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0x25a0],0x0    ; 00429a1a
    JZ 0x00429a61                       ; 00429a21 | LAB_00429a61
        ;   XREF to: 00429a61 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 00429a23
        ;   Label: LAB_00429a23
    ADD ESP,0x4                         ; 00429a28
        ;   Label: LAB_00429a28
    POP EDI                             ; 00429a2b
    POP ESI                             ; 00429a2c
    POP EBX                             ; 00429a2d
    RET                                 ; 00429a2e
    XOR EAX,EAX                         ; 00429a2f
        ;   Label: LAB_00429a2f
    JMP 0x00429a28                      ; 00429a31 | LAB_00429a28
        ;   XREF to: 00429a28 (UNCONDITIONAL_JUMP)
    MOV EDI,ESI                         ; 00429a33
        ;   Label: LAB_00429a33
    XOR EBX,EBX                         ; 00429a35
    CMP dword ptr [EDI + 0x24b4],0x0    ; 00429a37
        ;   Label: LAB_00429a37
    JNZ 0x00429a4f                      ; 00429a3e | LAB_00429a4f
        ;   XREF to: 00429a4f (CONDITIONAL_JUMP)
    INC EBX                             ; 00429a40
        ;   Label: LAB_00429a40
    ADD EDI,0x44                        ; 00429a41
    CMP EBX,0x2                         ; 00429a44
    JGE 0x00429974                      ; 00429a47 | LAB_00429974
        ;   XREF to: 00429974 (CONDITIONAL_JUMP)
    JMP 0x00429a37                      ; 00429a4d | LAB_00429a37
        ;   XREF to: 00429a37 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 00429a4f
        ;   Label: LAB_00429a4f
    PUSH EBX                            ; 00429a51
    PUSH ESI                            ; 00429a52
    CALL core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80 ; 00429a53 | void core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80(CCharacter * this_ptr)
        ;   XREF to: 0042ce80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00429a58
    JMP 0x00429a40                      ; 00429a5b | LAB_00429a40
        ;   XREF to: 00429a40 (UNCONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00429a5d
        ;   Label: LAB_00429a5d
    JMP 0x004299e8                      ; 00429a5f | LAB_004299e8
        ;   XREF to: 004299e8 (UNCONDITIONAL_JUMP)
    PUSH dword ptr [ESI + 0x2de4]       ; 00429a61
        ;   Label: LAB_00429a61
    LEA EAX,[ESI + 0x20]                ; 00429a67
    PUSH dword ptr [ESI + 0x2de8]       ; 00429a6a
    PUSH EAX                            ; 00429a70
    CALL core_hero.cpp_FUN_004f22a0     ; 00429a71 | undefined core_hero.cpp_FUN_004f22a0()
        ;   XREF to: 004f22a0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00429a76
    TEST EAX,EAX                        ; 00429a79
    JNZ 0x00429a23                      ; 00429a7b | LAB_00429a23
        ;   XREF to: 00429a23 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESI + 0xb7d4]    ; 00429a7d
    PUSH EBX                            ; 00429a83
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 00429a84 | int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00429a89
    XOR EAX,EAX                         ; 00429a8c
    ADD ESP,0x4                         ; 00429a8e
    POP EDI                             ; 00429a91
    POP ESI                             ; 00429a92
    POP EBX                             ; 00429a93
    RET                                 ; 00429a94

