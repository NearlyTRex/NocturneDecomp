; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ncursfx_cpp_CMouse_render_FUN_00510250(CMouse *this_ptr)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_01c2a370
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;
; Called Functions:
;   engine_3d.c_FUN_00406df0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510250
        ;   Label: engine_ncursfx.cpp_CMouse_render_FUN_00510250
    PUSH EDI                            ; 00510251
    MOV EBX,dword ptr [ESP + 0xc]       ; 00510252
    MOV EDX,dword ptr [0x01c2a380]      ; 00510256 | DAT_01c2a380
    MOV EAX,[0x01c2a37c]                ; 0051025c | DAT_01c2a37c
    MOV ECX,dword ptr [EBX + 0x25c]     ; 00510261
    SUB EDX,0xc                         ; 00510267
    SUB EAX,0xd                         ; 0051026a
    CMP ECX,0x1                         ; 0051026d
    JZ 0x00510304                       ; 00510270
        ;   XREF to: 00510304 (CONDITIONAL_JUMP)  ; LAB_00510304
    CMP ECX,0x2                         ; 00510276
    JNZ 0x00510334                      ; 00510279
        ;   XREF to: 00510334 (CONDITIONAL_JUMP)  ; LAB_00510334
    PUSH 0xffff                         ; 0051027f
    PUSH EDX                            ; 00510284
    PUSH EAX                            ; 00510285
    MOV EAX,dword ptr [EBX + 0x258]     ; 00510286
    MOV EDX,EAX                         ; 0051028c
    SAR EDX,0x1f                        ; 0051028e
    SHL EDX,0x10                        ; 00510291
    SBB EAX,EDX                         ; 00510294
    SAR EAX,0x10                        ; 00510296
    MOV EDX,EAX                         ; 00510299
    SHL EAX,0x2                         ; 0051029b
    ADD EDX,EAX                         ; 0051029e
    SHL EDX,0x2                         ; 005102a0
    LEA EAX,[EBX + 0x12c]               ; 005102a3
    ADD EAX,EDX                         ; 005102a9
    PUSH EAX                            ; 005102ab
        ;   Label: LAB_005102ab
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 005102ac
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
        ;   Label: LAB_005102ac
    ADD ESP,0x10                        ; 005102b1
    MOV EDI,dword ptr [EBX + 0x25c]     ; 005102b4
    TEST EDI,EDI                        ; 005102ba
    JZ 0x00510301                       ; 005102bc
        ;   XREF to: 00510301 (CONDITIONAL_JUMP)  ; LAB_00510301
    CMP EDI,0x2                         ; 005102be
    JNZ 0x00510341                      ; 005102c1
        ;   XREF to: 00510341 (CONDITIONAL_JUMP)  ; LAB_00510341
    MOV EAX,[0x01c2a370]                ; 005102c7 | DAT_01c2a370
        ;   Label: LAB_005102c7
    MOV EDX,dword ptr [EBX + 0x258]     ; 005102cc
    SHL EAX,0x5                         ; 005102d2
    MOV ECX,dword ptr [EBX + 0x25c]     ; 005102d5
    ADD EDX,EAX                         ; 005102db
    MOV EAX,0x7                         ; 005102dd
    MOV dword ptr [EBX + 0x258],EDX     ; 005102e2
    CMP ECX,0x2                         ; 005102e8
    JNZ 0x005102f2                      ; 005102eb
        ;   XREF to: 005102f2 (CONDITIONAL_JUMP)  ; LAB_005102f2
    MOV EAX,0xf                         ; 005102ed
    SHL EAX,0x10                        ; 005102f2
        ;   Label: LAB_005102f2
    CMP EAX,dword ptr [EBX + 0x258]     ; 005102f5
    JLE 0x0051039f                      ; 005102fb
        ;   XREF to: 0051039f (CONDITIONAL_JUMP)  ; LAB_0051039f
    POP EDI                             ; 00510301
        ;   Label: LAB_00510301
    POP EBX                             ; 00510302
    RET                                 ; 00510303
    PUSH 0xffff                         ; 00510304
        ;   Label: LAB_00510304
    PUSH EDX                            ; 00510309
    PUSH EAX                            ; 0051030a
    MOV EAX,dword ptr [EBX + 0x258]     ; 0051030b
    MOV EDX,EAX                         ; 00510311
    SAR EDX,0x1f                        ; 00510313
    SHL EDX,0x10                        ; 00510316
    SBB EAX,EDX                         ; 00510319
    SAR EAX,0x10                        ; 0051031b
    LEA EDX,[EAX + ECX*0x1]             ; 0051031e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00510321
    ADD EAX,EDX                         ; 00510328
    SHL EAX,0x2                         ; 0051032a
    ADD EAX,EBX                         ; 0051032d
    JMP 0x005102ab                      ; 0051032f
        ;   XREF to: 005102ab (UNCONDITIONAL_JUMP)  ; LAB_005102ab
    PUSH 0xffff                         ; 00510334
        ;   Label: LAB_00510334
    PUSH EDX                            ; 00510339
    PUSH EAX                            ; 0051033a
    PUSH EBX                            ; 0051033b
    JMP 0x005102ac                      ; 0051033c
        ;   XREF to: 005102ac (UNCONDITIONAL_JUMP)  ; LAB_005102ac
    PUSH 0x1                            ; 00510341
        ;   Label: LAB_00510341
    CALL engine_3d.c_FUN_00406df0       ; 00510343
        ;   XREF to: 00406df0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_FUN_00406df0(int blend_mode)
    ADD ESP,0x4                         ; 00510348
    MOV EAX,[0x01c2a380]                ; 0051034b | DAT_01c2a380
    PUSH 0x8000                         ; 00510350
    SUB EAX,0xc                         ; 00510355
    PUSH EAX                            ; 00510358
    MOV EAX,[0x01c2a37c]                ; 00510359 | DAT_01c2a37c
    SUB EAX,0xd                         ; 0051035e
    PUSH EAX                            ; 00510361
    MOV EAX,dword ptr [EBX + 0x258]     ; 00510362
    MOV EDX,EAX                         ; 00510368
    SAR EDX,0x1f                        ; 0051036a
    SHL EDX,0x10                        ; 0051036d
    SBB EAX,EDX                         ; 00510370
    SAR EAX,0x10                        ; 00510372
    MOV EDX,EAX                         ; 00510375
    SHL EAX,0x2                         ; 00510377
    ADD EDX,EAX                         ; 0051037a
    SHL EDX,0x2                         ; 0051037c
    LEA EAX,[EBX + 0xa0]                ; 0051037f
    ADD EAX,EDX                         ; 00510385
    PUSH EAX                            ; 00510387
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 00510388
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 0051038d
    PUSH 0x0                            ; 00510390
    CALL engine_3d.c_FUN_00406df0       ; 00510392
        ;   XREF to: 00406df0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_FUN_00406df0(int blend_mode)
    ADD ESP,0x4                         ; 00510397
    JMP 0x005102c7                      ; 0051039a
        ;   XREF to: 005102c7 (UNCONDITIONAL_JUMP)  ; LAB_005102c7
    MOV dword ptr [EBX + 0x25c],0x0     ; 0051039f
        ;   Label: LAB_0051039f
    MOV dword ptr [EBX + 0x258],0x0     ; 005103a9
    POP EDI                             ; 005103b3
    POP EBX                             ; 005103b4
    RET                                 ; 005103b5

