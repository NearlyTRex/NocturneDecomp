; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_actor_cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[48]:
;   core_ammo.cpp_CAmmo_ctor_FUN_00410dc0 at 00410dc8
;   core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0 at 004115a8
;   core_anvil.cpp_CAnvil_ctor_FUN_00411ce0 at 00411ce8
;   core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0 at 004127b6
;   core_barrier.cpp_CBarrier_ctor_FUN_004141c0 at 004141c5
;   core_bat.cpp_CBat_ctor_FUN_004147d0 at 004147d8
;   core_battery.cpp_CBattery_ctor_FUN_00417e90 at 00417e96
;   core_bodypart.cpp_CBodyPart_ctor_FUN_00419010 at 00419015
;   core_boxactor.cpp_CBoxActor_ctor_FUN_00421700 at 00421706
;   core_chain.cpp_CChain_ctor_FUN_0042fb80 at 0042fb87
;   ... and 38 more
;
; Referenced Globals:
;   TerminatedCString s_none_00613578
;   undefined4 DAT_00613579
;   undefined4 DAT_0061357a
;   undefined4 s_e_0061357b
;   TerminatedCString s_str_0061357d
;   undefined4 DAT_0061357e
;   undefined4 DAT_0061357f
;   undefined4 s__00613580
;   CDemonActor_vtable g_CDemonActorVTable
;   int g_ActorMagicNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_initTransformCache_FUN_00408870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004088b0
        ;   Label: core_actor.cpp_CDemonActor_ctor_FUN_004088b0
    PUSH ESI                            ; 004088b1
    PUSH EDI                            ; 004088b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004088b3
    ADD EBX,0x128                       ; 004088b7
    PUSH EBX                            ; 004088bd
    CALL core_actor.cpp_initTransformCache_FUN_00408870 ; 004088be
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; CDemonActorTransformState * core_actor.cpp_initTransformCache_FUN_00408870(CDemonActorTransformState * transform_cache)
    LEA EBX,[EAX + 0xfffffed8]          ; 004088c3
    MOV dword ptr [EBX + 0x154],0x6597d4 ; 004088c9 | g_CDemonActorVTable
    MOV byte ptr [EBX],0x0              ; 004088d3
    MOV dword ptr [EBX + 0x14c],0x0     ; 004088d6
    LEA EAX,[EBX + 0x20]                ; 004088e0
    MOV dword ptr [EBX + 0x150],0x0     ; 004088e3
    MOV dword ptr [EAX + 0x8],0x0       ; 004088ed
    ADD ESP,0x4                         ; 004088f4
    MOV EDX,dword ptr [EAX + 0x8]       ; 004088f7
    MOV dword ptr [EAX + 0x4],EDX       ; 004088fa
    MOV EDX,dword ptr [EAX + 0x4]       ; 004088fd
    MOV dword ptr [EAX],EDX             ; 00408900
    LEA EAX,[EBX + 0x30]                ; 00408902
    MOV dword ptr [EBX + 0x2c],0x0      ; 00408905
    MOV ESI,0x613578                    ; 0040890c | = "none"
    MOV dword ptr [EAX + 0x8],0x0       ; 00408911
    PUSH EBX                            ; 00408918
    MOV EDX,dword ptr [EAX + 0x8]       ; 00408919
    MOV dword ptr [EAX + 0x4],EDX       ; 0040891c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040891f
    MOV dword ptr [EAX],EDX             ; 00408922
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 00408924
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00408929
    LEA EDI,[EBX + 0x78]                ; 0040892c
    MOV dword ptr [EBX + 0x74],0x3f800000 ; 0040892f
    PUSH EDI                            ; 00408936
    MOV AL,byte ptr [ESI]               ; 00408937 | = "none" | DAT_0061357a
        ;   Label: LAB_00408937
    MOV byte ptr [EDI],AL               ; 00408939
    CMP AL,0x0                          ; 0040893b
    JZ 0x0040894f                       ; 0040893d
        ;   XREF to: 0040894f (CONDITIONAL_JUMP)  ; LAB_0040894f
    MOV AL,byte ptr [ESI + 0x1]         ; 0040893f | DAT_00613579 | s_e_0061357b
    ADD ESI,0x2                         ; 00408942
    MOV byte ptr [EDI + 0x1],AL         ; 00408945
    ADD EDI,0x2                         ; 00408948
    CMP AL,0x0                          ; 0040894b
    JNZ 0x00408937                      ; 0040894d
        ;   XREF to: 00408937 (CONDITIONAL_JUMP)  ; LAB_00408937
    POP EDI                             ; 0040894f
        ;   Label: LAB_0040894f
    MOV dword ptr [EBX + 0x70],0x0      ; 00408950
    LEA EAX,[EBX + 0xe0]                ; 00408957
    MOV dword ptr [EBX + 0xdc],0x0      ; 0040895d
    MOV dword ptr [EAX + 0x8],0x0       ; 00408967
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040896e
    MOV dword ptr [EAX + 0x4],EDX       ; 00408971
    MOV EDX,dword ptr [EAX + 0x4]       ; 00408974
    MOV dword ptr [EAX],EDX             ; 00408977
    LEA EAX,[EBX + 0xec]                ; 00408979
    MOV dword ptr [EAX + 0x8],0x0       ; 0040897f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00408986
    MOV dword ptr [EAX + 0x4],EDX       ; 00408989
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040898c
    MOV dword ptr [EAX],EDX             ; 0040898f
    MOV dword ptr [EBX + 0x108],0x10000 ; 00408991
    MOV dword ptr [EBX + 0x10c],0x10000 ; 0040899b
    MOV dword ptr [EBX + 0x110],0x10000 ; 004089a5
    MOV dword ptr [EBX + 0xf8],0x1      ; 004089af
    MOV dword ptr [EBX + 0xfc],0x0      ; 004089b9
    MOV dword ptr [EBX + 0x114],0x0     ; 004089c3
    MOV dword ptr [EBX + 0x100],0x0     ; 004089cd
    MOV dword ptr [EBX + 0x104],0x0     ; 004089d7
    MOV dword ptr [EBX + 0x64],0x64     ; 004089e1
    MOV ESI,0x61357d                    ; 004089e8 | = "str"
    MOV dword ptr [EBX + 0x148],0x0     ; 004089ed
    LEA EDI,[EBX + 0x11c]               ; 004089f7
    MOV dword ptr [EBX + 0x68],0x78a123 ; 004089fd | g_ActorMagicNumber
    PUSH EDI                            ; 00408a04
    MOV AL,byte ptr [ESI]               ; 00408a05 | = "str" | DAT_0061357f
        ;   Label: LAB_00408a05
    MOV byte ptr [EDI],AL               ; 00408a07
    CMP AL,0x0                          ; 00408a09
    JZ 0x00408a1d                       ; 00408a0b
        ;   XREF to: 00408a1d (CONDITIONAL_JUMP)  ; LAB_00408a1d
    MOV AL,byte ptr [ESI + 0x1]         ; 00408a0d | DAT_0061357e | s__00613580
    ADD ESI,0x2                         ; 00408a10
    MOV byte ptr [EDI + 0x1],AL         ; 00408a13
    ADD EDI,0x2                         ; 00408a16
    CMP AL,0x0                          ; 00408a19
    JNZ 0x00408a05                      ; 00408a1b
        ;   XREF to: 00408a05 (CONDITIONAL_JUMP)  ; LAB_00408a05
    POP EDI                             ; 00408a1d
        ;   Label: LAB_00408a1d
    MOV EAX,EBX                         ; 00408a1e
    POP EDI                             ; 00408a20
    POP ESI                             ; 00408a21
    POP EBX                             ; 00408a22
    RET                                 ; 00408a23

