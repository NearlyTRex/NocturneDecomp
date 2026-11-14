; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_005b21e0(void)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_005032a0 at 00503391
;
; Referenced Globals:
;   void* PTR_timeBeginPeriod_005d0450 = 001d0912
;   void* PTR_MessageBoxA_005d04dc = 001d0b66
;   void* PTR_QueryPerformanceCounter_005d060c = 001d10b0
;   void* PTR_QueryPerformanceFrequency_005d0610 = 001d10ca
;   undefined4 s_Unable_to_set_timer_005f9c09+1
;   undefined4 DAT_005f9c22
;   TerminatedCString s_Nocturne_005f9ea6
;   void* PTR_s_Nocturne_006260e0 = 005f9ea6
;   undefined4 DAT_01c51d08
;   undefined4 DAT_02c9a5a8
;   undefined4 DAT_02c9a5b0
;   undefined4 DAT_02c9a5b4
;   undefined4 DAT_02c9a5b8
;   undefined4 DAT_02c9a5c4
;   undefined4 DAT_02c9be68
;   ... and 1 more
;
; Called Functions:
;   MessageBoxA
;   QueryPerformanceCounter
;   QueryPerformanceFrequency
;   timeBeginPeriod
;   wincore_winrun.cpp_getTime_FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b21e0
        ;   Label: wincore_winrun.cpp_calibrateCPUSpeed_FUN_005b21e0
    PUSH ESI                            ; 005b21e1
    PUSH EDI                            ; 005b21e2
    PUSH EBP                            ; 005b21e3
    MOV EBP,ESP                         ; 005b21e4
    SUB ESP,0x10                        ; 005b21e6
    PUSH 0x2c9a5b0                      ; 005b21e9 | DAT_02c9a5b0
    CALL dword ptr CS:[0x5d0610]        ; 005b21ee | PTR_QueryPerformanceFrequency_005d0610
    CMP EAX,0x1                         ; 005b21f5
    JNZ 0x005b23ba                      ; 005b21f8
        ;   XREF to: 005b23ba (CONDITIONAL_JUMP)  ; LAB_005b23ba
    FILD dword ptr [0x02c9a5b4]         ; 005b21fe | DAT_02c9a5b4
    FMUL double ptr [0x005f9c22]        ; 005b2204 | DAT_005f9c22
    XOR EDX,EDX                         ; 005b220a
    MOV EAX,[0x02c9a5b0]                ; 005b220c | DAT_02c9a5b0
    MOV dword ptr [EBP + -0xc],EDX      ; 005b2211
    MOV dword ptr [EBP + -0x10],EAX     ; 005b2214
    FILD qword ptr [EBP + -0x10]        ; 005b2217
    FADDP                               ; 005b221a
    PUSH 0x2c9a5a8                      ; 005b221c | DAT_02c9a5a8
    FSTP double ptr [0x02c9a5b8]        ; 005b2221 | DAT_02c9a5b8
    CALL dword ptr CS:[0x5d060c]        ; 005b2227 | PTR_QueryPerformanceCounter_005d060c
    XOR EAX,EAX                         ; 005b222e
        ;   Label: LAB_005b222e
    MOV dword ptr [EBP + -0x8],EAX      ; 005b2230
    MOV dword ptr [EBP + -0x4],EAX      ; 005b2233
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 005b2236
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: LAB_005b2236
    PUSH EAX                            ; 005b223b
    MOV EBX,0x0                         ; 005b223c
    ADD EBX,0x1                         ; 005b2241
        ;   Label: LAB_005b2241
    ADD EBX,0x1                         ; 005b2244
    ADD EBX,0x1                         ; 005b2247
    ADD EBX,0x1                         ; 005b224a
    ADD EBX,0x1                         ; 005b224d
    ADD EBX,0x1                         ; 005b2250
    ADD EBX,0x1                         ; 005b2253
    ADD EBX,0x1                         ; 005b2256
    ADD EBX,0x1                         ; 005b2259
    ADD EBX,0x1                         ; 005b225c
    ADD EBX,0x1                         ; 005b225f
    ADD EBX,0x1                         ; 005b2262
    ADD EBX,0x1                         ; 005b2265
    ADD EBX,0x1                         ; 005b2268
    ADD EBX,0x1                         ; 005b226b
    ADD EBX,0x1                         ; 005b226e
    ADD EBX,0x1                         ; 005b2271
    ADD EBX,0x1                         ; 005b2274
    ADD EBX,0x1                         ; 005b2277
    ADD EBX,0x1                         ; 005b227a
    ADD EBX,0x1                         ; 005b227d
    ADD EBX,0x1                         ; 005b2280
    ADD EBX,0x1                         ; 005b2283
    ADD EBX,0x1                         ; 005b2286
    ADD EBX,0x1                         ; 005b2289
    ADD EBX,0x1                         ; 005b228c
    ADD EBX,0x1                         ; 005b228f
    ADD EBX,0x1                         ; 005b2292
    ADD EBX,0x1                         ; 005b2295
    ADD EBX,0x1                         ; 005b2298
    ADD EBX,0x1                         ; 005b229b
    ADD EBX,0x1                         ; 005b229e
    ADD EBX,0x1                         ; 005b22a1
    ADD EBX,0x1                         ; 005b22a4
    ADD EBX,0x1                         ; 005b22a7
    ADD EBX,0x1                         ; 005b22aa
    ADD EBX,0x1                         ; 005b22ad
    ADD EBX,0x1                         ; 005b22b0
    ADD EBX,0x1                         ; 005b22b3
    ADD EBX,0x1                         ; 005b22b6
    ADD EBX,0x1                         ; 005b22b9
    ADD EBX,0x1                         ; 005b22bc
    ADD EBX,0x1                         ; 005b22bf
    ADD EBX,0x1                         ; 005b22c2
    ADD EBX,0x1                         ; 005b22c5
    ADD EBX,0x1                         ; 005b22c8
    ADD EBX,0x1                         ; 005b22cb
    ADD EBX,0x1                         ; 005b22ce
    ADD EBX,0x1                         ; 005b22d1
    ADD EBX,0x1                         ; 005b22d4
    ADD EBX,0x1                         ; 005b22d7
    ADD EBX,0x1                         ; 005b22da
    ADD EBX,0x1                         ; 005b22dd
    ADD EBX,0x1                         ; 005b22e0
    ADD EBX,0x1                         ; 005b22e3
    ADD EBX,0x1                         ; 005b22e6
    ADD EBX,0x1                         ; 005b22e9
    ADD EBX,0x1                         ; 005b22ec
    ADD EBX,0x1                         ; 005b22ef
    ADD EBX,0x1                         ; 005b22f2
    ADD EBX,0x1                         ; 005b22f5
    ADD EBX,0x1                         ; 005b22f8
    ADD EBX,0x1                         ; 005b22fb
    ADD EBX,0x1                         ; 005b22fe
    ADD EBX,0x1                         ; 005b2301
    ADD EBX,0x1                         ; 005b2304
    ADD EBX,0x1                         ; 005b2307
    ADD EBX,0x1                         ; 005b230a
    ADD EBX,0x1                         ; 005b230d
    ADD EBX,0x1                         ; 005b2310
    ADD EBX,0x1                         ; 005b2313
    ADD EBX,0x1                         ; 005b2316
    ADD EBX,0x1                         ; 005b2319
    ADD EBX,0x1                         ; 005b231c
    ADD EBX,0x1                         ; 005b231f
    ADD EBX,0x1                         ; 005b2322
    ADD EBX,0x1                         ; 005b2325
    ADD EBX,0x1                         ; 005b2328
    ADD EBX,0x1                         ; 005b232b
    ADD EBX,0x1                         ; 005b232e
    ADD EBX,0x1                         ; 005b2331
    ADD EBX,0x1                         ; 005b2334
    ADD EBX,0x1                         ; 005b2337
    ADD EBX,0x1                         ; 005b233a
    ADD EBX,0x1                         ; 005b233d
    ADD EBX,0x1                         ; 005b2340
    ADD EBX,0x1                         ; 005b2343
    ADD EBX,0x1                         ; 005b2346
    ADD EBX,0x1                         ; 005b2349
    ADD EBX,0x1                         ; 005b234c
    ADD EBX,0x1                         ; 005b234f
    ADD EBX,0x1                         ; 005b2352
    ADD EBX,0x1                         ; 005b2355
    ADD EBX,0x1                         ; 005b2358
    ADD EBX,0x1                         ; 005b235b
    ADD EBX,0x1                         ; 005b235e
    ADD EBX,0x1                         ; 005b2361
    ADD EBX,0x1                         ; 005b2364
    ADD EBX,0x1                         ; 005b2367
    CMP EBX,0x5f5e100                   ; 005b236a
    JC 0x005b2241                       ; 005b2370
        ;   XREF to: 005b2241 (CONDITIONAL_JUMP)  ; LAB_005b2241
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 005b2376
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
    POP EBX                             ; 005b237b
    SUB EAX,EBX                         ; 005b237c
    MOV EBX,EAX                         ; 005b237e
    MOV EAX,0x7080000                   ; 005b2380
    CDQ                                 ; 005b2385
    DIV EBX                             ; 005b2386
    ADD dword ptr [EBP + 0xfffffff8],EAX ; 005b2388
    MOV ECX,dword ptr [EBP + -0x4]      ; 005b238e
    INC ECX                             ; 005b2391
    MOV dword ptr [EBP + -0x4],ECX      ; 005b2392
    CMP ECX,0x5                         ; 005b2395
    JL 0x005b2236                       ; 005b2398
        ;   XREF to: 005b2236 (CONDITIONAL_JUMP)  ; LAB_005b2236
    MOV ECX,0x5                         ; 005b239e
    MOV EAX,dword ptr [EBP + -0x8]      ; 005b23a3
    MOV EDX,dword ptr [EBP + -0x8]      ; 005b23a6
    SAR EDX,0x1f                        ; 005b23a9
    IDIV ECX                            ; 005b23ac
    MOV [0x01c51d08],EAX                ; 005b23ae | DAT_01c51d08
    MOV ESP,EBP                         ; 005b23b3
    POP EBP                             ; 005b23b5
    POP EDI                             ; 005b23b6
    POP ESI                             ; 005b23b7
    POP EBX                             ; 005b23b8
    RET                                 ; 005b23b9
    MOV ECX,0x1                         ; 005b23ba
        ;   Label: LAB_005b23ba
    PUSH ECX                            ; 005b23bf
    MOV dword ptr [0x02c9a5c4],ECX      ; 005b23c0 | DAT_02c9a5c4
    CALL dword ptr CS:[0x5d0450]        ; 005b23c6 | PTR_timeBeginPeriod_005d0450
    TEST EAX,EAX                        ; 005b23cd
    JZ 0x005b222e                       ; 005b23cf
        ;   XREF to: 005b222e (CONDITIONAL_JUMP)  ; LAB_005b222e
    PUSH 0x31                           ; 005b23d5
    MOV EBX,dword ptr [0x006260e0]      ; 005b23d7 | PTR_s_Nocturne_006260e0
    PUSH EBX                            ; 005b23dd | = "Nocturne"
    PUSH 0x5f9c0a                       ; 005b23de | s_Unable_to_set_timer_005f9c09+1
    MOV ESI,dword ptr [0x02c9be68]      ; 005b23e3 | DAT_02c9be68
    PUSH ESI                            ; 005b23e9
    CALL dword ptr CS:[0x5d04dc]        ; 005b23ea | PTR_MessageBoxA_005d04dc
    CMP EAX,0x2                         ; 005b23f1
    JNZ 0x005b222e                      ; 005b23f4
        ;   XREF to: 005b222e (CONDITIONAL_JUMP)  ; LAB_005b222e
    MOV dword ptr [0x02c9be70],0x1      ; 005b23fa | DAT_02c9be70
    JMP 0x005b222e                      ; 005b2404
        ;   XREF to: 005b222e (UNCONDITIONAL_JUMP)  ; LAB_005b222e

