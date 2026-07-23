; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_getActionState_FUN_004fe300(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00502ad7
;
; Referenced Globals:
;   TerminatedCString s_walk_0058e16d
;   string s_backup_0058e172
;   TerminatedCString s_run_0058e179
;   TerminatedCString s_fire_0058e17d
;   string s_useItem_0058e182
;   string s_light_0058e18a
;   TerminatedCString s_draw_0058e190
;   TerminatedCString s_jump_0058e195
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe300
        ;   Label: core_script.cpp_getActionState_FUN_004fe300
    PUSH ESI                            ; 004fe301
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fe302
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fe306
    PUSH 0x58e16d                       ; 004fe30a | = "walk"
    PUSH ESI                            ; 004fe30f
    CALL crt_string.c__stricmp_FUN_00564520 ; 004fe310
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004fe315
    TEST EAX,EAX                        ; 004fe318
    JNZ 0x004fe321                      ; 004fe31a
        ;   XREF to: 004fe321 (CONDITIONAL_JUMP)  ; LAB_004fe321
    MOV EAX,EBX                         ; 004fe31c
    POP ESI                             ; 004fe31e
    POP EBX                             ; 004fe31f
    RET                                 ; 004fe320
    PUSH 0x58e172                       ; 004fe321 | = "backup"
        ;   Label: LAB_004fe321
    PUSH ESI                            ; 004fe326
    CALL crt_string.c__stricmp_FUN_00564520 ; 004fe327
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004fe32c
    TEST EAX,EAX                        ; 004fe32f
    JNZ 0x004fe339                      ; 004fe331
        ;   XREF to: 004fe339 (CONDITIONAL_JUMP)  ; LAB_004fe339
    LEA EAX,[EBX + 0x4]                 ; 004fe333
    POP ESI                             ; 004fe336
    POP EBX                             ; 004fe337
    RET                                 ; 004fe338
    PUSH 0x58e179                       ; 004fe339 | = "run"
        ;   Label: LAB_004fe339
    PUSH ESI                            ; 004fe33e
    CALL crt_string.c__stricmp_FUN_00564520 ; 004fe33f
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004fe344
    TEST EAX,EAX                        ; 004fe347
    JNZ 0x004fe351                      ; 004fe349
        ;   XREF to: 004fe351 (CONDITIONAL_JUMP)  ; LAB_004fe351
    LEA EAX,[EBX + 0x8]                 ; 004fe34b
    POP ESI                             ; 004fe34e
    POP EBX                             ; 004fe34f
    RET                                 ; 004fe350
    PUSH 0x58e17d                       ; 004fe351 | = "fire"
        ;   Label: LAB_004fe351
    PUSH ESI                            ; 004fe356
    CALL crt_string.c__stricmp_FUN_00564520 ; 004fe357
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004fe35c
    TEST EAX,EAX                        ; 004fe35f
    JNZ 0x004fe369                      ; 004fe361
        ;   XREF to: 004fe369 (CONDITIONAL_JUMP)  ; LAB_004fe369
    LEA EAX,[EBX + 0xc]                 ; 004fe363
    POP ESI                             ; 004fe366
    POP EBX                             ; 004fe367
    RET                                 ; 004fe368
    PUSH 0x58e182                       ; 004fe369 | = "useItem"
        ;   Label: LAB_004fe369
    PUSH ESI                            ; 004fe36e
    CALL crt_string.c__stricmp_FUN_00564520 ; 004fe36f
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004fe374
    TEST EAX,EAX                        ; 004fe377
    JNZ 0x004fe381                      ; 004fe379
        ;   XREF to: 004fe381 (CONDITIONAL_JUMP)  ; LAB_004fe381
    LEA EAX,[EBX + 0x10]                ; 004fe37b
    POP ESI                             ; 004fe37e
    POP EBX                             ; 004fe37f
    RET                                 ; 004fe380
    PUSH 0x58e18a                       ; 004fe381 | = "light"
        ;   Label: LAB_004fe381
    PUSH ESI                            ; 004fe386
    CALL crt_string.c__stricmp_FUN_00564520 ; 004fe387
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004fe38c
    TEST EAX,EAX                        ; 004fe38f
    JNZ 0x004fe399                      ; 004fe391
        ;   XREF to: 004fe399 (CONDITIONAL_JUMP)  ; LAB_004fe399
    LEA EAX,[EBX + 0x14]                ; 004fe393
    POP ESI                             ; 004fe396
    POP EBX                             ; 004fe397
    RET                                 ; 004fe398
    PUSH 0x58e190                       ; 004fe399 | = "draw"
        ;   Label: LAB_004fe399
    PUSH ESI                            ; 004fe39e
    CALL crt_string.c__stricmp_FUN_00564520 ; 004fe39f
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004fe3a4
    TEST EAX,EAX                        ; 004fe3a7
    JNZ 0x004fe3b1                      ; 004fe3a9
        ;   XREF to: 004fe3b1 (CONDITIONAL_JUMP)  ; LAB_004fe3b1
    LEA EAX,[EBX + 0x18]                ; 004fe3ab
    POP ESI                             ; 004fe3ae
    POP EBX                             ; 004fe3af
    RET                                 ; 004fe3b0
    PUSH 0x58e195                       ; 004fe3b1 | = "jump"
        ;   Label: LAB_004fe3b1
    PUSH ESI                            ; 004fe3b6
    CALL crt_string.c__stricmp_FUN_00564520 ; 004fe3b7
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004fe3bc
    TEST EAX,EAX                        ; 004fe3bf
    JNZ 0x004fe3c9                      ; 004fe3c1
        ;   XREF to: 004fe3c9 (CONDITIONAL_JUMP)  ; LAB_004fe3c9
    LEA EAX,[EBX + 0x1c]                ; 004fe3c3
    POP ESI                             ; 004fe3c6
    POP EBX                             ; 004fe3c7
    RET                                 ; 004fe3c8
    XOR EAX,EAX                         ; 004fe3c9
        ;   Label: LAB_004fe3c9
    POP ESI                             ; 004fe3cb
    POP EBX                             ; 004fe3cc
    RET                                 ; 004fe3cd

