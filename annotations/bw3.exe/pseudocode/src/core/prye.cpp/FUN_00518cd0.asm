; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_prye_cpp_FUN_00518cd0(CCharacter *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x408]:1  local_408
; undefined        Stack[-0x3f0]:1  local_3f0
; undefined4       Stack[-0x34]:4  local_34
;
; XREF[1]:
;   core_prye.cpp_FUN_00518ab0 at 00518c1d
;
; Referenced Globals:
;   undefined4 s_DebugActionPending_005cd026+1
;   TerminatedCString s_grabbedBy_s_005cd03a
;   TerminatedCString s_pushedObject_s_005cd048
;   TerminatedCString s_ladder_005cd059
;   TerminatedCString s_pickup_005cd061
;   TerminatedCString s_hurt_005cd069
;   TerminatedCString s_door_005cd06f
;   TerminatedCString s_door_005cd075
;   TerminatedCString s_sitting_005cd07b
;   TerminatedCString s_stashinventory_005cd084
;   TerminatedCString s_stashinventory_005cd094
;   TerminatedCString s_placeobject_005cd0a4
;   TerminatedCString s_putdownobject_005cd0b1
;   TerminatedCString s_toss_005cd0c0
;   TerminatedCString s_attackmelee_005cd0c6
;   ... and 45 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_FUN_0040cfa0
;   core_ammobox.cpp_FUN_0040e6b0
;   core_boxactor.cpp_FUN_0041ff20
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042cd30
;   core_charactr.cpp_FUN_00431660
;   core_charactr.cpp_FUN_00433220
;   core_charactr.cpp_FUN_00433350
;   core_charactr.cpp_FUN_00433c60
;   core_charactr.cpp_FUN_00434850
;   ... and 34 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518cd0
        ;   Label: core_prye.cpp_FUN_00518cd0
    PUSH ESI                            ; 00518cd1
    PUSH EDI                            ; 00518cd2
    PUSH EBP                            ; 00518cd3
    MOV EBP,ESP                         ; 00518cd4
    SUB ESP,0x4dc                       ; 00518cd6
    AND ESP,0xfffffff8                  ; 00518cdc
    MOV EBX,dword ptr [EBP + 0x14]      ; 00518cdf
    PUSH 0x5cd027                       ; 00518ce2 | s_DebugActionPending_005cd026+1
    MOV EDX,dword ptr [0x005fba60]      ; 00518ce7 | DAT_005fba60
    PUSH EDX                            ; 00518ced
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00518cee
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00518cf3
    MOV ECX,dword ptr [EBX + 0x2628]    ; 00518cf6
    MOV dword ptr [ESP + 0x4bc],EAX     ; 00518cfc
    TEST ECX,ECX                        ; 00518d03
    JZ 0x00518eae                       ; 00518d05
        ;   XREF to: 00518eae (CONDITIONAL_JUMP)  ; LAB_00518eae
    FLD float ptr [EBX + 0x20ca4]       ; 00518d0b
    FCOMP float ptr [0x005cd147]        ; 00518d11 | DAT_005cd147
    FNSTSW AX                           ; 00518d17
    SAHF                                ; 00518d19
    JNC 0x00518eae                      ; 00518d1a
        ;   XREF to: 00518eae (CONDITIONAL_JUMP)  ; LAB_00518eae
    PUSH ECX                            ; 00518d20
    MOV EDX,dword ptr [ECX + 0x154]     ; 00518d21
    LEA ESI,[ESP + 0xec]                ; 00518d27
    LEA EDI,[ESP + 0x104]               ; 00518d2e
    CALL dword ptr [EDX + 0x1c]         ; 00518d35
    MOV ECX,0x6                         ; 00518d38
    LEA ESI,[ESP + 0xec]                ; 00518d3d
    ADD ESP,0x4                         ; 00518d44
    MOVSD.REP ES:EDI,ESI                ; 00518d47
    LEA EDX,[EBX + 0x20c98]             ; 00518d49
    LEA ECX,[ESP + 0x100]               ; 00518d4f
    MOV ESI,EDX                         ; 00518d56
    CMP EDX,ECX                         ; 00518d58
    JZ 0x00518d79                       ; 00518d5a
        ;   XREF to: 00518d79 (CONDITIONAL_JUMP)  ; LAB_00518d79
    MOV EAX,dword ptr [ESP + 0x100]     ; 00518d5c
    MOV dword ptr [EDX],EAX             ; 00518d63
    MOV EAX,dword ptr [ESP + 0x104]     ; 00518d65
    MOV dword ptr [EDX + 0x4],EAX       ; 00518d6c
    MOV EAX,dword ptr [ESP + 0x108]     ; 00518d6f
    MOV dword ptr [EDX + 0x8],EAX       ; 00518d76
    LEA EDX,[ECX + 0xc]                 ; 00518d79
        ;   Label: LAB_00518d79
    LEA EAX,[ESI + 0xc]                 ; 00518d7c
    CMP EAX,EDX                         ; 00518d7f
    JZ 0x00518d93                       ; 00518d81
        ;   XREF to: 00518d93 (CONDITIONAL_JUMP)  ; LAB_00518d93
    MOV ECX,dword ptr [EDX]             ; 00518d83
    MOV dword ptr [EAX],ECX             ; 00518d85
    MOV ECX,dword ptr [EDX + 0x4]       ; 00518d87
    MOV dword ptr [EAX + 0x4],ECX       ; 00518d8a
    MOV ECX,dword ptr [EDX + 0x8]       ; 00518d8d
    MOV dword ptr [EAX + 0x8],ECX       ; 00518d90
    LEA EDX,[EBX + 0x20c98]             ; 00518d93
        ;   Label: LAB_00518d93
    LEA EDI,[ESP + 0x3dc]               ; 00518d99
    LEA ESI,[ESP + 0x37c]               ; 00518da0
    FLD float ptr [EDX]                 ; 00518da7
    FLD float ptr [EDX + 0x4]           ; 00518da9
    LEA EAX,[EBX + 0x20ca4]             ; 00518dac
    FLD float ptr [EDX + 0x8]           ; 00518db2
    FXCH ST2                            ; 00518db5
    FADD float ptr [EAX]                ; 00518db7
    FXCH                                ; 00518db9
    FADD float ptr [EAX + 0x4]          ; 00518dbb
    FXCH ST2                            ; 00518dbe
    FADD float ptr [EAX + 0x8]          ; 00518dc0
    FXCH                                ; 00518dc3
    FSTP float ptr [ESP + 0x37c]        ; 00518dc5
    FXCH                                ; 00518dcc
    FSTP float ptr [ESP + 0x380]        ; 00518dce
    FSTP float ptr [ESP + 0x384]        ; 00518dd5
    MOVSD ES:EDI,ESI                    ; 00518ddc
    MOVSD ES:EDI,ESI                    ; 00518ddd
    MOVSD ES:EDI,ESI                    ; 00518dde
    FLD float ptr [0x005cd14b]          ; 00518ddf | DAT_005cd14b
    FLD float ptr [ESP + 0x3dc]         ; 00518de5
    FMUL ST1                            ; 00518dec
    FLD float ptr [ESP + 0x3e0]         ; 00518dee
    FMUL ST2                            ; 00518df5
    FLD float ptr [ESP + 0x3e4]         ; 00518df7
    FMULP ST3                           ; 00518dfe
    LEA EAX,[ESP + 0x2bc]               ; 00518e00
    LEA EDI,[ESP + 0x2bc]               ; 00518e07
    LEA ESI,[ESP + 0x34c]               ; 00518e0e
    FXCH                                ; 00518e15
    FSTP float ptr [ESP + 0x34c]        ; 00518e17
    FSTP float ptr [ESP + 0x350]        ; 00518e1e
    FSTP float ptr [ESP + 0x354]        ; 00518e25
    MOVSD ES:EDI,ESI                    ; 00518e2c
    MOVSD ES:EDI,ESI                    ; 00518e2d
    MOVSD ES:EDI,ESI                    ; 00518e2e
    PUSH EAX                            ; 00518e2f
    MOV ESI,dword ptr [EBX + 0x2628]    ; 00518e30
    PUSH ESI                            ; 00518e36
    LEA ESI,[ESP + 0x360]               ; 00518e37
    LEA EDI,[ESP + 0x3fc]               ; 00518e3e
    CALL core_actor.cpp_FUN_00408b80    ; 00518e45
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00518e4a
    LEA EAX,[ESP + 0x3f4]               ; 00518e4d
    LEA ESI,[ESP + 0x358]               ; 00518e54
    PUSH EAX                            ; 00518e5b
    MOVSD ES:EDI,ESI                    ; 00518e5c
    MOVSD ES:EDI,ESI                    ; 00518e5d
    MOVSD ES:EDI,ESI                    ; 00518e5e
    PUSH EBX                            ; 00518e5f
    LEA ESI,[ESP + 0x348]               ; 00518e60
    LEA EDI,[ESP + 0x168]               ; 00518e67
    CALL core_actor.cpp_FUN_00408bf0    ; 00518e6e
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x348]               ; 00518e73
    LEA EAX,[ESP + 0x168]               ; 00518e7a
    ADD ESP,0x8                         ; 00518e81
    LEA EDX,[EBX + 0x20c8c]             ; 00518e84
    MOVSD ES:EDI,ESI                    ; 00518e8a
    MOVSD ES:EDI,ESI                    ; 00518e8b
    MOVSD ES:EDI,ESI                    ; 00518e8c
    CMP EDX,EAX                         ; 00518e8d
    JZ 0x00518eae                       ; 00518e8f
        ;   XREF to: 00518eae (CONDITIONAL_JUMP)  ; LAB_00518eae
    MOV EAX,dword ptr [ESP + 0x160]     ; 00518e91
    MOV dword ptr [EDX],EAX             ; 00518e98
    MOV EAX,dword ptr [ESP + 0x164]     ; 00518e9a
    MOV dword ptr [EDX + 0x4],EAX       ; 00518ea1
    MOV EAX,dword ptr [ESP + 0x168]     ; 00518ea4
    MOV dword ptr [EDX + 0x8],EAX       ; 00518eab
    MOV EDI,dword ptr [0x005fe9dc]      ; 00518eae | g_CGamePtr
        ;   Label: LAB_00518eae
    PUSH dword ptr [EBP + 0x18]         ; 00518eb4
    PUSH EDI                            ; 00518eb7 | g_CGameInstance
    CALL core_game.cpp_CGame_slamDT_FUN_004bf3a0 ; 00518eb8
        ;   XREF to: 004bf3a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004bf3a0(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00518ebd
    PUSH dword ptr [EBP + 0x18]         ; 00518ec0
    PUSH EBX                            ; 00518ec3
    CALL core_charactr.cpp_FUN_00433c60 ; 00518ec4
        ;   XREF to: 00433c60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433c60()
    ADD ESP,0x8                         ; 00518ec9
    FLD float ptr [EBX + 0xcdcc]        ; 00518ecc
    FSUB float ptr [EBP + 0x18]         ; 00518ed2
    FST float ptr [EBX + 0xcdcc]        ; 00518ed5
    FLDZ                                ; 00518edb
    FCOMPP                              ; 00518edd
    FNSTSW AX                           ; 00518edf
    SAHF                                ; 00518ee1
    JBE 0x00518eee                      ; 00518ee2
        ;   XREF to: 00518eee (CONDITIONAL_JUMP)  ; LAB_00518eee
    MOV dword ptr [EBX + 0xcdcc],0x0    ; 00518ee4
    LEA EAX,[EBX + 0x249c]              ; 00518eee
        ;   Label: LAB_00518eee
    LEA ESI,[ESP + 0x13c]               ; 00518ef4
    LEA EDI,[ESP + 0x280]               ; 00518efb
    MOV dword ptr [EAX + 0x8],0x0       ; 00518f02
    PUSH EBX                            ; 00518f09
    MOV EDX,dword ptr [EAX + 0x8]       ; 00518f0a
    MOV dword ptr [EAX + 0x4],EDX       ; 00518f0d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00518f10
    MOV dword ptr [EAX],EDX             ; 00518f13
    CALL core_prye.cpp_FUN_0051c100     ; 00518f15
        ;   XREF to: 0051c100 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_0051c100()
    ADD ESP,0x4                         ; 00518f1a
    LEA EAX,[ESP + 0x280]               ; 00518f1d
    LEA ESI,[ESP + 0x13c]               ; 00518f24
    PUSH EAX                            ; 00518f2b
    MOVSD ES:EDI,ESI                    ; 00518f2c
    MOVSD ES:EDI,ESI                    ; 00518f2d
    MOVSD ES:EDI,ESI                    ; 00518f2e
    PUSH EBX                            ; 00518f2f
    LEA ESI,[ESP + 0x45c]               ; 00518f30
    LEA EDI,[ESP + 0x120]               ; 00518f37
    CALL core_actor.cpp_FUN_00408b80    ; 00518f3e
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00518f43
    LEA ESI,[ESP + 0x454]               ; 00518f46
    PUSH dword ptr [EBP + 0x18]         ; 00518f4d
    PUSH EBX                            ; 00518f50
    MOVSD ES:EDI,ESI                    ; 00518f51
    MOVSD ES:EDI,ESI                    ; 00518f52
    MOVSD ES:EDI,ESI                    ; 00518f53
    CALL core_prye.cpp_FUN_0051b550     ; 00518f54
        ;   XREF to: 0051b550 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_0051b550()
    MOV EAX,0x1                         ; 00518f59
    ADD ESP,0x8                         ; 00518f5e
    MOV dword ptr [ESP + 0x4b4],EAX     ; 00518f61
    MOV dword ptr [ESP + 0x4ac],EAX     ; 00518f68
    MOV dword ptr [ESP + 0x4b0],EAX     ; 00518f6f
    MOV dword ptr [ESP + 0x4c4],EAX     ; 00518f76
    MOV dword ptr [ESP + 0x4c0],EAX     ; 00518f7d
    MOV EAX,dword ptr [EBX + 0x26fc]    ; 00518f84
    TEST EAX,EAX                        ; 00518f8a
    JZ 0x00518fd2                       ; 00518f8c
        ;   XREF to: 00518fd2 (CONDITIONAL_JUMP)  ; LAB_00518fd2
    XOR EDX,EDX                         ; 00518f8e
    MOV dword ptr [ESP + 0x4b4],EDX     ; 00518f90
    MOV dword ptr [ESP + 0x4b0],EDX     ; 00518f97
    MOV dword ptr [ESP + 0x4c4],EDX     ; 00518f9e
    MOV dword ptr [ESP + 0x4c0],EDX     ; 00518fa5
    MOV dword ptr [ESP + 0x4ac],EDX     ; 00518fac
    CMP dword ptr [ESP + 0x4bc],0x0     ; 00518fb3
    JZ 0x00518fd2                       ; 00518fbb
        ;   XREF to: 00518fd2 (CONDITIONAL_JUMP)  ; LAB_00518fd2
    PUSH EAX                            ; 00518fbd
    PUSH 0x5cd03a                       ; 00518fbe | = "grabbedBy=%s\n"
    MOV ESI,dword ptr [0x005f1690]      ; 00518fc3 | g_CConsolePtr
    PUSH ESI                            ; 00518fc9 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00518fca
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00518fcf
    CMP dword ptr [EBX + 0x20b9c],0x0   ; 00518fd2
        ;   Label: LAB_00518fd2
    JZ 0x0051901f                       ; 00518fd9
        ;   XREF to: 0051901f (CONDITIONAL_JUMP)  ; LAB_0051901f
    XOR EAX,EAX                         ; 00518fdb
    MOV EDI,dword ptr [ESP + 0x4bc]     ; 00518fdd
    MOV dword ptr [ESP + 0x4c4],EAX     ; 00518fe4
    MOV dword ptr [ESP + 0x4c0],EAX     ; 00518feb
    MOV dword ptr [ESP + 0x4b4],EAX     ; 00518ff2
    MOV dword ptr [ESP + 0x4b0],EAX     ; 00518ff9
    TEST EDI,EDI                        ; 00519000
    JZ 0x0051901f                       ; 00519002
        ;   XREF to: 0051901f (CONDITIONAL_JUMP)  ; LAB_0051901f
    MOV EAX,dword ptr [EBX + 0x20b9c]   ; 00519004
    PUSH EAX                            ; 0051900a
    PUSH 0x5cd048                       ; 0051900b | = "pushedObject=%s\n"
    MOV EDX,dword ptr [0x005f1690]      ; 00519010 | g_CConsolePtr
    PUSH EDX                            ; 00519016 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00519017
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 0051901c
    CMP dword ptr [EBX + 0x20ba4],0x0   ; 0051901f
        ;   Label: LAB_0051901f
    JZ 0x00519eff                       ; 00519026
        ;   XREF to: 00519eff (CONDITIONAL_JUMP)  ; LAB_00519eff
    XOR EDI,EDI                         ; 0051902c
        ;   Label: LAB_0051902c
    MOV dword ptr [ESP + 0x4ac],EDI     ; 0051902e
    MOV dword ptr [ESP + 0x4b0],EDI     ; 00519035
    MOV dword ptr [ESP + 0x4c4],EDI     ; 0051903c
    MOV dword ptr [ESP + 0x4c0],EDI     ; 00519043
    MOV dword ptr [ESP + 0x4b4],EDI     ; 0051904a
    CMP dword ptr [ESP + 0x4bc],0x0     ; 00519051
    JZ 0x0051906e                       ; 00519059
        ;   XREF to: 0051906e (CONDITIONAL_JUMP)  ; LAB_0051906e
    PUSH 0x5cd059                       ; 0051905b | = "ladder\n"
    MOV EAX,[0x005f1690]                ; 00519060 | g_CConsolePtr
    PUSH EAX                            ; 00519065 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00519066
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 0051906b
    CMP dword ptr [EBX + 0x20b98],0x0   ; 0051906e
        ;   Label: LAB_0051906e
    JZ 0x00519f11                       ; 00519075
        ;   XREF to: 00519f11 (CONDITIONAL_JUMP)  ; LAB_00519f11
    XOR ESI,ESI                         ; 0051907b
        ;   Label: LAB_0051907b
    MOV EDX,dword ptr [ESP + 0x4bc]     ; 0051907d
    MOV dword ptr [ESP + 0x4c4],ESI     ; 00519084
    MOV dword ptr [ESP + 0x4c0],ESI     ; 0051908b
    MOV dword ptr [ESP + 0x4b4],ESI     ; 00519092
    TEST EDX,EDX                        ; 00519099
    JZ 0x005190b1                       ; 0051909b
        ;   XREF to: 005190b1 (CONDITIONAL_JUMP)  ; LAB_005190b1
    PUSH 0x5cd061                       ; 0051909d | = "pickup\n"
    MOV ECX,dword ptr [0x005f1690]      ; 005190a2 | g_CConsolePtr
    PUSH ECX                            ; 005190a8 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 005190a9
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 005190ae
    PUSH 0x31                           ; 005190b1
        ;   Label: LAB_005190b1
    LEA ESI,[EBX + 0x158]               ; 005190b3
    PUSH ESI                            ; 005190b9
    CALL core_motion.cpp_FUN_004fc350   ; 005190ba
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x4e0],EAX     ; 005190bf
    FLD float ptr [ESP + 0x4e0]         ; 005190c6
    FLDZ                                ; 005190cd
    ADD ESP,0x8                         ; 005190cf
    FCOMPP                              ; 005190d2
    FNSTSW AX                           ; 005190d4
    SAHF                                ; 005190d6
    JNC 0x00519f23                      ; 005190d7
        ;   XREF to: 00519f23 (CONDITIONAL_JUMP)  ; LAB_00519f23
    XOR ESI,ESI                         ; 005190dd
        ;   Label: LAB_005190dd
    MOV ECX,dword ptr [ESP + 0x4bc]     ; 005190df
    MOV dword ptr [ESP + 0x4b0],ESI     ; 005190e6
    MOV dword ptr [ESP + 0x4c4],ESI     ; 005190ed
    MOV dword ptr [ESP + 0x4c0],ESI     ; 005190f4
    MOV dword ptr [ESP + 0x4b4],ESI     ; 005190fb
    TEST ECX,ECX                        ; 00519102
    JZ 0x0051911a                       ; 00519104
        ;   XREF to: 0051911a (CONDITIONAL_JUMP)  ; LAB_0051911a
    PUSH 0x5cd069                       ; 00519106 | = "hurt\n"
    MOV ESI,dword ptr [0x005f1690]      ; 0051910b | g_CConsolePtr
    PUSH ESI                            ; 00519111 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00519112
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 00519117
    PUSH 0x2a                           ; 0051911a
        ;   Label: LAB_0051911a
    LEA EAX,[EBX + 0x158]               ; 0051911c
    PUSH EAX                            ; 00519122
    CALL core_motion.cpp_FUN_004fc350   ; 00519123
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x4e0],EAX     ; 00519128
    FLD float ptr [ESP + 0x4e0]         ; 0051912f
    FLDZ                                ; 00519136
    ADD ESP,0x8                         ; 00519138
    FCOMPP                              ; 0051913b
    FNSTSW AX                           ; 0051913d
    SAHF                                ; 0051913f
    JNC 0x00519f87                      ; 00519140
        ;   XREF to: 00519f87 (CONDITIONAL_JUMP)  ; LAB_00519f87
    XOR EDX,EDX                         ; 00519146
        ;   Label: LAB_00519146
    MOV EDI,dword ptr [ESP + 0x4bc]     ; 00519148
    MOV dword ptr [ESP + 0x4c0],EDX     ; 0051914f
    MOV dword ptr [ESP + 0x4b4],EDX     ; 00519156
    MOV dword ptr [ESP + 0x4c4],EDX     ; 0051915d
    TEST EDI,EDI                        ; 00519164
    JZ 0x0051917b                       ; 00519166
        ;   XREF to: 0051917b (CONDITIONAL_JUMP)  ; LAB_0051917b
    PUSH 0x5cd06f                       ; 00519168 | = "door\n"
    MOV EAX,[0x005f1690]                ; 0051916d | g_CConsolePtr
    PUSH EAX                            ; 00519172 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00519173
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 00519178
    PUSH 0x2b                           ; 0051917b
        ;   Label: LAB_0051917b
    LEA EAX,[EBX + 0x158]               ; 0051917d
    PUSH EAX                            ; 00519183
    CALL core_motion.cpp_FUN_004fc350   ; 00519184
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x4e0],EAX     ; 00519189
    FLD float ptr [ESP + 0x4e0]         ; 00519190
    FLDZ                                ; 00519197
    ADD ESP,0x8                         ; 00519199
    FCOMPP                              ; 0051919c
    FNSTSW AX                           ; 0051919e
    SAHF                                ; 005191a0
    JNC 0x00519fa6                      ; 005191a1
        ;   XREF to: 00519fa6 (CONDITIONAL_JUMP)  ; LAB_00519fa6
    XOR ESI,ESI                         ; 005191a7
        ;   Label: LAB_005191a7
    MOV EDX,dword ptr [ESP + 0x4bc]     ; 005191a9
    MOV dword ptr [ESP + 0x4c0],ESI     ; 005191b0
    MOV dword ptr [ESP + 0x4b4],ESI     ; 005191b7
    MOV dword ptr [ESP + 0x4c4],ESI     ; 005191be
    TEST EDX,EDX                        ; 005191c5
    JZ 0x005191dd                       ; 005191c7
        ;   XREF to: 005191dd (CONDITIONAL_JUMP)  ; LAB_005191dd
    PUSH 0x5cd075                       ; 005191c9 | = "door\n"
    MOV ECX,dword ptr [0x005f1690]      ; 005191ce | g_CConsolePtr
    PUSH ECX                            ; 005191d4 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 005191d5
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 005191da
    LEA ESI,[EBX + 0x158]               ; 005191dd
        ;   Label: LAB_005191dd
    PUSH ESI                            ; 005191e3
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005191e4
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005191e9
    ADD ESP,0x4                         ; 005191ec
    CMP EAX,0x2a                        ; 005191ef
    JZ 0x005192b8                       ; 005191f2
        ;   XREF to: 005192b8 (CONDITIONAL_JUMP)  ; LAB_005192b8
    PUSH ESI                            ; 005191f8
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005191f9
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005191fe
    ADD ESP,0x4                         ; 00519201
    CMP EAX,0x2b                        ; 00519204
    JZ 0x005192b8                       ; 00519207
        ;   XREF to: 005192b8 (CONDITIONAL_JUMP)  ; LAB_005192b8
    PUSH ESI                            ; 0051920d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0051920e
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00519213
    ADD ESP,0x4                         ; 00519216
    CMP EAX,0x28                        ; 00519219
    JZ 0x005192b8                       ; 0051921c
        ;   XREF to: 005192b8 (CONDITIONAL_JUMP)  ; LAB_005192b8
    PUSH ESI                            ; 00519222
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00519223
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00519228
    ADD ESP,0x4                         ; 0051922b
    CMP EAX,0x29                        ; 0051922e
    JZ 0x005192b8                       ; 00519231
        ;   XREF to: 005192b8 (CONDITIONAL_JUMP)  ; LAB_005192b8
    PUSH ESI                            ; 00519237
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00519238
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0051923d
    ADD ESP,0x4                         ; 00519240
    CMP EAX,0x27                        ; 00519243
    JZ 0x005192b8                       ; 00519246
        ;   XREF to: 005192b8 (CONDITIONAL_JUMP)  ; LAB_005192b8
    PUSH ESI                            ; 0051924c
    CALL core_motion.cpp_FUN_004fc0c0   ; 0051924d
        ;   XREF to: 004fc0c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc0c0()
    ADD ESP,0x4                         ; 00519252
    CMP EAX,0x2a                        ; 00519255
    JZ 0x005192b8                       ; 00519258
        ;   XREF to: 005192b8 (CONDITIONAL_JUMP)  ; LAB_005192b8
    PUSH ESI                            ; 0051925a
    CALL core_motion.cpp_FUN_004fc0c0   ; 0051925b
        ;   XREF to: 004fc0c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc0c0()
    ADD ESP,0x4                         ; 00519260
    CMP EAX,0x2b                        ; 00519263
    JZ 0x005192b8                       ; 00519266
        ;   XREF to: 005192b8 (CONDITIONAL_JUMP)  ; LAB_005192b8
    PUSH ESI                            ; 00519268
    CALL core_motion.cpp_FUN_004fc0c0   ; 00519269
        ;   XREF to: 004fc0c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc0c0()
    ADD ESP,0x4                         ; 0051926e
    CMP EAX,0x28                        ; 00519271
    JZ 0x005192b8                       ; 00519274
        ;   XREF to: 005192b8 (CONDITIONAL_JUMP)  ; LAB_005192b8
    PUSH ESI                            ; 00519276
    CALL core_motion.cpp_FUN_004fc0c0   ; 00519277
        ;   XREF to: 004fc0c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc0c0()
    ADD ESP,0x4                         ; 0051927c
    CMP EAX,0x29                        ; 0051927f
    JZ 0x005192b8                       ; 00519282
        ;   XREF to: 005192b8 (CONDITIONAL_JUMP)  ; LAB_005192b8
    PUSH ESI                            ; 00519284
    CALL core_motion.cpp_FUN_004fc0c0   ; 00519285
        ;   XREF to: 004fc0c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc0c0()
    ADD ESP,0x4                         ; 0051928a
    CMP EAX,0x27                        ; 0051928d
    JZ 0x005192b8                       ; 00519290
        ;   XREF to: 005192b8 (CONDITIONAL_JUMP)  ; LAB_005192b8
    CMP dword ptr [EBX + 0x20b64],0x5   ; 00519292
    JNZ 0x005192a5                      ; 00519299
        ;   XREF to: 005192a5 (CONDITIONAL_JUMP)  ; LAB_005192a5
    MOV dword ptr [EBX + 0x20b64],0x0   ; 0051929b
    CMP dword ptr [EBX + 0x20b94],0x0   ; 005192a5
        ;   Label: LAB_005192a5
    JZ 0x005192b8                       ; 005192ac
        ;   XREF to: 005192b8 (CONDITIONAL_JUMP)  ; LAB_005192b8
    MOV dword ptr [EBX + 0x20b94],0x0   ; 005192ae
    LEA ESI,[EBX + 0x158]               ; 005192b8
        ;   Label: LAB_005192b8
    PUSH ESI                            ; 005192be
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005192bf
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005192c4
    ADD ESP,0x4                         ; 005192c7
    CMP EAX,0x20                        ; 005192ca
    JZ 0x0051936c                       ; 005192cd
        ;   XREF to: 0051936c (CONDITIONAL_JUMP)  ; LAB_0051936c
    PUSH ESI                            ; 005192d3
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005192d4
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005192d9
    ADD ESP,0x4                         ; 005192dc
    CMP EAX,0x1e                        ; 005192df
    JZ 0x0051936c                       ; 005192e2
        ;   XREF to: 0051936c (CONDITIONAL_JUMP)  ; LAB_0051936c
    PUSH ESI                            ; 005192e8
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005192e9
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005192ee
    ADD ESP,0x4                         ; 005192f1
    CMP EAX,0x22                        ; 005192f4
    JZ 0x0051936c                       ; 005192f7
        ;   XREF to: 0051936c (CONDITIONAL_JUMP)  ; LAB_0051936c
    PUSH ESI                            ; 005192fd
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005192fe
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00519303
    ADD ESP,0x4                         ; 00519306
    CMP EAX,0x23                        ; 00519309
    JZ 0x0051936c                       ; 0051930c
        ;   XREF to: 0051936c (CONDITIONAL_JUMP)  ; LAB_0051936c
    PUSH ESI                            ; 0051930e
    CALL core_motion.cpp_FUN_004fc0c0   ; 0051930f
        ;   XREF to: 004fc0c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc0c0()
    ADD ESP,0x4                         ; 00519314
    CMP EAX,0x20                        ; 00519317
    JZ 0x0051936c                       ; 0051931a
        ;   XREF to: 0051936c (CONDITIONAL_JUMP)  ; LAB_0051936c
    PUSH ESI                            ; 0051931c
    CALL core_motion.cpp_FUN_004fc0c0   ; 0051931d
        ;   XREF to: 004fc0c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc0c0()
    ADD ESP,0x4                         ; 00519322
    CMP EAX,0x1e                        ; 00519325
    JZ 0x0051936c                       ; 00519328
        ;   XREF to: 0051936c (CONDITIONAL_JUMP)  ; LAB_0051936c
    PUSH ESI                            ; 0051932a
    CALL core_motion.cpp_FUN_004fc0c0   ; 0051932b
        ;   XREF to: 004fc0c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc0c0()
    ADD ESP,0x4                         ; 00519330
    CMP EAX,0x22                        ; 00519333
    JZ 0x0051936c                       ; 00519336
        ;   XREF to: 0051936c (CONDITIONAL_JUMP)  ; LAB_0051936c
    PUSH ESI                            ; 00519338
    CALL core_motion.cpp_FUN_004fc0c0   ; 00519339
        ;   XREF to: 004fc0c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc0c0()
    ADD ESP,0x4                         ; 0051933e
    CMP EAX,0x23                        ; 00519341
    JZ 0x0051936c                       ; 00519344
        ;   XREF to: 0051936c (CONDITIONAL_JUMP)  ; LAB_0051936c
    CMP dword ptr [EBX + 0x20b64],0x4   ; 00519346
    JNZ 0x00519359                      ; 0051934d
        ;   XREF to: 00519359 (CONDITIONAL_JUMP)  ; LAB_00519359
    MOV dword ptr [EBX + 0x20b64],0x0   ; 0051934f
    CMP dword ptr [EBX + 0x20b98],0x0   ; 00519359
        ;   Label: LAB_00519359
    JZ 0x0051936c                       ; 00519360
        ;   XREF to: 0051936c (CONDITIONAL_JUMP)  ; LAB_0051936c
    MOV dword ptr [EBX + 0x20b98],0x0   ; 00519362
    PUSH 0x3b                           ; 0051936c
        ;   Label: LAB_0051936c
    LEA EAX,[EBX + 0x158]               ; 0051936e
    PUSH EAX                            ; 00519374
    CALL core_motion.cpp_FUN_004fc350   ; 00519375
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x4e0],EAX     ; 0051937a
    FLD float ptr [ESP + 0x4e0]         ; 00519381
    FLDZ                                ; 00519388
    ADD ESP,0x8                         ; 0051938a
    FCOMPP                              ; 0051938d
    FNSTSW AX                           ; 0051938f
    SAHF                                ; 00519391
    JNC 0x005193d7                      ; 00519392
        ;   XREF to: 005193d7 (CONDITIONAL_JUMP)  ; LAB_005193d7
    XOR ECX,ECX                         ; 00519394
    MOV dword ptr [ESP + 0x4b0],ECX     ; 00519396
    MOV dword ptr [ESP + 0x4c4],ECX     ; 0051939d
    MOV dword ptr [ESP + 0x4ac],ECX     ; 005193a4
    MOV dword ptr [ESP + 0x4c0],ECX     ; 005193ab
    MOV dword ptr [ESP + 0x4b4],ECX     ; 005193b2
    CMP dword ptr [ESP + 0x4bc],0x0     ; 005193b9
    JZ 0x005193d7                       ; 005193c1
        ;   XREF to: 005193d7 (CONDITIONAL_JUMP)  ; LAB_005193d7
    PUSH 0x5cd07b                       ; 005193c3 | = "sitting\n"
    MOV ESI,dword ptr [0x005f1690]      ; 005193c8 | g_CConsolePtr
    PUSH ESI                            ; 005193ce | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 005193cf
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 005193d4
    CMP dword ptr [EBX + 0x20b64],0x1   ; 005193d7
        ;   Label: LAB_005193d7
    JNZ 0x0051940f                      ; 005193de
        ;   XREF to: 0051940f (CONDITIONAL_JUMP)  ; LAB_0051940f
    XOR EAX,EAX                         ; 005193e0
    MOV ECX,dword ptr [ESP + 0x4bc]     ; 005193e2
    MOV dword ptr [ESP + 0x4c0],EAX     ; 005193e9
    MOV dword ptr [ESP + 0x4c4],EAX     ; 005193f0
    TEST ECX,ECX                        ; 005193f7
    JZ 0x0051940f                       ; 005193f9
        ;   XREF to: 0051940f (CONDITIONAL_JUMP)  ; LAB_0051940f
    PUSH 0x5cd084                       ; 005193fb | = "stashinventory\n"
    MOV ESI,dword ptr [0x005f1690]      ; 00519400 | g_CConsolePtr
    PUSH ESI                            ; 00519406 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00519407
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 0051940c
    MOV EDI,dword ptr [EBX + 0x20b64]   ; 0051940f
        ;   Label: LAB_0051940f
    CMP EDI,0x8                         ; 00519415
    JNZ 0x00519fc5                      ; 00519418
        ;   XREF to: 00519fc5 (CONDITIONAL_JUMP)  ; LAB_00519fc5
    XOR EDX,EDX                         ; 0051941e
        ;   Label: LAB_0051941e
    MOV ESI,dword ptr [ESP + 0x4bc]     ; 00519420
    MOV dword ptr [ESP + 0x4c0],EDX     ; 00519427
    MOV dword ptr [ESP + 0x4c4],EDX     ; 0051942e
    TEST ESI,ESI                        ; 00519435
    JZ 0x0051944d                       ; 00519437
        ;   XREF to: 0051944d (CONDITIONAL_JUMP)  ; LAB_0051944d
    PUSH 0x5cd094                       ; 00519439 | = "stashinventory\n"
    MOV EDI,dword ptr [0x005f1690]      ; 0051943e | g_CConsolePtr
    PUSH EDI                            ; 00519444 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00519445
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 0051944a
    CMP dword ptr [EBX + 0x20b64],0x2   ; 0051944d
        ;   Label: LAB_0051944d
    JNZ 0x00519485                      ; 00519454
        ;   XREF to: 00519485 (CONDITIONAL_JUMP)  ; LAB_00519485
    XOR EDX,EDX                         ; 00519456
    MOV ESI,dword ptr [ESP + 0x4bc]     ; 00519458
    MOV dword ptr [ESP + 0x4c0],EDX     ; 0051945f
    MOV dword ptr [ESP + 0x4c4],EDX     ; 00519466
    TEST ESI,ESI                        ; 0051946d
    JZ 0x00519485                       ; 0051946f
        ;   XREF to: 00519485 (CONDITIONAL_JUMP)  ; LAB_00519485
    PUSH 0x5cd0a4                       ; 00519471 | = "placeobject\n"
    MOV EDI,dword ptr [0x005f1690]      ; 00519476 | g_CConsolePtr
    PUSH EDI                            ; 0051947c | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0051947d
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 00519482
    CMP dword ptr [EBX + 0x20b64],0x6   ; 00519485
        ;   Label: LAB_00519485
    JNZ 0x005194bd                      ; 0051948c
        ;   XREF to: 005194bd (CONDITIONAL_JUMP)  ; LAB_005194bd
    XOR EDX,EDX                         ; 0051948e
    MOV ESI,dword ptr [ESP + 0x4bc]     ; 00519490
    MOV dword ptr [ESP + 0x4c0],EDX     ; 00519497
    MOV dword ptr [ESP + 0x4c4],EDX     ; 0051949e
    TEST ESI,ESI                        ; 005194a5
    JZ 0x005194bd                       ; 005194a7
        ;   XREF to: 005194bd (CONDITIONAL_JUMP)  ; LAB_005194bd
    PUSH 0x5cd0b1                       ; 005194a9 | = "putdownobject\n"
    MOV EDI,dword ptr [0x005f1690]      ; 005194ae | g_CConsolePtr
    PUSH EDI                            ; 005194b4 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 005194b5
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 005194ba
    CMP dword ptr [EBX + 0x20b64],0x3   ; 005194bd
        ;   Label: LAB_005194bd
    JNZ 0x005194f5                      ; 005194c4
        ;   XREF to: 005194f5 (CONDITIONAL_JUMP)  ; LAB_005194f5
    XOR EDX,EDX                         ; 005194c6
    MOV ESI,dword ptr [ESP + 0x4bc]     ; 005194c8
    MOV dword ptr [ESP + 0x4c0],EDX     ; 005194cf
    MOV dword ptr [ESP + 0x4c4],EDX     ; 005194d6
    TEST ESI,ESI                        ; 005194dd
    JZ 0x005194f5                       ; 005194df
        ;   XREF to: 005194f5 (CONDITIONAL_JUMP)  ; LAB_005194f5
    PUSH 0x5cd0c0                       ; 005194e1 | = "toss\n"
    MOV EDI,dword ptr [0x005f1690]      ; 005194e6 | g_CConsolePtr
    PUSH EDI                            ; 005194ec | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 005194ed
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 005194f2
    CMP dword ptr [EBX + 0x20b64],0x7   ; 005194f5
        ;   Label: LAB_005194f5
    JNZ 0x0051952d                      ; 005194fc
        ;   XREF to: 0051952d (CONDITIONAL_JUMP)  ; LAB_0051952d
    XOR EDX,EDX                         ; 005194fe
    MOV ESI,dword ptr [ESP + 0x4bc]     ; 00519500
    MOV dword ptr [ESP + 0x4c0],EDX     ; 00519507
    MOV dword ptr [ESP + 0x4c4],EDX     ; 0051950e
    TEST ESI,ESI                        ; 00519515
    JZ 0x0051952d                       ; 00519517
        ;   XREF to: 0051952d (CONDITIONAL_JUMP)  ; LAB_0051952d
    PUSH 0x5cd0c6                       ; 00519519 | = "attackmelee\n"
    MOV EDI,dword ptr [0x005f1690]      ; 0051951e | g_CConsolePtr
    PUSH EDI                            ; 00519524 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00519525
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 0051952a
    CMP dword ptr [EBX + 0x20ba0],0x0   ; 0051952d
        ;   Label: LAB_0051952d
    JZ 0x00519fd3                       ; 00519534
        ;   XREF to: 00519fd3 (CONDITIONAL_JUMP)  ; LAB_00519fd3
    XOR EDX,EDX                         ; 0051953a
        ;   Label: LAB_0051953a
    MOV EAX,dword ptr [ESP + 0x4bc]     ; 0051953c
    MOV dword ptr [ESP + 0x4c4],EDX     ; 00519543
    MOV dword ptr [ESP + 0x4c0],EDX     ; 0051954a
    MOV dword ptr [ESP + 0x4b4],EDX     ; 00519551
    MOV dword ptr [ESP + 0x4b0],EDX     ; 00519558
    TEST EAX,EAX                        ; 0051955f
    JZ 0x0051957e                       ; 00519561
        ;   XREF to: 0051957e (CONDITIONAL_JUMP)  ; LAB_0051957e
    MOV EDX,dword ptr [EBX + 0x20ba0]   ; 00519563
    PUSH EDX                            ; 00519569
    PUSH 0x5cd0d3                       ; 0051956a | = "leverToPull=%s\n"
    MOV ECX,dword ptr [0x005f1690]      ; 0051956f | g_CConsolePtr
    PUSH ECX                            ; 00519575 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00519576
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 0051957b
    CMP dword ptr [EBX + 0x26fc],0x0    ; 0051957e
        ;   Label: LAB_0051957e
    JNZ 0x005195b4                      ; 00519585
        ;   XREF to: 005195b4 (CONDITIONAL_JUMP)  ; LAB_005195b4
    CMP dword ptr [EBX + 0xdc],0x0      ; 00519587
    JZ 0x0051959b                       ; 0051958e
        ;   XREF to: 0051959b (CONDITIONAL_JUMP)  ; LAB_0051959b
    MOV dword ptr [ESP + 0x4ac],0x1     ; 00519590
    FLD float ptr [EBX + 0x24]          ; 0051959b
        ;   Label: LAB_0051959b
    FCOMP float ptr [EBX + 0x2504]      ; 0051959e
    FNSTSW AX                           ; 005195a4
    SAHF                                ; 005195a6
    JZ 0x005195b4                       ; 005195a7
        ;   XREF to: 005195b4 (CONDITIONAL_JUMP)  ; LAB_005195b4
    MOV dword ptr [ESP + 0x4ac],0x1     ; 005195a9
    PUSH dword ptr [EBP + 0x18]         ; 005195b4
        ;   Label: LAB_005195b4
    FLD float ptr [EBX + 0x24a4]        ; 005195b7
    PUSH EBX                            ; 005195bd
    FSTP float ptr [EBX + 0x2524]       ; 005195be
    CALL core_charactr.cpp_FUN_00434850 ; 005195c4
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    MOV ECX,dword ptr [EBX + 0x20ba8]   ; 005195c9
    ADD ESP,0x8                         ; 005195cf
    TEST ECX,ECX                        ; 005195d2
    JNZ 0x0051a004                      ; 005195d4
        ;   XREF to: 0051a004 (CONDITIONAL_JUMP)  ; LAB_0051a004
    FLD double ptr [0x005cd14f]         ; 005195da | DAT_005cd14f
    FLD float ptr [EBP + 0x18]          ; 005195e0
    FMUL ST1                            ; 005195e3
    FMULP                               ; 005195e5
    FSUBR float ptr [EBX + 0x20c34]     ; 005195e7
    FST float ptr [EBX + 0x20c34]       ; 005195ed
    FLDZ                                ; 005195f3
    FCOMPP                              ; 005195f5
    FNSTSW AX                           ; 005195f7
    SAHF                                ; 005195f9
    JBE 0x00519602                      ; 005195fa
        ;   XREF to: 00519602 (CONDITIONAL_JUMP)  ; LAB_00519602
    MOV dword ptr [EBX + 0x20c34],ECX   ; 005195fc
    MOV ESI,0x1                         ; 00519602
        ;   Label: LAB_00519602
    MOV EDI,dword ptr [EBX + 0x20ba4]   ; 00519607
    MOV dword ptr [ESP + 0x480],ESI     ; 0051960d
    TEST EDI,EDI                        ; 00519614
    JZ 0x0051a0b3                       ; 00519616
        ;   XREF to: 0051a0b3 (CONDITIONAL_JUMP)  ; LAB_0051a0b3
    PUSH 0x37                           ; 0051961c
    LEA EAX,[EBX + 0x158]               ; 0051961e
    PUSH EAX                            ; 00519624
    CALL core_motion.cpp_FUN_004fc350   ; 00519625
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x4e0],EAX     ; 0051962a
    FLD float ptr [ESP + 0x4e0]         ; 00519631
    FLDZ                                ; 00519638
    ADD ESP,0x8                         ; 0051963a
    FCOMPP                              ; 0051963d
    FNSTSW AX                           ; 0051963f
    SAHF                                ; 00519641
    JC 0x0051a035                       ; 00519642
        ;   XREF to: 0051a035 (CONDITIONAL_JUMP)  ; LAB_0051a035
    MOV dword ptr [EBX + 0x20ba4],0x0   ; 00519648
    FLD float ptr [EBX + 0x20cdc]       ; 00519652
        ;   Label: LAB_00519652
    FLDZ                                ; 00519658
    FCOMPP                              ; 0051965a
    FNSTSW AX                           ; 0051965c
    SAHF                                ; 0051965e
    JNC 0x0051976f                      ; 0051965f
        ;   XREF to: 0051976f (CONDITIONAL_JUMP)  ; LAB_0051976f
    FLD float ptr [EBP + 0x18]          ; 00519665
    FCOMP float ptr [EBX + 0x20cdc]     ; 00519668
    FNSTSW AX                           ; 0051966e
    SAHF                                ; 00519670
    JNC 0x0051a09b                      ; 00519671
        ;   XREF to: 0051a09b (CONDITIONAL_JUMP)  ; LAB_0051a09b
    FLD float ptr [EBP + 0x18]          ; 00519677
    FLD ST0                             ; 0051967a
    FDIV float ptr [EBX + 0x20cdc]      ; 0051967c
    FLD float ptr [EBX + 0x20cdc]       ; 00519682
    FSUBRP ST2,ST0                      ; 00519688
    FSTP float ptr [ESP + 0x4c]         ; 0051968a
    FSTP float ptr [EBX + 0x20cdc]      ; 0051968e
    LEA EAX,[EBX + 0x20ccc]             ; 00519694
        ;   Label: LAB_00519694
    FLD float ptr [EAX]                 ; 0051969a
    FMUL float ptr [ESP + 0x4c]         ; 0051969c
    FLD float ptr [EAX + 0x4]           ; 005196a0
    FMUL float ptr [ESP + 0x4c]         ; 005196a3
    FLD float ptr [EAX + 0x8]           ; 005196a7
    FMUL float ptr [ESP + 0x4c]         ; 005196aa
    FLD float ptr [ESP + 0x4c]          ; 005196ae
    LEA EDI,[ESP + 0x328]               ; 005196b2
    LEA ESI,[ESP + 0x1cc]               ; 005196b9
    FLD1                                ; 005196c0
    LEA EDX,[EBX + 0x20]                ; 005196c2
    FSUBRP                              ; 005196c5
    FXCH ST3                            ; 005196c7
    FSTP float ptr [ESP + 0x1cc]        ; 005196c9
    FXCH                                ; 005196d0
    FSTP float ptr [ESP + 0x1d0]        ; 005196d2
    FSTP float ptr [ESP + 0x1d4]        ; 005196d9
    MOVSD ES:EDI,ESI                    ; 005196e0
    MOVSD ES:EDI,ESI                    ; 005196e1
    MOVSD ES:EDI,ESI                    ; 005196e2
    FSTP float ptr [ESP + 0x48c]        ; 005196e3
    FLD float ptr [EDX]                 ; 005196ea
    FLD float ptr [EDX + 0x4]           ; 005196ec
    FLD float ptr [EDX + 0x8]           ; 005196ef
    FXCH ST2                            ; 005196f2
    FADD float ptr [ESP + 0x328]        ; 005196f4
    FXCH                                ; 005196fb
    FADD float ptr [ESP + 0x32c]        ; 005196fd
    FXCH ST2                            ; 00519704
    FADD float ptr [ESP + 0x330]        ; 00519706
    FXCH                                ; 0051970d
    FSTP float ptr [EDX]                ; 0051970f
    FXCH                                ; 00519711
    FSTP float ptr [EDX + 0x4]          ; 00519713
    FSTP float ptr [EDX + 0x8]          ; 00519716
    FLD float ptr [EAX]                 ; 00519719
    FMUL float ptr [ESP + 0x48c]        ; 0051971b
    FLD float ptr [EAX + 0x4]           ; 00519722
    FMUL float ptr [ESP + 0x48c]        ; 00519725
    FLD float ptr [EAX + 0x8]           ; 0051972c
    FMUL float ptr [ESP + 0x48c]        ; 0051972f
    FXCH ST2                            ; 00519736
    FSTP float ptr [EAX]                ; 00519738
    FSTP float ptr [EAX + 0x4]          ; 0051973a
    FSTP float ptr [EAX + 0x8]          ; 0051973d
    FLD float ptr [EBX + 0x20cd8]       ; 00519740
    FSUB float ptr [EBX + 0x34]         ; 00519746
    SUB ESP,0x4                         ; 00519749
    FSTP float ptr [ESP]                ; 0051974c
    CALL core_actor.cpp_FUN_0040cfa0    ; 0051974f
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x4dc],EAX     ; 00519754
    FLD float ptr [ESP + 0x4dc]         ; 0051975b
    ADD ESP,0x4                         ; 00519762
    FMUL float ptr [ESP + 0x4c]         ; 00519765
    FSTP float ptr [EBX + 0x2508]       ; 00519769
    FLD float ptr [EBX + 0x20cf0]       ; 0051976f
        ;   Label: LAB_0051976f
    FLDZ                                ; 00519775
    FCOMPP                              ; 00519777
    FNSTSW AX                           ; 00519779
    SAHF                                ; 0051977b
    JNC 0x005198c6                      ; 0051977c
        ;   XREF to: 005198c6 (CONDITIONAL_JUMP)  ; LAB_005198c6
    FLD float ptr [EBP + 0x18]          ; 00519782
    FCOMP float ptr [EBX + 0x20cf0]     ; 00519785
    FNSTSW AX                           ; 0051978b
    SAHF                                ; 0051978d
    JNC 0x0051afcd                      ; 0051978e
        ;   XREF to: 0051afcd (CONDITIONAL_JUMP)  ; LAB_0051afcd
    FLD float ptr [EBP + 0x18]          ; 00519794
    FLD ST0                             ; 00519797
    FDIV float ptr [EBX + 0x20cf0]      ; 00519799
    FLD float ptr [EBX + 0x20cf0]       ; 0051979f
    FSUBRP ST2,ST0                      ; 005197a5
    FSTP float ptr [ESP + 0x48]         ; 005197a7
    FSTP float ptr [EBX + 0x20cf0]      ; 005197ab
    LEA EAX,[EBX + 0x20ce0]             ; 005197b1
        ;   Label: LAB_005197b1
    FLD float ptr [EAX]                 ; 005197b7
    FMUL float ptr [ESP + 0x48]         ; 005197b9
    FLD float ptr [EAX + 0x4]           ; 005197bd
    FMUL float ptr [ESP + 0x48]         ; 005197c0
    FLD float ptr [EAX + 0x8]           ; 005197c4
    FMUL float ptr [ESP + 0x48]         ; 005197c7
    LEA EDI,[ESP + 0x400]               ; 005197cb
    LEA ESI,[ESP + 0x148]               ; 005197d2
    MOV dword ptr [ESP + 0x4d8],EAX     ; 005197d9
    LEA EAX,[ESP + 0x400]               ; 005197e0
    FXCH ST2                            ; 005197e7
    FSTP float ptr [ESP + 0x148]        ; 005197e9
    FSTP float ptr [ESP + 0x14c]        ; 005197f0
    FSTP float ptr [ESP + 0x150]        ; 005197f7
    PUSH EAX                            ; 005197fe
    MOVSD ES:EDI,ESI                    ; 005197ff
    MOVSD ES:EDI,ESI                    ; 00519800
    MOVSD ES:EDI,ESI                    ; 00519801
    PUSH EBX                            ; 00519802
    LEA ESI,[ESP + 0x450]               ; 00519803
    LEA EDI,[ESP + 0x3c0]               ; 0051980a
    CALL core_actor.cpp_FUN_00408b40    ; 00519811
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x450]               ; 00519816
    ADD ESP,0x8                         ; 0051981d
    LEA EAX,[EBX + 0x249c]              ; 00519820
    FLD float ptr [ESP + 0x48]          ; 00519826
    MOVSD ES:EDI,ESI                    ; 0051982a
    MOVSD ES:EDI,ESI                    ; 0051982b
    MOVSD ES:EDI,ESI                    ; 0051982c
    FLD1                                ; 0051982d
    FLD float ptr [EAX]                 ; 0051982f
    FLD float ptr [EAX + 0x4]           ; 00519831
    FLD float ptr [EAX + 0x8]           ; 00519834
    FXCH ST3                            ; 00519837
    FSUBRP ST4,ST0                      ; 00519839
    FXCH                                ; 0051983b
    FADD float ptr [ESP + 0x3b8]        ; 0051983d
    FXCH                                ; 00519844
    FADD float ptr [ESP + 0x3bc]        ; 00519846
    FXCH ST2                            ; 0051984d
    FADD float ptr [ESP + 0x3c0]        ; 0051984f
    FXCH                                ; 00519856
    FSTP float ptr [EAX]                ; 00519858
    FXCH                                ; 0051985a
    FSTP float ptr [EAX + 0x4]          ; 0051985c
    FSTP float ptr [EAX + 0x8]          ; 0051985f
    MOV EAX,dword ptr [ESP + 0x4d8]     ; 00519862
    FSTP float ptr [ESP + 0x498]        ; 00519869
    FLD float ptr [EAX]                 ; 00519870
    FMUL float ptr [ESP + 0x498]        ; 00519872
    FLD float ptr [EAX + 0x4]           ; 00519879
    FMUL float ptr [ESP + 0x498]        ; 0051987c
    FLD float ptr [EAX + 0x8]           ; 00519883
    FMUL float ptr [ESP + 0x498]        ; 00519886
    FXCH ST2                            ; 0051988d
    FSTP float ptr [EAX]                ; 0051988f
    FSTP float ptr [EAX + 0x4]          ; 00519891
    FSTP float ptr [EAX + 0x8]          ; 00519894
    FLD float ptr [EBX + 0x20cec]       ; 00519897
    FSUB float ptr [EBX + 0x34]         ; 0051989d
    SUB ESP,0x4                         ; 005198a0
    FSTP float ptr [ESP]                ; 005198a3
    CALL core_actor.cpp_FUN_0040cfa0    ; 005198a6
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x4dc],EAX     ; 005198ab
    FLD float ptr [ESP + 0x4dc]         ; 005198b2
    ADD ESP,0x4                         ; 005198b9
    FMUL float ptr [ESP + 0x48]         ; 005198bc
    FSTP float ptr [EBX + 0x2508]       ; 005198c0
    LEA EDI,[EBX + 0x158]               ; 005198c6
        ;   Label: LAB_005198c6
    PUSH EDI                            ; 005198cc
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005198cd
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005198d2
    ADD ESP,0x4                         ; 005198d5
    CMP EAX,0x26                        ; 005198d8
    JNZ 0x0051991e                      ; 005198db
        ;   XREF to: 0051991e (CONDITIONAL_JUMP)  ; LAB_0051991e
    MOV EAX,[0x007dfe14]                ; 005198dd | g_CAmmoBoxClassInfo.name_hash
    PUSH EAX                            ; 005198e2
    MOV EDX,dword ptr [EBX + 0x20b98]   ; 005198e3
    PUSH EDX                            ; 005198e9
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005198ea
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ESI,EAX                         ; 005198ef
    ADD ESP,0x8                         ; 005198f1
    TEST EAX,EAX                        ; 005198f4
    JZ 0x0051991e                       ; 005198f6
        ;   XREF to: 0051991e (CONDITIONAL_JUMP)  ; LAB_0051991e
    PUSH EDI                            ; 005198f8
    CALL core_motion.cpp_FUN_004fc930   ; 005198f9
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x4dc],EAX     ; 005198fe
    FLD float ptr [ESP + 0x4dc]         ; 00519905
    ADD ESP,0x4                         ; 0051990c
    SUB ESP,0x4                         ; 0051990f
    FSTP float ptr [ESP]                ; 00519912
    PUSH ESI                            ; 00519915
    CALL core_ammobox.cpp_FUN_0040e6b0  ; 00519916
        ;   XREF to: 0040e6b0 (UNCONDITIONAL_CALL)  ; void core_ammobox.cpp_FUN_0040e6b0(CAmmoBox * this_ptr, float open_pct)
    ADD ESP,0x8                         ; 0051991b
    PUSH EBX                            ; 0051991e
        ;   Label: LAB_0051991e
    CALL core_charactr.cpp_FUN_0042cd30 ; 0051991f
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00519924
    PUSH dword ptr [EBP + 0x18]         ; 00519927
    PUSH EBX                            ; 0051992a
    CALL core_prye.cpp_FUN_0051e380     ; 0051992b
        ;   XREF to: 0051e380 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_0051e380()
    ADD ESP,0x8                         ; 00519930
    CMP dword ptr [ESP + 0x480],0x0     ; 00519933
    JZ 0x00519955                       ; 0051993b
        ;   XREF to: 00519955 (CONDITIONAL_JUMP)  ; LAB_00519955
    LEA EAX,[EBX + 0x20c6c]             ; 0051993d
    MOV dword ptr [EAX + 0x8],0x0       ; 00519943
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051994a
    MOV dword ptr [EAX + 0x4],EDX       ; 0051994d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00519950
    MOV dword ptr [EAX],EDX             ; 00519953
    CMP dword ptr [EBX + 0x20ba4],0x0   ; 00519955
        ;   Label: LAB_00519955
    JZ 0x0051afe5                       ; 0051995c
        ;   XREF to: 0051afe5 (CONDITIONAL_JUMP)  ; LAB_0051afe5
    LEA EAX,[EBX + 0x249c]              ; 00519962
        ;   Label: LAB_00519962
    PUSH EAX                            ; 00519968
    LEA ESI,[ESP + 0x260]               ; 00519969
    PUSH EBX                            ; 00519970
    LEA EDI,[ESP + 0x24c]               ; 00519971
    MOV dword ptr [ESP + 0x4d0],EAX     ; 00519978
    CALL core_actor.cpp_FUN_00408b00    ; 0051997f
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x264]               ; 00519984
    ADD ESP,0x8                         ; 0051998b
    LEA EAX,[EBX + 0x20]                ; 0051998e
    MOVSD ES:EDI,ESI                    ; 00519991
    MOVSD ES:EDI,ESI                    ; 00519992
    MOVSD ES:EDI,ESI                    ; 00519993
    FLD float ptr [EAX]                 ; 00519994
    FLD float ptr [EAX + 0x4]           ; 00519996
    FLD float ptr [EAX + 0x8]           ; 00519999
    FXCH ST2                            ; 0051999c
    FADD float ptr [ESP + 0x244]        ; 0051999e
    FXCH                                ; 005199a5
    FADD float ptr [ESP + 0x248]        ; 005199a7
    FXCH ST2                            ; 005199ae
    FADD float ptr [ESP + 0x24c]        ; 005199b0
    FXCH                                ; 005199b7
    FSTP float ptr [EAX]                ; 005199b9
    FXCH                                ; 005199bb
    FSTP float ptr [EAX + 0x4]          ; 005199bd
    FSTP float ptr [EAX + 0x8]          ; 005199c0
    MOV EAX,dword ptr [ESP + 0x4c8]     ; 005199c3
    MOV dword ptr [EAX + 0x8],0x0       ; 005199ca
    MOV EDX,dword ptr [EAX + 0x8]       ; 005199d1
    MOV dword ptr [EAX + 0x4],EDX       ; 005199d4
    MOV EDX,dword ptr [EAX + 0x4]       ; 005199d7
    MOV dword ptr [EAX],EDX             ; 005199da
    MOV dword ptr [EBX + 0x20c84],0x0   ; 005199dc
        ;   Label: LAB_005199dc
    LEA EAX,[EBX + 0x20c6c]             ; 005199e6
        ;   Label: LAB_005199e6
    MOV dword ptr [EAX + 0x8],0x0       ; 005199ec
    MOV ECX,dword ptr [ESP + 0x4b4]     ; 005199f3
    MOV EDX,dword ptr [EAX + 0x8]       ; 005199fa
    MOV dword ptr [EAX + 0x4],EDX       ; 005199fd
    MOV EDX,dword ptr [EAX + 0x4]       ; 00519a00
    MOV dword ptr [EAX],EDX             ; 00519a03
    TEST ECX,ECX                        ; 00519a05
    JZ 0x00519b59                       ; 00519a07
        ;   XREF to: 00519b59 (CONDITIONAL_JUMP)  ; LAB_00519b59
    CMP dword ptr [EBX + 0xcdf0],0x0    ; 00519a0d
    JZ 0x0051b43f                       ; 00519a14
        ;   XREF to: 0051b43f (CONDITIONAL_JUMP)  ; LAB_0051b43f
    CMP dword ptr [EBX + 0x20bcc],0x0   ; 00519a1a
        ;   Label: LAB_00519a1a
    JZ 0x0051b45e                       ; 00519a21
        ;   XREF to: 0051b45e (CONDITIONAL_JUMP)  ; LAB_0051b45e
    MOV EAX,[0x005fe9dc]                ; 00519a27 | g_CGamePtr
    MOV dword ptr [EBX + 0x20bcc],0x0   ; 00519a2c
    CMP dword ptr [EAX + 0x26c],0x0     ; 00519a36 | g_CGameInstance.field620_0x26c
    JZ 0x00519a5b                       ; 00519a3d
        ;   XREF to: 00519a5b (CONDITIONAL_JUMP)  ; LAB_00519a5b
    PUSH 0x5cd12c                       ; 00519a3f | = "flashlit.wav"
    MOV dword ptr [EAX + 0x26c],0x0     ; 00519a44 | g_CGameInstance.field620_0x26c
    PUSH EBX                            ; 00519a4e
    MOV EAX,dword ptr [EBX + 0x154]     ; 00519a4f
    CALL dword ptr [EAX + 0x2c]         ; 00519a55
    ADD ESP,0x8                         ; 00519a58
    CMP dword ptr [EBX + 0xcdec],0x0    ; 00519a5b
        ;   Label: LAB_00519a5b
    JZ 0x00519a8c                       ; 00519a62
        ;   XREF to: 00519a8c (CONDITIONAL_JUMP)  ; LAB_00519a8c
    MOV EDX,dword ptr [0x007e1a50]      ; 00519a64 | DAT_007e1a50
    PUSH EDX                            ; 00519a6a
    MOV ECX,dword ptr [EBX + 0x25b0]    ; 00519a6b
    PUSH ECX                            ; 00519a71
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00519a72
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00519a77
    TEST EAX,EAX                        ; 00519a7a
    JZ 0x0051b490                       ; 00519a7c
        ;   XREF to: 0051b490 (CONDITIONAL_JUMP)  ; LAB_0051b490
    MOV dword ptr [EBX + 0x20b64],0x9   ; 00519a82
    MOV EAX,[0x007e1a50]                ; 00519a8c | DAT_007e1a50
        ;   Label: LAB_00519a8c
    PUSH EAX                            ; 00519a91
    MOV EDX,dword ptr [EBX + 0x25b0]    ; 00519a92
    PUSH EDX                            ; 00519a98
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00519a99
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00519a9e
    TEST EAX,EAX                        ; 00519aa1
    JZ 0x00519b59                       ; 00519aa3
        ;   XREF to: 00519b59 (CONDITIONAL_JUMP)  ; LAB_00519b59
    CMP dword ptr [EAX + 0x23a0],0x0    ; 00519aa9
    JZ 0x00519b59                       ; 00519ab0
        ;   XREF to: 00519b59 (CONDITIONAL_JUMP)  ; LAB_00519b59
    FLD float ptr [EBX + 0xce04]        ; 00519ab6
    FMUL float ptr [0x005cd17f]         ; 00519abc | DAT_005cd17f
    FMUL double ptr [0x005cd14f]        ; 00519ac2 | DAT_005cd14f
    FMUL float ptr [EBP + 0x18]         ; 00519ac8
    FLD float ptr [EBX + 0x20bd8]       ; 00519acb
    FXCH                                ; 00519ad1
    FADD ST0,ST1                        ; 00519ad3
    PUSH EBX                            ; 00519ad5
    FSTP ST1                            ; 00519ad6
    FSTP float ptr [EBX + 0x20bd8]      ; 00519ad8
    CALL core_prye.cpp_FUN_0051c0a0     ; 00519ade
        ;   XREF to: 0051c0a0 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_0051c0a0()
    MOV dword ptr [ESP + 0x4dc],EAX     ; 00519ae3
    FLD float ptr [ESP + 0x4dc]         ; 00519aea
    ADD ESP,0x4                         ; 00519af1
    PUSH EBX                            ; 00519af4
    FSTP float ptr [ESP + 0x488]        ; 00519af5
    CALL core_prye.cpp_FUN_0051c0f0     ; 00519afc
        ;   XREF to: 0051c0f0 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_0051c0f0()
    MOV dword ptr [ESP + 0x4dc],EAX     ; 00519b01
    FLD float ptr [ESP + 0x4dc]         ; 00519b08
    ADD ESP,0x4                         ; 00519b0f
    FLD float ptr [EBX + 0x20bd8]       ; 00519b12
    FXCH                                ; 00519b18
    FSTP float ptr [ESP + 0x4cc]        ; 00519b1a
    FCOMP float ptr [ESP + 0x484]       ; 00519b21
    FNSTSW AX                           ; 00519b28
    SAHF                                ; 00519b2a
    JNC 0x00519b3a                      ; 00519b2b
        ;   XREF to: 00519b3a (CONDITIONAL_JUMP)  ; LAB_00519b3a
    MOV EAX,dword ptr [ESP + 0x484]     ; 00519b2d
    MOV dword ptr [EBX + 0x20bd8],EAX   ; 00519b34
    FLD float ptr [EBX + 0x20bd8]       ; 00519b3a
        ;   Label: LAB_00519b3a
    FCOMP float ptr [ESP + 0x4cc]       ; 00519b40
    FNSTSW AX                           ; 00519b47
    SAHF                                ; 00519b49
    JBE 0x00519b59                      ; 00519b4a
        ;   XREF to: 00519b59 (CONDITIONAL_JUMP)  ; LAB_00519b59
    MOV EAX,dword ptr [ESP + 0x4cc]     ; 00519b4c
    MOV dword ptr [EBX + 0x20bd8],EAX   ; 00519b53
    LEA EAX,[EBX + 0x206e8]             ; 00519b59
        ;   Label: LAB_00519b59
    MOV EAX,dword ptr [EAX + 0x338]     ; 00519b5f
    TEST EAX,EAX                        ; 00519b65
    JNZ 0x0051b4d2                      ; 00519b67
        ;   XREF to: 0051b4d2 (CONDITIONAL_JUMP)  ; LAB_0051b4d2
    MOV EAX,[0x005fe9dc]                ; 00519b6d | g_CGamePtr
    MOV dword ptr [EAX + 0x26c],0x0     ; 00519b72 | g_CGameInstance.field620_0x26c
    CMP dword ptr [ESP + 0x4b0],0x0     ; 00519b7c
        ;   Label: LAB_00519b7c
    JZ 0x00519b92                       ; 00519b84
        ;   XREF to: 00519b92 (CONDITIONAL_JUMP)  ; LAB_00519b92
    PUSH dword ptr [EBP + 0x18]         ; 00519b86
    PUSH EBX                            ; 00519b89
    CALL unkafter_prye.cpp_FUN_00524940 ; 00519b8a
        ;   XREF to: 00524940 (UNCONDITIONAL_CALL)  ; undefined unkafter_prye.cpp_FUN_00524940()
    ADD ESP,0x8                         ; 00519b8f
    CMP dword ptr [EBX + 0x20bcc],0x0   ; 00519b92
        ;   Label: LAB_00519b92
    JZ 0x0051b4f0                       ; 00519b99
        ;   XREF to: 0051b4f0 (CONDITIONAL_JUMP)  ; LAB_0051b4f0
    FLD float ptr [EBP + 0x18]          ; 00519b9f
    FDIV float ptr [0x005e34ec]         ; 00519ba2 | DAT_005e34ec
    FADD float ptr [EBX + 0x20bd0]      ; 00519ba8
    FST float ptr [EBX + 0x20bd0]       ; 00519bae
    FLD1                                ; 00519bb4
    FCOMPP                              ; 00519bb6
    FNSTSW AX                           ; 00519bb8
    SAHF                                ; 00519bba
    JNC 0x00519bc7                      ; 00519bbb
        ;   XREF to: 00519bc7 (CONDITIONAL_JUMP)  ; LAB_00519bc7
    MOV dword ptr [EBX + 0x20bd0],0x3f800000 ; 00519bbd
    FLD float ptr [EBP + 0x18]          ; 00519bc7
        ;   Label: LAB_00519bc7
    FDIV float ptr [0x005e34f4]         ; 00519bca | DAT_005e34f4
    FSUBR float ptr [EBX + 0x20bf0]     ; 00519bd0
    FST float ptr [EBX + 0x20bf0]       ; 00519bd6
    FLDZ                                ; 00519bdc
    FCOMPP                              ; 00519bde
    FNSTSW AX                           ; 00519be0
    SAHF                                ; 00519be2
    JC 0x00519bef                       ; 00519be3
        ;   XREF to: 00519bef (CONDITIONAL_JUMP)  ; LAB_00519bef
    MOV dword ptr [EBX + 0x20bf0],0x0   ; 00519be5
    FLD float ptr [EBP + 0x18]          ; 00519bef
        ;   Label: LAB_00519bef
    FDIV float ptr [0x005e34f4]         ; 00519bf2 | DAT_005e34f4
    FSUBR float ptr [EBX + 0x20c10]     ; 00519bf8
    FST float ptr [EBX + 0x20c10]       ; 00519bfe
    FLDZ                                ; 00519c04
    FCOMPP                              ; 00519c06
    FNSTSW AX                           ; 00519c08
    SAHF                                ; 00519c0a
    JC 0x00519c17                       ; 00519c0b
        ;   XREF to: 00519c17 (CONDITIONAL_JUMP)  ; LAB_00519c17
    MOV dword ptr [EBX + 0x20c10],0x0   ; 00519c0d
    CMP dword ptr [ESP + 0x4c4],0x0     ; 00519c17
        ;   Label: LAB_00519c17
    JZ 0x00519c2a                       ; 00519c1f
        ;   XREF to: 00519c2a (CONDITIONAL_JUMP)  ; LAB_00519c2a
    PUSH EBX                            ; 00519c21
    CALL unkafter_prye.cpp_FUN_00525930 ; 00519c22
        ;   XREF to: 00525930 (UNCONDITIONAL_CALL)  ; undefined unkafter_prye.cpp_FUN_00525930()
    ADD ESP,0x4                         ; 00519c27
    PUSH EBX                            ; 00519c2a
        ;   Label: LAB_00519c2a
    CALL core_prye.cpp_FUN_0051c1c0     ; 00519c2b
        ;   XREF to: 0051c1c0 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_0051c1c0()
    ADD ESP,0x4                         ; 00519c30
    MOV ECX,dword ptr [0x007e1a50]      ; 00519c33 | DAT_007e1a50
    PUSH ECX                            ; 00519c39
    MOV ESI,dword ptr [EBX + 0x25b0]    ; 00519c3a
    PUSH ESI                            ; 00519c40
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00519c41
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00519c46
    TEST EAX,EAX                        ; 00519c49
    JZ 0x00519c82                       ; 00519c4b
        ;   XREF to: 00519c82 (CONDITIONAL_JUMP)  ; LAB_00519c82
    CMP dword ptr [EBX + 0x20c24],0x0   ; 00519c4d
    JZ 0x00519c82                       ; 00519c54
        ;   XREF to: 00519c82 (CONDITIONAL_JUMP)  ; LAB_00519c82
    LEA EAX,[EBX + 0x158]               ; 00519c56
    PUSH EAX                            ; 00519c5c
    CALL core_skeleton.cpp_FUN_0054dd10 ; 00519c5d
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00519c62
    PUSH 0x0                            ; 00519c65
    PUSH EBX                            ; 00519c67
    CALL core_prye.cpp_FUN_0051f360     ; 00519c68
        ;   XREF to: 0051f360 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_0051f360()
    ADD ESP,0x8                         ; 00519c6d
    PUSH EBX                            ; 00519c70
    CALL core_prye.cpp_FUN_00523800     ; 00519c71
        ;   XREF to: 00523800 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_00523800()
    ADD ESP,0x4                         ; 00519c76
    PUSH EBX                            ; 00519c79
    CALL core_prye.cpp_FUN_0051c1c0     ; 00519c7a
        ;   XREF to: 0051c1c0 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_0051c1c0()
    ADD ESP,0x4                         ; 00519c7f
    MOV EAX,dword ptr [ESP + 0x4c0]     ; 00519c82
        ;   Label: LAB_00519c82
    PUSH EAX                            ; 00519c89
    PUSH dword ptr [EBP + 0x18]         ; 00519c8a
    PUSH EBX                            ; 00519c8d
    CALL unkafter_prye.cpp_FUN_00524170 ; 00519c8e
        ;   XREF to: 00524170 (UNCONDITIONAL_CALL)  ; undefined unkafter_prye.cpp_FUN_00524170()
    ADD ESP,0xc                         ; 00519c93
    PUSH EBX                            ; 00519c96
    CALL unkafter_prye.cpp_FUN_00526cf0 ; 00519c97
        ;   XREF to: 00526cf0 (UNCONDITIONAL_CALL)  ; undefined unkafter_prye.cpp_FUN_00526cf0()
    ADD ESP,0x4                         ; 00519c9c
    PUSH dword ptr [EBP + 0x18]         ; 00519c9f
    PUSH EBX                            ; 00519ca2
    CALL core_charactr.cpp_FUN_00433350 ; 00519ca3
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00519ca8
    PUSH 0x11                           ; 00519cab
    LEA ESI,[EBX + 0x158]               ; 00519cad
    PUSH ESI                            ; 00519cb3
    CALL core_motion.cpp_FUN_004fc350   ; 00519cb4
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x4e0],EAX     ; 00519cb9
    FLD float ptr [ESP + 0x4e0]         ; 00519cc0
    FLDZ                                ; 00519cc7
    ADD ESP,0x8                         ; 00519cc9
    FCOMPP                              ; 00519ccc
    FNSTSW AX                           ; 00519cce
    SAHF                                ; 00519cd0
    JNC 0x0051b521                      ; 00519cd1
        ;   XREF to: 0051b521 (CONDITIONAL_JUMP)  ; LAB_0051b521
    PUSH ESI                            ; 00519cd7
    CALL core_motion.cpp_FUN_004fc930   ; 00519cd8
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x4dc],EAX     ; 00519cdd
    FLD float ptr [ESP + 0x4dc]         ; 00519ce4
    FLD1                                ; 00519ceb
    ADD ESP,0x4                         ; 00519ced
    FCOMPP                              ; 00519cf0
    FNSTSW AX                           ; 00519cf2
    SAHF                                ; 00519cf4
    JNC 0x00519e26                      ; 00519cf5
        ;   XREF to: 00519e26 (CONDITIONAL_JUMP)  ; LAB_00519e26
    MOV EDX,dword ptr [0x007e17b4]      ; 00519cfb | g_CBoxActorClassInfo.name_hash
    PUSH EDX                            ; 00519d01
    MOV ECX,dword ptr [EBX + 0x20b9c]   ; 00519d02
    PUSH ECX                            ; 00519d08
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00519d09
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV dword ptr [ESP + 0x4d8],EAX     ; 00519d0e
    ADD ESP,0x8                         ; 00519d15
    TEST EAX,EAX                        ; 00519d18
    JZ 0x00519e26                       ; 00519d1a
        ;   XREF to: 00519e26 (CONDITIONAL_JUMP)  ; LAB_00519e26
    PUSH EBX                            ; 00519d20
    LEA ESI,[ESP + 0x1e8]               ; 00519d21
    LEA EDI,[ESP + 0x1ac]               ; 00519d28
    CALL core_prye.cpp_FUN_0051c100     ; 00519d2f
        ;   XREF to: 0051c100 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_0051c100()
    ADD ESP,0x4                         ; 00519d34
    LEA EAX,[ESP + 0x1a8]               ; 00519d37
    LEA ESI,[ESP + 0x1e4]               ; 00519d3e
    PUSH EAX                            ; 00519d45
    MOVSD ES:EDI,ESI                    ; 00519d46
    MOVSD ES:EDI,ESI                    ; 00519d47
    MOVSD ES:EDI,ESI                    ; 00519d48
    PUSH EBX                            ; 00519d49
    LEA ESI,[ESP + 0x324]               ; 00519d4a
    LEA EDI,[ESP + 0x228]               ; 00519d51
    CALL core_actor.cpp_FUN_00408b80    ; 00519d58
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x324]               ; 00519d5d
    ADD ESP,0x8                         ; 00519d64
    LEA EAX,[ESP + 0x1b4]               ; 00519d67
    MOVSD ES:EDI,ESI                    ; 00519d6e
    MOVSD ES:EDI,ESI                    ; 00519d6f
    MOVSD ES:EDI,ESI                    ; 00519d70
    PUSH EAX                            ; 00519d71
    FLD float ptr [ESP + 0x224]         ; 00519d72
    FLD float ptr [ESP + 0x228]         ; 00519d79
    FLD float ptr [ESP + 0x22c]         ; 00519d80
    LEA EDI,[ESP + 0x1b8]               ; 00519d87
    LEA ESI,[ESP + 0x338]               ; 00519d8e
    FXCH ST2                            ; 00519d95
    FSUB float ptr [ESP + 0x11c]        ; 00519d97
    FXCH                                ; 00519d9e
    FSUB float ptr [ESP + 0x120]        ; 00519da0
    FXCH ST2                            ; 00519da7
    FSUB float ptr [ESP + 0x124]        ; 00519da9
    FXCH                                ; 00519db0
    FSTP float ptr [ESP + 0x338]        ; 00519db2
    FXCH                                ; 00519db9
    FSTP float ptr [ESP + 0x33c]        ; 00519dbb
    FSTP float ptr [ESP + 0x340]        ; 00519dc2
    MOVSD ES:EDI,ESI                    ; 00519dc9
    MOVSD ES:EDI,ESI                    ; 00519dca
    MOVSD ES:EDI,ESI                    ; 00519dcb
    PUSH EBX                            ; 00519dcc
    XOR EDI,EDI                         ; 00519dcd
    LEA ESI,[ESP + 0x21c]               ; 00519dcf
    MOV dword ptr [ESP + 0x1c0],EDI     ; 00519dd6
    CALL core_actor.cpp_FUN_00408b40    ; 00519ddd
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA EDI,[ESP + 0x30c]               ; 00519de2
    LEA ESI,[ESP + 0x21c]               ; 00519de9
    ADD ESP,0x8                         ; 00519df0
    MOVSD ES:EDI,ESI                    ; 00519df3
    MOVSD ES:EDI,ESI                    ; 00519df4
    MOVSD ES:EDI,ESI                    ; 00519df5
    FLD float ptr [ESP + 0x30c]         ; 00519df6
    FLDZ                                ; 00519dfd
    FCOMPP                              ; 00519dff
    FNSTSW AX                           ; 00519e01
    SAHF                                ; 00519e03
    JNC 0x00519e26                      ; 00519e04
        ;   XREF to: 00519e26 (CONDITIONAL_JUMP)  ; LAB_00519e26
    LEA EAX,[ESP + 0x1b4]               ; 00519e06
    PUSH EAX                            ; 00519e0d
    LEA EAX,[ESP + 0x11c]               ; 00519e0e
    PUSH EAX                            ; 00519e15
    MOV EAX,dword ptr [ESP + 0x4d8]     ; 00519e16
    PUSH EAX                            ; 00519e1d
    CALL core_boxactor.cpp_FUN_0041ff20 ; 00519e1e
        ;   XREF to: 0041ff20 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_FUN_0041ff20(CBoxActor * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction)
    ADD ESP,0xc                         ; 00519e23
    PUSH 0x0                            ; 00519e26
        ;   Label: LAB_00519e26
    PUSH EBX                            ; 00519e28
    CALL core_prye.cpp_FUN_0051f360     ; 00519e29
        ;   XREF to: 0051f360 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_0051f360()
    ADD ESP,0x8                         ; 00519e2e
    PUSH dword ptr [EBP + 0x18]         ; 00519e31
    PUSH 0x0                            ; 00519e34
    PUSH EBX                            ; 00519e36
    CALL core_prye.cpp_FUN_00522b00     ; 00519e37
        ;   XREF to: 00522b00 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_00522b00()
    ADD ESP,0xc                         ; 00519e3c
    PUSH dword ptr [EBP + 0x18]         ; 00519e3f
    PUSH 0x1                            ; 00519e42
    PUSH EBX                            ; 00519e44
    CALL core_prye.cpp_FUN_00522b00     ; 00519e45
        ;   XREF to: 00522b00 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_00522b00()
    ADD ESP,0xc                         ; 00519e4a
    PUSH dword ptr [EBP + 0x18]         ; 00519e4d
    PUSH EBX                            ; 00519e50
    CALL unkafter_prye.cpp_FUN_005263c0 ; 00519e51
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_prye.cpp_FUN_005263c0()
    ADD ESP,0x8                         ; 00519e56
    LEA EAX,[EBX + 0x206e8]             ; 00519e59
    PUSH EAX                            ; 00519e5f
    CALL core_inv.cpp_FUN_004dcdb0      ; 00519e60
        ;   XREF to: 004dcdb0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dcdb0()
    ADD ESP,0x4                         ; 00519e65
    PUSH dword ptr [EBP + 0x18]         ; 00519e68
    PUSH EBX                            ; 00519e6b
    CALL unkafter_prye.cpp_FUN_00526dc0 ; 00519e6c
        ;   XREF to: 00526dc0 (UNCONDITIONAL_CALL)  ; undefined unkafter_prye.cpp_FUN_00526dc0()
    ADD ESP,0x8                         ; 00519e71
    MOV EDX,dword ptr [0x007e1a50]      ; 00519e74 | DAT_007e1a50
    PUSH EDX                            ; 00519e7a
    MOV ECX,dword ptr [EBX + 0x25b0]    ; 00519e7b
    PUSH ECX                            ; 00519e81
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00519e82
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00519e87
    TEST EAX,EAX                        ; 00519e8a
    JZ 0x00519eae                       ; 00519e8c
        ;   XREF to: 00519eae (CONDITIONAL_JUMP)  ; LAB_00519eae
    MOV dword ptr [EAX + 0x23a0],0x1    ; 00519e8e
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 00519e98
    PUSH dword ptr [EBP + 0x18]         ; 00519e9e
    PUSH EAX                            ; 00519ea1
    MOV EDX,dword ptr [EAX + 0x154]     ; 00519ea2
    CALL dword ptr [EDX + 0xc]          ; 00519ea8
    ADD ESP,0x8                         ; 00519eab
    CMP dword ptr [ESP + 0x4c4],0x0     ; 00519eae
        ;   Label: LAB_00519eae
    JZ 0x0051b52f                       ; 00519eb6
        ;   XREF to: 0051b52f (CONDITIONAL_JUMP)  ; LAB_0051b52f
    FLD float ptr [EBX + 0x20b7c]       ; 00519ebc
    FADD float ptr [EBP + 0x18]         ; 00519ec2
    FST float ptr [EBX + 0x20b7c]       ; 00519ec5
    FCOMP double ptr [0x005cd1df]       ; 00519ecb | DAT_005cd1df
    FNSTSW AX                           ; 00519ed1
    SAHF                                ; 00519ed3
    JBE 0x00519ee1                      ; 00519ed4
        ;   XREF to: 00519ee1 (CONDITIONAL_JUMP)  ; LAB_00519ee1
    PUSH 0x1                            ; 00519ed6
    PUSH EBX                            ; 00519ed8
    CALL core_hero.cpp_FUN_004d4900     ; 00519ed9
        ;   XREF to: 004d4900 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d4900()
    ADD ESP,0x8                         ; 00519ede
    MOV EDI,dword ptr [EBX + 0x20c24]   ; 00519ee1
        ;   Label: LAB_00519ee1
    TEST EDI,EDI                        ; 00519ee7
    JZ 0x00519ef8                       ; 00519ee9
        ;   XREF to: 00519ef8 (CONDITIONAL_JUMP)  ; LAB_00519ef8
    CMP dword ptr [EDI + 0xfc],0x0      ; 00519eeb
    JNZ 0x0051b53d                      ; 00519ef2
        ;   XREF to: 0051b53d (CONDITIONAL_JUMP)  ; LAB_0051b53d
    MOV ESP,EBP                         ; 00519ef8
        ;   Label: LAB_00519ef8
    POP EBP                             ; 00519efa
    POP EDI                             ; 00519efb
    POP ESI                             ; 00519efc
    POP EBX                             ; 00519efd
    RET                                 ; 00519efe
    CMP dword ptr [EBX + 0x20c20],0x0   ; 00519eff
        ;   Label: LAB_00519eff
    JNZ 0x0051902c                      ; 00519f06
        ;   XREF to: 0051902c (CONDITIONAL_JUMP)  ; LAB_0051902c
    JMP 0x0051906e                      ; 00519f0c
        ;   XREF to: 0051906e (UNCONDITIONAL_JUMP)  ; LAB_0051906e
    CMP dword ptr [EBX + 0x20b64],0x4   ; 00519f11
        ;   Label: LAB_00519f11
    JZ 0x0051907b                       ; 00519f18
        ;   XREF to: 0051907b (CONDITIONAL_JUMP)  ; LAB_0051907b
    JMP 0x005190b1                      ; 00519f1e
        ;   XREF to: 005190b1 (UNCONDITIONAL_JUMP)  ; LAB_005190b1
    PUSH 0x35                           ; 00519f23
        ;   Label: LAB_00519f23
    PUSH ESI                            ; 00519f25
    CALL core_motion.cpp_FUN_004fc350   ; 00519f26
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x4e0],EAX     ; 00519f2b
    FLD float ptr [ESP + 0x4e0]         ; 00519f32
    FLDZ                                ; 00519f39
    ADD ESP,0x8                         ; 00519f3b
    FCOMPP                              ; 00519f3e
    FNSTSW AX                           ; 00519f40
    SAHF                                ; 00519f42
    JC 0x005190dd                       ; 00519f43
        ;   XREF to: 005190dd (CONDITIONAL_JUMP)  ; LAB_005190dd
    PUSH 0x36                           ; 00519f49
    PUSH ESI                            ; 00519f4b
    CALL core_motion.cpp_FUN_004fc350   ; 00519f4c
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x4e0],EAX     ; 00519f51
    FLD float ptr [ESP + 0x4e0]         ; 00519f58
    FLDZ                                ; 00519f5f
    ADD ESP,0x8                         ; 00519f61
    FCOMPP                              ; 00519f64
    FNSTSW AX                           ; 00519f66
    SAHF                                ; 00519f68
    JC 0x005190dd                       ; 00519f69
        ;   XREF to: 005190dd (CONDITIONAL_JUMP)  ; LAB_005190dd
    FLD float ptr [EBX + 0x2538]        ; 00519f6f
    FLDZ                                ; 00519f75
    FCOMPP                              ; 00519f77
    FNSTSW AX                           ; 00519f79
    SAHF                                ; 00519f7b
    JNC 0x005190dd                      ; 00519f7c
        ;   XREF to: 005190dd (CONDITIONAL_JUMP)  ; LAB_005190dd
    JMP 0x0051911a                      ; 00519f82
        ;   XREF to: 0051911a (UNCONDITIONAL_JUMP)  ; LAB_0051911a
    CMP dword ptr [EBX + 0x20b64],0x5   ; 00519f87
        ;   Label: LAB_00519f87
    JZ 0x00519146                       ; 00519f8e
        ;   XREF to: 00519146 (CONDITIONAL_JUMP)  ; LAB_00519146
    CMP dword ptr [EBX + 0x20b94],0x0   ; 00519f94
    JNZ 0x00519146                      ; 00519f9b
        ;   XREF to: 00519146 (CONDITIONAL_JUMP)  ; LAB_00519146
    JMP 0x0051917b                      ; 00519fa1
        ;   XREF to: 0051917b (UNCONDITIONAL_JUMP)  ; LAB_0051917b
    CMP dword ptr [EBX + 0x20b64],0x5   ; 00519fa6
        ;   Label: LAB_00519fa6
    JZ 0x005191a7                       ; 00519fad
        ;   XREF to: 005191a7 (CONDITIONAL_JUMP)  ; LAB_005191a7
    CMP dword ptr [EBX + 0x20b94],0x0   ; 00519fb3
    JNZ 0x005191a7                      ; 00519fba
        ;   XREF to: 005191a7 (CONDITIONAL_JUMP)  ; LAB_005191a7
    JMP 0x005191dd                      ; 00519fc0
        ;   XREF to: 005191dd (UNCONDITIONAL_JUMP)  ; LAB_005191dd
    CMP EDI,0x9                         ; 00519fc5
        ;   Label: LAB_00519fc5
    JZ 0x0051941e                       ; 00519fc8
        ;   XREF to: 0051941e (CONDITIONAL_JUMP)  ; LAB_0051941e
    JMP 0x0051944d                      ; 00519fce
        ;   XREF to: 0051944d (UNCONDITIONAL_JUMP)  ; LAB_0051944d
    PUSH 0x2c                           ; 00519fd3
        ;   Label: LAB_00519fd3
    LEA EAX,[EBX + 0x158]               ; 00519fd5
    PUSH EAX                            ; 00519fdb
    CALL core_motion.cpp_FUN_004fc350   ; 00519fdc
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x4e0],EAX     ; 00519fe1
    FLD float ptr [ESP + 0x4e0]         ; 00519fe8
    FLDZ                                ; 00519fef
    ADD ESP,0x8                         ; 00519ff1
    FCOMPP                              ; 00519ff4
    FNSTSW AX                           ; 00519ff6
    SAHF                                ; 00519ff8
    JC 0x0051953a                       ; 00519ff9
        ;   XREF to: 0051953a (CONDITIONAL_JUMP)  ; LAB_0051953a
    JMP 0x0051957e                      ; 00519fff
        ;   XREF to: 0051957e (UNCONDITIONAL_JUMP)  ; LAB_0051957e
    FLD float ptr [EBP + 0x18]          ; 0051a004
        ;   Label: LAB_0051a004
    FMUL double ptr [0x005cd14f]        ; 0051a007 | DAT_005cd14f
    FADD float ptr [EBX + 0x20c34]      ; 0051a00d
    FST float ptr [EBX + 0x20c34]       ; 0051a013
    FLD1                                ; 0051a019
    FCOMPP                              ; 0051a01b
    FNSTSW AX                           ; 0051a01d
    SAHF                                ; 0051a01f
    JNC 0x00519602                      ; 0051a020
        ;   XREF to: 00519602 (CONDITIONAL_JUMP)  ; LAB_00519602
    MOV dword ptr [EBX + 0x20c34],0x3f800000 ; 0051a026
    JMP 0x00519602                      ; 0051a030
        ;   XREF to: 00519602 (UNCONDITIONAL_JUMP)  ; LAB_00519602
    MOV EAX,dword ptr [EBX + 0x20ba4]   ; 0051a035
        ;   Label: LAB_0051a035
    ADD EAX,0x2d4                       ; 0051a03b
    PUSH EAX                            ; 0051a040
    MOV ECX,dword ptr [EBX + 0x20ba4]   ; 0051a041
    PUSH ECX                            ; 0051a047
    LEA ESI,[ESP + 0x204]               ; 0051a048
    LEA EDI,[ESP + 0x3d8]               ; 0051a04f
    CALL core_actor.cpp_FUN_00408b80    ; 0051a056
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x204]               ; 0051a05b
    ADD ESP,0x8                         ; 0051a062
    MOVSD ES:EDI,ESI                    ; 0051a065
    MOVSD ES:EDI,ESI                    ; 0051a066
    MOVSD ES:EDI,ESI                    ; 0051a067
    FLD float ptr [ESP + 0x3d4]         ; 0051a068
    FADD double ptr [0x005cd19f]        ; 0051a06f | DAT_005cd19f
    FLD float ptr [EBX + 0x24]          ; 0051a075
    FCOMPP                              ; 0051a078
    FNSTSW AX                           ; 0051a07a
    SAHF                                ; 0051a07c
    JBE 0x00519652                      ; 0051a07d
        ;   XREF to: 00519652 (CONDITIONAL_JUMP)  ; LAB_00519652
    PUSH 0x1                            ; 0051a083
    PUSH 0x0                            ; 0051a085
    LEA EAX,[EBX + 0x158]               ; 0051a087
    PUSH EAX                            ; 0051a08d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0051a08e
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051a093
    JMP 0x00519652                      ; 0051a096
        ;   XREF to: 00519652 (UNCONDITIONAL_JUMP)  ; LAB_00519652
    MOV ESI,0x3f800000                  ; 0051a09b
        ;   Label: LAB_0051a09b
    MOV dword ptr [EBX + 0x20cdc],0x0   ; 0051a0a0
    MOV dword ptr [ESP + 0x4c],ESI      ; 0051a0aa
    JMP 0x00519694                      ; 0051a0ae
        ;   XREF to: 00519694 (UNCONDITIONAL_JUMP)  ; LAB_00519694
    CMP dword ptr [EBX + 0x20c20],0x0   ; 0051a0b3
        ;   Label: LAB_0051a0b3
    JNZ 0x0051a34b                      ; 0051a0ba
        ;   XREF to: 0051a34b (CONDITIONAL_JUMP)  ; LAB_0051a34b
    MOV EDX,dword ptr [EBX + 0x20ba8]   ; 0051a0c0
    TEST EDX,EDX                        ; 0051a0c6
    JNZ 0x0051a511                      ; 0051a0c8
        ;   XREF to: 0051a511 (CONDITIONAL_JUMP)  ; LAB_0051a511
    CMP dword ptr [EBX + 0x26fc],0x0    ; 0051a0ce
    JZ 0x0051a90a                       ; 0051a0d5
        ;   XREF to: 0051a90a (CONDITIONAL_JUMP)  ; LAB_0051a90a
    CMP dword ptr [EBX + 0x2700],0x0    ; 0051a0db
    JNZ 0x0051a21b                      ; 0051a0e2
        ;   XREF to: 0051a21b (CONDITIONAL_JUMP)  ; LAB_0051a21b
    MOV EAX,dword ptr [EBX + 0x26fc]    ; 0051a0e8
    ADD EAX,0x20                        ; 0051a0ee
    PUSH EAX                            ; 0051a0f1
    PUSH EBX                            ; 0051a0f2
    LEA ESI,[ESP + 0x3b4]               ; 0051a0f3
    LEA EDI,[ESP + 0x174]               ; 0051a0fa
    CALL core_actor.cpp_FUN_00408bf0    ; 0051a101
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x3b4]               ; 0051a106
    ADD ESP,0x8                         ; 0051a10d
    LEA EAX,[ESP + 0x16c]               ; 0051a110
    MOVSD ES:EDI,ESI                    ; 0051a117
    MOVSD ES:EDI,ESI                    ; 0051a118
    MOVSD ES:EDI,ESI                    ; 0051a119
    PUSH EAX                            ; 0051a11a
    LEA ESI,[ESP + 0x3c8]               ; 0051a11b
    LEA EDI,[ESP + 0x188]               ; 0051a122
    CALL core_vecdir.cpp_FUN_00576250   ; 0051a129
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[ESP + 0x3c8]               ; 0051a12e
    ADD ESP,0x4                         ; 0051a135
    MOVSD ES:EDI,ESI                    ; 0051a138
    MOVSD ES:EDI,ESI                    ; 0051a139
    MOVSD ES:EDI,ESI                    ; 0051a13a
    PUSH dword ptr [ESP + 0x188]        ; 0051a13b
    CALL core_actor.cpp_FUN_0040cfa0    ; 0051a142
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x4dc],EAX     ; 0051a147
    FLD float ptr [ESP + 0x4dc]         ; 0051a14e
    ADD ESP,0x4                         ; 0051a155
    FST float ptr [ESP + 0x4b8]         ; 0051a158
    FCOMP float ptr [0x005cd183]        ; 0051a15f | DAT_005cd183
    FNSTSW AX                           ; 0051a165
    SAHF                                ; 0051a167
    JNC 0x0051a17e                      ; 0051a168
        ;   XREF to: 0051a17e (CONDITIONAL_JUMP)  ; LAB_0051a17e
    FLD float ptr [ESP + 0x4b8]         ; 0051a16a
    FADD float ptr [0x005cd17f]         ; 0051a171 | DAT_005cd17f
    FSTP float ptr [ESP + 0x4b8]        ; 0051a177
    FLD float ptr [ESP + 0x4b8]         ; 0051a17e
        ;   Label: LAB_0051a17e
    FCOMP float ptr [0x005cd187]        ; 0051a185 | DAT_005cd187
    FNSTSW AX                           ; 0051a18b
    SAHF                                ; 0051a18d
    JBE 0x0051a1a4                      ; 0051a18e
        ;   XREF to: 0051a1a4 (CONDITIONAL_JUMP)  ; LAB_0051a1a4
    FLD float ptr [ESP + 0x4b8]         ; 0051a190
    FADD float ptr [0x005cd18b]         ; 0051a197 | DAT_005cd18b
    FSTP float ptr [ESP + 0x4b8]        ; 0051a19d
    FLD float ptr [EBP + 0x18]          ; 0051a1a4
        ;   Label: LAB_0051a1a4
    FMUL float ptr [0x005cd17f]         ; 0051a1a7 | DAT_005cd17f
    FLD float ptr [ESP + 0x4b8]         ; 0051a1ad
    FXCH                                ; 0051a1b4
    FST float ptr [ESP + 0x494]         ; 0051a1b6
    FCHS                                ; 0051a1bd
    FSTP float ptr [ESP + 0x488]        ; 0051a1bf
    FCOMP float ptr [ESP + 0x488]       ; 0051a1c6
    FNSTSW AX                           ; 0051a1cd
    SAHF                                ; 0051a1cf
    JNC 0x0051a1e0                      ; 0051a1d0
        ;   XREF to: 0051a1e0 (CONDITIONAL_JUMP)  ; LAB_0051a1e0
    MOV EAX,dword ptr [ESP + 0x488]     ; 0051a1d2
    MOV dword ptr [ESP + 0x4b8],EAX     ; 0051a1d9
    FLD float ptr [ESP + 0x4b8]         ; 0051a1e0
        ;   Label: LAB_0051a1e0
    FCOMP float ptr [ESP + 0x494]       ; 0051a1e7
    FNSTSW AX                           ; 0051a1ee
    SAHF                                ; 0051a1f0
    JBE 0x0051a201                      ; 0051a1f1
        ;   XREF to: 0051a201 (CONDITIONAL_JUMP)  ; LAB_0051a201
    MOV EAX,dword ptr [ESP + 0x494]     ; 0051a1f3
    MOV dword ptr [ESP + 0x4b8],EAX     ; 0051a1fa
    LEA EAX,[EBX + 0x30]                ; 0051a201
        ;   Label: LAB_0051a201
    FLD float ptr [EBX + 0x34]          ; 0051a204
    PUSH EAX                            ; 0051a207
    FADD float ptr [ESP + 0x4bc]        ; 0051a208
    PUSH EBX                            ; 0051a20f
    FSTP float ptr [EBX + 0x34]         ; 0051a210
    CALL core_charactr.cpp_FUN_00433220 ; 0051a213
        ;   XREF to: 00433220 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433220()
    ADD ESP,0x8                         ; 0051a218
    MOV EAX,dword ptr [EBX + 0x26fc]    ; 0051a21b
        ;   Label: LAB_0051a21b
    MOV dword ptr [ESP + 0x474],EAX     ; 0051a221
    MOV EAX,dword ptr [EAX + 0x154]     ; 0051a228
    PUSH 0x0                            ; 0051a22e
    MOV dword ptr [ESP + 0x4cc],EAX     ; 0051a230
    LEA EAX,[EBX + 0x158]               ; 0051a237
    LEA ESI,[ESP + 0x314]               ; 0051a23d
    PUSH EAX                            ; 0051a244
    LEA EDI,[ESP + 0x3a8]               ; 0051a245
    MOV dword ptr [ESP + 0x4dc],EAX     ; 0051a24c
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0051a253
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    ADD ESP,0x8                         ; 0051a258
    LEA EAX,[ESP + 0x3a0]               ; 0051a25b
    LEA ESI,[ESP + 0x310]               ; 0051a262
    PUSH EAX                            ; 0051a269
    MOVSD ES:EDI,ESI                    ; 0051a26a
    MOVSD ES:EDI,ESI                    ; 0051a26b
    MOVSD ES:EDI,ESI                    ; 0051a26c
    PUSH EBX                            ; 0051a26d
    MOV EDI,dword ptr [ESP + 0x47c]     ; 0051a26e
    MOV EAX,dword ptr [ESP + 0x4d0]     ; 0051a275
    PUSH EDI                            ; 0051a27c
    CALL dword ptr [EAX + 0x110]        ; 0051a27d
    ADD ESP,0xc                         ; 0051a283
    TEST EAX,EAX                        ; 0051a286
    JZ 0x0051a8d7                       ; 0051a288
        ;   XREF to: 0051a8d7 (CONDITIONAL_JUMP)  ; LAB_0051a8d7
    CMP dword ptr [EBX + 0x26fc],0x0    ; 0051a28e
    JZ 0x0051a8dd                       ; 0051a295
        ;   XREF to: 0051a8dd (CONDITIONAL_JUMP)  ; LAB_0051a8dd
    FLD float ptr [EBX + 0x20cc8]       ; 0051a29b
    FADD float ptr [EBP + 0x18]         ; 0051a2a1
    FST float ptr [EBX + 0x20cc8]       ; 0051a2a4
    FCOMP float ptr [0x005e3520]        ; 0051a2aa | DAT_005e3520
    FNSTSW AX                           ; 0051a2b0
    SAHF                                ; 0051a2b2
    JC 0x0051976f                       ; 0051a2b3
        ;   XREF to: 0051976f (CONDITIONAL_JUMP)  ; LAB_0051976f
    CMP dword ptr [EBX + 0x2700],0x1    ; 0051a2b9
    JZ 0x0051976f                       ; 0051a2c0
        ;   XREF to: 0051976f (CONDITIONAL_JUMP)  ; LAB_0051976f
    PUSH 0x2f                           ; 0051a2c6
    MOV ECX,dword ptr [ESP + 0x4d8]     ; 0051a2c8
    PUSH ECX                            ; 0051a2cf
    CALL core_motion.cpp_FUN_004fc350   ; 0051a2d0
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x4d0],EAX     ; 0051a2d5
    ADD ESP,0x8                         ; 0051a2dc
    PUSH 0x30                           ; 0051a2df
    MOV ESI,dword ptr [ESP + 0x4d8]     ; 0051a2e1
    PUSH ESI                            ; 0051a2e8
    CALL core_motion.cpp_FUN_004fc350   ; 0051a2e9
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x4e0],EAX     ; 0051a2ee
    FLD float ptr [ESP + 0x4e0]         ; 0051a2f5
    ADD ESP,0x8                         ; 0051a2fc
    FADD float ptr [ESP + 0x4c8]        ; 0051a2ff
    FLDZ                                ; 0051a306
    FCOMPP                              ; 0051a308
    FNSTSW AX                           ; 0051a30a
    SAHF                                ; 0051a30c
    JNC 0x0051a8f5                      ; 0051a30d
        ;   XREF to: 0051a8f5 (CONDITIONAL_JUMP)  ; LAB_0051a8f5
    CMP dword ptr [EBX + 0xcde0],0x0    ; 0051a313
    JNZ 0x0051a329                      ; 0051a31a
        ;   XREF to: 0051a329 (CONDITIONAL_JUMP)  ; LAB_0051a329
    CMP dword ptr [0x01c5fae4],0x0      ; 0051a31c | DAT_01c5fae4
    JZ 0x0051976f                       ; 0051a323
        ;   XREF to: 0051976f (CONDITIONAL_JUMP)  ; LAB_0051976f
    PUSH 0x1                            ; 0051a329
        ;   Label: LAB_0051a329
    PUSH 0x30                           ; 0051a32b
    LEA EAX,[EBX + 0x158]               ; 0051a32d
    PUSH EAX                            ; 0051a333
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0051a334
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051a339
    MOV dword ptr [EBX + 0xcde0],0x0    ; 0051a33c
    JMP 0x0051976f                      ; 0051a346
        ;   XREF to: 0051976f (UNCONDITIONAL_JUMP)  ; LAB_0051976f
    PUSH 0x38                           ; 0051a34b
        ;   Label: LAB_0051a34b
    LEA EAX,[EBX + 0x158]               ; 0051a34d
    PUSH EAX                            ; 0051a353
    CALL core_motion.cpp_FUN_004fc350   ; 0051a354
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x4e0],EAX     ; 0051a359
    FLD float ptr [ESP + 0x4e0]         ; 0051a360
    FLDZ                                ; 0051a367
    ADD ESP,0x8                         ; 0051a369
    FCOMPP                              ; 0051a36c
    FNSTSW AX                           ; 0051a36e
    SAHF                                ; 0051a370
    JC 0x0051a4c8                       ; 0051a371
        ;   XREF to: 0051a4c8 (CONDITIONAL_JUMP)  ; LAB_0051a4c8
    MOV dword ptr [EBX + 0x20c20],EDI   ; 0051a377
    FLD float ptr [EBX + 0x20cdc]       ; 0051a37d
        ;   Label: LAB_0051a37d
    FLDZ                                ; 0051a383
    FCOMPP                              ; 0051a385
    FNSTSW AX                           ; 0051a387
    SAHF                                ; 0051a389
    JNC 0x0051a49a                      ; 0051a38a
        ;   XREF to: 0051a49a (CONDITIONAL_JUMP)  ; LAB_0051a49a
    FLD float ptr [EBP + 0x18]          ; 0051a390
    FCOMP float ptr [EBX + 0x20cdc]     ; 0051a393
    FNSTSW AX                           ; 0051a399
    SAHF                                ; 0051a39b
    JNC 0x0051a4f9                      ; 0051a39c
        ;   XREF to: 0051a4f9 (CONDITIONAL_JUMP)  ; LAB_0051a4f9
    FLD float ptr [EBP + 0x18]          ; 0051a3a2
    FLD ST0                             ; 0051a3a5
    FDIV float ptr [EBX + 0x20cdc]      ; 0051a3a7
    FLD float ptr [EBX + 0x20cdc]       ; 0051a3ad
    FSUBRP ST2,ST0                      ; 0051a3b3
    FSTP float ptr [ESP + 0x54]         ; 0051a3b5
    FSTP float ptr [EBX + 0x20cdc]      ; 0051a3b9
    LEA EAX,[EBX + 0x20ccc]             ; 0051a3bf
        ;   Label: LAB_0051a3bf
    FLD float ptr [EAX]                 ; 0051a3c5
    FMUL float ptr [ESP + 0x54]         ; 0051a3c7
    FLD float ptr [EAX + 0x4]           ; 0051a3cb
    FMUL float ptr [ESP + 0x54]         ; 0051a3ce
    FLD float ptr [EAX + 0x8]           ; 0051a3d2
    FMUL float ptr [ESP + 0x54]         ; 0051a3d5
    FLD float ptr [ESP + 0x54]          ; 0051a3d9
    LEA EDI,[ESP + 0x1d8]               ; 0051a3dd
    LEA ESI,[ESP + 0x208]               ; 0051a3e4
    FLD1                                ; 0051a3eb
    LEA EDX,[EBX + 0x20]                ; 0051a3ed
    FSUBRP                              ; 0051a3f0
    FXCH ST3                            ; 0051a3f2
    FSTP float ptr [ESP + 0x208]        ; 0051a3f4
    FXCH                                ; 0051a3fb
    FSTP float ptr [ESP + 0x20c]        ; 0051a3fd
    FSTP float ptr [ESP + 0x210]        ; 0051a404
    MOVSD ES:EDI,ESI                    ; 0051a40b
    MOVSD ES:EDI,ESI                    ; 0051a40c
    MOVSD ES:EDI,ESI                    ; 0051a40d
    FSTP float ptr [ESP + 0x49c]        ; 0051a40e
    FLD float ptr [EDX]                 ; 0051a415
    FLD float ptr [EDX + 0x4]           ; 0051a417
    FLD float ptr [EDX + 0x8]           ; 0051a41a
    FXCH ST2                            ; 0051a41d
    FADD float ptr [ESP + 0x1d8]        ; 0051a41f
    FXCH                                ; 0051a426
    FADD float ptr [ESP + 0x1dc]        ; 0051a428
    FXCH ST2                            ; 0051a42f
    FADD float ptr [ESP + 0x1e0]        ; 0051a431
    FXCH                                ; 0051a438
    FSTP float ptr [EDX]                ; 0051a43a
    FXCH                                ; 0051a43c
    FSTP float ptr [EDX + 0x4]          ; 0051a43e
    FSTP float ptr [EDX + 0x8]          ; 0051a441
    FLD float ptr [EAX]                 ; 0051a444
    FMUL float ptr [ESP + 0x49c]        ; 0051a446
    FLD float ptr [EAX + 0x4]           ; 0051a44d
    FMUL float ptr [ESP + 0x49c]        ; 0051a450
    FLD float ptr [EAX + 0x8]           ; 0051a457
    FMUL float ptr [ESP + 0x49c]        ; 0051a45a
    FXCH ST2                            ; 0051a461
    FSTP float ptr [EAX]                ; 0051a463
    FSTP float ptr [EAX + 0x4]          ; 0051a465
    FSTP float ptr [EAX + 0x8]          ; 0051a468
    FLD float ptr [EBX + 0x20cd8]       ; 0051a46b
    FSUB float ptr [EBX + 0x34]         ; 0051a471
    SUB ESP,0x4                         ; 0051a474
    FSTP float ptr [ESP]                ; 0051a477
    CALL core_actor.cpp_FUN_0040cfa0    ; 0051a47a
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x4dc],EAX     ; 0051a47f
    FLD float ptr [ESP + 0x4dc]         ; 0051a486
    ADD ESP,0x4                         ; 0051a48d
    FMUL float ptr [ESP + 0x54]         ; 0051a490
    FSTP float ptr [EBX + 0x2508]       ; 0051a494
    PUSH 0x0                            ; 0051a49a
        ;   Label: LAB_0051a49a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051a49c
    PUSH dword ptr [EBX + 0x326c]       ; 0051a4a2
    PUSH EBX                            ; 0051a4a8
    CALL dword ptr [EAX + 0x40]         ; 0051a4a9
    MOV dword ptr [ESP + 0x4e4],EAX     ; 0051a4ac
    MOV EAX,dword ptr [ESP + 0x4e4]     ; 0051a4b3
    MOV dword ptr [EBX + 0x2504],EAX    ; 0051a4ba
    ADD ESP,0xc                         ; 0051a4c0
    JMP 0x0051976f                      ; 0051a4c3
        ;   XREF to: 0051976f (UNCONDITIONAL_JUMP)  ; LAB_0051976f
    MOV EAX,dword ptr [EBX + 0x20c20]   ; 0051a4c8
        ;   Label: LAB_0051a4c8
    FLD float ptr [EAX + 0x24]          ; 0051a4ce
    FLD1                                ; 0051a4d1
    FADDP                               ; 0051a4d3
    FLD float ptr [EBX + 0x24]          ; 0051a4d5
    FCOMPP                              ; 0051a4d8
    FNSTSW AX                           ; 0051a4da
    SAHF                                ; 0051a4dc
    JNC 0x0051a37d                      ; 0051a4dd
        ;   XREF to: 0051a37d (CONDITIONAL_JUMP)  ; LAB_0051a37d
    PUSH ESI                            ; 0051a4e3
    PUSH EDI                            ; 0051a4e4
    LEA EAX,[EBX + 0x158]               ; 0051a4e5
    PUSH EAX                            ; 0051a4eb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0051a4ec
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051a4f1
    JMP 0x0051a37d                      ; 0051a4f4
        ;   XREF to: 0051a37d (UNCONDITIONAL_JUMP)  ; LAB_0051a37d
    MOV EDX,0x3f800000                  ; 0051a4f9
        ;   Label: LAB_0051a4f9
    MOV dword ptr [EBX + 0x20cdc],0x0   ; 0051a4fe
    MOV dword ptr [ESP + 0x54],EDX      ; 0051a508
    JMP 0x0051a3bf                      ; 0051a50c
        ;   XREF to: 0051a3bf (UNCONDITIONAL_JUMP)  ; LAB_0051a3bf
    MOV EAX,EDX                         ; 0051a511
        ;   Label: LAB_0051a511
    MOV ECX,dword ptr [EDX + 0x154]     ; 0051a513
    LEA EDX,[ESP + 0x98]                ; 0051a519
    PUSH EDX                            ; 0051a520
    PUSH EAX                            ; 0051a521
    CALL dword ptr [ECX + 0x98]         ; 0051a522
    ADD ESP,0x8                         ; 0051a528
    CMP dword ptr [ESP + 0x98],0x0      ; 0051a52b
    JZ 0x0051a88e                       ; 0051a533
        ;   XREF to: 0051a88e (CONDITIONAL_JUMP)  ; LAB_0051a88e
    MOV ECX,dword ptr [ESP + 0x9c]      ; 0051a539
    CMP EBX,ECX                         ; 0051a540
    JNZ 0x0051a88e                      ; 0051a542
        ;   XREF to: 0051a88e (CONDITIONAL_JUMP)  ; LAB_0051a88e
    MOV ESI,dword ptr [ECX + 0x20ba8]   ; 0051a548
    LEA EDI,[ESP + 0x22c]               ; 0051a54e
    LEA ESI,[ESI + 0x30]                ; 0051a555
    MOVSD ES:EDI,ESI                    ; 0051a558
    MOVSD ES:EDI,ESI                    ; 0051a559
    MOVSD ES:EDI,ESI                    ; 0051a55a
    FLD float ptr [ECX + 0xce00]        ; 0051a55b
    FMUL float ptr [0x005cd17f]         ; 0051a561 | DAT_005cd17f
    FMUL double ptr [0x005cd18f]        ; 0051a567 | DAT_005cd18f
    FMUL float ptr [EBP + 0x18]         ; 0051a56d
    FST float ptr [ESP + 0x4a4]         ; 0051a570
    FCOMP float ptr [ESP + 0xac]        ; 0051a577
    FNSTSW AX                           ; 0051a57e
    SAHF                                ; 0051a580
    JNC 0x0051a591                      ; 0051a581
        ;   XREF to: 0051a591 (CONDITIONAL_JUMP)  ; LAB_0051a591
    MOV EAX,dword ptr [ESP + 0xac]      ; 0051a583
    MOV dword ptr [ESP + 0x4a4],EAX     ; 0051a58a
    FLD float ptr [ESP + 0x4a4]         ; 0051a591
        ;   Label: LAB_0051a591
    FCOMP float ptr [ESP + 0xa8]        ; 0051a598
    FNSTSW AX                           ; 0051a59f
    SAHF                                ; 0051a5a1
    JBE 0x0051a5b2                      ; 0051a5a2
        ;   XREF to: 0051a5b2 (CONDITIONAL_JUMP)  ; LAB_0051a5b2
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0051a5a4
    MOV dword ptr [ESP + 0x4a4],EAX     ; 0051a5ab
    FLD float ptr [ESP + 0x230]         ; 0051a5b2
        ;   Label: LAB_0051a5b2
    FADD float ptr [ESP + 0x4a4]        ; 0051a5b9
    SUB ESP,0x4                         ; 0051a5c0
    FSTP float ptr [ESP]                ; 0051a5c3
    CALL core_actor.cpp_FUN_0040cfa0    ; 0051a5c6
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x4dc],EAX     ; 0051a5cb
    FLD float ptr [ESP + 0x4dc]         ; 0051a5d2
    ADD ESP,0x4                         ; 0051a5d9
    FSTP float ptr [ESP + 0x230]        ; 0051a5dc
    FLD float ptr [EBX + 0xce04]        ; 0051a5e3
    FMUL float ptr [0x005cd17f]         ; 0051a5e9 | DAT_005cd17f
    FMUL double ptr [0x005cd18f]        ; 0051a5ef | DAT_005cd18f
    FMUL float ptr [EBP + 0x18]         ; 0051a5f5
    FST float ptr [ESP + 0x4a8]         ; 0051a5f8
    FCOMP float ptr [ESP + 0xb4]        ; 0051a5ff
    FNSTSW AX                           ; 0051a606
    SAHF                                ; 0051a608
    JNC 0x0051a619                      ; 0051a609
        ;   XREF to: 0051a619 (CONDITIONAL_JUMP)  ; LAB_0051a619
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0051a60b
    MOV dword ptr [ESP + 0x4a8],EAX     ; 0051a612
    FLD float ptr [ESP + 0x4a8]         ; 0051a619
        ;   Label: LAB_0051a619
    FCOMP float ptr [ESP + 0xb0]        ; 0051a620
    FNSTSW AX                           ; 0051a627
    SAHF                                ; 0051a629
    JBE 0x0051a63a                      ; 0051a62a
        ;   XREF to: 0051a63a (CONDITIONAL_JUMP)  ; LAB_0051a63a
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0051a62c
    MOV dword ptr [ESP + 0x4a8],EAX     ; 0051a633
    FLD float ptr [ESP + 0x22c]         ; 0051a63a
        ;   Label: LAB_0051a63a
    FADD float ptr [ESP + 0x4a8]        ; 0051a641
    SUB ESP,0x4                         ; 0051a648
    FSTP float ptr [ESP]                ; 0051a64b
    CALL core_actor.cpp_FUN_0040cfa0    ; 0051a64e
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x4dc],EAX     ; 0051a653
    FLD float ptr [ESP + 0x4dc]         ; 0051a65a
    ADD ESP,0x4                         ; 0051a661
    LEA EDX,[EBX + 0xcdd4]              ; 0051a664
    FSTP float ptr [ESP + 0x22c]        ; 0051a66a
    PUSH EDX                            ; 0051a671
    LEA EDX,[ESP + 0x230]               ; 0051a672
    MOV EAX,dword ptr [EBX + 0x20ba8]   ; 0051a679
    PUSH EDX                            ; 0051a67f
    MOV ECX,dword ptr [EAX + 0x154]     ; 0051a680
    PUSH EAX                            ; 0051a686
    LEA ESI,[EBX + 0x158]               ; 0051a687
    CALL dword ptr [ECX + 0xa0]         ; 0051a68d
    ADD ESP,0xc                         ; 0051a693
    TEST EAX,EAX                        ; 0051a696
    JZ 0x0051a8bd                       ; 0051a698
        ;   XREF to: 0051a8bd (CONDITIONAL_JUMP)  ; LAB_0051a8bd
    MOV EAX,dword ptr [EBX + 0x20ba8]   ; 0051a69e
    FLD float ptr [EAX + 0x34]          ; 0051a6a4
    FSUB float ptr [EBX + 0x34]         ; 0051a6a7
    SUB ESP,0x4                         ; 0051a6aa
    FSTP float ptr [ESP]                ; 0051a6ad
    CALL core_actor.cpp_FUN_0040cfa0    ; 0051a6b0
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x4dc],EAX     ; 0051a6b5
    FLD float ptr [ESP + 0x4dc]         ; 0051a6bc
    ADD ESP,0x4                         ; 0051a6c3
    FST float ptr [ESP + 0x50]          ; 0051a6c6
    FST double ptr [ESP + 0x28]         ; 0051a6ca
    FCOMP double ptr [0x005cd157]       ; 0051a6ce | DAT_005cd157
    FNSTSW AX                           ; 0051a6d4
    SAHF                                ; 0051a6d6
    JNC 0x0051a89c                      ; 0051a6d7
        ;   XREF to: 0051a89c (CONDITIONAL_JUMP)  ; LAB_0051a89c
    PUSH 0x1                            ; 0051a6dd
    PUSH 0x6                            ; 0051a6df
    PUSH ESI                            ; 0051a6e1
        ;   Label: LAB_0051a6e1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0051a6e2
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051a6e7
    LEA EDI,[ESP + 0x298]               ; 0051a6ea
    LEA ESI,[EBX + 0x30]                ; 0051a6f1
    FLD float ptr [ESP + 0x50]          ; 0051a6f4
    MOVSD ES:EDI,ESI                    ; 0051a6f8
    MOVSD ES:EDI,ESI                    ; 0051a6f9
    MOVSD ES:EDI,ESI                    ; 0051a6fa
    LEA EAX,[ESP + 0x298]               ; 0051a6fb
    FMUL float ptr [EBX + 0x20c34]      ; 0051a702
    PUSH EAX                            ; 0051a708
    FADD float ptr [ESP + 0x2a0]        ; 0051a709
    PUSH EBX                            ; 0051a710
    FSTP float ptr [ESP + 0x2a4]        ; 0051a711
    CALL core_charactr.cpp_FUN_00433220 ; 0051a718
        ;   XREF to: 00433220 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433220()
    ADD ESP,0x8                         ; 0051a71d
    FLD float ptr [ESP + 0xa0]          ; 0051a720
    FADD double ptr [0x005cd197]        ; 0051a727 | DAT_005cd197
    XOR ESI,ESI                         ; 0051a72d
    FSTP float ptr [ESP + 0x4c8]        ; 0051a72f
    MOV EAX,dword ptr [ESP + 0x4c8]     ; 0051a736
    MOV dword ptr [ESP + 0x124],ESI     ; 0051a73d
    MOV dword ptr [ESP + 0x12c],EAX     ; 0051a744
    LEA EAX,[ESP + 0x124]               ; 0051a74b
    MOV dword ptr [ESP + 0x128],ESI     ; 0051a752
    PUSH EAX                            ; 0051a759
    MOV EAX,dword ptr [EBX + 0x20ba8]   ; 0051a75a
    PUSH EAX                            ; 0051a760
    LEA ESI,[ESP + 0x258]               ; 0051a761
    LEA EDI,[ESP + 0x1f8]               ; 0051a768
    CALL core_actor.cpp_FUN_00408b80    ; 0051a76f
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x258]               ; 0051a774
    ADD ESP,0x8                         ; 0051a77b
    LEA EAX,[EBX + 0x20]                ; 0051a77e
    MOVSD ES:EDI,ESI                    ; 0051a781
    MOVSD ES:EDI,ESI                    ; 0051a782
    MOVSD ES:EDI,ESI                    ; 0051a783
    LEA EDX,[EBX + 0x20c34]             ; 0051a784
    FLD float ptr [ESP + 0x1f0]         ; 0051a78a
    FLD float ptr [ESP + 0x1f4]         ; 0051a791
    FLD float ptr [ESP + 0x1f8]         ; 0051a798
    LEA EDI,[ESP + 0x2e0]               ; 0051a79f
    LEA ESI,[ESP + 0x28c]               ; 0051a7a6
    MOV dword ptr [ESP + 0x4c8],EDX     ; 0051a7ad
    FXCH ST2                            ; 0051a7b4
    FSUB float ptr [EAX]                ; 0051a7b6
    FXCH                                ; 0051a7b8
    FSUB float ptr [EAX + 0x4]          ; 0051a7ba
    FXCH ST2                            ; 0051a7bd
    FSUB float ptr [EAX + 0x8]          ; 0051a7bf
    FXCH                                ; 0051a7c2
    FSTP float ptr [ESP + 0x28c]        ; 0051a7c4
    FXCH                                ; 0051a7cb
    FSTP float ptr [ESP + 0x290]        ; 0051a7cd
    LEA EAX,[ESP + 0x2e0]               ; 0051a7d4
    FSTP float ptr [ESP + 0x294]        ; 0051a7db
    PUSH EAX                            ; 0051a7e2
    MOVSD ES:EDI,ESI                    ; 0051a7e3
    MOVSD ES:EDI,ESI                    ; 0051a7e4
    MOVSD ES:EDI,ESI                    ; 0051a7e5
    PUSH EBX                            ; 0051a7e6
    LEA ESI,[ESP + 0x39c]               ; 0051a7e7
    LEA EDI,[ESP + 0x414]               ; 0051a7ee
    CALL core_actor.cpp_FUN_00408b40    ; 0051a7f5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x39c]               ; 0051a7fa
    ADD ESP,0x8                         ; 0051a801
    MOVSD ES:EDI,ESI                    ; 0051a804
    MOVSD ES:EDI,ESI                    ; 0051a805
    MOVSD ES:EDI,ESI                    ; 0051a806
    MOV EAX,dword ptr [ESP + 0x4c8]     ; 0051a807
    FLD float ptr [ESP + 0x40c]         ; 0051a80e
    FMUL float ptr [EAX]                ; 0051a815
    FLD float ptr [ESP + 0x410]         ; 0051a817
    FMUL float ptr [EAX]                ; 0051a81e
    FLD float ptr [ESP + 0x414]         ; 0051a820
    FMUL float ptr [EAX]                ; 0051a827
    LEA EDX,[EBX + 0x249c]              ; 0051a829
    LEA EDI,[ESP + 0x2f8]               ; 0051a82f
    LEA ESI,[ESP + 0x238]               ; 0051a836
    FXCH ST2                            ; 0051a83d
    FSTP float ptr [ESP + 0x238]        ; 0051a83f
    FSTP float ptr [ESP + 0x23c]        ; 0051a846
    FSTP float ptr [ESP + 0x240]        ; 0051a84d
    LEA EAX,[ESP + 0x2f8]               ; 0051a854
    MOVSD ES:EDI,ESI                    ; 0051a85b
    MOVSD ES:EDI,ESI                    ; 0051a85c
    MOVSD ES:EDI,ESI                    ; 0051a85d
    CMP EDX,EAX                         ; 0051a85e
    JZ 0x0051a87f                       ; 0051a860
        ;   XREF to: 0051a87f (CONDITIONAL_JUMP)  ; LAB_0051a87f
    MOV EAX,dword ptr [ESP + 0x2f8]     ; 0051a862
    MOV dword ptr [EDX],EAX             ; 0051a869
    MOV EAX,dword ptr [ESP + 0x2fc]     ; 0051a86b
    MOV dword ptr [EDX + 0x4],EAX       ; 0051a872
    MOV EAX,dword ptr [ESP + 0x300]     ; 0051a875
    MOV dword ptr [EDX + 0x8],EAX       ; 0051a87c
    MOV dword ptr [EBX + 0x24a0],0x0    ; 0051a87f
        ;   Label: LAB_0051a87f
    JMP 0x0051976f                      ; 0051a889
        ;   XREF to: 0051976f (UNCONDITIONAL_JUMP)  ; LAB_0051976f
    PUSH EBX                            ; 0051a88e
        ;   Label: LAB_0051a88e
    CALL core_hero.cpp_FUN_004d3af0     ; 0051a88f
        ;   XREF to: 004d3af0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004d3af0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0051a894
    JMP 0x0051976f                      ; 0051a897
        ;   XREF to: 0051976f (UNCONDITIONAL_JUMP)  ; LAB_0051976f
    FLD double ptr [ESP + 0x28]         ; 0051a89c
        ;   Label: LAB_0051a89c
    FCOMP double ptr [0x005cd15f]       ; 0051a8a0 | DAT_005cd15f
    FNSTSW AX                           ; 0051a8a6
    SAHF                                ; 0051a8a8
    JBE 0x0051a8b4                      ; 0051a8a9
        ;   XREF to: 0051a8b4 (CONDITIONAL_JUMP)  ; LAB_0051a8b4
    PUSH 0x1                            ; 0051a8ab
    PUSH 0x5                            ; 0051a8ad
    JMP 0x0051a6e1                      ; 0051a8af
        ;   XREF to: 0051a6e1 (UNCONDITIONAL_JUMP)  ; LAB_0051a6e1
    PUSH 0x1                            ; 0051a8b4
        ;   Label: LAB_0051a8b4
    PUSH 0x0                            ; 0051a8b6
    JMP 0x0051a6e1                      ; 0051a8b8
        ;   XREF to: 0051a6e1 (UNCONDITIONAL_JUMP)  ; LAB_0051a6e1
    PUSH 0x1                            ; 0051a8bd
        ;   Label: LAB_0051a8bd
    PUSH EAX                            ; 0051a8bf
    PUSH ESI                            ; 0051a8c0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0051a8c1
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051a8c6
    PUSH EBX                            ; 0051a8c9
    CALL core_hero.cpp_FUN_004d3af0     ; 0051a8ca
        ;   XREF to: 004d3af0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004d3af0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0051a8cf
    JMP 0x0051976f                      ; 0051a8d2
        ;   XREF to: 0051976f (UNCONDITIONAL_JUMP)  ; LAB_0051976f
    MOV dword ptr [EBX + 0x26fc],EAX    ; 0051a8d7
        ;   Label: LAB_0051a8d7
    PUSH 0x1                            ; 0051a8dd
        ;   Label: LAB_0051a8dd
    PUSH 0x0                            ; 0051a8df
    LEA EAX,[EBX + 0x158]               ; 0051a8e1
    PUSH EAX                            ; 0051a8e7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0051a8e8
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051a8ed
    JMP 0x0051976f                      ; 0051a8f0
        ;   XREF to: 0051976f (UNCONDITIONAL_JUMP)  ; LAB_0051976f
    PUSH EBX                            ; 0051a8f5
        ;   Label: LAB_0051a8f5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051a8f6
    CALL dword ptr [EAX + 0xf0]         ; 0051a8fc
    ADD ESP,0x4                         ; 0051a902
    JMP 0x0051976f                      ; 0051a905
        ;   XREF to: 0051976f (UNCONDITIONAL_JUMP)  ; LAB_0051976f
    CMP dword ptr [EBX + 0x20b9c],0x0   ; 0051a90a
        ;   Label: LAB_0051a90a
    JZ 0x0051ac60                       ; 0051a911
        ;   XREF to: 0051ac60 (CONDITIONAL_JUMP)  ; LAB_0051ac60
    MOV ESI,dword ptr [EBX + 0xcde0]    ; 0051a917
    MOV dword ptr [ESP + 0x478],EDI     ; 0051a91d
    TEST ESI,ESI                        ; 0051a924
    JNZ 0x0051a957                      ; 0051a926
        ;   XREF to: 0051a957 (CONDITIONAL_JUMP)  ; LAB_0051a957
    MOV EDX,dword ptr [ESP + 0x478]     ; 0051a928
        ;   Label: LAB_0051a928
    TEST EDX,EDX                        ; 0051a92f
    JNZ 0x0051976f                      ; 0051a931
        ;   XREF to: 0051976f (CONDITIONAL_JUMP)  ; LAB_0051976f
    PUSH 0x1                            ; 0051a937
    PUSH EDX                            ; 0051a939
    LEA EAX,[EBX + 0x158]               ; 0051a93a
    PUSH EAX                            ; 0051a940
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0051a941
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051a946
    PUSH EBX                            ; 0051a949
    CALL core_hero.cpp_FUN_004d3850     ; 0051a94a
        ;   XREF to: 004d3850 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004d3850(CHero * this_ptr)
    ADD ESP,0x4                         ; 0051a94f
    JMP 0x0051976f                      ; 0051a952
        ;   XREF to: 0051976f (UNCONDITIONAL_JUMP)  ; LAB_0051976f
    MOV EAX,dword ptr [EBX + 0x20b9c]   ; 0051a957
        ;   Label: LAB_0051a957
    PUSH EAX                            ; 0051a95d
    MOV EDX,dword ptr [EAX + 0x154]     ; 0051a95e
    LEA ESI,[ESP + 0xbc]                ; 0051a964
    LEA EDI,[ESP + 0xd4]                ; 0051a96b
    CALL dword ptr [EDX + 0x1c]         ; 0051a972
    MOV ECX,0x6                         ; 0051a975
    LEA ESI,[ESP + 0xbc]                ; 0051a97a
    ADD ESP,0x4                         ; 0051a981
    MOVSD.REP ES:EDI,ESI                ; 0051a984
    FLD float ptr [ESP + 0xd0]          ; 0051a986
    FLD float ptr [ESP + 0xd4]          ; 0051a98d
    FLD float ptr [ESP + 0xd8]          ; 0051a994
    LEA EDI,[ESP + 0x388]               ; 0051a99b
    LEA ESI,[ESP + 0x154]               ; 0051a9a2
    FXCH ST2                            ; 0051a9a9
    FADD float ptr [ESP + 0xdc]         ; 0051a9ab
    FXCH                                ; 0051a9b2
    FADD float ptr [ESP + 0xe0]         ; 0051a9b4
    FXCH ST2                            ; 0051a9bb
    FADD float ptr [ESP + 0xe4]         ; 0051a9bd
    FXCH                                ; 0051a9c4
    FSTP float ptr [ESP + 0x154]        ; 0051a9c6
    FXCH                                ; 0051a9cd
    FSTP float ptr [ESP + 0x158]        ; 0051a9cf
    FSTP float ptr [ESP + 0x15c]        ; 0051a9d6
    MOVSD ES:EDI,ESI                    ; 0051a9dd
    MOVSD ES:EDI,ESI                    ; 0051a9de
    MOVSD ES:EDI,ESI                    ; 0051a9df
    FLD float ptr [ESP + 0x388]         ; 0051a9e0
    FMUL float ptr [0x005cd14b]         ; 0051a9e7 | DAT_005cd14b
    FLD float ptr [ESP + 0x38c]         ; 0051a9ed
    FMUL float ptr [0x005cd14b]         ; 0051a9f4 | DAT_005cd14b
    FLD float ptr [ESP + 0x390]         ; 0051a9fa
    FMUL float ptr [0x005cd14b]         ; 0051aa01 | DAT_005cd14b
    LEA EAX,[ESP + 0x460]               ; 0051aa07
    LEA EDI,[ESP + 0x460]               ; 0051aa0e
    LEA ESI,[ESP + 0x43c]               ; 0051aa15
    FXCH ST2                            ; 0051aa1c
    FSTP float ptr [ESP + 0x43c]        ; 0051aa1e
    FSTP float ptr [ESP + 0x440]        ; 0051aa25
    FSTP float ptr [ESP + 0x444]        ; 0051aa2c
    MOVSD ES:EDI,ESI                    ; 0051aa33
    MOVSD ES:EDI,ESI                    ; 0051aa34
    MOVSD ES:EDI,ESI                    ; 0051aa35
    PUSH EAX                            ; 0051aa36
    MOV EDI,dword ptr [EBX + 0x20b9c]   ; 0051aa37
    PUSH EDI                            ; 0051aa3d
    LEA ESI,[ESP + 0x2dc]               ; 0051aa3e
    CALL core_actor.cpp_FUN_00408b80    ; 0051aa45
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA EDI,[ESP + 0x198]               ; 0051aa4a
    ADD ESP,0x8                         ; 0051aa51
    LEA EAX,[ESP + 0x190]               ; 0051aa54
    LEA ESI,[ESP + 0x2d4]               ; 0051aa5b
    PUSH EAX                            ; 0051aa62
    MOVSD ES:EDI,ESI                    ; 0051aa63
    MOVSD ES:EDI,ESI                    ; 0051aa64
    MOVSD ES:EDI,ESI                    ; 0051aa65
    PUSH EBX                            ; 0051aa66
    LEA ESI,[ESP + 0x438]               ; 0051aa67
    LEA EDI,[ESP + 0x2ac]               ; 0051aa6e
    CALL core_actor.cpp_FUN_00408bf0    ; 0051aa75
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x438]               ; 0051aa7a
    ADD ESP,0x8                         ; 0051aa81
    LEA EAX,[ESP + 0x2a4]               ; 0051aa84
    MOVSD ES:EDI,ESI                    ; 0051aa8b
    MOVSD ES:EDI,ESI                    ; 0051aa8c
    MOVSD ES:EDI,ESI                    ; 0051aa8d
    PUSH EAX                            ; 0051aa8e
    LEA ESI,[ESP + 0x134]               ; 0051aa8f
    LEA EDI,[ESP + 0x1a0]               ; 0051aa96
    CALL core_vecdir.cpp_FUN_00576250   ; 0051aa9d
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[ESP + 0x134]               ; 0051aaa2
    ADD ESP,0x4                         ; 0051aaa9
    MOVSD ES:EDI,ESI                    ; 0051aaac
    MOVSD ES:EDI,ESI                    ; 0051aaad
    MOVSD ES:EDI,ESI                    ; 0051aaae
    PUSH dword ptr [ESP + 0x1a0]        ; 0051aaaf
    CALL core_actor.cpp_FUN_0040cfa0    ; 0051aab6
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x4dc],EAX     ; 0051aabb
    LEA EDI,[ESP + 0x374]               ; 0051aac2
    FLD float ptr [ESP + 0x4dc]         ; 0051aac9
    ADD ESP,0x4                         ; 0051aad0
    LEA ESI,[ESP + 0x1c0]               ; 0051aad3
    FLD float ptr [ESP + 0xdc]          ; 0051aada
    FLD float ptr [ESP + 0xe0]          ; 0051aae1
    FLD float ptr [ESP + 0xe4]          ; 0051aae8
    FXCH ST2                            ; 0051aaef
    FSUB float ptr [ESP + 0xd0]         ; 0051aaf1
    FXCH                                ; 0051aaf8
    FSUB float ptr [ESP + 0xd4]         ; 0051aafa
    FXCH ST2                            ; 0051ab01
    FSUB float ptr [ESP + 0xd8]         ; 0051ab03
    FXCH                                ; 0051ab0a
    FSTP float ptr [ESP + 0x1c0]        ; 0051ab0c
    FXCH                                ; 0051ab13
    FSTP float ptr [ESP + 0x1c4]        ; 0051ab15
    FSTP float ptr [ESP + 0x1c8]        ; 0051ab1c
    MOVSD ES:EDI,ESI                    ; 0051ab23
    MOVSD ES:EDI,ESI                    ; 0051ab24
    MOVSD ES:EDI,ESI                    ; 0051ab25
    FLD float ptr [ESP + 0x370]         ; 0051ab26
    FMUL float ptr [0x005cd14b]         ; 0051ab2d | DAT_005cd14b
    FLD float ptr [ESP + 0x374]         ; 0051ab33
    FMUL float ptr [0x005cd14b]         ; 0051ab3a | DAT_005cd14b
    FLD float ptr [ESP + 0x378]         ; 0051ab40
    FMUL float ptr [0x005cd14b]         ; 0051ab47 | DAT_005cd14b
    LEA EDI,[ESP + 0x2ec]               ; 0051ab4d
    LEA ESI,[ESP + 0x3e8]               ; 0051ab54
    FXCH ST2                            ; 0051ab5b
    FSTP float ptr [ESP + 0x3e8]        ; 0051ab5d
    FSTP float ptr [ESP + 0x3ec]        ; 0051ab64
    FSTP float ptr [ESP + 0x3f0]        ; 0051ab6b
    MOVSD ES:EDI,ESI                    ; 0051ab72
    MOVSD ES:EDI,ESI                    ; 0051ab73
    MOVSD ES:EDI,ESI                    ; 0051ab74
    FLD float ptr [ESP + 0x2ec]         ; 0051ab75
    FMUL ST0                            ; 0051ab7c
    FLD float ptr [ESP + 0x2f4]         ; 0051ab7e
    FMUL ST0                            ; 0051ab85
    XOR EAX,EAX                         ; 0051ab87
    FADDP                               ; 0051ab89
    MOV dword ptr [ESP + 0x2f0],EAX     ; 0051ab8b
    FSQRT                               ; 0051ab92
    FSUBR float ptr [ESP + 0x2ac]       ; 0051ab94
    FXCH                                ; 0051ab9b
    FSTP float ptr [ESP + 0x40]         ; 0051ab9d
    FCOMP double ptr [0x005cd167]       ; 0051aba1 | DAT_005cd167
    FNSTSW AX                           ; 0051aba7
    SAHF                                ; 0051aba9
    JNC 0x0051a928                      ; 0051abaa
        ;   XREF to: 0051a928 (CONDITIONAL_JUMP)  ; LAB_0051a928
    FLD float ptr [ESP + 0x2a8]         ; 0051abb0
    FLD1                                ; 0051abb7
    FXCH                                ; 0051abb9
    FSTP double ptr [ESP]               ; 0051abbb
    FCOMP double ptr [ESP]              ; 0051abbe
    FNSTSW AX                           ; 0051abc1
    SAHF                                ; 0051abc3
    JNC 0x0051a928                      ; 0051abc4
        ;   XREF to: 0051a928 (CONDITIONAL_JUMP)  ; LAB_0051a928
    FLD double ptr [ESP]                ; 0051abca
    FCOMP double ptr [0x005cd16f]       ; 0051abcd | DAT_005cd16f
    FNSTSW AX                           ; 0051abd3
    SAHF                                ; 0051abd5
    JNC 0x0051a928                      ; 0051abd6
        ;   XREF to: 0051a928 (CONDITIONAL_JUMP)  ; LAB_0051a928
    FLD float ptr [ESP + 0x40]          ; 0051abdc
    FABS                                ; 0051abe0
    FCOMP double ptr [0x005cd177]       ; 0051abe2 | DAT_005cd177
    FNSTSW AX                           ; 0051abe8
    SAHF                                ; 0051abea
    JNC 0x0051a928                      ; 0051abeb
        ;   XREF to: 0051a928 (CONDITIONAL_JUMP)  ; LAB_0051a928
    FLD float ptr [EBP + 0x18]          ; 0051abf1
    FMUL float ptr [0x005cd17f]         ; 0051abf4 | DAT_005cd17f
    FLD float ptr [ESP + 0x40]          ; 0051abfa
    FXCH                                ; 0051abfe
    FST float ptr [ESP + 0x490]         ; 0051ac00
    FCHS                                ; 0051ac07
    FSTP float ptr [ESP + 0x47c]        ; 0051ac09
    FCOMP float ptr [ESP + 0x47c]       ; 0051ac10
    FNSTSW AX                           ; 0051ac17
    SAHF                                ; 0051ac19
    JC 0x0051ac53                       ; 0051ac1a
        ;   XREF to: 0051ac53 (CONDITIONAL_JUMP)  ; LAB_0051ac53
    FLD float ptr [ESP + 0x40]          ; 0051ac1c
        ;   Label: LAB_0051ac1c
    FCOMP float ptr [ESP + 0x490]       ; 0051ac20
    FNSTSW AX                           ; 0051ac27
    SAHF                                ; 0051ac29
    JBE 0x0051ac37                      ; 0051ac2a
        ;   XREF to: 0051ac37 (CONDITIONAL_JUMP)  ; LAB_0051ac37
    MOV EAX,dword ptr [ESP + 0x490]     ; 0051ac2c
    MOV dword ptr [ESP + 0x40],EAX      ; 0051ac33
    LEA EAX,[EBX + 0x30]                ; 0051ac37
        ;   Label: LAB_0051ac37
    FLD float ptr [EBX + 0x34]          ; 0051ac3a
    PUSH EAX                            ; 0051ac3d
    FADD float ptr [ESP + 0x44]         ; 0051ac3e
    PUSH EBX                            ; 0051ac42
    FSTP float ptr [EBX + 0x34]         ; 0051ac43
    CALL core_charactr.cpp_FUN_00433220 ; 0051ac46
        ;   XREF to: 00433220 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433220()
    ADD ESP,0x8                         ; 0051ac4b
    JMP 0x0051976f                      ; 0051ac4e
        ;   XREF to: 0051976f (UNCONDITIONAL_JUMP)  ; LAB_0051976f
    MOV EAX,dword ptr [ESP + 0x47c]     ; 0051ac53
        ;   Label: LAB_0051ac53
    MOV dword ptr [ESP + 0x40],EAX      ; 0051ac5a
    JMP 0x0051ac1c                      ; 0051ac5e
        ;   XREF to: 0051ac1c (UNCONDITIONAL_JUMP)  ; LAB_0051ac1c
    PUSH dword ptr [EBP + 0x18]         ; 0051ac60
        ;   Label: LAB_0051ac60
    PUSH EBX                            ; 0051ac63
    CALL core_charactr.cpp_FUN_00431660 ; 0051ac64
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0051ac69
    LEA EDX,[EBX + 0x158]               ; 0051ac6c
    TEST EAX,EAX                        ; 0051ac72
    JZ 0x0051acf9                       ; 0051ac74
        ;   XREF to: 0051acf9 (CONDITIONAL_JUMP)  ; LAB_0051acf9
    MOV EAX,dword ptr [EBX + 0x273c]    ; 0051ac7a
    CMP EAX,0x2                         ; 0051ac80
    JNC 0x0051ace5                      ; 0051ac83
        ;   XREF to: 0051ace5 (CONDITIONAL_JUMP)  ; LAB_0051ace5
    CMP EAX,0x1                         ; 0051ac85
    JNZ 0x0051acd8                      ; 0051ac88
        ;   XREF to: 0051acd8 (CONDITIONAL_JUMP)  ; LAB_0051acd8
    PUSH EAX                            ; 0051ac8a
    PUSH EAX                            ; 0051ac8b
    PUSH EDX                            ; 0051ac8c
        ;   Label: LAB_0051ac8c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0051ac8d
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0051ac8d
    ADD ESP,0xc                         ; 0051ac92
        ;   Label: LAB_0051ac92
    LEA EAX,[EBX + 0x249c]              ; 0051ac95
    MOV dword ptr [EAX + 0x8],0x0       ; 0051ac9b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051aca2
    MOV dword ptr [EAX + 0x4],EDX       ; 0051aca5
    MOV EDX,dword ptr [EAX + 0x4]       ; 0051aca8
    MOV dword ptr [EAX],EDX             ; 0051acab
    JMP 0x0051976f                      ; 0051acad
        ;   XREF to: 0051976f (UNCONDITIONAL_JUMP)  ; LAB_0051976f
    PUSH 0x1                            ; 0051acb2
        ;   Label: LAB_0051acb2
    PUSH EDI                            ; 0051acb4
    PUSH EDX                            ; 0051acb5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0051acb6
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051acbb
    PUSH EBX                            ; 0051acbe
    PUSH 0x5cd0e3                       ; 0051acbf | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x005f1690]      ; 0051acc4 | g_CConsolePtr
    PUSH EDX                            ; 0051acca | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0051accb
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    JMP 0x0051ac92                      ; 0051acd0
        ;   XREF to: 0051ac92 (UNCONDITIONAL_JUMP)  ; LAB_0051ac92
    PUSH 0x1                            ; 0051acd2
        ;   Label: LAB_0051acd2
    PUSH 0x4                            ; 0051acd4
    JMP 0x0051ac8c                      ; 0051acd6
        ;   XREF to: 0051ac8c (UNCONDITIONAL_JUMP)  ; LAB_0051ac8c
    PUSH 0x1                            ; 0051acd8
        ;   Label: LAB_0051acd8
    PUSH 0x0                            ; 0051acda
    LEA EAX,[EBX + 0x158]               ; 0051acdc
    PUSH EAX                            ; 0051ace2
    JMP 0x0051ac8d                      ; 0051ace3
        ;   XREF to: 0051ac8d (UNCONDITIONAL_JUMP)  ; LAB_0051ac8d
    JBE 0x0051acd2                      ; 0051ace5
        ;   XREF to: 0051acd2 (CONDITIONAL_JUMP)  ; LAB_0051acd2
        ;   Label: LAB_0051ace5
    CMP EAX,0x3                         ; 0051ace7
    JZ 0x0051acb2                       ; 0051acea
        ;   XREF to: 0051acb2 (CONDITIONAL_JUMP)  ; LAB_0051acb2
    PUSH 0x1                            ; 0051acec
    PUSH 0x0                            ; 0051acee
    LEA EAX,[EBX + 0x158]               ; 0051acf0
    PUSH EAX                            ; 0051acf6
    JMP 0x0051ac8d                      ; 0051acf7
        ;   XREF to: 0051ac8d (UNCONDITIONAL_JUMP)  ; LAB_0051ac8d
    CMP dword ptr [ESP + 0x4b4],0x0     ; 0051acf9
        ;   Label: LAB_0051acf9
    JZ 0x0051976f                       ; 0051ad01
        ;   XREF to: 0051976f (CONDITIONAL_JUMP)  ; LAB_0051976f
    PUSH EDX                            ; 0051ad07
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0051ad08
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0051ad0d
    ADD ESP,0x4                         ; 0051ad10
    CMP EAX,0x8                         ; 0051ad13
    JNC 0x0051af92                      ; 0051ad16
        ;   XREF to: 0051af92 (CONDITIONAL_JUMP)  ; LAB_0051af92
    CMP EAX,0x3                         ; 0051ad1c
    JNC 0x0051ad2e                      ; 0051ad1f
        ;   XREF to: 0051ad2e (CONDITIONAL_JUMP)  ; LAB_0051ad2e
    CMP EAX,0x1                         ; 0051ad21
    JNC 0x0051ad2e                      ; 0051ad24
        ;   XREF to: 0051ad2e (CONDITIONAL_JUMP)  ; LAB_0051ad2e
    TEST EAX,EAX                        ; 0051ad26
    JNZ 0x0051976f                      ; 0051ad28
        ;   XREF to: 0051976f (CONDITIONAL_JUMP)  ; LAB_0051976f
    CMP dword ptr [EBX + 0x2500],0x0    ; 0051ad2e
        ;   Label: LAB_0051ad2e
    JZ 0x0051ae23                       ; 0051ad35
        ;   XREF to: 0051ae23 (CONDITIONAL_JUMP)  ; LAB_0051ae23
    LEA EAX,[EBX + 0x158]               ; 0051ad3b
    PUSH EAX                            ; 0051ad41
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0051ad42
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0051ad47
    MOV ECX,dword ptr [EAX + 0x24]      ; 0051ad4a
    MOV ESI,dword ptr [EBX + 0xcdd4]    ; 0051ad4d
    XOR EDX,EDX                         ; 0051ad53
    TEST ESI,ESI                        ; 0051ad55
    JZ 0x0051ae96                       ; 0051ad57
        ;   XREF to: 0051ae96 (CONDITIONAL_JUMP)  ; LAB_0051ae96
    CMP dword ptr [EBX + 0xcddc],0x0    ; 0051ad5d
    JZ 0x0051ae54                       ; 0051ad64
        ;   XREF to: 0051ae54 (CONDITIONAL_JUMP)  ; LAB_0051ae54
    FLD float ptr [EBX + 0xcdfc]        ; 0051ad6a
    FST double ptr [ESP + 0x18]         ; 0051ad70
    FCOMP double ptr [0x005cd157]       ; 0051ad74 | DAT_005cd157
    FNSTSW AX                           ; 0051ad7a
    SAHF                                ; 0051ad7c
    JNC 0x0051ae31                      ; 0051ad7d
        ;   XREF to: 0051ae31 (CONDITIONAL_JUMP)  ; LAB_0051ae31
    MOV EDX,0x9                         ; 0051ad83
    CMP dword ptr [EBX + 0xcdf8],0x0    ; 0051ad88
        ;   Label: LAB_0051ad88
    JZ 0x0051adae                       ; 0051ad8f
        ;   XREF to: 0051adae (CONDITIONAL_JUMP)  ; LAB_0051adae
    CMP dword ptr [EBX + 0x2f00],0x11   ; 0051ad91
    JZ 0x0051adae                       ; 0051ad98
        ;   XREF to: 0051adae (CONDITIONAL_JUMP)  ; LAB_0051adae
    MOV dword ptr [EBX + 0x20cfc],0x0   ; 0051ad9a
    MOV dword ptr [EBX + 0x20cf8],0x1   ; 0051ada4
    CMP dword ptr [EBX + 0x20cf8],0x0   ; 0051adae
        ;   Label: LAB_0051adae
    JNZ 0x0051add5                      ; 0051adb5
        ;   XREF to: 0051add5 (CONDITIONAL_JUMP)  ; LAB_0051add5
    FLD float ptr [EBX + 0xce00]        ; 0051adb7
    FMUL float ptr [EBX + 0x2528]       ; 0051adbd
    FST float ptr [EBX + 0x2508]        ; 0051adc3
    FSUBR float ptr [EBX + 0x20c44]     ; 0051adc9
    FSTP float ptr [EBX + 0x20c44]      ; 0051adcf
    CMP dword ptr [EBX + 0x20b64],0x5   ; 0051add5
        ;   Label: LAB_0051add5
    JNZ 0x0051ade8                      ; 0051addc
        ;   XREF to: 0051ade8 (CONDITIONAL_JUMP)  ; LAB_0051ade8
    MOV dword ptr [EBX + 0x20b64],0x0   ; 0051adde
    CMP dword ptr [EBX + 0x20b94],0x0   ; 0051ade8
        ;   Label: LAB_0051ade8
    JZ 0x0051adfb                       ; 0051adef
        ;   XREF to: 0051adfb (CONDITIONAL_JUMP)  ; LAB_0051adfb
    MOV dword ptr [EBX + 0x20b94],0x0   ; 0051adf1
    CMP EDX,ECX                         ; 0051adfb
        ;   Label: LAB_0051adfb
    JZ 0x0051ae11                       ; 0051adfd
        ;   XREF to: 0051ae11 (CONDITIONAL_JUMP)  ; LAB_0051ae11
    PUSH 0x1                            ; 0051adff
    PUSH EDX                            ; 0051ae01
    LEA EAX,[EBX + 0x158]               ; 0051ae02
    PUSH EAX                            ; 0051ae08
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0051ae09
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051ae0e
    CMP dword ptr [EBX + 0xcde8],0x0    ; 0051ae11
        ;   Label: LAB_0051ae11
    JZ 0x0051ae23                       ; 0051ae18
        ;   XREF to: 0051ae23 (CONDITIONAL_JUMP)  ; LAB_0051ae23
    PUSH EBX                            ; 0051ae1a
    CALL core_hero.cpp_FUN_004d3c90     ; 0051ae1b
        ;   XREF to: 004d3c90 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3c90()
    ADD ESP,0x4                         ; 0051ae20
    XOR EAX,EAX                         ; 0051ae23
        ;   Label: LAB_0051ae23
    MOV dword ptr [ESP + 0x480],EAX     ; 0051ae25
    JMP 0x0051976f                      ; 0051ae2c
        ;   XREF to: 0051976f (UNCONDITIONAL_JUMP)  ; LAB_0051976f
    FLD double ptr [ESP + 0x18]         ; 0051ae31
        ;   Label: LAB_0051ae31
    FCOMP double ptr [0x005cd15f]       ; 0051ae35 | DAT_005cd15f
    FNSTSW AX                           ; 0051ae3b
    SAHF                                ; 0051ae3d
    JBE 0x0051ae4a                      ; 0051ae3e
        ;   XREF to: 0051ae4a (CONDITIONAL_JUMP)  ; LAB_0051ae4a
    MOV EDX,0xa                         ; 0051ae40
    JMP 0x0051ad88                      ; 0051ae45
        ;   XREF to: 0051ad88 (UNCONDITIONAL_JUMP)  ; LAB_0051ad88
    MOV EDX,0x4                         ; 0051ae4a
        ;   Label: LAB_0051ae4a
    JMP 0x0051ad88                      ; 0051ae4f
        ;   XREF to: 0051ad88 (UNCONDITIONAL_JUMP)  ; LAB_0051ad88
    FLD float ptr [EBX + 0xcdfc]        ; 0051ae54
        ;   Label: LAB_0051ae54
    FST double ptr [ESP + 0x8]          ; 0051ae5a
    FCOMP double ptr [0x005cd157]       ; 0051ae5e | DAT_005cd157
    FNSTSW AX                           ; 0051ae64
    SAHF                                ; 0051ae66
    JNC 0x0051ae73                      ; 0051ae67
        ;   XREF to: 0051ae73 (CONDITIONAL_JUMP)  ; LAB_0051ae73
    MOV EDX,0xb                         ; 0051ae69
    JMP 0x0051ad88                      ; 0051ae6e
        ;   XREF to: 0051ad88 (UNCONDITIONAL_JUMP)  ; LAB_0051ad88
    FLD double ptr [ESP + 0x8]          ; 0051ae73
        ;   Label: LAB_0051ae73
    FCOMP double ptr [0x005cd15f]       ; 0051ae77 | DAT_005cd15f
    FNSTSW AX                           ; 0051ae7d
    SAHF                                ; 0051ae7f
    JBE 0x0051ae8c                      ; 0051ae80
        ;   XREF to: 0051ae8c (CONDITIONAL_JUMP)  ; LAB_0051ae8c
    MOV EDX,0xc                         ; 0051ae82
    JMP 0x0051ad88                      ; 0051ae87
        ;   XREF to: 0051ad88 (UNCONDITIONAL_JUMP)  ; LAB_0051ad88
    MOV EDX,0x1                         ; 0051ae8c
        ;   Label: LAB_0051ae8c
    JMP 0x0051ad88                      ; 0051ae91
        ;   XREF to: 0051ad88 (UNCONDITIONAL_JUMP)  ; LAB_0051ad88
    CMP dword ptr [EBX + 0xcdd8],0x0    ; 0051ae96
        ;   Label: LAB_0051ae96
    JZ 0x0051af30                       ; 0051ae9d
        ;   XREF to: 0051af30 (CONDITIONAL_JUMP)  ; LAB_0051af30
    CMP dword ptr [EBX + 0xcddc],0x0    ; 0051aea3
    JZ 0x0051aeee                       ; 0051aeaa
        ;   XREF to: 0051aeee (CONDITIONAL_JUMP)  ; LAB_0051aeee
    FLD float ptr [EBX + 0xcdfc]        ; 0051aeac
    FST double ptr [ESP + 0x20]         ; 0051aeb2
    FCOMP double ptr [0x005cd157]       ; 0051aeb6 | DAT_005cd157
    FNSTSW AX                           ; 0051aebc
    SAHF                                ; 0051aebe
    JNC 0x0051aecb                      ; 0051aebf
        ;   XREF to: 0051aecb (CONDITIONAL_JUMP)  ; LAB_0051aecb
    MOV EDX,0xd                         ; 0051aec1
    JMP 0x0051ad88                      ; 0051aec6
        ;   XREF to: 0051ad88 (UNCONDITIONAL_JUMP)  ; LAB_0051ad88
    FLD double ptr [ESP + 0x20]         ; 0051aecb
        ;   Label: LAB_0051aecb
    FCOMP double ptr [0x005cd15f]       ; 0051aecf | DAT_005cd15f
    FNSTSW AX                           ; 0051aed5
    SAHF                                ; 0051aed7
    JBE 0x0051aee4                      ; 0051aed8
        ;   XREF to: 0051aee4 (CONDITIONAL_JUMP)  ; LAB_0051aee4
    MOV EDX,0xe                         ; 0051aeda
    JMP 0x0051ad88                      ; 0051aedf
        ;   XREF to: 0051ad88 (UNCONDITIONAL_JUMP)  ; LAB_0051ad88
    MOV EDX,0x3                         ; 0051aee4
        ;   Label: LAB_0051aee4
    JMP 0x0051ad88                      ; 0051aee9
        ;   XREF to: 0051ad88 (UNCONDITIONAL_JUMP)  ; LAB_0051ad88
    FLD float ptr [EBX + 0xcdfc]        ; 0051aeee
        ;   Label: LAB_0051aeee
    FST double ptr [ESP + 0x38]         ; 0051aef4
    FCOMP double ptr [0x005cd157]       ; 0051aef8 | DAT_005cd157
    FNSTSW AX                           ; 0051aefe
    SAHF                                ; 0051af00
    JNC 0x0051af0d                      ; 0051af01
        ;   XREF to: 0051af0d (CONDITIONAL_JUMP)  ; LAB_0051af0d
    MOV EDX,0xf                         ; 0051af03
    JMP 0x0051ad88                      ; 0051af08
        ;   XREF to: 0051ad88 (UNCONDITIONAL_JUMP)  ; LAB_0051ad88
    FLD double ptr [ESP + 0x38]         ; 0051af0d
        ;   Label: LAB_0051af0d
    FCOMP double ptr [0x005cd15f]       ; 0051af11 | DAT_005cd15f
    FNSTSW AX                           ; 0051af17
    SAHF                                ; 0051af19
    JBE 0x0051af26                      ; 0051af1a
        ;   XREF to: 0051af26 (CONDITIONAL_JUMP)  ; LAB_0051af26
    MOV EDX,0x10                        ; 0051af1c
    JMP 0x0051ad88                      ; 0051af21
        ;   XREF to: 0051ad88 (UNCONDITIONAL_JUMP)  ; LAB_0051ad88
    MOV EDX,0x2                         ; 0051af26
        ;   Label: LAB_0051af26
    JMP 0x0051ad88                      ; 0051af2b
        ;   XREF to: 0051ad88 (UNCONDITIONAL_JUMP)  ; LAB_0051ad88
    FLD float ptr [EBX + 0xcdfc]        ; 0051af30
        ;   Label: LAB_0051af30
    FST double ptr [ESP + 0x10]         ; 0051af36
    FCOMP double ptr [0x005cd157]       ; 0051af3a | DAT_005cd157
    FNSTSW AX                           ; 0051af40
    SAHF                                ; 0051af42
    JNC 0x0051af62                      ; 0051af43
        ;   XREF to: 0051af62 (CONDITIONAL_JUMP)  ; LAB_0051af62
    CMP dword ptr [EBX + 0xcddc],0x0    ; 0051af45
    JZ 0x0051af58                       ; 0051af4c
        ;   XREF to: 0051af58 (CONDITIONAL_JUMP)  ; LAB_0051af58
    MOV EDX,0x7                         ; 0051af4e
    JMP 0x0051ad88                      ; 0051af53
        ;   XREF to: 0051ad88 (UNCONDITIONAL_JUMP)  ; LAB_0051ad88
    MOV EDX,0x5                         ; 0051af58
        ;   Label: LAB_0051af58
    JMP 0x0051ad88                      ; 0051af5d
        ;   XREF to: 0051ad88 (UNCONDITIONAL_JUMP)  ; LAB_0051ad88
    FLD double ptr [ESP + 0x10]         ; 0051af62
        ;   Label: LAB_0051af62
    FCOMP double ptr [0x005cd15f]       ; 0051af66 | DAT_005cd15f
    FNSTSW AX                           ; 0051af6c
    SAHF                                ; 0051af6e
    JBE 0x0051ad88                      ; 0051af6f
        ;   XREF to: 0051ad88 (CONDITIONAL_JUMP)  ; LAB_0051ad88
    CMP dword ptr [EBX + 0xcddc],0x0    ; 0051af75
    JZ 0x0051af88                       ; 0051af7c
        ;   XREF to: 0051af88 (CONDITIONAL_JUMP)  ; LAB_0051af88
    MOV EDX,0x8                         ; 0051af7e
    JMP 0x0051ad88                      ; 0051af83
        ;   XREF to: 0051ad88 (UNCONDITIONAL_JUMP)  ; LAB_0051ad88
    MOV EDX,0x6                         ; 0051af88
        ;   Label: LAB_0051af88
    JMP 0x0051ad88                      ; 0051af8d
        ;   XREF to: 0051ad88 (UNCONDITIONAL_JUMP)  ; LAB_0051ad88
    JBE 0x0051ad2e                      ; 0051af92
        ;   XREF to: 0051ad2e (CONDITIONAL_JUMP)  ; LAB_0051ad2e
        ;   Label: LAB_0051af92
    CMP EAX,0xd                         ; 0051af98
    JC 0x0051ad2e                       ; 0051af9b
        ;   XREF to: 0051ad2e (CONDITIONAL_JUMP)  ; LAB_0051ad2e
    JBE 0x0051ad2e                      ; 0051afa1
        ;   XREF to: 0051ad2e (CONDITIONAL_JUMP)  ; LAB_0051ad2e
    CMP EAX,0xf                         ; 0051afa7
    JC 0x0051ad2e                       ; 0051afaa
        ;   XREF to: 0051ad2e (CONDITIONAL_JUMP)  ; LAB_0051ad2e
    JBE 0x0051ad2e                      ; 0051afb0
        ;   XREF to: 0051ad2e (CONDITIONAL_JUMP)  ; LAB_0051ad2e
    CMP EAX,0x10                        ; 0051afb6
    JBE 0x0051ad2e                      ; 0051afb9
        ;   XREF to: 0051ad2e (CONDITIONAL_JUMP)  ; LAB_0051ad2e
    CMP EAX,0x7a                        ; 0051afbf
    JZ 0x0051ad2e                       ; 0051afc2
        ;   XREF to: 0051ad2e (CONDITIONAL_JUMP)  ; LAB_0051ad2e
    JMP 0x0051976f                      ; 0051afc8
        ;   XREF to: 0051976f (UNCONDITIONAL_JUMP)  ; LAB_0051976f
    MOV EDI,0x3f800000                  ; 0051afcd
        ;   Label: LAB_0051afcd
    MOV dword ptr [EBX + 0x20cf0],0x0   ; 0051afd2
    MOV dword ptr [ESP + 0x48],EDI      ; 0051afdc
    JMP 0x005197b1                      ; 0051afe0
        ;   XREF to: 005197b1 (UNCONDITIONAL_JUMP)  ; LAB_005197b1
    CMP dword ptr [EBX + 0x20c20],0x0   ; 0051afe5
        ;   Label: LAB_0051afe5
    JNZ 0x00519962                      ; 0051afec
        ;   XREF to: 00519962 (CONDITIONAL_JUMP)  ; LAB_00519962
    CMP dword ptr [ESP + 0x4ac],0x0     ; 0051aff2
    JZ 0x005199e6                       ; 0051affa
        ;   XREF to: 005199e6 (CONDITIONAL_JUMP)  ; LAB_005199e6
    LEA EAX,[EBX + 0x158]               ; 0051b000
    PUSH EAX                            ; 0051b006
    LEA EDI,[ESP + 0x41c]               ; 0051b007
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0051b00e
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV ECX,dword ptr [EAX + 0x24]      ; 0051b013
    LEA EAX,[EBX + 0x249c]              ; 0051b016
    LEA ESI,[ESP + 0x2cc]               ; 0051b01c
    ADD ESP,0x4                         ; 0051b023
    FLD float ptr [EAX]                 ; 0051b026
    FLD float ptr [EAX + 0x4]           ; 0051b028
    LEA EDX,[EBX + 0x250c]              ; 0051b02b
    FLD float ptr [EAX + 0x8]           ; 0051b031
    FXCH ST2                            ; 0051b034
    FADD float ptr [EDX]                ; 0051b036
    FXCH                                ; 0051b038
    FADD float ptr [EDX + 0x4]          ; 0051b03a
    FXCH ST2                            ; 0051b03d
    FADD float ptr [EDX + 0x8]          ; 0051b03f
    FXCH                                ; 0051b042
    FSTP float ptr [ESP + 0x2c8]        ; 0051b044
    FXCH                                ; 0051b04b
    FSTP float ptr [ESP + 0x2cc]        ; 0051b04d
    FSTP float ptr [ESP + 0x2d0]        ; 0051b054
    MOVSD ES:EDI,ESI                    ; 0051b05b
    MOVSD ES:EDI,ESI                    ; 0051b05c
    MOVSD ES:EDI,ESI                    ; 0051b05d
    MOV dword ptr [EAX + 0x8],0x0       ; 0051b05e
    MOV ESI,dword ptr [EAX + 0x8]       ; 0051b065
    MOV dword ptr [EAX + 0x4],ESI       ; 0051b068
    MOV ESI,dword ptr [EAX + 0x4]       ; 0051b06b
    MOV dword ptr [EAX],ESI             ; 0051b06e
    MOV dword ptr [EDX + 0x8],0x0       ; 0051b070
    MOV dword ptr [ESP + 0x4a0],ECX     ; 0051b077
    MOV EAX,dword ptr [EDX + 0x8]       ; 0051b07e
    MOV dword ptr [EDX + 0x4],EAX       ; 0051b081
    MOV EAX,dword ptr [EDX + 0x4]       ; 0051b084
    MOV dword ptr [EDX],EAX             ; 0051b087
    CMP ECX,0x1a                        ; 0051b089
    JZ 0x0051b2bf                       ; 0051b08c
        ;   XREF to: 0051b2bf (CONDITIONAL_JUMP)  ; LAB_0051b2bf
    CMP ECX,0x1b                        ; 0051b092
    JNZ 0x0051b2fa                      ; 0051b095
        ;   XREF to: 0051b2fa (CONDITIONAL_JUMP)  ; LAB_0051b2fa
    FLD float ptr [EBP + 0x18]          ; 0051b09b
    XOR EDX,EDX                         ; 0051b09e
    FMUL double ptr [0x005cd1a7]        ; 0051b0a0 | DAT_005cd1a7
    MOV dword ptr [ESP + 0x420],EDX     ; 0051b0a6
    MOV dword ptr [ESP + 0x41c],EDX     ; 0051b0ad
    MOV dword ptr [ESP + 0x418],EDX     ; 0051b0b4
    FSUBR float ptr [EBX + 0x251c]      ; 0051b0bb
        ;   Label: LAB_0051b0bb
    FSTP float ptr [EBX + 0x251c]       ; 0051b0c1
        ;   Label: LAB_0051b0c1
    LEA EAX,[EBX + 0x20c6c]             ; 0051b0c7
    PUSH EAX                            ; 0051b0cd
    PUSH EBX                            ; 0051b0ce
    LEA ESI,[ESP + 0x2b8]               ; 0051b0cf
    LEA EDI,[ESP + 0x27c]               ; 0051b0d6
    CALL core_actor.cpp_FUN_00408b40    ; 0051b0dd
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x2b8]               ; 0051b0e2
    ADD ESP,0x8                         ; 0051b0e9
    LEA EAX,[EBX + 0x2518]              ; 0051b0ec
    MOVSD ES:EDI,ESI                    ; 0051b0f2
    MOVSD ES:EDI,ESI                    ; 0051b0f3
    MOVSD ES:EDI,ESI                    ; 0051b0f4
    FLD float ptr [EBP + 0x18]          ; 0051b0f5
    FLD float ptr [EAX]                 ; 0051b0f8
    FMUL ST1                            ; 0051b0fa
    FLD float ptr [EAX + 0x4]           ; 0051b0fc
    FMUL ST2                            ; 0051b0ff
    FLD float ptr [EAX + 0x8]           ; 0051b101
    FMULP ST3                           ; 0051b104
    FLD float ptr [ESP + 0x418]         ; 0051b106
    FLD float ptr [ESP + 0x41c]         ; 0051b10d
    FLD float ptr [ESP + 0x420]         ; 0051b114
    LEA EDI,[ESP + 0x268]               ; 0051b11b
    LEA ESI,[ESP + 0x178]               ; 0051b122
    LEA EAX,[ESP + 0x418]               ; 0051b129
    FXCH ST4                            ; 0051b130
    FSTP float ptr [ESP + 0x178]        ; 0051b132
    FXCH ST2                            ; 0051b139
    FSTP float ptr [ESP + 0x17c]        ; 0051b13b
    FXCH ST3                            ; 0051b142
    FSTP float ptr [ESP + 0x180]        ; 0051b144
    MOVSD ES:EDI,ESI                    ; 0051b14b
    MOVSD ES:EDI,ESI                    ; 0051b14c
    MOVSD ES:EDI,ESI                    ; 0051b14d
    PUSH EAX                            ; 0051b14e
    FLD float ptr [ESP + 0x26c]         ; 0051b14f
    FLD float ptr [ESP + 0x270]         ; 0051b156
    FLD float ptr [ESP + 0x274]         ; 0051b15d
    LEA EDI,[ESP + 0x368]               ; 0051b164
    LEA ESI,[ESP + 0x428]               ; 0051b16b
    FXCH ST2                            ; 0051b172
    FADD float ptr [ESP + 0x278]        ; 0051b174
    FXCH                                ; 0051b17b
    FADD float ptr [ESP + 0x27c]        ; 0051b17d
    FXCH ST2                            ; 0051b184
    FADD float ptr [ESP + 0x280]        ; 0051b186
    FXCH                                ; 0051b18d
    FSTP float ptr [ESP + 0x428]        ; 0051b18f
    FXCH                                ; 0051b196
    FSTP float ptr [ESP + 0x42c]        ; 0051b198
    FSTP float ptr [ESP + 0x430]        ; 0051b19f
    MOVSD ES:EDI,ESI                    ; 0051b1a6
    MOVSD ES:EDI,ESI                    ; 0051b1a7
    MOVSD ES:EDI,ESI                    ; 0051b1a8
    PUSH EBX                            ; 0051b1a9
    FXCH ST2                            ; 0051b1aa
    FADD float ptr [ESP + 0x36c]        ; 0051b1ac
    FXCH ST2                            ; 0051b1b3
    FADD float ptr [ESP + 0x370]        ; 0051b1b5
    FXCH                                ; 0051b1bc
    FADD float ptr [ESP + 0x374]        ; 0051b1be
    FXCH ST2                            ; 0051b1c5
    FSTP float ptr [ESP + 0x420]        ; 0051b1c7
    FSTP float ptr [ESP + 0x424]        ; 0051b1ce
    FSTP float ptr [ESP + 0x428]        ; 0051b1d5
    MOV EAX,dword ptr [EBX + 0x251c]    ; 0051b1dc
    MOV dword ptr [EBX + 0x20d00],EAX   ; 0051b1e2
    CALL core_charactr.cpp_FUN_0042c230 ; 0051b1e8
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    FLD float ptr [EBX + 0x2504]        ; 0051b1ed
    FADD double ptr [0x005cd1af]        ; 0051b1f3 | DAT_005cd1af
    ADD ESP,0x8                         ; 0051b1f9
    FLD float ptr [EBX + 0x24]          ; 0051b1fc
    FCOMPP                              ; 0051b1ff
    FNSTSW AX                           ; 0051b201
    SAHF                                ; 0051b203
    JNC 0x0051b210                      ; 0051b204
        ;   XREF to: 0051b210 (CONDITIONAL_JUMP)  ; LAB_0051b210
    MOV dword ptr [EBX + 0x2500],0x1    ; 0051b206
    CMP dword ptr [ESP + 0x4a0],0x1a    ; 0051b210
        ;   Label: LAB_0051b210
    JNZ 0x0051b2ad                      ; 0051b218
        ;   XREF to: 0051b2ad (CONDITIONAL_JUMP)  ; LAB_0051b2ad
    CMP dword ptr [EBX + 0x2500],0x0    ; 0051b21e
    JZ 0x0051b2ad                       ; 0051b225
        ;   XREF to: 0051b2ad (CONDITIONAL_JUMP)  ; LAB_0051b2ad
    SUB ESP,0x8                         ; 0051b22b
    FLD float ptr [EBX + 0x251c]        ; 0051b22e
    FSTP double ptr [ESP]               ; 0051b234
    PUSH 0x5cd10d                       ; 0051b237 | = "Splat at %3.2f fps\n"
    MOV EDI,dword ptr [0x005f1690]      ; 0051b23c | g_CConsolePtr
    PUSH EDI                            ; 0051b242 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0051b243
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    FLD float ptr [EBX + 0x20d00]       ; 0051b248
    ADD ESP,0x10                        ; 0051b24e
    FCHS                                ; 0051b251
    FST float ptr [ESP + 0x44]          ; 0051b253
    FST double ptr [ESP + 0x30]         ; 0051b257
    FCOMP double ptr [0x005cd1b7]       ; 0051b25b | DAT_005cd1b7
    FNSTSW AX                           ; 0051b261
    SAHF                                ; 0051b263
    JNC 0x0051b308                      ; 0051b264
        ;   XREF to: 0051b308 (CONDITIONAL_JUMP)  ; LAB_0051b308
    CMP dword ptr [ESP + 0x4a0],0x1a    ; 0051b26a
    JNZ 0x0051b287                      ; 0051b272
        ;   XREF to: 0051b287 (CONDITIONAL_JUMP)  ; LAB_0051b287
    PUSH 0x1                            ; 0051b274
    PUSH 0x1b                           ; 0051b276
    LEA EAX,[EBX + 0x158]               ; 0051b278
        ;   Label: LAB_0051b278
    PUSH EAX                            ; 0051b27e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0051b27f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051b284
    FLD float ptr [ESP + 0x44]          ; 0051b287
        ;   Label: LAB_0051b287
    FMUL float ptr [0x005cd1d7]         ; 0051b28b | DAT_005cd1d7
    SUB ESP,0x4                         ; 0051b291
    FLD1                                ; 0051b294
    FADDP                               ; 0051b296
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051b298
    FSTP float ptr [ESP]                ; 0051b29e
    PUSH 0x2cfd900                      ; 0051b2a1 | DAT_02cfd900
    PUSH EBX                            ; 0051b2a6
    CALL dword ptr [EAX + 0x24]         ; 0051b2a7
    ADD ESP,0xc                         ; 0051b2aa
    CMP dword ptr [EBX + 0x2500],0x0    ; 0051b2ad
        ;   Label: LAB_0051b2ad
    JZ 0x0051b3b8                       ; 0051b2b4
        ;   XREF to: 0051b3b8 (CONDITIONAL_JUMP)  ; LAB_0051b3b8
    JMP 0x005199dc                      ; 0051b2ba
        ;   XREF to: 005199dc (UNCONDITIONAL_JUMP)  ; LAB_005199dc
    FLD float ptr [EBP + 0x18]          ; 0051b2bf
        ;   Label: LAB_0051b2bf
    XOR EDI,EDI                         ; 0051b2c2
    FMUL double ptr [0x005cd1a7]        ; 0051b2c4 | DAT_005cd1a7
    MOV dword ptr [ESP + 0x420],EDI     ; 0051b2ca
    MOV dword ptr [ESP + 0x41c],EDI     ; 0051b2d1
    MOV dword ptr [ESP + 0x418],EDI     ; 0051b2d8
    FLD float ptr [EBX + 0x251c]        ; 0051b2df
    FXCH                                ; 0051b2e5
    FSUBR ST0,ST1                       ; 0051b2e7
    MOV dword ptr [EBX + 0x20c84],0x461c3f9a ; 0051b2e9
    FSTP ST1                            ; 0051b2f3
    JMP 0x0051b0c1                      ; 0051b2f5
        ;   XREF to: 0051b0c1 (UNCONDITIONAL_JUMP)  ; LAB_0051b0c1
    FLD float ptr [EBP + 0x18]          ; 0051b2fa
        ;   Label: LAB_0051b2fa
    FMUL double ptr [0x005cd1a7]        ; 0051b2fd | DAT_005cd1a7
    JMP 0x0051b0bb                      ; 0051b303
        ;   XREF to: 0051b0bb (UNCONDITIONAL_JUMP)  ; LAB_0051b0bb
    LEA EAX,[ESP + 0x5c]                ; 0051b308
        ;   Label: LAB_0051b308
    PUSH EAX                            ; 0051b30c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0051b30d
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0051b312
    FLD double ptr [ESP + 0x30]         ; 0051b315
    FADD double ptr [0x005cd1bf]        ; 0051b319 | DAT_005cd1bf
    FMUL double ptr [0x005cd1c7]        ; 0051b31f | DAT_005cd1c7
    FMUL double ptr [0x005cd1cf]        ; 0051b325 | DAT_005cd1cf
    FSTP float ptr [ESP + 0x60]         ; 0051b32b
    MOV EAX,dword ptr [ESP + 0x60]      ; 0051b32f
    XOR ESI,ESI                         ; 0051b333
    CMP EAX,0x42c80000                  ; 0051b335
    JLE 0x0051b34a                      ; 0051b33a
        ;   XREF to: 0051b34a (CONDITIONAL_JUMP)  ; LAB_0051b34a
    MOV EDX,0x461c3c00                  ; 0051b33c
    MOV ESI,0x1                         ; 0051b341
    MOV dword ptr [ESP + 0x60],EDX      ; 0051b346
    LEA EAX,[ESP + 0x5c]                ; 0051b34a
        ;   Label: LAB_0051b34a
    PUSH EAX                            ; 0051b34e
    MOV EDX,dword ptr [EBX + 0x154]     ; 0051b34f
    PUSH EBX                            ; 0051b355
    MOV dword ptr [EBX + 0xcdcc],0x0    ; 0051b356
    CALL dword ptr [EDX + 0x108]        ; 0051b360
    FLD float ptr [EBX + 0x2538]        ; 0051b366
    FLDZ                                ; 0051b36c
    ADD ESP,0x8                         ; 0051b36e
    FCOMPP                              ; 0051b371
    FNSTSW AX                           ; 0051b373
    SAHF                                ; 0051b375
    JNC 0x0051b37c                      ; 0051b376
        ;   XREF to: 0051b37c (CONDITIONAL_JUMP)  ; LAB_0051b37c
    TEST ESI,ESI                        ; 0051b378
    JZ 0x0051b3af                       ; 0051b37a
        ;   XREF to: 0051b3af (CONDITIONAL_JUMP)  ; LAB_0051b3af
    PUSH 0x1                            ; 0051b37c
        ;   Label: LAB_0051b37c
    PUSH 0x1d                           ; 0051b37e
    LEA EAX,[EBX + 0x158]               ; 0051b380
    PUSH EAX                            ; 0051b386
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0051b387
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051b38c
    PUSH 0x5cd121                       ; 0051b38f | = "fall-?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051b394
    PUSH EBX                            ; 0051b39a
    CALL dword ptr [EAX + 0x2c]         ; 0051b39b
    ADD ESP,0x8                         ; 0051b39e
    CMP dword ptr [EBX + 0x2500],0x0    ; 0051b3a1
    JZ 0x0051b3b8                       ; 0051b3a8
        ;   XREF to: 0051b3b8 (CONDITIONAL_JUMP)  ; LAB_0051b3b8
    JMP 0x005199dc                      ; 0051b3aa
        ;   XREF to: 005199dc (UNCONDITIONAL_JUMP)  ; LAB_005199dc
    PUSH 0x1                            ; 0051b3af
        ;   Label: LAB_0051b3af
    PUSH 0x1c                           ; 0051b3b1
    JMP 0x0051b278                      ; 0051b3b3
        ;   XREF to: 0051b278 (UNCONDITIONAL_JUMP)  ; LAB_0051b278
    FLD float ptr [EBX + 0x20c84]       ; 0051b3b8
        ;   Label: LAB_0051b3b8
    MOV EDI,dword ptr [ESP + 0x4a0]     ; 0051b3be
    MOV EAX,[0x005e351c]                ; 0051b3c5 | DAT_005e351c
    FADD float ptr [EBP + 0x18]         ; 0051b3ca
    MOV dword ptr [ESP + 0x58],EAX      ; 0051b3cd
    FSTP float ptr [EBX + 0x20c84]      ; 0051b3d1
    CMP EDI,0x4                         ; 0051b3d7
    JNZ 0x0051b3ee                      ; 0051b3da
        ;   XREF to: 0051b3ee (CONDITIONAL_JUMP)  ; LAB_0051b3ee
    FLD float ptr [ESP + 0x58]          ; 0051b3dc
    FLD ST0                             ; 0051b3e0
    FMUL double ptr [0x005cd14f]        ; 0051b3e2 | DAT_005cd14f
    FSTP ST1                            ; 0051b3e8
    FSTP float ptr [ESP + 0x58]         ; 0051b3ea
    FLD float ptr [EBX + 0x20c84]       ; 0051b3ee
        ;   Label: LAB_0051b3ee
    FCOMP float ptr [ESP + 0x58]        ; 0051b3f4
    FNSTSW AX                           ; 0051b3f8
    SAHF                                ; 0051b3fa
    JBE 0x0051b429                      ; 0051b3fb
        ;   XREF to: 0051b429 (CONDITIONAL_JUMP)  ; LAB_0051b429
    CMP dword ptr [ESP + 0x4a0],0x1a    ; 0051b3fd
        ;   Label: LAB_0051b3fd
    JZ 0x0051b41a                       ; 0051b405
        ;   XREF to: 0051b41a (CONDITIONAL_JUMP)  ; LAB_0051b41a
    PUSH 0x1                            ; 0051b407
    PUSH 0x1a                           ; 0051b409
    LEA EAX,[EBX + 0x158]               ; 0051b40b
    PUSH EAX                            ; 0051b411
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0051b412
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051b417
    MOV dword ptr [EBX + 0x2500],0x0    ; 0051b41a
        ;   Label: LAB_0051b41a
    JMP 0x005199e6                      ; 0051b424
        ;   XREF to: 005199e6 (UNCONDITIONAL_JUMP)  ; LAB_005199e6
    FLD float ptr [EBX + 0x20d00]       ; 0051b429
        ;   Label: LAB_0051b429
    FCOMP double ptr [0x005cd1bf]       ; 0051b42f | DAT_005cd1bf
    FNSTSW AX                           ; 0051b435
    SAHF                                ; 0051b437
    JC 0x0051b3fd                       ; 0051b438
        ;   XREF to: 0051b3fd (CONDITIONAL_JUMP)  ; LAB_0051b3fd
    JMP 0x005199e6                      ; 0051b43a
        ;   XREF to: 005199e6 (UNCONDITIONAL_JUMP)  ; LAB_005199e6
    CMP dword ptr [EBX + 0xcde0],0x0    ; 0051b43f
        ;   Label: LAB_0051b43f
    JZ 0x00519a5b                       ; 0051b446
        ;   XREF to: 00519a5b (CONDITIONAL_JUMP)  ; LAB_00519a5b
    CMP dword ptr [EBX + 0x20bcc],0x0   ; 0051b44c
    JNZ 0x00519a5b                      ; 0051b453
        ;   XREF to: 00519a5b (CONDITIONAL_JUMP)  ; LAB_00519a5b
    JMP 0x00519a1a                      ; 0051b459
        ;   XREF to: 00519a1a (UNCONDITIONAL_JUMP)  ; LAB_00519a1a
    CMP dword ptr [EBX + 0x25b0],0x0    ; 0051b45e
        ;   Label: LAB_0051b45e
    JNZ 0x0051b476                      ; 0051b465
        ;   XREF to: 0051b476 (CONDITIONAL_JUMP)  ; LAB_0051b476
    MOV dword ptr [EBX + 0x20bcc],0x1   ; 0051b467
        ;   Label: LAB_0051b467
    JMP 0x00519a5b                      ; 0051b471
        ;   XREF to: 00519a5b (UNCONDITIONAL_JUMP)  ; LAB_00519a5b
    LEA EAX,[EBX + 0x206e8]             ; 0051b476
        ;   Label: LAB_0051b476
    MOV EAX,dword ptr [EAX + 0x338]     ; 0051b47c
    CMP dword ptr [EAX + 0x578],0x1     ; 0051b482
    JZ 0x0051b467                       ; 0051b489
        ;   XREF to: 0051b467 (CONDITIONAL_JUMP)  ; LAB_0051b467
    JMP 0x00519a5b                      ; 0051b48b
        ;   XREF to: 00519a5b (UNCONDITIONAL_JUMP)  ; LAB_00519a5b
    MOV ESI,dword ptr [EBX + 0x20c24]   ; 0051b490
        ;   Label: LAB_0051b490
    TEST ESI,ESI                        ; 0051b496
    JZ 0x0051b4a7                       ; 0051b498
        ;   XREF to: 0051b4a7 (CONDITIONAL_JUMP)  ; LAB_0051b4a7
    CMP dword ptr [ESI + 0x578],0x1     ; 0051b49a
    JNZ 0x00519a8c                      ; 0051b4a1
        ;   XREF to: 00519a8c (CONDITIONAL_JUMP)  ; LAB_00519a8c
    PUSH 0x5cd139                       ; 0051b4a7 | = "CLightActor"
        ;   Label: LAB_0051b4a7
    LEA EAX,[EBX + 0x206e8]             ; 0051b4ac
    PUSH EAX                            ; 0051b4b2
    CALL core_inv.cpp_FUN_004dba80      ; 0051b4b3
        ;   XREF to: 004dba80 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dba80()
    ADD ESP,0x8                         ; 0051b4b8
    TEST EAX,EAX                        ; 0051b4bb
    JZ 0x00519a8c                       ; 0051b4bd
        ;   XREF to: 00519a8c (CONDITIONAL_JUMP)  ; LAB_00519a8c
    MOV dword ptr [EBX + 0x20b64],0x8   ; 0051b4c3
    JMP 0x00519a8c                      ; 0051b4cd
        ;   XREF to: 00519a8c (UNCONDITIONAL_JUMP)  ; LAB_00519a8c
    MOV ESI,dword ptr [EAX + 0x2f0]     ; 0051b4d2
        ;   Label: LAB_0051b4d2
    TEST ESI,ESI                        ; 0051b4d8
    JNZ 0x00519b7c                      ; 0051b4da
        ;   XREF to: 00519b7c (CONDITIONAL_JUMP)  ; LAB_00519b7c
    MOV EAX,[0x005fe9dc]                ; 0051b4e0 | g_CGamePtr
    MOV dword ptr [EAX + 0x26c],ESI     ; 0051b4e5 | g_CGameInstance.field620_0x26c
    JMP 0x00519b7c                      ; 0051b4eb
        ;   XREF to: 00519b7c (UNCONDITIONAL_JUMP)  ; LAB_00519b7c
    FLD float ptr [EBP + 0x18]          ; 0051b4f0
        ;   Label: LAB_0051b4f0
    FDIV float ptr [0x005e34f0]         ; 0051b4f3 | DAT_005e34f0
    FSUBR float ptr [EBX + 0x20bd0]     ; 0051b4f9
    FST float ptr [EBX + 0x20bd0]       ; 0051b4ff
    FLDZ                                ; 0051b505
    FCOMPP                              ; 0051b507
    FNSTSW AX                           ; 0051b509
    SAHF                                ; 0051b50b
    JBE 0x00519bc7                      ; 0051b50c
        ;   XREF to: 00519bc7 (CONDITIONAL_JUMP)  ; LAB_00519bc7
    MOV dword ptr [EBX + 0x20bd0],0x0   ; 0051b512
    JMP 0x00519bc7                      ; 0051b51c
        ;   XREF to: 00519bc7 (UNCONDITIONAL_JUMP)  ; LAB_00519bc7
    PUSH EBX                            ; 0051b521
        ;   Label: LAB_0051b521
    CALL core_hero.cpp_FUN_004d3850     ; 0051b522
        ;   XREF to: 004d3850 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004d3850(CHero * this_ptr)
    ADD ESP,0x4                         ; 0051b527
    JMP 0x00519e26                      ; 0051b52a
        ;   XREF to: 00519e26 (UNCONDITIONAL_JUMP)  ; LAB_00519e26
    PUSH EBX                            ; 0051b52f
        ;   Label: LAB_0051b52f
    CALL core_hero.cpp_FUN_004d3210     ; 0051b530
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 0051b535
    JMP 0x00519ee1                      ; 0051b538
        ;   XREF to: 00519ee1 (UNCONDITIONAL_JUMP)  ; LAB_00519ee1
    MOV dword ptr [EBX + 0xfc],0x1      ; 0051b53d
        ;   Label: LAB_0051b53d
    MOV ESP,EBP                         ; 0051b547
    POP EBP                             ; 0051b549
    POP EDI                             ; 0051b54a
    POP ESI                             ; 0051b54b
    POP EBX                             ; 0051b54c
    RET                                 ; 0051b54d

