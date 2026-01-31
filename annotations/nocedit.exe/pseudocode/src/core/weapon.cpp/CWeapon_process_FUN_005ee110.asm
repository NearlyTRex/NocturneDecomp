; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_weapon_cpp_CWeapon_process_FUN_005ee110(CWeapon *this_ptr,float delta_time)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[9]:
;   core_baron.cpp_CBaronWeapon_process_FUN_00413dc0 at 00413dd6
;   core_crossbow.cpp_CCrossbow_process_FUN_00448d30 at 00448d3d
;   core_dynamite.cpp_CDynamite_process_FUN_0049cfb0 at 0049cfc2
;   core_elephant.cpp_CElephantGun_FUN_004a7070 at 004a7091
;   core_flamegun.cpp_CFlameThrower_process_FUN_004cb9b0 at 004cb9c2
;   core_lightgun.cpp_CLightGun_process_FUN_00506450 at 0050645e
;   core_melee.cpp_CMelee_process_FUN_0050ec10 at 0050ec1d
;   core_shotgun.cpp_FUN_00587f70 at 00587f91
;   core_tommygun.cpp_CTommyGun_process_FUN_005de360 at 005de376
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonLight g_CDemonLightInstance
;   undefined4 g_CDemonLightInstance.volumetric_intensity
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.auto_save_blocked
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_box.cpp_CBox_process_FUN_0041e2f0
;   core_set.cpp_CDemonSet_FUN_0056d090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ee110
        ;   Label: core_weapon.cpp_CWeapon_process_FUN_005ee110
    PUSH ESI                            ; 005ee111
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ee112
    FLD float ptr [EBX + 0x300]         ; 005ee116
    FLDZ                                ; 005ee11c
    FCOMPP                              ; 005ee11e
    FNSTSW AX                           ; 005ee120
    SAHF                                ; 005ee122
    JC 0x005ee1ea                       ; 005ee123
        ;   XREF to: 005ee1ea (CONDITIONAL_JUMP)  ; LAB_005ee1ea
    MOV EDX,dword ptr [EBX + 0x304]     ; 005ee129
        ;   Label: LAB_005ee129
    TEST EDX,EDX                        ; 005ee12f
    JNZ 0x005ee1b1                      ; 005ee131
        ;   XREF to: 005ee1b1 (CONDITIONAL_JUMP)  ; LAB_005ee1b1
    CMP dword ptr [EBX + 0x2d4],0x0     ; 005ee137
    JNZ 0x005ee1b1                      ; 005ee13e
        ;   XREF to: 005ee1b1 (CONDITIONAL_JUMP)  ; LAB_005ee1b1
    FLD float ptr [EBX + 0x570]         ; 005ee140
    FLDZ                                ; 005ee146
    FCOMPP                              ; 005ee148
    FNSTSW AX                           ; 005ee14a
    SAHF                                ; 005ee14c
    JNC 0x005ee1b1                      ; 005ee14d
        ;   XREF to: 005ee1b1 (CONDITIONAL_JUMP)  ; LAB_005ee1b1
    FLD float ptr [EBX + 0x570]         ; 005ee14f
    FSUB float ptr [ESP + 0x10]         ; 005ee155
    FST float ptr [EBX + 0x570]         ; 005ee159
    FLDZ                                ; 005ee15f
    FCOMPP                              ; 005ee161
    FNSTSW AX                           ; 005ee163
    SAHF                                ; 005ee165
    JBE 0x005ee16e                      ; 005ee166
        ;   XREF to: 005ee16e (CONDITIONAL_JUMP)  ; LAB_005ee16e
    MOV dword ptr [EBX + 0x570],EDX     ; 005ee168
    LEA ESI,[EBX + 0x308]               ; 005ee16e
        ;   Label: LAB_005ee16e
    PUSH dword ptr [ESP + 0x10]         ; 005ee174
    PUSH ESI                            ; 005ee178
    CALL core_box.cpp_CBox_process_FUN_0041e2f0 ; 005ee179
        ;   XREF to: 0041e2f0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041e2f0(CBox * this_ptr, float delta_time)
    LEA EAX,[EBX + 0x20]                ; 005ee17e
    MOV EDX,dword ptr [ESI]             ; 005ee181
    MOV dword ptr [EAX],EDX             ; 005ee183
    MOV EDX,dword ptr [ESI + 0x4]       ; 005ee185
    MOV dword ptr [EAX + 0x4],EDX       ; 005ee188
    MOV EDX,dword ptr [ESI + 0x8]       ; 005ee18b
    MOV dword ptr [EAX + 0x8],EDX       ; 005ee18e
    LEA EAX,[EBX + 0x30]                ; 005ee191
    LEA EDX,[EBX + 0x314]               ; 005ee194
    ADD ESP,0x8                         ; 005ee19a
    CMP EAX,EDX                         ; 005ee19d
    JZ 0x005ee1b1                       ; 005ee19f
        ;   XREF to: 005ee1b1 (CONDITIONAL_JUMP)  ; LAB_005ee1b1
    MOV ECX,dword ptr [EDX]             ; 005ee1a1
    MOV dword ptr [EAX],ECX             ; 005ee1a3
    MOV ECX,dword ptr [EDX + 0x4]       ; 005ee1a5
    MOV dword ptr [EAX + 0x4],ECX       ; 005ee1a8
    MOV ECX,dword ptr [EDX + 0x8]       ; 005ee1ab
    MOV dword ptr [EAX + 0x8],ECX       ; 005ee1ae
    PUSH EBX                            ; 005ee1b1
        ;   Label: LAB_005ee1b1
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 005ee1b2
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    MOV EAX,[0x02db87d0]                ; 005ee1b7 | g_LocalHeroIndex
    MOV EDX,dword ptr [EBX + 0x304]     ; 005ee1bc
    MOV ESI,dword ptr [EAX*0x4 + 0x2db87c0] ; 005ee1c2 | g_HeroActors
    ADD ESP,0x4                         ; 005ee1c9
    CMP EDX,ESI                         ; 005ee1cc
    JNZ 0x005ee1e7                      ; 005ee1ce
        ;   XREF to: 005ee1e7 (CONDITIONAL_JUMP)  ; LAB_005ee1e7
    MOV EAX,[0x0067b654]                ; 005ee1d0 | g_CGameInstance | g_CGamePtr
    CMP dword ptr [EAX + 0x244],0x0     ; 005ee1d5 | g_CGameInstance.auto_save_blocked
    JZ 0x005ee1e7                       ; 005ee1dc
        ;   XREF to: 005ee1e7 (CONDITIONAL_JUMP)  ; LAB_005ee1e7
    CMP dword ptr [EBX + 0x2f0],0x0     ; 005ee1de
    JNZ 0x005ee216                      ; 005ee1e5
        ;   XREF to: 005ee216 (CONDITIONAL_JUMP)  ; LAB_005ee216
    POP ESI                             ; 005ee1e7
        ;   Label: LAB_005ee1e7
    POP EBX                             ; 005ee1e8
    RET                                 ; 005ee1e9
    FLD float ptr [EBX + 0x300]         ; 005ee1ea
        ;   Label: LAB_005ee1ea
    FSUB float ptr [ESP + 0x10]         ; 005ee1f0
    FST float ptr [EBX + 0x300]         ; 005ee1f4
    FLDZ                                ; 005ee1fa
    FCOMPP                              ; 005ee1fc
    FNSTSW AX                           ; 005ee1fe
    SAHF                                ; 005ee200
    JBE 0x005ee129                      ; 005ee201
        ;   XREF to: 005ee129 (CONDITIONAL_JUMP)  ; LAB_005ee129
    MOV dword ptr [EBX + 0x300],0x0     ; 005ee207
    JMP 0x005ee129                      ; 005ee211
        ;   XREF to: 005ee129 (UNCONDITIONAL_JUMP)  ; LAB_005ee129
    PUSH EBX                            ; 005ee216
        ;   Label: LAB_005ee216
    MOV EAX,dword ptr [EBX + 0x154]     ; 005ee217
    CALL dword ptr [EAX + 0x108]        ; 005ee21d
    FLD float ptr [0x02d81a98]          ; 005ee223 | g_CDemonLightInstance.volumetric_intensity
    FLDZ                                ; 005ee229
    ADD ESP,0x4                         ; 005ee22b
    FCOMPP                              ; 005ee22e
    FNSTSW AX                           ; 005ee230
    SAHF                                ; 005ee232
    JNC 0x005ee1e7                      ; 005ee233
        ;   XREF to: 005ee1e7 (CONDITIONAL_JUMP)  ; LAB_005ee1e7
    PUSH 0x2d7eaf0                      ; 005ee235 | g_CDemonLightInstance
    MOV EAX,[0x006810c8]                ; 005ee23a | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 005ee23f | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056d090 ; 005ee240
        ;   XREF to: 0056d090 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056d090(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 005ee245
    POP ESI                             ; 005ee248
    POP EBX                             ; 005ee249
    RET                                 ; 005ee24a

