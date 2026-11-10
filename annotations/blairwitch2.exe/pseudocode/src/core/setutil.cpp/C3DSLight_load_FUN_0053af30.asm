; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_load_FUN_0053af30(C3DSLight *this_ptr,_FILE *file_handle)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x148]:1  local_148
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x40]:1  local_40
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
;   core_set.cpp_CDemonSet_load_FUN_0052c0e0 at 0052c5a3
;
; Referenced Globals:
;   TerminatedCString s_anon_005e6221
;   TerminatedCString s_f_f_f_005e6228
;   TerminatedCString s_f_f_f_005e6232
;   undefined4 DAT_005e623c
;   undefined4 DAT_005e6240
;   undefined4 DAT_005e6244
;   undefined4 DAT_005e6248
;   TerminatedCString s_f_f_f_f_f_005e624c
;   TerminatedCString s_d_d_005e625c
;   undefined4 DAT_005e6263
;   undefined4 DAT_005e6267
;   TerminatedCString s_f_s_005e626b
;   TerminatedCString s_f_d_s_005e6272
;   undefined4 DAT_005e627c
;   TerminatedCString s_d_d_d_d_d_005e6280
;   ... and 11 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;   crt_stdio.c_fgets_FUN_005b9600
;   crt_stdio.c_fscanf_FUN_005b8100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053af30
        ;   Label: core_setutil.cpp_C3DSLight_load_FUN_0053af30
    PUSH ESI                            ; 0053af31
    PUSH EDI                            ; 0053af32
    PUSH EBP                            ; 0053af33
    SUB ESP,0x138                       ; 0053af34
    MOV EBX,dword ptr [ESP + 0x14c]     ; 0053af3a
    MOV ESI,dword ptr [ESP + 0x150]     ; 0053af41
    MOV EAX,[0x0061b5a8]                ; 0053af48 | g_CDemonSetPtr
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 0053af4d | g_CDemonSetInstance.field133_0x15acc0
    JGE 0x0053b45c                      ; 0053af54
        ;   XREF to: 0053b45c (CONDITIONAL_JUMP)  ; LAB_0053b45c
    LEA EAX,[EBX + 0x4]                 ; 0053af5a
        ;   Label: LAB_0053af5a
    PUSH EAX                            ; 0053af5d
    PUSH 0x5e6221                       ; 0053af5e | = "%[^\n]\n"
    PUSH ESI                            ; 0053af63
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053af64
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    MOV EAX,[0x0061b5a8]                ; 0053af69 | g_CDemonSetPtr
    MOV ECX,dword ptr [EAX + 0x15acc0]  ; 0053af6e | g_CDemonSetInstance.field133_0x15acc0
    ADD ESP,0xc                         ; 0053af74
    CMP ECX,0xb                         ; 0053af77
    JL 0x0053af8f                       ; 0053af7a
        ;   XREF to: 0053af8f (CONDITIONAL_JUMP)  ; LAB_0053af8f
    PUSH ESI                            ; 0053af7c
    PUSH 0xff                           ; 0053af7d
    LEA EAX,[ESP + 0x8]                 ; 0053af82
    PUSH EAX                            ; 0053af86
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0053af87
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 0053af8c
    LEA EAX,[EBX + 0x10c]               ; 0053af8f
        ;   Label: LAB_0053af8f
    PUSH EAX                            ; 0053af95
    LEA EAX,[EBX + 0x108]               ; 0053af96
    PUSH EAX                            ; 0053af9c
    LEA EAX,[EBX + 0x104]               ; 0053af9d
    PUSH EAX                            ; 0053afa3
    PUSH 0x5e6228                       ; 0053afa4 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0053afa9
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053afaa
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    MOV EAX,[0x0061b5a8]                ; 0053afaf | g_CDemonSetPtr
    MOV EDI,dword ptr [EAX + 0x15acc0]  ; 0053afb4 | g_CDemonSetInstance.field133_0x15acc0
    ADD ESP,0x14                        ; 0053afba
    CMP EDI,0xb                         ; 0053afbd
    JL 0x0053afd5                       ; 0053afc0
        ;   XREF to: 0053afd5 (CONDITIONAL_JUMP)  ; LAB_0053afd5
    PUSH ESI                            ; 0053afc2
    PUSH 0xff                           ; 0053afc3
    LEA EAX,[ESP + 0x8]                 ; 0053afc8
    PUSH EAX                            ; 0053afcc
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0053afcd
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 0053afd2
    LEA EAX,[EBX + 0x114]               ; 0053afd5
        ;   Label: LAB_0053afd5
    PUSH EAX                            ; 0053afdb
    LEA EAX,[EBX + 0x118]               ; 0053afdc
    PUSH EAX                            ; 0053afe2
    LEA EAX,[EBX + 0x110]               ; 0053afe3
    PUSH EAX                            ; 0053afe9
    PUSH 0x5e6232                       ; 0053afea | = "%f,%f,%f\n"
    PUSH ESI                            ; 0053afef
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053aff0
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    MOV EAX,[0x0061b5a8]                ; 0053aff5 | g_CDemonSetPtr
    MOV EBP,dword ptr [EAX + 0x15acc0]  ; 0053affa | g_CDemonSetInstance.field133_0x15acc0
    ADD ESP,0x14                        ; 0053b000
    CMP EBP,0xb                         ; 0053b003
    JL 0x0053b01b                       ; 0053b006
        ;   XREF to: 0053b01b (CONDITIONAL_JUMP)  ; LAB_0053b01b
    PUSH ESI                            ; 0053b008
    PUSH 0xff                           ; 0053b009
    LEA EAX,[ESP + 0x8]                 ; 0053b00e
    PUSH EAX                            ; 0053b012
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0053b013
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 0053b018
    LEA EAX,[EBX + 0x11c]               ; 0053b01b
        ;   Label: LAB_0053b01b
    PUSH EAX                            ; 0053b021
    PUSH 0x5e623c                       ; 0053b022 | DAT_005e623c
    PUSH ESI                            ; 0053b027
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053b028
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    MOV EAX,[0x0061b5a8]                ; 0053b02d | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 0053b032 | g_CDemonSetInstance.field133_0x15acc0
    ADD ESP,0xc                         ; 0053b038
    CMP EDX,0x15                        ; 0053b03b
    JL 0x0053b474                       ; 0053b03e
        ;   XREF to: 0053b474 (CONDITIONAL_JUMP)  ; LAB_0053b474
    PUSH ESI                            ; 0053b044
    PUSH 0xff                           ; 0053b045
    LEA EAX,[ESP + 0x8]                 ; 0053b04a
    PUSH EAX                            ; 0053b04e
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0053b04f
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 0053b054
    LEA EAX,[EBX + 0x120]               ; 0053b057
    PUSH EAX                            ; 0053b05d
    PUSH 0x5e6240                       ; 0053b05e | DAT_005e6240
    PUSH ESI                            ; 0053b063
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053b064
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 0053b069
    MOV EAX,[0x0061b5a8]                ; 0053b06c | g_CDemonSetPtr
        ;   Label: LAB_0053b06c
    CMP dword ptr [EAX + 0x15acc0],0x16 ; 0053b071 | g_CDemonSetInstance.field133_0x15acc0
    JL 0x0053b483                       ; 0053b078
        ;   XREF to: 0053b483 (CONDITIONAL_JUMP)  ; LAB_0053b483
    PUSH ESI                            ; 0053b07e
    PUSH 0xff                           ; 0053b07f
    LEA EAX,[ESP + 0x8]                 ; 0053b084
    PUSH EAX                            ; 0053b088
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0053b089
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 0053b08e
    LEA EAX,[EBX + 0x124]               ; 0053b091
    PUSH EAX                            ; 0053b097
    PUSH 0x5e6244                       ; 0053b098 | DAT_005e6244
    PUSH ESI                            ; 0053b09d
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053b09e
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 0053b0a3
    MOV EAX,[0x0061b5a8]                ; 0053b0a6 | g_CDemonSetPtr
        ;   Label: LAB_0053b0a6
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 0053b0ab | g_CDemonSetInstance.field133_0x15acc0
    JL 0x0053b0c7                       ; 0053b0b2
        ;   XREF to: 0053b0c7 (CONDITIONAL_JUMP)  ; LAB_0053b0c7
    PUSH ESI                            ; 0053b0b4
    PUSH 0xff                           ; 0053b0b5
    LEA EAX,[ESP + 0x8]                 ; 0053b0ba
    PUSH EAX                            ; 0053b0be
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0053b0bf
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 0053b0c4
    PUSH EBX                            ; 0053b0c7
        ;   Label: LAB_0053b0c7
    PUSH 0x5e6248                       ; 0053b0c8 | DAT_005e6248
    PUSH ESI                            ; 0053b0cd
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053b0ce
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    MOV EAX,[0x0061b5a8]                ; 0053b0d3 | g_CDemonSetPtr
    MOV EBP,dword ptr [EAX + 0x15acc0]  ; 0053b0d8 | g_CDemonSetInstance.field133_0x15acc0
    ADD ESP,0xc                         ; 0053b0de
    CMP EBP,0xb                         ; 0053b0e1
    JL 0x0053b0f9                       ; 0053b0e4
        ;   XREF to: 0053b0f9 (CONDITIONAL_JUMP)  ; LAB_0053b0f9
    PUSH ESI                            ; 0053b0e6
    PUSH 0xff                           ; 0053b0e7
    LEA EAX,[ESP + 0x8]                 ; 0053b0ec
    PUSH EAX                            ; 0053b0f0
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0053b0f1
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 0053b0f6
    LEA EAX,[EBX + 0x11d4]              ; 0053b0f9
        ;   Label: LAB_0053b0f9
    PUSH EAX                            ; 0053b0ff
    LEA EAX,[EBX + 0x11d0]              ; 0053b100
    PUSH EAX                            ; 0053b106
    LEA EAX,[EBX + 0x11cc]              ; 0053b107
    PUSH EAX                            ; 0053b10d
    LEA EAX,[EBX + 0x11c8]              ; 0053b10e
    PUSH EAX                            ; 0053b114
    LEA EAX,[EBX + 0x11c4]              ; 0053b115
    PUSH EAX                            ; 0053b11b
    PUSH 0x5e624c                       ; 0053b11c | = "%f,%f,%f,%f,%f\n"
    PUSH ESI                            ; 0053b121
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053b122
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    MOV EAX,[0x0061b5a8]                ; 0053b127 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 0053b12c | g_CDemonSetInstance.field133_0x15acc0
    ADD ESP,0x1c                        ; 0053b132
    CMP EDX,0xb                         ; 0053b135
    JL 0x0053b14d                       ; 0053b138
        ;   XREF to: 0053b14d (CONDITIONAL_JUMP)  ; LAB_0053b14d
    PUSH ESI                            ; 0053b13a
    PUSH 0xff                           ; 0053b13b
    LEA EAX,[ESP + 0x8]                 ; 0053b140
    PUSH EAX                            ; 0053b144
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0053b145
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 0053b14a
    LEA EAX,[EBX + 0x180c]              ; 0053b14d
        ;   Label: LAB_0053b14d
    PUSH EAX                            ; 0053b153
    LEA EAX,[EBX + 0x1808]              ; 0053b154
    PUSH EAX                            ; 0053b15a
    PUSH 0x5e625c                       ; 0053b15b | = "%d,%d\n"
    PUSH ESI                            ; 0053b160
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053b161
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    MOV EAX,[0x0061b5a8]                ; 0053b166 | g_CDemonSetPtr
    MOV ECX,dword ptr [EAX + 0x15acc0]  ; 0053b16b | g_CDemonSetInstance.field133_0x15acc0
    ADD ESP,0x10                        ; 0053b171
    CMP ECX,0xb                         ; 0053b174
    JL 0x0053b18c                       ; 0053b177
        ;   XREF to: 0053b18c (CONDITIONAL_JUMP)  ; LAB_0053b18c
    PUSH ESI                            ; 0053b179
    PUSH 0xff                           ; 0053b17a
    LEA EAX,[ESP + 0x8]                 ; 0053b17f
    PUSH EAX                            ; 0053b183
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0053b184
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 0053b189
    LEA EAX,[EBX + 0x11ec]              ; 0053b18c
        ;   Label: LAB_0053b18c
    PUSH EAX                            ; 0053b192
    PUSH 0x5e6263                       ; 0053b193 | DAT_005e6263
    PUSH ESI                            ; 0053b198
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053b199
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    MOV EAX,[0x0061b5a8]                ; 0053b19e | g_CDemonSetPtr
    MOV EDI,dword ptr [EAX + 0x15acc0]  ; 0053b1a3 | g_CDemonSetInstance.field133_0x15acc0
    ADD ESP,0xc                         ; 0053b1a9
    CMP EDI,0xb                         ; 0053b1ac
    JL 0x0053b1c4                       ; 0053b1af
        ;   XREF to: 0053b1c4 (CONDITIONAL_JUMP)  ; LAB_0053b1c4
    PUSH ESI                            ; 0053b1b1
    PUSH 0xff                           ; 0053b1b2
    LEA EAX,[ESP + 0x8]                 ; 0053b1b7
    PUSH EAX                            ; 0053b1bb
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0053b1bc
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 0053b1c1
    MOV EAX,[0x0061b5a8]                ; 0053b1c4 | g_CDemonSetPtr
        ;   Label: LAB_0053b1c4
    CMP dword ptr [EAX + 0x15acc0],0x9  ; 0053b1c9 | g_CDemonSetInstance.field133_0x15acc0
    JL 0x0053b492                       ; 0053b1d0
        ;   XREF to: 0053b492 (CONDITIONAL_JUMP)  ; LAB_0053b492
    LEA EAX,[EBX + 0x11f0]              ; 0053b1d6
    PUSH EAX                            ; 0053b1dc
    PUSH 0x5e6267                       ; 0053b1dd | DAT_005e6267
    PUSH ESI                            ; 0053b1e2
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053b1e3
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 0053b1e8
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 0053b1eb
        ;   Label: LAB_0053b1eb
    XOR EDI,EDI                         ; 0053b1f1
    TEST EAX,EAX                        ; 0053b1f3
    JLE 0x0053b2a9                      ; 0053b1f5
        ;   XREF to: 0053b2a9 (CONDITIONAL_JUMP)  ; LAB_0053b2a9
    LEA EAX,[EBX + 0x1774]              ; 0053b1fb
    LEA EBP,[EBX + 0x16f4]              ; 0053b201
    MOV dword ptr [ESP + 0x120],EAX     ; 0053b207
    LEA EAX,[EBX + 0x11f4]              ; 0053b20e
    MOV dword ptr [ESP + 0x134],EAX     ; 0053b214
    MOV dword ptr [ESP + 0x130],EBX     ; 0053b21b
    LEA EDX,[EDI*0x4 + 0x0]             ; 0053b222
        ;   Label: LAB_0053b222
    MOV EAX,[0x0061b5a8]                ; 0053b229 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x12c],EDX     ; 0053b22e
    CMP dword ptr [EAX + 0x15acc0],0x10 ; 0053b235 | g_CDemonSetInstance.field133_0x15acc0
    JGE 0x0053b4a1                      ; 0053b23c
        ;   XREF to: 0053b4a1 (CONDITIONAL_JUMP)  ; LAB_0053b4a1
    MOV ECX,dword ptr [ESP + 0x134]     ; 0053b242
    PUSH ECX                            ; 0053b249
    PUSH EBP                            ; 0053b24a
    PUSH 0x5e626b                       ; 0053b24b | = "%f,%s\n"
    PUSH ESI                            ; 0053b250
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053b251
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x10                        ; 0053b256
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0053b259
    MOV dword ptr [EBX + EAX*0x1 + 0x1774],0x0 ; 0053b260
    MOV EAX,dword ptr [ESP + 0x130]     ; 0053b26b
        ;   Label: LAB_0053b26b
    MOV EDX,dword ptr [ESP + 0x134]     ; 0053b272
    ADD EBP,0x4                         ; 0053b279
    INC EDI                             ; 0053b27c
    ADD EDX,0x28                        ; 0053b27d
    LEA ECX,[EAX + 0x4]                 ; 0053b280
    MOV dword ptr [EAX + 0x1810],0x0    ; 0053b283
    MOV dword ptr [ESP + 0x134],EDX     ; 0053b28d
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 0053b294
    MOV dword ptr [ESP + 0x130],ECX     ; 0053b29a
    CMP EDI,EAX                         ; 0053b2a1
    JL 0x0053b222                       ; 0053b2a3
        ;   XREF to: 0053b222 (CONDITIONAL_JUMP)  ; LAB_0053b222
    MOV EAX,[0x0061b5a8]                ; 0053b2a9 | g_CDemonSetPtr
        ;   Label: LAB_0053b2a9
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 0053b2ae | g_CDemonSetInstance.field133_0x15acc0
    JL 0x0053b2ca                       ; 0053b2b5
        ;   XREF to: 0053b2ca (CONDITIONAL_JUMP)  ; LAB_0053b2ca
    PUSH ESI                            ; 0053b2b7
    PUSH 0xff                           ; 0053b2b8
    LEA EAX,[ESP + 0x8]                 ; 0053b2bd
    PUSH EAX                            ; 0053b2c1
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0053b2c2
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 0053b2c7
    LEA EAX,[EBX + 0x1890]              ; 0053b2ca
        ;   Label: LAB_0053b2ca
    PUSH EAX                            ; 0053b2d0
    PUSH 0x5e627c                       ; 0053b2d1 | DAT_005e627c
    PUSH ESI                            ; 0053b2d6
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053b2d7
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    MOV EAX,[0x0061b5a8]                ; 0053b2dc | g_CDemonSetPtr
    MOV ECX,dword ptr [EAX + 0x15acc0]  ; 0053b2e1 | g_CDemonSetInstance.field133_0x15acc0
    ADD ESP,0xc                         ; 0053b2e7
    CMP ECX,0x13                        ; 0053b2ea
    JL 0x0053b4ce                       ; 0053b2ed
        ;   XREF to: 0053b4ce (CONDITIONAL_JUMP)  ; LAB_0053b4ce
    PUSH ESI                            ; 0053b2f3
    PUSH 0xff                           ; 0053b2f4
    LEA EAX,[ESP + 0x8]                 ; 0053b2f9
    PUSH EAX                            ; 0053b2fd
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0053b2fe
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 0053b303
    LEA EAX,[EBX + 0x1804]              ; 0053b306
    PUSH EAX                            ; 0053b30c
    LEA EAX,[EBX + 0x1800]              ; 0053b30d
    PUSH EAX                            ; 0053b313
    LEA EAX,[EBX + 0x17fc]              ; 0053b314
    PUSH EAX                            ; 0053b31a
    LEA EAX,[EBX + 0x17f8]              ; 0053b31b
    PUSH EAX                            ; 0053b321
    LEA EAX,[EBX + 0x17f4]              ; 0053b322
    PUSH EAX                            ; 0053b328
    PUSH 0x5e6280                       ; 0053b329 | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 0053b32e
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053b32f
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x1c                        ; 0053b334
    MOV EAX,[0x0061b5a8]                ; 0053b337 | g_CDemonSetPtr
        ;   Label: LAB_0053b337
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 0053b33c | g_CDemonSetInstance.field133_0x15acc0
    JL 0x0053b358                       ; 0053b343
        ;   XREF to: 0053b358 (CONDITIONAL_JUMP)  ; LAB_0053b358
    PUSH ESI                            ; 0053b345
    PUSH 0xff                           ; 0053b346
    LEA EAX,[ESP + 0x8]                 ; 0053b34b
    PUSH EAX                            ; 0053b34f
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0053b350
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 0053b355
    LEA EAX,[EBX + 0x11e4]              ; 0053b358
        ;   Label: LAB_0053b358
    PUSH EAX                            ; 0053b35e
    LEA EAX,[EBX + 0x11e0]              ; 0053b35f
    PUSH EAX                            ; 0053b365
    PUSH 0x5e6290                       ; 0053b366 | = "%f,%f\n"
    PUSH ESI                            ; 0053b36b
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053b36c
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x10                        ; 0053b371
    PUSH ESI                            ; 0053b374
    PUSH 0xff                           ; 0053b375
    LEA EAX,[ESP + 0x8]                 ; 0053b37a
    PUSH EAX                            ; 0053b37e
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0053b37f
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    MOV EBP,dword ptr [0x0061b5a8]      ; 0053b384 | g_CDemonSetPtr
    MOV EAX,dword ptr [EBP + 0x15acc0]  ; 0053b38a | g_CDemonSetInstance.field133_0x15acc0
    ADD ESP,0xc                         ; 0053b390
    CMP EAX,0xb                         ; 0053b393
    JGE 0x0053b562                      ; 0053b396
        ;   XREF to: 0053b562 (CONDITIONAL_JUMP)  ; LAB_0053b562
    MOV ECX,dword ptr [EBP + 0x15acc0]  ; 0053b39c | g_CDemonSetInstance.field133_0x15acc0
    MOV EAX,0x64                        ; 0053b3a2
    CMP ECX,0x7                         ; 0053b3a7
    JL 0x0053b3ba                       ; 0053b3aa
        ;   XREF to: 0053b3ba (CONDITIONAL_JUMP)  ; LAB_0053b3ba
    CMP ECX,0x1a                        ; 0053b3ac
    JL 0x0053b505                       ; 0053b3af
        ;   XREF to: 0053b505 (CONDITIONAL_JUMP)  ; LAB_0053b505
    MOV EAX,0xfa                        ; 0053b3b5
    TEST EAX,EAX                        ; 0053b3ba
        ;   Label: LAB_0053b3ba
    JLE 0x0053b433                      ; 0053b3bc
        ;   XREF to: 0053b433 (CONDITIONAL_JUMP)  ; LAB_0053b433
    LEA EDX,[EBX + 0x224]               ; 0053b3be
    SHL EAX,0x4                         ; 0053b3c4
    XOR EDI,EDI                         ; 0053b3c7
    MOV EBP,EBX                         ; 0053b3c9
    MOV dword ptr [ESP + 0x128],EAX     ; 0053b3cb
    MOV dword ptr [ESP + 0x124],EDX     ; 0053b3d2
    MOV EAX,[0x0061b5a8]                ; 0053b3d9 | g_CDemonSetPtr
        ;   Label: LAB_0053b3d9
    CMP dword ptr [EAX + 0x15acc0],0x2  ; 0053b3de | g_CDemonSetInstance.field133_0x15acc0
    JL 0x0053b50f                       ; 0053b3e5
        ;   XREF to: 0053b50f (CONDITIONAL_JUMP)  ; LAB_0053b50f
    MOV EAX,dword ptr [ESP + 0x124]     ; 0053b3eb
    ADD EAX,EDI                         ; 0053b3f2
    LEA EDX,[EAX + 0xc]                 ; 0053b3f4
    PUSH EDX                            ; 0053b3f7
    LEA EDX,[EAX + 0x8]                 ; 0053b3f8
    PUSH EDX                            ; 0053b3fb
    LEA EDX,[EAX + 0x4]                 ; 0053b3fc
    PUSH EDX                            ; 0053b3ff
    PUSH EAX                            ; 0053b400
    LEA EAX,[ESP + 0x118]               ; 0053b401
    PUSH EAX                            ; 0053b408
    PUSH 0x5e629b                       ; 0053b409 | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 0053b40e
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053b40f
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x1c                        ; 0053b414
    MOV AL,byte ptr [ESP + 0x108]       ; 0053b417
    MOV byte ptr [EBP + 0x128],AL       ; 0053b41e
    MOV EAX,dword ptr [ESP + 0x128]     ; 0053b424
        ;   Label: LAB_0053b424
    ADD EDI,0x10                        ; 0053b42b
    INC EBP                             ; 0053b42e
    CMP EDI,EAX                         ; 0053b42f
    JL 0x0053b3d9                       ; 0053b431
        ;   XREF to: 0053b3d9 (CONDITIONAL_JUMP)  ; LAB_0053b3d9
    FLD float ptr [EBX + 0x11d4]        ; 0053b433
        ;   Label: LAB_0053b433
    FLD1                                ; 0053b439
    FDIVRP                              ; 0053b43b
    FLD float ptr [EBX + 0x11d4]        ; 0053b43d
    FMUL ST0                            ; 0053b443
    FSTP float ptr [EBX + 0x11d8]       ; 0053b445
    FSTP float ptr [EBX + 0x11dc]       ; 0053b44b
    ADD ESP,0x138                       ; 0053b451
    POP EBP                             ; 0053b457
    POP EDI                             ; 0053b458
    POP ESI                             ; 0053b459
    POP EBX                             ; 0053b45a
    RET                                 ; 0053b45b
    PUSH ESI                            ; 0053b45c
        ;   Label: LAB_0053b45c
    PUSH 0xff                           ; 0053b45d
    LEA EAX,[ESP + 0x8]                 ; 0053b462
    PUSH EAX                            ; 0053b466
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0053b467
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 0053b46c
    JMP 0x0053af5a                      ; 0053b46f
        ;   XREF to: 0053af5a (UNCONDITIONAL_JUMP)  ; LAB_0053af5a
    MOV dword ptr [EBX + 0x120],0x3f800000 ; 0053b474
        ;   Label: LAB_0053b474
    JMP 0x0053b06c                      ; 0053b47e
        ;   XREF to: 0053b06c (UNCONDITIONAL_JUMP)  ; LAB_0053b06c
    MOV dword ptr [EBX + 0x124],0x3f800000 ; 0053b483
        ;   Label: LAB_0053b483
    JMP 0x0053b0a6                      ; 0053b48d
        ;   XREF to: 0053b0a6 (UNCONDITIONAL_JUMP)  ; LAB_0053b0a6
    MOV dword ptr [EBX + 0x11f0],0x1    ; 0053b492
        ;   Label: LAB_0053b492
    JMP 0x0053b1eb                      ; 0053b49c
        ;   XREF to: 0053b1eb (UNCONDITIONAL_JUMP)  ; LAB_0053b1eb
    MOV ECX,dword ptr [ESP + 0x134]     ; 0053b4a1
        ;   Label: LAB_0053b4a1
    MOV EAX,dword ptr [ESP + 0x120]     ; 0053b4a8
    MOV EDX,dword ptr [ESP + 0x12c]     ; 0053b4af
    PUSH ECX                            ; 0053b4b6
    ADD EAX,EDX                         ; 0053b4b7
    PUSH EAX                            ; 0053b4b9
    PUSH EBP                            ; 0053b4ba
    PUSH 0x5e6272                       ; 0053b4bb | = "%f,%d,%s\n"
    PUSH ESI                            ; 0053b4c0
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053b4c1
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x14                        ; 0053b4c6
    JMP 0x0053b26b                      ; 0053b4c9
        ;   XREF to: 0053b26b (UNCONDITIONAL_JUMP)  ; LAB_0053b26b
    MOV dword ptr [EBX + 0x17f8],0x0    ; 0053b4ce
        ;   Label: LAB_0053b4ce
    MOV dword ptr [EBX + 0x17fc],0x0    ; 0053b4d8
    MOV dword ptr [EBX + 0x1800],0x0    ; 0053b4e2
    MOV dword ptr [EBX + 0x1804],0x0    ; 0053b4ec
    MOV dword ptr [EBX + 0x17f4],0x0    ; 0053b4f6
    JMP 0x0053b337                      ; 0053b500
        ;   XREF to: 0053b337 (UNCONDITIONAL_JUMP)  ; LAB_0053b337
    MOV EAX,0xc8                        ; 0053b505
        ;   Label: LAB_0053b505
    JMP 0x0053b3ba                      ; 0053b50a
        ;   XREF to: 0053b3ba (UNCONDITIONAL_JUMP)  ; LAB_0053b3ba
    LEA EAX,[ESP + 0x104]               ; 0053b50f
        ;   Label: LAB_0053b50f
    PUSH EAX                            ; 0053b516
    PUSH 0x5e6297                       ; 0053b517 | DAT_005e6297
    PUSH ESI                            ; 0053b51c
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053b51d
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 0053b522
    MOV AL,byte ptr [ESP + 0x104]       ; 0053b525
    MOV byte ptr [EBP + 0x128],AL       ; 0053b52c
    LEA EAX,[EBX + EDI*0x1]             ; 0053b532
    MOV dword ptr [EAX + 0x224],0x1     ; 0053b535
    MOV dword ptr [EAX + 0x228],0x13e   ; 0053b53f
    MOV dword ptr [EAX + 0x22c],0x1     ; 0053b549
    MOV dword ptr [EAX + 0x230],0xee    ; 0053b553
    JMP 0x0053b424                      ; 0053b55d
        ;   XREF to: 0053b424 (UNCONDITIONAL_JUMP)  ; LAB_0053b424
    PUSH 0xfa                           ; 0053b562
        ;   Label: LAB_0053b562
    PUSH 0x0                            ; 0053b567
    LEA EAX,[EBX + 0x128]               ; 0053b569
    PUSH EAX                            ; 0053b56f
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0053b570
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0053b575
    PUSH 0xfa0                          ; 0053b578
    PUSH 0x0                            ; 0053b57d
    LEA EAX,[EBX + 0x224]               ; 0053b57f
    PUSH EAX                            ; 0053b585
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0053b586
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0053b58b
    LEA EAX,[ESP + 0x100]               ; 0053b58e
    PUSH EAX                            ; 0053b595
    PUSH 0x5e62ab                       ; 0053b596 | DAT_005e62ab
    PUSH ESI                            ; 0053b59b
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053b59c
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 0053b5a1
    MOV EDX,dword ptr [ESP + 0x100]     ; 0053b5a4
    XOR EBP,EBP                         ; 0053b5ab
    TEST EDX,EDX                        ; 0053b5ad
    JLE 0x0053b433                      ; 0053b5af
        ;   XREF to: 0053b433 (CONDITIONAL_JUMP)  ; LAB_0053b433
    LEA EAX,[ESP + 0x11c]               ; 0053b5b5
        ;   Label: LAB_0053b5b5
    PUSH EAX                            ; 0053b5bc
    LEA EAX,[ESP + 0x118]               ; 0053b5bd
    PUSH EAX                            ; 0053b5c4
    LEA EAX,[ESP + 0x120]               ; 0053b5c5
    PUSH EAX                            ; 0053b5cc
    LEA EAX,[ESP + 0x11c]               ; 0053b5cd
    PUSH EAX                            ; 0053b5d4
    LEA EAX,[ESP + 0x11c]               ; 0053b5d5
    PUSH EAX                            ; 0053b5dc
    PUSH 0x5e62af                       ; 0053b5dd | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 0053b5e2
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053b5e3
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x1c                        ; 0053b5e8
    CMP dword ptr [ESP + 0x10c],0xfa    ; 0053b5eb
    JGE 0x0053b684                      ; 0053b5f6
        ;   XREF to: 0053b684 (CONDITIONAL_JUMP)  ; LAB_0053b684
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0053b5fc
        ;   Label: LAB_0053b5fc
    MOV byte ptr [EBX + EAX*0x1 + 0x128],0x1 ; 0053b603
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0053b60b
    SHL EDX,0x4                         ; 0053b612
    MOV EAX,dword ptr [ESP + 0x110]     ; 0053b615
    MOV dword ptr [EDX + EBX*0x1 + 0x224],EAX ; 0053b61c
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0053b623
    SHL EAX,0x4                         ; 0053b62a
    LEA EDX,[EBX + EAX*0x1]             ; 0053b62d
    MOV EAX,dword ptr [ESP + 0x118]     ; 0053b630
    MOV dword ptr [EDX + 0x228],EAX     ; 0053b637
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0053b63d
    SHL EAX,0x4                         ; 0053b644
    LEA EDX,[EBX + EAX*0x1]             ; 0053b647
    MOV EAX,dword ptr [ESP + 0x114]     ; 0053b64a
    MOV dword ptr [EDX + 0x22c],EAX     ; 0053b651
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0053b657
    SHL EAX,0x4                         ; 0053b65e
    LEA EDX,[EBX + EAX*0x1]             ; 0053b661
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0053b664
    MOV dword ptr [EDX + 0x230],EAX     ; 0053b66b
    INC EBP                             ; 0053b671
    CMP EBP,dword ptr [ESP + 0x100]     ; 0053b672
    JGE 0x0053b433                      ; 0053b679
        ;   XREF to: 0053b433 (CONDITIONAL_JUMP)  ; LAB_0053b433
    JMP 0x0053b5b5                      ; 0053b67f
        ;   XREF to: 0053b5b5 (UNCONDITIONAL_JUMP)  ; LAB_0053b5b5
    MOV EDX,0x5e62bf                    ; 0053b684 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_0053b684
    MOV ECX,0x2d8                       ; 0053b689
    PUSH 0x5e62d3                       ; 0053b68e | = "Invalid camera number in visiblilty l..."
    MOV dword ptr [0x01d046a0],EDX      ; 0053b693 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0053b699 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0053b69f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0053b6a4
    JMP 0x0053b5fc                      ; 0053b6a7
        ;   XREF to: 0053b5fc (UNCONDITIONAL_JUMP)  ; LAB_0053b5fc

