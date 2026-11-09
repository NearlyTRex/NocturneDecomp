; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_actor_cpp_CDemonActor_ctor_FUN_00408600(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[43]:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040de60 at 0040de68
;   core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e5c0 at 0040e5c8
;   core_barrier.cpp_CBarrier_ctor_FUN_0040eac0 at 0040eac5
;   core_bat.cpp_CBat_ctor_FUN_0040ede0 at 0040ede8
;   core_battery.cpp_CBattery_ctor_FUN_0040f4a0 at 0040f4a6
;   core_bodypart.cpp_CBodyPart_ctor_FUN_00414750 at 00414755
;   core_boxactor.cpp_CBoxActor_ctor_FUN_0041efe0 at 0041efe6
;   core_chain.cpp_CChain_ctor_FUN_004292e0 at 004292e7
;   core_charactr.cpp_CCharacter_ctor_FUN_0042ac20 at 0042ac2c
;   core_crate.cpp_CCrate_ctor_FUN_00445bd0 at 00445bd6
;   ... and 33 more
;
; Referenced Globals:
;   undefined1 DAT_005b53cd
;   undefined1 DAT_005b53ce
;   undefined1 DAT_005b53cf
;   undefined1 DAT_005b53d0
;   undefined1 DAT_005b53d2
;   undefined1 DAT_005b53d3
;   undefined1 DAT_005b53d4
;   undefined1 DAT_005b53d5
;   void* g_CDemonActorVTable = 00408890
;   undefined4 DAT_0078a123
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_actor.cpp_initTransformCache_FUN_004085c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408600
        ;   Label: core_actor.cpp_CDemonActor_ctor_FUN_00408600
    PUSH ESI                            ; 00408601
    PUSH EDI                            ; 00408602
    MOV EBX,dword ptr [ESP + 0x10]      ; 00408603
    ADD EBX,0x12c                       ; 00408607
    PUSH EBX                            ; 0040860d
    CALL core_actor.cpp_initTransformCache_FUN_004085c0 ; 0040860e
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_initTransformCache_FUN_004085c0()
    LEA EBX,[EAX + 0xfffffed4]          ; 00408613
    MOV dword ptr [EBX + 0x154],0x5daff4 ; 00408619 | g_CDemonActorVTable
    MOV byte ptr [EBX],0x0              ; 00408623
    MOV dword ptr [EBX + 0x14c],0x0     ; 00408626
    LEA EAX,[EBX + 0x20]                ; 00408630
    MOV dword ptr [EBX + 0x150],0x0     ; 00408633
    MOV dword ptr [EAX + 0x8],0x0       ; 0040863d
    ADD ESP,0x4                         ; 00408644
    MOV EDX,dword ptr [EAX + 0x8]       ; 00408647
    MOV dword ptr [EAX + 0x4],EDX       ; 0040864a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040864d
    MOV dword ptr [EAX],EDX             ; 00408650
    LEA EAX,[EBX + 0x30]                ; 00408652
    MOV dword ptr [EBX + 0x2c],0x0      ; 00408655
    MOV ESI,0x5b53cd                    ; 0040865c | DAT_005b53cd
    MOV dword ptr [EAX + 0x8],0x0       ; 00408661
    PUSH EBX                            ; 00408668
    MOV EDX,dword ptr [EAX + 0x8]       ; 00408669
    MOV dword ptr [EAX + 0x4],EDX       ; 0040866c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040866f
    MOV dword ptr [EAX],EDX             ; 00408672
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 00408674
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00408679
    LEA EDI,[EBX + 0x78]                ; 0040867c
    MOV dword ptr [EBX + 0x74],0x3f800000 ; 0040867f
    PUSH EDI                            ; 00408686
    MOV AL,byte ptr [ESI]               ; 00408687 | DAT_005b53cd | DAT_005b53cf
        ;   Label: LAB_00408687
    MOV byte ptr [EDI],AL               ; 00408689
    CMP AL,0x0                          ; 0040868b
    JZ 0x0040869f                       ; 0040868d
        ;   XREF to: 0040869f (CONDITIONAL_JUMP)  ; LAB_0040869f
    MOV AL,byte ptr [ESI + 0x1]         ; 0040868f | DAT_005b53ce | DAT_005b53d0
    ADD ESI,0x2                         ; 00408692
    MOV byte ptr [EDI + 0x1],AL         ; 00408695
    ADD EDI,0x2                         ; 00408698
    CMP AL,0x0                          ; 0040869b
    JNZ 0x00408687                      ; 0040869d
        ;   XREF to: 00408687 (CONDITIONAL_JUMP)  ; LAB_00408687
    POP EDI                             ; 0040869f
        ;   Label: LAB_0040869f
    MOV dword ptr [EBX + 0x70],0x0      ; 004086a0
    LEA EAX,[EBX + 0xe0]                ; 004086a7
    MOV dword ptr [EBX + 0xdc],0x0      ; 004086ad
    MOV dword ptr [EAX + 0x8],0x0       ; 004086b7
    MOV EDX,dword ptr [EAX + 0x8]       ; 004086be
    MOV dword ptr [EAX + 0x4],EDX       ; 004086c1
    MOV EDX,dword ptr [EAX + 0x4]       ; 004086c4
    MOV dword ptr [EAX],EDX             ; 004086c7
    LEA EAX,[EBX + 0xec]                ; 004086c9
    MOV dword ptr [EAX + 0x8],0x0       ; 004086cf
    MOV EDX,dword ptr [EAX + 0x8]       ; 004086d6
    MOV dword ptr [EAX + 0x4],EDX       ; 004086d9
    MOV EDX,dword ptr [EAX + 0x4]       ; 004086dc
    MOV dword ptr [EAX],EDX             ; 004086df
    MOV dword ptr [EBX + 0x108],0x10000 ; 004086e1
    MOV dword ptr [EBX + 0x10c],0x10000 ; 004086eb
    MOV dword ptr [EBX + 0x110],0x10000 ; 004086f5
    MOV dword ptr [EBX + 0xf8],0x1      ; 004086ff
    MOV dword ptr [EBX + 0xfc],0x0      ; 00408709
    MOV dword ptr [EBX + 0x114],0x0     ; 00408713
    MOV dword ptr [EBX + 0x100],0x0     ; 0040871d
    MOV dword ptr [EBX + 0x104],0x0     ; 00408727
    MOV ESI,0x5b53d2                    ; 00408731 | DAT_005b53d2
    MOV dword ptr [EBX + 0x64],0x64     ; 00408736
    LEA EDI,[EBX + 0x120]               ; 0040873d
    MOV dword ptr [EBX + 0x68],0x78a123 ; 00408743 | DAT_0078a123
    PUSH EDI                            ; 0040874a
    MOV AL,byte ptr [ESI]               ; 0040874b | DAT_005b53d2 | DAT_005b53d4
        ;   Label: LAB_0040874b
    MOV byte ptr [EDI],AL               ; 0040874d
    CMP AL,0x0                          ; 0040874f
    JZ 0x00408763                       ; 00408751
        ;   XREF to: 00408763 (CONDITIONAL_JUMP)  ; LAB_00408763
    MOV AL,byte ptr [ESI + 0x1]         ; 00408753 | DAT_005b53d3 | DAT_005b53d5
    ADD ESI,0x2                         ; 00408756
    MOV byte ptr [EDI + 0x1],AL         ; 00408759
    ADD EDI,0x2                         ; 0040875c
    CMP AL,0x0                          ; 0040875f
    JNZ 0x0040874b                      ; 00408761
        ;   XREF to: 0040874b (CONDITIONAL_JUMP)  ; LAB_0040874b
    POP EDI                             ; 00408763
        ;   Label: LAB_00408763
    MOV EAX,EBX                         ; 00408764
    POP EDI                             ; 00408766
    POP ESI                             ; 00408767
    POP EBX                             ; 00408768
    RET                                 ; 00408769

