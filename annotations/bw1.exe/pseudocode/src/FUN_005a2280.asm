; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a2280(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   FUN_004087b0
;   FUN_004087f0
;   FUN_004207b0
;   FUN_004688a0
;   FUN_00468900
;   FUN_004837b0
;   FUN_00483850
;   FUN_005a2ae0
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2280
        ;   Label: FUN_005a2280
    PUSH ESI                            ; 005a2281
    PUSH EDI                            ; 005a2282
    PUSH EBP                            ; 005a2283
    SUB ESP,0x34                        ; 005a2284
    MOV EBX,dword ptr [ESP + 0x48]      ; 005a2287
    PUSH EBX                            ; 005a228b
    CALL FUN_004087b0                   ; 005a228c
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 005a2291
    PUSH 0x0                            ; 005a2294
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a2296
    PUSH EBX                            ; 005a229c
    LEA ESI,[ESP + 0x8]                 ; 005a229d
    LEA EDI,[ESP + 0x20]                ; 005a22a1
    CALL dword ptr [EAX + 0x1c]         ; 005a22a5
    MOV ECX,0x6                         ; 005a22a8
    ADD ESP,0x4                         ; 005a22ad
    LEA EAX,[ESP + 0x1c]                ; 005a22b0
    LEA ESI,[ESP + 0x4]                 ; 005a22b4
    PUSH EAX                            ; 005a22b8
    MOVSD.REP ES:EDI,ESI                ; 005a22b9
    CALL FUN_004207b0                   ; 005a22bb
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 005a22c0
    MOV ESI,EAX                         ; 005a22c3
    TEST EAX,EAX                        ; 005a22c5
    JZ 0x005a22f3                       ; 005a22c7
        ;   XREF to: 005a22f3 (CONDITIONAL_JUMP)  ; LAB_005a22f3
    PUSH -0x1                           ; 005a22c9
    PUSH 0x0                            ; 005a22cb
    PUSH EBX                            ; 005a22cd
    CALL FUN_005a2ae0                   ; 005a22ce
        ;   XREF to: 005a2ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a2ae0()
    MOV dword ptr [ESP + 0x3c],EAX      ; 005a22d3
    FLD float ptr [ESP + 0x3c]          ; 005a22d7
    ADD ESP,0x8                         ; 005a22db
    SUB ESP,0x4                         ; 005a22de
    LEA EAX,[EBX + 0x158]               ; 005a22e1
    FSTP float ptr [ESP]                ; 005a22e7
    PUSH EAX                            ; 005a22ea
    CALL FUN_004688a0                   ; 005a22eb
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 005a22f0
    PUSH EBX                            ; 005a22f3
        ;   Label: LAB_005a22f3
    CALL FUN_004087f0                   ; 005a22f4
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 005a22f9
    TEST ESI,ESI                        ; 005a22fc
    JNZ 0x005a230a                      ; 005a22fe
        ;   XREF to: 005a230a (CONDITIONAL_JUMP)  ; LAB_005a230a
    MOV EAX,ESI                         ; 005a2300
        ;   Label: LAB_005a2300
    ADD ESP,0x34                        ; 005a2302
    POP EBP                             ; 005a2305
    POP EDI                             ; 005a2306
    POP ESI                             ; 005a2307
    POP EBX                             ; 005a2308
    RET                                 ; 005a2309
    LEA EAX,[EBX + 0x584]               ; 005a230a
        ;   Label: LAB_005a230a
    PUSH EAX                            ; 005a2310
    CALL FUN_00468900                   ; 005a2311
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV EDX,dword ptr [EAX + 0x110]     ; 005a2316
    ADD ESP,0x4                         ; 005a231c
    CMP EDX,0x1                         ; 005a231f
    JL 0x005a2300                       ; 005a2322
        ;   XREF to: 005a2300 (CONDITIONAL_JUMP)  ; LAB_005a2300
    LEA EAX,[EBX + 0x20]                ; 005a2324
    PUSH EAX                            ; 005a2327
    MOV ECX,dword ptr [0x00612560]      ; 005a2328 | DAT_00612560
    PUSH ECX                            ; 005a232e
    CALL FUN_004837b0                   ; 005a232f
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 005a2334
    PUSH 0x0                            ; 005a2337
    LEA EAX,[EBX + 0x578]               ; 005a2339
    PUSH EAX                            ; 005a233f
    MOV EDI,dword ptr [0x00612560]      ; 005a2340 | DAT_00612560
    PUSH EDI                            ; 005a2346
    CALL FUN_00483850                   ; 005a2347
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 005a234c
    PUSH -0x1                           ; 005a234f
    PUSH 0x1                            ; 005a2351
    PUSH EBX                            ; 005a2353
    CALL FUN_005a2ae0                   ; 005a2354
        ;   XREF to: 005a2ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a2ae0()
    MOV dword ptr [ESP + 0x3c],EAX      ; 005a2359
    FLD float ptr [ESP + 0x3c]          ; 005a235d
    ADD ESP,0x8                         ; 005a2361
    SUB ESP,0x4                         ; 005a2364
    ADD EBX,0x584                       ; 005a2367
    FSTP float ptr [ESP]                ; 005a236d
    PUSH EBX                            ; 005a2370
    CALL FUN_004688a0                   ; 005a2371
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 005a2376
    MOV EBP,dword ptr [0x00612560]      ; 005a2379 | DAT_00612560
    PUSH EBP                            ; 005a237f
    CALL thunk_FUN_005084b0             ; 005a2380
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 005a2385
    MOV EAX,ESI                         ; 005a2388
    ADD ESP,0x34                        ; 005a238a
    POP EBP                             ; 005a238d
    POP EDI                             ; 005a238e
    POP ESI                             ; 005a238f
    POP EBX                             ; 005a2390
    RET                                 ; 005a2391

