; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setutil_cpp_C3DSLight_load_FUN_00586310(C3DSLight *this_ptr,FILE *file_handle)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined1       Stack[-0x148]:1  local_148
; undefined4       Stack[-0x48]:4  local_48
; undefined1       Stack[-0x44]:1  local_44
; undefined1       Stack[-0x40]:1  local_40
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
;   core_set.cpp_CDemonSet_load_FUN_00569410 at 005697b2
;
; Referenced Globals:
;   TerminatedCString s_anon_00649543
;   TerminatedCString s_f_f_f_0064954a
;   TerminatedCString s_f_f_f_00649554
;   TerminatedCString s_f_0064955e
;   TerminatedCString s_f_00649562
;   TerminatedCString s_f_00649566
;   TerminatedCString s_d_0064956a
;   TerminatedCString s_f_f_f_f_f_0064956e
;   TerminatedCString s_d_d_0064957e
;   TerminatedCString s_d_00649585
;   TerminatedCString s_d_00649589
;   TerminatedCString s_f_s_0064958d
;   TerminatedCString s_f_d_s_00649594
;   TerminatedCString s_d_0064959e
;   TerminatedCString s_d_d_d_d_d_006495a2
;   ... and 12 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00586310
        ;   Label: core_setutil.cpp_C3DSLight_load_FUN_00586310
    PUSH ESI                            ; 00586311
    PUSH EDI                            ; 00586312
    PUSH EBP                            ; 00586313
    SUB ESP,0x138                       ; 00586314
    MOV EBX,dword ptr [ESP + 0x14c]     ; 0058631a
    MOV ESI,dword ptr [ESP + 0x150]     ; 00586321
    MOV EAX,[0x006810c8]                ; 00586328 | g_CDemonSetInstance | g_CDemonSetPtr
    CMP dword ptr [EAX + 0x15acac],0xb  ; 0058632d | DAT_0326ef24
    JGE 0x0058683c                      ; 00586334
        ;   XREF to: 0058683c (CONDITIONAL_JUMP)  ; LAB_0058683c
    LEA EAX,[EBX + 0x4]                 ; 0058633a
        ;   Label: LAB_0058633a
    PUSH EAX                            ; 0058633d
    PUSH 0x649543                       ; 0058633e | = "%[^\n]\n"
    PUSH ESI                            ; 00586343
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00586344
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EAX,[0x006810c8]                ; 00586349 | g_CDemonSetPtr
    MOV ECX,dword ptr [EAX + 0x15acac]  ; 0058634e | DAT_0326ef24
    ADD ESP,0xc                         ; 00586354
    CMP ECX,0xb                         ; 00586357
    JL 0x0058636f                       ; 0058635a
        ;   XREF to: 0058636f (CONDITIONAL_JUMP)  ; LAB_0058636f
    PUSH ESI                            ; 0058635c
    PUSH 0xff                           ; 0058635d
    LEA EAX,[ESP + 0x8]                 ; 00586362
    PUSH EAX                            ; 00586366
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00586367
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 0058636c
    LEA EAX,[EBX + 0x10c]               ; 0058636f
        ;   Label: LAB_0058636f
    PUSH EAX                            ; 00586375
    LEA EAX,[EBX + 0x108]               ; 00586376
    PUSH EAX                            ; 0058637c
    LEA EAX,[EBX + 0x104]               ; 0058637d
    PUSH EAX                            ; 00586383
    PUSH 0x64954a                       ; 00586384 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00586389
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058638a
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EAX,[0x006810c8]                ; 0058638f | g_CDemonSetPtr
    MOV EDI,dword ptr [EAX + 0x15acac]  ; 00586394 | DAT_0326ef24
    ADD ESP,0x14                        ; 0058639a
    CMP EDI,0xb                         ; 0058639d
    JL 0x005863b5                       ; 005863a0
        ;   XREF to: 005863b5 (CONDITIONAL_JUMP)  ; LAB_005863b5
    PUSH ESI                            ; 005863a2
    PUSH 0xff                           ; 005863a3
    LEA EAX,[ESP + 0x8]                 ; 005863a8
    PUSH EAX                            ; 005863ac
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005863ad
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 005863b2
    LEA EAX,[EBX + 0x114]               ; 005863b5
        ;   Label: LAB_005863b5
    PUSH EAX                            ; 005863bb
    LEA EAX,[EBX + 0x118]               ; 005863bc
    PUSH EAX                            ; 005863c2
    LEA EAX,[EBX + 0x110]               ; 005863c3
    PUSH EAX                            ; 005863c9
    PUSH 0x649554                       ; 005863ca | = "%f,%f,%f\n"
    PUSH ESI                            ; 005863cf
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005863d0
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EAX,[0x006810c8]                ; 005863d5 | g_CDemonSetPtr
    MOV EBP,dword ptr [EAX + 0x15acac]  ; 005863da | DAT_0326ef24
    ADD ESP,0x14                        ; 005863e0
    CMP EBP,0xb                         ; 005863e3
    JL 0x005863fb                       ; 005863e6
        ;   XREF to: 005863fb (CONDITIONAL_JUMP)  ; LAB_005863fb
    PUSH ESI                            ; 005863e8
    PUSH 0xff                           ; 005863e9
    LEA EAX,[ESP + 0x8]                 ; 005863ee
    PUSH EAX                            ; 005863f2
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005863f3
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 005863f8
    LEA EAX,[EBX + 0x11c]               ; 005863fb
        ;   Label: LAB_005863fb
    PUSH EAX                            ; 00586401
    PUSH 0x64955e                       ; 00586402 | = "%f\n"
    PUSH ESI                            ; 00586407
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00586408
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EAX,[0x006810c8]                ; 0058640d | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x15acac]  ; 00586412 | DAT_0326ef24
    ADD ESP,0xc                         ; 00586418
    CMP EDX,0x15                        ; 0058641b
    JL 0x00586854                       ; 0058641e
        ;   XREF to: 00586854 (CONDITIONAL_JUMP)  ; LAB_00586854
    PUSH ESI                            ; 00586424
    PUSH 0xff                           ; 00586425
    LEA EAX,[ESP + 0x8]                 ; 0058642a
    PUSH EAX                            ; 0058642e
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0058642f
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 00586434
    LEA EAX,[EBX + 0x120]               ; 00586437
    PUSH EAX                            ; 0058643d
    PUSH 0x649562                       ; 0058643e | = "%f\n"
    PUSH ESI                            ; 00586443
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00586444
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00586449
    MOV EAX,[0x006810c8]                ; 0058644c | g_CDemonSetPtr
        ;   Label: LAB_0058644c
    CMP dword ptr [EAX + 0x15acac],0x16 ; 00586451 | DAT_0326ef24
    JL 0x00586863                       ; 00586458
        ;   XREF to: 00586863 (CONDITIONAL_JUMP)  ; LAB_00586863
    PUSH ESI                            ; 0058645e
    PUSH 0xff                           ; 0058645f
    LEA EAX,[ESP + 0x8]                 ; 00586464
    PUSH EAX                            ; 00586468
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00586469
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 0058646e
    LEA EAX,[EBX + 0x124]               ; 00586471
    PUSH EAX                            ; 00586477
    PUSH 0x649566                       ; 00586478 | = "%f\n"
    PUSH ESI                            ; 0058647d
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058647e
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00586483
    MOV EAX,[0x006810c8]                ; 00586486 | g_CDemonSetPtr
        ;   Label: LAB_00586486
    CMP dword ptr [EAX + 0x15acac],0xb  ; 0058648b | DAT_0326ef24
    JL 0x005864a7                       ; 00586492
        ;   XREF to: 005864a7 (CONDITIONAL_JUMP)  ; LAB_005864a7
    PUSH ESI                            ; 00586494
    PUSH 0xff                           ; 00586495
    LEA EAX,[ESP + 0x8]                 ; 0058649a
    PUSH EAX                            ; 0058649e
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0058649f
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 005864a4
    PUSH EBX                            ; 005864a7
        ;   Label: LAB_005864a7
    PUSH 0x64956a                       ; 005864a8 | = "%d\n"
    PUSH ESI                            ; 005864ad
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005864ae
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EAX,[0x006810c8]                ; 005864b3 | g_CDemonSetPtr
    MOV EBP,dword ptr [EAX + 0x15acac]  ; 005864b8 | DAT_0326ef24
    ADD ESP,0xc                         ; 005864be
    CMP EBP,0xb                         ; 005864c1
    JL 0x005864d9                       ; 005864c4
        ;   XREF to: 005864d9 (CONDITIONAL_JUMP)  ; LAB_005864d9
    PUSH ESI                            ; 005864c6
    PUSH 0xff                           ; 005864c7
    LEA EAX,[ESP + 0x8]                 ; 005864cc
    PUSH EAX                            ; 005864d0
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005864d1
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 005864d6
    LEA EAX,[EBX + 0x11d4]              ; 005864d9
        ;   Label: LAB_005864d9
    PUSH EAX                            ; 005864df
    LEA EAX,[EBX + 0x11d0]              ; 005864e0
    PUSH EAX                            ; 005864e6
    LEA EAX,[EBX + 0x11cc]              ; 005864e7
    PUSH EAX                            ; 005864ed
    LEA EAX,[EBX + 0x11c8]              ; 005864ee
    PUSH EAX                            ; 005864f4
    LEA EAX,[EBX + 0x11c4]              ; 005864f5
    PUSH EAX                            ; 005864fb
    PUSH 0x64956e                       ; 005864fc | = "%f,%f,%f,%f,%f\n"
    PUSH ESI                            ; 00586501
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00586502
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EAX,[0x006810c8]                ; 00586507 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x15acac]  ; 0058650c | DAT_0326ef24
    ADD ESP,0x1c                        ; 00586512
    CMP EDX,0xb                         ; 00586515
    JL 0x0058652d                       ; 00586518
        ;   XREF to: 0058652d (CONDITIONAL_JUMP)  ; LAB_0058652d
    PUSH ESI                            ; 0058651a
    PUSH 0xff                           ; 0058651b
    LEA EAX,[ESP + 0x8]                 ; 00586520
    PUSH EAX                            ; 00586524
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00586525
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 0058652a
    LEA EAX,[EBX + 0x180c]              ; 0058652d
        ;   Label: LAB_0058652d
    PUSH EAX                            ; 00586533
    LEA EAX,[EBX + 0x1808]              ; 00586534
    PUSH EAX                            ; 0058653a
    PUSH 0x64957e                       ; 0058653b | = "%d,%d\n"
    PUSH ESI                            ; 00586540
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00586541
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EAX,[0x006810c8]                ; 00586546 | g_CDemonSetPtr
    MOV ECX,dword ptr [EAX + 0x15acac]  ; 0058654b | DAT_0326ef24
    ADD ESP,0x10                        ; 00586551
    CMP ECX,0xb                         ; 00586554
    JL 0x0058656c                       ; 00586557
        ;   XREF to: 0058656c (CONDITIONAL_JUMP)  ; LAB_0058656c
    PUSH ESI                            ; 00586559
    PUSH 0xff                           ; 0058655a
    LEA EAX,[ESP + 0x8]                 ; 0058655f
    PUSH EAX                            ; 00586563
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00586564
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 00586569
    LEA EAX,[EBX + 0x11ec]              ; 0058656c
        ;   Label: LAB_0058656c
    PUSH EAX                            ; 00586572
    PUSH 0x649585                       ; 00586573 | = "%d\n"
    PUSH ESI                            ; 00586578
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00586579
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EAX,[0x006810c8]                ; 0058657e | g_CDemonSetPtr
    MOV EDI,dword ptr [EAX + 0x15acac]  ; 00586583 | DAT_0326ef24
    ADD ESP,0xc                         ; 00586589
    CMP EDI,0xb                         ; 0058658c
    JL 0x005865a4                       ; 0058658f
        ;   XREF to: 005865a4 (CONDITIONAL_JUMP)  ; LAB_005865a4
    PUSH ESI                            ; 00586591
    PUSH 0xff                           ; 00586592
    LEA EAX,[ESP + 0x8]                 ; 00586597
    PUSH EAX                            ; 0058659b
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0058659c
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 005865a1
    MOV EAX,[0x006810c8]                ; 005865a4 | g_CDemonSetPtr
        ;   Label: LAB_005865a4
    CMP dword ptr [EAX + 0x15acac],0x9  ; 005865a9 | DAT_0326ef24
    JL 0x00586872                       ; 005865b0
        ;   XREF to: 00586872 (CONDITIONAL_JUMP)  ; LAB_00586872
    LEA EAX,[EBX + 0x11f0]              ; 005865b6
    PUSH EAX                            ; 005865bc
    PUSH 0x649589                       ; 005865bd | = "%d\n"
    PUSH ESI                            ; 005865c2
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005865c3
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 005865c8
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 005865cb
        ;   Label: LAB_005865cb
    XOR EDI,EDI                         ; 005865d1
    TEST EAX,EAX                        ; 005865d3
    JLE 0x00586689                      ; 005865d5
        ;   XREF to: 00586689 (CONDITIONAL_JUMP)  ; LAB_00586689
    LEA EAX,[EBX + 0x1774]              ; 005865db
    LEA EBP,[EBX + 0x16f4]              ; 005865e1
    MOV dword ptr [ESP + 0x120],EAX     ; 005865e7
    LEA EAX,[EBX + 0x11f4]              ; 005865ee
    MOV dword ptr [ESP + 0x134],EAX     ; 005865f4
    MOV dword ptr [ESP + 0x130],EBX     ; 005865fb
    LEA EDX,[EDI*0x4 + 0x0]             ; 00586602
        ;   Label: LAB_00586602
    MOV EAX,[0x006810c8]                ; 00586609 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x12c],EDX     ; 0058660e
    CMP dword ptr [EAX + 0x15acac],0x10 ; 00586615 | DAT_0326ef24
    JGE 0x00586881                      ; 0058661c
        ;   XREF to: 00586881 (CONDITIONAL_JUMP)  ; LAB_00586881
    MOV ECX,dword ptr [ESP + 0x134]     ; 00586622
    PUSH ECX                            ; 00586629
    PUSH EBP                            ; 0058662a
    PUSH 0x64958d                       ; 0058662b | = "%f,%s\n"
    PUSH ESI                            ; 00586630
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00586631
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x10                        ; 00586636
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00586639
    MOV dword ptr [EBX + EAX*0x1 + 0x1774],0x0 ; 00586640
    MOV EAX,dword ptr [ESP + 0x130]     ; 0058664b
        ;   Label: LAB_0058664b
    MOV EDX,dword ptr [ESP + 0x134]     ; 00586652
    ADD EBP,0x4                         ; 00586659
    INC EDI                             ; 0058665c
    ADD EDX,0x28                        ; 0058665d
    LEA ECX,[EAX + 0x4]                 ; 00586660
    MOV dword ptr [EAX + 0x1810],0x0    ; 00586663
    MOV dword ptr [ESP + 0x134],EDX     ; 0058666d
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 00586674
    MOV dword ptr [ESP + 0x130],ECX     ; 0058667a
    CMP EDI,EAX                         ; 00586681
    JL 0x00586602                       ; 00586683
        ;   XREF to: 00586602 (CONDITIONAL_JUMP)  ; LAB_00586602
    MOV EAX,[0x006810c8]                ; 00586689 | g_CDemonSetPtr
        ;   Label: LAB_00586689
    CMP dword ptr [EAX + 0x15acac],0xb  ; 0058668e | DAT_0326ef24
    JL 0x005866aa                       ; 00586695
        ;   XREF to: 005866aa (CONDITIONAL_JUMP)  ; LAB_005866aa
    PUSH ESI                            ; 00586697
    PUSH 0xff                           ; 00586698
    LEA EAX,[ESP + 0x8]                 ; 0058669d
    PUSH EAX                            ; 005866a1
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005866a2
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 005866a7
    LEA EAX,[EBX + 0x1890]              ; 005866aa
        ;   Label: LAB_005866aa
    PUSH EAX                            ; 005866b0
    PUSH 0x64959e                       ; 005866b1 | = "%d\n"
    PUSH ESI                            ; 005866b6
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005866b7
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EAX,[0x006810c8]                ; 005866bc | g_CDemonSetPtr
    MOV ECX,dword ptr [EAX + 0x15acac]  ; 005866c1 | DAT_0326ef24
    ADD ESP,0xc                         ; 005866c7
    CMP ECX,0x13                        ; 005866ca
    JL 0x005868ae                       ; 005866cd
        ;   XREF to: 005868ae (CONDITIONAL_JUMP)  ; LAB_005868ae
    PUSH ESI                            ; 005866d3
    PUSH 0xff                           ; 005866d4
    LEA EAX,[ESP + 0x8]                 ; 005866d9
    PUSH EAX                            ; 005866dd
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005866de
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 005866e3
    LEA EAX,[EBX + 0x1804]              ; 005866e6
    PUSH EAX                            ; 005866ec
    LEA EAX,[EBX + 0x1800]              ; 005866ed
    PUSH EAX                            ; 005866f3
    LEA EAX,[EBX + 0x17fc]              ; 005866f4
    PUSH EAX                            ; 005866fa
    LEA EAX,[EBX + 0x17f8]              ; 005866fb
    PUSH EAX                            ; 00586701
    LEA EAX,[EBX + 0x17f4]              ; 00586702
    PUSH EAX                            ; 00586708
    PUSH 0x6495a2                       ; 00586709 | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 0058670e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058670f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x1c                        ; 00586714
    MOV EAX,[0x006810c8]                ; 00586717 | g_CDemonSetPtr
        ;   Label: LAB_00586717
    CMP dword ptr [EAX + 0x15acac],0xb  ; 0058671c | DAT_0326ef24
    JL 0x00586738                       ; 00586723
        ;   XREF to: 00586738 (CONDITIONAL_JUMP)  ; LAB_00586738
    PUSH ESI                            ; 00586725
    PUSH 0xff                           ; 00586726
    LEA EAX,[ESP + 0x8]                 ; 0058672b
    PUSH EAX                            ; 0058672f
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00586730
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 00586735
    LEA EAX,[EBX + 0x11e4]              ; 00586738
        ;   Label: LAB_00586738
    PUSH EAX                            ; 0058673e
    LEA EAX,[EBX + 0x11e0]              ; 0058673f
    PUSH EAX                            ; 00586745
    PUSH 0x6495b2                       ; 00586746 | = "%f,%f\n"
    PUSH ESI                            ; 0058674b
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058674c
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x10                        ; 00586751
    PUSH ESI                            ; 00586754
    PUSH 0xff                           ; 00586755
    LEA EAX,[ESP + 0x8]                 ; 0058675a
    PUSH EAX                            ; 0058675e
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0058675f
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    MOV EBP,dword ptr [0x006810c8]      ; 00586764 | g_CDemonSetPtr
    MOV EAX,dword ptr [EBP + 0x15acac]  ; 0058676a | DAT_0326ef24
    ADD ESP,0xc                         ; 00586770
    CMP EAX,0xb                         ; 00586773
    JGE 0x00586942                      ; 00586776
        ;   XREF to: 00586942 (CONDITIONAL_JUMP)  ; LAB_00586942
    MOV ECX,dword ptr [EBP + 0x15acac]  ; 0058677c | DAT_0326ef24
    MOV EAX,0x64                        ; 00586782
    CMP ECX,0x7                         ; 00586787
    JL 0x0058679a                       ; 0058678a
        ;   XREF to: 0058679a (CONDITIONAL_JUMP)  ; LAB_0058679a
    CMP ECX,0x1a                        ; 0058678c
    JL 0x005868e5                       ; 0058678f
        ;   XREF to: 005868e5 (CONDITIONAL_JUMP)  ; LAB_005868e5
    MOV EAX,0xfa                        ; 00586795
    TEST EAX,EAX                        ; 0058679a
        ;   Label: LAB_0058679a
    JLE 0x00586813                      ; 0058679c
        ;   XREF to: 00586813 (CONDITIONAL_JUMP)  ; LAB_00586813
    LEA EDX,[EBX + 0x224]               ; 0058679e
    SHL EAX,0x4                         ; 005867a4
    XOR EDI,EDI                         ; 005867a7
    MOV EBP,EBX                         ; 005867a9
    MOV dword ptr [ESP + 0x128],EAX     ; 005867ab
    MOV dword ptr [ESP + 0x124],EDX     ; 005867b2
    MOV EAX,[0x006810c8]                ; 005867b9 | g_CDemonSetPtr
        ;   Label: LAB_005867b9
    CMP dword ptr [EAX + 0x15acac],0x2  ; 005867be | DAT_0326ef24
    JL 0x005868ef                       ; 005867c5
        ;   XREF to: 005868ef (CONDITIONAL_JUMP)  ; LAB_005868ef
    MOV EAX,dword ptr [ESP + 0x124]     ; 005867cb
    ADD EAX,EDI                         ; 005867d2
    LEA EDX,[EAX + 0xc]                 ; 005867d4
    PUSH EDX                            ; 005867d7
    LEA EDX,[EAX + 0x8]                 ; 005867d8
    PUSH EDX                            ; 005867db
    LEA EDX,[EAX + 0x4]                 ; 005867dc
    PUSH EDX                            ; 005867df
    PUSH EAX                            ; 005867e0
    LEA EAX,[ESP + 0x118]               ; 005867e1
    PUSH EAX                            ; 005867e8
    PUSH 0x6495bd                       ; 005867e9 | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 005867ee
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005867ef
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x1c                        ; 005867f4
    MOV AL,byte ptr [ESP + 0x108]       ; 005867f7
    MOV byte ptr [EBP + 0x128],AL       ; 005867fe
    MOV EAX,dword ptr [ESP + 0x128]     ; 00586804
        ;   Label: LAB_00586804
    ADD EDI,0x10                        ; 0058680b
    INC EBP                             ; 0058680e
    CMP EDI,EAX                         ; 0058680f
    JL 0x005867b9                       ; 00586811
        ;   XREF to: 005867b9 (CONDITIONAL_JUMP)  ; LAB_005867b9
    FLD float ptr [EBX + 0x11d4]        ; 00586813
        ;   Label: LAB_00586813
    FLD1                                ; 00586819
    FDIVRP                              ; 0058681b
    FLD float ptr [EBX + 0x11d4]        ; 0058681d
    FMUL ST0                            ; 00586823
    FSTP float ptr [EBX + 0x11d8]       ; 00586825
    FSTP float ptr [EBX + 0x11dc]       ; 0058682b
    ADD ESP,0x138                       ; 00586831
    POP EBP                             ; 00586837
    POP EDI                             ; 00586838
    POP ESI                             ; 00586839
    POP EBX                             ; 0058683a
    RET                                 ; 0058683b
    PUSH ESI                            ; 0058683c
        ;   Label: LAB_0058683c
    PUSH 0xff                           ; 0058683d
    LEA EAX,[ESP + 0x8]                 ; 00586842
    PUSH EAX                            ; 00586846
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00586847
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 0058684c
    JMP 0x0058633a                      ; 0058684f
        ;   XREF to: 0058633a (UNCONDITIONAL_JUMP)  ; LAB_0058633a
    MOV dword ptr [EBX + 0x120],0x3f800000 ; 00586854
        ;   Label: LAB_00586854
    JMP 0x0058644c                      ; 0058685e
        ;   XREF to: 0058644c (UNCONDITIONAL_JUMP)  ; LAB_0058644c
    MOV dword ptr [EBX + 0x124],0x3f800000 ; 00586863
        ;   Label: LAB_00586863
    JMP 0x00586486                      ; 0058686d
        ;   XREF to: 00586486 (UNCONDITIONAL_JUMP)  ; LAB_00586486
    MOV dword ptr [EBX + 0x11f0],0x1    ; 00586872
        ;   Label: LAB_00586872
    JMP 0x005865cb                      ; 0058687c
        ;   XREF to: 005865cb (UNCONDITIONAL_JUMP)  ; LAB_005865cb
    MOV ECX,dword ptr [ESP + 0x134]     ; 00586881
        ;   Label: LAB_00586881
    MOV EAX,dword ptr [ESP + 0x120]     ; 00586888
    MOV EDX,dword ptr [ESP + 0x12c]     ; 0058688f
    PUSH ECX                            ; 00586896
    ADD EAX,EDX                         ; 00586897
    PUSH EAX                            ; 00586899
    PUSH EBP                            ; 0058689a
    PUSH 0x649594                       ; 0058689b | = "%f,%d,%s\n"
    PUSH ESI                            ; 005868a0
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005868a1
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 005868a6
    JMP 0x0058664b                      ; 005868a9
        ;   XREF to: 0058664b (UNCONDITIONAL_JUMP)  ; LAB_0058664b
    MOV dword ptr [EBX + 0x17f8],0x0    ; 005868ae
        ;   Label: LAB_005868ae
    MOV dword ptr [EBX + 0x17fc],0x0    ; 005868b8
    MOV dword ptr [EBX + 0x1800],0x0    ; 005868c2
    MOV dword ptr [EBX + 0x1804],0x0    ; 005868cc
    MOV dword ptr [EBX + 0x17f4],0x0    ; 005868d6
    JMP 0x00586717                      ; 005868e0
        ;   XREF to: 00586717 (UNCONDITIONAL_JUMP)  ; LAB_00586717
    MOV EAX,0xc8                        ; 005868e5
        ;   Label: LAB_005868e5
    JMP 0x0058679a                      ; 005868ea
        ;   XREF to: 0058679a (UNCONDITIONAL_JUMP)  ; LAB_0058679a
    LEA EAX,[ESP + 0x104]               ; 005868ef
        ;   Label: LAB_005868ef
    PUSH EAX                            ; 005868f6
    PUSH 0x6495b9                       ; 005868f7 | = "%d\n"
    PUSH ESI                            ; 005868fc
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005868fd
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00586902
    MOV AL,byte ptr [ESP + 0x104]       ; 00586905
    MOV byte ptr [EBP + 0x128],AL       ; 0058690c
    LEA EAX,[EBX + EDI*0x1]             ; 00586912
    MOV dword ptr [EAX + 0x224],0x1     ; 00586915
    MOV dword ptr [EAX + 0x228],0x13e   ; 0058691f
    MOV dword ptr [EAX + 0x22c],0x1     ; 00586929
    MOV dword ptr [EAX + 0x230],0xee    ; 00586933
    JMP 0x00586804                      ; 0058693d
        ;   XREF to: 00586804 (UNCONDITIONAL_JUMP)  ; LAB_00586804
    PUSH 0xfa                           ; 00586942
        ;   Label: LAB_00586942
    PUSH 0x0                            ; 00586947
    LEA EAX,[EBX + 0x128]               ; 00586949
    PUSH EAX                            ; 0058694f
    CALL crt_memory.c_memset_FUN_005fde40 ; 00586950
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00586955
    PUSH 0xfa0                          ; 00586958
    PUSH 0x0                            ; 0058695d
    LEA EAX,[EBX + 0x224]               ; 0058695f
    PUSH EAX                            ; 00586965
    CALL crt_memory.c_memset_FUN_005fde40 ; 00586966
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0058696b
    LEA EAX,[ESP + 0x100]               ; 0058696e
    PUSH EAX                            ; 00586975
    PUSH 0x6495cd                       ; 00586976 | = "%d\n"
    PUSH ESI                            ; 0058697b
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058697c
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00586981
    MOV EDX,dword ptr [ESP + 0x100]     ; 00586984
    XOR EBP,EBP                         ; 0058698b
    TEST EDX,EDX                        ; 0058698d
    JLE 0x00586813                      ; 0058698f
        ;   XREF to: 00586813 (CONDITIONAL_JUMP)  ; LAB_00586813
    LEA EAX,[ESP + 0x11c]               ; 00586995
        ;   Label: LAB_00586995
    PUSH EAX                            ; 0058699c
    LEA EAX,[ESP + 0x118]               ; 0058699d
    PUSH EAX                            ; 005869a4
    LEA EAX,[ESP + 0x120]               ; 005869a5
    PUSH EAX                            ; 005869ac
    LEA EAX,[ESP + 0x11c]               ; 005869ad
    PUSH EAX                            ; 005869b4
    LEA EAX,[ESP + 0x11c]               ; 005869b5
    PUSH EAX                            ; 005869bc
    PUSH 0x6495d1                       ; 005869bd | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 005869c2
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005869c3
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x1c                        ; 005869c8
    CMP dword ptr [ESP + 0x10c],0xfa    ; 005869cb
    JGE 0x00586a64                      ; 005869d6
        ;   XREF to: 00586a64 (CONDITIONAL_JUMP)  ; LAB_00586a64
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005869dc
        ;   Label: LAB_005869dc
    MOV byte ptr [EBX + EAX*0x1 + 0x128],0x1 ; 005869e3
    MOV EDX,dword ptr [ESP + 0x10c]     ; 005869eb
    SHL EDX,0x4                         ; 005869f2
    MOV EAX,dword ptr [ESP + 0x110]     ; 005869f5
    MOV dword ptr [EDX + EBX*0x1 + 0x224],EAX ; 005869fc
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00586a03
    SHL EAX,0x4                         ; 00586a0a
    LEA EDX,[EBX + EAX*0x1]             ; 00586a0d
    MOV EAX,dword ptr [ESP + 0x118]     ; 00586a10
    MOV dword ptr [EDX + 0x228],EAX     ; 00586a17
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00586a1d
    SHL EAX,0x4                         ; 00586a24
    LEA EDX,[EBX + EAX*0x1]             ; 00586a27
    MOV EAX,dword ptr [ESP + 0x114]     ; 00586a2a
    MOV dword ptr [EDX + 0x22c],EAX     ; 00586a31
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00586a37
    SHL EAX,0x4                         ; 00586a3e
    LEA EDX,[EBX + EAX*0x1]             ; 00586a41
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00586a44
    MOV dword ptr [EDX + 0x230],EAX     ; 00586a4b
    INC EBP                             ; 00586a51
    CMP EBP,dword ptr [ESP + 0x100]     ; 00586a52
    JGE 0x00586813                      ; 00586a59
        ;   XREF to: 00586813 (CONDITIONAL_JUMP)  ; LAB_00586813
    JMP 0x00586995                      ; 00586a5f
        ;   XREF to: 00586995 (UNCONDITIONAL_JUMP)  ; LAB_00586995
    MOV EDX,0x6495e1                    ; 00586a64 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_00586a64
    MOV ECX,0x2d8                       ; 00586a69
    PUSH 0x6495f5                       ; 00586a6e | = "Invalid camera number in visiblilty l..."
    MOV dword ptr [0x02f0ca48],EDX      ; 00586a73 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00586a79 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00586a7f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00586a84
    JMP 0x005869dc                      ; 00586a87
        ;   XREF to: 005869dc (UNCONDITIONAL_JUMP)  ; LAB_005869dc

