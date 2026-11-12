; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_loadState_FUN_0052a0d0(CScript *this_ptr,_FILE *file_handle)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004bbf70 at 004bc63b
;
; Referenced Globals:
;   undefined4 DAT_005e503e
;   TerminatedCString s_core_script_cpp_005e5042
;   TerminatedCString s_CScript_loadState_file_v_005e5055
;   undefined4 DAT_005e508a
;   undefined4 DAT_005e508e
;   undefined4 DAT_005e5092
;   undefined4 DAT_005e5096
;   undefined4 DAT_005e509a
;   TerminatedCString s_anon_005e509e
;   undefined4 DAT_005e50a5
;   undefined4 DAT_005e50a8
;   undefined4 DAT_005e50ac
;   undefined4 DAT_005e50b0
;   undefined4 DAT_005e50b4
;   undefined4 DAT_005e50b8
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_script.cpp_CScript_computeChecksum_FUN_0052a630
;   core_script.cpp_readActorReference_FUN_0052a010
;   crt_stdio.c_fgets_FUN_005b9600
;   crt_stdio.c_fscanf_FUN_005b8100
;   shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a0d0
        ;   Label: core_script.cpp_CScript_loadState_FUN_0052a0d0
    PUSH ESI                            ; 0052a0d1
    PUSH EDI                            ; 0052a0d2
    PUSH EBP                            ; 0052a0d3
    SUB ESP,0x108                       ; 0052a0d4
    MOV EBP,dword ptr [ESP + 0x11c]     ; 0052a0da
    MOV EDI,dword ptr [ESP + 0x120]     ; 0052a0e1
    PUSH EDI                            ; 0052a0e8
    PUSH 0xff                           ; 0052a0e9
    LEA EAX,[ESP + 0x8]                 ; 0052a0ee
    PUSH EAX                            ; 0052a0f2
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0052a0f3
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0052a0f8
    LEA EAX,[ESP + 0x100]               ; 0052a0fb
    PUSH EAX                            ; 0052a102
    PUSH 0x5e503e                       ; 0052a103 | DAT_005e503e
    PUSH EDI                            ; 0052a108
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0052a109
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052a10e
    CMP dword ptr [ESP + 0x100],0x6     ; 0052a111
    JG 0x0052a375                       ; 0052a119
        ;   XREF to: 0052a375 (CONDITIONAL_JUMP)  ; LAB_0052a375
    PUSH EDI                            ; 0052a11f
        ;   Label: LAB_0052a11f
    PUSH 0xff                           ; 0052a120
    LEA EAX,[ESP + 0x8]                 ; 0052a125
    PUSH EAX                            ; 0052a129
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0052a12a
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    MOV EAX,[0x00616494]                ; 0052a12f | g_CGamePtr
    ADD ESP,0xc                         ; 0052a134
    ADD EAX,0x244                       ; 0052a137
    PUSH EAX                            ; 0052a13c | g_CGameInstance.letterbox_mode
    PUSH 0x5e508a                       ; 0052a13d | DAT_005e508a
    PUSH EDI                            ; 0052a142
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0052a143
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052a148
    CMP dword ptr [ESP + 0x100],0x2     ; 0052a14b
    JL 0x0052a181                       ; 0052a153
        ;   XREF to: 0052a181 (CONDITIONAL_JUMP)  ; LAB_0052a181
    PUSH EDI                            ; 0052a155
    PUSH 0xff                           ; 0052a156
    LEA EAX,[ESP + 0x8]                 ; 0052a15b
    PUSH EAX                            ; 0052a15f
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0052a160
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    MOV EAX,[0x00616494]                ; 0052a165 | g_CGamePtr
    ADD ESP,0xc                         ; 0052a16a
    ADD EAX,0x248                       ; 0052a16d
    PUSH EAX                            ; 0052a172
    PUSH 0x5e508e                       ; 0052a173 | DAT_005e508e
    PUSH EDI                            ; 0052a178
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0052a179
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052a17e
    CMP dword ptr [ESP + 0x100],0x3     ; 0052a181
        ;   Label: LAB_0052a181
    JL 0x0052a1b7                       ; 0052a189
        ;   XREF to: 0052a1b7 (CONDITIONAL_JUMP)  ; LAB_0052a1b7
    PUSH EDI                            ; 0052a18b
    PUSH 0xff                           ; 0052a18c
    LEA EAX,[ESP + 0x8]                 ; 0052a191
    PUSH EAX                            ; 0052a195
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0052a196
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    MOV EAX,[0x00616494]                ; 0052a19b | g_CGamePtr
    ADD ESP,0xc                         ; 0052a1a0
    ADD EAX,0x24c                       ; 0052a1a3
    PUSH EAX                            ; 0052a1a8
    PUSH 0x5e5092                       ; 0052a1a9 | DAT_005e5092
    PUSH EDI                            ; 0052a1ae
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0052a1af
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052a1b4
    PUSH EDI                            ; 0052a1b7
        ;   Label: LAB_0052a1b7
    PUSH 0xff                           ; 0052a1b8
    LEA EAX,[ESP + 0x8]                 ; 0052a1bd
    PUSH EAX                            ; 0052a1c1
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0052a1c2
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0052a1c7
    PUSH 0x1e65900                      ; 0052a1ca | DAT_01e65900
    PUSH 0x5e5096                       ; 0052a1cf | DAT_005e5096
    PUSH EDI                            ; 0052a1d4
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0052a1d5
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052a1da
    PUSH EDI                            ; 0052a1dd
    PUSH 0xff                           ; 0052a1de
    LEA EAX,[ESP + 0x8]                 ; 0052a1e3
    PUSH EAX                            ; 0052a1e7
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0052a1e8
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0052a1ed
    LEA EAX,[EBP + 0x44]                ; 0052a1f0
    PUSH EAX                            ; 0052a1f3
    PUSH 0x5e509a                       ; 0052a1f4 | DAT_005e509a
    PUSH EDI                            ; 0052a1f9
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0052a1fa
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052a1ff
    PUSH EDI                            ; 0052a202
    PUSH 0xff                           ; 0052a203
    LEA EAX,[ESP + 0x8]                 ; 0052a208
    PUSH EAX                            ; 0052a20c
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0052a20d
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0052a212
    LEA EBX,[EBP + 0x50]                ; 0052a215
    PUSH EBX                            ; 0052a218
    PUSH 0x5e509e                       ; 0052a219 | = "\"%[^\"]"
    PUSH EDI                            ; 0052a21e
    MOV byte ptr [EBP + 0x50],0x0       ; 0052a21f
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0052a223
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052a228
    PUSH EBX                            ; 0052a22b
    PUSH 0x5e50a5                       ; 0052a22c | DAT_005e50a5
    PUSH EDI                            ; 0052a231
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0052a232
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052a237
    PUSH EDI                            ; 0052a23a
    PUSH 0xff                           ; 0052a23b
    LEA EAX,[ESP + 0x8]                 ; 0052a240
    PUSH EAX                            ; 0052a244
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0052a245
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0052a24a
    LEA EAX,[EBP + 0x48]                ; 0052a24d
    PUSH EAX                            ; 0052a250
    PUSH 0x5e50a8                       ; 0052a251 | DAT_005e50a8
    PUSH EDI                            ; 0052a256
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0052a257
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052a25c
    PUSH EDI                            ; 0052a25f
    PUSH 0xff                           ; 0052a260
    LEA EAX,[ESP + 0x8]                 ; 0052a265
    PUSH EAX                            ; 0052a269
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0052a26a
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0052a26f
    LEA EAX,[EBP + 0x4c]                ; 0052a272
    PUSH EAX                            ; 0052a275
    PUSH 0x5e50ac                       ; 0052a276 | DAT_005e50ac
    PUSH EDI                            ; 0052a27b
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0052a27c
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052a281
    PUSH EDI                            ; 0052a284
    PUSH 0xff                           ; 0052a285
    LEA EAX,[ESP + 0x8]                 ; 0052a28a
    PUSH EAX                            ; 0052a28e
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0052a28f
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0052a294
    LEA EAX,[EBP + 0x4]                 ; 0052a297
    PUSH EAX                            ; 0052a29a
    PUSH EDI                            ; 0052a29b
    CALL core_script.cpp_readActorReference_FUN_0052a010 ; 0052a29c
        ;   XREF to: 0052a010 (UNCONDITIONAL_CALL)  ; void core_script.cpp_readActorReference_FUN_0052a010(_FILE * file_handle, CDemonActor * actor_out)
    ADD ESP,0x8                         ; 0052a2a1
    PUSH EDI                            ; 0052a2a4
    PUSH 0xff                           ; 0052a2a5
    LEA EAX,[ESP + 0x8]                 ; 0052a2aa
    PUSH EAX                            ; 0052a2ae
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0052a2af
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0052a2b4
    LEA EAX,[EBP + 0xc]                 ; 0052a2b7
    PUSH EAX                            ; 0052a2ba
    PUSH EDI                            ; 0052a2bb
    CALL core_script.cpp_readActorReference_FUN_0052a010 ; 0052a2bc
        ;   XREF to: 0052a010 (UNCONDITIONAL_CALL)  ; void core_script.cpp_readActorReference_FUN_0052a010(_FILE * file_handle, CDemonActor * actor_out)
    ADD ESP,0x8                         ; 0052a2c1
    CMP dword ptr [ESP + 0x100],0x5     ; 0052a2c4
    JL 0x0052a2f3                       ; 0052a2cc
        ;   XREF to: 0052a2f3 (CONDITIONAL_JUMP)  ; LAB_0052a2f3
    PUSH EDI                            ; 0052a2ce
    PUSH 0xff                           ; 0052a2cf
    LEA EAX,[ESP + 0x8]                 ; 0052a2d4
    PUSH EAX                            ; 0052a2d8
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0052a2d9
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0052a2de
    LEA EAX,[EBP + 0x14]                ; 0052a2e1
    PUSH EAX                            ; 0052a2e4
    PUSH 0x5e50b0                       ; 0052a2e5 | DAT_005e50b0
    PUSH EDI                            ; 0052a2ea
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0052a2eb
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052a2f0
    CMP dword ptr [ESP + 0x100],0x4     ; 0052a2f3
        ;   Label: LAB_0052a2f3
    JL 0x0052a360                       ; 0052a2fb
        ;   XREF to: 0052a360 (CONDITIONAL_JUMP)  ; LAB_0052a360
    PUSH EDI                            ; 0052a2fd
    PUSH 0xff                           ; 0052a2fe
    LEA EAX,[ESP + 0x8]                 ; 0052a303
    PUSH EAX                            ; 0052a307
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0052a308
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0052a30d
    LEA EAX,[EBP + 0x458]               ; 0052a310
    PUSH EAX                            ; 0052a316
    PUSH 0x5e50b4                       ; 0052a317 | DAT_005e50b4
    PUSH EDI                            ; 0052a31c
    XOR ESI,ESI                         ; 0052a31d
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0052a31f
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    MOV EBX,dword ptr [EBP + 0x458]     ; 0052a324
    ADD ESP,0xc                         ; 0052a32a
    TEST EBX,EBX                        ; 0052a32d
    JLE 0x0052a360                      ; 0052a32f
        ;   XREF to: 0052a360 (CONDITIONAL_JUMP)  ; LAB_0052a360
    LEA EBX,[EBP + 0x45c]               ; 0052a331
    PUSH EBX                            ; 0052a337
        ;   Label: LAB_0052a337
    PUSH 0x5e50b8                       ; 0052a338 | DAT_005e50b8
    PUSH EDI                            ; 0052a33d
    INC ESI                             ; 0052a33e
    ADD EBX,0x4                         ; 0052a33f
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0052a342
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    MOV EAX,dword ptr [EBP + 0x458]     ; 0052a347
    ADD ESP,0xc                         ; 0052a34d
    CMP ESI,EAX                         ; 0052a350
    JL 0x0052a337                       ; 0052a352
        ;   XREF to: 0052a337 (CONDITIONAL_JUMP)  ; LAB_0052a337
    LEA EAX,[EAX]                       ; 0052a354
    LEA EDX,[EDX]                       ; 0052a35a
    CMP dword ptr [ESP + 0x100],0x6     ; 0052a360
        ;   Label: LAB_0052a360
    JGE 0x0052a39d                      ; 0052a368
        ;   XREF to: 0052a39d (CONDITIONAL_JUMP)  ; LAB_0052a39d
    ADD ESP,0x108                       ; 0052a36a
        ;   Label: LAB_0052a36a
    POP EBP                             ; 0052a370
    POP EDI                             ; 0052a371
    POP ESI                             ; 0052a372
    POP EBX                             ; 0052a373
    RET                                 ; 0052a374
    MOV ECX,0x5e5042                    ; 0052a375 | = "..\\core\\script.cpp"
        ;   Label: LAB_0052a375
    MOV EBX,0x124e                      ; 0052a37a
    PUSH 0x5e5055                       ; 0052a37f | = "CScript::loadState - file version is ..."
    MOV dword ptr [0x01d046a0],ECX      ; 0052a384 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0052a38a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0052a390
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0052a395
    JMP 0x0052a11f                      ; 0052a398
        ;   XREF to: 0052a11f (UNCONDITIONAL_JUMP)  ; LAB_0052a11f
    PUSH EDI                            ; 0052a39d
        ;   Label: LAB_0052a39d
    PUSH 0xff                           ; 0052a39e
    LEA EAX,[ESP + 0x8]                 ; 0052a3a3
    PUSH EAX                            ; 0052a3a7
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0052a3a8
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0052a3ad
    LEA EAX,[ESP + 0x104]               ; 0052a3b0
    PUSH EAX                            ; 0052a3b7
    PUSH 0x5e50bc                       ; 0052a3b8 | DAT_005e50bc
    PUSH EDI                            ; 0052a3bd
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0052a3be
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052a3c3
    PUSH EBP                            ; 0052a3c6
    CALL core_script.cpp_CScript_computeChecksum_FUN_0052a630 ; 0052a3c7
        ;   XREF to: 0052a630 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_computeChecksum_FUN_0052a630(CScript * this_ptr)
    ADD ESP,0x4                         ; 0052a3cc
    CMP EAX,dword ptr [ESP + 0x104]     ; 0052a3cf
    JZ 0x0052a36a                       ; 0052a3d6
        ;   XREF to: 0052a36a (CONDITIONAL_JUMP)  ; LAB_0052a36a
    PUSH 0x5e50c0                       ; 0052a3d8 | = "The script you were using when this g..."
    MOV EBX,dword ptr [0x006138e0]      ; 0052a3dd | g_CEditorToolsPtr
    PUSH EBX                            ; 0052a3e3
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0 ; 0052a3e4
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0052a3e9
    ADD ESP,0x108                       ; 0052a3ec
    POP EBP                             ; 0052a3f2
    POP EDI                             ; 0052a3f3
    POP ESI                             ; 0052a3f4
    POP EBX                             ; 0052a3f5
    RET                                 ; 0052a3f6

