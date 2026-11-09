; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_actor_cpp_CDemonActor_ctor_FUN_00408790(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[48]:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040ddb0 at 0040ddb8
;   core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e510 at 0040e518
;   core_anvil.cpp_CAnvil_ctor_FUN_0040ea30 at 0040ea38
;   core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040f330 at 0040f336
;   core_barrier.cpp_CBarrier_ctor_FUN_00410cb0 at 00410cb5
;   core_bat.cpp_CBat_ctor_FUN_00410fd0 at 00410fd8
;   core_battery.cpp_CBattery_ctor_FUN_00414720 at 00414726
;   core_bodypart.cpp_CBodyPart_ctor_FUN_004156e0 at 004156e5
;   core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30 at 0041bd36
;   core_chain.cpp_CChain_ctor_FUN_005b4720 at 005b4727
;   ... and 38 more
;
; Referenced Globals:
;   undefined1 DAT_005ca42a
;   undefined1 DAT_005ca42b
;   undefined1 DAT_005ca42c
;   undefined1 DAT_005ca42d
;   undefined1 DAT_005ca42f
;   undefined1 DAT_005ca430
;   undefined1 DAT_005ca431
;   undefined1 DAT_005ca432
;   undefined4 g_CDemonActorVTable
;   WatcomTypeInfo g_CSimpleParticleSystemTypeInfo
;   undefined4 DAT_0078a123
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_initTransformCache_FUN_00408750
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408790
        ;   Label: core_actor.cpp_CDemonActor_ctor_FUN_00408790
    PUSH ESI                            ; 00408791
    PUSH EDI                            ; 00408792
    MOV EBX,dword ptr [ESP + 0x10]      ; 00408793
    ADD EBX,0x12c                       ; 00408797
    PUSH EBX                            ; 0040879d
    CALL core_actor.cpp_initTransformCache_FUN_00408750 ; 0040879e
        ;   XREF to: 00408750 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_initTransformCache_FUN_00408750()
    ADD ESP,0x4                         ; 004087a3
    PUSH 0x5f2270                       ; 004087a6 | g_CSimpleParticleSystemTypeInfo
    PUSH 0x5                            ; 004087ab
    ADD EAX,0x28                        ; 004087ad
    PUSH EAX                            ; 004087b0
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004087b1
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    LEA EBX,[EAX + 0xfffffeac]          ; 004087b6
    MOV dword ptr [EBX + 0x2b0],0x5f2184 ; 004087bc | g_CDemonActorVTable
    MOV byte ptr [EBX],0x0              ; 004087c6
    MOV dword ptr [EBX + 0x14c],0x0     ; 004087c9
    LEA EAX,[EBX + 0x20]                ; 004087d3
    MOV dword ptr [EBX + 0x150],0x0     ; 004087d6
    MOV dword ptr [EAX + 0x8],0x0       ; 004087e0
    ADD ESP,0xc                         ; 004087e7
    MOV EDX,dword ptr [EAX + 0x8]       ; 004087ea
    MOV dword ptr [EAX + 0x4],EDX       ; 004087ed
    MOV EDX,dword ptr [EAX + 0x4]       ; 004087f0
    MOV dword ptr [EAX],EDX             ; 004087f3
    LEA EAX,[EBX + 0x30]                ; 004087f5
    MOV dword ptr [EBX + 0x2c],0x0      ; 004087f8
    MOV ESI,0x5ca42a                    ; 004087ff | DAT_005ca42a
    MOV dword ptr [EAX + 0x8],0x0       ; 00408804
    PUSH EBX                            ; 0040880b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040880c
    MOV dword ptr [EAX + 0x4],EDX       ; 0040880f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00408812
    MOV dword ptr [EAX],EDX             ; 00408815
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 00408817
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040881c
    LEA EDI,[EBX + 0x78]                ; 0040881f
    MOV dword ptr [EBX + 0x74],0x3f800000 ; 00408822
    PUSH EDI                            ; 00408829
    MOV AL,byte ptr [ESI]               ; 0040882a | DAT_005ca42a | DAT_005ca42c
        ;   Label: LAB_0040882a
    MOV byte ptr [EDI],AL               ; 0040882c
    CMP AL,0x0                          ; 0040882e
    JZ 0x00408842                       ; 00408830
        ;   XREF to: 00408842 (CONDITIONAL_JUMP)  ; LAB_00408842
    MOV AL,byte ptr [ESI + 0x1]         ; 00408832 | DAT_005ca42b | DAT_005ca42d
    ADD ESI,0x2                         ; 00408835
    MOV byte ptr [EDI + 0x1],AL         ; 00408838
    ADD EDI,0x2                         ; 0040883b
    CMP AL,0x0                          ; 0040883e
    JNZ 0x0040882a                      ; 00408840
        ;   XREF to: 0040882a (CONDITIONAL_JUMP)  ; LAB_0040882a
    POP EDI                             ; 00408842
        ;   Label: LAB_00408842
    MOV dword ptr [EBX + 0x70],0x0      ; 00408843
    LEA EAX,[EBX + 0xe0]                ; 0040884a
    MOV dword ptr [EBX + 0xdc],0x0      ; 00408850
    MOV dword ptr [EAX + 0x8],0x0       ; 0040885a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00408861
    MOV dword ptr [EAX + 0x4],EDX       ; 00408864
    MOV EDX,dword ptr [EAX + 0x4]       ; 00408867
    MOV dword ptr [EAX],EDX             ; 0040886a
    LEA EAX,[EBX + 0xec]                ; 0040886c
    MOV dword ptr [EAX + 0x8],0x0       ; 00408872
    MOV EDX,dword ptr [EAX + 0x8]       ; 00408879
    MOV dword ptr [EAX + 0x4],EDX       ; 0040887c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040887f
    MOV dword ptr [EAX],EDX             ; 00408882
    MOV dword ptr [EBX + 0x108],0x10000 ; 00408884
    MOV dword ptr [EBX + 0x10c],0x10000 ; 0040888e
    MOV dword ptr [EBX + 0x110],0x10000 ; 00408898
    MOV dword ptr [EBX + 0xf8],0x1      ; 004088a2
    MOV dword ptr [EBX + 0xfc],0x0      ; 004088ac
    MOV dword ptr [EBX + 0x114],0x0     ; 004088b6
    MOV dword ptr [EBX + 0x100],0x0     ; 004088c0
    MOV dword ptr [EBX + 0x104],0x0     ; 004088ca
    MOV ESI,0x5ca42f                    ; 004088d4 | DAT_005ca42f
    MOV dword ptr [EBX + 0x64],0x64     ; 004088d9
    LEA EDI,[EBX + 0x120]               ; 004088e0
    MOV dword ptr [EBX + 0x68],0x78a123 ; 004088e6 | DAT_0078a123
    PUSH EDI                            ; 004088ed
    MOV AL,byte ptr [ESI]               ; 004088ee | DAT_005ca42f | DAT_005ca431
        ;   Label: LAB_004088ee
    MOV byte ptr [EDI],AL               ; 004088f0
    CMP AL,0x0                          ; 004088f2
    JZ 0x00408906                       ; 004088f4
        ;   XREF to: 00408906 (CONDITIONAL_JUMP)  ; LAB_00408906
    MOV AL,byte ptr [ESI + 0x1]         ; 004088f6 | DAT_005ca430 | DAT_005ca432
    ADD ESI,0x2                         ; 004088f9
    MOV byte ptr [EDI + 0x1],AL         ; 004088fc
    ADD EDI,0x2                         ; 004088ff
    CMP AL,0x0                          ; 00408902
    JNZ 0x004088ee                      ; 00408904
        ;   XREF to: 004088ee (CONDITIONAL_JUMP)  ; LAB_004088ee
    POP EDI                             ; 00408906
        ;   Label: LAB_00408906
    MOV dword ptr [EBX + 0x2a8],0x3dcccccd ; 00408907
    MOV EAX,EBX                         ; 00408911
    MOV dword ptr [EBX + 0x2ac],0x1     ; 00408913
    POP EDI                             ; 0040891d
    POP ESI                             ; 0040891e
    POP EBX                             ; 0040891f
    RET                                 ; 00408920

