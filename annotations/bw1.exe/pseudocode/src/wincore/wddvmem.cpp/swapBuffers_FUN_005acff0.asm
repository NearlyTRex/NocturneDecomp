; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005acff0(void)
;
; Local Variables:
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[38]:
;   core_game.cpp_CGame_finishAct_FUN_004d8a90 at 004d8e10
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50 at 004d90c3
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004d02b1
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530 at 004cf5b3
;   core_game.cpp_FUN_004d77d0 at 004d79ad
;   core_level.cpp_CLevelLoader_update_FUN_004fe9c0 at 004fef5d
;   core_main.c_FUN_005031c0 at 00503207
;   core_main.c_FUN_005032a0 at 005038a6
;   core_menu.cpp_FUN_0050b470 at 0050b791
;   core_menu.cpp_FUN_0050ba70 at 0050c2fa
;   ... and 28 more
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005f9800
;   TerminatedCString s_Unable_to_unlock_front_b_005f9817
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_006260e4
;   undefined4 DAT_00629010
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c99304
;   undefined4 DAT_02c99314
;   ... and 4 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_memset_FUN_005bfb70
;   engine_special.cpp_presentToExternalRenderer_FUN_00582990
;   wincore_wddvmem.cpp_closeScreenDevice_FUN_005acc00
;   wincore_wddvmem.cpp_openScreenDevice_FUN_005acb10
;   wincore_wddvmem.cpp_videoRestore_FUN_005ad2c0
;   wincore_winrun.cpp_FUN_005b2cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005acff0
        ;   Label: wincore_wddvmem.cpp_swapBuffers_FUN_005acff0
    PUSH ESI                            ; 005acff1
    PUSH EDI                            ; 005acff2
    PUSH EBP                            ; 005acff3
    MOV EBP,ESP                         ; 005acff4
    SUB ESP,0x7c                        ; 005acff6
    CMP dword ptr [0x006260e4],0x0      ; 005acff9 | DAT_006260e4
    JZ 0x005ad0c1                       ; 005ad000
        ;   XREF to: 005ad0c1 (CONDITIONAL_JUMP)  ; LAB_005ad0c1
    MOV ECX,dword ptr [0x01c50948]      ; 005ad006 | DAT_01c50948
    TEST ECX,ECX                        ; 005ad00c
    JNZ 0x005ad0d5                      ; 005ad00e
        ;   XREF to: 005ad0d5 (CONDITIONAL_JUMP)  ; LAB_005ad0d5
    MOV EBX,dword ptr [0x02c99314]      ; 005ad014 | DAT_02c99314
    TEST EBX,EBX                        ; 005ad01a
    JNZ 0x005ad09d                      ; 005ad01c
        ;   XREF to: 005ad09d (CONDITIONAL_JUMP)  ; LAB_005ad09d
    CMP dword ptr [0x02c9931c],0x0      ; 005ad022 | DAT_02c9931c
    JZ 0x005ad0f3                       ; 005ad029
        ;   XREF to: 005ad0f3 (CONDITIONAL_JUMP)  ; LAB_005ad0f3
    MOV ESI,dword ptr [0x00629010]      ; 005ad02f | DAT_00629010
    MOV dword ptr [0x02c9931c],ECX      ; 005ad035 | DAT_02c9931c
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005acb10 ; 005ad03b
        ;   XREF to: 005acb10 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_openScreenDevice_FUN_005acb10()
    MOV EBX,dword ptr [0x0061b49c]      ; 005ad040 | DAT_0061b49c
    XOR ECX,ECX                         ; 005ad046
    TEST EBX,EBX                        ; 005ad048
    JLE 0x005ad08e                      ; 005ad04a
        ;   XREF to: 005ad08e (CONDITIONAL_JUMP)  ; LAB_005ad08e
    XOR EDI,EDI                         ; 005ad04c
    MOV EBX,dword ptr [0x0061b498]      ; 005ad04e | DAT_0061b498
        ;   Label: LAB_005ad04e
    MOV EAX,dword ptr [EDI + 0x1c4354c] ; 005ad054 | DAT_01c4354c | DAT_01c43550
    XOR EDX,EDX                         ; 005ad05a
    TEST EBX,EBX                        ; 005ad05c
    JLE 0x005ad081                      ; 005ad05e
        ;   XREF to: 005ad081 (CONDITIONAL_JUMP)  ; LAB_005ad081
    MOV BL,byte ptr [ESI]               ; 005ad060
        ;   Label: LAB_005ad060
    MOV byte ptr [EAX],BL               ; 005ad062
    MOV BL,byte ptr [ESI + 0x1]         ; 005ad064
    ADD ESI,0x4                         ; 005ad067
    MOV byte ptr [EAX + 0x1],BL         ; 005ad06a
    MOV BL,byte ptr [ESI + -0x2]        ; 005ad06d
    INC EDX                             ; 005ad070
    MOV byte ptr [EAX + 0x2],BL         ; 005ad071
    MOV EBX,dword ptr [0x0061b498]      ; 005ad074 | DAT_0061b498
    ADD EAX,0x3                         ; 005ad07a
    CMP EDX,EBX                         ; 005ad07d
    JL 0x005ad060                       ; 005ad07f
        ;   XREF to: 005ad060 (CONDITIONAL_JUMP)  ; LAB_005ad060
    MOV EAX,[0x0061b49c]                ; 005ad081 | DAT_0061b49c
        ;   Label: LAB_005ad081
    INC ECX                             ; 005ad086
    ADD EDI,0x4                         ; 005ad087
    CMP ECX,EAX                         ; 005ad08a
    JL 0x005ad04e                       ; 005ad08c
        ;   XREF to: 005ad04e (CONDITIONAL_JUMP)  ; LAB_005ad04e
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005acc00 ; 005ad08e
        ;   XREF to: 005acc00 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_closeScreenDevice_FUN_005acc00()
        ;   Label: LAB_005ad08e
    MOV dword ptr [0x02c9931c],0x1      ; 005ad093 | DAT_02c9931c
    MOV ESI,dword ptr [0x02c99304]      ; 005ad09d | DAT_02c99304
        ;   Label: LAB_005ad09d
    TEST ESI,ESI                        ; 005ad0a3
    JZ 0x005ad0c1                       ; 005ad0a5
        ;   XREF to: 005ad0c1 (CONDITIONAL_JUMP)  ; LAB_005ad0c1
    PUSH 0x1                            ; 005ad0a7
    PUSH 0x0                            ; 005ad0a9
    MOV EDX,dword ptr [ESI]             ; 005ad0ab
    PUSH ESI                            ; 005ad0ad
    CALL dword ptr [EDX + 0x2c]         ; 005ad0ae
    TEST EAX,EAX                        ; 005ad0b1
    JZ 0x005ad0c1                       ; 005ad0b3
        ;   XREF to: 005ad0c1 (CONDITIONAL_JUMP)  ; LAB_005ad0c1
    CMP EAX,0x887601c2                  ; 005ad0b5
    JNZ 0x005ad0c1                      ; 005ad0ba
        ;   XREF to: 005ad0c1 (CONDITIONAL_JUMP)  ; LAB_005ad0c1
    CALL wincore_wddvmem.cpp_videoRestore_FUN_005ad2c0 ; 005ad0bc
        ;   XREF to: 005ad2c0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_videoRestore_FUN_005ad2c0()
    XOR EDI,EDI                         ; 005ad0c1
        ;   Label: LAB_005ad0c1
    MOV dword ptr [0x02c99314],EDI      ; 005ad0c3 | DAT_02c99314
    CALL wincore_winrun.cpp_FUN_005b2cf0 ; 005ad0c9
        ;   XREF to: 005b2cf0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_FUN_005b2cf0()
    MOV ESP,EBP                         ; 005ad0ce
    POP EBP                             ; 005ad0d0
    POP EDI                             ; 005ad0d1
    POP ESI                             ; 005ad0d2
    POP EBX                             ; 005ad0d3
    RET                                 ; 005ad0d4
    PUSH 0x0                            ; 005ad0d5
        ;   Label: LAB_005ad0d5
    CALL engine_special.cpp_presentToExternalRenderer_FUN_00582990 ; 005ad0d7
        ;   XREF to: 00582990 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_presentToExternalRenderer_FUN_00582990(int skip_buffer_copy)
    ADD ESP,0x4                         ; 005ad0dc
    XOR EDI,EDI                         ; 005ad0df
    MOV dword ptr [0x02c99314],EDI      ; 005ad0e1 | DAT_02c99314
    CALL wincore_winrun.cpp_FUN_005b2cf0 ; 005ad0e7
        ;   XREF to: 005b2cf0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_FUN_005b2cf0()
    MOV ESP,EBP                         ; 005ad0ec
    POP EBP                             ; 005ad0ee
    POP EDI                             ; 005ad0ef
    POP ESI                             ; 005ad0f0
    POP EBX                             ; 005ad0f1
    RET                                 ; 005ad0f2
    MOV EAX,[0x00629010]                ; 005ad0f3 | DAT_00629010
        ;   Label: LAB_005ad0f3
    MOV dword ptr [EBP + -0x10],EAX     ; 005ad0f8
    MOV EAX,[0x0061b4a0]                ; 005ad0fb | DAT_0061b4a0
    MOV EDX,EAX                         ; 005ad100
    SAR EDX,0x1f                        ; 005ad102
    SHL EDX,0x3                         ; 005ad105
    SBB EAX,EDX                         ; 005ad108
    SAR EAX,0x3                         ; 005ad10a
    MOV EDX,dword ptr [0x0061b498]      ; 005ad10d | DAT_0061b498
    IMUL EDX,EAX                        ; 005ad113
    PUSH 0x6c                           ; 005ad116
    PUSH ECX                            ; 005ad118
    MOV dword ptr [EBP + -0xc],EDX      ; 005ad119
    LEA EAX,[EBP + -0x7c]               ; 005ad11c
    PUSH EAX                            ; 005ad11f
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005ad120
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005ad125
    PUSH EBX                            ; 005ad128
    PUSH 0x1                            ; 005ad129
    LEA EDX,[EBP + -0x7c]               ; 005ad12b
    MOV EDI,0x6c                        ; 005ad12e
    PUSH EDX                            ; 005ad133
    MOV EAX,[0x02c99304]                ; 005ad134 | DAT_02c99304
    MOV dword ptr [EBP + -0x7c],EDI     ; 005ad139
    PUSH EBX                            ; 005ad13c
    MOV ECX,dword ptr [EAX]             ; 005ad13d
    PUSH EAX                            ; 005ad13f
    CALL dword ptr [ECX + 0x64]         ; 005ad140
    MOV ECX,EAX                         ; 005ad143
    MOV EAX,dword ptr [EBP + -0x58]     ; 005ad145
    MOV dword ptr [EBP + -0x8],EAX      ; 005ad148
    MOV ESI,dword ptr [EBP + -0x6c]     ; 005ad14b
    IMUL ESI,dword ptr [0x02c99330]     ; 005ad14e | DAT_02c99330
    MOV EDX,dword ptr [0x02c9932c]      ; 005ad155 | DAT_02c9932c
    MOV EBX,dword ptr [0x02c99328]      ; 005ad15b | DAT_02c99328
    IMUL EDX,EBX                        ; 005ad161
    MOV EAX,EDX                         ; 005ad164
    SAR EDX,0x1f                        ; 005ad166
    SHL EDX,0x3                         ; 005ad169
    SBB EAX,EDX                         ; 005ad16c
    SAR EAX,0x3                         ; 005ad16e
    ADD EAX,ESI                         ; 005ad171
    ADD dword ptr [EBP + -0x8],EAX      ; 005ad173
    TEST ECX,ECX                        ; 005ad176
    JNZ 0x005ad0c1                      ; 005ad178
        ;   XREF to: 005ad0c1 (CONDITIONAL_JUMP)  ; LAB_005ad0c1
    CMP dword ptr [EBP + -0x8],0x0      ; 005ad17e
    JZ 0x005ad0c1                       ; 005ad182
        ;   XREF to: 005ad0c1 (CONDITIONAL_JUMP)  ; LAB_005ad0c1
    XOR EAX,EAX                         ; 005ad188
    MOV EDX,dword ptr [0x0061b49c]      ; 005ad18a | DAT_0061b49c
    MOV dword ptr [EBP + -0x4],EAX      ; 005ad190
    TEST EDX,EDX                        ; 005ad193
    JLE 0x005ad1fe                      ; 005ad195
        ;   XREF to: 005ad1fe (CONDITIONAL_JUMP)  ; LAB_005ad1fe
    CMP dword ptr [0x01c51d00],0x0      ; 005ad197 | DAT_01c51d00
        ;   Label: LAB_005ad197
    JZ 0x005ad24d                       ; 005ad19e
        ;   XREF to: 005ad24d (CONDITIONAL_JUMP)  ; LAB_005ad24d
    MOV ECX,dword ptr [EBP + 0xfffffff4] ; 005ad1a4
    MOV ESI,dword ptr [EBP + 0xfffffff0] ; 005ad1aa
    MOV EDI,dword ptr [EBP + 0xfffffff8] ; 005ad1b0
    MOVQ MM0,qword ptr [ESI]            ; 005ad1b6
        ;   Label: LAB_005ad1b6
    MOVQ MM1,qword ptr [ESI + 0x8]      ; 005ad1b9
    MOVQ MM2,qword ptr [ESI + 0x10]     ; 005ad1bd
    MOVQ MM3,qword ptr [ESI + 0x18]     ; 005ad1c1
    MOVQ qword ptr [EDI],MM0            ; 005ad1c5
    MOVQ qword ptr [EDI + 0x8],MM1      ; 005ad1c8
    MOVQ qword ptr [EDI + 0x10],MM2     ; 005ad1cc
    MOVQ qword ptr [EDI + 0x18],MM3     ; 005ad1d0
    ADD ESI,0x20                        ; 005ad1d4
    ADD EDI,0x20                        ; 005ad1d7
    SUB ECX,0x20                        ; 005ad1da
    JG 0x005ad1b6                       ; 005ad1dd
        ;   XREF to: 005ad1b6 (CONDITIONAL_JUMP)  ; LAB_005ad1b6
    EMMS                                ; 005ad1df
    MOV EAX,dword ptr [EBP + -0xc]      ; 005ad1e1
        ;   Label: LAB_005ad1e1
    ADD dword ptr [EBP + -0x10],EAX     ; 005ad1e4
    MOV EAX,dword ptr [EBP + -0x6c]     ; 005ad1e7
    ADD dword ptr [EBP + -0x8],EAX      ; 005ad1ea
    MOV EAX,dword ptr [EBP + -0x4]      ; 005ad1ed
    INC EAX                             ; 005ad1f0
    MOV EDX,dword ptr [0x0061b49c]      ; 005ad1f1 | DAT_0061b49c
    MOV dword ptr [EBP + -0x4],EAX      ; 005ad1f7
    CMP EAX,EDX                         ; 005ad1fa
    JL 0x005ad197                       ; 005ad1fc
        ;   XREF to: 005ad197 (CONDITIONAL_JUMP)  ; LAB_005ad197
    PUSH 0x0                            ; 005ad1fe
        ;   Label: LAB_005ad1fe
    MOV EAX,[0x02c99304]                ; 005ad200 | DAT_02c99304
    PUSH EAX                            ; 005ad205
    MOV EDX,dword ptr [EAX]             ; 005ad206
    CALL dword ptr [EDX + 0x80]         ; 005ad208
    TEST EAX,EAX                        ; 005ad20e
    JZ 0x005ad0c1                       ; 005ad210
        ;   XREF to: 005ad0c1 (CONDITIONAL_JUMP)  ; LAB_005ad0c1
    MOV ECX,0x5f9800                    ; 005ad216 | = "..\\wincore\\wddvmem.cpp"
    MOV EBX,0x381                       ; 005ad21b
    PUSH 0x5f9817                       ; 005ad220 | = "Unable to unlock front buffer"
    MOV dword ptr [0x01d1d400],ECX      ; 005ad225 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 005ad22b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005ad231
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005ad236
    XOR EDI,EDI                         ; 005ad239
    MOV dword ptr [0x02c99314],EDI      ; 005ad23b | DAT_02c99314
    CALL wincore_winrun.cpp_FUN_005b2cf0 ; 005ad241
        ;   XREF to: 005b2cf0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_FUN_005b2cf0()
    MOV ESP,EBP                         ; 005ad246
    POP EBP                             ; 005ad248
    POP EDI                             ; 005ad249
    POP ESI                             ; 005ad24a
    POP EBX                             ; 005ad24b
    RET                                 ; 005ad24c
    MOV ECX,dword ptr [EBP + -0xc]      ; 005ad24d
        ;   Label: LAB_005ad24d
    MOV ESI,dword ptr [EBP + -0x10]     ; 005ad250
    MOV EDI,dword ptr [EBP + -0x8]      ; 005ad253
    PUSH EDI                            ; 005ad256
    MOV EAX,ECX                         ; 005ad257
    SHR ECX,0x2                         ; 005ad259
    MOVSD.REP ES:EDI,ESI                ; 005ad25c
    MOV CL,AL                           ; 005ad25e
    AND CL,0x3                          ; 005ad260
    MOVSB.REP ES:EDI,ESI                ; 005ad263
    POP EDI                             ; 005ad265
    JMP 0x005ad1e1                      ; 005ad266
        ;   XREF to: 005ad1e1 (UNCONDITIONAL_JUMP)  ; LAB_005ad1e1

