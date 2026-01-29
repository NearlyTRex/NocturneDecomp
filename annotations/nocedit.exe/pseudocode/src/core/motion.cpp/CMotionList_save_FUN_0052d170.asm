; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_motion_cpp_CMotionList_save_FUN_0052d170(CMotionList *this_ptr,_FILE *file_handle)
;
; Parameters:
; CMotionList *    Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0 at 0058b5c2
;
; Referenced Globals:
;   TerminatedCString s_motion_list_version_0063a663
;   TerminatedCString s_d_0063a67b
;   TerminatedCString s_state_list_0063a67f
;   TerminatedCString s_d_0063a68e
;   TerminatedCString s_s_0063a692
;   TerminatedCString s_motion_count_0063a696
;   TerminatedCString s_d_0063a6a7
;   TerminatedCString s_motion_d_name_fps_state__0063a6ab
;   TerminatedCString s_s_g_d_d_d_0063a6e1
;   TerminatedCString s_motion_d_exitForwardFrom_0063a6f3
;   TerminatedCString s_d_d_g_0063a750
;   TerminatedCString s_motion_d_exitForwardCmd__0063a75a
;   TerminatedCString s_d_g_d_0063a7ad
;   TerminatedCString s_motion_d_exitBackwardToM_0063a7b7
;   TerminatedCString s_d_g_0063a7fb
;   ... and 10 more
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052d170
        ;   Label: core_motion.cpp_CMotionList_save_FUN_0052d170
    PUSH ESI                            ; 0052d171
    PUSH EDI                            ; 0052d172
    PUSH EBP                            ; 0052d173
    SUB ESP,0x8                         ; 0052d174
    MOV ESI,dword ptr [ESP + 0x20]      ; 0052d177
    PUSH 0x63a663                       ; 0052d17b | = "// motion list version\n"
    PUSH ESI                            ; 0052d180
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d181
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0052d186
    PUSH 0x2                            ; 0052d189
    PUSH 0x63a67b                       ; 0052d18b | = "%d\n"
    PUSH ESI                            ; 0052d190
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d191
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052d196
    PUSH 0x63a67f                       ; 0052d199 | = "// state list\n"
    PUSH ESI                            ; 0052d19e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d19f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0052d1a4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0052d1a7
    MOV EDX,dword ptr [EBX]             ; 0052d1ab
    PUSH EDX                            ; 0052d1ad
    PUSH 0x63a68e                       ; 0052d1ae | = "%d\n"
    PUSH ESI                            ; 0052d1b3
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d1b4
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052d1b9
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0052d1bc
    MOV ECX,dword ptr [EDI]             ; 0052d1c0
    XOR EBX,EBX                         ; 0052d1c2
    TEST ECX,ECX                        ; 0052d1c4
    JLE 0x0052d1f0                      ; 0052d1c6
        ;   XREF to: 0052d1f0 (CONDITIONAL_JUMP)  ; LAB_0052d1f0
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0052d1c8
    ADD EDI,0x4                         ; 0052d1cc
    PUSH EDI                            ; 0052d1cf
        ;   Label: LAB_0052d1cf
    PUSH 0x63a692                       ; 0052d1d0 | = "%s\n"
    PUSH ESI                            ; 0052d1d5
    INC EBX                             ; 0052d1d6
    ADD EDI,0x1e                        ; 0052d1d7
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d1da
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBP]             ; 0052d1df
    ADD ESP,0xc                         ; 0052d1e2
    CMP EBX,EAX                         ; 0052d1e5
    JL 0x0052d1cf                       ; 0052d1e7
        ;   XREF to: 0052d1cf (CONDITIONAL_JUMP)  ; LAB_0052d1cf
    LEA EAX,[EAX]                       ; 0052d1e9
    NOP                                 ; 0052d1ef
    PUSH 0x63a696                       ; 0052d1f0 | = "// motion count\n"
        ;   Label: LAB_0052d1f0
    PUSH ESI                            ; 0052d1f5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d1f6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0052d1fb
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0052d1fe
    MOV EDX,dword ptr [EBX + 0x964]     ; 0052d202
    PUSH EDX                            ; 0052d208
    PUSH 0x63a6a7                       ; 0052d209 | = "%d\n"
    PUSH ESI                            ; 0052d20e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d20f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052d214
    XOR ECX,ECX                         ; 0052d217
    MOV EDI,dword ptr [EBX + 0x964]     ; 0052d219
    MOV dword ptr [ESP],ECX             ; 0052d21f
    TEST EDI,EDI                        ; 0052d222
    JLE 0x0052d44a                      ; 0052d224
        ;   XREF to: 0052d44a (CONDITIONAL_JUMP)  ; LAB_0052d44a
    ADD EBX,0x968                       ; 0052d22a
    MOV dword ptr [ESP + 0x4],EBX       ; 0052d230
    MOV ECX,dword ptr [ESP]             ; 0052d234
        ;   Label: LAB_0052d234
    PUSH ECX                            ; 0052d237
    PUSH 0x63a6ab                       ; 0052d238 | = "// motion %d: \"name\",fps,state,fram..."
    PUSH ESI                            ; 0052d23d
    MOV EDI,dword ptr [ESP + 0x10]      ; 0052d23e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d242
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052d247
    MOV EBP,dword ptr [EDI + 0x64]      ; 0052d24a
    PUSH EBP                            ; 0052d24d
    MOV EAX,dword ptr [EDI + 0x60]      ; 0052d24e
    PUSH EAX                            ; 0052d251
    MOV EDX,dword ptr [EDI + 0x24]      ; 0052d252
    PUSH EDX                            ; 0052d255
    SUB ESP,0x8                         ; 0052d256
    FLD float ptr [EDI + 0x20]          ; 0052d259
    FSTP double ptr [ESP]               ; 0052d25c
    PUSH EDI                            ; 0052d25f
    PUSH 0x63a6e1                       ; 0052d260 | = "\"%s\",%g,%d,%d,%d\n"
    PUSH ESI                            ; 0052d265
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d266
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 0052d26b
    MOV EBX,dword ptr [ESP]             ; 0052d26e
    PUSH EBX                            ; 0052d271
    PUSH 0x63a6f3                       ; 0052d272 | = "// motion %d: exitForwardFromFrameNum..."
    PUSH ESI                            ; 0052d277
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d278
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052d27d
    SUB ESP,0x8                         ; 0052d280
    FLD float ptr [EDI + 0x38]          ; 0052d283
    FSTP double ptr [ESP]               ; 0052d286
    MOV EBP,dword ptr [EDI + 0x34]      ; 0052d289
    PUSH EBP                            ; 0052d28c
    MOV EAX,dword ptr [EDI + 0x28]      ; 0052d28d
    PUSH EAX                            ; 0052d290
    PUSH 0x63a750                       ; 0052d291 | = "%d,%d,%g\n"
    PUSH ESI                            ; 0052d296
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d297
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0052d29c
    PUSH EBX                            ; 0052d29f
    PUSH 0x63a75a                       ; 0052d2a0 | = "// motion %d: exitForwardCmd,exitForw..."
    PUSH ESI                            ; 0052d2a5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d2a6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052d2ab
    MOV ECX,dword ptr [EDI + 0x40]      ; 0052d2ae
    PUSH ECX                            ; 0052d2b1
    SUB ESP,0x8                         ; 0052d2b2
    FLD float ptr [EDI + 0x3c]          ; 0052d2b5
    FSTP double ptr [ESP]               ; 0052d2b8
    MOV EBP,dword ptr [EDI + 0x30]      ; 0052d2bb
    PUSH EBP                            ; 0052d2be
    PUSH 0x63a7ad                       ; 0052d2bf | = "%d,%g,%d\n"
    PUSH ESI                            ; 0052d2c4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d2c5
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0052d2ca
    PUSH EBX                            ; 0052d2cd
    PUSH 0x63a7b7                       ; 0052d2ce | = "// motion %d: exitBackwardToMotionNum..."
    PUSH ESI                            ; 0052d2d3
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d2d4
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052d2d9
    SUB ESP,0x8                         ; 0052d2dc
    FLD float ptr [EDI + 0x54]          ; 0052d2df
    FSTP double ptr [ESP]               ; 0052d2e2
    MOV EDX,dword ptr [EDI + 0x50]      ; 0052d2e5
    PUSH EDX                            ; 0052d2e8
    PUSH 0x63a7fb                       ; 0052d2e9 | = "%d,%g\n"
    PUSH ESI                            ; 0052d2ee
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d2ef
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0052d2f4
    PUSH EBX                            ; 0052d2f7
    PUSH 0x63a802                       ; 0052d2f8 | = "// motion %d transition count, list: ..."
    PUSH ESI                            ; 0052d2fd
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d2fe
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052d303
    MOV EBP,dword ptr [EDI + 0x68]      ; 0052d306
    PUSH EBP                            ; 0052d309
    PUSH 0x63a87a                       ; 0052d30a | = "%d\n"
    PUSH ESI                            ; 0052d30f
    XOR EBP,EBP                         ; 0052d310
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d312
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EAX,dword ptr [EDI + 0x68]      ; 0052d317
    ADD ESP,0xc                         ; 0052d31a
    TEST EAX,EAX                        ; 0052d31d
    JLE 0x0052d35e                      ; 0052d31f
        ;   XREF to: 0052d35e (CONDITIONAL_JUMP)  ; LAB_0052d35e
    LEA EBX,[EDI + 0x6c]                ; 0052d321
    MOV EDX,dword ptr [EBX + 0x14]      ; 0052d324
        ;   Label: LAB_0052d324
    PUSH EDX                            ; 0052d327
    SUB ESP,0x8                         ; 0052d328
    FLD float ptr [EBX + 0x10]          ; 0052d32b
    FSTP double ptr [ESP]               ; 0052d32e
    SUB ESP,0x8                         ; 0052d331
    FLD float ptr [EBX + 0xc]           ; 0052d334
    FSTP double ptr [ESP]               ; 0052d337
    MOV ECX,dword ptr [EBX + 0x8]       ; 0052d33a
    PUSH ECX                            ; 0052d33d
    MOV EAX,dword ptr [EBX + 0x4]       ; 0052d33e
    PUSH EAX                            ; 0052d341
    MOV EDX,dword ptr [EBX]             ; 0052d342
    PUSH EDX                            ; 0052d344
    PUSH 0x63a87e                       ; 0052d345 | = "%d,%d,%d,%g,%g,%d\n"
    PUSH ESI                            ; 0052d34a
    ADD EBX,0x18                        ; 0052d34b
    INC EBP                             ; 0052d34e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d34f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV ECX,dword ptr [EDI + 0x68]      ; 0052d354
    ADD ESP,0x28                        ; 0052d357
    CMP EBP,ECX                         ; 0052d35a
    JL 0x0052d324                       ; 0052d35c
        ;   XREF to: 0052d324 (CONDITIONAL_JUMP)  ; LAB_0052d324
    MOV EBX,dword ptr [ESP]             ; 0052d35e
        ;   Label: LAB_0052d35e
    PUSH EBX                            ; 0052d361
    PUSH 0x63a891                       ; 0052d362 | = "// motion %d signal count, list: fram..."
    PUSH ESI                            ; 0052d367
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d368
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052d36d
    MOV EBP,dword ptr [EDI + 0x4a4]     ; 0052d370
    PUSH EBP                            ; 0052d376
    PUSH 0x63a8c6                       ; 0052d377 | = "%d\n"
    PUSH ESI                            ; 0052d37c
    XOR EBP,EBP                         ; 0052d37d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d37f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EAX,dword ptr [EDI + 0x4a4]     ; 0052d384
    ADD ESP,0xc                         ; 0052d38a
    TEST EAX,EAX                        ; 0052d38d
    JLE 0x0052d3bd                      ; 0052d38f
        ;   XREF to: 0052d3bd (CONDITIONAL_JUMP)  ; LAB_0052d3bd
    MOV EBX,EDI                         ; 0052d391
    MOV EDX,dword ptr [EBX + 0x4ac]     ; 0052d393
        ;   Label: LAB_0052d393
    PUSH EDX                            ; 0052d399
    MOV ECX,dword ptr [EBX + 0x4a8]     ; 0052d39a
    PUSH ECX                            ; 0052d3a0
    PUSH 0x63a8ca                       ; 0052d3a1 | = "%d,%d\n"
    PUSH ESI                            ; 0052d3a6
    ADD EBX,0x8                         ; 0052d3a7
    INC EBP                             ; 0052d3aa
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d3ab
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EAX,dword ptr [EDI + 0x4a4]     ; 0052d3b0
    ADD ESP,0x10                        ; 0052d3b6
    CMP EBP,EAX                         ; 0052d3b9
    JL 0x0052d393                       ; 0052d3bb
        ;   XREF to: 0052d393 (CONDITIONAL_JUMP)  ; LAB_0052d393
    MOV EDX,dword ptr [ESP]             ; 0052d3bd
        ;   Label: LAB_0052d3bd
    PUSH EDX                            ; 0052d3c0
    PUSH 0x63a8d1                       ; 0052d3c1 | = "// motion %d marker count, list\n"
    PUSH ESI                            ; 0052d3c6
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d3c7
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0052d3cc
    MOV ECX,dword ptr [EDI + 0x520]     ; 0052d3cf
    PUSH ECX                            ; 0052d3d5
    PUSH 0x63a8f2                       ; 0052d3d6 | = "%d"
    PUSH ESI                            ; 0052d3db
    XOR EBP,EBP                         ; 0052d3dc
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d3de
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EBX,dword ptr [EDI + 0x520]     ; 0052d3e3
    ADD ESP,0xc                         ; 0052d3e9
    TEST EBX,EBX                        ; 0052d3ec
    JLE 0x0052d415                      ; 0052d3ee
        ;   XREF to: 0052d415 (CONDITIONAL_JUMP)  ; LAB_0052d415
    MOV EBX,EDI                         ; 0052d3f0
    MOV EAX,dword ptr [EBX + 0x524]     ; 0052d3f2
        ;   Label: LAB_0052d3f2
    PUSH EAX                            ; 0052d3f8
    PUSH 0x63a8f5                       ; 0052d3f9 | = " %d"
    PUSH ESI                            ; 0052d3fe
    ADD EBX,0x4                         ; 0052d3ff
    INC EBP                             ; 0052d402
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d403
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EDX,dword ptr [EDI + 0x520]     ; 0052d408
    ADD ESP,0xc                         ; 0052d40e
    CMP EBP,EDX                         ; 0052d411
    JL 0x0052d3f2                       ; 0052d413
        ;   XREF to: 0052d3f2 (CONDITIONAL_JUMP)  ; LAB_0052d3f2
    PUSH 0x63a8f9                       ; 0052d415 | = "\n"
        ;   Label: LAB_0052d415
    PUSH ESI                            ; 0052d41a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052d41b
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0052d420
    MOV EBP,dword ptr [ESP + 0x4]       ; 0052d423
    MOV EAX,dword ptr [ESP]             ; 0052d427
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0052d42a
    ADD EBP,0x54c                       ; 0052d42e
    INC EAX                             ; 0052d434
    MOV EDX,dword ptr [EDI + 0x964]     ; 0052d435
    MOV dword ptr [ESP + 0x4],EBP       ; 0052d43b
    MOV dword ptr [ESP],EAX             ; 0052d43f
    CMP EAX,EDX                         ; 0052d442
    JL 0x0052d234                       ; 0052d444
        ;   XREF to: 0052d234 (CONDITIONAL_JUMP)  ; LAB_0052d234
    ADD ESP,0x8                         ; 0052d44a
        ;   Label: LAB_0052d44a
    POP EBP                             ; 0052d44d
    POP EDI                             ; 0052d44e
    POP ESI                             ; 0052d44f
    POP EBX                             ; 0052d450
    RET                                 ; 0052d451

