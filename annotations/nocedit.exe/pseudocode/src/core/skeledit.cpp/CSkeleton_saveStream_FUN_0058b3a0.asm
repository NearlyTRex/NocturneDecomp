; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0(CSkeleton * this_ptr, FILE * file_handle)
;
; Parameters:
; CSkeleton *      Stack[0x8]:4   this_ptr
; FILE *           Stack[0xc]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeledit.cpp_CSkeleton_save_FUN_0058b2c0 at 0058b33e
;
; Referenced Globals:
;   TerminatedCString s_skeleton_version_0064a658
;   TerminatedCString s_d_0064a66d
;   TerminatedCString s_bonecount_frameCount_0064a671
;   TerminatedCString s_d_d_0064a68b
;   TerminatedCString s_boneList_0064a692
;   TerminatedCString s_s_d_0064a69f
;   TerminatedCString s_angle_list_w_x_y_z_0064a6a9
;   TerminatedCString s_g_g_g_g_0064a6c1
;   TerminatedCString s_root_offset_list_x_y_z_0064a6ce
;   TerminatedCString s_g_g_g_0064a6ea
;   TerminatedCString s_canceled_movement_list_x_0064a6f4
;   TerminatedCString s_g_g_g_0064a716
;   TerminatedCString s_reference_bone_org_list__0064a720
;   TerminatedCString s_g_g_g_0064a743
;   TerminatedCString s_core_skeledit_cpp_0064a74d
;   ... and 4 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_motion.cpp_CMotionList_save_FUN_0052d170
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH 0x4c                           ; 0058b3a0
        ;   Label: core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 0058b3a5 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 0058b3aa
    PUSH ESI                            ; 0058b3ab
    PUSH EDI                            ; 0058b3ac
    PUSH EBP                            ; 0058b3ad
    SUB ESP,0x10                        ; 0058b3ae
    MOV EDI,dword ptr [ESP + 0x24]      ; 0058b3b1
    MOV EBP,dword ptr [ESP + 0x28]      ; 0058b3b5
    PUSH 0x64a658                       ; 0058b3b9 | = "// skeleton version\n" | s_skeleton_version_0064a658 = // skeleton version

    PUSH EBP                            ; 0058b3be
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058b3bf | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058b3c4
    MOV EDX,dword ptr [0x00681860]      ; 0058b3c7 | undefined4 g_CSkeletonVersion
    PUSH EDX                            ; 0058b3cd
    PUSH 0x64a66d                       ; 0058b3ce | = "%d\n" | s_d_0064a66d = %d

    PUSH EBP                            ; 0058b3d3
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058b3d4 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0058b3d9
    PUSH 0x64a671                       ; 0058b3dc | = "// bonecount, frameCount\n" | s_bonecount_frameCount_0064a671 = // bonecount, frameCount

    PUSH EBP                            ; 0058b3e1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058b3e2 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058b3e7
    MOV ECX,dword ptr [EDI + 0x2936c]   ; 0058b3ea
    PUSH ECX                            ; 0058b3f0
    MOV EBX,dword ptr [EDI + 0x28558]   ; 0058b3f1
    PUSH EBX                            ; 0058b3f7
    PUSH 0x64a68b                       ; 0058b3f8 | = "%d,%d\n" | s_d_d_0064a68b = %d,%d

    PUSH EBP                            ; 0058b3fd
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058b3fe | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0058b403
    PUSH 0x64a692                       ; 0058b406 | = "// boneList\n" | s_boneList_0064a692 = // boneList

    PUSH EBP                            ; 0058b40b
    XOR ESI,ESI                         ; 0058b40c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058b40e | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EDI + 0x28558]   ; 0058b413
    ADD ESP,0x8                         ; 0058b419
    TEST EAX,EAX                        ; 0058b41c
    JLE 0x0058b460                      ; 0058b41e | LAB_0058b460
        ;   XREF to: 0058b460 (CONDITIONAL_JUMP)
    LEA EBX,[EDI + 0x2855c]             ; 0058b420
    MOV dword ptr [ESP],EDI             ; 0058b426
    MOV EAX,dword ptr [ESP]             ; 0058b429
        ;   Label: LAB_0058b429
    MOV EDX,dword ptr [EAX + 0x2857c]   ; 0058b42c
    PUSH EDX                            ; 0058b432
    PUSH EBX                            ; 0058b433
    PUSH 0x64a69f                       ; 0058b434 | = "\"%s\", %d\n" | s_s_d_0064a69f = "%s", %d

    PUSH EBP                            ; 0058b439
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058b43a | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0058b43f
    INC ESI                             ; 0058b442
    MOV ECX,dword ptr [ESP]             ; 0058b443
    ADD EBX,0x24                        ; 0058b446
    ADD ECX,0x24                        ; 0058b449
    MOV EAX,dword ptr [EDI + 0x28558]   ; 0058b44c
    MOV dword ptr [ESP],ECX             ; 0058b452
    CMP ESI,EAX                         ; 0058b455
    JL 0x0058b429                       ; 0058b457 | LAB_0058b429
        ;   XREF to: 0058b429 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0058b459
    NOP                                 ; 0058b45f
    PUSH 0x64a6a9                       ; 0058b460 | = "// angle list: w,x,y,z\n" | s_angle_list_w_x_y_z_0064a6a9 = // angle list: w,x,y,z

        ;   Label: LAB_0058b460
    PUSH EBP                            ; 0058b465
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058b466 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058b46b
    MOV EBX,dword ptr [EDI + 0x29370]   ; 0058b46e
    XOR EDX,EDX                         ; 0058b474
    MOV ECX,dword ptr [EDI + 0x2936c]   ; 0058b476
    MOV dword ptr [ESP + 0x8],EDX       ; 0058b47c
    TEST ECX,ECX                        ; 0058b480
    JLE 0x0058b4e2                      ; 0058b482 | LAB_0058b4e2
        ;   XREF to: 0058b4e2 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDI + 0x28558]   ; 0058b484
        ;   Label: LAB_0058b484
    XOR ESI,ESI                         ; 0058b48a
    TEST EAX,EAX                        ; 0058b48c
    JLE 0x0058b4cf                      ; 0058b48e | LAB_0058b4cf
        ;   XREF to: 0058b4cf (CONDITIONAL_JUMP)
    SUB ESP,0x8                         ; 0058b490
        ;   Label: LAB_0058b490
    FLD float ptr [EBX + 0xc]           ; 0058b493
    FSTP double ptr [ESP]               ; 0058b496
    SUB ESP,0x8                         ; 0058b499
    FLD float ptr [EBX + 0x8]           ; 0058b49c
    FSTP double ptr [ESP]               ; 0058b49f
    SUB ESP,0x8                         ; 0058b4a2
    FLD float ptr [EBX + 0x4]           ; 0058b4a5
    FSTP double ptr [ESP]               ; 0058b4a8
    SUB ESP,0x8                         ; 0058b4ab
    FLD float ptr [EBX]                 ; 0058b4ae
    FSTP double ptr [ESP]               ; 0058b4b0
    PUSH 0x64a6c1                       ; 0058b4b3 | = "%g,%g,%g,%g\n" | s_g_g_g_g_0064a6c1 = %g,%g,%g,%g

    PUSH EBP                            ; 0058b4b8
    ADD EBX,0x10                        ; 0058b4b9
    INC ESI                             ; 0058b4bc
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058b4bd | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EDI + 0x28558]   ; 0058b4c2
    ADD ESP,0x28                        ; 0058b4c8
    CMP ESI,EAX                         ; 0058b4cb
    JL 0x0058b490                       ; 0058b4cd | LAB_0058b490
        ;   XREF to: 0058b490 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x8]       ; 0058b4cf
        ;   Label: LAB_0058b4cf
    INC ESI                             ; 0058b4d3
    MOV EAX,dword ptr [EDI + 0x2936c]   ; 0058b4d4
    MOV dword ptr [ESP + 0x8],ESI       ; 0058b4da
    CMP ESI,EAX                         ; 0058b4de
    JL 0x0058b484                       ; 0058b4e0 | LAB_0058b484
        ;   XREF to: 0058b484 (CONDITIONAL_JUMP)
    PUSH 0x64a6ce                       ; 0058b4e2 | = "// root offset list: x,y,z\n" | s_root_offset_list_x_y_z_0064a6ce = // root offset list: x,y,z

        ;   Label: LAB_0058b4e2
    PUSH EBP                            ; 0058b4e7
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058b4e8 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058b4ed
    XOR EDX,EDX                         ; 0058b4f0
    MOV ECX,dword ptr [EDI + 0x2936c]   ; 0058b4f2
    MOV dword ptr [ESP + 0x4],EDX       ; 0058b4f8
    TEST ECX,ECX                        ; 0058b4fc
    JLE 0x0058b550                      ; 0058b4fe | LAB_0058b550
        ;   XREF to: 0058b550 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 0058b500
    MOV EBX,dword ptr [EDI + 0x29374]   ; 0058b502
        ;   Label: LAB_0058b502
    SUB ESP,0x8                         ; 0058b508
    FLD float ptr [ESI + EBX*0x1 + 0x8] ; 0058b50b
    FSTP double ptr [ESP]               ; 0058b50f
    SUB ESP,0x8                         ; 0058b512
    FLD float ptr [ESI + EBX*0x1 + 0x4] ; 0058b515
    FSTP double ptr [ESP]               ; 0058b519
    SUB ESP,0x8                         ; 0058b51c
    FLD float ptr [ESI + EBX*0x1]       ; 0058b51f
    FSTP double ptr [ESP]               ; 0058b522
    PUSH 0x64a6ea                       ; 0058b525 | = "%g,%g,%g\n" | s_g_g_g_0064a6ea = %g,%g,%g

    PUSH EBP                            ; 0058b52a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058b52b | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x20                        ; 0058b530
    MOV EDX,dword ptr [ESP + 0x4]       ; 0058b533
    ADD ESI,0xc                         ; 0058b537
    INC EDX                             ; 0058b53a
    MOV ECX,dword ptr [EDI + 0x2936c]   ; 0058b53b
    MOV dword ptr [ESP + 0x4],EDX       ; 0058b541
    CMP EDX,ECX                         ; 0058b545
    JL 0x0058b502                       ; 0058b547 | LAB_0058b502
        ;   XREF to: 0058b502 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0058b549
    NOP                                 ; 0058b54f
    PUSH 0x64a6f4                       ; 0058b550 | = "// canceled movement list: x,y,z\n" | s_canceled_movement_list_x_0064a6f4 = // canceled movement list: x,y,z

        ;   Label: LAB_0058b550
    PUSH EBP                            ; 0058b555
    XOR EBX,EBX                         ; 0058b556
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058b558 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058b55d
    MOV ESI,dword ptr [EDI + 0x2936c]   ; 0058b560
    MOV dword ptr [ESP + 0xc],EBX       ; 0058b566
    TEST ESI,ESI                        ; 0058b56a
    JLE 0x0058b5c0                      ; 0058b56c | LAB_0058b5c0
        ;   XREF to: 0058b5c0 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 0058b56e
    MOV EBX,dword ptr [EDI + 0x29378]   ; 0058b570
        ;   Label: LAB_0058b570
    SUB ESP,0x8                         ; 0058b576
    FLD float ptr [ESI + EBX*0x1 + 0x8] ; 0058b579
    FSTP double ptr [ESP]               ; 0058b57d
    SUB ESP,0x8                         ; 0058b580
    FLD float ptr [ESI + EBX*0x1 + 0x4] ; 0058b583
    FSTP double ptr [ESP]               ; 0058b587
    SUB ESP,0x8                         ; 0058b58a
    FLD float ptr [ESI + EBX*0x1]       ; 0058b58d
    FSTP double ptr [ESP]               ; 0058b590
    PUSH 0x64a716                       ; 0058b593 | = "%g,%g,%g\n" | s_g_g_g_0064a716 = %g,%g,%g

    PUSH EBP                            ; 0058b598
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058b599 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x20                        ; 0058b59e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0058b5a1
    ADD ESI,0xc                         ; 0058b5a5
    INC EAX                             ; 0058b5a8
    MOV EDX,dword ptr [EDI + 0x2936c]   ; 0058b5a9
    MOV dword ptr [ESP + 0xc],EAX       ; 0058b5af
    CMP EAX,EDX                         ; 0058b5b3
    JL 0x0058b570                       ; 0058b5b5 | LAB_0058b570
        ;   XREF to: 0058b570 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0058b5b7
    LEA EDX,[EDX]                       ; 0058b5bd
    PUSH EBP                            ; 0058b5c0
        ;   Label: LAB_0058b5c0
    PUSH EDI                            ; 0058b5c1
    CALL core_motion.cpp_CMotionList_save_FUN_0052d170 ; 0058b5c2 | void core_motion.cpp_CMotionList_save_FUN_0052d170(CMotionList * this_ptr, FILE * file_handle)
        ;   XREF to: 0052d170 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058b5c7
    PUSH 0x64a720                       ; 0058b5ca | = "// reference bone org list: x,y,z\n" | s_reference_bone_org_list__0064a720 = // reference bone org list: x,y,z

    PUSH EBP                            ; 0058b5cf
    XOR ESI,ESI                         ; 0058b5d0
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058b5d2 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EDI + 0x28558]   ; 0058b5d7
    ADD ESP,0x8                         ; 0058b5dd
    TEST ECX,ECX                        ; 0058b5e0
    JLE 0x0058b620                      ; 0058b5e2 | LAB_0058b620
        ;   XREF to: 0058b620 (CONDITIONAL_JUMP)
    LEA EBX,[EDI + 0x2937c]             ; 0058b5e4
    SUB ESP,0x8                         ; 0058b5ea
        ;   Label: LAB_0058b5ea
    FLD float ptr [EBX + 0x8]           ; 0058b5ed
    FSTP double ptr [ESP]               ; 0058b5f0
    SUB ESP,0x8                         ; 0058b5f3
    FLD float ptr [EBX + 0x4]           ; 0058b5f6
    FSTP double ptr [ESP]               ; 0058b5f9
    SUB ESP,0x8                         ; 0058b5fc
    FLD float ptr [EBX]                 ; 0058b5ff
    FSTP double ptr [ESP]               ; 0058b601
    PUSH 0x64a743                       ; 0058b604 | = "%g,%g,%g\n" | s_g_g_g_0064a743 = %g,%g,%g

    PUSH EBP                            ; 0058b609
    ADD EBX,0xc                         ; 0058b60a
    INC ESI                             ; 0058b60d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058b60e | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EDI + 0x28558]   ; 0058b613
    ADD ESP,0x20                        ; 0058b619
    CMP ESI,EAX                         ; 0058b61c
    JL 0x0058b5ea                       ; 0058b61e | LAB_0058b5ea
        ;   XREF to: 0058b5ea (CONDITIONAL_JUMP)
    TEST byte ptr [EBP + 0xc],0x20      ; 0058b620
        ;   Label: LAB_0058b620
    JNZ 0x0058b62e                      ; 0058b624 | LAB_0058b62e
        ;   XREF to: 0058b62e (CONDITIONAL_JUMP)
    ADD ESP,0x10                        ; 0058b626
    POP EBP                             ; 0058b629
    POP EDI                             ; 0058b62a
    POP ESI                             ; 0058b62b
    POP EBX                             ; 0058b62c
    RET                                 ; 0058b62d
    MOV EDX,0x64a74d                    ; 0058b62e | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_0064a74d = ..\core\skeledit.cpp
        ;   Label: LAB_0058b62e
    MOV ECX,0x49f                       ; 0058b633
    PUSH 0x64a762                       ; 0058b638 | = "CSkeleton::saveStream - error writing..." | s_CSkeleton_saveStream_err_0064a762 = CSkeleton::saveStream - error writing file.
    MOV dword ptr [0x02f0ca48],EDX      ; 0058b63d | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0058b643 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058b649 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0058b64e
    ADD ESP,0x10                        ; 0058b651
    POP EBP                             ; 0058b654
    POP EDI                             ; 0058b655
    POP ESI                             ; 0058b656
    POP EBX                             ; 0058b657
    RET                                 ; 0058b658

