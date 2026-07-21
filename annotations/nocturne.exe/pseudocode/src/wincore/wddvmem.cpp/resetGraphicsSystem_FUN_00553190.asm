; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_00553190(void)
;
;
; XREF[1]:
;   engine_2d.c_resetGraphicsSystem_FUN_00403760 at 00403760
;
; Referenced Globals:
;   string s_You_have_hit_a_kludge_in_the_pro_0059788f
;   string s_You_are_setting_acceleration_mod_005978b5
;   string s_the_appropriate_bit_depth_first._005978e7
;   string s_I_am_forcing_the_screen_to_switc_00597908
;   string s_Press_any_key_to_continue._00597939
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9d60
;   undefined4 DAT_02ddf550
;   undefined4 DAT_02ddf554
;   undefined4 DAT_02ddf558
;   undefined4 DAT_02ddf55c
;   undefined4 DAT_02ddf568
;   ... and 1 more
;
; Called Functions:
;   DirectDrawCreate
;   engine_2d.c_drawText_FUN_00402600
;   wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;   wincore_windll.cpp_clearScreen_FUN_0052ee70
;   wincore_windll.cpp_setResolutionAndColorTable_FUN_005324a0
;   wincore_winrun.cpp_getNextKeypress_FUN_00558b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553190
        ;   Label: wincore_wddvmem.cpp_resetGraphicsSystem_FUN_00553190
    PUSH ESI                            ; 00553191
    PUSH EDI                            ; 00553192
    PUSH EBP                            ; 00553193
    MOV EDX,0x1                         ; 00553194
    MOV ECX,dword ptr [0x02dc9d60]      ; 00553199 | DAT_02dc9d60
    MOV dword ptr [0x02ddf568],EDX      ; 0055319f | DAT_02ddf568
    TEST ECX,ECX                        ; 005531a5
    JZ 0x005532fc                       ; 005531a7
        ;   XREF to: 005532fc (CONDITIONAL_JUMP)  ; LAB_005532fc
    CMP dword ptr [0x005b7624],0x10     ; 005531ad | DAT_005b7624
    JL 0x00553301                       ; 005531b4
        ;   XREF to: 00553301 (CONDITIONAL_JUMP)  ; LAB_00553301
    CALL wincore_windll.cpp_clearScreen_FUN_0052ee70 ; 005531ba
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_clearScreen_FUN_0052ee70()
        ;   Label: LAB_005531ba
    MOV EBP,dword ptr [0x02ddf55c]      ; 005531bf | DAT_02ddf55c
    TEST EBP,EBP                        ; 005531c5
    JZ 0x005531d7                       ; 005531c7
        ;   XREF to: 005531d7 (CONDITIONAL_JUMP)  ; LAB_005531d7
    PUSH EBP                            ; 005531c9
    MOV EDX,dword ptr [EBP]             ; 005531ca
    CALL dword ptr [EDX + 0x8]          ; 005531cd
    XOR EAX,EAX                         ; 005531d0
    MOV [0x02ddf55c],EAX                ; 005531d2 | DAT_02ddf55c
    MOV EDX,dword ptr [0x02ddf558]      ; 005531d7 | DAT_02ddf558
        ;   Label: LAB_005531d7
    TEST EDX,EDX                        ; 005531dd
    JZ 0x005531f1                       ; 005531df
        ;   XREF to: 005531f1 (CONDITIONAL_JUMP)  ; LAB_005531f1
    MOV EAX,EDX                         ; 005531e1
    PUSH EAX                            ; 005531e3
    MOV EDX,dword ptr [EDX]             ; 005531e4
    CALL dword ptr [EDX + 0x8]          ; 005531e6
    XOR ECX,ECX                         ; 005531e9
    MOV dword ptr [0x02ddf558],ECX      ; 005531eb | DAT_02ddf558
    MOV EBX,dword ptr [0x02ddf554]      ; 005531f1 | DAT_02ddf554
        ;   Label: LAB_005531f1
    TEST EBX,EBX                        ; 005531f7
    JZ 0x00553209                       ; 005531f9
        ;   XREF to: 00553209 (CONDITIONAL_JUMP)  ; LAB_00553209
    PUSH EBX                            ; 005531fb
    MOV EDX,dword ptr [EBX]             ; 005531fc
    XOR ESI,ESI                         ; 005531fe
    CALL dword ptr [EDX + 0x8]          ; 00553200
    MOV dword ptr [0x02ddf554],ESI      ; 00553203 | DAT_02ddf554
    MOV EDI,dword ptr [0x02ddf550]      ; 00553209 | DAT_02ddf550
        ;   Label: LAB_00553209
    TEST EDI,EDI                        ; 0055320f
    JZ 0x0055322c                       ; 00553211
        ;   XREF to: 0055322c (CONDITIONAL_JUMP)  ; LAB_0055322c
    PUSH EDI                            ; 00553213
    MOV EDX,dword ptr [EDI]             ; 00553214
    CALL dword ptr [EDX + 0x4c]         ; 00553216
    MOV EAX,[0x02ddf550]                ; 00553219 | DAT_02ddf550
    PUSH EAX                            ; 0055321e
    MOV EDX,dword ptr [EAX]             ; 0055321f
    XOR EBP,EBP                         ; 00553221
    CALL dword ptr [EDX + 0x8]          ; 00553223
    MOV dword ptr [0x02ddf550],EBP      ; 00553226 | DAT_02ddf550
    MOV EAX,[0x005b7624]                ; 0055322c | DAT_005b7624
        ;   Label: LAB_0055322c
    PUSH EAX                            ; 00553231
    MOV EDX,dword ptr [0x005b7620]      ; 00553232 | DAT_005b7620
    PUSH EDX                            ; 00553238
    MOV ECX,dword ptr [0x005b761c]      ; 00553239 | DAT_005b761c
    PUSH ECX                            ; 0055323f
    CALL wincore_windll.cpp_setResolutionAndColorTable_FUN_005324a0 ; 00553240
        ;   XREF to: 005324a0 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_setResolutionAndColorTable_FUN_005324a0()
    ADD ESP,0xc                         ; 00553245
    TEST EAX,EAX                        ; 00553248
    JNZ 0x005532fc                      ; 0055324a
        ;   XREF to: 005532fc (CONDITIONAL_JUMP)  ; LAB_005532fc
    MOV EDI,dword ptr [0x02ddf55c]      ; 00553250 | DAT_02ddf55c
    MOV [0x02dc9d60],EAX                ; 00553256 | DAT_02dc9d60
    MOV [0x01c02594],EAX                ; 0055325b | DAT_01c02594
    TEST EDI,EDI                        ; 00553260
    JNZ 0x00553382                      ; 00553262
        ;   XREF to: 00553382 (CONDITIONAL_JUMP)  ; LAB_00553382
    MOV EAX,[0x02ddf558]                ; 00553268 | DAT_02ddf558
        ;   Label: LAB_00553268
    TEST EAX,EAX                        ; 0055326d
    JZ 0x0055327f                       ; 0055326f
        ;   XREF to: 0055327f (CONDITIONAL_JUMP)  ; LAB_0055327f
    PUSH EAX                            ; 00553271
    MOV EDX,dword ptr [EAX]             ; 00553272
    CALL dword ptr [EDX + 0x8]          ; 00553274
    XOR EDX,EDX                         ; 00553277
    MOV dword ptr [0x02ddf558],EDX      ; 00553279 | DAT_02ddf558
    MOV ECX,dword ptr [0x02ddf554]      ; 0055327f | DAT_02ddf554
        ;   Label: LAB_0055327f
    TEST ECX,ECX                        ; 00553285
    JZ 0x00553297                       ; 00553287
        ;   XREF to: 00553297 (CONDITIONAL_JUMP)  ; LAB_00553297
    PUSH ECX                            ; 00553289
    MOV EDX,dword ptr [ECX]             ; 0055328a
    XOR EBX,EBX                         ; 0055328c
    CALL dword ptr [EDX + 0x8]          ; 0055328e
    MOV dword ptr [0x02ddf554],EBX      ; 00553291 | DAT_02ddf554
    MOV ESI,dword ptr [0x02ddf550]      ; 00553297 | DAT_02ddf550
        ;   Label: LAB_00553297
    TEST ESI,ESI                        ; 0055329d
    JZ 0x005532ba                       ; 0055329f
        ;   XREF to: 005532ba (CONDITIONAL_JUMP)  ; LAB_005532ba
    PUSH ESI                            ; 005532a1
    MOV EDX,dword ptr [ESI]             ; 005532a2
    CALL dword ptr [EDX + 0x4c]         ; 005532a4
    MOV EAX,[0x02ddf550]                ; 005532a7 | DAT_02ddf550
    PUSH EAX                            ; 005532ac
    MOV EDX,dword ptr [EAX]             ; 005532ad
    XOR EDI,EDI                         ; 005532af
    CALL dword ptr [EDX + 0x8]          ; 005532b1
    MOV dword ptr [0x02ddf550],EDI      ; 005532b4 | DAT_02ddf550
    PUSH 0x0                            ; 005532ba
        ;   Label: LAB_005532ba
    PUSH 0x2ddf550                      ; 005532bc | DAT_02ddf550
    PUSH 0x0                            ; 005532c1
    CALL DirectDrawCreate               ; 005532c3
        ;   XREF to: 00574ba8 (UNCONDITIONAL_CALL)  ; undefined DirectDrawCreate()
    TEST EAX,EAX                        ; 005532c8
    JNZ 0x005532e0                      ; 005532ca
        ;   XREF to: 005532e0 (CONDITIONAL_JUMP)  ; LAB_005532e0
    PUSH 0x11                           ; 005532cc
    MOV EBP,dword ptr [0x02de2098]      ; 005532ce | DAT_02de2098
    MOV EAX,[0x02ddf550]                ; 005532d4 | DAT_02ddf550
    PUSH EBP                            ; 005532d9
    MOV EDX,dword ptr [EAX]             ; 005532da
    PUSH EAX                            ; 005532dc
    CALL dword ptr [EDX + 0x50]         ; 005532dd
    MOV EAX,[0x005b7624]                ; 005532e0 | DAT_005b7624
        ;   Label: LAB_005532e0
    PUSH EAX                            ; 005532e5
    MOV EDX,dword ptr [0x005b7620]      ; 005532e6 | DAT_005b7620
    PUSH EDX                            ; 005532ec
    MOV ECX,dword ptr [0x005b761c]      ; 005532ed | DAT_005b761c
    PUSH ECX                            ; 005532f3
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00 ; 005532f4
        ;   XREF to: 00552e00 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00()
    ADD ESP,0xc                         ; 005532f9
    POP EBP                             ; 005532fc
        ;   Label: LAB_005532fc
    POP EDI                             ; 005532fd
    POP ESI                             ; 005532fe
    POP EBX                             ; 005532ff
    RET                                 ; 00553300
    PUSH 0x10                           ; 00553301
        ;   Label: LAB_00553301
    MOV ESI,dword ptr [0x005b7620]      ; 00553303 | DAT_005b7620
    PUSH ESI                            ; 00553309
    MOV EDI,dword ptr [0x005b761c]      ; 0055330a | DAT_005b761c
    PUSH EDI                            ; 00553310
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00 ; 00553311
        ;   XREF to: 00552e00 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00()
    ADD ESP,0xc                         ; 00553316
    CALL wincore_windll.cpp_clearScreen_FUN_0052ee70 ; 00553319
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_clearScreen_FUN_0052ee70()
    PUSH 0x0                            ; 0055331e
    PUSH 0x0                            ; 00553320
    PUSH 0x59788f                       ; 00553322 | = "You have hit a kludge in the program."
    CALL engine_2d.c_drawText_FUN_00402600 ; 00553327
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawText_FUN_00402600()
    ADD ESP,0xc                         ; 0055332c
    PUSH 0x16                           ; 0055332f
    PUSH 0x0                            ; 00553331
    PUSH 0x5978b5                       ; 00553333 | = "You are setting acceleration mode wit..."
    CALL engine_2d.c_drawText_FUN_00402600 ; 00553338
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawText_FUN_00402600()
    ADD ESP,0xc                         ; 0055333d
    PUSH 0x21                           ; 00553340
    PUSH 0x0                            ; 00553342
    PUSH 0x5978e7                       ; 00553344 | = "the appropriate bit depth first."
    CALL engine_2d.c_drawText_FUN_00402600 ; 00553349
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawText_FUN_00402600()
    ADD ESP,0xc                         ; 0055334e
    PUSH 0x2c                           ; 00553351
    PUSH 0x0                            ; 00553353
    PUSH 0x597908                       ; 00553355 | = "I am forcing the screen to switch to ..."
    CALL engine_2d.c_drawText_FUN_00402600 ; 0055335a
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawText_FUN_00402600()
    ADD ESP,0xc                         ; 0055335f
    PUSH 0x42                           ; 00553362
    PUSH 0x0                            ; 00553364
    PUSH 0x597939                       ; 00553366 | = "Press any key to continue."
    CALL engine_2d.c_drawText_FUN_00402600 ; 0055336b
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawText_FUN_00402600()
    ADD ESP,0xc                         ; 00553370
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 00553373
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_00558b00 ; 00553378
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getNextKeypress_FUN_00558b00()
    JMP 0x005531ba                      ; 0055337d
        ;   XREF to: 005531ba (UNCONDITIONAL_JUMP)  ; LAB_005531ba
    PUSH EDI                            ; 00553382
        ;   Label: LAB_00553382
    MOV EDX,dword ptr [EDI]             ; 00553383
    XOR EBP,EBP                         ; 00553385
    CALL dword ptr [EDX + 0x8]          ; 00553387
    MOV dword ptr [0x02ddf55c],EBP      ; 0055338a | DAT_02ddf55c
    JMP 0x00553268                      ; 00553390
        ;   XREF to: 00553268 (UNCONDITIONAL_JUMP)  ; LAB_00553268

