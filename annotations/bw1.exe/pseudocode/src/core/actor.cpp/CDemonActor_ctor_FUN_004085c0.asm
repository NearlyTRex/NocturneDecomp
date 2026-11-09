; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_actor_cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[49]:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0 at 0040dbc8
;   core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e0b0 at 0040e0b8
;   core_anvil.cpp_CAnvil_ctor_FUN_0040e5d0 at 0040e5d8
;   core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040eeb0 at 0040eeb6
;   core_barrier.cpp_CBarrier_ctor_FUN_00410830 at 00410835
;   core_bat.cpp_CBat_ctor_FUN_00410b50 at 00410b58
;   core_battery.cpp_CBattery_ctor_FUN_00414410 at 00414416
;   core_bodypart.cpp_CBodyPart_ctor_FUN_00418b40 at 00418b45
;   core_boxactor.cpp_CBoxActor_ctor_FUN_00421ca0 at 00421ca6
;   core_chain.cpp_CChain_ctor_FUN_00435660 at 00435667
;   ... and 39 more
;
; Referenced Globals:
;   TerminatedCString s_none_005d2395
;   undefined4 s_one_005d2395+1
;   undefined4 s_ne_005d2395+2
;   undefined4 s_e_005d2395+3
;   TerminatedCString s_str_005d239a
;   undefined4 s_tr_005d239a+1
;   undefined4 s_r_005d239a+2
;   undefined4 s__005d239a+3
;   void* g_CDemonActorVTable = 00408850
;   undefined4 DAT_0078a123
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_initTransformCache_FUN_00408580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004085c0
        ;   Label: core_actor.cpp_CDemonActor_ctor_FUN_004085c0
    PUSH ESI                            ; 004085c1
    PUSH EDI                            ; 004085c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004085c3
    ADD EBX,0x12c                       ; 004085c7
    PUSH EBX                            ; 004085cd
    CALL core_actor.cpp_initTransformCache_FUN_00408580 ; 004085ce
        ;   XREF to: 00408580 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_initTransformCache_FUN_00408580()
    LEA EBX,[EAX + 0xfffffed4]          ; 004085d3
    MOV dword ptr [EBX + 0x154],0x5fb334 ; 004085d9 | g_CDemonActorVTable
    MOV byte ptr [EBX],0x0              ; 004085e3
    MOV dword ptr [EBX + 0x14c],0x0     ; 004085e6
    LEA EAX,[EBX + 0x20]                ; 004085f0
    MOV dword ptr [EBX + 0x150],0x0     ; 004085f3
    MOV dword ptr [EAX + 0x8],0x0       ; 004085fd
    ADD ESP,0x4                         ; 00408604
    MOV EDX,dword ptr [EAX + 0x8]       ; 00408607
    MOV dword ptr [EAX + 0x4],EDX       ; 0040860a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040860d
    MOV dword ptr [EAX],EDX             ; 00408610
    LEA EAX,[EBX + 0x30]                ; 00408612
    MOV dword ptr [EBX + 0x2c],0x0      ; 00408615
    MOV ESI,0x5d2395                    ; 0040861c | = "none"
    MOV dword ptr [EAX + 0x8],0x0       ; 00408621
    PUSH EBX                            ; 00408628
    MOV EDX,dword ptr [EAX + 0x8]       ; 00408629
    MOV dword ptr [EAX + 0x4],EDX       ; 0040862c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040862f
    MOV dword ptr [EAX],EDX             ; 00408632
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 00408634
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00408639
    LEA EDI,[EBX + 0x78]                ; 0040863c
    MOV dword ptr [EBX + 0x74],0x3f800000 ; 0040863f
    PUSH EDI                            ; 00408646
    MOV AL,byte ptr [ESI]               ; 00408647 | = "none" | s_ne_005d2395+2
        ;   Label: LAB_00408647
    MOV byte ptr [EDI],AL               ; 00408649
    CMP AL,0x0                          ; 0040864b
    JZ 0x0040865f                       ; 0040864d
        ;   XREF to: 0040865f (CONDITIONAL_JUMP)  ; LAB_0040865f
    MOV AL,byte ptr [ESI + 0x1]         ; 0040864f | s_one_005d2395+1 | s_e_005d2395+3
    ADD ESI,0x2                         ; 00408652
    MOV byte ptr [EDI + 0x1],AL         ; 00408655
    ADD EDI,0x2                         ; 00408658
    CMP AL,0x0                          ; 0040865b
    JNZ 0x00408647                      ; 0040865d
        ;   XREF to: 00408647 (CONDITIONAL_JUMP)  ; LAB_00408647
    POP EDI                             ; 0040865f
        ;   Label: LAB_0040865f
    MOV dword ptr [EBX + 0x70],0x0      ; 00408660
    LEA EAX,[EBX + 0xe0]                ; 00408667
    MOV dword ptr [EBX + 0xdc],0x0      ; 0040866d
    MOV dword ptr [EAX + 0x8],0x0       ; 00408677
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040867e
    MOV dword ptr [EAX + 0x4],EDX       ; 00408681
    MOV EDX,dword ptr [EAX + 0x4]       ; 00408684
    MOV dword ptr [EAX],EDX             ; 00408687
    LEA EAX,[EBX + 0xec]                ; 00408689
    MOV dword ptr [EAX + 0x8],0x0       ; 0040868f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00408696
    MOV dword ptr [EAX + 0x4],EDX       ; 00408699
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040869c
    MOV dword ptr [EAX],EDX             ; 0040869f
    MOV dword ptr [EBX + 0x108],0x10000 ; 004086a1
    MOV dword ptr [EBX + 0x10c],0x10000 ; 004086ab
    MOV dword ptr [EBX + 0x110],0x10000 ; 004086b5
    MOV dword ptr [EBX + 0xf8],0x1      ; 004086bf
    MOV dword ptr [EBX + 0xfc],0x0      ; 004086c9
    MOV dword ptr [EBX + 0x114],0x0     ; 004086d3
    MOV dword ptr [EBX + 0x100],0x0     ; 004086dd
    MOV dword ptr [EBX + 0x104],0x0     ; 004086e7
    MOV ESI,0x5d239a                    ; 004086f1 | = "str"
    MOV dword ptr [EBX + 0x64],0x64     ; 004086f6
    LEA EDI,[EBX + 0x120]               ; 004086fd
    MOV dword ptr [EBX + 0x68],0x78a123 ; 00408703 | DAT_0078a123
    PUSH EDI                            ; 0040870a
    MOV AL,byte ptr [ESI]               ; 0040870b | = "str" | s_r_005d239a+2
        ;   Label: LAB_0040870b
    MOV byte ptr [EDI],AL               ; 0040870d
    CMP AL,0x0                          ; 0040870f
    JZ 0x00408723                       ; 00408711
        ;   XREF to: 00408723 (CONDITIONAL_JUMP)  ; LAB_00408723
    MOV AL,byte ptr [ESI + 0x1]         ; 00408713 | s_tr_005d239a+1 | s__005d239a+3
    ADD ESI,0x2                         ; 00408716
    MOV byte ptr [EDI + 0x1],AL         ; 00408719
    ADD EDI,0x2                         ; 0040871c
    CMP AL,0x0                          ; 0040871f
    JNZ 0x0040870b                      ; 00408721
        ;   XREF to: 0040870b (CONDITIONAL_JUMP)  ; LAB_0040870b
    POP EDI                             ; 00408723
        ;   Label: LAB_00408723
    MOV EAX,EBX                         ; 00408724
    POP EDI                             ; 00408726
    POP ESI                             ; 00408727
    POP EBX                             ; 00408728
    RET                                 ; 00408729

