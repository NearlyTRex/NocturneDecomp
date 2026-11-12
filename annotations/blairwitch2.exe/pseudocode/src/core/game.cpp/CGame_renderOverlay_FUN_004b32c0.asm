; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_renderOverlay_FUN_004b32c0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x170]:8  local_170
; undefined4       Stack[-0x168]:4  local_168
; undefined        Stack[-0x164]:1  local_164
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
;   core_game.cpp_FUN_004b5190 at 004b567b
;
; Referenced Globals:
;   undefined4 s_d_s_005d730a+1
;   undefined4 DAT_005d7313
;   undefined4 DAT_005d731b
;   undefined4 DAT_005d7323
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   CScript* g_CScriptPtr = 01e65cd0
;   undefined4 DAT_01511cb8
;   undefined4 DAT_01511cbc
;   undefined4 DAT_01511cc0
;   undefined4 DAT_01511cc4
;   undefined4 DAT_01cb7f78
;   undefined4 DAT_01cb8078
;   undefined4 DAT_01cb807c
;   CScript g_CScriptInstance
;   ... and 1 more
;
; Called Functions:
;   core_script.cpp_CScript_getLetterboxHeight_FUN_00521840
;   crt_math.c_round_FUN_005b7ff0
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_2d.c_fillRectWithBorder_FUN_00403250
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004ab530
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00
;   engine_font.cpp_FUN_004a8df0
;   engine_font.cpp_FUN_004ab2b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b32c0
        ;   Label: core_game.cpp_CGame_renderOverlay_FUN_004b32c0
    PUSH ESI                            ; 004b32c1
    PUSH EDI                            ; 004b32c2
    PUSH EBP                            ; 004b32c3
    MOV EBP,ESP                         ; 004b32c4
    SUB ESP,0x160                       ; 004b32c6
    AND ESP,0xfffffff8                  ; 004b32cc
    MOV EAX,[0x006141b8]                ; 004b32cf | DAT_006141b8
    MOV dword ptr [ESP + 0x110],EAX     ; 004b32d4
    MOV EAX,[0x006141bc]                ; 004b32db | DAT_006141bc
    MOV dword ptr [ESP + 0x114],EAX     ; 004b32e0
    MOV dword ptr [ESP + 0x10c],EAX     ; 004b32e7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b32ee
    TEST dword ptr [EAX + 0x3a4],0x7fffffff ; 004b32f1
    JNZ 0x004b367d                      ; 004b32fb
        ;   XREF to: 004b367d (CONDITIONAL_JUMP)  ; LAB_004b367d
    LEA EAX,[EAX]                       ; 004b3301
    LEA EDX,[EDX]                       ; 004b3307
    LEA EAX,[EAX]                       ; 004b330d
    FLD float ptr [0x01cb807c]          ; 004b3310 | DAT_01cb807c
        ;   Label: LAB_004b3310
    FLDZ                                ; 004b3316
    FCOMPP                              ; 004b3318
    FNSTSW AX                           ; 004b331a
    SAHF                                ; 004b331c
    JNC 0x004b33d6                      ; 004b331d
        ;   XREF to: 004b33d6 (CONDITIONAL_JUMP)  ; LAB_004b33d6
    MOV EDX,dword ptr [0x006141bc]      ; 004b3323 | DAT_006141bc
    MOV EBX,dword ptr [0x01511cb8]      ; 004b3329 | DAT_01511cb8
    CMP EDX,0x1e0                       ; 004b332f
    JGE 0x004b334b                      ; 004b3335
        ;   XREF to: 004b334b (CONDITIONAL_JUMP)  ; LAB_004b334b
    MOV EBX,dword ptr [0x01511cbc]      ; 004b3337 | DAT_01511cbc
    CMP EDX,0x180                       ; 004b333d
    JGE 0x004b334b                      ; 004b3343
        ;   XREF to: 004b334b (CONDITIONAL_JUMP)  ; LAB_004b334b
    MOV EBX,dword ptr [0x01511cc4]      ; 004b3345 | DAT_01511cc4
    PUSH 0x58                           ; 004b334b
        ;   Label: LAB_004b334b
    PUSH EBX                            ; 004b334d
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004b334e
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004b3353
    PUSH 0x58                           ; 004b3356
    PUSH EBX                            ; 004b3358
    MOV EDI,EAX                         ; 004b3359
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004ab530 ; 004b335b
        ;   XREF to: 004ab530 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004ab530(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004b3360
    MOV ESI,EAX                         ; 004b3363
    MOV EAX,[0x0061b460]                ; 004b3365 | g_CScriptPtr
    PUSH EAX                            ; 004b336a | g_CScriptInstance
    CALL core_script.cpp_CScript_getLetterboxHeight_FUN_00521840 ; 004b336b
        ;   XREF to: 00521840 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_getLetterboxHeight_FUN_00521840(CScript * this_ptr)
    ADD ESP,0x4                         ; 004b3370
    MOV EDX,dword ptr [0x0061b460]      ; 004b3373 | g_CScriptPtr
    PUSH EDX                            ; 004b3379 | g_CScriptInstance
    CALL core_script.cpp_CScript_getLetterboxHeight_FUN_00521840 ; 004b337a
        ;   XREF to: 00521840 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_getLetterboxHeight_FUN_00521840(CScript * this_ptr)
    MOV EDX,dword ptr [0x006141bc]      ; 004b337f | DAT_006141bc
    SUB EDX,EAX                         ; 004b3385
    MOV EAX,EDX                         ; 004b3387
    ADD ESP,0x4                         ; 004b3389
    SUB EAX,EDI                         ; 004b338c
    PUSH 0xffff                         ; 004b338e
    MOV EDI,EAX                         ; 004b3393
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 004b3395
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 004b339a
    PUSH 0x1cb7f78                      ; 004b339d | DAT_01cb7f78
    MOV ECX,dword ptr [0x01cb8078]      ; 004b33a2 | DAT_01cb8078
    PUSH ECX                            ; 004b33a8
    PUSH 0x5d730b                       ; 004b33a9 | s_d_s_005d730a+1
    LEA EAX,[ESP + 0x18]                ; 004b33ae
    PUSH EAX                            ; 004b33b2
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b33b3
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b33b8
    PUSH 0x0                            ; 004b33bb
    PUSH 0xf8                           ; 004b33bd
    SUB EDI,ESI                         ; 004b33c2
    PUSH EDI                            ; 004b33c4
    ADD ESI,ESI                         ; 004b33c5
    PUSH ESI                            ; 004b33c7
    LEA EAX,[ESP + 0x1c]                ; 004b33c8
    PUSH EAX                            ; 004b33cc
    PUSH EBX                            ; 004b33cd
    CALL engine_font.cpp_FUN_004a8df0   ; 004b33ce
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004b33d3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b33d6
        ;   Label: LAB_004b33d6
    CMP dword ptr [EAX + 0x244],0x0     ; 004b33d9
    JNZ 0x004b3676                      ; 004b33e0
        ;   XREF to: 004b3676 (CONDITIONAL_JUMP)  ; LAB_004b3676
    CMP dword ptr [EAX + 0x3ac],0x0     ; 004b33e6
    JLE 0x004b3676                      ; 004b33ed
        ;   XREF to: 004b3676 (CONDITIONAL_JUMP)  ; LAB_004b3676
    MOV EAX,dword ptr [ESP + 0x110]     ; 004b33f3
    MOV EDX,EAX                         ; 004b33fa
    SAR EDX,0x1f                        ; 004b33fc
    SHL EDX,0x2                         ; 004b33ff
    SBB EAX,EDX                         ; 004b3402
    SAR EAX,0x2                         ; 004b3404
    MOV EBX,EAX                         ; 004b3407
    MOV EAX,dword ptr [ESP + 0x114]     ; 004b3409
    MOV EDX,EAX                         ; 004b3410
    MOV ESI,0x28                        ; 004b3412
    SAR EDX,0x1f                        ; 004b3417
    IDIV ESI                            ; 004b341a
    MOV dword ptr [ESP + 0x12c],EAX     ; 004b341c
    MOV EAX,[0x01511cc4]                ; 004b3423 | DAT_01511cc4
    MOV EDI,dword ptr [0x006141b8]      ; 004b3428 | DAT_006141b8
    MOV dword ptr [ESP + 0x130],EAX     ; 004b342e
    CMP EDI,0x280                       ; 004b3435
    JG 0x004b3800                       ; 004b343b
        ;   XREF to: 004b3800 (CONDITIONAL_JUMP)  ; LAB_004b3800
    CMP dword ptr [0x006141b8],0x320    ; 004b3441 | DAT_006141b8
        ;   Label: LAB_004b3441
    JLE 0x004b3459                      ; 004b344b
        ;   XREF to: 004b3459 (CONDITIONAL_JUMP)  ; LAB_004b3459
    MOV EAX,[0x01511cb8]                ; 004b344d | DAT_01511cb8
    MOV dword ptr [ESP + 0x130],EAX     ; 004b3452
    PUSH 0x58                           ; 004b3459
        ;   Label: LAB_004b3459
    MOV EDX,dword ptr [ESP + 0x134]     ; 004b345b
    PUSH EDX                            ; 004b3462
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004b3463
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004b3468
    CMP EAX,dword ptr [ESP + 0x12c]     ; 004b346b
    JLE 0x004b348d                      ; 004b3472
        ;   XREF to: 004b348d (CONDITIONAL_JUMP)  ; LAB_004b348d
    PUSH 0x58                           ; 004b3474
    MOV ESI,dword ptr [ESP + 0x134]     ; 004b3476
    PUSH ESI                            ; 004b347d
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004b347e
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004b3483
    MOV dword ptr [ESP + 0x12c],EAX     ; 004b3486
    MOV EAX,dword ptr [ESP + 0x110]     ; 004b348d
        ;   Label: LAB_004b348d
    MOV EDX,EAX                         ; 004b3494
    MOV ESI,0x50                        ; 004b3496
    SAR EDX,0x1f                        ; 004b349b
    IDIV ESI                            ; 004b349e
    MOV dword ptr [ESP + 0x134],EAX     ; 004b34a0
    ADD EAX,EBX                         ; 004b34a7
    MOV dword ptr [ESP + 0x118],EAX     ; 004b34a9
    MOV EAX,dword ptr [ESP + 0x114]     ; 004b34b0
    MOV EDX,EAX                         ; 004b34b7
    SAR EDX,0x1f                        ; 004b34b9
    IDIV ESI                            ; 004b34bc
    MOV ESI,dword ptr [ESP + 0x10c]     ; 004b34be
    SUB ESI,EAX                         ; 004b34c5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b34c7
    XOR EDI,EDI                         ; 004b34ca
    MOV EDX,dword ptr [EAX + 0x3ac]     ; 004b34cc
    MOV dword ptr [ESP + 0x150],EDI     ; 004b34d2
    TEST EDX,EDX                        ; 004b34d9
    JLE 0x004b3676                      ; 004b34db
        ;   XREF to: 004b3676 (CONDITIONAL_JUMP)  ; LAB_004b3676
    MOV EDX,dword ptr [ESP + 0x12c]     ; 004b34e1
    LEA EBX,[EAX + 0x3b0]               ; 004b34e8
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b34ee
    SUB EAX,EDX                         ; 004b34f5
    MOV EDX,EAX                         ; 004b34f7
    SAR EDX,0x1f                        ; 004b34f9
    SUB EAX,EDX                         ; 004b34fc
    SAR EAX,0x1                         ; 004b34fe
    MOV dword ptr [ESP + 0x120],EAX     ; 004b3500
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b3507
    MOV dword ptr [ESP + 0x154],EBX     ; 004b350a
    MOV dword ptr [ESP + 0x158],EAX     ; 004b3511
    MOV EBX,dword ptr [ESP + 0x12c]     ; 004b3518
        ;   Label: LAB_004b3518
    MOV EAX,ESI                         ; 004b351f
    SUB EAX,EBX                         ; 004b3521
    MOV dword ptr [ESP + 0x140],EAX     ; 004b3523
    MOV dword ptr [ESP + 0x13c],EAX     ; 004b352a
    MOV EAX,dword ptr [ESP + 0x118]     ; 004b3531
    MOV dword ptr [ESP + 0x148],EAX     ; 004b3538
    MOV EAX,dword ptr [ESP + 0x158]     ; 004b353f
    MOV EDI,0x2                         ; 004b3546
    MOV EAX,dword ptr [EAX + 0x8b0]     ; 004b354b
    MOV dword ptr [ESP + 0x14c],ESI     ; 004b3551
    MOV dword ptr [ESP + 0x8],EAX       ; 004b3558
    MOV EBX,dword ptr [ESP + 0x134]     ; 004b355c
    FLD float ptr [ESP + 0x8]           ; 004b3563
    FCOMP double ptr [0x005d731b]       ; 004b3567 | DAT_005d731b
    FNSTSW AX                           ; 004b356d
    SAHF                                ; 004b356f
    JNC 0x004b3577                      ; 004b3570
        ;   XREF to: 004b3577 (CONDITIONAL_JUMP)  ; LAB_004b3577
    MOV EDI,0xfb                        ; 004b3572
    FLD float ptr [ESP + 0x8]           ; 004b3577
        ;   Label: LAB_004b3577
    FCOMP double ptr [0x005d7323]       ; 004b357b | DAT_005d7323
    FNSTSW AX                           ; 004b3581
    SAHF                                ; 004b3583
    JNC 0x004b358b                      ; 004b3584
        ;   XREF to: 004b358b (CONDITIONAL_JUMP)  ; LAB_004b358b
    MOV EDI,0x1                         ; 004b3586
    PUSH 0x0                            ; 004b358b
        ;   Label: LAB_004b358b
    PUSH 0x0                            ; 004b358d
    MOV EAX,dword ptr [ESP + 0x154]     ; 004b358f
    PUSH EAX                            ; 004b3596
    MOV EDX,dword ptr [ESP + 0x154]     ; 004b3597
    PUSH EDX                            ; 004b359e
    MOV ECX,dword ptr [ESP + 0x14c]     ; 004b359f
    PUSH ECX                            ; 004b35a6
    PUSH EBX                            ; 004b35a7
    CALL engine_2d.c_fillRectWithBorder_FUN_00403250 ; 004b35a8
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403250(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 004b35ad
    MOV EAX,dword ptr [ESP + 0x148]     ; 004b35b0
    SUB EAX,EBX                         ; 004b35b7
    INC EAX                             ; 004b35b9
    MOV dword ptr [ESP + 0x15c],EAX     ; 004b35ba
    FILD dword ptr [ESP + 0x15c]        ; 004b35c1
    FMUL float ptr [ESP + 0x8]          ; 004b35c8
    CALL crt_math.c_round_FUN_005b7ff0  ; 004b35cc
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x144]       ; 004b35d1
    MOV EAX,dword ptr [ESP + 0x144]     ; 004b35d8
    TEST EAX,EAX                        ; 004b35df
    JLE 0x004b3600                      ; 004b35e1
        ;   XREF to: 004b3600 (CONDITIONAL_JUMP)  ; LAB_004b3600
    PUSH EDI                            ; 004b35e3
    MOV EDX,dword ptr [ESP + 0x150]     ; 004b35e4
    PUSH EDX                            ; 004b35eb
    ADD EAX,EBX                         ; 004b35ec
    PUSH EAX                            ; 004b35ee
    MOV ECX,dword ptr [ESP + 0x148]     ; 004b35ef
    PUSH ECX                            ; 004b35f6
    PUSH EBX                            ; 004b35f7
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004b35f8
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004b35fd
    PUSH 0x0                            ; 004b3600
        ;   Label: LAB_004b3600
    PUSH 0xf8                           ; 004b3602
    MOV ECX,dword ptr [ESP + 0x148]     ; 004b3607
    PUSH ECX                            ; 004b360e
    MOV EBX,dword ptr [ESP + 0x140]     ; 004b360f
    PUSH EBX                            ; 004b3616
    MOV EDI,dword ptr [ESP + 0x164]     ; 004b3617
    PUSH EDI                            ; 004b361e
    MOV EAX,dword ptr [ESP + 0x144]     ; 004b361f
    PUSH EAX                            ; 004b3626
    CALL engine_font.cpp_FUN_004a8df0   ; 004b3627
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004b362c
    LEA EBX,[EDI + 0x100]               ; 004b362f
    MOV EDX,dword ptr [ESP + 0x120]     ; 004b3635
    MOV ECX,dword ptr [ESP + 0x158]     ; 004b363c
    MOV EDI,dword ptr [ESP + 0x150]     ; 004b3643
    MOV dword ptr [ESP + 0x154],EBX     ; 004b364a
    ADD ECX,0x4                         ; 004b3651
    SUB ESI,EDX                         ; 004b3654
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b3656
    INC EDI                             ; 004b3659
    MOV dword ptr [ESP + 0x158],ECX     ; 004b365a
    MOV ECX,dword ptr [EDX + 0x3ac]     ; 004b3661
    MOV dword ptr [ESP + 0x150],EDI     ; 004b3667
    CMP EDI,ECX                         ; 004b366e
    JL 0x004b3518                       ; 004b3670
        ;   XREF to: 004b3518 (CONDITIONAL_JUMP)  ; LAB_004b3518
    MOV ESP,EBP                         ; 004b3676
        ;   Label: LAB_004b3676
    POP EBP                             ; 004b3678
    POP EDI                             ; 004b3679
    POP ESI                             ; 004b367a
    POP EBX                             ; 004b367b
    RET                                 ; 004b367c
    FLD1                                ; 004b367d
        ;   Label: LAB_004b367d
    FLD float ptr [EAX + 0x3a4]         ; 004b367f
    FSTP double ptr [ESP]               ; 004b3685
    FCOMP double ptr [ESP]              ; 004b3688
    FNSTSW AX                           ; 004b368b
    SAHF                                ; 004b368d
    JBE 0x004b37f6                      ; 004b368e
        ;   XREF to: 004b37f6 (CONDITIONAL_JUMP)  ; LAB_004b37f6
    FLD double ptr [ESP]                ; 004b3694
    FMUL double ptr [0x005d7313]        ; 004b3697 | DAT_005d7313
    CALL crt_math.c_round_FUN_005b7ff0  ; 004b369d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x15c]       ; 004b36a2
    MOV ECX,dword ptr [ESP + 0x15c]     ; 004b36a9
    PUSH ECX                            ; 004b36b0
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 004b36b1
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
        ;   Label: LAB_004b36b1
    ADD ESP,0x4                         ; 004b36b6
    MOV EAX,[0x01511cc0]                ; 004b36b9 | DAT_01511cc0
    MOV dword ptr [ESP + 0x138],EAX     ; 004b36be
    MOV EAX,[0x01fc797c]                ; 004b36c5 | g_CDemonCameraInstance.framebuffer_width
    CMP EAX,0x1e0                       ; 004b36ca
    JGE 0x004b36dd                      ; 004b36cf
        ;   XREF to: 004b36dd (CONDITIONAL_JUMP)  ; LAB_004b36dd
    MOV EAX,[0x01511cc4]                ; 004b36d1 | DAT_01511cc4
    MOV dword ptr [ESP + 0x138],EAX     ; 004b36d6
    MOV EDX,dword ptr [0x01fc797c]      ; 004b36dd | g_CDemonCameraInstance.framebuffer_width
        ;   Label: LAB_004b36dd
    LEA EAX,[EDX*0x8 + 0x0]             ; 004b36e3
    ADD EDX,EAX                         ; 004b36ea
    MOV EBX,0xa                         ; 004b36ec
    MOV EAX,EDX                         ; 004b36f1
    SAR EDX,0x1f                        ; 004b36f3
    IDIV EBX                            ; 004b36f6
    PUSH EAX                            ; 004b36f8
    PUSH 0x100                          ; 004b36f9
    PUSH EBX                            ; 004b36fe
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b36ff
    PUSH 0x1cb0710                      ; 004b3702
    ADD EAX,0x2a4                       ; 004b3707
    PUSH EAX                            ; 004b370c
    MOV EBX,dword ptr [ESP + 0x14c]     ; 004b370d
    PUSH EBX                            ; 004b3714
    CALL engine_font.cpp_FUN_004ab2b0   ; 004b3715
        ;   XREF to: 004ab2b0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004ab2b0()
    ADD ESP,0x18                        ; 004b371a
    PUSH 0x58                           ; 004b371d
    MOV ESI,dword ptr [ESP + 0x13c]     ; 004b371f
    PUSH ESI                            ; 004b3726
    MOV EBX,EAX                         ; 004b3727
    MOV dword ptr [ESP + 0x130],EAX     ; 004b3729
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004b3730
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    IMUL EBX,EAX                        ; 004b3735
    ADD ESP,0x8                         ; 004b3738
    MOV ESI,EAX                         ; 004b373b
    MOV dword ptr [ESP + 0x11c],EAX     ; 004b373d
    MOV EAX,[0x006141bc]                ; 004b3744 | DAT_006141bc
    MOV EDI,dword ptr [0x0061b460]      ; 004b3749 | g_CScriptPtr
    SUB EAX,EBX                         ; 004b374f
    PUSH EDI                            ; 004b3751 | g_CScriptInstance
    MOV EBX,EAX                         ; 004b3752
    CALL core_script.cpp_CScript_getLetterboxHeight_FUN_00521840 ; 004b3754
        ;   XREF to: 00521840 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_getLetterboxHeight_FUN_00521840(CScript * this_ptr)
    SUB EBX,EAX                         ; 004b3759
    MOV EAX,EBX                         ; 004b375b
    MOV EDX,dword ptr [0x01511cc4]      ; 004b375d | DAT_01511cc4
    SUB EAX,ESI                         ; 004b3763
    ADD ESP,0x4                         ; 004b3765
    MOV ESI,EAX                         ; 004b3768
    CMP EDX,dword ptr [ESP + 0x138]     ; 004b376a
    JNZ 0x004b3776                      ; 004b3771
        ;   XREF to: 004b3776 (CONDITIONAL_JUMP)  ; LAB_004b3776
    SUB ESI,0x7                         ; 004b3773
    MOV ECX,dword ptr [ESP + 0x128]     ; 004b3776
        ;   Label: LAB_004b3776
    MOV EAX,[0x006141b8]                ; 004b377d | DAT_006141b8
    XOR EDI,EDI                         ; 004b3782
    DEC EAX                             ; 004b3784
    TEST ECX,ECX                        ; 004b3785
    JLE 0x004b3310                      ; 004b3787
        ;   XREF to: 004b3310 (CONDITIONAL_JUMP)  ; LAB_004b3310
    MOV EBX,0x1cb0710                   ; 004b378d
    MOV dword ptr [ESP + 0x124],EAX     ; 004b3792
    PUSH EBX                            ; 004b3799
        ;   Label: LAB_004b3799
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004b379a
    PUSH EAX                            ; 004b37a1
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 004b37a2
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004b37a7
    MOV EDX,dword ptr [ESP + 0x124]     ; 004b37aa
    SUB EDX,EAX                         ; 004b37b1
    MOV EAX,EDX                         ; 004b37b3
    SAR EDX,0x1f                        ; 004b37b5
    SUB EAX,EDX                         ; 004b37b8
    SAR EAX,0x1                         ; 004b37ba
    PUSH 0x0                            ; 004b37bc
    PUSH 0xf8                           ; 004b37be
    PUSH ESI                            ; 004b37c3
    PUSH EAX                            ; 004b37c4
    PUSH EBX                            ; 004b37c5
    MOV EDX,dword ptr [ESP + 0x14c]     ; 004b37c6
    PUSH EDX                            ; 004b37cd
    INC EDI                             ; 004b37ce
    CALL engine_font.cpp_FUN_004a8df0   ; 004b37cf
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004b37d4
    ADD EBX,0x100                       ; 004b37d7
    MOV ECX,dword ptr [ESP + 0x11c]     ; 004b37dd
    MOV EAX,dword ptr [ESP + 0x128]     ; 004b37e4
    ADD ESI,ECX                         ; 004b37eb
    CMP EDI,EAX                         ; 004b37ed
    JL 0x004b3799                       ; 004b37ef
        ;   XREF to: 004b3799 (CONDITIONAL_JUMP)  ; LAB_004b3799
    JMP 0x004b3310                      ; 004b37f1
        ;   XREF to: 004b3310 (UNCONDITIONAL_JUMP)  ; LAB_004b3310
    PUSH 0xffff                         ; 004b37f6
        ;   Label: LAB_004b37f6
    JMP 0x004b36b1                      ; 004b37fb
        ;   XREF to: 004b36b1 (UNCONDITIONAL_JUMP)  ; LAB_004b36b1
    MOV EAX,[0x01511cbc]                ; 004b3800 | DAT_01511cbc
        ;   Label: LAB_004b3800
    MOV dword ptr [ESP + 0x130],EAX     ; 004b3805
    JMP 0x004b3441                      ; 004b380c
        ;   XREF to: 004b3441 (UNCONDITIONAL_JUMP)  ; LAB_004b3441

