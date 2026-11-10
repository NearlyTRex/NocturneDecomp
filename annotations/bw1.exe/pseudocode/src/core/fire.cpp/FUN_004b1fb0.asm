; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004b1fb0(CCrater *param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createCrater_FUN_004b6f30 at 004b6f4e
;
; Referenced Globals:
;   undefined4 DAT_005df3e4
;   undefined4 DAT_005df3ec
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_fire.cpp_CCrater_render_FUN_004b23a0
;   core_setcolid.cpp_FUN_005562c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1fb0
        ;   Label: core_fire.cpp_FUN_004b1fb0
    PUSH ESI                            ; 004b1fb1
    PUSH EDI                            ; 004b1fb2
    PUSH EBP                            ; 004b1fb3
    SUB ESP,0x68                        ; 004b1fb4
    MOV EBP,dword ptr [ESP + 0x7c]      ; 004b1fb7
    MOV EBX,dword ptr [ESP + 0x80]      ; 004b1fbb
    LEA EAX,[EBP + 0xc]                 ; 004b1fc2
    CMP EAX,EBX                         ; 004b1fc5
    JZ 0x004b1fd9                       ; 004b1fc7
        ;   XREF to: 004b1fd9 (CONDITIONAL_JUMP)  ; LAB_004b1fd9
    MOV EDX,dword ptr [EBX]             ; 004b1fc9
    MOV dword ptr [EAX],EDX             ; 004b1fcb
    MOV EDX,dword ptr [EBX + 0x4]       ; 004b1fcd
    MOV dword ptr [EAX + 0x4],EDX       ; 004b1fd0
    MOV EDX,dword ptr [EBX + 0x8]       ; 004b1fd3
    MOV dword ptr [EAX + 0x8],EDX       ; 004b1fd6
    PUSH EBP                            ; 004b1fd9
        ;   Label: LAB_004b1fd9
    CALL core_fire.cpp_CCrater_render_FUN_004b23a0 ; 004b1fda
        ;   XREF to: 004b23a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_render_FUN_004b23a0(CCrater * this_ptr)
    ADD ESP,0x4                         ; 004b1fdf
    LEA EAX,[EBP + 0xc]                 ; 004b1fe2
    PUSH 0x0                            ; 004b1fe5
    MOV dword ptr [EBP],0x1             ; 004b1fe7
    PUSH EAX                            ; 004b1fee
    MOV EDX,dword ptr [0x00622c18]      ; 004b1fef | g_CDemonSetPtr
    MOV dword ptr [EBP + 0x4],0x0       ; 004b1ff5
    PUSH EDX                            ; 004b1ffc | g_CDemonSetInstance
    MOV dword ptr [EBP + 0x8],0x3dcccccd ; 004b1ffd
    MOV EBX,EBP                         ; 004b2004
    CALL core_setcolid.cpp_FUN_005562c0 ; 004b2006
        ;   XREF to: 005562c0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_005562c0()
    MOV dword ptr [ESP + 0x70],EAX      ; 004b200b
    LEA ESI,[EBP + 0x24]                ; 004b200f
    MOV EAX,dword ptr [ESP + 0x70]      ; 004b2012
    MOV dword ptr [EBP + 0x10],EAX      ; 004b2016
    ADD ESP,0xc                         ; 004b2019
    PUSH dword ptr [ESP + 0x84]         ; 004b201c
        ;   Label: LAB_004b201c
    FLD float ptr [ESP + 0x88]          ; 004b2023
    FCHS                                ; 004b202a
    FSTP float ptr [ESP + 0x64]         ; 004b202c
    PUSH dword ptr [ESP + 0x64]         ; 004b2030
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004b2034
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x6c],EAX      ; 004b2039
    FLD float ptr [ESP + 0x6c]          ; 004b203d
    ADD ESP,0x8                         ; 004b2041
    FMUL double ptr [0x005df3e4]        ; 004b2044 | DAT_005df3e4
    PUSH dword ptr [ESP + 0x84]         ; 004b204a
    FADD float ptr [EBP + 0xc]          ; 004b2051
    PUSH dword ptr [ESP + 0x64]         ; 004b2054
    FSTP float ptr [EBX + 0x1c]         ; 004b2058
    MOV EAX,dword ptr [EBP + 0x10]      ; 004b205b
    MOV dword ptr [EBX + 0x20],EAX      ; 004b205e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004b2061
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x6c],EAX      ; 004b2066
    FLD float ptr [ESP + 0x6c]          ; 004b206a
    FMUL double ptr [0x005df3e4]        ; 004b206e | DAT_005df3e4
    ADD EBX,0xc                         ; 004b2074
    FADD float ptr [EBP + 0x14]         ; 004b2077
    ADD ESP,0x8                         ; 004b207a
    FSTP float ptr [EBX + 0x18]         ; 004b207d
    CMP EBX,ESI                         ; 004b2080
    JNZ 0x004b201c                      ; 004b2082
        ;   XREF to: 004b201c (CONDITIONAL_JUMP)  ; LAB_004b201c
    LEA EBX,[EBP + 0xc]                 ; 004b2084
    MOV EDI,ESP                         ; 004b2087
    LEA ESI,[ESP + 0x3c]                ; 004b2089
    FLD float ptr [EBX]                 ; 004b208d
    FLD float ptr [EBX + 0x8]           ; 004b208f
    MOV EAX,dword ptr [EBX + 0x4]       ; 004b2092
    FXCH                                ; 004b2095
    FLD float ptr [ESP + 0x60]          ; 004b2097
    FXCH                                ; 004b209b
    FADD ST0,ST1                        ; 004b209d
    MOV dword ptr [ESP + 0x40],EAX      ; 004b209f
    FXCH ST2                            ; 004b20a3
    FADDP                               ; 004b20a5
    LEA EBX,[EBP + 0x40]                ; 004b20a7
    FXCH                                ; 004b20aa
    FSTP float ptr [ESP + 0x3c]         ; 004b20ac
    FSTP float ptr [ESP + 0x44]         ; 004b20b0
    MOV EAX,ESP                         ; 004b20b4
    MOVSD ES:EDI,ESI                    ; 004b20b6
    MOVSD ES:EDI,ESI                    ; 004b20b7
    MOVSD ES:EDI,ESI                    ; 004b20b8
    CMP EBX,EAX                         ; 004b20b9
    JZ 0x004b20d0                       ; 004b20bb
        ;   XREF to: 004b20d0 (CONDITIONAL_JUMP)  ; LAB_004b20d0
    MOV EAX,dword ptr [ESP]             ; 004b20bd
    MOV dword ptr [EBX],EAX             ; 004b20c0
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b20c2
    MOV dword ptr [EBX + 0x4],EAX       ; 004b20c6
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b20c9
    MOV dword ptr [EBX + 0x8],EAX       ; 004b20cd
    FLD float ptr [ESP + 0x84]          ; 004b20d0
        ;   Label: LAB_004b20d0
    FLD ST0                             ; 004b20d7
    LEA EDI,[ESP + 0xc]                 ; 004b20d9
    LEA ESI,[ESP + 0x48]                ; 004b20dd
    LEA EBX,[EBP + 0xc]                 ; 004b20e1
    FCHS                                ; 004b20e4
    FLD float ptr [EBX]                 ; 004b20e6
    FLD float ptr [EBX + 0x8]           ; 004b20e8
    MOV EAX,dword ptr [EBX + 0x4]       ; 004b20eb
    FXCH                                ; 004b20ee
    FADDP ST3,ST0                       ; 004b20f0
    MOV dword ptr [ESP + 0x4c],EAX      ; 004b20f2
    FADDP                               ; 004b20f6
    LEA EBX,[EBP + 0x4c]                ; 004b20f8
    FXCH                                ; 004b20fb
    FSTP float ptr [ESP + 0x48]         ; 004b20fd
    FSTP float ptr [ESP + 0x50]         ; 004b2101
    LEA EAX,[ESP + 0xc]                 ; 004b2105
    MOVSD ES:EDI,ESI                    ; 004b2109
    MOVSD ES:EDI,ESI                    ; 004b210a
    MOVSD ES:EDI,ESI                    ; 004b210b
    CMP EBX,EAX                         ; 004b210c
    JZ 0x004b2124                       ; 004b210e
        ;   XREF to: 004b2124 (CONDITIONAL_JUMP)  ; LAB_004b2124
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b2110
    MOV dword ptr [EBX],EAX             ; 004b2114
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b2116
    MOV dword ptr [EBX + 0x4],EAX       ; 004b211a
    MOV EAX,dword ptr [ESP + 0x14]      ; 004b211d
    MOV dword ptr [EBX + 0x8],EAX       ; 004b2121
    LEA EBX,[EBP + 0xc]                 ; 004b2124
        ;   Label: LAB_004b2124
    LEA EDI,[ESP + 0x54]                ; 004b2127
    LEA ESI,[ESP + 0x18]                ; 004b212b
    FLD float ptr [EBX]                 ; 004b212f
    FLD float ptr [EBX + 0x8]           ; 004b2131
    MOV EAX,dword ptr [EBX + 0x4]       ; 004b2134
    FXCH                                ; 004b2137
    FLD float ptr [ESP + 0x84]          ; 004b2139
    FXCH                                ; 004b2140
    FADD ST0,ST1                        ; 004b2142
    MOV dword ptr [ESP + 0x1c],EAX      ; 004b2144
    FXCH ST2                            ; 004b2148
    FADDP                               ; 004b214a
    LEA EBX,[EBP + 0x58]                ; 004b214c
    FXCH                                ; 004b214f
    FSTP float ptr [ESP + 0x18]         ; 004b2151
    FSTP float ptr [ESP + 0x20]         ; 004b2155
    LEA EAX,[ESP + 0x54]                ; 004b2159
    MOVSD ES:EDI,ESI                    ; 004b215d
    MOVSD ES:EDI,ESI                    ; 004b215e
    MOVSD ES:EDI,ESI                    ; 004b215f
    CMP EBX,EAX                         ; 004b2160
    JZ 0x004b2178                       ; 004b2162
        ;   XREF to: 004b2178 (CONDITIONAL_JUMP)  ; LAB_004b2178
    MOV EAX,dword ptr [ESP + 0x54]      ; 004b2164
    MOV dword ptr [EBX],EAX             ; 004b2168
    MOV EAX,dword ptr [ESP + 0x58]      ; 004b216a
    MOV dword ptr [EBX + 0x4],EAX       ; 004b216e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004b2171
    MOV dword ptr [EBX + 0x8],EAX       ; 004b2175
    FLD float ptr [ESP + 0x84]          ; 004b2178
        ;   Label: LAB_004b2178
    FLD ST0                             ; 004b217f
    LEA EDI,[ESP + 0x30]                ; 004b2181
    LEA ESI,[ESP + 0x24]                ; 004b2185
    LEA EBX,[EBP + 0xc]                 ; 004b2189
    FCHS                                ; 004b218c
    FLD float ptr [EBX]                 ; 004b218e
    FLD float ptr [EBX + 0x8]           ; 004b2190
    MOV EAX,dword ptr [EBX + 0x4]       ; 004b2193
    FXCH                                ; 004b2196
    FADDP ST2,ST0                       ; 004b2198
    MOV dword ptr [ESP + 0x28],EAX      ; 004b219a
    FADDP ST2,ST0                       ; 004b219e
    LEA EBX,[EBP + 0x64]                ; 004b21a0
    FSTP float ptr [ESP + 0x24]         ; 004b21a3
    FSTP float ptr [ESP + 0x2c]         ; 004b21a7
    LEA EAX,[ESP + 0x30]                ; 004b21ab
    MOVSD ES:EDI,ESI                    ; 004b21af
    MOVSD ES:EDI,ESI                    ; 004b21b0
    MOVSD ES:EDI,ESI                    ; 004b21b1
    CMP EBX,EAX                         ; 004b21b2
    JZ 0x004b21ca                       ; 004b21b4
        ;   XREF to: 004b21ca (CONDITIONAL_JUMP)  ; LAB_004b21ca
    MOV EAX,dword ptr [ESP + 0x30]      ; 004b21b6
    MOV dword ptr [EBX],EAX             ; 004b21ba
    MOV EAX,dword ptr [ESP + 0x34]      ; 004b21bc
    MOV dword ptr [EBX + 0x4],EAX       ; 004b21c0
    MOV EAX,dword ptr [ESP + 0x38]      ; 004b21c3
    MOV dword ptr [EBX + 0x8],EAX       ; 004b21c7
    LEA EAX,[EBP + 0x40]                ; 004b21ca
        ;   Label: LAB_004b21ca
    PUSH 0x0                            ; 004b21cd
    PUSH EAX                            ; 004b21cf
    MOV ECX,dword ptr [0x00622c18]      ; 004b21d0 | g_CDemonSetPtr
    PUSH ECX                            ; 004b21d6 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_005562c0 ; 004b21d7
        ;   XREF to: 005562c0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_005562c0()
    MOV dword ptr [ESP + 0x70],EAX      ; 004b21dc
    FLD float ptr [ESP + 0x70]          ; 004b21e0
    ADD ESP,0xc                         ; 004b21e4
    LEA EAX,[EBP + 0x4c]                ; 004b21e7
    PUSH 0x0                            ; 004b21ea
    MOV EBX,dword ptr [0x00622c18]      ; 004b21ec | g_CDemonSetPtr
    PUSH EAX                            ; 004b21f2
    FADD double ptr [0x005df3ec]        ; 004b21f3 | DAT_005df3ec
    PUSH EBX                            ; 004b21f9 | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x44]         ; 004b21fa
    CALL core_setcolid.cpp_FUN_005562c0 ; 004b21fd
        ;   XREF to: 005562c0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_005562c0()
    MOV dword ptr [ESP + 0x70],EAX      ; 004b2202
    FLD float ptr [ESP + 0x70]          ; 004b2206
    ADD ESP,0xc                         ; 004b220a
    LEA EAX,[EBP + 0x58]                ; 004b220d
    PUSH 0x0                            ; 004b2210
    MOV ESI,dword ptr [0x00622c18]      ; 004b2212 | g_CDemonSetPtr
    PUSH EAX                            ; 004b2218
    FADD double ptr [0x005df3ec]        ; 004b2219 | DAT_005df3ec
    PUSH ESI                            ; 004b221f | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x50]         ; 004b2220
    CALL core_setcolid.cpp_FUN_005562c0 ; 004b2223
        ;   XREF to: 005562c0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_005562c0()
    MOV dword ptr [ESP + 0x70],EAX      ; 004b2228
    FLD float ptr [ESP + 0x70]          ; 004b222c
    ADD ESP,0xc                         ; 004b2230
    LEA EAX,[EBP + 0x64]                ; 004b2233
    PUSH 0x0                            ; 004b2236
    MOV EDI,dword ptr [0x00622c18]      ; 004b2238 | g_CDemonSetPtr
    PUSH EAX                            ; 004b223e
    FADD double ptr [0x005df3ec]        ; 004b223f | DAT_005df3ec
    PUSH EDI                            ; 004b2245 | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x5c]         ; 004b2246
    CALL core_setcolid.cpp_FUN_005562c0 ; 004b2249
        ;   XREF to: 005562c0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_005562c0()
    FLD float ptr [EBP + 0x44]          ; 004b224e
    FSUB float ptr [EBP + 0x10]         ; 004b2251
    MOV dword ptr [ESP + 0x70],EAX      ; 004b2254
    FABS                                ; 004b2258
    FLD float ptr [ESP + 0x70]          ; 004b225a
    FADD double ptr [0x005df3ec]        ; 004b225e | DAT_005df3ec
    ADD ESP,0xc                         ; 004b2264
    FSTP float ptr [EBP + 0x68]         ; 004b2267
    FLD1                                ; 004b226a
    FCOMPP                              ; 004b226c
    FNSTSW AX                           ; 004b226e
    SAHF                                ; 004b2270
    JNC 0x004b2279                      ; 004b2271
        ;   XREF to: 004b2279 (CONDITIONAL_JUMP)  ; LAB_004b2279
    MOV EAX,dword ptr [EBP + 0x10]      ; 004b2273
    MOV dword ptr [EBP + 0x44],EAX      ; 004b2276
    FLD float ptr [EBP + 0x50]          ; 004b2279
        ;   Label: LAB_004b2279
    FSUB float ptr [EBP + 0x10]         ; 004b227c
    FABS                                ; 004b227f
    FLD1                                ; 004b2281
    FCOMPP                              ; 004b2283
    FNSTSW AX                           ; 004b2285
    SAHF                                ; 004b2287
    JNC 0x004b2290                      ; 004b2288
        ;   XREF to: 004b2290 (CONDITIONAL_JUMP)  ; LAB_004b2290
    MOV EAX,dword ptr [EBP + 0x10]      ; 004b228a
    MOV dword ptr [EBP + 0x50],EAX      ; 004b228d
    FLD float ptr [EBP + 0x5c]          ; 004b2290
        ;   Label: LAB_004b2290
    FSUB float ptr [EBP + 0x10]         ; 004b2293
    FABS                                ; 004b2296
    FLD1                                ; 004b2298
    FCOMPP                              ; 004b229a
    FNSTSW AX                           ; 004b229c
    SAHF                                ; 004b229e
    JNC 0x004b22a7                      ; 004b229f
        ;   XREF to: 004b22a7 (CONDITIONAL_JUMP)  ; LAB_004b22a7
    MOV EAX,dword ptr [EBP + 0x10]      ; 004b22a1
    MOV dword ptr [EBP + 0x5c],EAX      ; 004b22a4
    FLD float ptr [EBP + 0x68]          ; 004b22a7
        ;   Label: LAB_004b22a7
    FSUB float ptr [EBP + 0x10]         ; 004b22aa
    FABS                                ; 004b22ad
    FLD1                                ; 004b22af
    FCOMPP                              ; 004b22b1
    FNSTSW AX                           ; 004b22b3
    SAHF                                ; 004b22b5
    JC 0x004b22c0                       ; 004b22b6
        ;   XREF to: 004b22c0 (CONDITIONAL_JUMP)  ; LAB_004b22c0
    ADD ESP,0x68                        ; 004b22b8
    POP EBP                             ; 004b22bb
    POP EDI                             ; 004b22bc
    POP ESI                             ; 004b22bd
    POP EBX                             ; 004b22be
    RET                                 ; 004b22bf
    MOV EAX,dword ptr [EBP + 0x10]      ; 004b22c0
        ;   Label: LAB_004b22c0
    MOV dword ptr [EBP + 0x68],EAX      ; 004b22c3
    ADD ESP,0x68                        ; 004b22c6
    POP EBP                             ; 004b22c9
    POP EDI                             ; 004b22ca
    POP ESI                             ; 004b22cb
    POP EBX                             ; 004b22cc
    RET                                 ; 004b22cd

