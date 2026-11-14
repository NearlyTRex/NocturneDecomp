; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00563090(CSkeleton *this_ptr,_FILE *file_handle)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CSkeleton_load_FUN_00563000 at 00563026
;
; Referenced Globals:
;   undefined4 DAT_005f1b7e
;   TerminatedCString s_core_skeleton_cpp_005f1b82
;   TerminatedCString s_Invalid_skeleton_version_005f1b97
;   TerminatedCString s_core_skeleton_cpp_005f1bb0
;   TerminatedCString s_Old_skeleton_version_d_n_005f1bc5
;   TerminatedCString s_core_skeleton_cpp_005f1beb
;   TerminatedCString s_Skeleton_version_d_is_ne_005f1c00
;   TerminatedCString s_d_d_005f1c50
;   TerminatedCString s_d_005f1c57
;   TerminatedCString s_core_skeleton_cpp_005f1c63
;   TerminatedCString s_Skeleton_file_corrupt_005f1c78
;   TerminatedCString s_f_f_f_f_005f1c8e
;   TerminatedCString s_f_f_f_005f1c9b
;   TerminatedCString s_f_f_f_005f1ca5
;   TerminatedCString s_core_skeleton_cpp_005f1caf
;   ... and 6 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_motion.cpp_CMotionList_load_FUN_00523980
;   core_skeleton.cpp_CSkeleton_allocMemory_FUN_00562e60
;   core_skeleton.cpp_CSkeleton_free_FUN_00562f70
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_stdio.c_fread_FUN_005c0b10
;   crt_stdio.c_fscanf_FUN_005c04b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563090
        ;   Label: core_skeleton.cpp_CSkeleton_loadStream_FUN_00563090
    PUSH ESI                            ; 00563091
    PUSH EDI                            ; 00563092
    PUSH EBP                            ; 00563093
    SUB ESP,0x14                        ; 00563094
    PUSH 0x1                            ; 00563097
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00563099
    PUSH EDX                            ; 0056309d
    CALL core_skeleton.cpp_CSkeleton_free_FUN_00562f70 ; 0056309e
        ;   XREF to: 00562f70 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_free_FUN_00562f70(CSkeleton * this_ptr, int free_motion_list)
    ADD ESP,0x8                         ; 005630a3
    MOV ECX,0xffffffff                  ; 005630a6
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005630ab
    MOV dword ptr [ESP],ECX             ; 005630af
    PUSH EBX                            ; 005630b2
        ;   Label: LAB_005630b2
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 005630b3
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 005630b8
    TEST EAX,EAX                        ; 005630bb
    JL 0x005630c4                       ; 005630bd
        ;   XREF to: 005630c4 (CONDITIONAL_JUMP)  ; LAB_005630c4
    CMP EAX,0xa                         ; 005630bf
    JNZ 0x005630b2                      ; 005630c2
        ;   XREF to: 005630b2 (CONDITIONAL_JUMP)  ; LAB_005630b2
    MOV EAX,ESP                         ; 005630c4
        ;   Label: LAB_005630c4
    PUSH EAX                            ; 005630c6
    PUSH 0x5f1b7e                       ; 005630c7 | DAT_005f1b7e
    MOV EBX,dword ptr [ESP + 0x34]      ; 005630cc
    PUSH EBX                            ; 005630d0
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 005630d1
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005630d6
    CMP dword ptr [ESP],0x1             ; 005630d9
    JGE 0x00563102                      ; 005630dd
        ;   XREF to: 00563102 (CONDITIONAL_JUMP)  ; LAB_00563102
    MOV EDI,0x5f1b82                    ; 005630df | = "..\\core\\skeleton.cpp"
    MOV EBP,0x119                       ; 005630e4
    PUSH 0x5f1b97                       ; 005630e9 | = "Invalid skeleton version"
    MOV dword ptr [0x01d1d400],EDI      ; 005630ee | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 005630f4 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005630fa
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005630ff
    MOV EAX,dword ptr [ESP]             ; 00563102
        ;   Label: LAB_00563102
    CMP EAX,0x2                         ; 00563105
    JGE 0x0056312e                      ; 00563108
        ;   XREF to: 0056312e (CONDITIONAL_JUMP)  ; LAB_0056312e
    PUSH EAX                            ; 0056310a
    MOV EDX,0x5f1bb0                    ; 0056310b | = "..\\core\\skeleton.cpp"
    MOV ECX,0x11a                       ; 00563110
    PUSH 0x5f1bc5                       ; 00563115 | = "Old skeleton version %d not supported"
    MOV dword ptr [0x01d1d400],EDX      ; 0056311a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00563120 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00563126
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0056312b
    MOV EAX,dword ptr [ESP]             ; 0056312e
        ;   Label: LAB_0056312e
    MOV ESI,dword ptr [0x00623224]      ; 00563131 | DAT_00623224
    CMP EAX,ESI                         ; 00563137
    JG 0x005633d3                       ; 00563139
        ;   XREF to: 005633d3 (CONDITIONAL_JUMP)  ; LAB_005633d3
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0056313f
        ;   Label: LAB_0056313f
    PUSH EBX                            ; 00563143
        ;   Label: LAB_00563143
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00563144
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00563149
    TEST EAX,EAX                        ; 0056314c
    JL 0x00563155                       ; 0056314e
        ;   XREF to: 00563155 (CONDITIONAL_JUMP)  ; LAB_00563155
    CMP EAX,0xa                         ; 00563150
    JNZ 0x00563143                      ; 00563153
        ;   XREF to: 00563143 (CONDITIONAL_JUMP)  ; LAB_00563143
    LEA EAX,[ESP + 0x8]                 ; 00563155
        ;   Label: LAB_00563155
    PUSH EAX                            ; 00563159
    LEA EAX,[ESP + 0x8]                 ; 0056315a
    PUSH EAX                            ; 0056315e
    PUSH 0x5f1c50                       ; 0056315f | = "%d,%d\n"
    MOV ECX,dword ptr [ESP + 0x38]      ; 00563164
    PUSH ECX                            ; 00563168
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00563169
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0056316e
    MOV EBX,dword ptr [ESP + 0x8]       ; 00563171
    PUSH EBX                            ; 00563175
    MOV ESI,dword ptr [ESP + 0x8]       ; 00563176
    PUSH ESI                            ; 0056317a
    MOV EDI,dword ptr [ESP + 0x30]      ; 0056317b
    PUSH EDI                            ; 0056317f
    CALL core_skeleton.cpp_CSkeleton_allocMemory_FUN_00562e60 ; 00563180
        ;   XREF to: 00562e60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_allocMemory_FUN_00562e60(CSkeleton * this_ptr, int bone_count, int frame_count)
    ADD ESP,0xc                         ; 00563185
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00563188
    PUSH EBX                            ; 0056318c
        ;   Label: LAB_0056318c
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0056318d
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00563192
    TEST EAX,EAX                        ; 00563195
    JL 0x0056319e                       ; 00563197
        ;   XREF to: 0056319e (CONDITIONAL_JUMP)  ; LAB_0056319e
    CMP EAX,0xa                         ; 00563199
    JNZ 0x0056318c                      ; 0056319c
        ;   XREF to: 0056318c (CONDITIONAL_JUMP)  ; LAB_0056318c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0056319e
        ;   Label: LAB_0056319e
    MOV EBP,dword ptr [EAX + 0x1de78]   ; 005631a2
    XOR EBX,EBX                         ; 005631a8
    TEST EBP,EBP                        ; 005631aa
    JLE 0x005631f0                      ; 005631ac
        ;   XREF to: 005631f0 (CONDITIONAL_JUMP)  ; LAB_005631f0
    LEA EDI,[EAX + 0x1de7c]             ; 005631ae
    LEA ESI,[EAX + 0x1de9c]             ; 005631b4
    IMUL EAX,EBX,0x24                   ; 005631ba
        ;   Label: LAB_005631ba
    PUSH ESI                            ; 005631bd
    ADD EAX,EDI                         ; 005631be
    PUSH EAX                            ; 005631c0
    PUSH 0x5f1c57                       ; 005631c1 | = "\"%[^\"]\",%d\n"
    MOV EAX,dword ptr [ESP + 0x38]      ; 005631c6
    PUSH EAX                            ; 005631ca
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 005631cb
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 005631d0
    MOV EAX,dword ptr [ESP + 0x28]      ; 005631d3
    INC EBX                             ; 005631d7
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 005631d8
    ADD ESI,0x24                        ; 005631de
    CMP EBX,EDX                         ; 005631e1
    JL 0x005631ba                       ; 005631e3
        ;   XREF to: 005631ba (CONDITIONAL_JUMP)  ; LAB_005631ba
    LEA EAX,[EAX]                       ; 005631e5
    LEA EDX,[EDX]                       ; 005631eb
    MOV EBX,EBX                         ; 005631ee
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005631f0
        ;   Label: LAB_005631f0
    PUSH ESI                            ; 005631f4
        ;   Label: LAB_005631f4
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 005631f5
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 005631fa
    TEST EAX,EAX                        ; 005631fd
    JL 0x00563206                       ; 005631ff
        ;   XREF to: 00563206 (CONDITIONAL_JUMP)  ; LAB_00563206
    CMP EAX,0xa                         ; 00563201
    JNZ 0x005631f4                      ; 00563204
        ;   XREF to: 005631f4 (CONDITIONAL_JUMP)  ; LAB_005631f4
    CMP dword ptr [ESP],0x4             ; 00563206
        ;   Label: LAB_00563206
    JL 0x00563425                       ; 0056320a
        ;   XREF to: 00563425 (CONDITIONAL_JUMP)  ; LAB_00563425
    MOV EAX,dword ptr [ESP + 0x28]      ; 00563210
    MOV EBX,dword ptr [ESP + 0x28]      ; 00563214
    MOV EAX,dword ptr [EAX + 0x1ec8c]   ; 00563218
    IMUL EAX,dword ptr [EBX + 0x1de78]  ; 0056321e
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00563225
    PUSH EBP                            ; 00563229
    PUSH 0x1                            ; 0056322a
    SHL EAX,0x4                         ; 0056322c
    PUSH EAX                            ; 0056322f
    MOV ECX,dword ptr [EBX + 0x1ec90]   ; 00563230
    PUSH ECX                            ; 00563236
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 00563237
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005c0b10(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0056323c
    CMP EAX,0x1                         ; 0056323f
    JNZ 0x005633fd                      ; 00563242
        ;   XREF to: 005633fd (CONDITIONAL_JUMP)  ; LAB_005633fd
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00563248
        ;   Label: LAB_00563248
    PUSH EBX                            ; 0056324c
        ;   Label: LAB_0056324c
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0056324d
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00563252
    TEST EAX,EAX                        ; 00563255
    JL 0x0056325e                       ; 00563257
        ;   XREF to: 0056325e (CONDITIONAL_JUMP)  ; LAB_0056325e
    CMP EAX,0xa                         ; 00563259
    JNZ 0x0056324c                      ; 0056325c
        ;   XREF to: 0056324c (CONDITIONAL_JUMP)  ; LAB_0056324c
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0056325e
        ;   Label: LAB_0056325e
    PUSH EBX                            ; 00563262
        ;   Label: LAB_00563262
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00563263
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00563268
    TEST EAX,EAX                        ; 0056326b
    JL 0x00563274                       ; 0056326d
        ;   XREF to: 00563274 (CONDITIONAL_JUMP)  ; LAB_00563274
    CMP EAX,0xa                         ; 0056326f
    JNZ 0x00563262                      ; 00563272
        ;   XREF to: 00563262 (CONDITIONAL_JUMP)  ; LAB_00563262
    MOV EAX,dword ptr [ESP + 0x28]      ; 00563274
        ;   Label: LAB_00563274
    MOV EBX,dword ptr [EAX + 0x1ec8c]   ; 00563278
    XOR ESI,ESI                         ; 0056327e
    TEST EBX,EBX                        ; 00563280
    JLE 0x005632c0                      ; 00563282
        ;   XREF to: 005632c0 (CONDITIONAL_JUMP)  ; LAB_005632c0
    XOR EBX,EBX                         ; 00563284
    MOV EAX,dword ptr [ESP + 0x28]      ; 00563286
        ;   Label: LAB_00563286
    MOV EAX,dword ptr [EAX + 0x1ec94]   ; 0056328a
    ADD EAX,EBX                         ; 00563290
    LEA EDI,[EAX + 0x8]                 ; 00563292
    PUSH EDI                            ; 00563295
    LEA EDI,[EAX + 0x4]                 ; 00563296
    PUSH EDI                            ; 00563299
    PUSH EAX                            ; 0056329a
    PUSH 0x5f1c9b                       ; 0056329b | = "%f,%f,%f\n"
    MOV EDI,dword ptr [ESP + 0x3c]      ; 005632a0
    PUSH EDI                            ; 005632a4
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 005632a5
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 005632aa
    MOV EAX,dword ptr [ESP + 0x28]      ; 005632ad
    INC ESI                             ; 005632b1
    MOV EBP,dword ptr [EAX + 0x1ec8c]   ; 005632b2
    ADD EBX,0xc                         ; 005632b8
    CMP ESI,EBP                         ; 005632bb
    JL 0x00563286                       ; 005632bd
        ;   XREF to: 00563286 (CONDITIONAL_JUMP)  ; LAB_00563286
    NOP                                 ; 005632bf
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005632c0
        ;   Label: LAB_005632c0
    PUSH EBX                            ; 005632c4
        ;   Label: LAB_005632c4
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 005632c5
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 005632ca
    TEST EAX,EAX                        ; 005632cd
    JL 0x005632d6                       ; 005632cf
        ;   XREF to: 005632d6 (CONDITIONAL_JUMP)  ; LAB_005632d6
    CMP EAX,0xa                         ; 005632d1
    JNZ 0x005632c4                      ; 005632d4
        ;   XREF to: 005632c4 (CONDITIONAL_JUMP)  ; LAB_005632c4
    MOV EAX,dword ptr [ESP + 0x28]      ; 005632d6
        ;   Label: LAB_005632d6
    MOV EDX,dword ptr [EAX + 0x1ec8c]   ; 005632da
    XOR EBX,EBX                         ; 005632e0
    TEST EDX,EDX                        ; 005632e2
    JLE 0x00563330                      ; 005632e4
        ;   XREF to: 00563330 (CONDITIONAL_JUMP)  ; LAB_00563330
    XOR ESI,ESI                         ; 005632e6
    MOV EAX,dword ptr [ESP + 0x28]      ; 005632e8
        ;   Label: LAB_005632e8
    MOV EAX,dword ptr [EAX + 0x1ec98]   ; 005632ec
    ADD EAX,ESI                         ; 005632f2
    LEA EDI,[EAX + 0x8]                 ; 005632f4
    PUSH EDI                            ; 005632f7
    LEA EDI,[EAX + 0x4]                 ; 005632f8
    PUSH EDI                            ; 005632fb
    PUSH EAX                            ; 005632fc
    PUSH 0x5f1ca5                       ; 005632fd | = "%f,%f,%f\n"
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00563302
    PUSH ECX                            ; 00563306
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00563307
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0056330c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0056330f
    INC EBX                             ; 00563313
    MOV EDI,dword ptr [EAX + 0x1ec8c]   ; 00563314
    ADD ESI,0xc                         ; 0056331a
    CMP EBX,EDI                         ; 0056331d
    JL 0x005632e8                       ; 0056331f
        ;   XREF to: 005632e8 (CONDITIONAL_JUMP)  ; LAB_005632e8
    LEA EAX,[EAX]                       ; 00563321
    LEA EDX,[EDX]                       ; 00563327
    LEA EAX,[EAX]                       ; 0056332d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00563330
        ;   Label: LAB_00563330
    TEST byte ptr [EAX + 0xc],0x20      ; 00563334
    JZ 0x0056335c                       ; 00563338
        ;   XREF to: 0056335c (CONDITIONAL_JUMP)  ; LAB_0056335c
    MOV EBP,0x5f1caf                    ; 0056333a | = "..\\core\\skeleton.cpp"
    MOV EAX,0x159                       ; 0056333f
    PUSH 0x5f1cc4                       ; 00563344 | = "CSkeleton::loadStream - error reading..."
    MOV dword ptr [0x01d1d400],EBP      ; 00563349 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0056334f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00563354
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00563359
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0056335c
        ;   Label: LAB_0056335c
    PUSH EDX                            ; 00563360
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00563361
    PUSH ECX                            ; 00563365
    CALL core_motion.cpp_CMotionList_load_FUN_00523980 ; 00563366
        ;   XREF to: 00523980 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionList_load_FUN_00523980(CMotionList * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0056336b
    CMP dword ptr [ESP],0x3             ; 0056336e
    JL 0x005633bd                       ; 00563372
        ;   XREF to: 005633bd (CONDITIONAL_JUMP)  ; LAB_005633bd
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00563374
    PUSH ESI                            ; 00563378
        ;   Label: LAB_00563378
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00563379
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 0056337e
    TEST EAX,EAX                        ; 00563381
    JL 0x0056338a                       ; 00563383
        ;   XREF to: 0056338a (CONDITIONAL_JUMP)  ; LAB_0056338a
    CMP EAX,0xa                         ; 00563385
    JNZ 0x00563378                      ; 00563388
        ;   XREF to: 00563378 (CONDITIONAL_JUMP)  ; LAB_00563378
    MOV EAX,dword ptr [ESP + 0x28]      ; 0056338a
        ;   Label: LAB_0056338a
    MOV EDI,dword ptr [EAX + 0x1de78]   ; 0056338e
    XOR ESI,ESI                         ; 00563394
    TEST EDI,EDI                        ; 00563396
    JLE 0x005633bd                      ; 00563398
        ;   XREF to: 005633bd (CONDITIONAL_JUMP)  ; LAB_005633bd
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0056339a
    PUSH EBX                            ; 0056339e
        ;   Label: LAB_0056339e
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0056339f
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 005633a4
    TEST EAX,EAX                        ; 005633a7
    JL 0x005633b0                       ; 005633a9
        ;   XREF to: 005633b0 (CONDITIONAL_JUMP)  ; LAB_005633b0
    CMP EAX,0xa                         ; 005633ab
    JNZ 0x0056339e                      ; 005633ae
        ;   XREF to: 0056339e (CONDITIONAL_JUMP)  ; LAB_0056339e
    MOV EAX,dword ptr [ESP + 0x28]      ; 005633b0
        ;   Label: LAB_005633b0
    INC ESI                             ; 005633b4
    CMP ESI,dword ptr [EAX + 0x1de78]   ; 005633b5
    JL 0x0056339e                       ; 005633bb
        ;   XREF to: 0056339e (CONDITIONAL_JUMP)  ; LAB_0056339e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005633bd
        ;   Label: LAB_005633bd
    TEST byte ptr [EAX + 0xc],0x20      ; 005633c1
    JNZ 0x005634be                      ; 005633c5
        ;   XREF to: 005634be (CONDITIONAL_JUMP)  ; LAB_005634be
    ADD ESP,0x14                        ; 005633cb
    POP EBP                             ; 005633ce
    POP EDI                             ; 005633cf
    POP ESI                             ; 005633d0
    POP EBX                             ; 005633d1
    RET                                 ; 005633d2
    PUSH ESI                            ; 005633d3
        ;   Label: LAB_005633d3
    PUSH EAX                            ; 005633d4
    MOV EDI,0x5f1beb                    ; 005633d5 | = "..\\core\\skeleton.cpp"
    MOV EBP,0x11b                       ; 005633da
    PUSH 0x5f1c00                       ; 005633df | = "Skeleton version %d is newer than .EX..."
    MOV dword ptr [0x01d1d400],EDI      ; 005633e4 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 005633ea | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005633f0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 005633f5
    JMP 0x0056313f                      ; 005633f8
        ;   XREF to: 0056313f (UNCONDITIONAL_JUMP)  ; LAB_0056313f
    MOV EBX,0x5f1c63                    ; 005633fd | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_005633fd
    MOV ESI,0x137                       ; 00563402
    PUSH 0x5f1c78                       ; 00563407 | = "Skeleton file corrupt"
    MOV dword ptr [0x01d1d400],EBX      ; 0056340c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00563412 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00563418
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0056341d
    JMP 0x00563248                      ; 00563420
        ;   XREF to: 00563248 (UNCONDITIONAL_JUMP)  ; LAB_00563248
    MOV EAX,dword ptr [ESP + 0x28]      ; 00563425
        ;   Label: LAB_00563425
    XOR ESI,ESI                         ; 00563429
    MOV EBX,dword ptr [ESP + 0x28]      ; 0056342b
    MOV dword ptr [ESP + 0xc],ESI       ; 0056342f
    MOV EDI,dword ptr [EAX + 0x1ec8c]   ; 00563433
    MOV EBX,dword ptr [EBX + 0x1ec90]   ; 00563439
    TEST EDI,EDI                        ; 0056343f
    JLE 0x0056325e                      ; 00563441
        ;   XREF to: 0056325e (CONDITIONAL_JUMP)  ; LAB_0056325e
    MOV EAX,dword ptr [ESP + 0x28]      ; 00563447
        ;   Label: LAB_00563447
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0056344b
    XOR EBP,EBP                         ; 00563451
    TEST EDX,EDX                        ; 00563453
    JLE 0x005634a1                      ; 00563455
        ;   XREF to: 005634a1 (CONDITIONAL_JUMP)  ; LAB_005634a1
    LEA EDI,[EBX + 0x4]                 ; 00563457
    LEA EAX,[EBX + 0x8]                 ; 0056345a
    MOV dword ptr [ESP + 0x10],EAX      ; 0056345d
    LEA ESI,[EBX + 0xc]                 ; 00563461
    PUSH ESI                            ; 00563464
        ;   Label: LAB_00563464
    MOV ECX,dword ptr [ESP + 0x14]      ; 00563465
    PUSH ECX                            ; 00563469
    PUSH EDI                            ; 0056346a
    PUSH EBX                            ; 0056346b
    PUSH 0x5f1c8e                       ; 0056346c | = "%f,%f,%f,%f\n"
    MOV EAX,dword ptr [ESP + 0x40]      ; 00563471
    PUSH EAX                            ; 00563475
    INC EBP                             ; 00563476
    ADD ESI,0x10                        ; 00563477
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0056347a
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0056347f
    ADD EDI,0x10                        ; 00563482
    MOV EDX,dword ptr [ESP + 0x10]      ; 00563485
    MOV EAX,dword ptr [ESP + 0x28]      ; 00563489
    ADD EBX,0x10                        ; 0056348d
    ADD EDX,0x10                        ; 00563490
    MOV ECX,dword ptr [EAX + 0x1de78]   ; 00563493
    MOV dword ptr [ESP + 0x10],EDX      ; 00563499
    CMP EBP,ECX                         ; 0056349d
    JL 0x00563464                       ; 0056349f
        ;   XREF to: 00563464 (CONDITIONAL_JUMP)  ; LAB_00563464
    MOV EDI,dword ptr [ESP + 0xc]       ; 005634a1
        ;   Label: LAB_005634a1
    MOV ESI,dword ptr [ESP + 0x28]      ; 005634a5
    INC EDI                             ; 005634a9
    MOV EBP,dword ptr [ESI + 0x1ec8c]   ; 005634aa
    MOV dword ptr [ESP + 0xc],EDI       ; 005634b0
    CMP EDI,EBP                         ; 005634b4
    JGE 0x0056325e                      ; 005634b6
        ;   XREF to: 0056325e (CONDITIONAL_JUMP)  ; LAB_0056325e
    JMP 0x00563447                      ; 005634bc
        ;   XREF to: 00563447 (UNCONDITIONAL_JUMP)  ; LAB_00563447
    MOV EAX,0x5f1cf0                    ; 005634be | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_005634be
    MOV EDX,0x174                       ; 005634c3
    PUSH 0x5f1d05                       ; 005634c8 | = "CSkeleton::loadStream - error reading..."
    MOV [0x01d1d400],EAX                ; 005634cd | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 005634d2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005634d8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005634dd
    ADD ESP,0x14                        ; 005634e0
    POP EBP                             ; 005634e3
    POP EDI                             ; 005634e4
    POP ESI                             ; 005634e5
    POP EBX                             ; 005634e6
    RET                                 ; 005634e7

