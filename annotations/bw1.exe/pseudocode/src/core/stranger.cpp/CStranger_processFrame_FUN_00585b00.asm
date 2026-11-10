; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_processFrame_FUN_00585b00(CStranger *this_ptr,float delta_time)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x404]:1  local_404
; undefined        Stack[-0x3ec]:1  local_3ec
; undefined4       Stack[-0x34]:4  local_34
;
; XREF[1]:
;   core_stranger.cpp_CStranger_process_FUN_00585a10 at 00585a53
;
; Referenced Globals:
;   void* switchdataD_00585ae0 = 00587851
;   undefined4 s_DebugActionPending_005f6718+1
;   TerminatedCString s_grabbedBy_s_005f672c
;   TerminatedCString s_pushedObject_s_005f673a
;   TerminatedCString s_ladder_005f674b
;   TerminatedCString s_pickup_005f6753
;   TerminatedCString s_hurt_005f675b
;   TerminatedCString s_door_005f6761
;   TerminatedCString s_sitting_005f6767
;   TerminatedCString s_stashinventory_005f6770
;   TerminatedCString s_placeobject_005f6780
;   TerminatedCString s_putdownobject_005f678d
;   TerminatedCString s_toss_005f679c
;   TerminatedCString s_attackmelee_005f67a2
;   TerminatedCString s_s_confused_while_walking_005f67af
;   ... and 49 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e1a0
;   core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_00422ab0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_00433d50
;   core_charactr.cpp_FUN_00434790
;   core_charactr.cpp_FUN_00435320
;   ... and 36 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585b00
        ;   Label: core_stranger.cpp_CStranger_processFrame_FUN_00585b00
    PUSH ESI                            ; 00585b01
    PUSH EDI                            ; 00585b02
    PUSH EBP                            ; 00585b03
    MOV EBP,ESP                         ; 00585b04
    SUB ESP,0x484                       ; 00585b06
    AND ESP,0xfffffff8                  ; 00585b0c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00585b0f
    PUSH 0x5f6719                       ; 00585b12 | s_DebugActionPending_005f6718+1
    MOV EDX,dword ptr [0x0061b4d0]      ; 00585b17 | DAT_0061b4d0
    PUSH EDX                            ; 00585b1d
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00585b1e
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00585b23
    MOV ECX,dword ptr [EBX + 0x2628]    ; 00585b26
    MOV dword ptr [ESP + 0x464],EAX     ; 00585b2c
    TEST ECX,ECX                        ; 00585b33
    JZ 0x00585cde                       ; 00585b35
        ;   XREF to: 00585cde (CONDITIONAL_JUMP)  ; LAB_00585cde
    FLD float ptr [EBX + 0x20084]       ; 00585b3b
    FCOMP float ptr [0x005f6841]        ; 00585b41 | DAT_005f6841
    FNSTSW AX                           ; 00585b47
    SAHF                                ; 00585b49
    JNC 0x00585cde                      ; 00585b4a
        ;   XREF to: 00585cde (CONDITIONAL_JUMP)  ; LAB_00585cde
    PUSH ECX                            ; 00585b50
    MOV EDX,dword ptr [ECX + 0x154]     ; 00585b51
    LEA ESI,[ESP + 0xb0]                ; 00585b57
    LEA EDI,[ESP + 0x98]                ; 00585b5e
    CALL dword ptr [EDX + 0x1c]         ; 00585b65
    MOV ECX,0x6                         ; 00585b68
    LEA ESI,[ESP + 0xb0]                ; 00585b6d
    ADD ESP,0x4                         ; 00585b74
    MOVSD.REP ES:EDI,ESI                ; 00585b77
    LEA EDX,[EBX + 0x20078]             ; 00585b79
    LEA ECX,[ESP + 0x94]                ; 00585b7f
    MOV ESI,EDX                         ; 00585b86
    CMP EDX,ECX                         ; 00585b88
    JZ 0x00585ba9                       ; 00585b8a
        ;   XREF to: 00585ba9 (CONDITIONAL_JUMP)  ; LAB_00585ba9
    MOV EAX,dword ptr [ESP + 0x94]      ; 00585b8c
    MOV dword ptr [EDX],EAX             ; 00585b93
    MOV EAX,dword ptr [ESP + 0x98]      ; 00585b95
    MOV dword ptr [EDX + 0x4],EAX       ; 00585b9c
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00585b9f
    MOV dword ptr [EDX + 0x8],EAX       ; 00585ba6
    LEA EAX,[ECX + 0xc]                 ; 00585ba9
        ;   Label: LAB_00585ba9
    LEA EDX,[ESI + 0xc]                 ; 00585bac
    CMP EDX,EAX                         ; 00585baf
    JZ 0x00585bc3                       ; 00585bb1
        ;   XREF to: 00585bc3 (CONDITIONAL_JUMP)  ; LAB_00585bc3
    MOV ECX,dword ptr [EAX]             ; 00585bb3
    MOV dword ptr [EDX],ECX             ; 00585bb5
    MOV ECX,dword ptr [EAX + 0x4]       ; 00585bb7
    MOV dword ptr [EDX + 0x4],ECX       ; 00585bba
    MOV ECX,dword ptr [EAX + 0x8]       ; 00585bbd
    MOV dword ptr [EDX + 0x8],ECX       ; 00585bc0
    LEA EDX,[EBX + 0x20078]             ; 00585bc3
        ;   Label: LAB_00585bc3
    LEA EDI,[ESP + 0x370]               ; 00585bc9
    LEA ESI,[ESP + 0xf4]                ; 00585bd0
    FLD float ptr [EDX]                 ; 00585bd7
    FLD float ptr [EDX + 0x4]           ; 00585bd9
    LEA EAX,[EBX + 0x20084]             ; 00585bdc
    FLD float ptr [EDX + 0x8]           ; 00585be2
    FXCH ST2                            ; 00585be5
    FADD float ptr [EAX]                ; 00585be7
    FXCH                                ; 00585be9
    FADD float ptr [EAX + 0x4]          ; 00585beb
    FXCH ST2                            ; 00585bee
    FADD float ptr [EAX + 0x8]          ; 00585bf0
    FXCH                                ; 00585bf3
    FSTP float ptr [ESP + 0xf4]         ; 00585bf5
    FXCH                                ; 00585bfc
    FSTP float ptr [ESP + 0xf8]         ; 00585bfe
    FSTP float ptr [ESP + 0xfc]         ; 00585c05
    MOVSD ES:EDI,ESI                    ; 00585c0c
    MOVSD ES:EDI,ESI                    ; 00585c0d
    MOVSD ES:EDI,ESI                    ; 00585c0e
    FLD float ptr [0x005f6845]          ; 00585c0f | DAT_005f6845
    FLD float ptr [ESP + 0x370]         ; 00585c15
    FMUL ST1                            ; 00585c1c
    FLD float ptr [ESP + 0x374]         ; 00585c1e
    FMUL ST2                            ; 00585c25
    FLD float ptr [ESP + 0x378]         ; 00585c27
    FMULP ST3                           ; 00585c2e
    LEA EAX,[ESP + 0x1cc]               ; 00585c30
    LEA EDI,[ESP + 0x1cc]               ; 00585c37
    LEA ESI,[ESP + 0x328]               ; 00585c3e
    FXCH                                ; 00585c45
    FSTP float ptr [ESP + 0x328]        ; 00585c47
    FSTP float ptr [ESP + 0x32c]        ; 00585c4e
    FSTP float ptr [ESP + 0x330]        ; 00585c55
    MOVSD ES:EDI,ESI                    ; 00585c5c
    MOVSD ES:EDI,ESI                    ; 00585c5d
    MOVSD ES:EDI,ESI                    ; 00585c5e
    PUSH EAX                            ; 00585c5f
    MOV ESI,dword ptr [EBX + 0x2628]    ; 00585c60
    PUSH ESI                            ; 00585c66
    LEA ESI,[ESP + 0x15c]               ; 00585c67
    LEA EDI,[ESP + 0x2dc]               ; 00585c6e
    CALL core_actor.cpp_FUN_00408b40    ; 00585c75
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00585c7a
    LEA EAX,[ESP + 0x2d4]               ; 00585c7d
    LEA ESI,[ESP + 0x154]               ; 00585c84
    PUSH EAX                            ; 00585c8b
    MOVSD ES:EDI,ESI                    ; 00585c8c
    MOVSD ES:EDI,ESI                    ; 00585c8d
    MOVSD ES:EDI,ESI                    ; 00585c8e
    PUSH EBX                            ; 00585c8f
    LEA ESI,[ESP + 0x138]               ; 00585c90
    LEA EDI,[ESP + 0x174]               ; 00585c97
    CALL core_actor.cpp_FUN_00408bb0    ; 00585c9e
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x138]               ; 00585ca3
    LEA EAX,[ESP + 0x174]               ; 00585caa
    ADD ESP,0x8                         ; 00585cb1
    LEA EDX,[EBX + 0x2006c]             ; 00585cb4
    MOVSD ES:EDI,ESI                    ; 00585cba
    MOVSD ES:EDI,ESI                    ; 00585cbb
    MOVSD ES:EDI,ESI                    ; 00585cbc
    CMP EDX,EAX                         ; 00585cbd
    JZ 0x00585cde                       ; 00585cbf
        ;   XREF to: 00585cde (CONDITIONAL_JUMP)  ; LAB_00585cde
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00585cc1
    MOV dword ptr [EDX],EAX             ; 00585cc8
    MOV EAX,dword ptr [ESP + 0x170]     ; 00585cca
    MOV dword ptr [EDX + 0x4],EAX       ; 00585cd1
    MOV EAX,dword ptr [ESP + 0x174]     ; 00585cd4
    MOV dword ptr [EDX + 0x8],EAX       ; 00585cdb
    PUSH dword ptr [EBP + 0x18]         ; 00585cde
        ;   Label: LAB_00585cde
    PUSH EBX                            ; 00585ce1
    CALL core_charactr.cpp_FUN_00434790 ; 00585ce2
        ;   XREF to: 00434790 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434790()
    ADD ESP,0x8                         ; 00585ce7
    MOV EDI,dword ptr [0x0061d95c]      ; 00585cea | g_CGamePtr
    PUSH dword ptr [EBP + 0x18]         ; 00585cf0
    PUSH EDI                            ; 00585cf3 | g_CGameInstance
    CALL core_game.cpp_CGame_slamDT_FUN_004d7f50 ; 00585cf4
        ;   XREF to: 004d7f50 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004d7f50(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00585cf9
    FLD float ptr [EBX + 0xc1d0]        ; 00585cfc
    FSUB float ptr [EBP + 0x18]         ; 00585d02
    FST float ptr [EBX + 0xc1d0]        ; 00585d05
    FLDZ                                ; 00585d0b
    FCOMPP                              ; 00585d0d
    FNSTSW AX                           ; 00585d0f
    SAHF                                ; 00585d11
    JBE 0x00585d1e                      ; 00585d12
        ;   XREF to: 00585d1e (CONDITIONAL_JUMP)  ; LAB_00585d1e
    MOV dword ptr [EBX + 0xc1d0],0x0    ; 00585d14
    FLD float ptr [EBX + 0x20014]       ; 00585d1e
        ;   Label: LAB_00585d1e
    FSUB float ptr [EBP + 0x18]         ; 00585d24
    FST float ptr [EBX + 0x20014]       ; 00585d27
    FLDZ                                ; 00585d2d
    FCOMPP                              ; 00585d2f
    FNSTSW AX                           ; 00585d31
    SAHF                                ; 00585d33
    JBE 0x00585d40                      ; 00585d34
        ;   XREF to: 00585d40 (CONDITIONAL_JUMP)  ; LAB_00585d40
    MOV dword ptr [EBX + 0x20014],0x0   ; 00585d36
    LEA EAX,[EBX + 0x249c]              ; 00585d40
        ;   Label: LAB_00585d40
    LEA ESI,[ESP + 0x160]               ; 00585d46
    LEA EDI,[ESP + 0x3dc]               ; 00585d4d
    MOV dword ptr [EAX + 0x8],0x0       ; 00585d54
    PUSH EBX                            ; 00585d5b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00585d5c
    MOV dword ptr [EAX + 0x4],EDX       ; 00585d5f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00585d62
    MOV dword ptr [EAX],EDX             ; 00585d65
    CALL core_stranger.cpp_FUN_00588a10 ; 00585d67
        ;   XREF to: 00588a10 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_00588a10()
    ADD ESP,0x4                         ; 00585d6c
    LEA EAX,[ESP + 0x3dc]               ; 00585d6f
    LEA ESI,[ESP + 0x160]               ; 00585d76
    PUSH EAX                            ; 00585d7d
    MOVSD ES:EDI,ESI                    ; 00585d7e
    MOVSD ES:EDI,ESI                    ; 00585d7f
    MOVSD ES:EDI,ESI                    ; 00585d80
    PUSH EBX                            ; 00585d81
    LEA ESI,[ESP + 0x294]               ; 00585d82
    LEA EDI,[ESP + 0x384]               ; 00585d89
    CALL core_actor.cpp_FUN_00408b40    ; 00585d90
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00585d95
    LEA ESI,[ESP + 0x28c]               ; 00585d98
    PUSH dword ptr [EBP + 0x18]         ; 00585d9f
    PUSH EBX                            ; 00585da2
    MOVSD ES:EDI,ESI                    ; 00585da3
    MOVSD ES:EDI,ESI                    ; 00585da4
    MOVSD ES:EDI,ESI                    ; 00585da5
    CALL core_stranger.cpp_FUN_005881d0 ; 00585da6
        ;   XREF to: 005881d0 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_005881d0()
    MOV EAX,0x1                         ; 00585dab
    ADD ESP,0x8                         ; 00585db0
    MOV dword ptr [ESP + 0x45c],EAX     ; 00585db3
    MOV dword ptr [ESP + 0x450],EAX     ; 00585dba
    MOV dword ptr [ESP + 0x44c],EAX     ; 00585dc1
    MOV dword ptr [ESP + 0x46c],EAX     ; 00585dc8
    MOV dword ptr [ESP + 0x468],EAX     ; 00585dcf
    MOV EAX,dword ptr [EBX + 0x26fc]    ; 00585dd6
    TEST EAX,EAX                        ; 00585ddc
    JZ 0x00585e24                       ; 00585dde
        ;   XREF to: 00585e24 (CONDITIONAL_JUMP)  ; LAB_00585e24
    XOR EDX,EDX                         ; 00585de0
    MOV dword ptr [ESP + 0x45c],EDX     ; 00585de2
    MOV dword ptr [ESP + 0x44c],EDX     ; 00585de9
    MOV dword ptr [ESP + 0x46c],EDX     ; 00585df0
    MOV dword ptr [ESP + 0x468],EDX     ; 00585df7
    MOV dword ptr [ESP + 0x450],EDX     ; 00585dfe
    CMP dword ptr [ESP + 0x464],0x0     ; 00585e05
    JZ 0x00585e24                       ; 00585e0d
        ;   XREF to: 00585e24 (CONDITIONAL_JUMP)  ; LAB_00585e24
    PUSH EAX                            ; 00585e0f
    PUSH 0x5f672c                       ; 00585e10 | = "grabbedBy=%s\n"
    MOV ESI,dword ptr [0x00611100]      ; 00585e15 | g_CConsolePtr
    PUSH ESI                            ; 00585e1b | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00585e1c
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 00585e21
    CMP dword ptr [EBX + 0x1ff7c],0x0   ; 00585e24
        ;   Label: LAB_00585e24
    JZ 0x00585e71                       ; 00585e2b
        ;   XREF to: 00585e71 (CONDITIONAL_JUMP)  ; LAB_00585e71
    XOR EAX,EAX                         ; 00585e2d
    MOV EDI,dword ptr [ESP + 0x464]     ; 00585e2f
    MOV dword ptr [ESP + 0x46c],EAX     ; 00585e36
    MOV dword ptr [ESP + 0x468],EAX     ; 00585e3d
    MOV dword ptr [ESP + 0x45c],EAX     ; 00585e44
    MOV dword ptr [ESP + 0x44c],EAX     ; 00585e4b
    TEST EDI,EDI                        ; 00585e52
    JZ 0x00585e71                       ; 00585e54
        ;   XREF to: 00585e71 (CONDITIONAL_JUMP)  ; LAB_00585e71
    MOV EAX,dword ptr [EBX + 0x1ff7c]   ; 00585e56
    PUSH EAX                            ; 00585e5c
    PUSH 0x5f673a                       ; 00585e5d | = "pushedObject=%s\n"
    MOV EDX,dword ptr [0x00611100]      ; 00585e62 | g_CConsolePtr
    PUSH EDX                            ; 00585e68 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00585e69
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 00585e6e
    CMP dword ptr [EBX + 0x1ff84],0x0   ; 00585e71
        ;   Label: LAB_00585e71
    JZ 0x005868cf                       ; 00585e78
        ;   XREF to: 005868cf (CONDITIONAL_JUMP)  ; LAB_005868cf
    XOR EDI,EDI                         ; 00585e7e
        ;   Label: LAB_00585e7e
    MOV dword ptr [ESP + 0x450],EDI     ; 00585e80
    MOV dword ptr [ESP + 0x44c],EDI     ; 00585e87
    MOV dword ptr [ESP + 0x46c],EDI     ; 00585e8e
    MOV dword ptr [ESP + 0x468],EDI     ; 00585e95
    MOV dword ptr [ESP + 0x45c],EDI     ; 00585e9c
    CMP dword ptr [ESP + 0x464],0x0     ; 00585ea3
    JZ 0x00585ec0                       ; 00585eab
        ;   XREF to: 00585ec0 (CONDITIONAL_JUMP)  ; LAB_00585ec0
    PUSH 0x5f674b                       ; 00585ead | = "ladder\n"
    MOV EAX,[0x00611100]                ; 00585eb2 | g_CConsolePtr
    PUSH EAX                            ; 00585eb7 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00585eb8
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 00585ebd
    CMP dword ptr [EBX + 0x1ff78],0x0   ; 00585ec0
        ;   Label: LAB_00585ec0
    JZ 0x005868e1                       ; 00585ec7
        ;   XREF to: 005868e1 (CONDITIONAL_JUMP)  ; LAB_005868e1
    XOR ESI,ESI                         ; 00585ecd
        ;   Label: LAB_00585ecd
    MOV EDX,dword ptr [ESP + 0x464]     ; 00585ecf
    MOV dword ptr [ESP + 0x46c],ESI     ; 00585ed6
    MOV dword ptr [ESP + 0x468],ESI     ; 00585edd
    MOV dword ptr [ESP + 0x45c],ESI     ; 00585ee4
    TEST EDX,EDX                        ; 00585eeb
    JZ 0x00585f03                       ; 00585eed
        ;   XREF to: 00585f03 (CONDITIONAL_JUMP)  ; LAB_00585f03
    PUSH 0x5f6753                       ; 00585eef | = "pickup\n"
    MOV ECX,dword ptr [0x00611100]      ; 00585ef4 | g_CConsolePtr
    PUSH ECX                            ; 00585efa | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00585efb
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 00585f00
    PUSH 0x31                           ; 00585f03
        ;   Label: LAB_00585f03
    LEA ESI,[EBX + 0x158]               ; 00585f05
    PUSH ESI                            ; 00585f0b
    CALL core_motion.cpp_FUN_00524a40   ; 00585f0c
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x488],EAX     ; 00585f11
    FLD float ptr [ESP + 0x488]         ; 00585f18
    FLDZ                                ; 00585f1f
    ADD ESP,0x8                         ; 00585f21
    FCOMPP                              ; 00585f24
    FNSTSW AX                           ; 00585f26
    SAHF                                ; 00585f28
    JNC 0x005868f3                      ; 00585f29
        ;   XREF to: 005868f3 (CONDITIONAL_JUMP)  ; LAB_005868f3
    XOR ESI,ESI                         ; 00585f2f
        ;   Label: LAB_00585f2f
    MOV ECX,dword ptr [ESP + 0x464]     ; 00585f31
    MOV dword ptr [ESP + 0x44c],ESI     ; 00585f38
    MOV dword ptr [ESP + 0x46c],ESI     ; 00585f3f
    MOV dword ptr [ESP + 0x468],ESI     ; 00585f46
    MOV dword ptr [ESP + 0x45c],ESI     ; 00585f4d
    TEST ECX,ECX                        ; 00585f54
    JZ 0x00585f6c                       ; 00585f56
        ;   XREF to: 00585f6c (CONDITIONAL_JUMP)  ; LAB_00585f6c
    PUSH 0x5f675b                       ; 00585f58 | = "hurt\n"
    MOV ESI,dword ptr [0x00611100]      ; 00585f5d | g_CConsolePtr
    PUSH ESI                            ; 00585f63 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00585f64
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 00585f69
    PUSH 0x27                           ; 00585f6c
        ;   Label: LAB_00585f6c
    LEA ESI,[EBX + 0x158]               ; 00585f6e
    PUSH ESI                            ; 00585f74
    CALL core_motion.cpp_FUN_00524a40   ; 00585f75
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x488],EAX     ; 00585f7a
    FLD float ptr [ESP + 0x488]         ; 00585f81
    FLDZ                                ; 00585f88
    ADD ESP,0x8                         ; 00585f8a
    FCOMPP                              ; 00585f8d
    FNSTSW AX                           ; 00585f8f
    SAHF                                ; 00585f91
    JNC 0x00586957                      ; 00585f92
        ;   XREF to: 00586957 (CONDITIONAL_JUMP)  ; LAB_00586957
    XOR EDX,EDX                         ; 00585f98
        ;   Label: LAB_00585f98
    MOV EDI,dword ptr [ESP + 0x464]     ; 00585f9a
    MOV dword ptr [ESP + 0x468],EDX     ; 00585fa1
    MOV dword ptr [ESP + 0x45c],EDX     ; 00585fa8
    MOV dword ptr [ESP + 0x46c],EDX     ; 00585faf
    TEST EDI,EDI                        ; 00585fb6
    JZ 0x00585fcd                       ; 00585fb8
        ;   XREF to: 00585fcd (CONDITIONAL_JUMP)  ; LAB_00585fcd
    PUSH 0x5f6761                       ; 00585fba | = "door\n"
    MOV EAX,[0x00611100]                ; 00585fbf | g_CConsolePtr
    PUSH EAX                            ; 00585fc4 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00585fc5
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 00585fca
    PUSH 0x3b                           ; 00585fcd
        ;   Label: LAB_00585fcd
    LEA EAX,[EBX + 0x158]               ; 00585fcf
    PUSH EAX                            ; 00585fd5
    CALL core_motion.cpp_FUN_00524a40   ; 00585fd6
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x488],EAX     ; 00585fdb
    FLD float ptr [ESP + 0x488]         ; 00585fe2
    FLDZ                                ; 00585fe9
    ADD ESP,0x8                         ; 00585feb
    FCOMPP                              ; 00585fee
    FNSTSW AX                           ; 00585ff0
    SAHF                                ; 00585ff2
    JNC 0x00586038                      ; 00585ff3
        ;   XREF to: 00586038 (CONDITIONAL_JUMP)  ; LAB_00586038
    XOR EDX,EDX                         ; 00585ff5
    MOV dword ptr [ESP + 0x44c],EDX     ; 00585ff7
    MOV dword ptr [ESP + 0x46c],EDX     ; 00585ffe
    MOV dword ptr [ESP + 0x450],EDX     ; 00586005
    MOV dword ptr [ESP + 0x468],EDX     ; 0058600c
    MOV dword ptr [ESP + 0x45c],EDX     ; 00586013
    CMP dword ptr [ESP + 0x464],0x0     ; 0058601a
    JZ 0x00586038                       ; 00586022
        ;   XREF to: 00586038 (CONDITIONAL_JUMP)  ; LAB_00586038
    PUSH 0x5f6767                       ; 00586024 | = "sitting\n"
    MOV ECX,dword ptr [0x00611100]      ; 00586029 | g_CConsolePtr
    PUSH ECX                            ; 0058602f | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00586030
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 00586035
    CMP dword ptr [EBX + 0x1ff5c],0x1   ; 00586038
        ;   Label: LAB_00586038
    JNZ 0x00586070                      ; 0058603f
        ;   XREF to: 00586070 (CONDITIONAL_JUMP)  ; LAB_00586070
    XOR EDI,EDI                         ; 00586041
    MOV EDX,dword ptr [ESP + 0x464]     ; 00586043
    MOV dword ptr [ESP + 0x468],EDI     ; 0058604a
    MOV dword ptr [ESP + 0x46c],EDI     ; 00586051
    TEST EDX,EDX                        ; 00586058
    JZ 0x00586070                       ; 0058605a
        ;   XREF to: 00586070 (CONDITIONAL_JUMP)  ; LAB_00586070
    PUSH 0x5f6770                       ; 0058605c | = "stashinventory\n"
    MOV ECX,dword ptr [0x00611100]      ; 00586061 | g_CConsolePtr
    PUSH ECX                            ; 00586067 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00586068
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 0058606d
    CMP dword ptr [EBX + 0x1ff5c],0x2   ; 00586070
        ;   Label: LAB_00586070
    JNZ 0x005860a8                      ; 00586077
        ;   XREF to: 005860a8 (CONDITIONAL_JUMP)  ; LAB_005860a8
    XOR EDI,EDI                         ; 00586079
    MOV EDX,dword ptr [ESP + 0x464]     ; 0058607b
    MOV dword ptr [ESP + 0x468],EDI     ; 00586082
    MOV dword ptr [ESP + 0x46c],EDI     ; 00586089
    TEST EDX,EDX                        ; 00586090
    JZ 0x005860a8                       ; 00586092
        ;   XREF to: 005860a8 (CONDITIONAL_JUMP)  ; LAB_005860a8
    PUSH 0x5f6780                       ; 00586094 | = "placeobject\n"
    MOV ECX,dword ptr [0x00611100]      ; 00586099 | g_CConsolePtr
    PUSH ECX                            ; 0058609f | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005860a0
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 005860a5
    CMP dword ptr [EBX + 0x1ff5c],0x6   ; 005860a8
        ;   Label: LAB_005860a8
    JNZ 0x005860e0                      ; 005860af
        ;   XREF to: 005860e0 (CONDITIONAL_JUMP)  ; LAB_005860e0
    XOR EDI,EDI                         ; 005860b1
    MOV EDX,dword ptr [ESP + 0x464]     ; 005860b3
    MOV dword ptr [ESP + 0x468],EDI     ; 005860ba
    MOV dword ptr [ESP + 0x46c],EDI     ; 005860c1
    TEST EDX,EDX                        ; 005860c8
    JZ 0x005860e0                       ; 005860ca
        ;   XREF to: 005860e0 (CONDITIONAL_JUMP)  ; LAB_005860e0
    PUSH 0x5f678d                       ; 005860cc | = "putdownobject\n"
    MOV ECX,dword ptr [0x00611100]      ; 005860d1 | g_CConsolePtr
    PUSH ECX                            ; 005860d7 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005860d8
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 005860dd
    CMP dword ptr [EBX + 0x1ff5c],0x3   ; 005860e0
        ;   Label: LAB_005860e0
    JNZ 0x00586118                      ; 005860e7
        ;   XREF to: 00586118 (CONDITIONAL_JUMP)  ; LAB_00586118
    XOR EDI,EDI                         ; 005860e9
    MOV EDX,dword ptr [ESP + 0x464]     ; 005860eb
    MOV dword ptr [ESP + 0x468],EDI     ; 005860f2
    MOV dword ptr [ESP + 0x46c],EDI     ; 005860f9
    TEST EDX,EDX                        ; 00586100
    JZ 0x00586118                       ; 00586102
        ;   XREF to: 00586118 (CONDITIONAL_JUMP)  ; LAB_00586118
    PUSH 0x5f679c                       ; 00586104 | = "toss\n"
    MOV ECX,dword ptr [0x00611100]      ; 00586109 | g_CConsolePtr
    PUSH ECX                            ; 0058610f | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00586110
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 00586115
    CMP dword ptr [EBX + 0x1ff5c],0x7   ; 00586118
        ;   Label: LAB_00586118
    JNZ 0x00586150                      ; 0058611f
        ;   XREF to: 00586150 (CONDITIONAL_JUMP)  ; LAB_00586150
    XOR EDI,EDI                         ; 00586121
    MOV EDX,dword ptr [ESP + 0x464]     ; 00586123
    MOV dword ptr [ESP + 0x468],EDI     ; 0058612a
    MOV dword ptr [ESP + 0x46c],EDI     ; 00586131
    TEST EDX,EDX                        ; 00586138
    JZ 0x00586150                       ; 0058613a
        ;   XREF to: 00586150 (CONDITIONAL_JUMP)  ; LAB_00586150
    PUSH 0x5f67a2                       ; 0058613c | = "attackmelee\n"
    MOV ECX,dword ptr [0x00611100]      ; 00586141 | g_CConsolePtr
    PUSH ECX                            ; 00586147 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00586148
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 0058614d
    CMP dword ptr [EBX + 0x26fc],0x0    ; 00586150
        ;   Label: LAB_00586150
    JNZ 0x00586186                      ; 00586157
        ;   XREF to: 00586186 (CONDITIONAL_JUMP)  ; LAB_00586186
    CMP dword ptr [EBX + 0xdc],0x0      ; 00586159
    JZ 0x0058616d                       ; 00586160
        ;   XREF to: 0058616d (CONDITIONAL_JUMP)  ; LAB_0058616d
    MOV dword ptr [ESP + 0x450],0x1     ; 00586162
    FLD float ptr [EBX + 0x24]          ; 0058616d
        ;   Label: LAB_0058616d
    FCOMP float ptr [EBX + 0x2504]      ; 00586170
    FNSTSW AX                           ; 00586176
    SAHF                                ; 00586178
    JZ 0x00586186                       ; 00586179
        ;   XREF to: 00586186 (CONDITIONAL_JUMP)  ; LAB_00586186
    MOV dword ptr [ESP + 0x450],0x1     ; 0058617b
    PUSH dword ptr [EBP + 0x18]         ; 00586186
        ;   Label: LAB_00586186
    FLD float ptr [EBX + 0x24a4]        ; 00586189
    PUSH EBX                            ; 0058618f
    FSTP float ptr [EBX + 0x2524]       ; 00586190
    CALL core_charactr.cpp_FUN_00435320 ; 00586196
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 0058619b
    LEA ESI,[EBX + 0x158]               ; 0058619e
    PUSH ESI                            ; 005861a4
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005861a5
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005861aa
    ADD ESP,0x4                         ; 005861ad
    CMP EAX,0x5                         ; 005861b0
    JNZ 0x005869c2                      ; 005861b3
        ;   XREF to: 005869c2 (CONDITIONAL_JUMP)  ; LAB_005869c2
    FLD float ptr [EBX + 0x249c]        ; 005861b9
        ;   Label: LAB_005861b9
    FLD ST0                             ; 005861bf
    FMUL double ptr [0x005f6849]        ; 005861c1 | DAT_005f6849
    FSTP ST1                            ; 005861c7
    FSTP float ptr [EBX + 0x249c]       ; 005861c9
    MOV ECX,dword ptr [EBX + 0x1ff88]   ; 005861cf
        ;   Label: LAB_005861cf
    TEST ECX,ECX                        ; 005861d5
    JNZ 0x005869dc                      ; 005861d7
        ;   XREF to: 005869dc (CONDITIONAL_JUMP)  ; LAB_005869dc
    FLD float ptr [EBP + 0x18]          ; 005861dd
    FMUL double ptr [0x005f6849]        ; 005861e0 | DAT_005f6849
    FSUBR float ptr [EBX + 0x20018]     ; 005861e6
    FST float ptr [EBX + 0x20018]       ; 005861ec
    FLDZ                                ; 005861f2
    FCOMPP                              ; 005861f4
    FNSTSW AX                           ; 005861f6
    SAHF                                ; 005861f8
    JBE 0x00586201                      ; 005861f9
        ;   XREF to: 00586201 (CONDITIONAL_JUMP)  ; LAB_00586201
    MOV dword ptr [EBX + 0x20018],ECX   ; 005861fb
    MOV ESI,0x1                         ; 00586201
        ;   Label: LAB_00586201
    MOV EDI,dword ptr [EBX + 0x1ff84]   ; 00586206
    MOV dword ptr [ESP + 0x474],ESI     ; 0058620c
    TEST EDI,EDI                        ; 00586213
    JZ 0x00586a8b                       ; 00586215
        ;   XREF to: 00586a8b (CONDITIONAL_JUMP)  ; LAB_00586a8b
    PUSH 0x37                           ; 0058621b
    LEA EAX,[EBX + 0x158]               ; 0058621d
    PUSH EAX                            ; 00586223
    CALL core_motion.cpp_FUN_00524a40   ; 00586224
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x488],EAX     ; 00586229
    FLD float ptr [ESP + 0x488]         ; 00586230
    FLDZ                                ; 00586237
    ADD ESP,0x8                         ; 00586239
    FCOMPP                              ; 0058623c
    FNSTSW AX                           ; 0058623e
    SAHF                                ; 00586240
    JC 0x00586a0d                       ; 00586241
        ;   XREF to: 00586a0d (CONDITIONAL_JUMP)  ; LAB_00586a0d
    MOV dword ptr [EBX + 0x1ff84],0x0   ; 00586247
    FLD float ptr [EBX + 0x20238]       ; 00586251
        ;   Label: LAB_00586251
    FLDZ                                ; 00586257
    FCOMPP                              ; 00586259
    FNSTSW AX                           ; 0058625b
    SAHF                                ; 0058625d
    JNC 0x0058636e                      ; 0058625e
        ;   XREF to: 0058636e (CONDITIONAL_JUMP)  ; LAB_0058636e
    FLD float ptr [EBP + 0x18]          ; 00586264
    FCOMP float ptr [EBX + 0x20238]     ; 00586267
    FNSTSW AX                           ; 0058626d
    SAHF                                ; 0058626f
    JNC 0x00586a73                      ; 00586270
        ;   XREF to: 00586a73 (CONDITIONAL_JUMP)  ; LAB_00586a73
    FLD float ptr [EBP + 0x18]          ; 00586276
    FLD ST0                             ; 00586279
    FDIV float ptr [EBX + 0x20238]      ; 0058627b
    FLD float ptr [EBX + 0x20238]       ; 00586281
    FSUBRP ST2,ST0                      ; 00586287
    FSTP float ptr [ESP + 0x20]         ; 00586289
    FSTP float ptr [EBX + 0x20238]      ; 0058628d
    LEA EAX,[EBX + 0x20228]             ; 00586293
        ;   Label: LAB_00586293
    FLD float ptr [EAX]                 ; 00586299
    FMUL float ptr [ESP + 0x20]         ; 0058629b
    FLD float ptr [EAX + 0x4]           ; 0058629f
    FMUL float ptr [ESP + 0x20]         ; 005862a2
    FLD float ptr [EAX + 0x8]           ; 005862a6
    FMUL float ptr [ESP + 0x20]         ; 005862a9
    FLD float ptr [ESP + 0x20]          ; 005862ad
    LEA EDI,[ESP + 0x124]               ; 005862b1
    LEA ESI,[ESP + 0x3ac]               ; 005862b8
    FLD1                                ; 005862bf
    LEA EDX,[EBX + 0x20]                ; 005862c1
    FSUBRP                              ; 005862c4
    FXCH ST3                            ; 005862c6
    FSTP float ptr [ESP + 0x3ac]        ; 005862c8
    FXCH                                ; 005862cf
    FSTP float ptr [ESP + 0x3b0]        ; 005862d1
    FSTP float ptr [ESP + 0x3b4]        ; 005862d8
    MOVSD ES:EDI,ESI                    ; 005862df
    MOVSD ES:EDI,ESI                    ; 005862e0
    MOVSD ES:EDI,ESI                    ; 005862e1
    FSTP float ptr [ESP + 0x434]        ; 005862e2
    FLD float ptr [EDX]                 ; 005862e9
    FLD float ptr [EDX + 0x4]           ; 005862eb
    FLD float ptr [EDX + 0x8]           ; 005862ee
    FXCH ST2                            ; 005862f1
    FADD float ptr [ESP + 0x124]        ; 005862f3
    FXCH                                ; 005862fa
    FADD float ptr [ESP + 0x128]        ; 005862fc
    FXCH ST2                            ; 00586303
    FADD float ptr [ESP + 0x12c]        ; 00586305
    FXCH                                ; 0058630c
    FSTP float ptr [EDX]                ; 0058630e
    FXCH                                ; 00586310
    FSTP float ptr [EDX + 0x4]          ; 00586312
    FSTP float ptr [EDX + 0x8]          ; 00586315
    FLD float ptr [EAX]                 ; 00586318
    FMUL float ptr [ESP + 0x434]        ; 0058631a
    FLD float ptr [EAX + 0x4]           ; 00586321
    FMUL float ptr [ESP + 0x434]        ; 00586324
    FLD float ptr [EAX + 0x8]           ; 0058632b
    FMUL float ptr [ESP + 0x434]        ; 0058632e
    FXCH ST2                            ; 00586335
    FSTP float ptr [EAX]                ; 00586337
    FSTP float ptr [EAX + 0x4]          ; 00586339
    FSTP float ptr [EAX + 0x8]          ; 0058633c
    FLD float ptr [EBX + 0x20234]       ; 0058633f
    FSUB float ptr [EBX + 0x34]         ; 00586345
    SUB ESP,0x4                         ; 00586348
    FSTP float ptr [ESP]                ; 0058634b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0058634e
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x484],EAX     ; 00586353
    FLD float ptr [ESP + 0x484]         ; 0058635a
    ADD ESP,0x4                         ; 00586361
    FMUL float ptr [ESP + 0x20]         ; 00586364
    FSTP float ptr [EBX + 0x2508]       ; 00586368
    LEA EDI,[EBX + 0x158]               ; 0058636e
        ;   Label: LAB_0058636e
    PUSH EDI                            ; 00586374
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00586375
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058637a
    ADD ESP,0x4                         ; 0058637d
    CMP EAX,0x26                        ; 00586380
    JNZ 0x005863c7                      ; 00586383
        ;   XREF to: 005863c7 (CONDITIONAL_JUMP)  ; LAB_005863c7
    MOV ECX,dword ptr [0x007c33e0]      ; 00586385 | g_CAmmoBoxClassInfo.name_hash
    PUSH ECX                            ; 0058638b
    MOV ESI,dword ptr [EBX + 0x1ff78]   ; 0058638c
    PUSH ESI                            ; 00586392
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00586393
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV ESI,EAX                         ; 00586398
    ADD ESP,0x8                         ; 0058639a
    TEST EAX,EAX                        ; 0058639d
    JZ 0x005863c7                       ; 0058639f
        ;   XREF to: 005863c7 (CONDITIONAL_JUMP)  ; LAB_005863c7
    PUSH EDI                            ; 005863a1
    CALL core_motion.cpp_FUN_00525020   ; 005863a2
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x484],EAX     ; 005863a7
    FLD float ptr [ESP + 0x484]         ; 005863ae
    ADD ESP,0x4                         ; 005863b5
    SUB ESP,0x4                         ; 005863b8
    FSTP float ptr [ESP]                ; 005863bb
    PUSH ESI                            ; 005863be
    CALL core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e1a0 ; 005863bf
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; void core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e1a0(CAmmoBox * this_ptr, float open_pct)
    ADD ESP,0x8                         ; 005863c4
    PUSH EBX                            ; 005863c7
        ;   Label: LAB_005863c7
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 005863c8
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005863cd
    PUSH dword ptr [EBP + 0x18]         ; 005863d0
    PUSH EBX                            ; 005863d3
    CALL core_stranger.cpp_FUN_0058a010 ; 005863d4
        ;   XREF to: 0058a010 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_FUN_0058a010(CStranger * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005863d9
    CMP dword ptr [ESP + 0x474],0x0     ; 005863dc
    JZ 0x005863fe                       ; 005863e4
        ;   XREF to: 005863fe (CONDITIONAL_JUMP)  ; LAB_005863fe
    LEA EAX,[EBX + 0x2004c]             ; 005863e6
    MOV dword ptr [EAX + 0x8],0x0       ; 005863ec
    MOV EDX,dword ptr [EAX + 0x8]       ; 005863f3
    MOV dword ptr [EAX + 0x4],EDX       ; 005863f6
    MOV EDX,dword ptr [EAX + 0x4]       ; 005863f9
    MOV dword ptr [EAX],EDX             ; 005863fc
    CMP dword ptr [EBX + 0x1ff84],0x0   ; 005863fe
        ;   Label: LAB_005863fe
    JZ 0x0058794f                       ; 00586405
        ;   XREF to: 0058794f (CONDITIONAL_JUMP)  ; LAB_0058794f
    LEA EAX,[EBX + 0x249c]              ; 0058640b
        ;   Label: LAB_0058640b
    PUSH EAX                            ; 00586411
    LEA ESI,[ESP + 0x1a0]               ; 00586412
    PUSH EBX                            ; 00586419
    LEA EDI,[ESP + 0x228]               ; 0058641a
    MOV dword ptr [ESP + 0x488],EAX     ; 00586421
    CALL core_actor.cpp_FUN_00408ac0    ; 00586428
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x1a4]               ; 0058642d
    ADD ESP,0x8                         ; 00586434
    LEA EAX,[EBX + 0x20]                ; 00586437
    MOVSD ES:EDI,ESI                    ; 0058643a
    MOVSD ES:EDI,ESI                    ; 0058643b
    MOVSD ES:EDI,ESI                    ; 0058643c
    FLD float ptr [EAX]                 ; 0058643d
    FLD float ptr [EAX + 0x4]           ; 0058643f
    FLD float ptr [EAX + 0x8]           ; 00586442
    FXCH ST2                            ; 00586445
    FADD float ptr [ESP + 0x220]        ; 00586447
    FXCH                                ; 0058644e
    FADD float ptr [ESP + 0x224]        ; 00586450
    FXCH ST2                            ; 00586457
    FADD float ptr [ESP + 0x228]        ; 00586459
    FXCH                                ; 00586460
    FSTP float ptr [EAX]                ; 00586462
    FXCH                                ; 00586464
    FSTP float ptr [EAX + 0x4]          ; 00586466
    FSTP float ptr [EAX + 0x8]          ; 00586469
    MOV EAX,dword ptr [ESP + 0x480]     ; 0058646c
    MOV dword ptr [EAX + 0x8],0x0       ; 00586473
    MOV EDX,dword ptr [EAX + 0x8]       ; 0058647a
    MOV dword ptr [EAX + 0x4],EDX       ; 0058647d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00586480
    MOV dword ptr [EAX],EDX             ; 00586483
    MOV dword ptr [EBX + 0x20064],0x0   ; 00586485
        ;   Label: LAB_00586485
    LEA EAX,[EBX + 0x2004c]             ; 0058648f
        ;   Label: LAB_0058648f
    MOV dword ptr [EAX + 0x8],0x0       ; 00586495
    MOV EDI,dword ptr [ESP + 0x45c]     ; 0058649c
    MOV EDX,dword ptr [EAX + 0x8]       ; 005864a3
    MOV dword ptr [EAX + 0x4],EDX       ; 005864a6
    MOV EDX,dword ptr [EAX + 0x4]       ; 005864a9
    MOV dword ptr [EAX],EDX             ; 005864ac
    TEST EDI,EDI                        ; 005864ae
    JZ 0x00586562                       ; 005864b0
        ;   XREF to: 00586562 (CONDITIONAL_JUMP)  ; LAB_00586562
    CMP dword ptr [EBX + 0xc1f0],0x0    ; 005864b6
    JZ 0x00586500                       ; 005864bd
        ;   XREF to: 00586500 (CONDITIONAL_JUMP)  ; LAB_00586500
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 005864bf
    JZ 0x00588089                       ; 005864c6
        ;   XREF to: 00588089 (CONDITIONAL_JUMP)  ; LAB_00588089
    MOV EAX,[0x0061d95c]                ; 005864cc | g_CGamePtr
    MOV dword ptr [EBX + 0x1ffac],0x0   ; 005864d1
    CMP dword ptr [EAX + 0x264],0x0     ; 005864db | g_CGameInstance.field564_0x264
    JZ 0x00586500                       ; 005864e2
        ;   XREF to: 00586500 (CONDITIONAL_JUMP)  ; LAB_00586500
    PUSH 0x5f67f8                       ; 005864e4 | = "flashlit.wav"
    MOV dword ptr [EAX + 0x264],0x0     ; 005864e9 | g_CGameInstance.field564_0x264
    PUSH EBX                            ; 005864f3
    MOV EAX,dword ptr [EBX + 0x154]     ; 005864f4
    CALL dword ptr [EAX + 0x2c]         ; 005864fa
    ADD ESP,0x8                         ; 005864fd
    CMP dword ptr [EBX + 0xc1ec],0x0    ; 00586500
        ;   Label: LAB_00586500
    JZ 0x00586562                       ; 00586507
        ;   XREF to: 00586562 (CONDITIONAL_JUMP)  ; LAB_00586562
    LEA EAX,[EBX + 0x1fae8]             ; 00586509
    MOV EAX,dword ptr [EAX + 0x338]     ; 0058650f
    TEST EAX,EAX                        ; 00586515
    JZ 0x00586562                       ; 00586517
        ;   XREF to: 00586562 (CONDITIONAL_JUMP)  ; LAB_00586562
    CMP dword ptr [EAX + 0x2f0],0x0     ; 00586519
    JZ 0x00586562                       ; 00586520
        ;   XREF to: 00586562 (CONDITIONAL_JUMP)  ; LAB_00586562
    MOV EAX,[0x0061d95c]                ; 00586522 | g_CGamePtr
    CMP dword ptr [EAX + 0x264],0x0     ; 00586527 | g_CGameInstance.field564_0x264
    SETZ AL                             ; 0058652e
    MOV EDX,EAX                         ; 00586531
    MOV EAX,[0x0061d95c]                ; 00586533 | g_CGamePtr
    AND EDX,0xff                        ; 00586538
    MOV dword ptr [EAX + 0x264],EDX     ; 0058653e | g_CGameInstance.field564_0x264
    JZ 0x00586550                       ; 00586544
        ;   XREF to: 00586550 (CONDITIONAL_JUMP)  ; LAB_00586550
    MOV dword ptr [EBX + 0x1ffac],0x1   ; 00586546
    PUSH 0x5f6805                       ; 00586550 | = "flashlit.wav"
        ;   Label: LAB_00586550
    MOV EAX,dword ptr [EBX + 0x154]     ; 00586555
    PUSH EBX                            ; 0058655b
    CALL dword ptr [EAX + 0x2c]         ; 0058655c
    ADD ESP,0x8                         ; 0058655f
    LEA EAX,[EBX + 0x1fae8]             ; 00586562
        ;   Label: LAB_00586562
    MOV EAX,dword ptr [EAX + 0x338]     ; 00586568
    TEST EAX,EAX                        ; 0058656e
    JNZ 0x00588098                      ; 00586570
        ;   XREF to: 00588098 (CONDITIONAL_JUMP)  ; LAB_00588098
    MOV EAX,[0x0061d95c]                ; 00586576 | g_CGamePtr
    MOV dword ptr [EAX + 0x264],0x0     ; 0058657b | g_CGameInstance.field564_0x264
    CMP dword ptr [ESP + 0x44c],0x0     ; 00586585
        ;   Label: LAB_00586585
    JZ 0x0058659b                       ; 0058658d
        ;   XREF to: 0058659b (CONDITIONAL_JUMP)  ; LAB_0058659b
    PUSH dword ptr [EBP + 0x18]         ; 0058658f
    PUSH EBX                            ; 00586592
    CALL core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_005907a0 ; 00586593
        ;   XREF to: 005907a0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_005907a0(CStranger * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00586598
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 0058659b
        ;   Label: LAB_0058659b
    JZ 0x005880b6                       ; 005865a2
        ;   XREF to: 005880b6 (CONDITIONAL_JUMP)  ; LAB_005880b6
    FLD float ptr [EBP + 0x18]          ; 005865a8
    FDIV float ptr [0x0060606c]         ; 005865ab | DAT_0060606c
    FADD float ptr [EBX + 0x1ffb0]      ; 005865b1
    FST float ptr [EBX + 0x1ffb0]       ; 005865b7
    FLD1                                ; 005865bd
    FCOMPP                              ; 005865bf
    FNSTSW AX                           ; 005865c1
    SAHF                                ; 005865c3
    JNC 0x005865d0                      ; 005865c4
        ;   XREF to: 005865d0 (CONDITIONAL_JUMP)  ; LAB_005865d0
    MOV dword ptr [EBX + 0x1ffb0],0x3f800000 ; 005865c6
    FLD float ptr [EBP + 0x18]          ; 005865d0
        ;   Label: LAB_005865d0
    FDIV float ptr [0x00606074]         ; 005865d3 | DAT_00606074
    FSUBR float ptr [EBX + 0x1ffd0]     ; 005865d9
    MOV dword ptr [EBX + 0x1ffb4],0x0   ; 005865df
    FST float ptr [EBX + 0x1ffd0]       ; 005865e9
    FLDZ                                ; 005865ef
    FCOMPP                              ; 005865f1
    FNSTSW AX                           ; 005865f3
    SAHF                                ; 005865f5
    JC 0x00586602                       ; 005865f6
        ;   XREF to: 00586602 (CONDITIONAL_JUMP)  ; LAB_00586602
    MOV dword ptr [EBX + 0x1ffd0],0x0   ; 005865f8
    FLD float ptr [EBP + 0x18]          ; 00586602
        ;   Label: LAB_00586602
    FDIV float ptr [0x00606074]         ; 00586605 | DAT_00606074
    FSUBR float ptr [EBX + 0x1fff0]     ; 0058660b
    FST float ptr [EBX + 0x1fff0]       ; 00586611
    FLDZ                                ; 00586617
    FCOMPP                              ; 00586619
    FNSTSW AX                           ; 0058661b
    SAHF                                ; 0058661d
    JC 0x0058662a                       ; 0058661e
        ;   XREF to: 0058662a (CONDITIONAL_JUMP)  ; LAB_0058662a
    MOV dword ptr [EBX + 0x1fff0],0x0   ; 00586620
    CMP dword ptr [ESP + 0x46c],0x0     ; 0058662a
        ;   Label: LAB_0058662a
    JZ 0x0058663d                       ; 00586632
        ;   XREF to: 0058663d (CONDITIONAL_JUMP)  ; LAB_0058663d
    PUSH EBX                            ; 00586634
    CALL core_stranger.cpp_CStranger_handleActionButton_FUN_00591120 ; 00586635
        ;   XREF to: 00591120 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_handleActionButton_FUN_00591120(CStranger * this_ptr)
    ADD ESP,0x4                         ; 0058663a
    PUSH EBX                            ; 0058663d
        ;   Label: LAB_0058663d
    CALL core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_00588ad0 ; 0058663e
        ;   XREF to: 00588ad0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_00588ad0(CStranger * this_ptr)
    MOV ECX,dword ptr [EBX + 0x1fae4]   ; 00586643
    ADD ESP,0x4                         ; 00586649
    CMP ECX,0x2                         ; 0058664c
    JNZ 0x00586690                      ; 0058664f
        ;   XREF to: 00586690 (CONDITIONAL_JUMP)  ; LAB_00586690
    MOV ESI,dword ptr [EBX + 0x20004]   ; 00586651
    TEST ESI,ESI                        ; 00586657
    JZ 0x00586690                       ; 00586659
        ;   XREF to: 00586690 (CONDITIONAL_JUMP)  ; LAB_00586690
    MOV EDI,dword ptr [ESI + 0x2e0]     ; 0058665b
    TEST EDI,EDI                        ; 00586661
    JNZ 0x00586690                      ; 00586663
        ;   XREF to: 00586690 (CONDITIONAL_JUMP)  ; LAB_00586690
    LEA EAX,[EBX + 0x158]               ; 00586665
    PUSH EAX                            ; 0058666b
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180 ; 0058666c
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00586671
    PUSH EDI                            ; 00586674
    PUSH EBX                            ; 00586675
    CALL core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0058aeb0 ; 00586676
        ;   XREF to: 0058aeb0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0058aeb0(CStranger * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0058667b
    PUSH EBX                            ; 0058667e
    CALL core_stranger.cpp_CStranger_aimLeftPistol_FUN_0058f660 ; 0058667f
        ;   XREF to: 0058f660 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_aimLeftPistol_FUN_0058f660(CStranger * this_ptr)
    ADD ESP,0x4                         ; 00586684
    PUSH EBX                            ; 00586687
    CALL core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_00588ad0 ; 00586688
        ;   XREF to: 00588ad0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_00588ad0(CStranger * this_ptr)
    ADD ESP,0x4                         ; 0058668d
    MOV EAX,dword ptr [ESP + 0x468]     ; 00586690
        ;   Label: LAB_00586690
    PUSH EAX                            ; 00586697
    PUSH dword ptr [EBP + 0x18]         ; 00586698
    PUSH EBX                            ; 0058669b
    CALL core_stranger.cpp_CStranger_updateArmRecoilBlend_FUN_00590020 ; 0058669c
        ;   XREF to: 00590020 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateArmRecoilBlend_FUN_00590020(CStranger * this_ptr, float delta_time, int is_weapon_active)
    ADD ESP,0xc                         ; 005866a1
    PUSH EBX                            ; 005866a4
    CALL core_stranger.cpp_CStranger_updateClothSimulation_FUN_005917b0 ; 005866a5
        ;   XREF to: 005917b0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateClothSimulation_FUN_005917b0(CStranger * this_ptr)
    ADD ESP,0x4                         ; 005866aa
    PUSH dword ptr [EBP + 0x18]         ; 005866ad
    PUSH EBX                            ; 005866b0
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 005866b1
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005866b6
    PUSH 0x11                           ; 005866b9
    LEA ESI,[EBX + 0x158]               ; 005866bb
    PUSH ESI                            ; 005866c1
    CALL core_motion.cpp_FUN_00524a40   ; 005866c2
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x488],EAX     ; 005866c7
    FLD float ptr [ESP + 0x488]         ; 005866ce
    FLDZ                                ; 005866d5
    ADD ESP,0x8                         ; 005866d7
    FCOMPP                              ; 005866da
    FNSTSW AX                           ; 005866dc
    SAHF                                ; 005866de
    JNC 0x005880e7                      ; 005866df
        ;   XREF to: 005880e7 (CONDITIONAL_JUMP)  ; LAB_005880e7
    PUSH ESI                            ; 005866e5
    CALL core_motion.cpp_FUN_00525020   ; 005866e6
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x484],EAX     ; 005866eb
    FLD float ptr [ESP + 0x484]         ; 005866f2
    FLD1                                ; 005866f9
    ADD ESP,0x4                         ; 005866fb
    FCOMPP                              ; 005866fe
    FNSTSW AX                           ; 00586700
    SAHF                                ; 00586702
    JNC 0x00586834                      ; 00586703
        ;   XREF to: 00586834 (CONDITIONAL_JUMP)  ; LAB_00586834
    MOV EDX,dword ptr [0x007c5094]      ; 00586709 | g_CBoxActorClassInfo.name_hash
    PUSH EDX                            ; 0058670f
    MOV ECX,dword ptr [EBX + 0x1ff7c]   ; 00586710
    PUSH ECX                            ; 00586716
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00586717
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV dword ptr [ESP + 0x42c],EAX     ; 0058671c
    ADD ESP,0x8                         ; 00586723
    TEST EAX,EAX                        ; 00586726
    JZ 0x00586834                       ; 00586728
        ;   XREF to: 00586834 (CONDITIONAL_JUMP)  ; LAB_00586834
    PUSH EBX                            ; 0058672e
    LEA ESI,[ESP + 0x17c]               ; 0058672f
    LEA EDI,[ESP + 0x1dc]               ; 00586736
    CALL core_stranger.cpp_FUN_00588a10 ; 0058673d
        ;   XREF to: 00588a10 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_00588a10()
    ADD ESP,0x4                         ; 00586742
    LEA EAX,[ESP + 0x1d8]               ; 00586745
    LEA ESI,[ESP + 0x178]               ; 0058674c
    PUSH EAX                            ; 00586753
    MOVSD ES:EDI,ESI                    ; 00586754
    MOVSD ES:EDI,ESI                    ; 00586755
    MOVSD ES:EDI,ESI                    ; 00586756
    PUSH EBX                            ; 00586757
    LEA ESI,[ESP + 0x3fc]               ; 00586758
    LEA EDI,[ESP + 0x108]               ; 0058675f
    CALL core_actor.cpp_FUN_00408b40    ; 00586766
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x3fc]               ; 0058676b
    ADD ESP,0x8                         ; 00586772
    LEA EAX,[ESP + 0x250]               ; 00586775
    MOVSD ES:EDI,ESI                    ; 0058677c
    MOVSD ES:EDI,ESI                    ; 0058677d
    MOVSD ES:EDI,ESI                    ; 0058677e
    PUSH EAX                            ; 0058677f
    FLD float ptr [ESP + 0x104]         ; 00586780
    FLD float ptr [ESP + 0x108]         ; 00586787
    FLD float ptr [ESP + 0x10c]         ; 0058678e
    LEA EDI,[ESP + 0x254]               ; 00586795
    LEA ESI,[ESP + 0x2fc]               ; 0058679c
    FXCH ST2                            ; 005867a3
    FSUB float ptr [ESP + 0x380]        ; 005867a5
    FXCH                                ; 005867ac
    FSUB float ptr [ESP + 0x384]        ; 005867ae
    FXCH ST2                            ; 005867b5
    FSUB float ptr [ESP + 0x388]        ; 005867b7
    FXCH                                ; 005867be
    FSTP float ptr [ESP + 0x2fc]        ; 005867c0
    FXCH                                ; 005867c7
    FSTP float ptr [ESP + 0x300]        ; 005867c9
    FSTP float ptr [ESP + 0x304]        ; 005867d0
    MOVSD ES:EDI,ESI                    ; 005867d7
    MOVSD ES:EDI,ESI                    ; 005867d8
    MOVSD ES:EDI,ESI                    ; 005867d9
    PUSH EBX                            ; 005867da
    XOR EDI,EDI                         ; 005867db
    LEA ESI,[ESP + 0x198]               ; 005867dd
    MOV dword ptr [ESP + 0x25c],EDI     ; 005867e4
    CALL core_actor.cpp_FUN_00408b00    ; 005867eb
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA EDI,[ESP + 0x36c]               ; 005867f0
    LEA ESI,[ESP + 0x198]               ; 005867f7
    ADD ESP,0x8                         ; 005867fe
    MOVSD ES:EDI,ESI                    ; 00586801
    MOVSD ES:EDI,ESI                    ; 00586802
    MOVSD ES:EDI,ESI                    ; 00586803
    FLD float ptr [ESP + 0x36c]         ; 00586804
    FLDZ                                ; 0058680b
    FCOMPP                              ; 0058680d
    FNSTSW AX                           ; 0058680f
    SAHF                                ; 00586811
    JNC 0x00586834                      ; 00586812
        ;   XREF to: 00586834 (CONDITIONAL_JUMP)  ; LAB_00586834
    LEA EAX,[ESP + 0x250]               ; 00586814
    PUSH EAX                            ; 0058681b
    LEA EAX,[ESP + 0x380]               ; 0058681c
    PUSH EAX                            ; 00586823
    MOV EAX,dword ptr [ESP + 0x42c]     ; 00586824
    PUSH EAX                            ; 0058682b
    CALL core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_00422ab0 ; 0058682c
        ;   XREF to: 00422ab0 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_00422ab0(CBoxActor * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction)
    ADD ESP,0xc                         ; 00586831
    PUSH 0x0                            ; 00586834
        ;   Label: LAB_00586834
    PUSH EBX                            ; 00586836
    CALL core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0058aeb0 ; 00586837
        ;   XREF to: 0058aeb0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0058aeb0(CStranger * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0058683c
    PUSH dword ptr [EBP + 0x18]         ; 0058683f
    PUSH 0x0                            ; 00586842
    PUSH EBX                            ; 00586844
    CALL core_stranger.cpp_CStranger_autoAimAtThreat_FUN_0058eb50 ; 00586845
        ;   XREF to: 0058eb50 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_autoAimAtThreat_FUN_0058eb50(CStranger * this_ptr, int hand_index, float delta_time)
    ADD ESP,0xc                         ; 0058684a
    PUSH dword ptr [EBP + 0x18]         ; 0058684d
    PUSH 0x1                            ; 00586850
    PUSH EBX                            ; 00586852
    CALL core_stranger.cpp_CStranger_autoAimAtThreat_FUN_0058eb50 ; 00586853
        ;   XREF to: 0058eb50 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_autoAimAtThreat_FUN_0058eb50(CStranger * this_ptr, int hand_index, float delta_time)
    ADD ESP,0xc                         ; 00586858
    PUSH dword ptr [EBP + 0x18]         ; 0058685b
    PUSH EBX                            ; 0058685e
    CALL core_stranger.cpp_CStranger_handleFireButton_FUN_005914a0 ; 0058685f
        ;   XREF to: 005914a0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_handleFireButton_FUN_005914a0(CStranger * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00586864
    LEA EAX,[EBX + 0x1fae8]             ; 00586867
    PUSH EAX                            ; 0058686d
    CALL core_inv.cpp_FUN_004f9f10      ; 0058686e
        ;   XREF to: 004f9f10 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f9f10()
    ADD ESP,0x4                         ; 00586873
    PUSH dword ptr [EBP + 0x18]         ; 00586876
    PUSH EBX                            ; 00586879
    CALL core_stranger.cpp_CStranger_processWeaponTick_FUN_00591b20 ; 0058687a
        ;   XREF to: 00591b20 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_processWeaponTick_FUN_00591b20(CStranger * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x20004]   ; 0058687f
    ADD ESP,0x8                         ; 00586885
    TEST EDX,EDX                        ; 00586888
    JZ 0x0058689f                       ; 0058688a
        ;   XREF to: 0058689f (CONDITIONAL_JUMP)  ; LAB_0058689f
    CMP dword ptr [EDX + 0xfc],0x0      ; 0058688c
    JZ 0x0058689f                       ; 00586893
        ;   XREF to: 0058689f (CONDITIONAL_JUMP)  ; LAB_0058689f
    MOV dword ptr [EBX + 0xfc],0x1      ; 00586895
    MOV ESI,dword ptr [EBX + 0x2001c]   ; 0058689f
        ;   Label: LAB_0058689f
    PUSH ESI                            ; 005868a5
    CALL sound_sndmain.cpp_FUN_005735a0 ; 005868a6
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 005868ab
    TEST EAX,EAX                        ; 005868ae
    JZ 0x0058813b                       ; 005868b0
        ;   XREF to: 0058813b (CONDITIONAL_JUMP)  ; LAB_0058813b
    MOV EAX,[0x0061d95c]                ; 005868b6 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x25c],0x0     ; 005868bb | g_CGameInstance.field556_0x25c
    JZ 0x005880f5                       ; 005868c2
        ;   XREF to: 005880f5 (CONDITIONAL_JUMP)  ; LAB_005880f5
    MOV ESP,EBP                         ; 005868c8
        ;   Label: LAB_005868c8
    POP EBP                             ; 005868ca
    POP EDI                             ; 005868cb
    POP ESI                             ; 005868cc
    POP EBX                             ; 005868cd
    RET                                 ; 005868ce
    CMP dword ptr [EBX + 0x20000],0x0   ; 005868cf
        ;   Label: LAB_005868cf
    JNZ 0x00585e7e                      ; 005868d6
        ;   XREF to: 00585e7e (CONDITIONAL_JUMP)  ; LAB_00585e7e
    JMP 0x00585ec0                      ; 005868dc
        ;   XREF to: 00585ec0 (UNCONDITIONAL_JUMP)  ; LAB_00585ec0
    CMP dword ptr [EBX + 0x1ff5c],0x4   ; 005868e1
        ;   Label: LAB_005868e1
    JZ 0x00585ecd                       ; 005868e8
        ;   XREF to: 00585ecd (CONDITIONAL_JUMP)  ; LAB_00585ecd
    JMP 0x00585f03                      ; 005868ee
        ;   XREF to: 00585f03 (UNCONDITIONAL_JUMP)  ; LAB_00585f03
    PUSH 0x35                           ; 005868f3
        ;   Label: LAB_005868f3
    PUSH ESI                            ; 005868f5
    CALL core_motion.cpp_FUN_00524a40   ; 005868f6
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x488],EAX     ; 005868fb
    FLD float ptr [ESP + 0x488]         ; 00586902
    FLDZ                                ; 00586909
    ADD ESP,0x8                         ; 0058690b
    FCOMPP                              ; 0058690e
    FNSTSW AX                           ; 00586910
    SAHF                                ; 00586912
    JC 0x00585f2f                       ; 00586913
        ;   XREF to: 00585f2f (CONDITIONAL_JUMP)  ; LAB_00585f2f
    PUSH 0x36                           ; 00586919
    PUSH ESI                            ; 0058691b
    CALL core_motion.cpp_FUN_00524a40   ; 0058691c
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x488],EAX     ; 00586921
    FLD float ptr [ESP + 0x488]         ; 00586928
    FLDZ                                ; 0058692f
    ADD ESP,0x8                         ; 00586931
    FCOMPP                              ; 00586934
    FNSTSW AX                           ; 00586936
    SAHF                                ; 00586938
    JC 0x00585f2f                       ; 00586939
        ;   XREF to: 00585f2f (CONDITIONAL_JUMP)  ; LAB_00585f2f
    FLD float ptr [EBX + 0x2538]        ; 0058693f
    FLDZ                                ; 00586945
    FCOMPP                              ; 00586947
    FNSTSW AX                           ; 00586949
    SAHF                                ; 0058694b
    JNC 0x00585f2f                      ; 0058694c
        ;   XREF to: 00585f2f (CONDITIONAL_JUMP)  ; LAB_00585f2f
    JMP 0x00585f6c                      ; 00586952
        ;   XREF to: 00585f6c (UNCONDITIONAL_JUMP)  ; LAB_00585f6c
    PUSH 0x28                           ; 00586957
        ;   Label: LAB_00586957
    PUSH ESI                            ; 00586959
    CALL core_motion.cpp_FUN_00524a40   ; 0058695a
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x488],EAX     ; 0058695f
    FLD float ptr [ESP + 0x488]         ; 00586966
    FLDZ                                ; 0058696d
    ADD ESP,0x8                         ; 0058696f
    FCOMPP                              ; 00586972
    FNSTSW AX                           ; 00586974
    SAHF                                ; 00586976
    JC 0x00585f98                       ; 00586977
        ;   XREF to: 00585f98 (CONDITIONAL_JUMP)  ; LAB_00585f98
    PUSH 0x29                           ; 0058697d
    PUSH ESI                            ; 0058697f
    CALL core_motion.cpp_FUN_00524a40   ; 00586980
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x488],EAX     ; 00586985
    FLD float ptr [ESP + 0x488]         ; 0058698c
    FLDZ                                ; 00586993
    ADD ESP,0x8                         ; 00586995
    FCOMPP                              ; 00586998
    FNSTSW AX                           ; 0058699a
    SAHF                                ; 0058699c
    JC 0x00585f98                       ; 0058699d
        ;   XREF to: 00585f98 (CONDITIONAL_JUMP)  ; LAB_00585f98
    CMP dword ptr [EBX + 0x1ff5c],0x5   ; 005869a3
    JZ 0x00585f98                       ; 005869aa
        ;   XREF to: 00585f98 (CONDITIONAL_JUMP)  ; LAB_00585f98
    CMP dword ptr [EBX + 0x1ff74],0x0   ; 005869b0
    JNZ 0x00585f98                      ; 005869b7
        ;   XREF to: 00585f98 (CONDITIONAL_JUMP)  ; LAB_00585f98
    JMP 0x00585fcd                      ; 005869bd
        ;   XREF to: 00585fcd (UNCONDITIONAL_JUMP)  ; LAB_00585fcd
    PUSH ESI                            ; 005869c2
        ;   Label: LAB_005869c2
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005869c3
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005869c8
    ADD ESP,0x4                         ; 005869cb
    CMP EAX,0x6                         ; 005869ce
    JZ 0x005861b9                       ; 005869d1
        ;   XREF to: 005861b9 (CONDITIONAL_JUMP)  ; LAB_005861b9
    JMP 0x005861cf                      ; 005869d7
        ;   XREF to: 005861cf (UNCONDITIONAL_JUMP)  ; LAB_005861cf
    FLD float ptr [EBP + 0x18]          ; 005869dc
        ;   Label: LAB_005869dc
    FMUL double ptr [0x005f6849]        ; 005869df | DAT_005f6849
    FADD float ptr [EBX + 0x20018]      ; 005869e5
    FST float ptr [EBX + 0x20018]       ; 005869eb
    FLD1                                ; 005869f1
    FCOMPP                              ; 005869f3
    FNSTSW AX                           ; 005869f5
    SAHF                                ; 005869f7
    JNC 0x00586201                      ; 005869f8
        ;   XREF to: 00586201 (CONDITIONAL_JUMP)  ; LAB_00586201
    MOV dword ptr [EBX + 0x20018],0x3f800000 ; 005869fe
    JMP 0x00586201                      ; 00586a08
        ;   XREF to: 00586201 (UNCONDITIONAL_JUMP)  ; LAB_00586201
    MOV EAX,dword ptr [EBX + 0x1ff84]   ; 00586a0d
        ;   Label: LAB_00586a0d
    ADD EAX,0x2d4                       ; 00586a13
    PUSH EAX                            ; 00586a18
    MOV EAX,dword ptr [EBX + 0x1ff84]   ; 00586a19
    PUSH EAX                            ; 00586a1f
    LEA ESI,[ESP + 0x210]               ; 00586a20
    LEA EDI,[ESP + 0x30c]               ; 00586a27
    CALL core_actor.cpp_FUN_00408b40    ; 00586a2e
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x210]               ; 00586a33
    ADD ESP,0x8                         ; 00586a3a
    MOVSD ES:EDI,ESI                    ; 00586a3d
    MOVSD ES:EDI,ESI                    ; 00586a3e
    MOVSD ES:EDI,ESI                    ; 00586a3f
    FLD float ptr [ESP + 0x308]         ; 00586a40
    FADD double ptr [0x005f6899]        ; 00586a47 | DAT_005f6899
    FLD float ptr [EBX + 0x24]          ; 00586a4d
    FCOMPP                              ; 00586a50
    FNSTSW AX                           ; 00586a52
    SAHF                                ; 00586a54
    JBE 0x00586251                      ; 00586a55
        ;   XREF to: 00586251 (CONDITIONAL_JUMP)  ; LAB_00586251
    PUSH 0x1                            ; 00586a5b
    PUSH 0x0                            ; 00586a5d
    LEA EAX,[EBX + 0x158]               ; 00586a5f
    PUSH EAX                            ; 00586a65
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00586a66
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00586a6b
    JMP 0x00586251                      ; 00586a6e
        ;   XREF to: 00586251 (UNCONDITIONAL_JUMP)  ; LAB_00586251
    MOV EDX,0x3f800000                  ; 00586a73
        ;   Label: LAB_00586a73
    MOV dword ptr [EBX + 0x20238],0x0   ; 00586a78
    MOV dword ptr [ESP + 0x20],EDX      ; 00586a82
    JMP 0x00586293                      ; 00586a86
        ;   XREF to: 00586293 (UNCONDITIONAL_JUMP)  ; LAB_00586293
    CMP dword ptr [EBX + 0x20000],0x0   ; 00586a8b
        ;   Label: LAB_00586a8b
    JNZ 0x00586d16                      ; 00586a92
        ;   XREF to: 00586d16 (CONDITIONAL_JUMP)  ; LAB_00586d16
    MOV EDX,dword ptr [EBX + 0x1ff88]   ; 00586a98
    TEST EDX,EDX                        ; 00586a9e
    JNZ 0x00586edc                      ; 00586aa0
        ;   XREF to: 00586edc (CONDITIONAL_JUMP)  ; LAB_00586edc
    MOV ECX,dword ptr [EBX + 0x26fc]    ; 00586aa6
    TEST ECX,ECX                        ; 00586aac
    JZ 0x005872c7                       ; 00586aae
        ;   XREF to: 005872c7 (CONDITIONAL_JUMP)  ; LAB_005872c7
    CMP dword ptr [EBX + 0x2700],0x0    ; 00586ab4
    JNZ 0x00586bee                      ; 00586abb
        ;   XREF to: 00586bee (CONDITIONAL_JUMP)  ; LAB_00586bee
    LEA EAX,[ECX + 0x20]                ; 00586ac1
    PUSH EAX                            ; 00586ac4
    PUSH EBX                            ; 00586ac5
    LEA ESI,[ESP + 0x360]               ; 00586ac6
    LEA EDI,[ESP + 0x2b8]               ; 00586acd
    CALL core_actor.cpp_FUN_00408bb0    ; 00586ad4
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x360]               ; 00586ad9
    ADD ESP,0x8                         ; 00586ae0
    LEA EAX,[ESP + 0x2b0]               ; 00586ae3
    MOVSD ES:EDI,ESI                    ; 00586aea
    MOVSD ES:EDI,ESI                    ; 00586aeb
    MOVSD ES:EDI,ESI                    ; 00586aec
    PUSH EAX                            ; 00586aed
    LEA ESI,[ESP + 0x314]               ; 00586aee
    LEA EDI,[ESP + 0x230]               ; 00586af5
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00586afc
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x314]               ; 00586b01
    ADD ESP,0x4                         ; 00586b08
    MOVSD ES:EDI,ESI                    ; 00586b0b
    MOVSD ES:EDI,ESI                    ; 00586b0c
    MOVSD ES:EDI,ESI                    ; 00586b0d
    PUSH dword ptr [ESP + 0x230]        ; 00586b0e
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00586b15
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x484],EAX     ; 00586b1a
    FLD float ptr [ESP + 0x484]         ; 00586b21
    ADD ESP,0x4                         ; 00586b28
    FST float ptr [ESP + 0x460]         ; 00586b2b
    FCOMP float ptr [0x005f687d]        ; 00586b32 | DAT_005f687d
    FNSTSW AX                           ; 00586b38
    SAHF                                ; 00586b3a
    JNC 0x00586b51                      ; 00586b3b
        ;   XREF to: 00586b51 (CONDITIONAL_JUMP)  ; LAB_00586b51
    FLD float ptr [ESP + 0x460]         ; 00586b3d
    FADD float ptr [0x005f6879]         ; 00586b44 | DAT_005f6879
    FSTP float ptr [ESP + 0x460]        ; 00586b4a
    FLD float ptr [ESP + 0x460]         ; 00586b51
        ;   Label: LAB_00586b51
    FCOMP float ptr [0x005f6881]        ; 00586b58 | DAT_005f6881
    FNSTSW AX                           ; 00586b5e
    SAHF                                ; 00586b60
    JBE 0x00586b77                      ; 00586b61
        ;   XREF to: 00586b77 (CONDITIONAL_JUMP)  ; LAB_00586b77
    FLD float ptr [ESP + 0x460]         ; 00586b63
    FADD float ptr [0x005f6885]         ; 00586b6a | DAT_005f6885
    FSTP float ptr [ESP + 0x460]        ; 00586b70
    FLD float ptr [EBP + 0x18]          ; 00586b77
        ;   Label: LAB_00586b77
    FMUL float ptr [0x005f6879]         ; 00586b7a | DAT_005f6879
    FLD float ptr [ESP + 0x460]         ; 00586b80
    FXCH                                ; 00586b87
    FST float ptr [ESP + 0x42c]         ; 00586b89
    FCHS                                ; 00586b90
    FSTP float ptr [ESP + 0x428]        ; 00586b92
    FCOMP float ptr [ESP + 0x428]       ; 00586b99
    FNSTSW AX                           ; 00586ba0
    SAHF                                ; 00586ba2
    JNC 0x00586bb3                      ; 00586ba3
        ;   XREF to: 00586bb3 (CONDITIONAL_JUMP)  ; LAB_00586bb3
    MOV EAX,dword ptr [ESP + 0x428]     ; 00586ba5
    MOV dword ptr [ESP + 0x460],EAX     ; 00586bac
    FLD float ptr [ESP + 0x460]         ; 00586bb3
        ;   Label: LAB_00586bb3
    FCOMP float ptr [ESP + 0x42c]       ; 00586bba
    FNSTSW AX                           ; 00586bc1
    SAHF                                ; 00586bc3
    JBE 0x00586bd4                      ; 00586bc4
        ;   XREF to: 00586bd4 (CONDITIONAL_JUMP)  ; LAB_00586bd4
    MOV EAX,dword ptr [ESP + 0x42c]     ; 00586bc6
    MOV dword ptr [ESP + 0x460],EAX     ; 00586bcd
    LEA EAX,[EBX + 0x30]                ; 00586bd4
        ;   Label: LAB_00586bd4
    FLD float ptr [EBX + 0x34]          ; 00586bd7
    PUSH EAX                            ; 00586bda
    FADD float ptr [ESP + 0x464]        ; 00586bdb
    PUSH EBX                            ; 00586be2
    FSTP float ptr [EBX + 0x34]         ; 00586be3
    CALL core_charactr.cpp_FUN_00433d50 ; 00586be6
        ;   XREF to: 00433d50 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433d50()
    ADD ESP,0x8                         ; 00586beb
    MOV EAX,dword ptr [EBX + 0x26fc]    ; 00586bee
        ;   Label: LAB_00586bee
    MOV dword ptr [ESP + 0x454],EAX     ; 00586bf4
    MOV EAX,dword ptr [EAX + 0x154]     ; 00586bfb
    PUSH 0x0                            ; 00586c01
    MOV dword ptr [ESP + 0x47c],EAX     ; 00586c03
    LEA EAX,[EBX + 0x158]               ; 00586c0a
    PUSH EAX                            ; 00586c10
    LEA ESI,[ESP + 0x408]               ; 00586c11
    MOV dword ptr [ESP + 0x448],EAX     ; 00586c18
    CALL core_skeleton.cpp_FUN_00569130 ; 00586c1f
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 00586c24
    LEA EAX,[ESP + 0x3d0]               ; 00586c27
    PUSH EAX                            ; 00586c2e
    LEA EDI,[ESP + 0x3d4]               ; 00586c2f
    LEA ESI,[ESP + 0x404]               ; 00586c36
    PUSH EBX                            ; 00586c3d
    MOV ECX,dword ptr [ESP + 0x45c]     ; 00586c3e
    MOV EAX,dword ptr [ESP + 0x480]     ; 00586c45
    PUSH ECX                            ; 00586c4c
    MOVSD ES:EDI,ESI                    ; 00586c4d
    MOVSD ES:EDI,ESI                    ; 00586c4e
    MOVSD ES:EDI,ESI                    ; 00586c4f
    CALL dword ptr [EAX + 0x110]        ; 00586c50
    ADD ESP,0xc                         ; 00586c56
    TEST EAX,EAX                        ; 00586c59
    JZ 0x00587294                       ; 00586c5b
        ;   XREF to: 00587294 (CONDITIONAL_JUMP)  ; LAB_00587294
    CMP dword ptr [EBX + 0x26fc],0x0    ; 00586c61
    JZ 0x0058729a                       ; 00586c68
        ;   XREF to: 0058729a (CONDITIONAL_JUMP)  ; LAB_0058729a
    FLD float ptr [EBX + 0x200a8]       ; 00586c6e
    FADD float ptr [EBP + 0x18]         ; 00586c74
    FST float ptr [EBX + 0x200a8]       ; 00586c77
    FCOMP float ptr [0x006060ac]        ; 00586c7d | DAT_006060ac
    FNSTSW AX                           ; 00586c83
    SAHF                                ; 00586c85
    JC 0x0058636e                       ; 00586c86
        ;   XREF to: 0058636e (CONDITIONAL_JUMP)  ; LAB_0058636e
    CMP dword ptr [EBX + 0x2700],0x1    ; 00586c8c
    JZ 0x0058636e                       ; 00586c93
        ;   XREF to: 0058636e (CONDITIONAL_JUMP)  ; LAB_0058636e
    PUSH 0x2f                           ; 00586c99
    MOV EAX,dword ptr [ESP + 0x444]     ; 00586c9b
    PUSH EAX                            ; 00586ca2
    CALL core_motion.cpp_FUN_00524a40   ; 00586ca3
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x480],EAX     ; 00586ca8
    ADD ESP,0x8                         ; 00586caf
    PUSH 0x30                           ; 00586cb2
    MOV EDX,dword ptr [ESP + 0x444]     ; 00586cb4
    PUSH EDX                            ; 00586cbb
    CALL core_motion.cpp_FUN_00524a40   ; 00586cbc
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x488],EAX     ; 00586cc1
    FLD float ptr [ESP + 0x488]         ; 00586cc8
    ADD ESP,0x8                         ; 00586ccf
    FADD float ptr [ESP + 0x478]        ; 00586cd2
    FLDZ                                ; 00586cd9
    FCOMPP                              ; 00586cdb
    FNSTSW AX                           ; 00586cdd
    SAHF                                ; 00586cdf
    JNC 0x005872b2                      ; 00586ce0
        ;   XREF to: 005872b2 (CONDITIONAL_JUMP)  ; LAB_005872b2
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 00586ce6
    JZ 0x0058636e                       ; 00586ced
        ;   XREF to: 0058636e (CONDITIONAL_JUMP)  ; LAB_0058636e
    PUSH 0x1                            ; 00586cf3
    PUSH 0x30                           ; 00586cf5
    MOV ESI,dword ptr [ESP + 0x448]     ; 00586cf7
    PUSH ESI                            ; 00586cfe
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00586cff
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00586d04
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 00586d07
    JMP 0x0058636e                      ; 00586d11
        ;   XREF to: 0058636e (UNCONDITIONAL_JUMP)  ; LAB_0058636e
    PUSH 0x38                           ; 00586d16
        ;   Label: LAB_00586d16
    LEA EAX,[EBX + 0x158]               ; 00586d18
    PUSH EAX                            ; 00586d1e
    CALL core_motion.cpp_FUN_00524a40   ; 00586d1f
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x488],EAX     ; 00586d24
    FLD float ptr [ESP + 0x488]         ; 00586d2b
    FLDZ                                ; 00586d32
    ADD ESP,0x8                         ; 00586d34
    FCOMPP                              ; 00586d37
    FNSTSW AX                           ; 00586d39
    SAHF                                ; 00586d3b
    JC 0x00586e93                       ; 00586d3c
        ;   XREF to: 00586e93 (CONDITIONAL_JUMP)  ; LAB_00586e93
    MOV dword ptr [EBX + 0x20000],EDI   ; 00586d42
    FLD float ptr [EBX + 0x20238]       ; 00586d48
        ;   Label: LAB_00586d48
    FLDZ                                ; 00586d4e
    FCOMPP                              ; 00586d50
    FNSTSW AX                           ; 00586d52
    SAHF                                ; 00586d54
    JNC 0x00586e65                      ; 00586d55
        ;   XREF to: 00586e65 (CONDITIONAL_JUMP)  ; LAB_00586e65
    FLD float ptr [EBP + 0x18]          ; 00586d5b
    FCOMP float ptr [EBX + 0x20238]     ; 00586d5e
    FNSTSW AX                           ; 00586d64
    SAHF                                ; 00586d66
    JNC 0x00586ec4                      ; 00586d67
        ;   XREF to: 00586ec4 (CONDITIONAL_JUMP)  ; LAB_00586ec4
    FLD float ptr [EBP + 0x18]          ; 00586d6d
    FLD ST0                             ; 00586d70
    FDIV float ptr [EBX + 0x20238]      ; 00586d72
    FLD float ptr [EBX + 0x20238]       ; 00586d78
    FSUBRP ST2,ST0                      ; 00586d7e
    FSTP float ptr [ESP + 0x34]         ; 00586d80
    FSTP float ptr [EBX + 0x20238]      ; 00586d84
    LEA EAX,[EBX + 0x20228]             ; 00586d8a
        ;   Label: LAB_00586d8a
    FLD float ptr [EAX]                 ; 00586d90
    FMUL float ptr [ESP + 0x34]         ; 00586d92
    FLD float ptr [EAX + 0x4]           ; 00586d96
    FMUL float ptr [ESP + 0x34]         ; 00586d99
    FLD float ptr [EAX + 0x8]           ; 00586d9d
    FMUL float ptr [ESP + 0x34]         ; 00586da0
    FLD float ptr [ESP + 0x34]          ; 00586da4
    LEA EDI,[ESP + 0x148]               ; 00586da8
    LEA ESI,[ESP + 0x1a8]               ; 00586daf
    FLD1                                ; 00586db6
    LEA EDX,[EBX + 0x20]                ; 00586db8
    FSUBRP                              ; 00586dbb
    FXCH ST3                            ; 00586dbd
    FSTP float ptr [ESP + 0x1a8]        ; 00586dbf
    FXCH                                ; 00586dc6
    FSTP float ptr [ESP + 0x1ac]        ; 00586dc8
    FSTP float ptr [ESP + 0x1b0]        ; 00586dcf
    MOVSD ES:EDI,ESI                    ; 00586dd6
    MOVSD ES:EDI,ESI                    ; 00586dd7
    MOVSD ES:EDI,ESI                    ; 00586dd8
    FSTP float ptr [ESP + 0x430]        ; 00586dd9
    FLD float ptr [EDX]                 ; 00586de0
    FLD float ptr [EDX + 0x4]           ; 00586de2
    FLD float ptr [EDX + 0x8]           ; 00586de5
    FXCH ST2                            ; 00586de8
    FADD float ptr [ESP + 0x148]        ; 00586dea
    FXCH                                ; 00586df1
    FADD float ptr [ESP + 0x14c]        ; 00586df3
    FXCH ST2                            ; 00586dfa
    FADD float ptr [ESP + 0x150]        ; 00586dfc
    FXCH                                ; 00586e03
    FSTP float ptr [EDX]                ; 00586e05
    FXCH                                ; 00586e07
    FSTP float ptr [EDX + 0x4]          ; 00586e09
    FSTP float ptr [EDX + 0x8]          ; 00586e0c
    FLD float ptr [EAX]                 ; 00586e0f
    FMUL float ptr [ESP + 0x430]        ; 00586e11
    FLD float ptr [EAX + 0x4]           ; 00586e18
    FMUL float ptr [ESP + 0x430]        ; 00586e1b
    FLD float ptr [EAX + 0x8]           ; 00586e22
    FMUL float ptr [ESP + 0x430]        ; 00586e25
    FXCH ST2                            ; 00586e2c
    FSTP float ptr [EAX]                ; 00586e2e
    FSTP float ptr [EAX + 0x4]          ; 00586e30
    FSTP float ptr [EAX + 0x8]          ; 00586e33
    FLD float ptr [EBX + 0x20234]       ; 00586e36
    FSUB float ptr [EBX + 0x34]         ; 00586e3c
    SUB ESP,0x4                         ; 00586e3f
    FSTP float ptr [ESP]                ; 00586e42
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00586e45
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x484],EAX     ; 00586e4a
    FLD float ptr [ESP + 0x484]         ; 00586e51
    ADD ESP,0x4                         ; 00586e58
    FMUL float ptr [ESP + 0x34]         ; 00586e5b
    FSTP float ptr [EBX + 0x2508]       ; 00586e5f
    PUSH 0x0                            ; 00586e65
        ;   Label: LAB_00586e65
    MOV EAX,dword ptr [EBX + 0x154]     ; 00586e67
    PUSH dword ptr [EBX + 0x2fec]       ; 00586e6d
    PUSH EBX                            ; 00586e73
    CALL dword ptr [EAX + 0x40]         ; 00586e74
    MOV dword ptr [ESP + 0x48c],EAX     ; 00586e77
    MOV EAX,dword ptr [ESP + 0x48c]     ; 00586e7e
    MOV dword ptr [EBX + 0x2504],EAX    ; 00586e85
    ADD ESP,0xc                         ; 00586e8b
    JMP 0x0058636e                      ; 00586e8e
        ;   XREF to: 0058636e (UNCONDITIONAL_JUMP)  ; LAB_0058636e
    MOV EAX,dword ptr [EBX + 0x20000]   ; 00586e93
        ;   Label: LAB_00586e93
    FLD float ptr [EAX + 0x24]          ; 00586e99
    FLD1                                ; 00586e9c
    FADDP                               ; 00586e9e
    FLD float ptr [EBX + 0x24]          ; 00586ea0
    FCOMPP                              ; 00586ea3
    FNSTSW AX                           ; 00586ea5
    SAHF                                ; 00586ea7
    JNC 0x00586d48                      ; 00586ea8
        ;   XREF to: 00586d48 (CONDITIONAL_JUMP)  ; LAB_00586d48
    PUSH ESI                            ; 00586eae
    PUSH EDI                            ; 00586eaf
    LEA EAX,[EBX + 0x158]               ; 00586eb0
    PUSH EAX                            ; 00586eb6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00586eb7
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00586ebc
    JMP 0x00586d48                      ; 00586ebf
        ;   XREF to: 00586d48 (UNCONDITIONAL_JUMP)  ; LAB_00586d48
    MOV EDI,0x3f800000                  ; 00586ec4
        ;   Label: LAB_00586ec4
    MOV dword ptr [EBX + 0x20238],0x0   ; 00586ec9
    MOV dword ptr [ESP + 0x34],EDI      ; 00586ed3
    JMP 0x00586d8a                      ; 00586ed7
        ;   XREF to: 00586d8a (UNCONDITIONAL_JUMP)  ; LAB_00586d8a
    MOV EAX,EDX                         ; 00586edc
        ;   Label: LAB_00586edc
    MOV ECX,dword ptr [EDX + 0x154]     ; 00586ede
    LEA EDX,[ESP + 0x74]                ; 00586ee4
    PUSH EDX                            ; 00586ee8
    PUSH EAX                            ; 00586ee9
    CALL dword ptr [ECX + 0x98]         ; 00586eea
    ADD ESP,0x8                         ; 00586ef0
    CMP dword ptr [ESP + 0x74],0x0      ; 00586ef3
    JZ 0x0058724c                       ; 00586ef8
        ;   XREF to: 0058724c (CONDITIONAL_JUMP)  ; LAB_0058724c
    MOV EAX,dword ptr [ESP + 0x78]      ; 00586efe
    CMP EBX,EAX                         ; 00586f02
    JNZ 0x0058724c                      ; 00586f04
        ;   XREF to: 0058724c (CONDITIONAL_JUMP)  ; LAB_0058724c
    MOV ESI,dword ptr [EAX + 0x1ff88]   ; 00586f0a
    LEA EDI,[ESP + 0x1c0]               ; 00586f10
    LEA ESI,[ESI + 0x30]                ; 00586f17
    MOVSD ES:EDI,ESI                    ; 00586f1a
    MOVSD ES:EDI,ESI                    ; 00586f1b
    MOVSD ES:EDI,ESI                    ; 00586f1c
    FLD float ptr [EAX + 0xc200]        ; 00586f1d
    FMUL float ptr [0x005f6879]         ; 00586f23 | DAT_005f6879
    FMUL double ptr [0x005f6889]        ; 00586f29 | DAT_005f6889
    FMUL float ptr [EBP + 0x18]         ; 00586f2f
    FST float ptr [ESP + 0x448]         ; 00586f32
    FCOMP float ptr [ESP + 0x88]        ; 00586f39
    FNSTSW AX                           ; 00586f40
    SAHF                                ; 00586f42
    JNC 0x00586f53                      ; 00586f43
        ;   XREF to: 00586f53 (CONDITIONAL_JUMP)  ; LAB_00586f53
    MOV EAX,dword ptr [ESP + 0x88]      ; 00586f45
    MOV dword ptr [ESP + 0x448],EAX     ; 00586f4c
    FLD float ptr [ESP + 0x448]         ; 00586f53
        ;   Label: LAB_00586f53
    FCOMP float ptr [ESP + 0x84]        ; 00586f5a
    FNSTSW AX                           ; 00586f61
    SAHF                                ; 00586f63
    JBE 0x00586f74                      ; 00586f64
        ;   XREF to: 00586f74 (CONDITIONAL_JUMP)  ; LAB_00586f74
    MOV EAX,dword ptr [ESP + 0x84]      ; 00586f66
    MOV dword ptr [ESP + 0x448],EAX     ; 00586f6d
    FLD float ptr [ESP + 0x1c4]         ; 00586f74
        ;   Label: LAB_00586f74
    FADD float ptr [ESP + 0x448]        ; 00586f7b
    SUB ESP,0x4                         ; 00586f82
    FSTP float ptr [ESP]                ; 00586f85
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00586f88
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x484],EAX     ; 00586f8d
    FLD float ptr [ESP + 0x484]         ; 00586f94
    ADD ESP,0x4                         ; 00586f9b
    FSTP float ptr [ESP + 0x1c4]        ; 00586f9e
    FLD float ptr [EBX + 0xc204]        ; 00586fa5
    FMUL float ptr [0x005f6879]         ; 00586fab | DAT_005f6879
    FMUL double ptr [0x005f6889]        ; 00586fb1 | DAT_005f6889
    FMUL float ptr [EBP + 0x18]         ; 00586fb7
    FST float ptr [ESP + 0x444]         ; 00586fba
    FCOMP float ptr [ESP + 0x90]        ; 00586fc1
    FNSTSW AX                           ; 00586fc8
    SAHF                                ; 00586fca
    JNC 0x00586fdb                      ; 00586fcb
        ;   XREF to: 00586fdb (CONDITIONAL_JUMP)  ; LAB_00586fdb
    MOV EAX,dword ptr [ESP + 0x90]      ; 00586fcd
    MOV dword ptr [ESP + 0x444],EAX     ; 00586fd4
    FLD float ptr [ESP + 0x444]         ; 00586fdb
        ;   Label: LAB_00586fdb
    FCOMP float ptr [ESP + 0x8c]        ; 00586fe2
    FNSTSW AX                           ; 00586fe9
    SAHF                                ; 00586feb
    JBE 0x00586ffc                      ; 00586fec
        ;   XREF to: 00586ffc (CONDITIONAL_JUMP)  ; LAB_00586ffc
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00586fee
    MOV dword ptr [ESP + 0x444],EAX     ; 00586ff5
    FLD float ptr [ESP + 0x1c0]         ; 00586ffc
        ;   Label: LAB_00586ffc
    FADD float ptr [ESP + 0x444]        ; 00587003
    SUB ESP,0x4                         ; 0058700a
    FSTP float ptr [ESP]                ; 0058700d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00587010
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x47c],EAX     ; 00587015
    FLD float ptr [ESP + 0x47c]         ; 0058701c
    ADD ESP,0x4                         ; 00587023
    LEA EDX,[EBX + 0xc1d8]              ; 00587026
    FSTP float ptr [ESP + 0x1c0]        ; 0058702c
    PUSH EDX                            ; 00587033
    LEA EDX,[ESP + 0x1c4]               ; 00587034
    MOV EAX,dword ptr [EBX + 0x1ff88]   ; 0058703b
    PUSH EDX                            ; 00587041
    MOV ECX,dword ptr [EAX + 0x154]     ; 00587042
    PUSH EAX                            ; 00587048
    LEA ESI,[EBX + 0x158]               ; 00587049
    CALL dword ptr [ECX + 0xa0]         ; 0058704f
    ADD ESP,0xc                         ; 00587055
    TEST EAX,EAX                        ; 00587058
    JZ 0x0058727a                       ; 0058705a
        ;   XREF to: 0058727a (CONDITIONAL_JUMP)  ; LAB_0058727a
    MOV EAX,dword ptr [EBX + 0x1ff88]   ; 00587060
    FLD float ptr [EAX + 0x34]          ; 00587066
    FSUB float ptr [EBX + 0x34]         ; 00587069
    SUB ESP,0x4                         ; 0058706c
    FSTP float ptr [ESP]                ; 0058706f
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00587072
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x484],EAX     ; 00587077
    FLD float ptr [ESP + 0x484]         ; 0058707e
    ADD ESP,0x4                         ; 00587085
    FST float ptr [ESP + 0x2c]          ; 00587088
    FST double ptr [ESP]                ; 0058708c
    FCOMP double ptr [0x005f6851]       ; 0058708f | DAT_005f6851
    FNSTSW AX                           ; 00587095
    SAHF                                ; 00587097
    JNC 0x0058725a                      ; 00587098
        ;   XREF to: 0058725a (CONDITIONAL_JUMP)  ; LAB_0058725a
    PUSH 0x1                            ; 0058709e
    PUSH 0x6                            ; 005870a0
    PUSH ESI                            ; 005870a2
        ;   Label: LAB_005870a2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005870a3
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005870a8
    LEA EDI,[ESP + 0x3c4]               ; 005870ab
    LEA ESI,[EBX + 0x30]                ; 005870b2
    FLD float ptr [ESP + 0x2c]          ; 005870b5
    MOVSD ES:EDI,ESI                    ; 005870b9
    MOVSD ES:EDI,ESI                    ; 005870ba
    MOVSD ES:EDI,ESI                    ; 005870bb
    LEA EAX,[ESP + 0x3c4]               ; 005870bc
    FMUL float ptr [EBX + 0x20018]      ; 005870c3
    PUSH EAX                            ; 005870c9
    FADD float ptr [ESP + 0x3cc]        ; 005870ca
    PUSH EBX                            ; 005870d1
    FSTP float ptr [ESP + 0x3d0]        ; 005870d2
    CALL core_charactr.cpp_FUN_00433d50 ; 005870d9
        ;   XREF to: 00433d50 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433d50()
    ADD ESP,0x8                         ; 005870de
    FLD float ptr [ESP + 0x7c]          ; 005870e1
    FADD double ptr [0x005f6891]        ; 005870e5 | DAT_005f6891
    XOR EDX,EDX                         ; 005870eb
    FSTP float ptr [ESP + 0x478]        ; 005870ed
    MOV EAX,dword ptr [ESP + 0x478]     ; 005870f4
    MOV dword ptr [ESP + 0x34c],EDX     ; 005870fb
    MOV dword ptr [ESP + 0x354],EAX     ; 00587102
    LEA EAX,[ESP + 0x34c]               ; 00587109
    MOV dword ptr [ESP + 0x350],EDX     ; 00587110
    PUSH EAX                            ; 00587117
    MOV ESI,dword ptr [EBX + 0x1ff88]   ; 00587118
    PUSH ESI                            ; 0058711e
    LEA ESI,[ESP + 0x27c]               ; 0058711f
    LEA EDI,[ESP + 0x3f0]               ; 00587126
    CALL core_actor.cpp_FUN_00408b40    ; 0058712d
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x27c]               ; 00587132
    ADD ESP,0x8                         ; 00587139
    LEA EAX,[EBX + 0x20]                ; 0058713c
    MOVSD ES:EDI,ESI                    ; 0058713f
    MOVSD ES:EDI,ESI                    ; 00587140
    MOVSD ES:EDI,ESI                    ; 00587141
    LEA EDX,[EBX + 0x20018]             ; 00587142
    FLD float ptr [ESP + 0x3e8]         ; 00587148
    FLD float ptr [ESP + 0x3ec]         ; 0058714f
    FLD float ptr [ESP + 0x3f0]         ; 00587156
    LEA EDI,[ESP + 0x1e4]               ; 0058715d
    LEA ESI,[ESP + 0x2a4]               ; 00587164
    MOV dword ptr [ESP + 0x478],EDX     ; 0058716b
    FXCH ST2                            ; 00587172
    FSUB float ptr [EAX]                ; 00587174
    FXCH                                ; 00587176
    FSUB float ptr [EAX + 0x4]          ; 00587178
    FXCH ST2                            ; 0058717b
    FSUB float ptr [EAX + 0x8]          ; 0058717d
    FXCH                                ; 00587180
    FSTP float ptr [ESP + 0x2a4]        ; 00587182
    FXCH                                ; 00587189
    FSTP float ptr [ESP + 0x2a8]        ; 0058718b
    LEA EAX,[ESP + 0x1e4]               ; 00587192
    FSTP float ptr [ESP + 0x2ac]        ; 00587199
    PUSH EAX                            ; 005871a0
    MOVSD ES:EDI,ESI                    ; 005871a1
    MOVSD ES:EDI,ESI                    ; 005871a2
    MOVSD ES:EDI,ESI                    ; 005871a3
    PUSH EBX                            ; 005871a4
    LEA ESI,[ESP + 0x204]               ; 005871a5
    LEA EDI,[ESP + 0x270]               ; 005871ac
    CALL core_actor.cpp_FUN_00408b00    ; 005871b3
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x204]               ; 005871b8
    ADD ESP,0x8                         ; 005871bf
    MOVSD ES:EDI,ESI                    ; 005871c2
    MOVSD ES:EDI,ESI                    ; 005871c3
    MOVSD ES:EDI,ESI                    ; 005871c4
    MOV EAX,dword ptr [ESP + 0x478]     ; 005871c5
    FLD float ptr [ESP + 0x268]         ; 005871cc
    FMUL float ptr [EAX]                ; 005871d3
    FLD float ptr [ESP + 0x26c]         ; 005871d5
    FMUL float ptr [EAX]                ; 005871dc
    FLD float ptr [ESP + 0x270]         ; 005871de
    FMUL float ptr [EAX]                ; 005871e5
    LEA EDX,[EBX + 0x249c]              ; 005871e7
    LEA EDI,[ESP + 0x214]               ; 005871ed
    LEA ESI,[ESP + 0x10c]               ; 005871f4
    FXCH ST2                            ; 005871fb
    FSTP float ptr [ESP + 0x10c]        ; 005871fd
    FSTP float ptr [ESP + 0x110]        ; 00587204
    FSTP float ptr [ESP + 0x114]        ; 0058720b
    LEA EAX,[ESP + 0x214]               ; 00587212
    MOVSD ES:EDI,ESI                    ; 00587219
    MOVSD ES:EDI,ESI                    ; 0058721a
    MOVSD ES:EDI,ESI                    ; 0058721b
    CMP EDX,EAX                         ; 0058721c
    JZ 0x0058723d                       ; 0058721e
        ;   XREF to: 0058723d (CONDITIONAL_JUMP)  ; LAB_0058723d
    MOV EAX,dword ptr [ESP + 0x214]     ; 00587220
    MOV dword ptr [EDX],EAX             ; 00587227
    MOV EAX,dword ptr [ESP + 0x218]     ; 00587229
    MOV dword ptr [EDX + 0x4],EAX       ; 00587230
    MOV EAX,dword ptr [ESP + 0x21c]     ; 00587233
    MOV dword ptr [EDX + 0x8],EAX       ; 0058723a
    MOV dword ptr [EBX + 0x24a0],0x0    ; 0058723d
        ;   Label: LAB_0058723d
    JMP 0x0058636e                      ; 00587247
        ;   XREF to: 0058636e (UNCONDITIONAL_JUMP)  ; LAB_0058636e
    PUSH EBX                            ; 0058724c
        ;   Label: LAB_0058724c
    CALL core_hero.cpp_CHero_stopNearbyInteraction_FUN_004ebe80 ; 0058724d
        ;   XREF to: 004ebe80 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopNearbyInteraction_FUN_004ebe80(CHero * this_ptr)
    ADD ESP,0x4                         ; 00587252
    JMP 0x0058636e                      ; 00587255
        ;   XREF to: 0058636e (UNCONDITIONAL_JUMP)  ; LAB_0058636e
    FLD double ptr [ESP]                ; 0058725a
        ;   Label: LAB_0058725a
    FCOMP double ptr [0x005f6859]       ; 0058725d | DAT_005f6859
    FNSTSW AX                           ; 00587263
    SAHF                                ; 00587265
    JBE 0x00587271                      ; 00587266
        ;   XREF to: 00587271 (CONDITIONAL_JUMP)  ; LAB_00587271
    PUSH 0x1                            ; 00587268
    PUSH 0x5                            ; 0058726a
    JMP 0x005870a2                      ; 0058726c
        ;   XREF to: 005870a2 (UNCONDITIONAL_JUMP)  ; LAB_005870a2
    PUSH 0x1                            ; 00587271
        ;   Label: LAB_00587271
    PUSH 0x0                            ; 00587273
    JMP 0x005870a2                      ; 00587275
        ;   XREF to: 005870a2 (UNCONDITIONAL_JUMP)  ; LAB_005870a2
    PUSH 0x1                            ; 0058727a
        ;   Label: LAB_0058727a
    PUSH EAX                            ; 0058727c
    PUSH ESI                            ; 0058727d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0058727e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00587283
    PUSH EBX                            ; 00587286
    CALL core_hero.cpp_CHero_stopNearbyInteraction_FUN_004ebe80 ; 00587287
        ;   XREF to: 004ebe80 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopNearbyInteraction_FUN_004ebe80(CHero * this_ptr)
    ADD ESP,0x4                         ; 0058728c
    JMP 0x0058636e                      ; 0058728f
        ;   XREF to: 0058636e (UNCONDITIONAL_JUMP)  ; LAB_0058636e
    MOV dword ptr [EBX + 0x26fc],EAX    ; 00587294
        ;   Label: LAB_00587294
    PUSH 0x1                            ; 0058729a
        ;   Label: LAB_0058729a
    PUSH 0x0                            ; 0058729c
    LEA EAX,[EBX + 0x158]               ; 0058729e
    PUSH EAX                            ; 005872a4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005872a5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005872aa
    JMP 0x0058636e                      ; 005872ad
        ;   XREF to: 0058636e (UNCONDITIONAL_JUMP)  ; LAB_0058636e
    PUSH EBX                            ; 005872b2
        ;   Label: LAB_005872b2
    MOV EAX,dword ptr [EBX + 0x154]     ; 005872b3
    CALL dword ptr [EAX + 0xf0]         ; 005872b9
    ADD ESP,0x4                         ; 005872bf
    JMP 0x0058636e                      ; 005872c2
        ;   XREF to: 0058636e (UNCONDITIONAL_JUMP)  ; LAB_0058636e
    MOV ESI,dword ptr [EBX + 0x1ff7c]   ; 005872c7
        ;   Label: LAB_005872c7
    TEST ESI,ESI                        ; 005872cd
    JZ 0x0058760d                       ; 005872cf
        ;   XREF to: 0058760d (CONDITIONAL_JUMP)  ; LAB_0058760d
    MOV EDX,dword ptr [EBX + 0xc1e4]    ; 005872d5
    MOV dword ptr [ESP + 0x470],EDI     ; 005872db
    TEST EDX,EDX                        ; 005872e2
    JNZ 0x00587315                      ; 005872e4
        ;   XREF to: 00587315 (CONDITIONAL_JUMP)  ; LAB_00587315
    MOV EDI,dword ptr [ESP + 0x470]     ; 005872e6
        ;   Label: LAB_005872e6
    TEST EDI,EDI                        ; 005872ed
    JNZ 0x0058636e                      ; 005872ef
        ;   XREF to: 0058636e (CONDITIONAL_JUMP)  ; LAB_0058636e
    PUSH 0x1                            ; 005872f5
    PUSH EDI                            ; 005872f7
    LEA EAX,[EBX + 0x158]               ; 005872f8
    PUSH EAX                            ; 005872fe
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005872ff
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00587304
    PUSH EBX                            ; 00587307
    CALL core_hero.cpp_CHero_stopPushingBox_FUN_004ebbe0 ; 00587308
        ;   XREF to: 004ebbe0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopPushingBox_FUN_004ebbe0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0058730d
    JMP 0x0058636e                      ; 00587310
        ;   XREF to: 0058636e (UNCONDITIONAL_JUMP)  ; LAB_0058636e
    PUSH ESI                            ; 00587315
        ;   Label: LAB_00587315
    MOV EDX,dword ptr [ESI + 0x154]     ; 00587316
    LEA ESI,[ESP + 0xe0]                ; 0058731c
    LEA EDI,[ESP + 0xc8]                ; 00587323
    CALL dword ptr [EDX + 0x1c]         ; 0058732a
    MOV ECX,0x6                         ; 0058732d
    LEA ESI,[ESP + 0xe0]                ; 00587332
    ADD ESP,0x4                         ; 00587339
    MOVSD.REP ES:EDI,ESI                ; 0058733c
    FLD float ptr [ESP + 0xc4]          ; 0058733e
    FLD float ptr [ESP + 0xc8]          ; 00587345
    FLD float ptr [ESP + 0xcc]          ; 0058734c
    LEA EDI,[ESP + 0x244]               ; 00587353
    LEA ESI,[ESP + 0x394]               ; 0058735a
    FXCH ST2                            ; 00587361
    FADD float ptr [ESP + 0xd0]         ; 00587363
    FXCH                                ; 0058736a
    FADD float ptr [ESP + 0xd4]         ; 0058736c
    FXCH ST2                            ; 00587373
    FADD float ptr [ESP + 0xd8]         ; 00587375
    FXCH                                ; 0058737c
    FSTP float ptr [ESP + 0x394]        ; 0058737e
    FXCH                                ; 00587385
    FSTP float ptr [ESP + 0x398]        ; 00587387
    FSTP float ptr [ESP + 0x39c]        ; 0058738e
    MOVSD ES:EDI,ESI                    ; 00587395
    MOVSD ES:EDI,ESI                    ; 00587396
    MOVSD ES:EDI,ESI                    ; 00587397
    FLD float ptr [ESP + 0x244]         ; 00587398
    FMUL float ptr [0x005f6845]         ; 0058739f | DAT_005f6845
    FLD float ptr [ESP + 0x248]         ; 005873a5
    FMUL float ptr [0x005f6845]         ; 005873ac | DAT_005f6845
    FLD float ptr [ESP + 0x24c]         ; 005873b2
    FMUL float ptr [0x005f6845]         ; 005873b9 | DAT_005f6845
    LEA EAX,[ESP + 0x31c]               ; 005873bf
    LEA EDI,[ESP + 0x31c]               ; 005873c6
    LEA ESI,[ESP + 0x388]               ; 005873cd
    FXCH ST2                            ; 005873d4
    FSTP float ptr [ESP + 0x388]        ; 005873d6
    FSTP float ptr [ESP + 0x38c]        ; 005873dd
    FSTP float ptr [ESP + 0x390]        ; 005873e4
    MOVSD ES:EDI,ESI                    ; 005873eb
    MOVSD ES:EDI,ESI                    ; 005873ec
    MOVSD ES:EDI,ESI                    ; 005873ed
    PUSH EAX                            ; 005873ee
    MOV ECX,dword ptr [EBX + 0x1ff7c]   ; 005873ef
    PUSH ECX                            ; 005873f5
    LEA ESI,[ESP + 0x2e8]               ; 005873f6
    LEA EDI,[ESP + 0x3a8]               ; 005873fd
    CALL core_actor.cpp_FUN_00408b40    ; 00587404
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00587409
    LEA EAX,[ESP + 0x3a0]               ; 0058740c
    LEA ESI,[ESP + 0x2e0]               ; 00587413
    PUSH EAX                            ; 0058741a
    MOVSD ES:EDI,ESI                    ; 0058741b
    MOVSD ES:EDI,ESI                    ; 0058741c
    MOVSD ES:EDI,ESI                    ; 0058741d
    PUSH EBX                            ; 0058741e
    LEA ESI,[ESP + 0x348]               ; 0058741f
    LEA EDI,[ESP + 0x33c]               ; 00587426
    CALL core_actor.cpp_FUN_00408bb0    ; 0058742d
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x348]               ; 00587432
    ADD ESP,0x8                         ; 00587439
    LEA EAX,[ESP + 0x334]               ; 0058743c
    MOVSD ES:EDI,ESI                    ; 00587443
    MOVSD ES:EDI,ESI                    ; 00587444
    MOVSD ES:EDI,ESI                    ; 00587445
    PUSH EAX                            ; 00587446
    LEA ESI,[ESP + 0x410]               ; 00587447
    LEA EDI,[ESP + 0x2c0]               ; 0058744e
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00587455
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x410]               ; 0058745a
    ADD ESP,0x4                         ; 00587461
    MOVSD ES:EDI,ESI                    ; 00587464
    MOVSD ES:EDI,ESI                    ; 00587465
    MOVSD ES:EDI,ESI                    ; 00587466
    PUSH dword ptr [ESP + 0x2c0]        ; 00587467
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0058746e
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x484],EAX     ; 00587473
    LEA EDI,[ESP + 0x188]               ; 0058747a
    FLD float ptr [ESP + 0x484]         ; 00587481
    ADD ESP,0x4                         ; 00587488
    LEA ESI,[ESP + 0x13c]               ; 0058748b
    FLD float ptr [ESP + 0xd0]          ; 00587492
    FLD float ptr [ESP + 0xd4]          ; 00587499
    FLD float ptr [ESP + 0xd8]          ; 005874a0
    FXCH ST2                            ; 005874a7
    FSUB float ptr [ESP + 0xc4]         ; 005874a9
    FXCH                                ; 005874b0
    FSUB float ptr [ESP + 0xc8]         ; 005874b2
    FXCH ST2                            ; 005874b9
    FSUB float ptr [ESP + 0xcc]         ; 005874bb
    FXCH                                ; 005874c2
    FSTP float ptr [ESP + 0x13c]        ; 005874c4
    FXCH                                ; 005874cb
    FSTP float ptr [ESP + 0x140]        ; 005874cd
    FSTP float ptr [ESP + 0x144]        ; 005874d4
    MOVSD ES:EDI,ESI                    ; 005874db
    MOVSD ES:EDI,ESI                    ; 005874dc
    MOVSD ES:EDI,ESI                    ; 005874dd
    FLD float ptr [ESP + 0x184]         ; 005874de
    FMUL float ptr [0x005f6845]         ; 005874e5 | DAT_005f6845
    FLD float ptr [ESP + 0x188]         ; 005874eb
    FMUL float ptr [0x005f6845]         ; 005874f2 | DAT_005f6845
    FLD float ptr [ESP + 0x18c]         ; 005874f8
    FMUL float ptr [0x005f6845]         ; 005874ff | DAT_005f6845
    LEA EDI,[ESP + 0x25c]               ; 00587505
    LEA ESI,[ESP + 0x298]               ; 0058750c
    FXCH ST2                            ; 00587513
    FSTP float ptr [ESP + 0x298]        ; 00587515
    FSTP float ptr [ESP + 0x29c]        ; 0058751c
    FSTP float ptr [ESP + 0x2a0]        ; 00587523
    MOVSD ES:EDI,ESI                    ; 0058752a
    MOVSD ES:EDI,ESI                    ; 0058752b
    MOVSD ES:EDI,ESI                    ; 0058752c
    FLD float ptr [ESP + 0x25c]         ; 0058752d
    FMUL ST0                            ; 00587534
    FLD float ptr [ESP + 0x264]         ; 00587536
    FMUL ST0                            ; 0058753d
    FADDP                               ; 0058753f
    FSQRT                               ; 00587541
    FXCH                                ; 00587543
    FSTP float ptr [ESP + 0x28]         ; 00587545
    XOR ESI,ESI                         ; 00587549
    FSUBR float ptr [ESP + 0x33c]       ; 0058754b
    MOV dword ptr [ESP + 0x260],ESI     ; 00587552
    FCOMP double ptr [0x005f6861]       ; 00587559 | DAT_005f6861
    FNSTSW AX                           ; 0058755f
    SAHF                                ; 00587561
    JNC 0x005872e6                      ; 00587562
        ;   XREF to: 005872e6 (CONDITIONAL_JUMP)  ; LAB_005872e6
    FLD float ptr [ESP + 0x338]         ; 00587568
    FLD1                                ; 0058756f
    FXCH                                ; 00587571
    FSTP double ptr [ESP + 0x18]        ; 00587573
    FCOMP double ptr [ESP + 0x18]       ; 00587577
    FNSTSW AX                           ; 0058757b
    SAHF                                ; 0058757d
    JNC 0x005872e6                      ; 0058757e
        ;   XREF to: 005872e6 (CONDITIONAL_JUMP)  ; LAB_005872e6
    FLD double ptr [ESP + 0x18]         ; 00587584
    FCOMP double ptr [0x005f6869]       ; 00587588 | DAT_005f6869
    FNSTSW AX                           ; 0058758e
    SAHF                                ; 00587590
    JNC 0x005872e6                      ; 00587591
        ;   XREF to: 005872e6 (CONDITIONAL_JUMP)  ; LAB_005872e6
    FLD float ptr [ESP + 0x28]          ; 00587597
    FABS                                ; 0058759b
    FCOMP double ptr [0x005f6871]       ; 0058759d | DAT_005f6871
    FNSTSW AX                           ; 005875a3
    SAHF                                ; 005875a5
    JNC 0x005872e6                      ; 005875a6
        ;   XREF to: 005872e6 (CONDITIONAL_JUMP)  ; LAB_005872e6
    FLD float ptr [EBP + 0x18]          ; 005875ac
    FMUL float ptr [0x005f6879]         ; 005875af | DAT_005f6879
    FST float ptr [ESP + 0x43c]         ; 005875b5
    FCHS                                ; 005875bc
    FCOMP float ptr [ESP + 0x28]        ; 005875be
    FNSTSW AX                           ; 005875c2
    SAHF                                ; 005875c4
    JA 0x005875fe                       ; 005875c5
        ;   XREF to: 005875fe (CONDITIONAL_JUMP)  ; LAB_005875fe
    FLD float ptr [ESP + 0x28]          ; 005875c7
        ;   Label: LAB_005875c7
    FCOMP float ptr [ESP + 0x43c]       ; 005875cb
    FNSTSW AX                           ; 005875d2
    SAHF                                ; 005875d4
    JBE 0x005875e2                      ; 005875d5
        ;   XREF to: 005875e2 (CONDITIONAL_JUMP)  ; LAB_005875e2
    MOV EAX,dword ptr [ESP + 0x43c]     ; 005875d7
    MOV dword ptr [ESP + 0x28],EAX      ; 005875de
    LEA EAX,[EBX + 0x30]                ; 005875e2
        ;   Label: LAB_005875e2
    FLD float ptr [EBX + 0x34]          ; 005875e5
    PUSH EAX                            ; 005875e8
    FADD float ptr [ESP + 0x2c]         ; 005875e9
    PUSH EBX                            ; 005875ed
    FSTP float ptr [EBX + 0x34]         ; 005875ee
    CALL core_charactr.cpp_FUN_00433d50 ; 005875f1
        ;   XREF to: 00433d50 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433d50()
    ADD ESP,0x8                         ; 005875f6
    JMP 0x0058636e                      ; 005875f9
        ;   XREF to: 0058636e (UNCONDITIONAL_JUMP)  ; LAB_0058636e
    FLD float ptr [ESP + 0x43c]         ; 005875fe
        ;   Label: LAB_005875fe
    FCHS                                ; 00587605
    FSTP float ptr [ESP + 0x28]         ; 00587607
    JMP 0x005875c7                      ; 0058760b
        ;   XREF to: 005875c7 (UNCONDITIONAL_JUMP)  ; LAB_005875c7
    PUSH dword ptr [EBP + 0x18]         ; 0058760d
        ;   Label: LAB_0058760d
    PUSH EBX                            ; 00587610
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 00587611
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    MOV EDX,EAX                         ; 00587616
    ADD ESP,0x8                         ; 00587618
    LEA EAX,[EBX + 0x158]               ; 0058761b
    TEST EDX,EDX                        ; 00587621
    JZ 0x005876a6                       ; 00587623
        ;   XREF to: 005876a6 (CONDITIONAL_JUMP)  ; LAB_005876a6
    MOV EDX,dword ptr [EBX + 0x273c]    ; 00587629
    CMP EDX,0x2                         ; 0058762f
    JNC 0x00587693                      ; 00587632
        ;   XREF to: 00587693 (CONDITIONAL_JUMP)  ; LAB_00587693
    CMP EDX,0x1                         ; 00587634
    JNZ 0x00587687                      ; 00587637
        ;   XREF to: 00587687 (CONDITIONAL_JUMP)  ; LAB_00587687
    PUSH EDX                            ; 00587639
    PUSH EDX                            ; 0058763a
    PUSH EAX                            ; 0058763b
        ;   Label: LAB_0058763b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0058763c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00587641
        ;   Label: LAB_00587641
    LEA EAX,[EBX + 0x249c]              ; 00587644
    MOV dword ptr [EAX + 0x8],0x0       ; 0058764a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00587651
    MOV dword ptr [EAX + 0x4],EDX       ; 00587654
    MOV EDX,dword ptr [EAX + 0x4]       ; 00587657
    MOV dword ptr [EAX],EDX             ; 0058765a
    JMP 0x0058636e                      ; 0058765c
        ;   XREF to: 0058636e (UNCONDITIONAL_JUMP)  ; LAB_0058636e
    PUSH 0x1                            ; 00587661
        ;   Label: LAB_00587661
    PUSH EDI                            ; 00587663
    PUSH EAX                            ; 00587664
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00587665
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058766a
    PUSH EBX                            ; 0058766d
    PUSH 0x5f67af                       ; 0058766e | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x00611100]      ; 00587673 | g_CConsolePtr
    PUSH EDI                            ; 00587679 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0058767a
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    JMP 0x00587641                      ; 0058767f
        ;   XREF to: 00587641 (UNCONDITIONAL_JUMP)  ; LAB_00587641
    PUSH 0x1                            ; 00587681
        ;   Label: LAB_00587681
    PUSH 0x4                            ; 00587683
    JMP 0x0058763b                      ; 00587685
        ;   XREF to: 0058763b (UNCONDITIONAL_JUMP)  ; LAB_0058763b
    PUSH 0x1                            ; 00587687
        ;   Label: LAB_00587687
    PUSH 0x0                            ; 00587689
    LEA EAX,[EBX + 0x158]               ; 0058768b
    JMP 0x0058763b                      ; 00587691
        ;   XREF to: 0058763b (UNCONDITIONAL_JUMP)  ; LAB_0058763b
    JBE 0x00587681                      ; 00587693
        ;   XREF to: 00587681 (CONDITIONAL_JUMP)  ; LAB_00587681
        ;   Label: LAB_00587693
    CMP EDX,0x3                         ; 00587695
    JZ 0x00587661                       ; 00587698
        ;   XREF to: 00587661 (CONDITIONAL_JUMP)  ; LAB_00587661
    PUSH 0x1                            ; 0058769a
    PUSH 0x0                            ; 0058769c
    LEA EAX,[EBX + 0x158]               ; 0058769e
    JMP 0x0058763b                      ; 005876a4
        ;   XREF to: 0058763b (UNCONDITIONAL_JUMP)  ; LAB_0058763b
    CMP dword ptr [ESP + 0x45c],0x0     ; 005876a6
        ;   Label: LAB_005876a6
    JZ 0x0058636e                       ; 005876ae
        ;   XREF to: 0058636e (CONDITIONAL_JUMP)  ; LAB_0058636e
    PUSH EAX                            ; 005876b4
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005876b5
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005876ba
    ADD ESP,0x4                         ; 005876bd
    CMP EAX,0x12                        ; 005876c0
    JNC 0x00587908                      ; 005876c3
        ;   XREF to: 00587908 (CONDITIONAL_JUMP)  ; LAB_00587908
    CMP EAX,0x2                         ; 005876c9
    JNC 0x00587922                      ; 005876cc
        ;   XREF to: 00587922 (CONDITIONAL_JUMP)  ; LAB_00587922
    CMP dword ptr [EBX + 0x2500],0x0    ; 005876d2
        ;   Label: LAB_005876d2
    JZ 0x00587888                       ; 005876d9
        ;   XREF to: 00587888 (CONDITIONAL_JUMP)  ; LAB_00587888
    LEA EAX,[EBX + 0x158]               ; 005876df
    PUSH EAX                            ; 005876e5
    XOR ESI,ESI                         ; 005876e6
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005876e8
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005876ed
    MOV EDX,dword ptr [EBX + 0xc1d8]    ; 005876f0
    MOV EDI,dword ptr [EAX + 0x24]      ; 005876f6
    TEST EDX,EDX                        ; 005876f9
    JZ 0x005878a0                       ; 005876fb
        ;   XREF to: 005878a0 (CONDITIONAL_JUMP)  ; LAB_005878a0
    CMP dword ptr [EBX + 0xc1e0],0x0    ; 00587701
    JZ 0x00587896                       ; 00587708
        ;   XREF to: 00587896 (CONDITIONAL_JUMP)  ; LAB_00587896
    MOV ESI,0x4                         ; 0058770e
    PUSH 0x1                            ; 00587713
        ;   Label: LAB_00587713
    LEA EAX,[EBX + 0x158]               ; 00587715
    PUSH EAX                            ; 0058771b
    MOV dword ptr [ESP + 0x428],EAX     ; 0058771c
    CALL core_motion.cpp_FUN_00524a40   ; 00587723
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x488],EAX     ; 00587728
    FLD float ptr [ESP + 0x488]         ; 0058772f
    ADD ESP,0x8                         ; 00587736
    FMUL float ptr [0x006060a0]         ; 00587739 | DAT_006060a0
    PUSH 0x4                            ; 0058773f
    MOV EDX,dword ptr [ESP + 0x424]     ; 00587741
    PUSH EDX                            ; 00587748
    FSTP float ptr [ESP + 0x480]        ; 00587749
    CALL core_motion.cpp_FUN_00524a40   ; 00587750
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x488],EAX     ; 00587755
    FLD float ptr [ESP + 0x488]         ; 0058775c
    ADD ESP,0x8                         ; 00587763
    FMUL float ptr [0x006060a4]         ; 00587766 | DAT_006060a4
    PUSH 0x2                            ; 0058776c
    MOV ECX,dword ptr [ESP + 0x424]     ; 0058776e
    FADD float ptr [ESP + 0x47c]        ; 00587775
    PUSH ECX                            ; 0058777c
    FSTP float ptr [ESP + 0x480]        ; 0058777d
    CALL core_motion.cpp_FUN_00524a40   ; 00587784
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x488],EAX     ; 00587789
    FLD float ptr [ESP + 0x488]         ; 00587790
    FMUL float ptr [0x006060a8]         ; 00587797 | DAT_006060a8
    ADD ESP,0x8                         ; 0058779d
    FADD float ptr [ESP + 0x478]        ; 005877a0
    FLD float ptr [EBX + 0xc1fc]        ; 005877a7
    FMUL float ptr [EBP + 0x18]         ; 005877ad
    FLD float ptr [EBX + 0xc200]        ; 005877b0
    FMUL float ptr [EBX + 0x2528]       ; 005877b6
    FXCH                                ; 005877bc
    FMULP ST2                           ; 005877be
    MOV EAX,dword ptr [EBX + 0xc1f4]    ; 005877c0
    FST float ptr [EBX + 0x2508]        ; 005877c6
    FLD ST0                             ; 005877cc
    FLD float ptr [EBX + 0x2508]        ; 005877ce
    FLD ST0                             ; 005877d4
    FLD float ptr [EBX + 0x2508]        ; 005877d6
    FXCH ST4                            ; 005877dc
    FSUBR float ptr [EBX + 0x20024]     ; 005877de
    FXCH ST3                            ; 005877e4
    FSUBR float ptr [EBX + 0x1ffc4]     ; 005877e6
    FXCH ST2                            ; 005877ec
    FSUBR float ptr [EBX + 0x1ffe4]     ; 005877ee
    FXCH                                ; 005877f4
    FSUBR float ptr [EBX + 0x1ffcc]     ; 005877f6
    FXCH ST4                            ; 005877fc
    FSUBR float ptr [EBX + 0x1ffec]     ; 005877fe
    FXCH ST3                            ; 00587804
    FSTP float ptr [EBX + 0x20024]      ; 00587806
    FXCH                                ; 0058780c
    FSTP float ptr [EBX + 0x1ffc4]      ; 0058780e
    FSTP float ptr [EBX + 0x1ffe4]      ; 00587814
    FXCH                                ; 0058781a
    FSTP float ptr [EBX + 0x1ffcc]      ; 0058781c
    FXCH                                ; 00587822
    FADD float ptr [EBX + 0x250c]       ; 00587824
    FXCH                                ; 0058782a
    FSTP float ptr [EBX + 0x1ffec]      ; 0058782c
    FSTP float ptr [EBX + 0x250c]       ; 00587832
    TEST EAX,EAX                        ; 00587838
    JZ 0x00587860                       ; 0058783a
        ;   XREF to: 00587860 (CONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [EBX + 0x2c98],0xe    ; 0058783c
    JZ 0x00587860                       ; 00587843
        ;   XREF to: 00587860 (CONDITIONAL_JUMP)  ; caseD_3
    CMP EDI,0x6                         ; 00587845
    JA 0x00587860                       ; 00587848
        ;   XREF to: 00587860 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EDI*0x4 + 0x585ae0]  ; 0058784a | caseD_6 | caseD_3 | caseD_4
        ;   Label: switchD
    MOV ESI,0x16                        ; 00587851
        ;   Label: caseD_0
    MOV dword ptr [EBX + 0x2500],0x0    ; 00587856
        ;   Label: LAB_00587856
    CMP ESI,EDI                         ; 00587860
        ;   Label: caseD_3
    JZ 0x00587876                       ; 00587862
        ;   XREF to: 00587876 (CONDITIONAL_JUMP)  ; LAB_00587876
    PUSH 0x1                            ; 00587864
    PUSH ESI                            ; 00587866
    LEA EAX,[EBX + 0x158]               ; 00587867
    PUSH EAX                            ; 0058786d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0058786e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00587873
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 00587876
        ;   Label: LAB_00587876
    JZ 0x00587888                       ; 0058787d
        ;   XREF to: 00587888 (CONDITIONAL_JUMP)  ; LAB_00587888
    PUSH EBX                            ; 0058787f
    CALL core_hero.cpp_CHero_tryUseSelectedItem_FUN_004ec020 ; 00587880
        ;   XREF to: 004ec020 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryUseSelectedItem_FUN_004ec020(CHero * this_ptr)
    ADD ESP,0x4                         ; 00587885
    XOR ESI,ESI                         ; 00587888
        ;   Label: LAB_00587888
    MOV dword ptr [ESP + 0x474],ESI     ; 0058788a
    JMP 0x0058636e                      ; 00587891
        ;   XREF to: 0058636e (UNCONDITIONAL_JUMP)  ; LAB_0058636e
    MOV ESI,0x1                         ; 00587896
        ;   Label: LAB_00587896
    JMP 0x00587713                      ; 0058789b
        ;   XREF to: 00587713 (UNCONDITIONAL_JUMP)  ; LAB_00587713
    CMP dword ptr [EBX + 0xc1dc],0x0    ; 005878a0
        ;   Label: LAB_005878a0
    JZ 0x005878b3                       ; 005878a7
        ;   XREF to: 005878b3 (CONDITIONAL_JUMP)  ; LAB_005878b3
    MOV ESI,0x2                         ; 005878a9
    JMP 0x00587713                      ; 005878ae
        ;   XREF to: 00587713 (UNCONDITIONAL_JUMP)  ; LAB_00587713
    FLD float ptr [EBX + 0xc1fc]        ; 005878b3
        ;   Label: LAB_005878b3
    FST double ptr [ESP + 0x8]          ; 005878b9
    FCOMP double ptr [0x005f6851]       ; 005878bd | DAT_005f6851
    FNSTSW AX                           ; 005878c3
    SAHF                                ; 005878c5
    JNC 0x005878d2                      ; 005878c6
        ;   XREF to: 005878d2 (CONDITIONAL_JUMP)  ; LAB_005878d2
    MOV ESI,0x5                         ; 005878c8
    JMP 0x00587713                      ; 005878cd
        ;   XREF to: 00587713 (UNCONDITIONAL_JUMP)  ; LAB_00587713
    FLD double ptr [ESP + 0x8]          ; 005878d2
        ;   Label: LAB_005878d2
    FCOMP double ptr [0x005f6859]       ; 005878d6 | DAT_005f6859
    FNSTSW AX                           ; 005878dc
    SAHF                                ; 005878de
    JBE 0x00587713                      ; 005878df
        ;   XREF to: 00587713 (CONDITIONAL_JUMP)  ; LAB_00587713
    MOV ESI,0x6                         ; 005878e5
    JMP 0x00587713                      ; 005878ea
        ;   XREF to: 00587713 (UNCONDITIONAL_JUMP)  ; LAB_00587713
    MOV ESI,0x12                        ; 005878ef
        ;   Label: caseD_4
    JMP 0x00587856                      ; 005878f4
        ;   XREF to: 00587856 (UNCONDITIONAL_JUMP)  ; LAB_00587856
    MOV dword ptr [EBX + 0x2500],0x0    ; 005878f9
        ;   Label: LAB_005878f9
    JMP 0x0058636e                      ; 00587903
        ;   XREF to: 0058636e (UNCONDITIONAL_JUMP)  ; LAB_0058636e
    JBE 0x005878f9                      ; 00587908
        ;   XREF to: 005878f9 (CONDITIONAL_JUMP)  ; LAB_005878f9
        ;   Label: LAB_00587908
    CMP EAX,0x16                        ; 0058790a
    JC 0x005878f9                       ; 0058790d
        ;   XREF to: 005878f9 (CONDITIONAL_JUMP)  ; LAB_005878f9
    JBE 0x005878f9                      ; 0058790f
        ;   XREF to: 005878f9 (CONDITIONAL_JUMP)  ; LAB_005878f9
    CMP EAX,0x18                        ; 00587911
    JC 0x005878f9                       ; 00587914
        ;   XREF to: 005878f9 (CONDITIONAL_JUMP)  ; LAB_005878f9
    JBE 0x005878f9                      ; 00587916
        ;   XREF to: 005878f9 (CONDITIONAL_JUMP)  ; LAB_005878f9
    CMP EAX,0x19                        ; 00587918
    JZ 0x005878f9                       ; 0058791b
        ;   XREF to: 005878f9 (CONDITIONAL_JUMP)  ; LAB_005878f9
    JMP 0x0058636e                      ; 0058791d
        ;   XREF to: 0058636e (UNCONDITIONAL_JUMP)  ; LAB_0058636e
    JBE 0x005876d2                      ; 00587922
        ;   XREF to: 005876d2 (CONDITIONAL_JUMP)  ; LAB_005876d2
        ;   Label: LAB_00587922
    CMP EAX,0x5                         ; 00587928
    JNC 0x0058793b                      ; 0058792b
        ;   XREF to: 0058793b (CONDITIONAL_JUMP)  ; LAB_0058793b
    CMP EAX,0x4                         ; 0058792d
    JZ 0x005876d2                       ; 00587930
        ;   XREF to: 005876d2 (CONDITIONAL_JUMP)  ; LAB_005876d2
    JMP 0x0058636e                      ; 00587936
        ;   XREF to: 0058636e (UNCONDITIONAL_JUMP)  ; LAB_0058636e
    JBE 0x005876d2                      ; 0058793b
        ;   XREF to: 005876d2 (CONDITIONAL_JUMP)  ; LAB_005876d2
        ;   Label: LAB_0058793b
    CMP EAX,0x6                         ; 00587941
    JZ 0x005876d2                       ; 00587944
        ;   XREF to: 005876d2 (CONDITIONAL_JUMP)  ; LAB_005876d2
    JMP 0x0058636e                      ; 0058794a
        ;   XREF to: 0058636e (UNCONDITIONAL_JUMP)  ; LAB_0058636e
    CMP dword ptr [EBX + 0x20000],0x0   ; 0058794f
        ;   Label: LAB_0058794f
    JNZ 0x0058640b                      ; 00587956
        ;   XREF to: 0058640b (CONDITIONAL_JUMP)  ; LAB_0058640b
    CMP dword ptr [ESP + 0x450],0x0     ; 0058795c
    JZ 0x0058648f                       ; 00587964
        ;   XREF to: 0058648f (CONDITIONAL_JUMP)  ; LAB_0058648f
    LEA EAX,[EBX + 0x158]               ; 0058796a
    PUSH EAX                            ; 00587970
    MOV dword ptr [ESP + 0x480],EAX     ; 00587971
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00587978
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0058797d
    FLD float ptr [0x0060608c]          ; 00587980 | DAT_0060608c
    FMUL float ptr [EBP + 0x18]         ; 00587986
    LEA EDI,[ESP + 0x1b4]               ; 00587989
    LEA EDX,[EBX + 0x249c]              ; 00587990
    LEA ESI,[ESP + 0x1f0]               ; 00587996
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058799d
    FLD float ptr [EDX]                 ; 005879a0
    FLD float ptr [EDX + 0x4]           ; 005879a2
    LEA ECX,[EBX + 0x250c]              ; 005879a5
    FLD float ptr [EDX + 0x8]           ; 005879ab
    FXCH ST2                            ; 005879ae
    FADD float ptr [ECX]                ; 005879b0
    FXCH                                ; 005879b2
    FADD float ptr [ECX + 0x4]          ; 005879b4
    FXCH ST2                            ; 005879b7
    FADD float ptr [ECX + 0x8]          ; 005879b9
    FXCH                                ; 005879bc
    FSTP float ptr [ESP + 0x1f0]        ; 005879be
    FXCH                                ; 005879c5
    FSTP float ptr [ESP + 0x1f4]        ; 005879c7
    FSTP float ptr [ESP + 0x1f8]        ; 005879ce
    MOVSD ES:EDI,ESI                    ; 005879d5
    MOVSD ES:EDI,ESI                    ; 005879d6
    MOVSD ES:EDI,ESI                    ; 005879d7
    MOV dword ptr [EDX + 0x8],0x0       ; 005879d8
    MOV dword ptr [ESP + 0x458],EAX     ; 005879df
    MOV ESI,dword ptr [EDX + 0x8]       ; 005879e6
    MOV dword ptr [EDX + 0x4],ESI       ; 005879e9
    MOV ESI,dword ptr [EDX + 0x4]       ; 005879ec
    MOV dword ptr [EDX],ESI             ; 005879ef
    MOV dword ptr [ECX + 0x8],0x0       ; 005879f1
    FSTP float ptr [ESP + 0x438]        ; 005879f8
    MOV EDX,dword ptr [ECX + 0x8]       ; 005879ff
    MOV dword ptr [ECX + 0x4],EDX       ; 00587a02
    MOV EDX,dword ptr [ECX + 0x4]       ; 00587a05
    MOV dword ptr [ECX],EDX             ; 00587a08
    CMP EAX,0x12                        ; 00587a0a
    JZ 0x00587c66                       ; 00587a0d
        ;   XREF to: 00587c66 (CONDITIONAL_JUMP)  ; LAB_00587c66
    CMP EAX,0x13                        ; 00587a13
    JNZ 0x00587c9a                      ; 00587a16
        ;   XREF to: 00587c9a (CONDITIONAL_JUMP)  ; LAB_00587c9a
    FLD float ptr [EBP + 0x18]          ; 00587a1c
    FMUL double ptr [0x005f68a1]        ; 00587a1f | DAT_005f68a1
    XOR EDX,EDX                         ; 00587a25
    MOV EAX,dword ptr [ESP + 0x438]     ; 00587a27
    MOV dword ptr [ESP + 0x1b4],EDX     ; 00587a2e
    MOV dword ptr [ESP + 0x1b8],EDX     ; 00587a35
    MOV dword ptr [ESP + 0x1bc],EAX     ; 00587a3c
    FLD float ptr [EBX + 0x251c]        ; 00587a43
    MOV EAX,[0x0060608c]                ; 00587a49 | DAT_0060608c
    MOV dword ptr [EBX + 0x20068],EAX   ; 00587a4e
    FXCH                                ; 00587a54
    FSUBR ST0,ST1                       ; 00587a56
    MOV dword ptr [EBX + 0x20064],EDX   ; 00587a58
    FSTP ST1                            ; 00587a5e
        ;   Label: LAB_00587a5e
    FSTP float ptr [EBX + 0x251c]       ; 00587a60
        ;   Label: LAB_00587a60
    LEA EAX,[EBX + 0x2004c]             ; 00587a66
        ;   Label: LAB_00587a66
    PUSH EAX                            ; 00587a6c
    PUSH EBX                            ; 00587a6d
    LEA ESI,[ESP + 0x240]               ; 00587a6e
    LEA EDI,[ESP + 0x2f4]               ; 00587a75
    CALL core_actor.cpp_FUN_00408b00    ; 00587a7c
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x240]               ; 00587a81
    ADD ESP,0x8                         ; 00587a88
    LEA EAX,[EBX + 0x2518]              ; 00587a8b
    MOVSD ES:EDI,ESI                    ; 00587a91
    MOVSD ES:EDI,ESI                    ; 00587a92
    MOVSD ES:EDI,ESI                    ; 00587a93
    FLD float ptr [EBP + 0x18]          ; 00587a94
    FLD float ptr [EAX]                 ; 00587a97
    FMUL ST1                            ; 00587a99
    FLD float ptr [EAX + 0x4]           ; 00587a9b
    FMUL ST2                            ; 00587a9e
    FLD float ptr [EAX + 0x8]           ; 00587aa0
    FMULP ST3                           ; 00587aa3
    FLD float ptr [ESP + 0x1b4]         ; 00587aa5
    FLD float ptr [ESP + 0x1b8]         ; 00587aac
    FLD float ptr [ESP + 0x1bc]         ; 00587ab3
    LEA EDI,[ESP + 0x3b8]               ; 00587aba
    LEA ESI,[ESP + 0x118]               ; 00587ac1
    LEA EAX,[ESP + 0x1b4]               ; 00587ac8
    FXCH ST4                            ; 00587acf
    FSTP float ptr [ESP + 0x118]        ; 00587ad1
    FXCH ST2                            ; 00587ad8
    FSTP float ptr [ESP + 0x11c]        ; 00587ada
    FXCH ST3                            ; 00587ae1
    FSTP float ptr [ESP + 0x120]        ; 00587ae3
    MOVSD ES:EDI,ESI                    ; 00587aea
    MOVSD ES:EDI,ESI                    ; 00587aeb
    MOVSD ES:EDI,ESI                    ; 00587aec
    PUSH EAX                            ; 00587aed
    FLD float ptr [ESP + 0x3bc]         ; 00587aee
    FLD float ptr [ESP + 0x3c0]         ; 00587af5
    FLD float ptr [ESP + 0x3c4]         ; 00587afc
    LEA EDI,[ESP + 0x284]               ; 00587b03
    LEA ESI,[ESP + 0x2cc]               ; 00587b0a
    FXCH ST2                            ; 00587b11
    FADD float ptr [ESP + 0x2f0]        ; 00587b13
    FXCH                                ; 00587b1a
    FADD float ptr [ESP + 0x2f4]        ; 00587b1c
    FXCH ST2                            ; 00587b23
    FADD float ptr [ESP + 0x2f8]        ; 00587b25
    FXCH                                ; 00587b2c
    FSTP float ptr [ESP + 0x2cc]        ; 00587b2e
    FXCH                                ; 00587b35
    FSTP float ptr [ESP + 0x2d0]        ; 00587b37
    FSTP float ptr [ESP + 0x2d4]        ; 00587b3e
    MOVSD ES:EDI,ESI                    ; 00587b45
    MOVSD ES:EDI,ESI                    ; 00587b46
    MOVSD ES:EDI,ESI                    ; 00587b47
    PUSH EBX                            ; 00587b48
    FXCH ST2                            ; 00587b49
    FADD float ptr [ESP + 0x288]        ; 00587b4b
    FXCH ST2                            ; 00587b52
    FADD float ptr [ESP + 0x28c]        ; 00587b54
    FXCH                                ; 00587b5b
    FADD float ptr [ESP + 0x290]        ; 00587b5d
    FXCH ST2                            ; 00587b64
    FSTP float ptr [ESP + 0x1bc]        ; 00587b66
    FSTP float ptr [ESP + 0x1c0]        ; 00587b6d
    FSTP float ptr [ESP + 0x1c4]        ; 00587b74
    MOV EAX,dword ptr [EBX + 0x251c]    ; 00587b7b
    MOV dword ptr [EBX + 0x20240],EAX   ; 00587b81
    CALL core_charactr.cpp_FUN_0042d750 ; 00587b87
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    FLD float ptr [EBX + 0x2504]        ; 00587b8c
    FADD double ptr [0x005f68a9]        ; 00587b92 | DAT_005f68a9
    ADD ESP,0x8                         ; 00587b98
    FLD float ptr [EBX + 0x24]          ; 00587b9b
    FCOMPP                              ; 00587b9e
    FNSTSW AX                           ; 00587ba0
    SAHF                                ; 00587ba2
    JNC 0x00587baf                      ; 00587ba3
        ;   XREF to: 00587baf (CONDITIONAL_JUMP)  ; LAB_00587baf
    MOV dword ptr [EBX + 0x2500],0x1    ; 00587ba5
    MOV EAX,dword ptr [ESP + 0x458]     ; 00587baf
        ;   Label: LAB_00587baf
    CMP EAX,0x1a                        ; 00587bb6
    JNZ 0x00587f08                      ; 00587bb9
        ;   XREF to: 00587f08 (CONDITIONAL_JUMP)  ; LAB_00587f08
    CMP dword ptr [EBX + 0x2500],0x0    ; 00587bbf
        ;   Label: LAB_00587bbf
    JZ 0x00587c54                       ; 00587bc6
        ;   XREF to: 00587c54 (CONDITIONAL_JUMP)  ; LAB_00587c54
    SUB ESP,0x8                         ; 00587bcc
    FLD float ptr [EBX + 0x251c]        ; 00587bcf
    FSTP double ptr [ESP]               ; 00587bd5
    PUSH 0x5f67d9                       ; 00587bd8 | = "Splat at %3.2f fps\n"
    MOV EDI,dword ptr [0x00611100]      ; 00587bdd | g_CConsolePtr
    PUSH EDI                            ; 00587be3 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00587be4
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    FLD float ptr [EBX + 0x20240]       ; 00587be9
    ADD ESP,0x10                        ; 00587bef
    FCHS                                ; 00587bf2
    FST float ptr [ESP + 0x24]          ; 00587bf4
    FST double ptr [ESP + 0x10]         ; 00587bf8
    FCOMP double ptr [0x005f68b1]       ; 00587bfc | DAT_005f68b1
    FNSTSW AX                           ; 00587c02
    SAHF                                ; 00587c04
    JNC 0x00587f4c                      ; 00587c05
        ;   XREF to: 00587f4c (CONDITIONAL_JUMP)  ; LAB_00587f4c
    MOV ECX,dword ptr [ESP + 0x458]     ; 00587c0b
    LEA EAX,[EBX + 0x158]               ; 00587c12
    CMP ECX,0x18                        ; 00587c18
    JNZ 0x00587f2c                      ; 00587c1b
        ;   XREF to: 00587f2c (CONDITIONAL_JUMP)  ; LAB_00587f2c
    PUSH 0x1                            ; 00587c21
    PUSH 0x19                           ; 00587c23
    PUSH EAX                            ; 00587c25
        ;   Label: LAB_00587c25
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00587c26
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00587c2b
    FLD float ptr [ESP + 0x24]          ; 00587c2e
        ;   Label: LAB_00587c2e
    FMUL float ptr [0x005f68d1]         ; 00587c32 | DAT_005f68d1
    SUB ESP,0x4                         ; 00587c38
    FLD1                                ; 00587c3b
    FADDP                               ; 00587c3d
    MOV EAX,dword ptr [EBX + 0x154]     ; 00587c3f
    FSTP float ptr [ESP]                ; 00587c45
    PUSH 0x2c8af28                      ; 00587c48 | DAT_02c8af28
    PUSH EBX                            ; 00587c4d
    CALL dword ptr [EAX + 0x24]         ; 00587c4e
    ADD ESP,0xc                         ; 00587c51
    CMP dword ptr [EBX + 0x2500],0x0    ; 00587c54
        ;   Label: LAB_00587c54
    JZ 0x00588002                       ; 00587c5b
        ;   XREF to: 00588002 (CONDITIONAL_JUMP)  ; LAB_00588002
    JMP 0x00586485                      ; 00587c61
        ;   XREF to: 00586485 (UNCONDITIONAL_JUMP)  ; LAB_00586485
    XOR ESI,ESI                         ; 00587c66
        ;   Label: LAB_00587c66
    MOV EAX,dword ptr [ESP + 0x438]     ; 00587c68
    MOV dword ptr [ESP + 0x1b4],ESI     ; 00587c6f
    MOV dword ptr [ESP + 0x1b8],ESI     ; 00587c76
    MOV dword ptr [ESP + 0x1bc],EAX     ; 00587c7d
    MOV EAX,[0x0060608c]                ; 00587c84 | DAT_0060608c
    MOV dword ptr [EBX + 0x20068],EAX   ; 00587c89
    MOV dword ptr [EBX + 0x20064],ESI   ; 00587c8f
    JMP 0x00587a66                      ; 00587c95
        ;   XREF to: 00587a66 (UNCONDITIONAL_JUMP)  ; LAB_00587a66
    CMP EAX,0x14                        ; 00587c9a
        ;   Label: LAB_00587c9a
    JNZ 0x00587d3b                      ; 00587c9d
        ;   XREF to: 00587d3b (CONDITIONAL_JUMP)  ; LAB_00587d3b
    FLD float ptr [EBP + 0x18]          ; 00587ca3
    FLD ST0                             ; 00587ca6
    FMUL double ptr [0x005f68a1]        ; 00587ca8 | DAT_005f68a1
    XOR ESI,ESI                         ; 00587cae
    FLD float ptr [0x0060609c]          ; 00587cb0 | DAT_0060609c
    MOV dword ptr [ESP + 0x1b4],ESI     ; 00587cb6
    MOV dword ptr [ESP + 0x1b8],ESI     ; 00587cbd
    FMUL float ptr [0x0060608c]         ; 00587cc4 | DAT_0060608c
    FLD float ptr [EBX + 0x20068]       ; 00587cca
    FMUL ST3                            ; 00587cd0
    FXCH                                ; 00587cd2
    FMULP ST3                           ; 00587cd4
    FSTP float ptr [ESP + 0x1bc]        ; 00587cd6
    MOV dword ptr [EBX + 0x20064],ESI   ; 00587cdd
    FXCH                                ; 00587ce3
    FSUBR float ptr [EBX + 0x20068]     ; 00587ce5
    FLD float ptr [EBX + 0x251c]        ; 00587ceb
    FXCH                                ; 00587cf1
    FSTP float ptr [EBX + 0x20068]      ; 00587cf3
    FXCH                                ; 00587cf9
    FSUBR ST0,ST1                       ; 00587cfb
    FLD float ptr [EBX + 0x20068]       ; 00587cfd
    FLDZ                                ; 00587d03
    FXCH ST2                            ; 00587d05
    FSTP ST3                            ; 00587d07
    FXCH ST2                            ; 00587d09
    FSTP float ptr [EBX + 0x251c]       ; 00587d0b
    FCOMPP                              ; 00587d11
    FNSTSW AX                           ; 00587d13
    SAHF                                ; 00587d15
    JBE 0x00587a66                      ; 00587d16
        ;   XREF to: 00587a66 (CONDITIONAL_JUMP)  ; LAB_00587a66
    PUSH 0x1                            ; 00587d1c
    PUSH 0x1a                           ; 00587d1e
    MOV EAX,dword ptr [ESP + 0x484]     ; 00587d20
    PUSH EAX                            ; 00587d27
    MOV dword ptr [EBX + 0x20068],ESI   ; 00587d28
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00587d2e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00587d33
    JMP 0x00587a66                      ; 00587d36
        ;   XREF to: 00587a66 (UNCONDITIONAL_JUMP)  ; LAB_00587a66
    CMP EAX,0x15                        ; 00587d3b
        ;   Label: LAB_00587d3b
    JNZ 0x00587d63                      ; 00587d3e
        ;   XREF to: 00587d63 (CONDITIONAL_JUMP)  ; LAB_00587d63
    XOR EDX,EDX                         ; 00587d40
    MOV EAX,dword ptr [ESP + 0x438]     ; 00587d42
    MOV dword ptr [ESP + 0x1b8],EDX     ; 00587d49
    MOV dword ptr [ESP + 0x1bc],EAX     ; 00587d50
    MOV dword ptr [ESP + 0x1b4],EDX     ; 00587d57
    JMP 0x00587a66                      ; 00587d5e
        ;   XREF to: 00587a66 (UNCONDITIONAL_JUMP)  ; LAB_00587a66
    CMP EAX,0x16                        ; 00587d63
        ;   Label: LAB_00587d63
    JNZ 0x00587d82                      ; 00587d66
        ;   XREF to: 00587d82 (CONDITIONAL_JUMP)  ; LAB_00587d82
    MOV dword ptr [EBX + 0x20064],0x0   ; 00587d68
    MOV EAX,[0x00606094]                ; 00587d72 | DAT_00606094
    MOV dword ptr [EBX + 0x20068],EAX   ; 00587d77
    JMP 0x00587a66                      ; 00587d7d
        ;   XREF to: 00587a66 (UNCONDITIONAL_JUMP)  ; LAB_00587a66
    CMP EAX,0x17                        ; 00587d82
        ;   Label: LAB_00587d82
    JNZ 0x00587dd2                      ; 00587d85
        ;   XREF to: 00587dd2 (CONDITIONAL_JUMP)  ; LAB_00587dd2
    FLD float ptr [0x00606094]          ; 00587d87 | DAT_00606094
    FLD ST0                             ; 00587d8d
    FLD float ptr [EBP + 0x18]          ; 00587d8f
    FXCH                                ; 00587d92
    FMUL ST1                            ; 00587d94
    XOR EDI,EDI                         ; 00587d96
    FXCH                                ; 00587d98
    FMUL double ptr [0x005f68a1]        ; 00587d9a | DAT_005f68a1
    MOV dword ptr [ESP + 0x1b4],EDI     ; 00587da0
    MOV dword ptr [ESP + 0x1b8],EDI     ; 00587da7
    FXCH                                ; 00587dae
    FSTP float ptr [ESP + 0x1bc]        ; 00587db0
    FLD float ptr [EBX + 0x251c]        ; 00587db7
    FXCH ST2                            ; 00587dbd
    FSTP float ptr [EBX + 0x20068]      ; 00587dbf
    FSUBR ST0,ST1                       ; 00587dc5
    MOV dword ptr [EBX + 0x20064],EDI   ; 00587dc7
    JMP 0x00587a5e                      ; 00587dcd
        ;   XREF to: 00587a5e (UNCONDITIONAL_JUMP)  ; LAB_00587a5e
    CMP EAX,0x18                        ; 00587dd2
        ;   Label: LAB_00587dd2
    JNZ 0x00587e73                      ; 00587dd5
        ;   XREF to: 00587e73 (CONDITIONAL_JUMP)  ; LAB_00587e73
    FLD float ptr [EBP + 0x18]          ; 00587ddb
    FLD ST0                             ; 00587dde
    FMUL double ptr [0x005f68a1]        ; 00587de0 | DAT_005f68a1
    XOR EDX,EDX                         ; 00587de6
    FLD float ptr [0x0060609c]          ; 00587de8 | DAT_0060609c
    MOV dword ptr [ESP + 0x1b4],EDX     ; 00587dee
    MOV dword ptr [ESP + 0x1b8],EDX     ; 00587df5
    FMUL float ptr [0x00606094]         ; 00587dfc | DAT_00606094
    FLD float ptr [EBX + 0x20068]       ; 00587e02
    FMUL ST3                            ; 00587e08
    FXCH                                ; 00587e0a
    FMULP ST3                           ; 00587e0c
    FSTP float ptr [ESP + 0x1bc]        ; 00587e0e
    MOV dword ptr [EBX + 0x20064],EDX   ; 00587e15
    FXCH                                ; 00587e1b
    FSUBR float ptr [EBX + 0x20068]     ; 00587e1d
    FLD float ptr [EBX + 0x251c]        ; 00587e23
    FXCH                                ; 00587e29
    FSTP float ptr [EBX + 0x20068]      ; 00587e2b
    FXCH                                ; 00587e31
    FSUBR ST0,ST1                       ; 00587e33
    FLD float ptr [EBX + 0x20068]       ; 00587e35
    FLDZ                                ; 00587e3b
    FXCH ST2                            ; 00587e3d
    FSTP ST3                            ; 00587e3f
    FXCH ST2                            ; 00587e41
    FSTP float ptr [EBX + 0x251c]       ; 00587e43
    FCOMPP                              ; 00587e49
    FNSTSW AX                           ; 00587e4b
    SAHF                                ; 00587e4d
    JBE 0x00587a66                      ; 00587e4e
        ;   XREF to: 00587a66 (CONDITIONAL_JUMP)  ; LAB_00587a66
    PUSH 0x1                            ; 00587e54
    PUSH 0x1a                           ; 00587e56
    MOV ESI,dword ptr [ESP + 0x484]     ; 00587e58
    PUSH ESI                            ; 00587e5f
    MOV dword ptr [EBX + 0x20068],EDX   ; 00587e60
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00587e66
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00587e6b
    JMP 0x00587a66                      ; 00587e6e
        ;   XREF to: 00587a66 (UNCONDITIONAL_JUMP)  ; LAB_00587a66
    CMP EAX,0x19                        ; 00587e73
        ;   Label: LAB_00587e73
    JNZ 0x00587e86                      ; 00587e76
        ;   XREF to: 00587e86 (CONDITIONAL_JUMP)  ; LAB_00587e86
    XOR EAX,EAX                         ; 00587e78
    MOV dword ptr [ESP + 0x1b8],EAX     ; 00587e7a
    JMP 0x00587a66                      ; 00587e81
        ;   XREF to: 00587a66 (UNCONDITIONAL_JUMP)  ; LAB_00587a66
    CMP EAX,0x1a                        ; 00587e86
        ;   Label: LAB_00587e86
    JNZ 0x00587ec4                      ; 00587e89
        ;   XREF to: 00587ec4 (CONDITIONAL_JUMP)  ; LAB_00587ec4
    FLD float ptr [EBP + 0x18]          ; 00587e8b
    XOR ECX,ECX                         ; 00587e8e
    FMUL double ptr [0x005f68a1]        ; 00587e90 | DAT_005f68a1
    MOV dword ptr [ESP + 0x1bc],ECX     ; 00587e96
    MOV dword ptr [ESP + 0x1b8],ECX     ; 00587e9d
    MOV dword ptr [ESP + 0x1b4],ECX     ; 00587ea4
    FLD float ptr [EBX + 0x251c]        ; 00587eab
    FXCH                                ; 00587eb1
    FSUBR ST0,ST1                       ; 00587eb3
    MOV dword ptr [EBX + 0x20064],0x461c3f9a ; 00587eb5
    JMP 0x00587a5e                      ; 00587ebf
        ;   XREF to: 00587a5e (UNCONDITIONAL_JUMP)  ; LAB_00587a5e
    CMP EAX,0x1b                        ; 00587ec4
        ;   Label: LAB_00587ec4
    JNZ 0x00587ef4                      ; 00587ec7
        ;   XREF to: 00587ef4 (CONDITIONAL_JUMP)  ; LAB_00587ef4
    FLD float ptr [EBP + 0x18]          ; 00587ec9
    XOR EDI,EDI                         ; 00587ecc
    FMUL double ptr [0x005f68a1]        ; 00587ece | DAT_005f68a1
    MOV dword ptr [ESP + 0x1bc],EDI     ; 00587ed4
    MOV dword ptr [ESP + 0x1b8],EDI     ; 00587edb
    MOV dword ptr [ESP + 0x1b4],EDI     ; 00587ee2
    FSUBR float ptr [EBX + 0x251c]      ; 00587ee9
    JMP 0x00587a60                      ; 00587eef
        ;   XREF to: 00587a60 (UNCONDITIONAL_JUMP)  ; LAB_00587a60
    FLD float ptr [EBP + 0x18]          ; 00587ef4
        ;   Label: LAB_00587ef4
    FMUL double ptr [0x005f68a1]        ; 00587ef7 | DAT_005f68a1
    FSUBR float ptr [EBX + 0x251c]      ; 00587efd
    JMP 0x00587a60                      ; 00587f03
        ;   XREF to: 00587a60 (UNCONDITIONAL_JUMP)  ; LAB_00587a60
    CMP EAX,0x14                        ; 00587f08
        ;   Label: LAB_00587f08
    JZ 0x00587bbf                       ; 00587f0b
        ;   XREF to: 00587bbf (CONDITIONAL_JUMP)  ; LAB_00587bbf
    CMP EAX,0x18                        ; 00587f11
    JZ 0x00587bbf                       ; 00587f14
        ;   XREF to: 00587bbf (CONDITIONAL_JUMP)  ; LAB_00587bbf
    CMP dword ptr [EBX + 0x2500],0x0    ; 00587f1a
    JZ 0x00588002                       ; 00587f21
        ;   XREF to: 00588002 (CONDITIONAL_JUMP)  ; LAB_00588002
    JMP 0x00586485                      ; 00587f27
        ;   XREF to: 00586485 (UNCONDITIONAL_JUMP)  ; LAB_00586485
    CMP ECX,0x14                        ; 00587f2c
        ;   Label: LAB_00587f2c
    JZ 0x00587f43                       ; 00587f2f
        ;   XREF to: 00587f43 (CONDITIONAL_JUMP)  ; LAB_00587f43
    CMP ECX,0x1a                        ; 00587f31
    JNZ 0x00587c2e                      ; 00587f34
        ;   XREF to: 00587c2e (CONDITIONAL_JUMP)  ; LAB_00587c2e
    PUSH 0x1                            ; 00587f3a
    PUSH 0x1b                           ; 00587f3c
    JMP 0x00587c25                      ; 00587f3e
        ;   XREF to: 00587c25 (UNCONDITIONAL_JUMP)  ; LAB_00587c25
    PUSH 0x1                            ; 00587f43
        ;   Label: LAB_00587f43
    PUSH 0x15                           ; 00587f45
    JMP 0x00587c25                      ; 00587f47
        ;   XREF to: 00587c25 (UNCONDITIONAL_JUMP)  ; LAB_00587c25
    LEA EAX,[ESP + 0x38]                ; 00587f4c
        ;   Label: LAB_00587f4c
    PUSH EAX                            ; 00587f50
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00587f51
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00587f56
    FLD double ptr [ESP + 0x10]         ; 00587f59
    FADD double ptr [0x005f68b9]        ; 00587f5d | DAT_005f68b9
    FMUL double ptr [0x005f68c1]        ; 00587f63 | DAT_005f68c1
    FMUL double ptr [0x005f68c9]        ; 00587f69 | DAT_005f68c9
    FSTP float ptr [ESP + 0x3c]         ; 00587f6f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00587f73
    XOR ESI,ESI                         ; 00587f77
    CMP EAX,0x42c80000                  ; 00587f79
    JLE 0x00587f8e                      ; 00587f7e
        ;   XREF to: 00587f8e (CONDITIONAL_JUMP)  ; LAB_00587f8e
    MOV EDX,0x461c3c00                  ; 00587f80
    MOV ESI,0x1                         ; 00587f85
    MOV dword ptr [ESP + 0x3c],EDX      ; 00587f8a
    LEA EDX,[ESP + 0x38]                ; 00587f8e
        ;   Label: LAB_00587f8e
    PUSH EDX                            ; 00587f92
    MOV EAX,dword ptr [EBX + 0x154]     ; 00587f93
    PUSH EBX                            ; 00587f99
    MOV dword ptr [EBX + 0xc1d0],0x0    ; 00587f9a
    CALL dword ptr [EAX + 0x108]        ; 00587fa4
    FLD float ptr [EBX + 0x2538]        ; 00587faa
    FLDZ                                ; 00587fb0
    ADD ESP,0x8                         ; 00587fb2
    FCOMPP                              ; 00587fb5
    FNSTSW AX                           ; 00587fb7
    SAHF                                ; 00587fb9
    JNC 0x00587fc0                      ; 00587fba
        ;   XREF to: 00587fc0 (CONDITIONAL_JUMP)  ; LAB_00587fc0
    TEST ESI,ESI                        ; 00587fbc
    JZ 0x00587ff3                       ; 00587fbe
        ;   XREF to: 00587ff3 (CONDITIONAL_JUMP)  ; LAB_00587ff3
    PUSH 0x1                            ; 00587fc0
        ;   Label: LAB_00587fc0
    PUSH 0x1d                           ; 00587fc2
    LEA EAX,[EBX + 0x158]               ; 00587fc4
    PUSH EAX                            ; 00587fca
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00587fcb
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00587fd0
    PUSH 0x5f67ed                       ; 00587fd3 | = "fall-?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00587fd8
    PUSH EBX                            ; 00587fde
    CALL dword ptr [EAX + 0x2c]         ; 00587fdf
    ADD ESP,0x8                         ; 00587fe2
    CMP dword ptr [EBX + 0x2500],0x0    ; 00587fe5
    JZ 0x00588002                       ; 00587fec
        ;   XREF to: 00588002 (CONDITIONAL_JUMP)  ; LAB_00588002
    JMP 0x00586485                      ; 00587fee
        ;   XREF to: 00586485 (UNCONDITIONAL_JUMP)  ; LAB_00586485
    PUSH 0x1                            ; 00587ff3
        ;   Label: LAB_00587ff3
    PUSH 0x1c                           ; 00587ff5
    LEA EAX,[EBX + 0x158]               ; 00587ff7
    JMP 0x00587c25                      ; 00587ffd
        ;   XREF to: 00587c25 (UNCONDITIONAL_JUMP)  ; LAB_00587c25
    FLD float ptr [EBX + 0x20064]       ; 00588002
        ;   Label: LAB_00588002
    MOV EDX,dword ptr [ESP + 0x458]     ; 00588008
    MOV EAX,[0x0060609c]                ; 0058800f | DAT_0060609c
    FADD float ptr [EBP + 0x18]         ; 00588014
    MOV dword ptr [ESP + 0x30],EAX      ; 00588017
    FSTP float ptr [EBX + 0x20064]      ; 0058801b
    CMP EDX,0x4                         ; 00588021
    JNZ 0x00588038                      ; 00588024
        ;   XREF to: 00588038 (CONDITIONAL_JUMP)  ; LAB_00588038
    FLD float ptr [ESP + 0x30]          ; 00588026
    FLD ST0                             ; 0058802a
    FMUL double ptr [0x005f6849]        ; 0058802c | DAT_005f6849
    FSTP ST1                            ; 00588032
    FSTP float ptr [ESP + 0x30]         ; 00588034
    FLD float ptr [EBX + 0x20064]       ; 00588038
        ;   Label: LAB_00588038
    FCOMP float ptr [ESP + 0x30]        ; 0058803e
    FNSTSW AX                           ; 00588042
    SAHF                                ; 00588044
    JBE 0x00588073                      ; 00588045
        ;   XREF to: 00588073 (CONDITIONAL_JUMP)  ; LAB_00588073
    CMP dword ptr [ESP + 0x458],0x1a    ; 00588047
        ;   Label: LAB_00588047
    JZ 0x00588064                       ; 0058804f
        ;   XREF to: 00588064 (CONDITIONAL_JUMP)  ; LAB_00588064
    PUSH 0x1                            ; 00588051
    PUSH 0x1a                           ; 00588053
    LEA EAX,[EBX + 0x158]               ; 00588055
    PUSH EAX                            ; 0058805b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0058805c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00588061
    MOV dword ptr [EBX + 0x2500],0x0    ; 00588064
        ;   Label: LAB_00588064
    JMP 0x0058648f                      ; 0058806e
        ;   XREF to: 0058648f (UNCONDITIONAL_JUMP)  ; LAB_0058648f
    FLD float ptr [EBX + 0x20240]       ; 00588073
        ;   Label: LAB_00588073
    FCOMP double ptr [0x005f68b9]       ; 00588079 | DAT_005f68b9
    FNSTSW AX                           ; 0058807f
    SAHF                                ; 00588081
    JC 0x00588047                       ; 00588082
        ;   XREF to: 00588047 (CONDITIONAL_JUMP)  ; LAB_00588047
    JMP 0x0058648f                      ; 00588084
        ;   XREF to: 0058648f (UNCONDITIONAL_JUMP)  ; LAB_0058648f
    MOV dword ptr [EBX + 0x1ffac],0x1   ; 00588089
        ;   Label: LAB_00588089
    JMP 0x00586500                      ; 00588093
        ;   XREF to: 00586500 (UNCONDITIONAL_JUMP)  ; LAB_00586500
    MOV ESI,dword ptr [EAX + 0x2f0]     ; 00588098
        ;   Label: LAB_00588098
    TEST ESI,ESI                        ; 0058809e
    JNZ 0x00586585                      ; 005880a0
        ;   XREF to: 00586585 (CONDITIONAL_JUMP)  ; LAB_00586585
    MOV EAX,[0x0061d95c]                ; 005880a6 | g_CGamePtr
    MOV dword ptr [EAX + 0x264],ESI     ; 005880ab | g_CGameInstance.field564_0x264
    JMP 0x00586585                      ; 005880b1
        ;   XREF to: 00586585 (UNCONDITIONAL_JUMP)  ; LAB_00586585
    FLD float ptr [EBP + 0x18]          ; 005880b6
        ;   Label: LAB_005880b6
    FDIV float ptr [0x00606070]         ; 005880b9 | DAT_00606070
    FSUBR float ptr [EBX + 0x1ffb0]     ; 005880bf
    FST float ptr [EBX + 0x1ffb0]       ; 005880c5
    FLDZ                                ; 005880cb
    FCOMPP                              ; 005880cd
    FNSTSW AX                           ; 005880cf
    SAHF                                ; 005880d1
    JBE 0x005865d0                      ; 005880d2
        ;   XREF to: 005865d0 (CONDITIONAL_JUMP)  ; LAB_005865d0
    MOV dword ptr [EBX + 0x1ffb0],0x0   ; 005880d8
    JMP 0x005865d0                      ; 005880e2
        ;   XREF to: 005865d0 (UNCONDITIONAL_JUMP)  ; LAB_005865d0
    PUSH EBX                            ; 005880e7
        ;   Label: LAB_005880e7
    CALL core_hero.cpp_CHero_stopPushingBox_FUN_004ebbe0 ; 005880e8
        ;   XREF to: 004ebbe0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopPushingBox_FUN_004ebbe0(CHero * this_ptr)
    ADD ESP,0x4                         ; 005880ed
    JMP 0x00586834                      ; 005880f0
        ;   XREF to: 00586834 (UNCONDITIONAL_JUMP)  ; LAB_00586834
    MOV ESI,dword ptr [EBX + 0x20020]   ; 005880f5
        ;   Label: LAB_005880f5
    PUSH ESI                            ; 005880fb
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 005880fc
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00588101
    MOV EDI,dword ptr [EBX + 0x2001c]   ; 00588104
    PUSH EDI                            ; 0058810a
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0058810b
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00588110
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 00588113
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
    PUSH 0x1                            ; 00588118
    CALL sound_sndmain.cpp_FUN_00572a10 ; 0058811a
        ;   XREF to: 00572a10 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572a10(uint flag_mask)
    ADD ESP,0x4                         ; 0058811f
    PUSH 0x5f6812                       ; 00588122 | = "goggle-off.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 00588127
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 0058812c
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 0058812f
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    MOV ESP,EBP                         ; 00588134
    POP EBP                             ; 00588136
    POP EDI                             ; 00588137
    POP ESI                             ; 00588138
    POP EBX                             ; 00588139
    RET                                 ; 0058813a
    MOV EAX,[0x0061d95c]                ; 0058813b | g_CGamePtr | g_CGameInstance
        ;   Label: LAB_0058813b
    CMP dword ptr [EAX + 0x25c],0x0     ; 00588140 | g_CGameInstance.field556_0x25c
    JZ 0x005868c8                       ; 00588147
        ;   XREF to: 005868c8 (CONDITIONAL_JUMP)  ; LAB_005868c8
    MOV EAX,dword ptr [EBX + 0x20020]   ; 0058814d
    PUSH EAX                            ; 00588153
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00588154
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00588159
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 0058815c
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
    PUSH 0x1                            ; 00588161
    CALL sound_sndmain.cpp_FUN_00572a10 ; 00588163
        ;   XREF to: 00572a10 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572a10(uint flag_mask)
    ADD ESP,0x4                         ; 00588168
    PUSH 0x5f6821                       ; 0058816b | = "goggle-on.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 00588170
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 00588175
    PUSH 0x0                            ; 00588178
    MOV dword ptr [EBX + 0x20020],EAX   ; 0058817a
    CALL sound_sndmain.cpp_FUN_005728e0 ; 00588180
        ;   XREF to: 005728e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005728e0(float volume)
    ADD ESP,0x4                         ; 00588185
    PUSH 0x5f682f                       ; 00588188 | = "goggle-loop.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 0058818d
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 00588192
    MOV dword ptr [EBX + 0x2001c],EAX   ; 00588195
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 0058819b
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    PUSH 0x0                            ; 005881a0
    PUSH 0x3f800000                     ; 005881a2
    MOV EDX,dword ptr [EBX + 0x2001c]   ; 005881a7
    PUSH 0x3f800000                     ; 005881ad
    PUSH EDX                            ; 005881b2
    CALL sound_sndmain.cpp_setSfxFade_FUN_00573ab0 ; 005881b3
        ;   XREF to: 00573ab0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxFade_FUN_00573ab0(uint sfx_handle, float target_volume, float fade_duration, int stop_after_fade)
    ADD ESP,0x10                        ; 005881b8
    MOV ESP,EBP                         ; 005881bb
    POP EBP                             ; 005881bd
    POP EDI                             ; 005881be
    POP ESI                             ; 005881bf
    POP EBX                             ; 005881c0
    RET                                 ; 005881c1

