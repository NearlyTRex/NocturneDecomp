; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_0052c0e0(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x330]:1  local_330
; undefined        Stack[-0x230]:1  local_230
; undefined        Stack[-0x130]:1  local_130
; undefined1       Stack[-0x12f]:1  local_12f
; undefined        Stack[-0xcc]:1  local_cc
; undefined1       Stack[-0xcb]:1  local_cb
; undefined1       Stack[-0xc9]:1  local_c9
; undefined1       Stack[-0xc8]:1  local_c8
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x4c]:1  local_4c
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
;   FUN_004fc6b0 at 004fc6d6
;
; Referenced Globals:
;   TerminatedCString s_Loading_set_005e5460
;   undefined4 DAT_005e546c
;   TerminatedCString s_models_005e546f
;   TerminatedCString s_core_set_cpp_005e5476
;   TerminatedCString s_CDemonSet_Unable_to_open_005e5486
;   undefined4 DAT_005e54a3
;   undefined4 DAT_005e54a7
;   undefined4 DAT_005e54ab
;   undefined4 DAT_005e54af
;   undefined4 DAT_005e54b3
;   TerminatedCString s_f_f_f_f_005e54b7
;   TerminatedCString s_d_d_d_d_005e54c4
;   TerminatedCString s_f_f_f_005e54d1
;   TerminatedCString s_f_f_f_f_005e54db
;   TerminatedCString s_f_f_005e54e8
;   ... and 64 more
;
; Called Functions:
;   FUN_00401fe0
;   FUN_004032b0
;   FUN_00443400
;   FUN_00449280
;   FUN_0044dcd0
;   FUN_00460c70
;   FUN_00461070
;   FUN_00472ab0
;   FUN_004e1600
;   FUN_004e4500
;   FUN_0050fe80
;   FUN_00513f30
;   FUN_0052c090
;   FUN_00538160
;   FUN_00539860
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c0e0
        ;   Label: FUN_0052c0e0
    PUSH ESI                            ; 0052c0e1
    PUSH EDI                            ; 0052c0e2
    PUSH EBP                            ; 0052c0e3
    MOV EBP,ESP                         ; 0052c0e4
    SUB ESP,0x320                       ; 0052c0e6
    AND ESP,0xfffffff8                  ; 0052c0ec
    MOV ESI,dword ptr [EBP + 0x18]      ; 0052c0ef
    PUSH 0x0                            ; 0052c0f2
    PUSH 0x5e5460                       ; 0052c0f4 | = "Loading set"
    CALL FUN_0050fe80                   ; 0052c0f9
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 0052c0fe
    PUSH EAX                            ; 0052c101
    MOV EDX,dword ptr [0x00617e10]      ; 0052c102 | DAT_00617e10
    PUSH EDX                            ; 0052c108
    CALL FUN_004e1600                   ; 0052c109
        ;   XREF to: 004e1600 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1600()
    ADD ESP,0xc                         ; 0052c10e
    MOV ECX,dword ptr [EBP + 0x14]      ; 0052c111
    PUSH ECX                            ; 0052c114
    CALL FUN_0052c090                   ; 0052c115
        ;   XREF to: 0052c090 (UNCONDITIONAL_CALL)  ; undefined FUN_0052c090()
    ADD ESP,0x4                         ; 0052c11a
    PUSH 0x5e546c                       ; 0052c11d | DAT_005e546c
    PUSH ESI                            ; 0052c122
    PUSH 0x5e546f                       ; 0052c123 | = "models"
    CALL FUN_00460c70                   ; 0052c128
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 0052c12d
    MOV EBX,EAX                         ; 0052c130
    TEST EAX,EAX                        ; 0052c132
    JZ 0x0052ccb1                       ; 0052c134
        ;   XREF to: 0052ccb1 (CONDITIONAL_JUMP)  ; LAB_0052ccb1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c13a
        ;   Label: LAB_0052c13a
    ADD EAX,0x15acc0                    ; 0052c13d
    PUSH EAX                            ; 0052c142
    PUSH 0x5e54a3                       ; 0052c143 | DAT_005e54a3
    PUSH EBX                            ; 0052c148
    CALL FUN_005b8100                   ; 0052c149
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052c14e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c151
    ADD EAX,0x15aea8                    ; 0052c154
    PUSH EAX                            ; 0052c159
    PUSH 0x5e54a7                       ; 0052c15a | DAT_005e54a7
    PUSH EBX                            ; 0052c15f
    CALL FUN_005b8100                   ; 0052c160
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052c165
    MOV EAX,ESP                         ; 0052c168
    PUSH EAX                            ; 0052c16a
    PUSH 0x5e54ab                       ; 0052c16b | DAT_005e54ab
    PUSH EBX                            ; 0052c170
    CALL FUN_005b8100                   ; 0052c171
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052c176
    LEA EAX,[ESP + 0x200]               ; 0052c179
    PUSH EAX                            ; 0052c180
    PUSH 0x5e54af                       ; 0052c181 | DAT_005e54af
    PUSH EBX                            ; 0052c186
    CALL FUN_005b8100                   ; 0052c187
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052c18c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c18f
    ADD EAX,0x14d150                    ; 0052c192
    PUSH EAX                            ; 0052c197
    PUSH 0x5e54b3                       ; 0052c198 | DAT_005e54b3
    PUSH EBX                            ; 0052c19d
    CALL FUN_005b8100                   ; 0052c19e
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052c1a3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c1a6
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052c1a9
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 0052c1ac
    ADD ESI,0x14d154                    ; 0052c1b2
    CMP EDX,0x1e                        ; 0052c1b8
    JL 0x0052ccd9                       ; 0052c1bb
        ;   XREF to: 0052ccd9 (CONDITIONAL_JUMP)  ; LAB_0052ccd9
    ADD EAX,0x14d160                    ; 0052c1c1
    PUSH EAX                            ; 0052c1c6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c1c7
    ADD EAX,0x14d15c                    ; 0052c1ca
    PUSH EAX                            ; 0052c1cf
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c1d0
    ADD EAX,0x14d158                    ; 0052c1d3
    PUSH EAX                            ; 0052c1d8
    PUSH ESI                            ; 0052c1d9
    PUSH 0x5e54b7                       ; 0052c1da | = "%f,%f,%f,%f\n"
    PUSH EBX                            ; 0052c1df
    CALL FUN_005b8100                   ; 0052c1e0
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x18                        ; 0052c1e5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c1e8
        ;   Label: LAB_0052c1e8
    CMP dword ptr [EAX + 0x15acc0],0x0  ; 0052c1eb
    JNZ 0x0052c22d                      ; 0052c1f2
        ;   XREF to: 0052c22d (CONDITIONAL_JUMP)  ; LAB_0052c22d
    PUSH EBX                            ; 0052c1f4
    PUSH 0xff                           ; 0052c1f5
    LEA EAX,[ESP + 0x8]                 ; 0052c1fa
    PUSH EAX                            ; 0052c1fe
    CALL FUN_005b9600                   ; 0052c1ff
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c204
    PUSH EBX                            ; 0052c207
    PUSH 0xff                           ; 0052c208
    LEA EAX,[ESP + 0x8]                 ; 0052c20d
    PUSH EAX                            ; 0052c211
    CALL FUN_005b9600                   ; 0052c212
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c217
    PUSH EBX                            ; 0052c21a
    PUSH 0xff                           ; 0052c21b
    LEA EAX,[ESP + 0x8]                 ; 0052c220
    PUSH EAX                            ; 0052c224
    CALL FUN_005b9600                   ; 0052c225
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c22a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c22d
        ;   Label: LAB_0052c22d
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052c230
    MOV EDI,dword ptr [EAX + 0x15acc0]  ; 0052c233
    ADD ESI,0x15ac40                    ; 0052c239
    CMP EDI,0x11                        ; 0052c23f
    JGE 0x0052cd7d                      ; 0052c242
        ;   XREF to: 0052cd7d (CONDITIONAL_JUMP)  ; LAB_0052cd7d
    PUSH EBX                            ; 0052c248
    PUSH 0xff                           ; 0052c249
    LEA EAX,[ESP + 0x8]                 ; 0052c24e
    PUSH EAX                            ; 0052c252
    CALL FUN_005b9600                   ; 0052c253
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c258
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c25b
    ADD EAX,0x15ac48                    ; 0052c25e
    PUSH EAX                            ; 0052c263
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c264
    ADD EAX,0x15ac44                    ; 0052c267
    PUSH EAX                            ; 0052c26c
    PUSH ESI                            ; 0052c26d
    LEA EAX,[ESP + 0x2f0]               ; 0052c26e
    PUSH EAX                            ; 0052c275
    PUSH 0x5e54c4                       ; 0052c276 | = "%d,%d,%d,%d\n"
    PUSH EBX                            ; 0052c27b
    CALL FUN_005b8100                   ; 0052c27c
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x18                        ; 0052c281
    PUSH EBX                            ; 0052c284
    PUSH 0xff                           ; 0052c285
    LEA EAX,[ESP + 0x8]                 ; 0052c28a
    PUSH EAX                            ; 0052c28e
    CALL FUN_005b9600                   ; 0052c28f
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c294
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c297
    ADD EAX,0x15ac54                    ; 0052c29a
    PUSH EAX                            ; 0052c29f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c2a0
    ADD EAX,0x15ac50                    ; 0052c2a3
    PUSH EAX                            ; 0052c2a8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c2a9
    ADD EAX,0x15ac4c                    ; 0052c2ac
    PUSH EAX                            ; 0052c2b1
    PUSH 0x5e54d1                       ; 0052c2b2 | = "%f,%f,%f\n"
    PUSH EBX                            ; 0052c2b7
    CALL FUN_005b8100                   ; 0052c2b8
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 0052c2bd
    LEA EAX,[ESP + 0x2e4]               ; 0052c2c0
    PUSH EAX                            ; 0052c2c7
    PUSH EAX                            ; 0052c2c8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c2c9
    ADD EAX,0x15ac5c                    ; 0052c2cc
    PUSH EAX                            ; 0052c2d1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c2d2
    ADD EAX,0x15ac58                    ; 0052c2d5
    PUSH EAX                            ; 0052c2da
    PUSH 0x5e54db                       ; 0052c2db | = "%f,%f,%f,%f\n"
    PUSH EBX                            ; 0052c2e0
    CALL FUN_005b8100                   ; 0052c2e1
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x18                        ; 0052c2e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c2e9
    MOV dword ptr [EAX + 0x15ac60],0x42480000 ; 0052c2ec
    PUSH EBX                            ; 0052c2f6
        ;   Label: LAB_0052c2f6
    PUSH 0xff                           ; 0052c2f7
    LEA EAX,[ESP + 0x8]                 ; 0052c2fc
    PUSH EAX                            ; 0052c300
    CALL FUN_005b9600                   ; 0052c301
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    MOV EAX,[0x0061e520]                ; 0052c306 | DAT_0061e520
    ADD ESP,0xc                         ; 0052c30b
    LEA ESI,[EAX + 0x8]                 ; 0052c30e
    PUSH ESI                            ; 0052c311
    ADD EAX,0x4                         ; 0052c312
    PUSH EAX                            ; 0052c315
    PUSH 0x5e54e8                       ; 0052c316 | = "%f,%f\n"
    PUSH EBX                            ; 0052c31b
    CALL FUN_005b8100                   ; 0052c31c
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x10                        ; 0052c321
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c324
    CMP dword ptr [EAX + 0x15acc0],0x1f ; 0052c327
    JL 0x0052cd8d                       ; 0052c32e
        ;   XREF to: 0052cd8d (CONDITIONAL_JUMP)  ; LAB_0052cd8d
    PUSH EBX                            ; 0052c334
    PUSH 0xff                           ; 0052c335
    LEA EAX,[ESP + 0x8]                 ; 0052c33a
    PUSH EAX                            ; 0052c33e
    CALL FUN_005b9600                   ; 0052c33f
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c344
    PUSH 0x26537a4                      ; 0052c347 | DAT_026537a4
    PUSH 0x26537a0                      ; 0052c34c | DAT_026537a0
    PUSH 0x61e528                       ; 0052c351 | DAT_0061e528
    PUSH 0x61e524                       ; 0052c356 | DAT_0061e524
    PUSH 0x5e54ef                       ; 0052c35b | = "%f,%d,%f,%f\n"
    PUSH EBX                            ; 0052c360
    CALL FUN_005b8100                   ; 0052c361
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x18                        ; 0052c366
    PUSH EBX                            ; 0052c369
        ;   Label: LAB_0052c369
    PUSH 0xff                           ; 0052c36a
    LEA EAX,[ESP + 0x8]                 ; 0052c36f
    PUSH EAX                            ; 0052c373
    CALL FUN_005b9600                   ; 0052c374
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c379
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c37c
    ADD EAX,0x15aca8                    ; 0052c37f
    PUSH EAX                            ; 0052c384
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c385
    ADD EAX,0x15aca4                    ; 0052c388
    PUSH EAX                            ; 0052c38d
    PUSH 0x5e54fc                       ; 0052c38e | = "%d,%s\n"
    PUSH EBX                            ; 0052c393
    CALL FUN_005b8100                   ; 0052c394
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x10                        ; 0052c399
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c39c
    CMP dword ptr [EAX + 0x15acc0],0x5  ; 0052c39f
    JL 0x0052cdb4                       ; 0052c3a6
        ;   XREF to: 0052cdb4 (CONDITIONAL_JUMP)  ; LAB_0052cdb4
    PUSH EBX                            ; 0052c3ac
    PUSH 0xff                           ; 0052c3ad
    LEA EAX,[ESP + 0x8]                 ; 0052c3b2
    PUSH EAX                            ; 0052c3b6
    CALL FUN_005b9600                   ; 0052c3b7
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c3bc
    MOV ESI,dword ptr [0x0061e520]      ; 0052c3bf | DAT_0061e520
    PUSH ESI                            ; 0052c3c5 | DAT_02653790
    PUSH 0x5e5503                       ; 0052c3c6 | DAT_005e5503
    PUSH EBX                            ; 0052c3cb
    CALL FUN_005b8100                   ; 0052c3cc
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052c3d1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c3d4
        ;   Label: LAB_0052c3d4
    CMP dword ptr [EAX + 0x15acc0],0x6  ; 0052c3d7
    JL 0x0052cdef                       ; 0052c3de
        ;   XREF to: 0052cdef (CONDITIONAL_JUMP)  ; LAB_0052cdef
    PUSH EBX                            ; 0052c3e4
    PUSH 0xff                           ; 0052c3e5
    LEA EAX,[ESP + 0x8]                 ; 0052c3ea
    PUSH EAX                            ; 0052c3ee
    CALL FUN_005b9600                   ; 0052c3ef
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c3f4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c3f7
    ADD EAX,0x16163c                    ; 0052c3fa
    PUSH EAX                            ; 0052c3ff
    PUSH 0x5e550c                       ; 0052c400 | DAT_005e550c
    PUSH EBX                            ; 0052c405
    CALL FUN_005b8100                   ; 0052c406
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052c40b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c40e
        ;   Label: LAB_0052c40e
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052c411
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 0052c414
    ADD EDI,0x161640                    ; 0052c41a
    CMP EDX,0xc                         ; 0052c420
    JL 0x0052cdfe                       ; 0052c423
        ;   XREF to: 0052cdfe (CONDITIONAL_JUMP)  ; LAB_0052cdfe
    PUSH EDI                            ; 0052c429
    ADD EAX,0x161660                    ; 0052c42a
    PUSH EAX                            ; 0052c42f
    PUSH 0x5e5510                       ; 0052c430 | = "%d,%s\n"
    PUSH EBX                            ; 0052c435
    CALL FUN_005b8100                   ; 0052c436
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x10                        ; 0052c43b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c43e
        ;   Label: LAB_0052c43e
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052c441
    MOV ECX,dword ptr [EAX + 0x15acc0]  ; 0052c444
    ADD EDI,0x15ae64                    ; 0052c44a
    CMP ECX,0xd                         ; 0052c450
    JL 0x0052ce2f                       ; 0052c453
        ;   XREF to: 0052ce2f (CONDITIONAL_JUMP)  ; LAB_0052ce2f
    PUSH EBX                            ; 0052c459
    PUSH 0xff                           ; 0052c45a
    LEA EAX,[ESP + 0x8]                 ; 0052c45f
    PUSH EAX                            ; 0052c463
    CALL FUN_005b9600                   ; 0052c464
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c469
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c46c
    PUSH EDI                            ; 0052c46f
    ADD EAX,0x15ae60                    ; 0052c470
    PUSH EAX                            ; 0052c475
    PUSH 0x5e5523                       ; 0052c476 | = "%d,%s\n"
    PUSH EBX                            ; 0052c47b
    CALL FUN_005b8100                   ; 0052c47c
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x10                        ; 0052c481
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c484
        ;   Label: LAB_0052c484
    CMP dword ptr [EAX + 0x15acc0],0x19 ; 0052c487
    JL 0x0052ce5d                       ; 0052c48e
        ;   XREF to: 0052ce5d (CONDITIONAL_JUMP)  ; LAB_0052ce5d
    PUSH EBX                            ; 0052c494
    PUSH 0xff                           ; 0052c495
    LEA EAX,[ESP + 0x8]                 ; 0052c49a
    PUSH EAX                            ; 0052c49e
    CALL FUN_005b9600                   ; 0052c49f
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c4a4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c4a7
    ADD EAX,0x16167c                    ; 0052c4aa
    PUSH EAX                            ; 0052c4af
    PUSH 0x5e552f                       ; 0052c4b0 | DAT_005e552f
    PUSH EBX                            ; 0052c4b5
    CALL FUN_005b8100                   ; 0052c4b6
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052c4bb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c4be
        ;   Label: LAB_0052c4be
    CMP dword ptr [EAX + 0x15acc0],0x1d ; 0052c4c1
    JL 0x0052ce6c                       ; 0052c4c8
        ;   XREF to: 0052ce6c (CONDITIONAL_JUMP)  ; LAB_0052ce6c
    PUSH EBX                            ; 0052c4ce
    PUSH 0xff                           ; 0052c4cf
    LEA EAX,[ESP + 0x8]                 ; 0052c4d4
    PUSH EAX                            ; 0052c4d8
    CALL FUN_005b9600                   ; 0052c4d9
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c4de
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c4e1
    ADD EAX,0x15acbc                    ; 0052c4e4
    PUSH EAX                            ; 0052c4e9
    PUSH 0x5e5533                       ; 0052c4ea | DAT_005e5533
    PUSH EBX                            ; 0052c4ef
    CALL FUN_005b8100                   ; 0052c4f0
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052c4f5
    PUSH 0x0                            ; 0052c4f8
        ;   Label: LAB_0052c4f8
    LEA EAX,[ESP + 0x104]               ; 0052c4fa
    PUSH EAX                            ; 0052c501
    PUSH 0x0                            ; 0052c502
    PUSH 0x0                            ; 0052c504
    LEA EAX,[ESP + 0x210]               ; 0052c506
    PUSH EAX                            ; 0052c50d
    CALL FUN_00461070                   ; 0052c50e
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; undefined FUN_00461070()
    ADD ESP,0x14                        ; 0052c513
    PUSH 0x5e5537                       ; 0052c516 | = "train"
    LEA EAX,[ESP + 0x104]               ; 0052c51b
    PUSH EAX                            ; 0052c522
    CALL FUN_005b8130                   ; 0052c523
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 0052c528
    TEST EAX,EAX                        ; 0052c52b
    JNZ 0x0052ce7b                      ; 0052c52d
        ;   XREF to: 0052ce7b (CONDITIONAL_JUMP)  ; LAB_0052ce7b
    MOV EDX,dword ptr [0x0061e450]      ; 0052c533 | DAT_0061e450
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c539
    PUSH EDX                            ; 0052c53c
    MOV dword ptr [EAX + 0x15acb8],0x1  ; 0052c53d
    CALL FUN_0057b800                   ; 0052c547
        ;   XREF to: 0057b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b800()
    ADD ESP,0x4                         ; 0052c54c
    MOV ECX,dword ptr [EBP + 0x14]      ; 0052c54f
        ;   Label: LAB_0052c54f
    PUSH ECX                            ; 0052c552
    ADD ESP,0x4                         ; 0052c553
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c556
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 0052c559
    JL 0x0052c575                       ; 0052c560
        ;   XREF to: 0052c575 (CONDITIONAL_JUMP)  ; LAB_0052c575
    PUSH EBX                            ; 0052c562
    PUSH 0xff                           ; 0052c563
    LEA EAX,[ESP + 0x8]                 ; 0052c568
    PUSH EAX                            ; 0052c56c
    CALL FUN_005b9600                   ; 0052c56d
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c572
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c575
        ;   Label: LAB_0052c575
    ADD EAX,0x19a2c                     ; 0052c578
    PUSH EAX                            ; 0052c57d
    PUSH 0x5e553d                       ; 0052c57e | DAT_005e553d
    PUSH EBX                            ; 0052c583
    CALL FUN_005b8100                   ; 0052c584
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052c589
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c58c
    MOV EDX,dword ptr [EAX + 0x19a2c]   ; 0052c58f
    XOR EDI,EDI                         ; 0052c595
    TEST EDX,EDX                        ; 0052c597
    JLE 0x0052c5c0                      ; 0052c599
        ;   XREF to: 0052c5c0 (CONDITIONAL_JUMP)  ; LAB_0052c5c0
    LEA ESI,[EAX + 0x19a30]             ; 0052c59b
    PUSH EBX                            ; 0052c5a1
        ;   Label: LAB_0052c5a1
    PUSH ESI                            ; 0052c5a2
    CALL FUN_0053af30                   ; 0052c5a3
        ;   XREF to: 0053af30 (UNCONDITIONAL_CALL)  ; undefined FUN_0053af30()
    ADD ESP,0x8                         ; 0052c5a8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c5ab
    INC EDI                             ; 0052c5ae
    MOV ECX,dword ptr [EAX + 0x19a2c]   ; 0052c5af
    ADD ESI,0x1898                      ; 0052c5b5
    CMP EDI,ECX                         ; 0052c5bb
    JL 0x0052c5a1                       ; 0052c5bd
        ;   XREF to: 0052c5a1 (CONDITIONAL_JUMP)  ; LAB_0052c5a1
    NOP                                 ; 0052c5bf
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c5c0
        ;   Label: LAB_0052c5c0
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 0052c5c3
    JL 0x0052c5df                       ; 0052c5ca
        ;   XREF to: 0052c5df (CONDITIONAL_JUMP)  ; LAB_0052c5df
    PUSH EBX                            ; 0052c5cc
    PUSH 0xff                           ; 0052c5cd
    LEA EAX,[ESP + 0x8]                 ; 0052c5d2
    PUSH EAX                            ; 0052c5d6
    CALL FUN_005b9600                   ; 0052c5d7
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c5dc
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052c5df
        ;   Label: LAB_0052c5df
    PUSH EDI                            ; 0052c5e2
    PUSH 0x5e5541                       ; 0052c5e3 | DAT_005e5541
    PUSH EBX                            ; 0052c5e8
    CALL FUN_005b8100                   ; 0052c5e9
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052c5ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c5f1
    MOV EDX,dword ptr [EAX]             ; 0052c5f4
    XOR EDI,EDI                         ; 0052c5f6
    TEST EDX,EDX                        ; 0052c5f8
    JLE 0x0052c620                      ; 0052c5fa
        ;   XREF to: 0052c620 (CONDITIONAL_JUMP)  ; LAB_0052c620
    LEA ESI,[EAX + 0x4]                 ; 0052c5fc
    PUSH EBX                            ; 0052c5ff
        ;   Label: LAB_0052c5ff
    PUSH ESI                            ; 0052c600
    CALL FUN_0053a8e0                   ; 0052c601
        ;   XREF to: 0053a8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a8e0()
    ADD ESP,0x8                         ; 0052c606
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c609
    INC EDI                             ; 0052c60c
    MOV ECX,dword ptr [EAX]             ; 0052c60d
    ADD ESI,0x1a4                       ; 0052c60f
    CMP EDI,ECX                         ; 0052c615
    JL 0x0052c5ff                       ; 0052c617
        ;   XREF to: 0052c5ff (CONDITIONAL_JUMP)  ; LAB_0052c5ff
    LEA EAX,[EAX]                       ; 0052c619
    NOP                                 ; 0052c61f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c620
        ;   Label: LAB_0052c620
    CMP dword ptr [EAX + 0x15acc0],0x0  ; 0052c623
    JLE 0x0052ce9b                      ; 0052c62a
        ;   XREF to: 0052ce9b (CONDITIONAL_JUMP)  ; LAB_0052ce9b
    PUSH EBX                            ; 0052c630
    PUSH 0xff                           ; 0052c631
    LEA EAX,[ESP + 0x8]                 ; 0052c636
    PUSH EAX                            ; 0052c63a
    CALL FUN_005b9600                   ; 0052c63b
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c640
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c643
    ADD EAX,0x15aecc                    ; 0052c646
    PUSH EAX                            ; 0052c64b
    PUSH 0x5e5545                       ; 0052c64c | DAT_005e5545
    PUSH EBX                            ; 0052c651
    CALL FUN_005b8100                   ; 0052c652
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052c657
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c65a
    ADD EAX,0x15aed0                    ; 0052c65d
    PUSH EAX                            ; 0052c662
    PUSH 0x5e5549                       ; 0052c663 | DAT_005e5549
    PUSH EBX                            ; 0052c668
    CALL FUN_005b8100                   ; 0052c669
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052c66e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c671
    MOV EDI,dword ptr [EAX + 0x15aed0]  ; 0052c674
    XOR ESI,ESI                         ; 0052c67a
    TEST EDI,EDI                        ; 0052c67c
    JLE 0x0052c810                      ; 0052c67e
        ;   XREF to: 0052c810 (CONDITIONAL_JUMP)  ; LAB_0052c810
    ADD EAX,0x15aed4                    ; 0052c684
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0052c689
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c690
    ADD EAX,0x15af14                    ; 0052c693
    MOV dword ptr [ESP + 0x31c],EAX     ; 0052c698
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c69f
    ADD EAX,0x15aeec                    ; 0052c6a2
    MOV dword ptr [ESP + 0x2fc],EAX     ; 0052c6a7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c6ae
    ADD EAX,0x15aee0                    ; 0052c6b1
    MOV dword ptr [ESP + 0x318],EAX     ; 0052c6b6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c6bd
    ADD EAX,0x15aee4                    ; 0052c6c0
    MOV dword ptr [ESP + 0x304],EAX     ; 0052c6c5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c6cc
    ADD EAX,0x15aee8                    ; 0052c6cf
    MOV dword ptr [ESP + 0x300],EAX     ; 0052c6d4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c6db
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052c6de
    ADD EAX,0x15aedc                    ; 0052c6e1
    ADD EDI,0x15aed8                    ; 0052c6e6
    MOV dword ptr [ESP + 0x30c],EAX     ; 0052c6ec
    IMUL EAX,ESI,0x44                   ; 0052c6f3
        ;   Label: LAB_0052c6f3
    MOV ECX,dword ptr [ESP + 0x30c]     ; 0052c6f6
    PUSH ECX                            ; 0052c6fd
    MOV EDX,dword ptr [ESP + 0x2f0]     ; 0052c6fe
    PUSH EDI                            ; 0052c705
    ADD EAX,EDX                         ; 0052c706
    PUSH EAX                            ; 0052c708
    PUSH 0x5e554d                       ; 0052c709 | = "%f,%f,%f\n"
    PUSH EBX                            ; 0052c70e
    CALL FUN_005b8100                   ; 0052c70f
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 0052c714
    MOV EAX,dword ptr [ESP + 0x300]     ; 0052c717
    PUSH EAX                            ; 0052c71e
    MOV EDX,dword ptr [ESP + 0x308]     ; 0052c71f
    PUSH EDX                            ; 0052c726
    MOV ECX,dword ptr [ESP + 0x320]     ; 0052c727
    PUSH ECX                            ; 0052c72e
    PUSH 0x5e5557                       ; 0052c72f | = "%f,%f,%f\n"
    PUSH EBX                            ; 0052c734
    CALL FUN_005b8100                   ; 0052c735
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 0052c73a
    LEA EAX,[ESP + 0x2d8]               ; 0052c73d
    PUSH EAX                            ; 0052c744
    LEA EAX,[ESP + 0x2e0]               ; 0052c745
    PUSH EAX                            ; 0052c74c
    LEA EAX,[ESP + 0x2dc]               ; 0052c74d
    PUSH EAX                            ; 0052c754
    PUSH 0x5e5561                       ; 0052c755 | = "%f,%f,%f\n"
    PUSH EBX                            ; 0052c75a
    CALL FUN_005b8100                   ; 0052c75b
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 0052c760
    LEA EAX,[ESP + 0x2d4]               ; 0052c763
    PUSH EAX                            ; 0052c76a
    MOV EAX,dword ptr [ESP + 0x300]     ; 0052c76b
    PUSH EAX                            ; 0052c772
    CALL FUN_00449280                   ; 0052c773
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 0052c778
    MOV EDX,dword ptr [ESP + 0x31c]     ; 0052c77b
    PUSH EDX                            ; 0052c782
    PUSH 0x5e556b                       ; 0052c783 | DAT_005e556b
    PUSH EBX                            ; 0052c788
    ADD EDI,0x44                        ; 0052c789
    CALL FUN_005b8100                   ; 0052c78c
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052c791
    INC ESI                             ; 0052c794
    MOV ECX,dword ptr [ESP + 0x31c]     ; 0052c795
    MOV EAX,dword ptr [ESP + 0x2fc]     ; 0052c79c
    MOV EDX,dword ptr [ESP + 0x318]     ; 0052c7a3
    ADD ECX,0x44                        ; 0052c7aa
    ADD EAX,0x44                        ; 0052c7ad
    ADD EDX,0x44                        ; 0052c7b0
    MOV dword ptr [ESP + 0x31c],ECX     ; 0052c7b3
    MOV dword ptr [ESP + 0x2fc],EAX     ; 0052c7ba
    MOV dword ptr [ESP + 0x318],EDX     ; 0052c7c1
    MOV ECX,dword ptr [ESP + 0x304]     ; 0052c7c8
    MOV EAX,dword ptr [ESP + 0x300]     ; 0052c7cf
    MOV EDX,dword ptr [ESP + 0x30c]     ; 0052c7d6
    ADD EAX,0x44                        ; 0052c7dd
    ADD ECX,0x44                        ; 0052c7e0
    MOV dword ptr [ESP + 0x300],EAX     ; 0052c7e3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c7ea
    ADD EDX,0x44                        ; 0052c7ed
    MOV dword ptr [ESP + 0x304],ECX     ; 0052c7f0
    MOV ECX,dword ptr [EAX + 0x15aed0]  ; 0052c7f7
    MOV dword ptr [ESP + 0x30c],EDX     ; 0052c7fd
    CMP ESI,ECX                         ; 0052c804
    JL 0x0052c6f3                       ; 0052c806
        ;   XREF to: 0052c6f3 (CONDITIONAL_JUMP)  ; LAB_0052c6f3
    LEA EAX,[EAX]                       ; 0052c80c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c810
        ;   Label: LAB_0052c810
    CMP dword ptr [EAX + 0x15acc0],0x3  ; 0052c813
    JL 0x0052cf7f                       ; 0052c81a
        ;   XREF to: 0052cf7f (CONDITIONAL_JUMP)  ; LAB_0052cf7f
    PUSH EBX                            ; 0052c820
    PUSH 0xff                           ; 0052c821
    LEA EAX,[ESP + 0x8]                 ; 0052c826
    PUSH EAX                            ; 0052c82a
    CALL FUN_005b9600                   ; 0052c82b
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c830
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c833
    ADD EAX,0x15f690                    ; 0052c836
    PUSH EAX                            ; 0052c83b
    PUSH 0x5e558c                       ; 0052c83c | DAT_005e558c
    PUSH EBX                            ; 0052c841
    CALL FUN_005b8100                   ; 0052c842
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052c847
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c84a
        ;   Label: LAB_0052c84a
    CMP dword ptr [EAX + 0x15acc0],0x18 ; 0052c84d
    JL 0x0052d082                       ; 0052c854
        ;   XREF to: 0052d082 (CONDITIONAL_JUMP)  ; LAB_0052d082
    PUSH EBX                            ; 0052c85a
    PUSH 0xff                           ; 0052c85b
    LEA EAX,[ESP + 0x8]                 ; 0052c860
    PUSH EAX                            ; 0052c864
    CALL FUN_005b9600                   ; 0052c865
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c86a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c86d
    ADD EAX,0x15ac8c                    ; 0052c870
    PUSH EAX                            ; 0052c875
    PUSH 0x5e55b4                       ; 0052c876 | DAT_005e55b4
    PUSH EBX                            ; 0052c87b
    CALL FUN_005b8100                   ; 0052c87c
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052c881
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c884
        ;   Label: LAB_0052c884
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 0052c887
    CMP EDX,0x4                         ; 0052c88d
    JL 0x0052c8a1                       ; 0052c890
        ;   XREF to: 0052c8a1 (CONDITIONAL_JUMP)  ; LAB_0052c8a1
    CMP EDX,0x9                         ; 0052c892
    JG 0x0052c8a1                       ; 0052c895
        ;   XREF to: 0052c8a1 (CONDITIONAL_JUMP)  ; LAB_0052c8a1
    PUSH EBX                            ; 0052c897
    PUSH EAX                            ; 0052c898
    CALL FUN_00539ff0                   ; 0052c899
        ;   XREF to: 00539ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00539ff0()
    ADD ESP,0x8                         ; 0052c89e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c8a1
        ;   Label: LAB_0052c8a1
    CMP dword ptr [EAX + 0x15acc0],0x5  ; 0052c8a4
    JL 0x0052d091                       ; 0052c8ab
        ;   XREF to: 0052d091 (CONDITIONAL_JUMP)  ; LAB_0052d091
    PUSH EBX                            ; 0052c8b1
    PUSH 0xff                           ; 0052c8b2
    LEA EAX,[ESP + 0x8]                 ; 0052c8b7
    PUSH EAX                            ; 0052c8bb
    CALL FUN_005b9600                   ; 0052c8bc
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052c8c1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c8c4
    ADD EAX,0x15b424                    ; 0052c8c7
    PUSH EAX                            ; 0052c8cc
    PUSH 0x5e55b8                       ; 0052c8cd | DAT_005e55b8
    PUSH EBX                            ; 0052c8d2
    CALL FUN_005b8100                   ; 0052c8d3
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052c8d8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c8db
    MOV EDX,dword ptr [EAX + 0x15b424]  ; 0052c8de
    XOR ESI,ESI                         ; 0052c8e4
    TEST EDX,EDX                        ; 0052c8e6
    JLE 0x0052ca40                      ; 0052c8e8
        ;   XREF to: 0052ca40 (CONDITIONAL_JUMP)  ; LAB_0052ca40
    ADD EAX,0x15b428                    ; 0052c8ee
    MOV dword ptr [ESP + 0x2f0],EAX     ; 0052c8f3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c8fa
    ADD EAX,0x15b440                    ; 0052c8fd
    MOV dword ptr [ESP + 0x310],EAX     ; 0052c902
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c909
    ADD EAX,0x15b438                    ; 0052c90c
    MOV dword ptr [ESP + 0x308],EAX     ; 0052c911
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c918
    ADD EAX,0x15b43c                    ; 0052c91b
    MOV dword ptr [ESP + 0x314],EAX     ; 0052c920
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c927
    ADD EAX,0x15b42c                    ; 0052c92a
    MOV dword ptr [ESP + 0x2f4],EAX     ; 0052c92f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052c936
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052c939
    ADD EAX,0x15b430                    ; 0052c93c
    ADD EDI,0x15b434                    ; 0052c941
    MOV dword ptr [ESP + 0x2f8],EAX     ; 0052c947
    IMUL EAX,ESI,0x44                   ; 0052c94e
        ;   Label: LAB_0052c94e
    MOV EDX,dword ptr [ESP + 0x2f8]     ; 0052c951
    MOV ECX,dword ptr [ESP + 0x2f0]     ; 0052c958
    PUSH EDX                            ; 0052c95f
    ADD EAX,ECX                         ; 0052c960
    MOV ECX,dword ptr [ESP + 0x2f8]     ; 0052c962
    PUSH ECX                            ; 0052c969
    PUSH EAX                            ; 0052c96a
    PUSH 0x5e55bc                       ; 0052c96b | = "%f,%f,%f\n"
    PUSH EBX                            ; 0052c970
    CALL FUN_005b8100                   ; 0052c971
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 0052c976
    MOV EAX,dword ptr [ESP + 0x314]     ; 0052c979
    PUSH EAX                            ; 0052c980
    MOV EDX,dword ptr [ESP + 0x30c]     ; 0052c981
    PUSH EDX                            ; 0052c988
    PUSH EDI                            ; 0052c989
    PUSH 0x5e55c6                       ; 0052c98a | = "%f,%f,%f\n"
    PUSH EBX                            ; 0052c98f
    CALL FUN_005b8100                   ; 0052c990
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 0052c995
    LEA EAX,[ESP + 0x2cc]               ; 0052c998
    PUSH EAX                            ; 0052c99f
    LEA EAX,[ESP + 0x2d4]               ; 0052c9a0
    PUSH EAX                            ; 0052c9a7
    LEA EAX,[ESP + 0x2d0]               ; 0052c9a8
    PUSH EAX                            ; 0052c9af
    PUSH 0x5e55d0                       ; 0052c9b0 | = "%f,%f,%f\n"
    PUSH EBX                            ; 0052c9b5
    CALL FUN_005b8100                   ; 0052c9b6
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 0052c9bb
    LEA EAX,[ESP + 0x2c8]               ; 0052c9be
    PUSH EAX                            ; 0052c9c5
    MOV ECX,dword ptr [ESP + 0x314]     ; 0052c9c6
    PUSH ECX                            ; 0052c9cd
    INC ESI                             ; 0052c9ce
    CALL FUN_00449280                   ; 0052c9cf
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 0052c9d4
    ADD EDI,0x44                        ; 0052c9d7
    MOV EAX,dword ptr [ESP + 0x310]     ; 0052c9da
    MOV EDX,dword ptr [ESP + 0x308]     ; 0052c9e1
    MOV ECX,dword ptr [ESP + 0x314]     ; 0052c9e8
    ADD EAX,0x44                        ; 0052c9ef
    ADD EDX,0x44                        ; 0052c9f2
    ADD ECX,0x44                        ; 0052c9f5
    MOV dword ptr [ESP + 0x310],EAX     ; 0052c9f8
    MOV EAX,dword ptr [ESP + 0x2f4]     ; 0052c9ff
    MOV dword ptr [ESP + 0x308],EDX     ; 0052ca06
    ADD EAX,0x44                        ; 0052ca0d
    MOV EDX,dword ptr [ESP + 0x2f8]     ; 0052ca10
    MOV dword ptr [ESP + 0x2f4],EAX     ; 0052ca17
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052ca1e
    MOV dword ptr [ESP + 0x314],ECX     ; 0052ca21
    ADD EDX,0x44                        ; 0052ca28
    MOV ECX,dword ptr [EAX + 0x15b424]  ; 0052ca2b
    MOV dword ptr [ESP + 0x2f8],EDX     ; 0052ca31
    CMP ESI,ECX                         ; 0052ca38
    JL 0x0052c94e                       ; 0052ca3a
        ;   XREF to: 0052c94e (CONDITIONAL_JUMP)  ; LAB_0052c94e
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052ca40
        ;   Label: LAB_0052ca40
    PUSH ESI                            ; 0052ca43
    CALL FUN_0053a610                   ; 0052ca44
        ;   XREF to: 0053a610 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a610()
    ADD ESP,0x4                         ; 0052ca49
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052ca4c
        ;   Label: LAB_0052ca4c
    CMP dword ptr [EAX + 0x15acc0],0xe  ; 0052ca4f
    JNZ 0x0052ca7e                      ; 0052ca56
        ;   XREF to: 0052ca7e (CONDITIONAL_JUMP)  ; LAB_0052ca7e
    PUSH EBX                            ; 0052ca58
    PUSH 0xff                           ; 0052ca59
    LEA EAX,[ESP + 0x8]                 ; 0052ca5e
    PUSH EAX                            ; 0052ca62
    CALL FUN_005b9600                   ; 0052ca63
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052ca68
    PUSH EBX                            ; 0052ca6b
    PUSH 0xff                           ; 0052ca6c
    LEA EAX,[ESP + 0x8]                 ; 0052ca71
    PUSH EAX                            ; 0052ca75
    CALL FUN_005b9600                   ; 0052ca76
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052ca7b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052ca7e
        ;   Label: LAB_0052ca7e
    CMP dword ptr [EAX + 0x15acc0],0x14 ; 0052ca81
    JL 0x0052cad0                       ; 0052ca88
        ;   XREF to: 0052cad0 (CONDITIONAL_JUMP)  ; LAB_0052cad0
    PUSH EBX                            ; 0052ca8a
    PUSH 0xff                           ; 0052ca8b
    LEA EAX,[ESP + 0x8]                 ; 0052ca90
    PUSH EAX                            ; 0052ca94
    CALL FUN_005b9600                   ; 0052ca95
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0052ca9a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052ca9d
    MOV ECX,dword ptr [EAX]             ; 0052caa0
    XOR ESI,ESI                         ; 0052caa2
    TEST ECX,ECX                        ; 0052caa4
    JLE 0x0052cad0                      ; 0052caa6
        ;   XREF to: 0052cad0 (CONDITIONAL_JUMP)  ; LAB_0052cad0
    LEA EDI,[EAX + 0x4]                 ; 0052caa8
    PUSH EBX                            ; 0052caab
        ;   Label: LAB_0052caab
    PUSH EDI                            ; 0052caac
    CALL FUN_0053ac70                   ; 0052caad
        ;   XREF to: 0053ac70 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ac70()
    ADD ESP,0x8                         ; 0052cab2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052cab5
    INC ESI                             ; 0052cab8
    MOV EDX,dword ptr [EAX]             ; 0052cab9
    ADD EDI,0x1a4                       ; 0052cabb
    CMP ESI,EDX                         ; 0052cac1
    JL 0x0052caab                       ; 0052cac3
        ;   XREF to: 0052caab (CONDITIONAL_JUMP)  ; LAB_0052caab
    LEA EAX,[EAX]                       ; 0052cac5
    LEA EDX,[EDX]                       ; 0052cacb
    MOV EBX,EBX                         ; 0052cace
    PUSH EBX                            ; 0052cad0
        ;   Label: LAB_0052cad0
    CALL FUN_005b89c0                   ; 0052cad1
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 0052cad6
    PUSH 0x0                            ; 0052cad9
    PUSH 0x5e55da                       ; 0052cadb | = "Loading set geometry"
    CALL FUN_0050fe80                   ; 0052cae0
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 0052cae5
    PUSH EAX                            ; 0052cae8
    MOV ECX,dword ptr [0x00617e10]      ; 0052cae9 | DAT_00617e10
    PUSH ECX                            ; 0052caef
    CALL FUN_004e1600                   ; 0052caf0
        ;   XREF to: 004e1600 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1600()
    ADD ESP,0xc                         ; 0052caf5
    LEA EAX,[ESP + 0x200]               ; 0052caf8
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052caff
    PUSH EAX                            ; 0052cb02
    ADD EBX,0x14d0f0                    ; 0052cb03
    PUSH EBX                            ; 0052cb09
    CALL FUN_005b8130                   ; 0052cb0a
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 0052cb0f
    TEST EAX,EAX                        ; 0052cb12
    JZ 0x0052d0ca                       ; 0052cb14
        ;   XREF to: 0052d0ca (CONDITIONAL_JUMP)  ; LAB_0052d0ca
    LEA ESI,[ESP + 0x200]               ; 0052cb1a
    MOV EDI,EBX                         ; 0052cb21
    PUSH EDI                            ; 0052cb23
    MOV AL,byte ptr [ESI]               ; 0052cb24
        ;   Label: LAB_0052cb24
    MOV byte ptr [EDI],AL               ; 0052cb26
    CMP AL,0x0                          ; 0052cb28
    JZ 0x0052cb3c                       ; 0052cb2a
        ;   XREF to: 0052cb3c (CONDITIONAL_JUMP)  ; LAB_0052cb3c
    MOV AL,byte ptr [ESI + 0x1]         ; 0052cb2c
    ADD ESI,0x2                         ; 0052cb2f
    MOV byte ptr [EDI + 0x1],AL         ; 0052cb32
    ADD EDI,0x2                         ; 0052cb35
    CMP AL,0x0                          ; 0052cb38
    JNZ 0x0052cb24                      ; 0052cb3a
        ;   XREF to: 0052cb24 (CONDITIONAL_JUMP)  ; LAB_0052cb24
    POP EDI                             ; 0052cb3c
        ;   Label: LAB_0052cb3c
    PUSH 0x5e55ef                       ; 0052cb3d | DAT_005e55ef
    PUSH EBX                            ; 0052cb42
    PUSH 0x5e55f2                       ; 0052cb43 | DAT_005e55f2
    CALL FUN_00460c70                   ; 0052cb48
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 0052cb4d
    TEST EAX,EAX                        ; 0052cb50
    JZ 0x0052d0a0                       ; 0052cb52
        ;   XREF to: 0052d0a0 (CONDITIONAL_JUMP)  ; LAB_0052d0a0
    PUSH EAX                            ; 0052cb58
    CALL FUN_005b89c0                   ; 0052cb59
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 0052cb5e
    PUSH EBX                            ; 0052cb61
    PUSH 0x1fc9c68                      ; 0052cb62 | DAT_01fc9c68
    CALL FUN_00472ab0                   ; 0052cb67
        ;   XREF to: 00472ab0 (UNCONDITIONAL_CALL)  ; undefined FUN_00472ab0()
    ADD ESP,0x8                         ; 0052cb6c
    CALL FUN_00513f30                   ; 0052cb6f
        ;   XREF to: 00513f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00513f30()
        ;   Label: LAB_0052cb6f
    PUSH 0x0                            ; 0052cb74
        ;   Label: LAB_0052cb74
    PUSH 0x5e561e                       ; 0052cb76 | = "Loading thumbs"
    CALL FUN_0050fe80                   ; 0052cb7b
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 0052cb80
    PUSH EAX                            ; 0052cb83
    MOV ESI,dword ptr [0x00617e10]      ; 0052cb84 | DAT_00617e10
    PUSH ESI                            ; 0052cb8a
    CALL FUN_004e1600                   ; 0052cb8b
        ;   XREF to: 004e1600 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1600()
    ADD ESP,0xc                         ; 0052cb90
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052cb93
    LEA EDI,[ESP + 0x264]               ; 0052cb96
    ADD ESI,0x14d0f0                    ; 0052cb9d
    MOV DL,0x2e                         ; 0052cba3
    PUSH EDI                            ; 0052cba5
    MOV AL,byte ptr [ESI]               ; 0052cba6
        ;   Label: LAB_0052cba6
    MOV byte ptr [EDI],AL               ; 0052cba8
    CMP AL,0x0                          ; 0052cbaa
    JZ 0x0052cbbe                       ; 0052cbac
        ;   XREF to: 0052cbbe (CONDITIONAL_JUMP)  ; LAB_0052cbbe
    MOV AL,byte ptr [ESI + 0x1]         ; 0052cbae
    ADD ESI,0x2                         ; 0052cbb1
    MOV byte ptr [EDI + 0x1],AL         ; 0052cbb4
    ADD EDI,0x2                         ; 0052cbb7
    CMP AL,0x0                          ; 0052cbba
    JNZ 0x0052cba6                      ; 0052cbbc
        ;   XREF to: 0052cba6 (CONDITIONAL_JUMP)  ; LAB_0052cba6
    POP EDI                             ; 0052cbbe
        ;   Label: LAB_0052cbbe
    LEA ESI,[ESP + 0x264]               ; 0052cbbf
    MOV AL,byte ptr [ESI]               ; 0052cbc6
        ;   Label: LAB_0052cbc6
    CMP AL,DL                           ; 0052cbc8
    JZ 0x0052cbde                       ; 0052cbca
        ;   XREF to: 0052cbde (CONDITIONAL_JUMP)  ; LAB_0052cbde
    CMP AL,0x0                          ; 0052cbcc
    JZ 0x0052cbdc                       ; 0052cbce
        ;   XREF to: 0052cbdc (CONDITIONAL_JUMP)  ; LAB_0052cbdc
    INC ESI                             ; 0052cbd0
    MOV AL,byte ptr [ESI]               ; 0052cbd1
    CMP AL,DL                           ; 0052cbd3
    JZ 0x0052cbde                       ; 0052cbd5
        ;   XREF to: 0052cbde (CONDITIONAL_JUMP)  ; LAB_0052cbde
    INC ESI                             ; 0052cbd7
    CMP AL,0x0                          ; 0052cbd8
    JNZ 0x0052cbc6                      ; 0052cbda
        ;   XREF to: 0052cbc6 (CONDITIONAL_JUMP)  ; LAB_0052cbc6
    SUB ESI,ESI                         ; 0052cbdc
        ;   Label: LAB_0052cbdc
    MOV EDI,ESI                         ; 0052cbde
        ;   Label: LAB_0052cbde
    TEST ESI,ESI                        ; 0052cbe0
    JNZ 0x0052cc07                      ; 0052cbe2
        ;   XREF to: 0052cc07 (CONDITIONAL_JUMP)  ; LAB_0052cc07
    LEA ESI,[ESP + 0x264]               ; 0052cbe4
    XOR DL,DL                           ; 0052cbeb
    MOV AL,byte ptr [ESI]               ; 0052cbed
        ;   Label: LAB_0052cbed
    CMP AL,DL                           ; 0052cbef
    JZ 0x0052cc05                       ; 0052cbf1
        ;   XREF to: 0052cc05 (CONDITIONAL_JUMP)  ; LAB_0052cc05
    CMP AL,0x0                          ; 0052cbf3
    JZ 0x0052cc03                       ; 0052cbf5
        ;   XREF to: 0052cc03 (CONDITIONAL_JUMP)  ; LAB_0052cc03
    INC ESI                             ; 0052cbf7
    MOV AL,byte ptr [ESI]               ; 0052cbf8
    CMP AL,DL                           ; 0052cbfa
    JZ 0x0052cc05                       ; 0052cbfc
        ;   XREF to: 0052cc05 (CONDITIONAL_JUMP)  ; LAB_0052cc05
    INC ESI                             ; 0052cbfe
    CMP AL,0x0                          ; 0052cbff
    JNZ 0x0052cbed                      ; 0052cc01
        ;   XREF to: 0052cbed (CONDITIONAL_JUMP)  ; LAB_0052cbed
    SUB ESI,ESI                         ; 0052cc03
        ;   Label: LAB_0052cc03
    MOV EDI,ESI                         ; 0052cc05
        ;   Label: LAB_0052cc05
    MOV ESI,0x5e562d                    ; 0052cc07 | DAT_005e562d
        ;   Label: LAB_0052cc07
    PUSH EDI                            ; 0052cc0c
    MOV AL,byte ptr [ESI]               ; 0052cc0d | DAT_005e562d | DAT_005e562f
        ;   Label: LAB_0052cc0d
    MOV byte ptr [EDI],AL               ; 0052cc0f
    CMP AL,0x0                          ; 0052cc11
    JZ 0x0052cc25                       ; 0052cc13
        ;   XREF to: 0052cc25 (CONDITIONAL_JUMP)  ; LAB_0052cc25
    MOV AL,byte ptr [ESI + 0x1]         ; 0052cc15 | DAT_005e562e | DAT_005e5630
    ADD ESI,0x2                         ; 0052cc18
    MOV byte ptr [EDI + 0x1],AL         ; 0052cc1b
    ADD EDI,0x2                         ; 0052cc1e
    CMP AL,0x0                          ; 0052cc21
    JNZ 0x0052cc0d                      ; 0052cc23
        ;   XREF to: 0052cc0d (CONDITIONAL_JUMP)  ; LAB_0052cc0d
    POP EDI                             ; 0052cc25
        ;   Label: LAB_0052cc25
    LEA EAX,[ESP + 0x264]               ; 0052cc26
    PUSH EAX                            ; 0052cc2d
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052cc2e
    PUSH EDI                            ; 0052cc31
    CALL FUN_00539860                   ; 0052cc32
        ;   XREF to: 00539860 (UNCONDITIONAL_CALL)  ; undefined FUN_00539860()
    MOV EDX,dword ptr [EDI + 0x15aca4]  ; 0052cc37
    ADD ESP,0x8                         ; 0052cc3d
    TEST EDX,EDX                        ; 0052cc40
    JZ 0x0052cc58                       ; 0052cc42
        ;   XREF to: 0052cc58 (CONDITIONAL_JUMP)  ; LAB_0052cc58
    LEA EAX,[EDI + 0x15aca8]            ; 0052cc44
    PUSH EAX                            ; 0052cc4a
    PUSH 0x1fc9ff8                      ; 0052cc4b
    CALL FUN_0044dcd0                   ; 0052cc50
        ;   XREF to: 0044dcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044dcd0()
    ADD ESP,0x8                         ; 0052cc55
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052cc58
        ;   Label: LAB_0052cc58
    MOV ECX,dword ptr [EAX]             ; 0052cc5b
    XOR ESI,ESI                         ; 0052cc5d
    TEST ECX,ECX                        ; 0052cc5f
    JLE 0x0052cca0                      ; 0052cc61
        ;   XREF to: 0052cca0 (CONDITIONAL_JUMP)  ; LAB_0052cca0
    MOV EBX,EAX                         ; 0052cc63
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052cc65
    FLD float ptr [EAX + 0x14d150]      ; 0052cc68
        ;   Label: LAB_0052cc68
    MOV dword ptr [EBX + 0x150],0x0     ; 0052cc6e
    MOV dword ptr [EBX + 0x1a4],0x1     ; 0052cc78
    INC ESI                             ; 0052cc82
    FSTP float ptr [EBX + 0x14c]        ; 0052cc83
    MOV EDI,dword ptr [EAX]             ; 0052cc89
    ADD EBX,0x1a4                       ; 0052cc8b
    CMP ESI,EDI                         ; 0052cc91
    JL 0x0052cc68                       ; 0052cc93
        ;   XREF to: 0052cc68 (CONDITIONAL_JUMP)  ; LAB_0052cc68
    LEA EAX,[EAX]                       ; 0052cc95
    LEA EDX,[EDX]                       ; 0052cc9b
    MOV EBX,EBX                         ; 0052cc9e
    MOV dword ptr [0x0200a394],0x1      ; 0052cca0 | DAT_0200a394
        ;   Label: LAB_0052cca0
    MOV ESP,EBP                         ; 0052ccaa
    POP EBP                             ; 0052ccac
    POP EDI                             ; 0052ccad
    POP ESI                             ; 0052ccae
    POP EBX                             ; 0052ccaf
    RET                                 ; 0052ccb0
    PUSH ESI                            ; 0052ccb1
        ;   Label: LAB_0052ccb1
    MOV EDI,0x5e5476                    ; 0052ccb2 | = "..\\core\\set.cpp"
    MOV EAX,0x15c                       ; 0052ccb7
    PUSH 0x5e5486                       ; 0052ccbc | = "CDemonSet::Unable to open %s"
    MOV dword ptr [0x01d046a0],EDI      ; 0052ccc1 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0052ccc7 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0052cccc
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 0052ccd1
    JMP 0x0052c13a                      ; 0052ccd4
        ;   XREF to: 0052c13a (UNCONDITIONAL_JUMP)  ; LAB_0052c13a
    MOV dword ptr [EAX + 0x14d154],0xbf800000 ; 0052ccd9
        ;   Label: LAB_0052ccd9
    MOV dword ptr [EAX + 0x14d158],0xbf800000 ; 0052cce3
    MOV dword ptr [EAX + 0x14d15c],0xbf800000 ; 0052cced
    FLD float ptr [ESI + 0x4]           ; 0052ccf7
    FMUL ST0                            ; 0052ccfa
    FLD float ptr [ESI]                 ; 0052ccfc
    FMUL ST0                            ; 0052ccfe
    FADDP                               ; 0052cd00
    FLD float ptr [ESI + 0x8]           ; 0052cd02
    FMUL ST0                            ; 0052cd05
    FADDP                               ; 0052cd07
    FSQRT                               ; 0052cd09
    FLDZ                                ; 0052cd0b
    FXCH                                ; 0052cd0d
    FSTP float ptr [ESP + 0x2e8]        ; 0052cd0f
    FCOMP float ptr [ESP + 0x2e8]       ; 0052cd16
    FNSTSW AX                           ; 0052cd1d
    SAHF                                ; 0052cd1f
    JNC 0x0052cd59                      ; 0052cd20
        ;   XREF to: 0052cd59 (CONDITIONAL_JUMP)  ; LAB_0052cd59
    FLD1                                ; 0052cd22
    FLD float ptr [ESI]                 ; 0052cd24
    FXCH                                ; 0052cd26
    FDIV float ptr [ESP + 0x2e8]        ; 0052cd28
    FXCH                                ; 0052cd2f
    FMUL ST1                            ; 0052cd31
    FLD float ptr [ESI + 0x4]           ; 0052cd33
    FMUL ST2                            ; 0052cd36
    FLD float ptr [ESI + 0x8]           ; 0052cd38
    FMULP ST3                           ; 0052cd3b
    FXCH                                ; 0052cd3d
    FSTP float ptr [ESI]                ; 0052cd3f
    FSTP float ptr [ESI + 0x4]          ; 0052cd41
    FSTP float ptr [ESI + 0x8]          ; 0052cd44
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052cd47
    MOV dword ptr [EAX + 0x14d160],0x0  ; 0052cd4a
    JMP 0x0052c1e8                      ; 0052cd54
        ;   XREF to: 0052c1e8 (UNCONDITIONAL_JUMP)  ; LAB_0052c1e8
    MOV dword ptr [ESI + 0x8],0x0       ; 0052cd59
        ;   Label: LAB_0052cd59
    MOV EAX,dword ptr [ESI + 0x8]       ; 0052cd60
    MOV dword ptr [ESI + 0x4],EAX       ; 0052cd63
    MOV EAX,dword ptr [ESI + 0x4]       ; 0052cd66
    MOV dword ptr [ESI],EAX             ; 0052cd69
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052cd6b
    MOV dword ptr [EAX + 0x14d160],0x0  ; 0052cd6e
    JMP 0x0052c1e8                      ; 0052cd78
        ;   XREF to: 0052c1e8 (UNCONDITIONAL_JUMP)  ; LAB_0052c1e8
    PUSH EDI                            ; 0052cd7d
        ;   Label: LAB_0052cd7d
    PUSH EBX                            ; 0052cd7e
    PUSH ESI                            ; 0052cd7f
    CALL FUN_00443400                   ; 0052cd80
        ;   XREF to: 00443400 (UNCONDITIONAL_CALL)  ; undefined FUN_00443400()
    ADD ESP,0xc                         ; 0052cd85
    JMP 0x0052c2f6                      ; 0052cd88
        ;   XREF to: 0052c2f6 (UNCONDITIONAL_JUMP)  ; LAB_0052c2f6
    MOV EDI,0x2000                      ; 0052cd8d
        ;   Label: LAB_0052cd8d
    MOV ESI,0x3e800000                  ; 0052cd92
    XOR EAX,EAX                         ; 0052cd97
    MOV dword ptr [0x0061e528],EDI      ; 0052cd99 | DAT_0061e528
    MOV [0x026537a0],EAX                ; 0052cd9f | DAT_026537a0
    MOV [0x026537a4],EAX                ; 0052cda4 | DAT_026537a4
    MOV dword ptr [0x0061e524],ESI      ; 0052cda9 | DAT_0061e524
    JMP 0x0052c369                      ; 0052cdaf
        ;   XREF to: 0052c369 (UNCONDITIONAL_JUMP)  ; LAB_0052c369
    PUSH 0x4                            ; 0052cdb4
        ;   Label: LAB_0052cdb4
    PUSH 0x5e5507                       ; 0052cdb6 | DAT_005e5507
    LEA EAX,[ESP + 0x208]               ; 0052cdbb
    PUSH EAX                            ; 0052cdc2
    CALL FUN_005b8da0                   ; 0052cdc3
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8da0()
    ADD ESP,0xc                         ; 0052cdc8
    TEST EAX,EAX                        ; 0052cdcb
    JNZ 0x0052cddf                      ; 0052cdcd
        ;   XREF to: 0052cddf (CONDITIONAL_JUMP)  ; LAB_0052cddf
    MOV EAX,[0x0061e520]                ; 0052cdcf | DAT_0061e520
    MOV dword ptr [EAX],0x1             ; 0052cdd4 | DAT_02653790
    JMP 0x0052c3d4                      ; 0052cdda
        ;   XREF to: 0052c3d4 (UNCONDITIONAL_JUMP)  ; LAB_0052c3d4
    MOV EAX,[0x0061e520]                ; 0052cddf | DAT_0061e520
        ;   Label: LAB_0052cddf
    MOV dword ptr [EAX],0x0             ; 0052cde4 | DAT_02653790
    JMP 0x0052c3d4                      ; 0052cdea
        ;   XREF to: 0052c3d4 (UNCONDITIONAL_JUMP)  ; LAB_0052c3d4
    MOV dword ptr [EAX + 0x16163c],0x1  ; 0052cdef
        ;   Label: LAB_0052cdef
    JMP 0x0052c40e                      ; 0052cdf9
        ;   XREF to: 0052c40e (UNCONDITIONAL_JUMP)  ; LAB_0052c40e
    MOV ESI,0x5e5517                    ; 0052cdfe | = "NITESKY.RAW"
        ;   Label: LAB_0052cdfe
    PUSH EDI                            ; 0052ce03
    MOV AL,byte ptr [ESI]               ; 0052ce04 | = "NITESKY.RAW" | s_NITESKY_RAW_005e5517+2
        ;   Label: LAB_0052ce04
    MOV byte ptr [EDI],AL               ; 0052ce06
    CMP AL,0x0                          ; 0052ce08
    JZ 0x0052ce1c                       ; 0052ce0a
        ;   XREF to: 0052ce1c (CONDITIONAL_JUMP)  ; LAB_0052ce1c
    MOV AL,byte ptr [ESI + 0x1]         ; 0052ce0c | s_NITESKY_RAW_005e5517+1 | s_NITESKY_RAW_005e5517+3
    ADD ESI,0x2                         ; 0052ce0f
    MOV byte ptr [EDI + 0x1],AL         ; 0052ce12
    ADD EDI,0x2                         ; 0052ce15
    CMP AL,0x0                          ; 0052ce18
    JNZ 0x0052ce04                      ; 0052ce1a
        ;   XREF to: 0052ce04 (CONDITIONAL_JUMP)  ; LAB_0052ce04
    POP EDI                             ; 0052ce1c
        ;   Label: LAB_0052ce1c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052ce1d
    MOV dword ptr [EAX + 0x161660],0x4000 ; 0052ce20
    JMP 0x0052c43e                      ; 0052ce2a
        ;   XREF to: 0052c43e (UNCONDITIONAL_JUMP)  ; LAB_0052c43e
    MOV ESI,0x5e552a                    ; 0052ce2f | DAT_005e552a
        ;   Label: LAB_0052ce2f
    MOV dword ptr [EAX + 0x15ae60],0x0  ; 0052ce34
    PUSH EDI                            ; 0052ce3e
    MOV AL,byte ptr [ESI]               ; 0052ce3f | DAT_005e552a | DAT_005e552c
        ;   Label: LAB_0052ce3f
    MOV byte ptr [EDI],AL               ; 0052ce41
    CMP AL,0x0                          ; 0052ce43
    JZ 0x0052ce57                       ; 0052ce45
        ;   XREF to: 0052ce57 (CONDITIONAL_JUMP)  ; LAB_0052ce57
    MOV AL,byte ptr [ESI + 0x1]         ; 0052ce47 | DAT_005e552b | DAT_005e552d
    ADD ESI,0x2                         ; 0052ce4a
    MOV byte ptr [EDI + 0x1],AL         ; 0052ce4d
    ADD EDI,0x2                         ; 0052ce50
    CMP AL,0x0                          ; 0052ce53
    JNZ 0x0052ce3f                      ; 0052ce55
        ;   XREF to: 0052ce3f (CONDITIONAL_JUMP)  ; LAB_0052ce3f
    POP EDI                             ; 0052ce57
        ;   Label: LAB_0052ce57
    JMP 0x0052c484                      ; 0052ce58
        ;   XREF to: 0052c484 (UNCONDITIONAL_JUMP)  ; LAB_0052c484
    MOV dword ptr [EAX + 0x16167c],0x0  ; 0052ce5d
        ;   Label: LAB_0052ce5d
    JMP 0x0052c4be                      ; 0052ce67
        ;   XREF to: 0052c4be (UNCONDITIONAL_JUMP)  ; LAB_0052c4be
    MOV dword ptr [EAX + 0x15acbc],0x0  ; 0052ce6c
        ;   Label: LAB_0052ce6c
    JMP 0x0052c4f8                      ; 0052ce76
        ;   XREF to: 0052c4f8 (UNCONDITIONAL_JUMP)  ; LAB_0052c4f8
    MOV EAX,[0x0061e450]                ; 0052ce7b | DAT_0061e450
        ;   Label: LAB_0052ce7b
    PUSH EAX                            ; 0052ce80
    CALL FUN_0057b840                   ; 0052ce81
        ;   XREF to: 0057b840 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b840()
    ADD ESP,0x4                         ; 0052ce86
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052ce89
    MOV dword ptr [EAX + 0x15acb8],0x0  ; 0052ce8c
    JMP 0x0052c54f                      ; 0052ce96
        ;   XREF to: 0052c54f (UNCONDITIONAL_JUMP)  ; LAB_0052c54f
    PUSH 0x5                            ; 0052ce9b
        ;   Label: LAB_0052ce9b
    PUSH 0x5e556f                       ; 0052ce9d | = "mauso"
    MOV dword ptr [EAX + 0x15aecc],0x0  ; 0052cea2
    LEA EAX,[ESP + 0x208]               ; 0052ceac
    PUSH EAX                            ; 0052ceb3
    CALL FUN_005b8da0                   ; 0052ceb4
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8da0()
    ADD ESP,0xc                         ; 0052ceb9
    TEST EAX,EAX                        ; 0052cebc
    JNZ 0x0052cecd                      ; 0052cebe
        ;   XREF to: 0052cecd (CONDITIONAL_JUMP)  ; LAB_0052cecd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052cec0
    MOV dword ptr [EAX + 0x15aecc],0x2  ; 0052cec3
    PUSH 0x4                            ; 0052cecd
        ;   Label: LAB_0052cecd
    PUSH 0x5e5575                       ; 0052cecf | DAT_005e5575
    LEA EAX,[ESP + 0x208]               ; 0052ced4
    PUSH EAX                            ; 0052cedb
    CALL FUN_005b8da0                   ; 0052cedc
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8da0()
    ADD ESP,0xc                         ; 0052cee1
    TEST EAX,EAX                        ; 0052cee4
    JNZ 0x0052cef5                      ; 0052cee6
        ;   XREF to: 0052cef5 (CONDITIONAL_JUMP)  ; LAB_0052cef5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052cee8
    MOV dword ptr [EAX + 0x15aecc],0x0  ; 0052ceeb
    PUSH 0x5                            ; 0052cef5
        ;   Label: LAB_0052cef5
    PUSH 0x5e557a                       ; 0052cef7 | = "smill"
    LEA EAX,[ESP + 0x208]               ; 0052cefc
    PUSH EAX                            ; 0052cf03
    CALL FUN_005b8da0                   ; 0052cf04
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8da0()
    ADD ESP,0xc                         ; 0052cf09
    TEST EAX,EAX                        ; 0052cf0c
    JNZ 0x0052cf1d                      ; 0052cf0e
        ;   XREF to: 0052cf1d (CONDITIONAL_JUMP)  ; LAB_0052cf1d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052cf10
    MOV dword ptr [EAX + 0x15aecc],0x3  ; 0052cf13
    PUSH 0x6                            ; 0052cf1d
        ;   Label: LAB_0052cf1d
    PUSH 0x5e5580                       ; 0052cf1f | = "pier59"
    LEA EAX,[ESP + 0x208]               ; 0052cf24
    PUSH EAX                            ; 0052cf2b
    CALL FUN_005b8da0                   ; 0052cf2c
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8da0()
    ADD ESP,0xc                         ; 0052cf31
    TEST EAX,EAX                        ; 0052cf34
    JNZ 0x0052cf45                      ; 0052cf36
        ;   XREF to: 0052cf45 (CONDITIONAL_JUMP)  ; LAB_0052cf45
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052cf38
    MOV dword ptr [EAX + 0x15aecc],0x0  ; 0052cf3b
    PUSH 0x4                            ; 0052cf45
        ;   Label: LAB_0052cf45
    PUSH 0x5e5587                       ; 0052cf47 | DAT_005e5587
    LEA EAX,[ESP + 0x208]               ; 0052cf4c
    PUSH EAX                            ; 0052cf53
    CALL FUN_005b8da0                   ; 0052cf54
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8da0()
    ADD ESP,0xc                         ; 0052cf59
    TEST EAX,EAX                        ; 0052cf5c
    JNZ 0x0052cf6d                      ; 0052cf5e
        ;   XREF to: 0052cf6d (CONDITIONAL_JUMP)  ; LAB_0052cf6d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052cf60
    MOV dword ptr [EAX + 0x15aecc],0x3  ; 0052cf63
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052cf6d
        ;   Label: LAB_0052cf6d
    MOV dword ptr [EAX + 0x15aed0],0x0  ; 0052cf70
    JMP 0x0052c810                      ; 0052cf7a
        ;   XREF to: 0052c810 (UNCONDITIONAL_JUMP)  ; LAB_0052c810
    PUSH 0x5                            ; 0052cf7f
        ;   Label: LAB_0052cf7f
    PUSH 0x5e5590                       ; 0052cf81 | = "mauso"
    MOV dword ptr [EAX + 0x15f690],0x2  ; 0052cf86
    LEA EAX,[ESP + 0x208]               ; 0052cf90
    PUSH EAX                            ; 0052cf97
    CALL FUN_005b8da0                   ; 0052cf98
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8da0()
    ADD ESP,0xc                         ; 0052cf9d
    TEST EAX,EAX                        ; 0052cfa0
    JNZ 0x0052cfb1                      ; 0052cfa2
        ;   XREF to: 0052cfb1 (CONDITIONAL_JUMP)  ; LAB_0052cfb1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052cfa4
    MOV dword ptr [EAX + 0x15f690],0x8  ; 0052cfa7
    PUSH 0x4                            ; 0052cfb1
        ;   Label: LAB_0052cfb1
    PUSH 0x5e5596                       ; 0052cfb3 | DAT_005e5596
    LEA EAX,[ESP + 0x208]               ; 0052cfb8
    PUSH EAX                            ; 0052cfbf
    CALL FUN_005b8da0                   ; 0052cfc0
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8da0()
    ADD ESP,0xc                         ; 0052cfc5
    TEST EAX,EAX                        ; 0052cfc8
    JNZ 0x0052cfd9                      ; 0052cfca
        ;   XREF to: 0052cfd9 (CONDITIONAL_JUMP)  ; LAB_0052cfd9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052cfcc
    MOV dword ptr [EAX + 0x15f690],0x3  ; 0052cfcf
    PUSH 0x5                            ; 0052cfd9
        ;   Label: LAB_0052cfd9
    PUSH 0x5e559b                       ; 0052cfdb | = "smill"
    LEA EAX,[ESP + 0x208]               ; 0052cfe0
    PUSH EAX                            ; 0052cfe7
    CALL FUN_005b8da0                   ; 0052cfe8
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8da0()
    ADD ESP,0xc                         ; 0052cfed
    TEST EAX,EAX                        ; 0052cff0
    JNZ 0x0052d001                      ; 0052cff2
        ;   XREF to: 0052d001 (CONDITIONAL_JUMP)  ; LAB_0052d001
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052cff4
    MOV dword ptr [EAX + 0x15f690],0x2  ; 0052cff7
    PUSH 0x6                            ; 0052d001
        ;   Label: LAB_0052d001
    PUSH 0x5e55a1                       ; 0052d003 | = "pier59"
    LEA EAX,[ESP + 0x208]               ; 0052d008
    PUSH EAX                            ; 0052d00f
    CALL FUN_005b8da0                   ; 0052d010
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8da0()
    ADD ESP,0xc                         ; 0052d015
    TEST EAX,EAX                        ; 0052d018
    JNZ 0x0052d029                      ; 0052d01a
        ;   XREF to: 0052d029 (CONDITIONAL_JUMP)  ; LAB_0052d029
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052d01c
    MOV dword ptr [EAX + 0x15f690],0x7  ; 0052d01f
    PUSH 0x6                            ; 0052d029
        ;   Label: LAB_0052d029
    PUSH 0x5e55a8                       ; 0052d02b | = "castle"
    LEA EAX,[ESP + 0x208]               ; 0052d030
    PUSH EAX                            ; 0052d037
    CALL FUN_005b8da0                   ; 0052d038
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8da0()
    ADD ESP,0xc                         ; 0052d03d
    TEST EAX,EAX                        ; 0052d040
    JNZ 0x0052d051                      ; 0052d042
        ;   XREF to: 0052d051 (CONDITIONAL_JUMP)  ; LAB_0052d051
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052d044
    MOV dword ptr [EAX + 0x15f690],0x2  ; 0052d047
    PUSH 0x4                            ; 0052d051
        ;   Label: LAB_0052d051
    PUSH 0x5e55af                       ; 0052d053 | DAT_005e55af
    LEA EAX,[ESP + 0x208]               ; 0052d058
    PUSH EAX                            ; 0052d05f
    CALL FUN_005b8da0                   ; 0052d060
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8da0()
    ADD ESP,0xc                         ; 0052d065
    TEST EAX,EAX                        ; 0052d068
    JNZ 0x0052c84a                      ; 0052d06a
        ;   XREF to: 0052c84a (CONDITIONAL_JUMP)  ; LAB_0052c84a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052d070
    MOV dword ptr [EAX + 0x15f690],0x8  ; 0052d073
    JMP 0x0052c84a                      ; 0052d07d
        ;   XREF to: 0052c84a (UNCONDITIONAL_JUMP)  ; LAB_0052c84a
    MOV dword ptr [EAX + 0x15ac8c],0x0  ; 0052d082
        ;   Label: LAB_0052d082
    JMP 0x0052c884                      ; 0052d08c
        ;   XREF to: 0052c884 (UNCONDITIONAL_JUMP)  ; LAB_0052c884
    MOV dword ptr [EAX + 0x15b424],0x0  ; 0052d091
        ;   Label: LAB_0052d091
    JMP 0x0052ca4c                      ; 0052d09b
        ;   XREF to: 0052ca4c (UNCONDITIONAL_JUMP)  ; LAB_0052ca4c
    CALL FUN_0055b1f0                   ; 0052d0a0
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b1f0()
        ;   Label: LAB_0052d0a0
    PUSH 0x0                            ; 0052d0a5
    PUSH 0x0                            ; 0052d0a7
    PUSH 0x5e55f7                       ; 0052d0a9 | = "Warning!  No .GEO file.  Press any key"
    CALL FUN_00401fe0                   ; 0052d0ae
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0052d0b3
    CALL FUN_00589560                   ; 0052d0b6
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; undefined FUN_00589560()
    CALL FUN_004032b0                   ; 0052d0bb
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    CALL FUN_0058ead0                   ; 0052d0c0
        ;   XREF to: 0058ead0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ead0()
    JMP 0x0052cb6f                      ; 0052d0c5
        ;   XREF to: 0052cb6f (UNCONDITIONAL_JUMP)  ; LAB_0052cb6f
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052d0ca
        ;   Label: LAB_0052d0ca
    PUSH EBX                            ; 0052d0cd
    CALL FUN_00538160                   ; 0052d0ce
        ;   XREF to: 00538160 (UNCONDITIONAL_CALL)  ; undefined FUN_00538160()
    ADD ESP,0x4                         ; 0052d0d3
    JMP 0x0052cb74                      ; 0052d0d6
        ;   XREF to: 0052cb74 (UNCONDITIONAL_JUMP)  ; LAB_0052cb74

