; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004f70e0(void)
;
;
; XREF[3]:
;   core_game.cpp_CGame_loadAssets_FUN_004d5e40 at 004d5e6e
;   core_inv.cpp_CInventory_renderSelectedItems_FUN_004faaf0 at 004fad71
;   core_inv.cpp_FUN_004fae10 at 004fae67
;
; Referenced Globals:
;   undefined4 DAT_005e6078
;   TerminatedCString s_invsize_txt_005e607b
;   undefined4 DAT_005e6087
;   TerminatedCString s_d_d_005e608c
;   TerminatedCString s_invback_005e6093
;   TerminatedCString s_invback2_005e609b
;   TerminatedCString s_weapback_005e60a4
;   TerminatedCString s_weapback2_005e60ad
;   TerminatedCString s_battery_005e60b7
;   TerminatedCString s_hbar1_005e60bf
;   TerminatedCString s_hbar2_005e60c5
;   TerminatedCString s_tommyclip24x24_005e60cb
;   TerminatedCString s_bullet24x24_005e60da
;   TerminatedCString s_lithium24x24_005e60e6
;   TerminatedCString s_mercurybullet24x24_005e60f3
;   ... and 40 more
;
; Called Functions:
;   core_inv.cpp_loadItem_FUN_004f6e90
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fscanf_FUN_005c04b0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;   engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840
;   engine_dosio.cpp_FUN_00479180
;   engine_texture.cpp_FUN_00597a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f70e0
        ;   Label: core_inv.cpp_FUN_004f70e0
    PUSH ESI                            ; 004f70e1
    PUSH EDI                            ; 004f70e2
    PUSH EBP                            ; 004f70e3
    PUSH 0x5e6078                       ; 004f70e4 | DAT_005e6078
    PUSH 0x5e607b                       ; 004f70e9 | = "invsize.txt"
    MOV EAX,[0x0061b49c]                ; 004f70ee | DAT_0061b49c
    PUSH 0x5e6087                       ; 004f70f3 | DAT_005e6087
    MOV [0x01d1bc5c],EAX                ; 004f70f8 | DAT_01d1bc5c
    CALL engine_dosio.cpp_FUN_00479180  ; 004f70fd
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 004f7102
    ADD ESP,0xc                         ; 004f7104
    TEST EAX,EAX                        ; 004f7107
    JNZ 0x004f7567                      ; 004f7109
        ;   XREF to: 004f7567 (CONDITIONAL_JUMP)  ; LAB_004f7567
    MOV EDX,dword ptr [0x0061f1a4]      ; 004f710f | DAT_0061f1a4
        ;   Label: LAB_004f710f
    PUSH EDX                            ; 004f7115
    MOV ECX,dword ptr [0x0061f1a0]      ; 004f7116 | DAT_0061f1a0
    PUSH ECX                            ; 004f711c
    PUSH 0x5e6093                       ; 004f711d | = "invback"
    PUSH 0x1d08d78                      ; 004f7122
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f7127
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f712c
    MOV EBX,dword ptr [0x0061f1a4]      ; 004f712f | DAT_0061f1a4
    PUSH EBX                            ; 004f7135
    PUSH EBX                            ; 004f7136
    PUSH 0x5e609b                       ; 004f7137 | = "invback2"
    PUSH 0x1d08d8c                      ; 004f713c
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f7141
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f7146
    MOV EDI,dword ptr [0x0061f1a4]      ; 004f7149 | DAT_0061f1a4
    PUSH EDI                            ; 004f714f
    MOV EBP,dword ptr [0x0061f1a0]      ; 004f7150 | DAT_0061f1a0
    PUSH EBP                            ; 004f7156
    PUSH 0x5e60a4                       ; 004f7157 | = "weapback"
    PUSH 0x1d08da0                      ; 004f715c
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f7161
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f7166
    MOV EAX,[0x0061f1a4]                ; 004f7169 | DAT_0061f1a4
    PUSH EAX                            ; 004f716e
    PUSH EAX                            ; 004f716f
    PUSH 0x5e60ad                       ; 004f7170 | = "weapback2"
    PUSH 0x1d08db4                      ; 004f7175
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f717a
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f717f
    PUSH 0x20                           ; 004f7182
    PUSH 0x10                           ; 004f7184
    PUSH 0x5e60b7                       ; 004f7186 | = "battery"
    PUSH 0x1d1b9d0                      ; 004f718b
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f7190
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f7195
    PUSH 0x40                           ; 004f7198
    PUSH 0x1b                           ; 004f719a
    PUSH 0x5e60bf                       ; 004f719c | = "hbar1"
    PUSH 0x1d1b9e4                      ; 004f71a1
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f71a6
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f71ab
    PUSH 0x40                           ; 004f71ae
    PUSH 0x1b                           ; 004f71b0
    PUSH 0x5e60c5                       ; 004f71b2 | = "hbar2"
    PUSH 0x1d1b9f8                      ; 004f71b7
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f71bc
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f71c1
    PUSH 0x18                           ; 004f71c4
    PUSH 0x18                           ; 004f71c6
    PUSH 0x5e60cb                       ; 004f71c8 | = "tommyclip24x24"
    PUSH 0x1d1ba0c                      ; 004f71cd
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f71d2
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f71d7
    PUSH 0x18                           ; 004f71da
    PUSH 0x18                           ; 004f71dc
    PUSH 0x5e60da                       ; 004f71de | = "bullet24x24"
    PUSH 0x1d1ba20                      ; 004f71e3
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f71e8
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f71ed
    PUSH 0x18                           ; 004f71f0
    PUSH 0x18                           ; 004f71f2
    PUSH 0x5e60e6                       ; 004f71f4 | = "lithium24x24"
    PUSH 0x1d1ba34                      ; 004f71f9
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f71fe
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f7203
    PUSH 0x18                           ; 004f7206
    PUSH 0x18                           ; 004f7208
    PUSH 0x5e60f3                       ; 004f720a | = "mercurybullet24x24"
    PUSH 0x1d1ba48                      ; 004f720f
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f7214
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f7219
    PUSH 0x18                           ; 004f721c
    PUSH 0x18                           ; 004f721e
    PUSH 0x5e6106                       ; 004f7220 | = "shotshell24x24"
    PUSH 0x1d1ba5c                      ; 004f7225
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f722a
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f722f
    PUSH 0x18                           ; 004f7232
    PUSH 0x18                           ; 004f7234
    PUSH 0x5e6115                       ; 004f7236 | = "silverbullet24x24"
    PUSH 0x1d1ba70                      ; 004f723b
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f7240
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f7245
    PUSH 0x18                           ; 004f7248
    PUSH 0x18                           ; 004f724a
    PUSH 0x5e6127                       ; 004f724c | = "holybullet24x24"
    PUSH 0x1d1ba84                      ; 004f7251
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f7256
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f725b
    PUSH 0x52                           ; 004f725e
    PUSH 0x64                           ; 004f7260
    PUSH 0x5e6137                       ; 004f7262 | = "sps100x82"
    PUSH 0x1d1baf4                      ; 004f7267
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f726c
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f7271
    PUSH 0x40                           ; 004f7274
    PUSH 0x40                           ; 004f7276
    PUSH 0x5e6141                       ; 004f7278 | = "spsf1"
    PUSH 0x1d1bb08                      ; 004f727d
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f7282
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f7287
    PUSH 0x40                           ; 004f728a
    PUSH 0x40                           ; 004f728c
    PUSH 0x5e6147                       ; 004f728e | = "spsf2"
    PUSH 0x1d1bb1c                      ; 004f7293
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f7298
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f729d
    PUSH 0x40                           ; 004f72a0
    PUSH 0x40                           ; 004f72a2
    PUSH 0x5e614d                       ; 004f72a4 | = "spsf3"
    PUSH 0x1d1bb30                      ; 004f72a9
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f72ae
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f72b3
    PUSH 0x40                           ; 004f72b6
    PUSH 0x40                           ; 004f72b8
    PUSH 0x5e6153                       ; 004f72ba | = "spsf4"
    PUSH 0x1d1bb44                      ; 004f72bf
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f72c4
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f72c9
    PUSH 0x40                           ; 004f72cc
    PUSH 0x40                           ; 004f72ce
    PUSH 0x5e6159                       ; 004f72d0 | = "spsl1"
    PUSH 0x1d1bb58                      ; 004f72d5
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f72da
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f72df
    PUSH 0x40                           ; 004f72e2
    PUSH 0x40                           ; 004f72e4
    PUSH 0x5e615f                       ; 004f72e6 | = "spsl2"
    PUSH 0x1d1bb6c                      ; 004f72eb
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f72f0
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f72f5
    PUSH 0x40                           ; 004f72f8
    PUSH 0x40                           ; 004f72fa
    PUSH 0x5e6165                       ; 004f72fc | = "spsl3"
    PUSH 0x1d1bb80                      ; 004f7301
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f7306
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f730b
    PUSH 0x40                           ; 004f730e
    PUSH 0x40                           ; 004f7310
    PUSH 0x5e616b                       ; 004f7312 | = "spsl4"
    PUSH 0x1d1bb94                      ; 004f7317
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f731c
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f7321
    PUSH 0x40                           ; 004f7324
    PUSH 0x40                           ; 004f7326
    PUSH 0x5e6171                       ; 004f7328 | = "spsm1"
    PUSH 0x1d1bba8                      ; 004f732d
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f7332
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f7337
    PUSH 0x40                           ; 004f733a
    PUSH 0x40                           ; 004f733c
    PUSH 0x5e6177                       ; 004f733e | = "spsm2"
    PUSH 0x1d1bbbc                      ; 004f7343
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f7348
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f734d
    PUSH 0x40                           ; 004f7350
    PUSH 0x40                           ; 004f7352
    PUSH 0x5e617d                       ; 004f7354 | = "spsm3"
    PUSH 0x1d1bbd0                      ; 004f7359
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f735e
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f7363
    PUSH 0x40                           ; 004f7366
    PUSH 0x40                           ; 004f7368
    PUSH 0x5e6183                       ; 004f736a | = "spsm4"
    PUSH 0x1d1bbe4                      ; 004f736f
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f7374
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f7379
    PUSH 0x40                           ; 004f737c
    PUSH 0x40                           ; 004f737e
    PUSH 0x5e6189                       ; 004f7380 | = "spss1"
    PUSH 0x1d1bbf8                      ; 004f7385
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f738a
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f738f
    PUSH 0x40                           ; 004f7392
    PUSH 0x40                           ; 004f7394
    PUSH 0x5e618f                       ; 004f7396 | = "spss2"
    PUSH 0x1d1bc0c                      ; 004f739b
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f73a0
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f73a5
    PUSH 0x40                           ; 004f73a8
    PUSH 0x40                           ; 004f73aa
    PUSH 0x5e6195                       ; 004f73ac | = "spss3"
    PUSH 0x1d1bc20                      ; 004f73b1
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f73b6
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f73bb
    PUSH 0x40                           ; 004f73be
    PUSH 0x40                           ; 004f73c0
    PUSH 0x5e619b                       ; 004f73c2 | = "spss4"
    PUSH 0x1d1bc34                      ; 004f73c7
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f73cc
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f73d1
    PUSH 0x40                           ; 004f73d4
    PUSH 0x40                           ; 004f73d6
    PUSH 0x5e61a1                       ; 004f73d8 | = "compass_background"
    PUSH 0x1d1ba98                      ; 004f73dd
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004f73e2
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f73e7
    MOV ESI,0x5e61b4                    ; 004f73ea | = "compass_arrow.raw"
    MOV EDI,0x1d1bab4                   ; 004f73ef
    PUSH EDI                            ; 004f73f4
    MOV AL,byte ptr [ESI]               ; 004f73f5 | = "compass_arrow.raw" | s_compass_arrow_raw_005e61b4+2
        ;   Label: LAB_004f73f5
    MOV byte ptr [EDI],AL               ; 004f73f7 | DAT_01d1bab4 | DAT_01d1bab6
    CMP AL,0x0                          ; 004f73f9
    JZ 0x004f740d                       ; 004f73fb
        ;   XREF to: 004f740d (CONDITIONAL_JUMP)  ; LAB_004f740d
    MOV AL,byte ptr [ESI + 0x1]         ; 004f73fd | s_compass_arrow_raw_005e61b4+1 | s_compass_arrow_raw_005e61b4+3
    ADD ESI,0x2                         ; 004f7400
    MOV byte ptr [EDI + 0x1],AL         ; 004f7403 | DAT_01d1bab5 | DAT_01d1bab7
    ADD EDI,0x2                         ; 004f7406
    CMP AL,0x0                          ; 004f7409
    JNZ 0x004f73f5                      ; 004f740b
        ;   XREF to: 004f73f5 (CONDITIONAL_JUMP)  ; LAB_004f73f5
    POP EDI                             ; 004f740d
        ;   Label: LAB_004f740d
    PUSH 0x1d1baac                      ; 004f740e
    CALL engine_texture.cpp_FUN_00597a20 ; 004f7413
        ;   XREF to: 00597a20 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597a20()
    MOV EAX,[0x0061d95c]                ; 004f7418 | g_CGamePtr
    MOV ECX,0xffffffff                  ; 004f741d
    ADD ESP,0x4                         ; 004f7422
    MOV EBX,dword ptr [EAX + 0x4]       ; 004f7425 | g_CGameInstance.game_pixy
    MOV dword ptr [0x01d1bc48],ECX      ; 004f7428 | DAT_01d1bc48
    CMP EBX,0x180                       ; 004f742e
    JGE 0x004f7517                      ; 004f7434
        ;   XREF to: 004f7517 (CONDITIONAL_JUMP)  ; LAB_004f7517
    PUSH 0x2                            ; 004f743a
    PUSH 0x2                            ; 004f743c
    PUSH 0x1d08d8c                      ; 004f743e
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840 ; 004f7443
        ;   XREF to: 0040d840 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004f7448
    PUSH 0x2                            ; 004f744b
    PUSH 0x2                            ; 004f744d
    PUSH 0x1d08db4                      ; 004f744f
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840 ; 004f7454
        ;   XREF to: 0040d840 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004f7459
    PUSH 0x2                            ; 004f745c
    PUSH 0x2                            ; 004f745e
    PUSH 0x1d1b9e4                      ; 004f7460
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840 ; 004f7465
        ;   XREF to: 0040d840 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004f746a
    PUSH 0x2                            ; 004f746d
    PUSH 0x2                            ; 004f746f
    PUSH 0x1d1b9f8                      ; 004f7471
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840 ; 004f7476
        ;   XREF to: 0040d840 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004f747b
    PUSH 0x2                            ; 004f747e
    PUSH 0x2                            ; 004f7480
    PUSH 0x1d1ba0c                      ; 004f7482
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840 ; 004f7487
        ;   XREF to: 0040d840 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004f748c
    PUSH 0x2                            ; 004f748f
    PUSH 0x2                            ; 004f7491
    PUSH 0x1d1ba20                      ; 004f7493
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840 ; 004f7498
        ;   XREF to: 0040d840 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004f749d
    PUSH 0x2                            ; 004f74a0
    PUSH 0x2                            ; 004f74a2
    PUSH 0x1d1ba34                      ; 004f74a4
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840 ; 004f74a9
        ;   XREF to: 0040d840 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004f74ae
    PUSH 0x2                            ; 004f74b1
    PUSH 0x2                            ; 004f74b3
    PUSH 0x1d1ba48                      ; 004f74b5
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840 ; 004f74ba
        ;   XREF to: 0040d840 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004f74bf
    PUSH 0x2                            ; 004f74c2
    PUSH 0x2                            ; 004f74c4
    PUSH 0x1d1ba5c                      ; 004f74c6
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840 ; 004f74cb
        ;   XREF to: 0040d840 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004f74d0
    PUSH 0x2                            ; 004f74d3
    PUSH 0x2                            ; 004f74d5
    PUSH 0x1d1ba70                      ; 004f74d7
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840 ; 004f74dc
        ;   XREF to: 0040d840 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004f74e1
    PUSH 0x2                            ; 004f74e4
    PUSH 0x2                            ; 004f74e6
    PUSH 0x1d1ba84                      ; 004f74e8
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840 ; 004f74ed
        ;   XREF to: 0040d840 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004f74f2
    PUSH 0x2                            ; 004f74f5
    PUSH 0x2                            ; 004f74f7
    PUSH 0x1d1ba98                      ; 004f74f9
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840 ; 004f74fe
        ;   XREF to: 0040d840 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004f7503
    PUSH 0x2                            ; 004f7506
    PUSH 0x2                            ; 004f7508
    PUSH 0x1d1baf4                      ; 004f750a
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840 ; 004f750f
        ;   XREF to: 0040d840 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004f7514
    PUSH 0x5e61c6                       ; 004f7517 | DAT_005e61c6
        ;   Label: LAB_004f7517
    PUSH 0x5e61c9                       ; 004f751c | = "itemlist.txt"
    XOR ESI,ESI                         ; 004f7521
    PUSH 0x5e61d6                       ; 004f7523 | DAT_005e61d6
    MOV dword ptr [0x01d08dc8],ESI      ; 004f7528 | DAT_01d08dc8
    CALL engine_dosio.cpp_FUN_00479180  ; 004f752e
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004f7533
    MOV EBX,EAX                         ; 004f7536
    TEST EAX,EAX                        ; 004f7538
    JZ 0x004f7596                       ; 004f753a
        ;   XREF to: 004f7596 (CONDITIONAL_JUMP)  ; LAB_004f7596
    TEST byte ptr [EBX + 0xc],0x10      ; 004f753c
        ;   Label: LAB_004f753c
    JNZ 0x004f758d                      ; 004f7540
        ;   XREF to: 004f758d (CONDITIONAL_JUMP)  ; LAB_004f758d
    IMUL EAX,dword ptr [0x01d08dc8],0x300 ; 004f7542 | DAT_01d08dc8
    PUSH EBX                            ; 004f754c
    ADD EAX,0x1d08dd0                   ; 004f754d
    PUSH EAX                            ; 004f7552
    CALL core_inv.cpp_loadItem_FUN_004f6e90 ; 004f7553
        ;   XREF to: 004f6e90 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_loadItem_FUN_004f6e90()
    ADD ESP,0x8                         ; 004f7558
    TEST EAX,EAX                        ; 004f755b
    JZ 0x004f758d                       ; 004f755d
        ;   XREF to: 004f758d (CONDITIONAL_JUMP)  ; LAB_004f758d
    INC dword ptr [0x01d08dc8]          ; 004f755f | DAT_01d08dc8
    JMP 0x004f753c                      ; 004f7565
        ;   XREF to: 004f753c (UNCONDITIONAL_JUMP)  ; LAB_004f753c
    PUSH 0x61f1a4                       ; 004f7567 | DAT_0061f1a4
        ;   Label: LAB_004f7567
    PUSH 0x61f1a0                       ; 004f756c | DAT_0061f1a0
    PUSH 0x5e608c                       ; 004f7571 | = "%d,%d\n"
    PUSH EAX                            ; 004f7576
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004f7577
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x10                        ; 004f757c
    PUSH EBX                            ; 004f757f
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004f7580
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004f7585
    JMP 0x004f710f                      ; 004f7588
        ;   XREF to: 004f710f (UNCONDITIONAL_JUMP)  ; LAB_004f710f
    PUSH EBX                            ; 004f758d
        ;   Label: LAB_004f758d
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004f758e
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004f7593
    POP EBP                             ; 004f7596
        ;   Label: LAB_004f7596
    POP EDI                             ; 004f7597
    POP ESI                             ; 004f7598
    POP EBX                             ; 004f7599
    RET                                 ; 004f759a

