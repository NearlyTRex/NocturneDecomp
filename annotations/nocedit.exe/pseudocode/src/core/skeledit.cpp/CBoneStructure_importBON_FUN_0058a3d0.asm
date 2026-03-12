; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CBoneStructure_importBON_FUN_0058a3d0(CBoneStructure *this_ptr,char *filename)
;
; Parameters:
; CBoneStructure * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeledit.cpp_CSkeleton_importSkeletonFile_FUN_00592690 at 0059299f
;
; Referenced Globals:
;   TerminatedCString s_core_skeledit_cpp_0064a279
;   TerminatedCString s_rt_0064a28e
;   TerminatedCString s_core_skeledit_cpp_0064a291
;   TerminatedCString s_CBoneStructure_importBON_0064a2a6
;   TerminatedCString s_d_0064a2ce
;   TerminatedCString s_core_skeledit_cpp_0064a2d2
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0
;   core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10
;   core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH 0x30                           ; 0058a3d0
        ;   Label: core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058a3d5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058a3da
    PUSH ESI                            ; 0058a3db
    PUSH EDI                            ; 0058a3dc
    PUSH EBP                            ; 0058a3dd
    SUB ESP,0x8                         ; 0058a3de
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0058a3e1
    MOV EBX,dword ptr [ESP + 0x20]      ; 0058a3e5
    PUSH 0x27c                          ; 0058a3e9
    PUSH 0x64a279                       ; 0058a3ee | = "..\\core\\skeledit.cpp"
    PUSH 0x64a28e                       ; 0058a3f3 | = "rt"
    PUSH 0x0                            ; 0058a3f8
    PUSH EBX                            ; 0058a3fa
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0058a3fb
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0058a400
    MOV EDI,EAX                         ; 0058a403
    TEST EAX,EAX                        ; 0058a405
    JZ 0x0058a477                       ; 0058a407
        ;   XREF to: 0058a477 (CONDITIONAL_JUMP)  ; LAB_0058a477
    MOV EBX,0x1                         ; 0058a409
        ;   Label: LAB_0058a409
    MOV ESI,EDI                         ; 0058a40e
    PUSH ESI                            ; 0058a410
        ;   Label: LAB_0058a410
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058a411
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058a416
    TEST EAX,EAX                        ; 0058a419
    JL 0x0058a427                       ; 0058a41b
        ;   XREF to: 0058a427 (CONDITIONAL_JUMP)  ; LAB_0058a427
    CMP EAX,0xa                         ; 0058a41d
    JNZ 0x0058a410                      ; 0058a420
        ;   XREF to: 0058a410 (CONDITIONAL_JUMP)  ; LAB_0058a410
    DEC EBX                             ; 0058a422
    TEST EBX,EBX                        ; 0058a423
    JG 0x0058a410                       ; 0058a425
        ;   XREF to: 0058a410 (CONDITIONAL_JUMP)  ; LAB_0058a410
    MOV EAX,ESP                         ; 0058a427
        ;   Label: LAB_0058a427
    PUSH EAX                            ; 0058a429
    PUSH 0x64a2ce                       ; 0058a42a | = "%d\n"
    PUSH EDI                            ; 0058a42f
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058a430
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058a435
    LEA EAX,[ESP + 0x4]                 ; 0058a438
    PUSH EAX                            ; 0058a43c
    PUSH EDI                            ; 0058a43d
    PUSH EBP                            ; 0058a43e
    CALL core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0 ; 0058a43f
        ;   XREF to: 0058a4a0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0(CBoneStructure * this_ptr, _FILE * file, int * frame_count_out)
    ADD ESP,0xc                         ; 0058a444
    PUSH 0x0                            ; 0058a447
    PUSH EDI                            ; 0058a449
    PUSH EBP                            ; 0058a44a
    CALL core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10 ; 0058a44b
        ;   XREF to: 0058aa10 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10(CBoneStructure * this_ptr, _FILE * file, int mirror_flag)
    ADD ESP,0xc                         ; 0058a450
    PUSH 0x290                          ; 0058a453
    PUSH 0x64a2d2                       ; 0058a458 | = "..\\core\\skeledit.cpp"
    PUSH EDI                            ; 0058a45d
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0058a45e
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0058a463
    PUSH EBP                            ; 0058a466
    CALL core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0 ; 0058a467
        ;   XREF to: 0058adb0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0(CBoneStructure * this_ptr)
    ADD ESP,0x4                         ; 0058a46c
    ADD ESP,0x8                         ; 0058a46f
    POP EBP                             ; 0058a472
    POP EDI                             ; 0058a473
    POP ESI                             ; 0058a474
    POP EBX                             ; 0058a475
    RET                                 ; 0058a476
    PUSH EBX                            ; 0058a477
        ;   Label: LAB_0058a477
    MOV EDX,0x64a291                    ; 0058a478 | = "..\\core\\skeledit.cpp"
    MOV ECX,0x27d                       ; 0058a47d
    PUSH 0x64a2a6                       ; 0058a482 | = "CBoneStructure::importBON can't open %s"
    MOV dword ptr [0x02f0ca48],EDX      ; 0058a487 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0058a48d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058a493
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0058a498
    JMP 0x0058a409                      ; 0058a49b
        ;   XREF to: 0058a409 (UNCONDITIONAL_JUMP)  ; LAB_0058a409

