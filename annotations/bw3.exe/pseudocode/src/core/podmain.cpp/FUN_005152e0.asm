; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_podmain_cpp_FUN_005152e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005cca00
;   TerminatedCString s_pod_ini_005cca03
;   TerminatedCString s_pod_005cca0b
;   TerminatedCString s_core_podmain_cpp_005cca11
;   TerminatedCString s_Can_t_mount_s_s_005cca25
;   undefined4 DAT_005cca38
;   undefined4 DAT_005cca3c
;   TerminatedCString s_core_podmain_cpp_005cca40
;   TerminatedCString s_Can_t_mount_s_s_005cca54
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fopen_FUN_005a43ec
;   crt_stdio.c_fscanf_FUN_005a3230
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00465b60
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005152e0
        ;   Label: core_podmain.cpp_FUN_005152e0
    PUSH ESI                            ; 005152e1
    PUSH EDI                            ; 005152e2
    PUSH EBP                            ; 005152e3
    SUB ESP,0x318                       ; 005152e4
    MOV EBX,dword ptr [ESP + 0x32c]     ; 005152ea
    PUSH 0x5cca00                       ; 005152f1 | DAT_005cca00
    PUSH 0x5cca03                       ; 005152f6 | = "pod.ini"
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 005152fb
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    ADD ESP,0x8                         ; 00515300
    MOV EDI,EAX                         ; 00515303
    TEST EAX,EAX                        ; 00515305
    JNZ 0x005153b6                      ; 00515307
        ;   XREF to: 005153b6 (CONDITIONAL_JUMP)  ; LAB_005153b6
    MOV EAX,ESP                         ; 0051530d
    PUSH EAX                            ; 0051530f
    CALL engine_dosio.cpp_CFileFinder_ctor_FUN_00465b60 ; 00515310
        ;   XREF to: 00465b60 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_ctor_FUN_00465b60(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00515315
    PUSH 0x5cca0b                       ; 00515318 | = "*.pod"
    LEA EAX,[ESP + 0x4]                 ; 0051531d
    PUSH EAX                            ; 00515321
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0 ; 00515322
        ;   XREF to: 00465ba0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 00515327
    CMP byte ptr [ESP],0x0              ; 0051532a
    JZ 0x0051535f                       ; 0051532e
        ;   XREF to: 0051535f (CONDITIONAL_JUMP)  ; LAB_0051535f
    LEA ESI,[ESP + 0x214]               ; 00515330
        ;   Label: LAB_00515330
    PUSH ESI                            ; 00515337
    LEA ESI,[ESP + 0x4]                 ; 00515338
    PUSH ESI                            ; 0051533c
    MOV EAX,dword ptr [EBX + 0x194]     ; 0051533d
    PUSH EBX                            ; 00515343
    CALL dword ptr [EAX + 0xc]          ; 00515344
    ADD ESP,0xc                         ; 00515347
    TEST EAX,EAX                        ; 0051534a
    JZ 0x00515384                       ; 0051534c
        ;   XREF to: 00515384 (CONDITIONAL_JUMP)  ; LAB_00515384
    MOV EAX,ESP                         ; 0051534e
        ;   Label: LAB_0051534e
    PUSH EAX                            ; 00515350
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20 ; 00515351
        ;   XREF to: 00465c20 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00515356
    CMP byte ptr [ESP],0x0              ; 00515359
    JNZ 0x00515330                      ; 0051535d
        ;   XREF to: 00515330 (CONDITIONAL_JUMP)  ; LAB_00515330
    MOV EAX,ESP                         ; 0051535f
        ;   Label: LAB_0051535f
    PUSH EAX                            ; 00515361
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0 ; 00515362
        ;   XREF to: 00465ca0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00515367
    PUSH 0x0                            ; 0051536a
    LEA EAX,[ESP + 0x4]                 ; 0051536c
    PUSH EAX                            ; 00515370
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80 ; 00515371
        ;   XREF to: 00465b80 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00515376
    ADD ESP,0x318                       ; 00515379
    POP EBP                             ; 0051537f
    POP EDI                             ; 00515380
    POP ESI                             ; 00515381
    POP EBX                             ; 00515382
    RET                                 ; 00515383
    LEA EAX,[ESP + 0x214]               ; 00515384
        ;   Label: LAB_00515384
    PUSH EAX                            ; 0051538b
    LEA EAX,[ESP + 0x4]                 ; 0051538c
    PUSH EAX                            ; 00515390
    MOV EDX,0x5cca11                    ; 00515391 | = "..\\core\\podmain.cpp"
    MOV ECX,0x39                        ; 00515396
    PUSH 0x5cca25                       ; 0051539b | = "Can't mount %s: %s"
    MOV dword ptr [0x01d71de0],EDX      ; 005153a0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 005153a6 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005153ac
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 005153b1
    JMP 0x0051534e                      ; 005153b4
        ;   XREF to: 0051534e (UNCONDITIONAL_JUMP)  ; LAB_0051534e
    LEA EDX,[ESP + 0x314]               ; 005153b6
        ;   Label: LAB_005153b6
    PUSH EDX                            ; 005153bd
    PUSH 0x5cca38                       ; 005153be | DAT_005cca38
    PUSH EAX                            ; 005153c3
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 005153c4
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 005153c9
    MOV EDX,dword ptr [ESP + 0x314]     ; 005153cc
    XOR ESI,ESI                         ; 005153d3
    TEST EDX,EDX                        ; 005153d5
    JLE 0x00515421                      ; 005153d7
        ;   XREF to: 00515421 (CONDITIONAL_JUMP)  ; LAB_00515421
    MOV EBP,0x5cca40                    ; 005153d9 | = "..\\core\\podmain.cpp"
    LEA EAX,[ESP + 0x114]               ; 005153de
        ;   Label: LAB_005153de
    PUSH EAX                            ; 005153e5
    PUSH 0x5cca3c                       ; 005153e6 | DAT_005cca3c
    PUSH EDI                            ; 005153eb
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 005153ec
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 005153f1
    LEA EAX,[ESP + 0x214]               ; 005153f4
    PUSH EAX                            ; 005153fb
    LEA EAX,[ESP + 0x118]               ; 005153fc
    PUSH EAX                            ; 00515403
    MOV EDX,dword ptr [EBX + 0x194]     ; 00515404
    PUSH EBX                            ; 0051540a
    CALL dword ptr [EDX + 0xc]          ; 0051540b
    ADD ESP,0xc                         ; 0051540e
    TEST EAX,EAX                        ; 00515411
    JZ 0x00515435                       ; 00515413
        ;   XREF to: 00515435 (CONDITIONAL_JUMP)  ; LAB_00515435
    MOV ECX,dword ptr [ESP + 0x314]     ; 00515415
        ;   Label: LAB_00515415
    INC ESI                             ; 0051541c
    CMP ESI,ECX                         ; 0051541d
    JL 0x005153de                       ; 0051541f
        ;   XREF to: 005153de (CONDITIONAL_JUMP)  ; LAB_005153de
    PUSH EDI                            ; 00515421
        ;   Label: LAB_00515421
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00515422
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00515427
    ADD ESP,0x318                       ; 0051542a
    POP EBP                             ; 00515430
    POP EDI                             ; 00515431
    POP ESI                             ; 00515432
    POP EBX                             ; 00515433
    RET                                 ; 00515434
    MOV dword ptr [0x01d71de4],0x45     ; 00515435 | DAT_01d71de4
        ;   Label: LAB_00515435
    LEA EAX,[ESP + 0x214]               ; 0051543f
    PUSH EAX                            ; 00515446
    LEA EAX,[ESP + 0x118]               ; 00515447
    PUSH EAX                            ; 0051544e
    PUSH 0x5cca54                       ; 0051544f | = "Can't mount %s: %s"
    MOV dword ptr [0x01d71de0],EBP      ; 00515454 | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 0051545a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 0051545f
    JMP 0x00515415                      ; 00515462
        ;   XREF to: 00515415 (UNCONDITIONAL_JUMP)  ; LAB_00515415

