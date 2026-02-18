; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_CStranger_FUN_005c1fe0(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0xe8]:8  local_e8
; undefined1       Stack[-0xe0]:1  local_e0
; undefined1       Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005c5b90 at 005c5def
;
; Referenced Globals:
;   TerminatedCString s_Climbing_ladder_s_00653ad4
;   double DOUBLE_00653aec = 0.990000000000000
;   float FLOAT_00653af4 = 0.5
;   double DOUBLE_00653afc = 2
;   double DOUBLE_00653b04 = 4
;   double DOUBLE_00653b0c = -1
;   double DOUBLE_00653b14 = 0.261799387791667
;   CConsole* g_CConsolePtr = 0083b1a4
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CConsole g_CConsoleInstance
;   undefined4 g_CLadderClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1fe0
        ;   Label: core_stranger.cpp_CStranger_FUN_005c1fe0
    PUSH ESI                            ; 005c1fe1
    PUSH EDI                            ; 005c1fe2
    PUSH EBP                            ; 005c1fe3
    MOV EBP,ESP                         ; 005c1fe4
    SUB ESP,0xd8                        ; 005c1fe6
    AND ESP,0xfffffff8                  ; 005c1fec
    MOV EDI,dword ptr [EBP + 0x14]      ; 005c1fef
    PUSH 0x0                            ; 005c1ff2
    PUSH EDI                            ; 005c1ff4
    MOV dword ptr [EDI + 0x1fbac],0x0   ; 005c1ff5
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840 ; 005c1fff
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0xdc],EAX      ; 005c2004
    FLD float ptr [ESP + 0xdc]          ; 005c200b
    ADD ESP,0x8                         ; 005c2012
    FCOMP double ptr [0x00653aec]       ; 005c2015 | DOUBLE_00653aec
    FNSTSW AX                           ; 005c201b
    SAHF                                ; 005c201d
    JC 0x005c205f                       ; 005c201e
        ;   XREF to: 005c205f (CONDITIONAL_JUMP)  ; LAB_005c205f
    MOV EDX,dword ptr [EDI + 0x24b4]    ; 005c2020
    TEST EDX,EDX                        ; 005c2026
    JNZ 0x005c205f                      ; 005c2028
        ;   XREF to: 005c205f (CONDITIONAL_JUMP)  ; LAB_005c205f
    CMP dword ptr [EDI + 0x24f8],0x0    ; 005c202a
    JNZ 0x005c205f                      ; 005c2031
        ;   XREF to: 005c205f (CONDITIONAL_JUMP)  ; LAB_005c205f
    MOV dword ptr [ESP + 0xcc],EDX      ; 005c2033
    LEA EAX,[EDI + 0x20]                ; 005c203a
    MOV dword ptr [ESP + 0xd0],EDX      ; 005c203d
    MOV dword ptr [ESP + 0xc8],EAX      ; 005c2044
    MOV EAX,[0x006810c8]                ; 005c204b | g_CDemonSetPtr
        ;   Label: LAB_005c204b
    MOV EDX,dword ptr [ESP + 0xcc]      ; 005c2050
    CMP EDX,dword ptr [EAX + 0x14d154]  ; 005c2057 | g_CDemonSetInstance.actor_count
    JL 0x005c208a                       ; 005c205d
        ;   XREF to: 005c208a (CONDITIONAL_JUMP)  ; LAB_005c208a
    XOR EAX,EAX                         ; 005c205f
        ;   Label: LAB_005c205f
    MOV ESP,EBP                         ; 005c2061
    POP EBP                             ; 005c2063
    POP EDI                             ; 005c2064
    POP ESI                             ; 005c2065
    POP EBX                             ; 005c2066
    RET                                 ; 005c2067
    MOV EBX,dword ptr [ESP + 0xcc]      ; 005c2068
        ;   Label: LAB_005c2068
    MOV ECX,dword ptr [ESP + 0xd0]      ; 005c206f
    INC EBX                             ; 005c2076
    ADD ECX,0x4                         ; 005c2077
    MOV dword ptr [ESP + 0xcc],EBX      ; 005c207a
    MOV dword ptr [ESP + 0xd0],ECX      ; 005c2081
    JMP 0x005c204b                      ; 005c2088
        ;   XREF to: 005c204b (UNCONDITIONAL_JUMP)  ; LAB_005c204b
    MOV EBX,dword ptr [ESP + 0xd0]      ; 005c208a
        ;   Label: LAB_005c208a
    MOV ESI,dword ptr [0x02dcd810]      ; 005c2091 | g_CLadderClassInfo.name_hash
    ADD EAX,EBX                         ; 005c2097
    PUSH ESI                            ; 005c2099
    MOV EAX,dword ptr [EAX + 0x14d158]  ; 005c209a | g_CDemonSetInstance.actors[0]
    PUSH EAX                            ; 005c20a0
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c20a1
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 005c20a6
    ADD ESP,0x8                         ; 005c20a8
    MOV ESI,EAX                         ; 005c20ab
    TEST EAX,EAX                        ; 005c20ad
    JZ 0x005c2068                       ; 005c20af
        ;   XREF to: 005c2068 (CONDITIONAL_JUMP)  ; LAB_005c2068
    FLD float ptr [EDI + 0x24]          ; 005c20b1
    FSUB float ptr [EAX + 0x24]         ; 005c20b4
    FABS                                ; 005c20b7
    FCOMP double ptr [0x00653afc]       ; 005c20b9 | DOUBLE_00653afc
    FNSTSW AX                           ; 005c20bf
    SAHF                                ; 005c20c1
    JA 0x005c2068                       ; 005c20c2
        ;   XREF to: 005c2068 (CONDITIONAL_JUMP)  ; LAB_005c2068
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005c20c4
    PUSH EAX                            ; 005c20cb
    LEA EAX,[ESP + 0x48]                ; 005c20cc
    PUSH EAX                            ; 005c20d0
    PUSH EBX                            ; 005c20d1
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005c20d2
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005c20d7
    FLD float ptr [ESP + 0x4c]          ; 005c20da
    FST double ptr [ESP]                ; 005c20de
    FABS                                ; 005c20e1
    FCOMP double ptr [0x00653b04]       ; 005c20e3 | DOUBLE_00653b04
    FNSTSW AX                           ; 005c20e9
    SAHF                                ; 005c20eb
    JA 0x005c2068                       ; 005c20ec
        ;   XREF to: 005c2068 (CONDITIONAL_JUMP)  ; LAB_005c2068
    FLDZ                                ; 005c20f2
    FCOMP double ptr [ESP]              ; 005c20f4
    FNSTSW AX                           ; 005c20f7
    SAHF                                ; 005c20f9
    JA 0x005c2068                       ; 005c20fa
        ;   XREF to: 005c2068 (CONDITIONAL_JUMP)  ; LAB_005c2068
    LEA EDX,[ESP + 0x8]                 ; 005c2100
    PUSH EDX                            ; 005c2104
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c2105
    PUSH EBX                            ; 005c210b
    CALL dword ptr [EAX + 0x14]         ; 005c210c
    ADD ESP,0x8                         ; 005c210f
    FLD float ptr [ESP + 0x44]          ; 005c2112
    FCOMP float ptr [ESP + 0x14]        ; 005c2116
    FNSTSW AX                           ; 005c211a
    SAHF                                ; 005c211c
    JBE 0x005c213e                      ; 005c211d
        ;   XREF to: 005c213e (CONDITIONAL_JUMP)  ; LAB_005c213e
    FLD float ptr [ESP + 0x14]          ; 005c211f
    FLD1                                ; 005c2123
    FADDP                               ; 005c2125
    FLD float ptr [ESP + 0x44]          ; 005c2127
    FCOMPP                              ; 005c212b
    FNSTSW AX                           ; 005c212d
    SAHF                                ; 005c212f
    JA 0x005c2068                       ; 005c2130
        ;   XREF to: 005c2068 (CONDITIONAL_JUMP)  ; LAB_005c2068
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c2136
    MOV dword ptr [ESP + 0x44],EAX      ; 005c213a
    FLD float ptr [ESP + 0x44]          ; 005c213e
        ;   Label: LAB_005c213e
    FCOMP float ptr [ESP + 0x8]         ; 005c2142
    FNSTSW AX                           ; 005c2146
    SAHF                                ; 005c2148
    JNC 0x005c216c                      ; 005c2149
        ;   XREF to: 005c216c (CONDITIONAL_JUMP)  ; LAB_005c216c
    FLD float ptr [ESP + 0x8]           ; 005c214b
    FADD double ptr [0x00653b0c]        ; 005c214f | DOUBLE_00653b0c
    FLD float ptr [ESP + 0x44]          ; 005c2155
    FCOMPP                              ; 005c2159
    FNSTSW AX                           ; 005c215b
    SAHF                                ; 005c215d
    JC 0x005c2068                       ; 005c215e
        ;   XREF to: 005c2068 (CONDITIONAL_JUMP)  ; LAB_005c2068
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c2164
    MOV dword ptr [ESP + 0x44],EAX      ; 005c2168
    FLD float ptr [ESP + 0x8]           ; 005c216c
        ;   Label: LAB_005c216c
    FADD float ptr [ESP + 0x14]         ; 005c2170
    FST float ptr [ESP + 0x2c]          ; 005c2174
    FLD float ptr [0x00653af4]          ; 005c2178 | FLOAT_00653af4
    FXCH                                ; 005c217e
    FMUL ST1                            ; 005c2180
    FLD float ptr [ESP + 0xc]           ; 005c2182
    FLD float ptr [ESP + 0x10]          ; 005c2186
    FADD float ptr [ESP + 0x1c]         ; 005c218a
    FXCH                                ; 005c218e
    FADD float ptr [ESP + 0x18]         ; 005c2190
    FXCH                                ; 005c2194
    FST float ptr [ESP + 0x34]          ; 005c2196
    FMUL ST3                            ; 005c219a
    FXCH                                ; 005c219c
    FST float ptr [ESP + 0x30]          ; 005c219e
    FMULP ST3                           ; 005c21a2
    FSTP float ptr [ESP + 0x28]         ; 005c21a4
    MOV EAX,dword ptr [ESP + 0x28]      ; 005c21a8
    MOV dword ptr [ESP + 0x4c],EAX      ; 005c21ac
    LEA EAX,[ESP + 0x44]                ; 005c21b0
    PUSH EAX                            ; 005c21b4
    LEA EAX,[ESP + 0x60]                ; 005c21b5
    PUSH EAX                            ; 005c21b9
    FSTP float ptr [ESP + 0x28]         ; 005c21ba
    PUSH ESI                            ; 005c21be
    FSTP float ptr [ESP + 0x30]         ; 005c21bf
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005c21c3
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EBX,EAX                         ; 005c21c8
    LEA EAX,[ESP + 0x50]                ; 005c21ca
    ADD ESP,0xc                         ; 005c21ce
    CMP EAX,EBX                         ; 005c21d1
    JZ 0x005c21e9                       ; 005c21d3
        ;   XREF to: 005c21e9 (CONDITIONAL_JUMP)  ; LAB_005c21e9
    MOV EAX,dword ptr [EBX]             ; 005c21d5
    MOV dword ptr [ESP + 0x44],EAX      ; 005c21d7
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c21db
    MOV dword ptr [ESP + 0x48],EAX      ; 005c21de
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c21e2
    MOV dword ptr [ESP + 0x4c],EAX      ; 005c21e5
    MOV EAX,dword ptr [EDI + 0x44]      ; 005c21e9
        ;   Label: LAB_005c21e9
    MOV dword ptr [ESP + 0xb0],EAX      ; 005c21ec
    MOV EAX,dword ptr [EDI + 0x50]      ; 005c21f3
    MOV dword ptr [ESP + 0xb4],EAX      ; 005c21f6
    MOV EAX,dword ptr [EDI + 0x5c]      ; 005c21fd
    MOV dword ptr [ESP + 0xb8],EAX      ; 005c2200
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005c2207
    MOV dword ptr [ESP + 0x38],EAX      ; 005c220e
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005c2212
    MOV dword ptr [ESP + 0x3c],EAX      ; 005c2219
    MOV EAX,dword ptr [ESP + 0xb8]      ; 005c221d
    MOV dword ptr [ESP + 0x40],EAX      ; 005c2224
    MOV EAX,dword ptr [ESI + 0x44]      ; 005c2228
    MOV dword ptr [ESP + 0xbc],EAX      ; 005c222b
    MOV EAX,dword ptr [ESI + 0x50]      ; 005c2232
    MOV dword ptr [ESP + 0xc0],EAX      ; 005c2235
    FLD float ptr [ESP + 0xb4]          ; 005c223c
    FMUL float ptr [ESP + 0xc0]         ; 005c2243
    MOV EAX,dword ptr [ESI + 0x5c]      ; 005c224a
    FLD float ptr [ESP + 0xb0]          ; 005c224d
    MOV dword ptr [ESP + 0xc4],EAX      ; 005c2254
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005c225b
    FMUL float ptr [ESP + 0xbc]         ; 005c2262
    MOV dword ptr [ESP + 0xa4],EAX      ; 005c2269
    FADDP                               ; 005c2270
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005c2272
    FLD float ptr [ESP + 0xb8]          ; 005c2279
    FMUL float ptr [ESP + 0xc4]         ; 005c2280
    MOV dword ptr [ESP + 0xa8],EAX      ; 005c2287
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005c228e
    FADDP                               ; 005c2295
    MOV dword ptr [ESP + 0xac],EAX      ; 005c2297
    FABS                                ; 005c229e
    FLD double ptr [0x00653b14]         ; 005c22a0 | DOUBLE_00653b14
    FCOS                                ; 005c22a6
    FCOMPP                              ; 005c22a8
    FNSTSW AX                           ; 005c22aa
    SAHF                                ; 005c22ac
    JA 0x005c2068                       ; 005c22ad
        ;   XREF to: 005c2068 (CONDITIONAL_JUMP)  ; LAB_005c2068
    LEA EAX,[ESI + 0x20]                ; 005c22b3
    PUSH EAX                            ; 005c22b6
    LEA EAX,[ESP + 0x54]                ; 005c22b7
    PUSH EAX                            ; 005c22bb
    PUSH EDI                            ; 005c22bc
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005c22bd
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    FLD float ptr [EAX + 0x8]           ; 005c22c2
    FLDZ                                ; 005c22c5
    ADD ESP,0xc                         ; 005c22c7
    FCOMPP                              ; 005c22ca
    FNSTSW AX                           ; 005c22cc
    SAHF                                ; 005c22ce
    JNC 0x005c2068                      ; 005c22cf
        ;   XREF to: 005c2068 (CONDITIONAL_JUMP)  ; LAB_005c2068
    PUSH 0x1                            ; 005c22d5
    PUSH 0x2a                           ; 005c22d7
    LEA EAX,[EDI + 0x158]               ; 005c22d9
    PUSH EAX                            ; 005c22df
    MOV dword ptr [EDI + 0x1fbac],ESI   ; 005c22e0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c22e6
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x40000000                  ; 005c22eb
    ADD ESP,0xc                         ; 005c22f0
    MOV dword ptr [EDI + 0xbe38],0x0    ; 005c22f3
    MOV dword ptr [ESP + 0x94],EAX      ; 005c22fd
    LEA EAX,[ESP + 0x8c]                ; 005c2304
    PUSH EAX                            ; 005c230b
    LEA EAX,[ESP + 0x9c]                ; 005c230c
    PUSH EAX                            ; 005c2313
    LEA EBX,[EDI + 0x20]                ; 005c2314
    XOR EDX,EDX                         ; 005c2317
    PUSH ESI                            ; 005c2319
    MOV dword ptr [ESP + 0x98],EDX      ; 005c231a
    MOV dword ptr [ESP + 0x9c],EDX      ; 005c2321
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005c2328
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    FLD float ptr [EAX]                 ; 005c232d
    FSUB float ptr [EBX]                ; 005c232f
    ADD ESP,0xc                         ; 005c2331
    FSTP float ptr [ESP + 0x80]         ; 005c2334
    FLD float ptr [EAX + 0x4]           ; 005c233b
    FSUB float ptr [EBX + 0x4]          ; 005c233e
    LEA EDX,[EDI + 0x1fe54]             ; 005c2341
    FSTP float ptr [ESP + 0x84]         ; 005c2347
    FLD float ptr [EAX + 0x8]           ; 005c234e
    FSUB float ptr [EBX + 0x8]          ; 005c2351
    LEA EAX,[ESP + 0x80]                ; 005c2354
    FSTP float ptr [ESP + 0x88]         ; 005c235b
    CMP EDX,EAX                         ; 005c2362
    JZ 0x005c2383                       ; 005c2364
        ;   XREF to: 005c2383 (CONDITIONAL_JUMP)  ; LAB_005c2383
    MOV EAX,dword ptr [ESP + 0x80]      ; 005c2366
    MOV dword ptr [EDX],EAX             ; 005c236d
    MOV EAX,dword ptr [ESP + 0x84]      ; 005c236f
    MOV dword ptr [EDX + 0x4],EAX       ; 005c2376
    MOV EAX,dword ptr [ESP + 0x88]      ; 005c2379
    MOV dword ptr [EDX + 0x8],EAX       ; 005c2380
    LEA EAX,[EDI + 0x20]                ; 005c2383
        ;   Label: LAB_005c2383
    FLD float ptr [ESP + 0x44]          ; 005c2386
    FSUB float ptr [EAX]                ; 005c238a
    FLD float ptr [ESP + 0x48]          ; 005c238c
    FXCH                                ; 005c2390
    FSTP float ptr [ESP + 0x74]         ; 005c2392
    FSUB float ptr [EAX + 0x4]          ; 005c2396
    FLD float ptr [ESP + 0x4c]          ; 005c2399
    FXCH                                ; 005c239d
    FSTP float ptr [ESP + 0x78]         ; 005c239f
    FSUB float ptr [EAX + 0x8]          ; 005c23a3
    LEA EAX,[ESP + 0x74]                ; 005c23a6
    PUSH EAX                            ; 005c23aa
    LEA EAX,[ESP + 0x6c]                ; 005c23ab
    PUSH EAX                            ; 005c23af
    FSTP float ptr [ESP + 0x84]         ; 005c23b0
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005c23b7
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005c23bc
    PUSH ESI                            ; 005c23bf
    MOV EDX,dword ptr [0x0066e8e0]      ; 005c23c0 | g_CConsoleInstance | g_CConsolePtr
    PUSH 0x653ad4                       ; 005c23c6 | = "Climbing ladder %s\n"
    FLD float ptr [EAX + 0x4]           ; 005c23cb
    PUSH EDX                            ; 005c23ce | g_CConsoleInstance
    FSTP float ptr [EDI + 0x1fe60]      ; 005c23cf
    MOV dword ptr [EDI + 0x1fe64],0x3f800000 ; 005c23d5
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005c23df
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    MOV EAX,0x1                         ; 005c23e4
    ADD ESP,0xc                         ; 005c23e9
    MOV ESP,EBP                         ; 005c23ec
    POP EBP                             ; 005c23ee
    POP EDI                             ; 005c23ef
    POP ESI                             ; 005c23f0
    POP EBX                             ; 005c23f1
    RET                                 ; 005c23f2

