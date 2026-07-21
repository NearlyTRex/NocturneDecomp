; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_loadAssets_FUN_004befa0(void)
;
;
; XREF[3]:
;   FUN_004c2470 at 004c2dd3
;   core_game.cpp_CGame_loadAssets_FUN_004a3660 at 004a368e
;   core_inv.cpp_CInventory_renderSelectedItems_FUN_004c2150 at 004c23d1
;
; Referenced Globals:
;   undefined4 DAT_00586d91
;   string s_invsize.txt_00586d94
;   undefined4 DAT_00586da0
;   string s_%d,%d_00586da5
;   string s_invback_00586dac
;   string s_invback2_00586db4
;   string s_weapback_00586dbd
;   string s_weapback2_00586dc6
;   string s_battery_00586dd0
;   string s_hbar1_00586dd8
;   string s_hbar2_00586dde
;   string s_tommyclip24x24_00586de4
;   string s_bullet24x24_00586df3
;   string s_lithium24x24_00586dff
;   string s_mercurybullet24x24_00586e0c
;   ... and 13 more
;
; Called Functions:
;   core_inv.cpp_loadItem_FUN_004bed80
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fscanf_FUN_00563350
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0
;   engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0
;   engine_dosio.cpp_getFile_FUN_00456a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004befa0
        ;   Label: core_inv.cpp_loadAssets_FUN_004befa0
    PUSH EBP                            ; 004befa1
    PUSH 0x586d91                       ; 004befa2 | DAT_00586d91
    PUSH 0x586d94                       ; 004befa7 | = "invsize.txt"
    MOV EAX,[0x005b7620]                ; 004befac | DAT_005b7620
    PUSH 0x586da0                       ; 004befb1 | DAT_00586da0
    MOV [0x01cc30a0],EAX                ; 004befb6 | DAT_01cc30a0
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004befbb
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    MOV EBX,EAX                         ; 004befc0
    ADD ESP,0xc                         ; 004befc2
    TEST EAX,EAX                        ; 004befc5
    JNZ 0x004bf23d                      ; 004befc7
        ;   XREF to: 004bf23d (CONDITIONAL_JUMP)  ; LAB_004bf23d
    PUSH EDI                            ; 004befcd
        ;   Label: LAB_004befcd
    MOV EDX,dword ptr [0x005bab64]      ; 004befce | DAT_005bab64
    PUSH EDX                            ; 004befd4
    MOV ECX,dword ptr [0x005bab60]      ; 004befd5 | DAT_005bab60
    PUSH ECX                            ; 004befdb
    PUSH 0x586dac                       ; 004befdc | = "invback"
    PUSH 0x1cb0380                      ; 004befe1
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004befe6
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0()
    ADD ESP,0x10                        ; 004befeb
    MOV EBX,dword ptr [0x005bab64]      ; 004befee | DAT_005bab64
    PUSH EBX                            ; 004beff4
    PUSH EBX                            ; 004beff5
    PUSH 0x586db4                       ; 004beff6 | = "invback2"
    PUSH 0x1cb0394                      ; 004beffb
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004bf000
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0()
    ADD ESP,0x10                        ; 004bf005
    MOV EDI,dword ptr [0x005bab64]      ; 004bf008 | DAT_005bab64
    PUSH EDI                            ; 004bf00e
    MOV EBP,dword ptr [0x005bab60]      ; 004bf00f | DAT_005bab60
    PUSH EBP                            ; 004bf015
    PUSH 0x586dbd                       ; 004bf016 | = "weapback"
    PUSH 0x1cb03a8                      ; 004bf01b
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004bf020
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0()
    ADD ESP,0x10                        ; 004bf025
    MOV EAX,[0x005bab64]                ; 004bf028 | DAT_005bab64
    PUSH EAX                            ; 004bf02d
    PUSH EAX                            ; 004bf02e
    PUSH 0x586dc6                       ; 004bf02f | = "weapback2"
    PUSH 0x1cb03bc                      ; 004bf034
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004bf039
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0()
    ADD ESP,0x10                        ; 004bf03e
    PUSH 0x20                           ; 004bf041
    PUSH 0x10                           ; 004bf043
    PUSH 0x586dd0                       ; 004bf045 | = "battery"
    PUSH 0x1cc2fd8                      ; 004bf04a
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004bf04f
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0()
    ADD ESP,0x10                        ; 004bf054
    PUSH 0x40                           ; 004bf057
    PUSH 0x1b                           ; 004bf059
    PUSH 0x586dd8                       ; 004bf05b | = "hbar1"
    PUSH 0x1cc2fec                      ; 004bf060
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004bf065
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0()
    ADD ESP,0x10                        ; 004bf06a
    PUSH 0x40                           ; 004bf06d
    PUSH 0x1b                           ; 004bf06f
    PUSH 0x586dde                       ; 004bf071 | = "hbar2"
    PUSH 0x1cc3000                      ; 004bf076
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004bf07b
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0()
    ADD ESP,0x10                        ; 004bf080
    PUSH 0x18                           ; 004bf083
    PUSH 0x18                           ; 004bf085
    PUSH 0x586de4                       ; 004bf087 | = "tommyclip24x24"
    PUSH 0x1cc3014                      ; 004bf08c
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004bf091
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0()
    ADD ESP,0x10                        ; 004bf096
    PUSH 0x18                           ; 004bf099
    PUSH 0x18                           ; 004bf09b
    PUSH 0x586df3                       ; 004bf09d | = "bullet24x24"
    PUSH 0x1cc3028                      ; 004bf0a2
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004bf0a7
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0()
    ADD ESP,0x10                        ; 004bf0ac
    PUSH 0x18                           ; 004bf0af
    PUSH 0x18                           ; 004bf0b1
    PUSH 0x586dff                       ; 004bf0b3 | = "lithium24x24"
    PUSH 0x1cc303c                      ; 004bf0b8
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004bf0bd
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0()
    ADD ESP,0x10                        ; 004bf0c2
    POP EDI                             ; 004bf0c5
    PUSH 0x18                           ; 004bf0c6
    PUSH 0x18                           ; 004bf0c8
    PUSH 0x586e0c                       ; 004bf0ca | = "mercurybullet24x24"
    PUSH 0x1cc3050                      ; 004bf0cf
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004bf0d4
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0()
    ADD ESP,0x10                        ; 004bf0d9
    PUSH 0x18                           ; 004bf0dc
    PUSH 0x18                           ; 004bf0de
    PUSH 0x586e1f                       ; 004bf0e0 | = "shotshell24x24"
    PUSH 0x1cc3064                      ; 004bf0e5
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004bf0ea
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0()
    ADD ESP,0x10                        ; 004bf0ef
    PUSH 0x18                           ; 004bf0f2
    PUSH 0x18                           ; 004bf0f4
    PUSH 0x586e2e                       ; 004bf0f6 | = "silverbullet24x24"
    PUSH 0x1cc3078                      ; 004bf0fb
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004bf100
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0()
    ADD ESP,0x10                        ; 004bf105
    PUSH 0x18                           ; 004bf108
    PUSH 0x18                           ; 004bf10a
    PUSH 0x586e40                       ; 004bf10c | = "holybullet24x24"
    PUSH 0x1cc308c                      ; 004bf111
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004bf116
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0()
    MOV EAX,[0x005b9354]                ; 004bf11b | DAT_005b9354
    MOV ECX,dword ptr [EAX + 0x4]       ; 004bf120 | DAT_01c775f0
    ADD ESP,0x10                        ; 004bf123
    CMP ECX,0x180                       ; 004bf126
    JGE 0x004bf1ed                      ; 004bf12c
        ;   XREF to: 004bf1ed (CONDITIONAL_JUMP)  ; LAB_004bf1ed
    PUSH 0x2                            ; 004bf132
    PUSH 0x2                            ; 004bf134
    PUSH 0x1cb0394                      ; 004bf136
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0 ; 004bf13b
        ;   XREF to: 0040e9e0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0()
    ADD ESP,0xc                         ; 004bf140
    PUSH 0x2                            ; 004bf143
    PUSH 0x2                            ; 004bf145
    PUSH 0x1cb03bc                      ; 004bf147
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0 ; 004bf14c
        ;   XREF to: 0040e9e0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0()
    ADD ESP,0xc                         ; 004bf151
    PUSH 0x2                            ; 004bf154
    PUSH 0x2                            ; 004bf156
    PUSH 0x1cc2fec                      ; 004bf158
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0 ; 004bf15d
        ;   XREF to: 0040e9e0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0()
    ADD ESP,0xc                         ; 004bf162
    PUSH 0x2                            ; 004bf165
    PUSH 0x2                            ; 004bf167
    PUSH 0x1cc3000                      ; 004bf169
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0 ; 004bf16e
        ;   XREF to: 0040e9e0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0()
    ADD ESP,0xc                         ; 004bf173
    PUSH 0x2                            ; 004bf176
    PUSH 0x2                            ; 004bf178
    PUSH 0x1cc3014                      ; 004bf17a
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0 ; 004bf17f
        ;   XREF to: 0040e9e0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0()
    ADD ESP,0xc                         ; 004bf184
    PUSH 0x2                            ; 004bf187
    PUSH 0x2                            ; 004bf189
    PUSH 0x1cc3028                      ; 004bf18b
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0 ; 004bf190
        ;   XREF to: 0040e9e0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0()
    ADD ESP,0xc                         ; 004bf195
    PUSH 0x2                            ; 004bf198
    PUSH 0x2                            ; 004bf19a
    PUSH 0x1cc303c                      ; 004bf19c
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0 ; 004bf1a1
        ;   XREF to: 0040e9e0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0()
    ADD ESP,0xc                         ; 004bf1a6
    PUSH 0x2                            ; 004bf1a9
    PUSH 0x2                            ; 004bf1ab
    PUSH 0x1cc3050                      ; 004bf1ad
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0 ; 004bf1b2
        ;   XREF to: 0040e9e0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0()
    ADD ESP,0xc                         ; 004bf1b7
    PUSH 0x2                            ; 004bf1ba
    PUSH 0x2                            ; 004bf1bc
    PUSH 0x1cc3064                      ; 004bf1be
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0 ; 004bf1c3
        ;   XREF to: 0040e9e0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0()
    ADD ESP,0xc                         ; 004bf1c8
    PUSH 0x2                            ; 004bf1cb
    PUSH 0x2                            ; 004bf1cd
    PUSH 0x1cc3078                      ; 004bf1cf
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0 ; 004bf1d4
        ;   XREF to: 0040e9e0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0()
    ADD ESP,0xc                         ; 004bf1d9
    PUSH 0x2                            ; 004bf1dc
    PUSH 0x2                            ; 004bf1de
    PUSH 0x1cc308c                      ; 004bf1e0
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0 ; 004bf1e5
        ;   XREF to: 0040e9e0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0()
    ADD ESP,0xc                         ; 004bf1ea
    PUSH 0x586e50                       ; 004bf1ed | DAT_00586e50
        ;   Label: LAB_004bf1ed
    PUSH 0x586e53                       ; 004bf1f2 | = "itemlist.txt"
    XOR EBX,EBX                         ; 004bf1f7
    PUSH 0x586e60                       ; 004bf1f9 | DAT_00586e60
    MOV dword ptr [0x01cb03d0],EBX      ; 004bf1fe | DAT_01cb03d0
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004bf204
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 004bf209
    MOV EBX,EAX                         ; 004bf20c
    TEST EAX,EAX                        ; 004bf20e
    JZ 0x004bf26c                       ; 004bf210
        ;   XREF to: 004bf26c (CONDITIONAL_JUMP)  ; LAB_004bf26c
    TEST byte ptr [EBX + 0xc],0x10      ; 004bf212
        ;   Label: LAB_004bf212
    JNZ 0x004bf263                      ; 004bf216
        ;   XREF to: 004bf263 (CONDITIONAL_JUMP)  ; LAB_004bf263
    IMUL EAX,dword ptr [0x01cb03d0],0x300 ; 004bf218 | DAT_01cb03d0
    PUSH EBX                            ; 004bf222
    ADD EAX,0x1cb03d8                   ; 004bf223
    PUSH EAX                            ; 004bf228
    CALL core_inv.cpp_loadItem_FUN_004bed80 ; 004bf229
        ;   XREF to: 004bed80 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_loadItem_FUN_004bed80()
    ADD ESP,0x8                         ; 004bf22e
    TEST EAX,EAX                        ; 004bf231
    JZ 0x004bf263                       ; 004bf233
        ;   XREF to: 004bf263 (CONDITIONAL_JUMP)  ; LAB_004bf263
    INC dword ptr [0x01cb03d0]          ; 004bf235 | DAT_01cb03d0
    JMP 0x004bf212                      ; 004bf23b
        ;   XREF to: 004bf212 (UNCONDITIONAL_JUMP)  ; LAB_004bf212
    PUSH 0x5bab64                       ; 004bf23d | DAT_005bab64
        ;   Label: LAB_004bf23d
    PUSH 0x5bab60                       ; 004bf242 | DAT_005bab60
    PUSH 0x586da5                       ; 004bf247 | = "%d,%d\n"
    PUSH EAX                            ; 004bf24c
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004bf24d
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 004bf252
    PUSH EBX                            ; 004bf255
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004bf256
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 004bf25b
    JMP 0x004befcd                      ; 004bf25e
        ;   XREF to: 004befcd (UNCONDITIONAL_JUMP)  ; LAB_004befcd
    PUSH EBX                            ; 004bf263
        ;   Label: LAB_004bf263
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004bf264
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 004bf269
    POP EBP                             ; 004bf26c
        ;   Label: LAB_004bf26c
    POP EBX                             ; 004bf26d
    RET                                 ; 004bf26e

