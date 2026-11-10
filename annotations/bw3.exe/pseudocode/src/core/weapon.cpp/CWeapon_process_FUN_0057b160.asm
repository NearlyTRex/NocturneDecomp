; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_process_FUN_0057b160(CWeapon *this_ptr,float delta_time)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[10]:
;   core_burncrss.cpp_CBurncross_process_FUN_00424e30 at 00424e49
;   core_dynamite.cpp_CDynamite_process_FUN_0047b270 at 0047b286
;   core_elephant.cpp_CElephantGun_process_FUN_00486c30 at 00486c51
;   core_exorcism.cpp_CExorcism_process_FUN_0048a420 at 0048a48a
;   core_firestff.cpp_CFirestaff_process_FUN_004a4dc0 at 004a4dd9
;   core_heal.cpp_CHeal_process_FUN_004d1c50 at 004d1c5a
;   core_lightsta.cpp_CLightStaff_process_FUN_004e2050 at 004e20c4
;   core_melee.cpp_CMelee_process_FUN_004e73e0 at 004e73ed
;   core_rifle.cpp_CRifle_process_FUN_00527d50 at 00527d63
;   core_tommygun.cpp_CTommyGun_process_FUN_0056bd40 at 0056bd56
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CDemonLightInstance.volumetric_intensity
;   undefined4 DAT_01d5ba14
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_box.cpp_CBox_process_FUN_0041b410
;   core_set.cpp_CDemonSet_addDynamicLight_FUN_00537270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b160
        ;   Label: core_weapon.cpp_CWeapon_process_FUN_0057b160
    PUSH ESI                            ; 0057b161
    MOV EBX,dword ptr [ESP + 0xc]       ; 0057b162
    FLD float ptr [EBX + 0x300]         ; 0057b166
    FLDZ                                ; 0057b16c
    FCOMPP                              ; 0057b16e
    FNSTSW AX                           ; 0057b170
    SAHF                                ; 0057b172
    JC 0x0057b23a                       ; 0057b173
        ;   XREF to: 0057b23a (CONDITIONAL_JUMP)  ; LAB_0057b23a
    MOV EDX,dword ptr [EBX + 0x304]     ; 0057b179
        ;   Label: LAB_0057b179
    TEST EDX,EDX                        ; 0057b17f
    JNZ 0x0057b201                      ; 0057b181
        ;   XREF to: 0057b201 (CONDITIONAL_JUMP)  ; LAB_0057b201
    CMP dword ptr [EBX + 0x2d4],0x0     ; 0057b187
    JNZ 0x0057b201                      ; 0057b18e
        ;   XREF to: 0057b201 (CONDITIONAL_JUMP)  ; LAB_0057b201
    FLD float ptr [EBX + 0x580]         ; 0057b190
    FLDZ                                ; 0057b196
    FCOMPP                              ; 0057b198
    FNSTSW AX                           ; 0057b19a
    SAHF                                ; 0057b19c
    JNC 0x0057b201                      ; 0057b19d
        ;   XREF to: 0057b201 (CONDITIONAL_JUMP)  ; LAB_0057b201
    FLD float ptr [EBX + 0x580]         ; 0057b19f
    FSUB float ptr [ESP + 0x10]         ; 0057b1a5
    FST float ptr [EBX + 0x580]         ; 0057b1a9
    FLDZ                                ; 0057b1af
    FCOMPP                              ; 0057b1b1
    FNSTSW AX                           ; 0057b1b3
    SAHF                                ; 0057b1b5
    JBE 0x0057b1be                      ; 0057b1b6
        ;   XREF to: 0057b1be (CONDITIONAL_JUMP)  ; LAB_0057b1be
    MOV dword ptr [EBX + 0x580],EDX     ; 0057b1b8
    LEA ESI,[EBX + 0x308]               ; 0057b1be
        ;   Label: LAB_0057b1be
    PUSH dword ptr [ESP + 0x10]         ; 0057b1c4
    PUSH ESI                            ; 0057b1c8
    CALL core_box.cpp_CBox_process_FUN_0041b410 ; 0057b1c9
        ;   XREF to: 0041b410 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041b410(CBox * this_ptr, float delta_time)
    LEA EAX,[EBX + 0x20]                ; 0057b1ce
    MOV EDX,dword ptr [ESI]             ; 0057b1d1
    MOV dword ptr [EAX],EDX             ; 0057b1d3
    MOV EDX,dword ptr [ESI + 0x4]       ; 0057b1d5
    MOV dword ptr [EAX + 0x4],EDX       ; 0057b1d8
    MOV EDX,dword ptr [ESI + 0x8]       ; 0057b1db
    MOV dword ptr [EAX + 0x8],EDX       ; 0057b1de
    LEA EAX,[EBX + 0x30]                ; 0057b1e1
    LEA EDX,[EBX + 0x314]               ; 0057b1e4
    ADD ESP,0x8                         ; 0057b1ea
    CMP EAX,EDX                         ; 0057b1ed
    JZ 0x0057b201                       ; 0057b1ef
        ;   XREF to: 0057b201 (CONDITIONAL_JUMP)  ; LAB_0057b201
    MOV ECX,dword ptr [EDX]             ; 0057b1f1
    MOV dword ptr [EAX],ECX             ; 0057b1f3
    MOV ECX,dword ptr [EDX + 0x4]       ; 0057b1f5
    MOV dword ptr [EAX + 0x4],ECX       ; 0057b1f8
    MOV ECX,dword ptr [EDX + 0x8]       ; 0057b1fb
    MOV dword ptr [EAX + 0x8],ECX       ; 0057b1fe
    PUSH EBX                            ; 0057b201
        ;   Label: LAB_0057b201
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 0057b202
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    MOV EAX,[0x01d5ba14]                ; 0057b207 | DAT_01d5ba14
    MOV EDX,dword ptr [EBX + 0x304]     ; 0057b20c
    MOV ESI,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0057b212
    ADD ESP,0x4                         ; 0057b219
    CMP EDX,ESI                         ; 0057b21c
    JNZ 0x0057b237                      ; 0057b21e
        ;   XREF to: 0057b237 (CONDITIONAL_JUMP)  ; LAB_0057b237
    MOV EAX,[0x005fe9dc]                ; 0057b220 | g_CGamePtr
    CMP dword ptr [EAX + 0x26c],0x0     ; 0057b225
    JZ 0x0057b237                       ; 0057b22c
        ;   XREF to: 0057b237 (CONDITIONAL_JUMP)  ; LAB_0057b237
    CMP dword ptr [EBX + 0x2f0],0x0     ; 0057b22e
    JNZ 0x0057b266                      ; 0057b235
        ;   XREF to: 0057b266 (CONDITIONAL_JUMP)  ; LAB_0057b266
    POP ESI                             ; 0057b237
        ;   Label: LAB_0057b237
    POP EBX                             ; 0057b238
    RET                                 ; 0057b239
    FLD float ptr [EBX + 0x300]         ; 0057b23a
        ;   Label: LAB_0057b23a
    FSUB float ptr [ESP + 0x10]         ; 0057b240
    FST float ptr [EBX + 0x300]         ; 0057b244
    FLDZ                                ; 0057b24a
    FCOMPP                              ; 0057b24c
    FNSTSW AX                           ; 0057b24e
    SAHF                                ; 0057b250
    JBE 0x0057b179                      ; 0057b251
        ;   XREF to: 0057b179 (CONDITIONAL_JUMP)  ; LAB_0057b179
    MOV dword ptr [EBX + 0x300],0x0     ; 0057b257
    JMP 0x0057b179                      ; 0057b261
        ;   XREF to: 0057b179 (UNCONDITIONAL_JUMP)  ; LAB_0057b179
    PUSH EBX                            ; 0057b266
        ;   Label: LAB_0057b266
    MOV EAX,dword ptr [EBX + 0x154]     ; 0057b267
    CALL dword ptr [EAX + 0xf4]         ; 0057b26d
    FLD float ptr [0x01d21308]          ; 0057b273 | g_CDemonLightInstance.volumetric_intensity
    FLDZ                                ; 0057b279
    ADD ESP,0x4                         ; 0057b27b
    FCOMPP                              ; 0057b27e
    FNSTSW AX                           ; 0057b280
    SAHF                                ; 0057b282
    JNC 0x0057b237                      ; 0057b283
        ;   XREF to: 0057b237 (CONDITIONAL_JUMP)  ; LAB_0057b237
    PUSH 0x1d1e360                      ; 0057b285
    MOV EAX,[0x00603b28]                ; 0057b28a | g_CDemonSetPtr
    PUSH EAX                            ; 0057b28f
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_00537270 ; 0057b290
        ;   XREF to: 00537270 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addDynamicLight_FUN_00537270(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 0057b295
    POP ESI                             ; 0057b298
    POP EBX                             ; 0057b299
    RET                                 ; 0057b29a

