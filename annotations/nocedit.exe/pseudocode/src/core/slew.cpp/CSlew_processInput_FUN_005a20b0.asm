; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_slew_cpp_CSlew_processInput_FUN_005a20b0(CSlew *this_ptr)
;
; Parameters:
; CSlew *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
;
; XREF[13]:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 at 0040d0fb
;   core_course.cpp_CCourse_preview_FUN_00443bc0 at 0044409c
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da299
;   core_manpuz.cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440 at 0050b4c9
;   core_msnedit.cpp_CDemonMission_FUN_0053e220 at 0053e57e
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 00539c90
;   core_platfrm.cpp_CPlatform_processInEditor_FUN_0054ea00 at 0054ed90
;   core_setedit.cpp_CDemonSet_FUN_0057a940 at 0057aa44
;   core_setedit.cpp_CDemonSet_FUN_0057ae50 at 0057af8c
;   core_setedit.cpp_CDemonSet_FUN_0057d660 at 0057dcc4
;   ... and 3 more
;
; Referenced Globals:
;   double DOUBLE_0064f112 = 10
;   double DOUBLE_0064f11a = 0.0500000000000000
;   double DOUBLE_0064f122 = 3.14159265350000
;   double DOUBLE_0064f12a = 8
;   double DOUBLE_0064f132 = 30
;   double DOUBLE_0064f13a = -1.57079632675000
;   double DOUBLE_0064f142 = 1.57079632675000
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   undefined4 g_CGameInstance.delta_time_float
;   CKeys g_CKeysInstance
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a20b0
        ;   Label: core_slew.cpp_CSlew_processInput_FUN_005a20b0
    PUSH EBP                            ; 005a20b1
    MOV EBP,ESP                         ; 005a20b2
    SUB ESP,0x24                        ; 005a20b4
    AND ESP,0xfffffff8                  ; 005a20b7
    MOV EBX,dword ptr [EBP + 0xc]       ; 005a20ba
    MOV EAX,[0x0067b654]                ; 005a20bd | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x264]     ; 005a20c2 | g_CGameInstance.delta_time_float
    PUSH 0x38                           ; 005a20c8
    MOV dword ptr [ESP + 0xc],EAX       ; 005a20ca
    MOV dword ptr [ESP + 0x8],EAX       ; 005a20ce
    MOV EAX,[0x0067cf44]                ; 005a20d2 | g_CKeysPtr
    PUSH EAX                            ; 005a20d7 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005a20d8 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005a20da
    ADD ESP,0x8                         ; 005a20dc
    TEST EAX,EAX                        ; 005a20df
    JZ 0x005a2377                       ; 005a20e1
        ;   XREF to: 005a2377 (CONDITIONAL_JUMP)  ; LAB_005a2377
    FLD float ptr [ESP + 0x8]           ; 005a20e7
    FMUL double ptr [0x0064f11a]        ; 005a20eb | DOUBLE_0064f11a
    FSTP float ptr [ESP + 0x4]          ; 005a20f1
        ;   Label: LAB_005a20f1
    FLD float ptr [ESP + 0x4]           ; 005a20f5
        ;   Label: LAB_005a20f5
    FLD ST0                             ; 005a20f9
    FMUL double ptr [0x0064f122]        ; 005a20fb | DOUBLE_0064f122
    FLD ST1                             ; 005a2101
    FMUL double ptr [0x0064f12a]        ; 005a2103 | DOUBLE_0064f12a
    PUSH 0x4f                           ; 005a2109
    MOV EAX,[0x0067cf44]                ; 005a210b | g_CKeysPtr
    FXCH ST2                            ; 005a2110
    FMUL double ptr [0x0064f132]        ; 005a2112 | DOUBLE_0064f132
    PUSH EAX                            ; 005a2118 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005a2119 | g_CKeysInstance
    FXCH                                ; 005a211b
    FSTP float ptr [ESP + 0x24]         ; 005a211d
    FXCH                                ; 005a2121
    FSTP float ptr [ESP + 0x8]          ; 005a2123
    FSTP float ptr [ESP + 0x28]         ; 005a2127
    CALL dword ptr [EDX]                ; 005a212b
    ADD ESP,0x8                         ; 005a212d
    TEST EAX,EAX                        ; 005a2130
    JZ 0x005a213e                       ; 005a2132
        ;   XREF to: 005a213e (CONDITIONAL_JUMP)  ; LAB_005a213e
    FLD float ptr [EBX + 0x10]          ; 005a2134
    FSUB float ptr [ESP + 0x1c]         ; 005a2137
    FSTP float ptr [EBX + 0x10]         ; 005a213b
    PUSH 0x51                           ; 005a213e
        ;   Label: LAB_005a213e
    MOV EAX,[0x0067cf44]                ; 005a2140 | g_CKeysPtr
    PUSH EAX                            ; 005a2145 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005a2146 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005a2148
    ADD ESP,0x8                         ; 005a214a
    TEST EAX,EAX                        ; 005a214d
    JZ 0x005a215b                       ; 005a214f
        ;   XREF to: 005a215b (CONDITIONAL_JUMP)  ; LAB_005a215b
    FLD float ptr [EBX + 0x10]          ; 005a2151
    FADD float ptr [ESP + 0x1c]         ; 005a2154
    FSTP float ptr [EBX + 0x10]         ; 005a2158
    PUSH 0x48                           ; 005a215b
        ;   Label: LAB_005a215b
    MOV EAX,[0x0067cf44]                ; 005a215d | g_CKeysPtr
    PUSH EAX                            ; 005a2162 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005a2163 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005a2165
    ADD ESP,0x8                         ; 005a2167
    TEST EAX,EAX                        ; 005a216a
    JZ 0x005a219a                       ; 005a216c
        ;   XREF to: 005a219a (CONDITIONAL_JUMP)  ; LAB_005a219a
    FLD float ptr [EBX + 0x10]          ; 005a216e
    FSINCOS                             ; 005a2171
    FLD float ptr [ESP]                 ; 005a2173
    FXCH ST2                            ; 005a2176
    FMUL ST2                            ; 005a2178
    FXCH                                ; 005a217a
    FMULP ST2                           ; 005a217c
    FLD float ptr [EBX]                 ; 005a217e
    FLD float ptr [EBX + 0x8]           ; 005a2180
    FXCH ST2                            ; 005a2183
    FADD ST0,ST1                        ; 005a2185
    FXCH ST3                            ; 005a2187
    FADD ST0,ST2                        ; 005a2189
    FXCH ST3                            ; 005a218b
    FSTP ST1                            ; 005a218d
    FXCH ST2                            ; 005a218f
    FSTP ST1                            ; 005a2191
    FXCH                                ; 005a2193
    FSTP float ptr [EBX]                ; 005a2195
    FSTP float ptr [EBX + 0x8]          ; 005a2197
    PUSH 0x50                           ; 005a219a
        ;   Label: LAB_005a219a
    MOV EAX,[0x0067cf44]                ; 005a219c | g_CKeysPtr
    PUSH EAX                            ; 005a21a1 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005a21a2 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005a21a4
    ADD ESP,0x8                         ; 005a21a6
    TEST EAX,EAX                        ; 005a21a9
    JZ 0x005a21d9                       ; 005a21ab
        ;   XREF to: 005a21d9 (CONDITIONAL_JUMP)  ; LAB_005a21d9
    FLD float ptr [EBX + 0x10]          ; 005a21ad
    FSINCOS                             ; 005a21b0
    FLD float ptr [ESP]                 ; 005a21b2
    FXCH ST2                            ; 005a21b5
    FMUL ST2                            ; 005a21b7
    FXCH                                ; 005a21b9
    FMULP ST2                           ; 005a21bb
    FLD float ptr [EBX]                 ; 005a21bd
    FLD float ptr [EBX + 0x8]           ; 005a21bf
    FXCH ST2                            ; 005a21c2
    FSUBR ST0,ST1                       ; 005a21c4
    FXCH ST3                            ; 005a21c6
    FSUBR ST0,ST2                       ; 005a21c8
    FXCH ST3                            ; 005a21ca
    FSTP ST1                            ; 005a21cc
    FXCH ST2                            ; 005a21ce
    FSTP ST1                            ; 005a21d0
    FXCH                                ; 005a21d2
    FSTP float ptr [EBX]                ; 005a21d4
    FSTP float ptr [EBX + 0x8]          ; 005a21d6
    PUSH 0x4b                           ; 005a21d9
        ;   Label: LAB_005a21d9
    MOV EAX,[0x0067cf44]                ; 005a21db | g_CKeysPtr
    PUSH EAX                            ; 005a21e0 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005a21e1 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005a21e3
    ADD ESP,0x8                         ; 005a21e5
    TEST EAX,EAX                        ; 005a21e8
    JZ 0x005a2229                       ; 005a21ea
        ;   XREF to: 005a2229 (CONDITIONAL_JUMP)  ; LAB_005a2229
    FLD double ptr [0x0064f13a]         ; 005a21ec | DOUBLE_0064f13a
    FLD float ptr [EBX + 0x10]          ; 005a21f2
    FADD ST0,ST1                        ; 005a21f5
    FSIN                                ; 005a21f7
    FLD float ptr [EBX + 0x10]          ; 005a21f9
    FADDP ST2,ST0                       ; 005a21fc
    FXCH                                ; 005a21fe
    FCOS                                ; 005a2200
    FLD float ptr [ESP]                 ; 005a2202
    FXCH ST2                            ; 005a2205
    FMUL ST2                            ; 005a2207
    FXCH                                ; 005a2209
    FMULP ST2                           ; 005a220b
    FLD float ptr [EBX]                 ; 005a220d
    FLD float ptr [EBX + 0x8]           ; 005a220f
    FXCH ST2                            ; 005a2212
    FADD ST0,ST1                        ; 005a2214
    FXCH ST3                            ; 005a2216
    FADD ST0,ST2                        ; 005a2218
    FXCH ST3                            ; 005a221a
    FSTP ST1                            ; 005a221c
    FXCH ST2                            ; 005a221e
    FSTP ST1                            ; 005a2220
    FXCH                                ; 005a2222
    FSTP float ptr [EBX]                ; 005a2224
    FSTP float ptr [EBX + 0x8]          ; 005a2226
    PUSH 0x4d                           ; 005a2229
        ;   Label: LAB_005a2229
    MOV EAX,[0x0067cf44]                ; 005a222b | g_CKeysPtr
    PUSH EAX                            ; 005a2230 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005a2231 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005a2233
    ADD ESP,0x8                         ; 005a2235
    TEST EAX,EAX                        ; 005a2238
    JZ 0x005a2279                       ; 005a223a
        ;   XREF to: 005a2279 (CONDITIONAL_JUMP)  ; LAB_005a2279
    FLD double ptr [0x0064f142]         ; 005a223c | DOUBLE_0064f142
    FLD float ptr [EBX + 0x10]          ; 005a2242
    FADD ST0,ST1                        ; 005a2245
    FSIN                                ; 005a2247
    FLD float ptr [EBX + 0x10]          ; 005a2249
    FADDP ST2,ST0                       ; 005a224c
    FXCH                                ; 005a224e
    FCOS                                ; 005a2250
    FLD float ptr [ESP]                 ; 005a2252
    FXCH ST2                            ; 005a2255
    FMUL ST2                            ; 005a2257
    FXCH                                ; 005a2259
    FMULP ST2                           ; 005a225b
    FLD float ptr [EBX]                 ; 005a225d
    FLD float ptr [EBX + 0x8]           ; 005a225f
    FXCH ST2                            ; 005a2262
    FADD ST0,ST1                        ; 005a2264
    FXCH ST3                            ; 005a2266
    FADD ST0,ST2                        ; 005a2268
    FXCH ST3                            ; 005a226a
    FSTP ST1                            ; 005a226c
    FXCH ST2                            ; 005a226e
    FSTP ST1                            ; 005a2270
    FXCH                                ; 005a2272
    FSTP float ptr [EBX]                ; 005a2274
    FSTP float ptr [EBX + 0x8]          ; 005a2276
    PUSH 0x10                           ; 005a2279
        ;   Label: LAB_005a2279
    MOV EAX,[0x0067cf44]                ; 005a227b | g_CKeysPtr
    PUSH EAX                            ; 005a2280 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005a2281 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005a2283
    ADD ESP,0x8                         ; 005a2285
    TEST EAX,EAX                        ; 005a2288
    JZ 0x005a2295                       ; 005a228a
        ;   XREF to: 005a2295 (CONDITIONAL_JUMP)  ; LAB_005a2295
    FLD float ptr [EBX + 0x4]           ; 005a228c
    FADD float ptr [ESP]                ; 005a228f
    FSTP float ptr [EBX + 0x4]          ; 005a2292
    PUSH 0x1e                           ; 005a2295
        ;   Label: LAB_005a2295
    MOV EAX,[0x0067cf44]                ; 005a2297 | g_CKeysPtr
    PUSH EAX                            ; 005a229c | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005a229d | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005a229f
    ADD ESP,0x8                         ; 005a22a1
    TEST EAX,EAX                        ; 005a22a4
    JZ 0x005a22b1                       ; 005a22a6
        ;   XREF to: 005a22b1 (CONDITIONAL_JUMP)  ; LAB_005a22b1
    FLD float ptr [EBX + 0x4]           ; 005a22a8
    FSUB float ptr [ESP]                ; 005a22ab
    FSTP float ptr [EBX + 0x4]          ; 005a22ae
    PUSH 0x3f                           ; 005a22b1
        ;   Label: LAB_005a22b1
    MOV EAX,[0x0067cf44]                ; 005a22b3 | g_CKeysPtr
    PUSH EAX                            ; 005a22b8 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005a22b9 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005a22bb
    ADD ESP,0x8                         ; 005a22bd
    TEST EAX,EAX                        ; 005a22c0
    JZ 0x005a22ce                       ; 005a22c2
        ;   XREF to: 005a22ce (CONDITIONAL_JUMP)  ; LAB_005a22ce
    FLD float ptr [EBX + 0xc]           ; 005a22c4
    FSUB float ptr [ESP + 0x1c]         ; 005a22c7
    FSTP float ptr [EBX + 0xc]          ; 005a22cb
    PUSH 0x42                           ; 005a22ce
        ;   Label: LAB_005a22ce
    MOV EAX,[0x0067cf44]                ; 005a22d0 | g_CKeysPtr
    PUSH EAX                            ; 005a22d5 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005a22d6 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005a22d8
    ADD ESP,0x8                         ; 005a22da
    TEST EAX,EAX                        ; 005a22dd
    JZ 0x005a22eb                       ; 005a22df
        ;   XREF to: 005a22eb (CONDITIONAL_JUMP)  ; LAB_005a22eb
    FLD float ptr [EBX + 0xc]           ; 005a22e1
    FADD float ptr [ESP + 0x1c]         ; 005a22e4
    FSTP float ptr [EBX + 0xc]          ; 005a22e8
    PUSH 0x47                           ; 005a22eb
        ;   Label: LAB_005a22eb
    MOV EAX,[0x0067cf44]                ; 005a22ed | g_CKeysPtr
    PUSH EAX                            ; 005a22f2 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005a22f3 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005a22f5
    ADD ESP,0x8                         ; 005a22f7
    TEST EAX,EAX                        ; 005a22fa
    JZ 0x005a2308                       ; 005a22fc
        ;   XREF to: 005a2308 (CONDITIONAL_JUMP)  ; LAB_005a2308
    FLD float ptr [EBX + 0x14]          ; 005a22fe
    FSUB float ptr [ESP + 0x1c]         ; 005a2301
    FSTP float ptr [EBX + 0x14]         ; 005a2305
    PUSH 0x49                           ; 005a2308
        ;   Label: LAB_005a2308
    MOV EAX,[0x0067cf44]                ; 005a230a | g_CKeysPtr
    PUSH EAX                            ; 005a230f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005a2310 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005a2312
    ADD ESP,0x8                         ; 005a2314
    TEST EAX,EAX                        ; 005a2317
    JZ 0x005a2325                       ; 005a2319
        ;   XREF to: 005a2325 (CONDITIONAL_JUMP)  ; LAB_005a2325
    FLD float ptr [EBX + 0x14]          ; 005a231b
    FADD float ptr [ESP + 0x1c]         ; 005a231e
    FSTP float ptr [EBX + 0x14]         ; 005a2322
    PUSH 0xc                            ; 005a2325
        ;   Label: LAB_005a2325
    MOV EAX,[0x0067cf44]                ; 005a2327 | g_CKeysPtr
    PUSH EAX                            ; 005a232c | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005a232d | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005a232f
    ADD ESP,0x8                         ; 005a2331
    TEST EAX,EAX                        ; 005a2334
    JZ 0x005a2342                       ; 005a2336
        ;   XREF to: 005a2342 (CONDITIONAL_JUMP)  ; LAB_005a2342
    FLD float ptr [EBX + 0x18]          ; 005a2338
    FSUB float ptr [ESP + 0x20]         ; 005a233b
    FSTP float ptr [EBX + 0x18]         ; 005a233f
    PUSH 0xd                            ; 005a2342
        ;   Label: LAB_005a2342
    MOV EAX,[0x0067cf44]                ; 005a2344 | g_CKeysPtr
    PUSH EAX                            ; 005a2349 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005a234a | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005a234c
    ADD ESP,0x8                         ; 005a234e
    TEST EAX,EAX                        ; 005a2351
    JZ 0x005a235f                       ; 005a2353
        ;   XREF to: 005a235f (CONDITIONAL_JUMP)  ; LAB_005a235f
    FLD float ptr [EBX + 0x18]          ; 005a2355
    FADD float ptr [ESP + 0x20]         ; 005a2358
    FSTP float ptr [EBX + 0x18]         ; 005a235c
    PUSH 0x4c                           ; 005a235f
        ;   Label: LAB_005a235f
    MOV EAX,[0x0067cf44]                ; 005a2361 | g_CKeysPtr
    PUSH EAX                            ; 005a2366 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005a2367 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005a2369
    ADD ESP,0x8                         ; 005a236b
    TEST EAX,EAX                        ; 005a236e
    JNZ 0x005a23a1                      ; 005a2370
        ;   XREF to: 005a23a1 (CONDITIONAL_JUMP)  ; LAB_005a23a1
    MOV ESP,EBP                         ; 005a2372
    POP EBP                             ; 005a2374
    POP EBX                             ; 005a2375
    RET                                 ; 005a2376
    PUSH 0x2a                           ; 005a2377
        ;   Label: LAB_005a2377
    MOV EAX,[0x0067cf44]                ; 005a2379 | g_CKeysPtr
    PUSH EAX                            ; 005a237e | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005a237f | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005a2381
    ADD ESP,0x8                         ; 005a2383
    TEST EAX,EAX                        ; 005a2386
    JZ 0x005a20f5                       ; 005a2388
        ;   XREF to: 005a20f5 (CONDITIONAL_JUMP)  ; LAB_005a20f5
    FLD float ptr [ESP + 0x8]           ; 005a238e
    FLD ST0                             ; 005a2392
    FMUL double ptr [0x0064f112]        ; 005a2394 | DOUBLE_0064f112
    FSTP ST1                            ; 005a239a
    JMP 0x005a20f1                      ; 005a239c
        ;   XREF to: 005a20f1 (UNCONDITIONAL_JUMP)  ; LAB_005a20f1
    MOV dword ptr [EBX + 0x14],0x0      ; 005a23a1
        ;   Label: LAB_005a23a1
    MOV EAX,dword ptr [EBX + 0x14]      ; 005a23a8
    MOV dword ptr [EBX + 0x10],EAX      ; 005a23ab
    MOV EAX,dword ptr [EBX + 0x10]      ; 005a23ae
    MOV dword ptr [EBX + 0xc],EAX       ; 005a23b1
    MOV ESP,EBP                         ; 005a23b4
    POP EBP                             ; 005a23b6
    POP EBX                             ; 005a23b7
    RET                                 ; 005a23b8

