; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHero * __cdecl core_hero_cpp_closestHeroToPoint_FUN_004d22c0(CLocation *location)
;
; Parameters:
; CLocation *      Stack[0x4]:4   location
;
; XREF[2]:
;   core_charactr.cpp_FUN_00434190 at 0043424d
;   core_emitter.cpp_FUN_00487c80 at 00487c9b
;
; Referenced Globals:
;   undefined4 DAT_01d5ba00
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d22c0
        ;   Label: core_hero.cpp_closestHeroToPoint_FUN_004d22c0
    PUSH ESI                            ; 004d22c1
    PUSH EDI                            ; 004d22c2
    PUSH EBP                            ; 004d22c3
    SUB ESP,0x14                        ; 004d22c4
    MOV EBX,dword ptr [ESP + 0x28]      ; 004d22c7
    MOV EDX,0x7149f2ca                  ; 004d22cb
    MOV ECX,dword ptr [0x01d5ba00]      ; 004d22d0 | DAT_01d5ba00
    XOR ESI,ESI                         ; 004d22d6
    MOV dword ptr [ESP + 0x8],EDX       ; 004d22d8
    TEST ECX,ECX                        ; 004d22dc
    JLE 0x004d22fa                      ; 004d22de
        ;   XREF to: 004d22fa (CONDITIONAL_JUMP)  ; LAB_004d22fa
    LEA EDI,[ECX*0x4 + 0x0]             ; 004d22e0
    XOR EDX,EDX                         ; 004d22e7
    MOV EBP,dword ptr [EDX + 0x1d5ba04] ; 004d22e9
        ;   Label: LAB_004d22e9
    TEST EBP,EBP                        ; 004d22ef
    JNZ 0x004d2308                      ; 004d22f1
        ;   XREF to: 004d2308 (CONDITIONAL_JUMP)  ; LAB_004d2308
    ADD EDX,0x4                         ; 004d22f3
        ;   Label: LAB_004d22f3
    CMP EDX,EDI                         ; 004d22f6
    JL 0x004d22e9                       ; 004d22f8
        ;   XREF to: 004d22e9 (CONDITIONAL_JUMP)  ; LAB_004d22e9
    TEST ESI,ESI                        ; 004d22fa
        ;   Label: LAB_004d22fa
    JZ 0x004d2342                       ; 004d22fc
        ;   XREF to: 004d2342 (CONDITIONAL_JUMP)  ; LAB_004d2342
    MOV EAX,ESI                         ; 004d22fe
    ADD ESP,0x14                        ; 004d2300
    POP EBP                             ; 004d2303
    POP EDI                             ; 004d2304
    POP ESI                             ; 004d2305
    POP EBX                             ; 004d2306
    RET                                 ; 004d2307
    MOV ECX,EBP                         ; 004d2308
        ;   Label: LAB_004d2308
    LEA EAX,[EBP + 0x20]                ; 004d230a
    FLD float ptr [EAX]                 ; 004d230d
    FSUB float ptr [EBX]                ; 004d230f
    FMUL ST0                            ; 004d2311
    FLD float ptr [EAX + 0x4]           ; 004d2313
    FSUB float ptr [EBX + 0x4]          ; 004d2316
    FMUL ST0                            ; 004d2319
    FLD float ptr [EAX + 0x8]           ; 004d231b
    FXCH                                ; 004d231e
    FADDP ST2,ST0                       ; 004d2320
    FSUB float ptr [EBX + 0x8]          ; 004d2322
    FMUL ST0                            ; 004d2325
    FADDP                               ; 004d2327
    FST float ptr [ESP + 0xc]           ; 004d2329
    FCOMP float ptr [ESP + 0x8]         ; 004d232d
    FNSTSW AX                           ; 004d2331
    SAHF                                ; 004d2333
    JNC 0x004d22f3                      ; 004d2334
        ;   XREF to: 004d22f3 (CONDITIONAL_JUMP)  ; LAB_004d22f3
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d2336
    MOV ESI,EBP                         ; 004d233a
    MOV dword ptr [ESP + 0x8],EAX       ; 004d233c
    JMP 0x004d22f3                      ; 004d2340
        ;   XREF to: 004d22f3 (UNCONDITIONAL_JUMP)  ; LAB_004d22f3
    MOV EBX,0x5c4af4                    ; 004d2342
        ;   Label: LAB_004d2342
    MOV EDI,0x3a                        ; 004d2347
    PUSH 0x5c4b05                       ; 004d234c
    MOV dword ptr [0x01d71de0],EBX      ; 004d2351 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004d2357 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004d235d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004d2362
    MOV EAX,ESI                         ; 004d2365
    ADD ESP,0x14                        ; 004d2367
    POP EBP                             ; 004d236a
    POP EDI                             ; 004d236b
    POP ESI                             ; 004d236c
    POP EBX                             ; 004d236d
    RET                                 ; 004d236e

