; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_podmain_cpp_CDemonPod_load_FUN_004f92b0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x170]:1  local_170
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_rt_0058dced
;   TerminatedCString s_pod_ini_0058dcf0
;   TerminatedCString s_pod_0058dcf8
;   TerminatedCString s_d_0058dcfe
;   TerminatedCString s_s_0058dd02
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_fscanf_FUN_00563350
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f92b0
        ;   Label: core_podmain.cpp_CDemonPod_load_FUN_004f92b0
    PUSH EDI                            ; 004f92b1
    SUB ESP,0x168                       ; 004f92b2
    MOV EBX,dword ptr [ESP + 0x174]     ; 004f92b8
    PUSH 0x58dced                       ; 004f92bf | = "rt"
    PUSH 0x58dcf0                       ; 004f92c4 | = "pod.ini"
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004f92c9
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004f92ce
    MOV EDI,EAX                         ; 004f92d1
    TEST EAX,EAX                        ; 004f92d3
    JNZ 0x004f9343                      ; 004f92d5
        ;   XREF to: 004f9343 (CONDITIONAL_JUMP)  ; LAB_004f9343
    MOV EAX,ESP                         ; 004f92db
    PUSH EAX                            ; 004f92dd
    CALL engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00 ; 004f92de
        ;   XREF to: 00456c00 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004f92e3
    PUSH 0x58dcf8                       ; 004f92e6 | = "*.pod"
    LEA EAX,[ESP + 0x4]                 ; 004f92eb
    PUSH EAX                            ; 004f92ef
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40 ; 004f92f0
        ;   XREF to: 00456c40 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 004f92f5
    CMP byte ptr [ESP],0x0              ; 004f92f8
    JZ 0x004f9320                       ; 004f92fc
        ;   XREF to: 004f9320 (CONDITIONAL_JUMP)  ; LAB_004f9320
    MOV EDX,ESP                         ; 004f92fe
        ;   Label: LAB_004f92fe
    PUSH EDX                            ; 004f9300
    MOV EAX,dword ptr [EBX + 0x194]     ; 004f9301
    PUSH EBX                            ; 004f9307
    CALL dword ptr [EAX + 0xc]          ; 004f9308
    ADD ESP,0x8                         ; 004f930b
    MOV EAX,ESP                         ; 004f930e
    PUSH EAX                            ; 004f9310
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0 ; 004f9311
        ;   XREF to: 00456cc0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004f9316
    CMP byte ptr [ESP],0x0              ; 004f9319
    JNZ 0x004f92fe                      ; 004f931d
        ;   XREF to: 004f92fe (CONDITIONAL_JUMP)  ; LAB_004f92fe
    NOP                                 ; 004f931f
    MOV EAX,ESP                         ; 004f9320
        ;   Label: LAB_004f9320
    PUSH EAX                            ; 004f9322
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40 ; 004f9323
        ;   XREF to: 00456d40 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004f9328
    PUSH 0x0                            ; 004f932b
    LEA EAX,[ESP + 0x4]                 ; 004f932d
    PUSH EAX                            ; 004f9331
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20 ; 004f9332
        ;   XREF to: 00456c20 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f9337
    ADD ESP,0x168                       ; 004f933a
    POP EDI                             ; 004f9340
    POP EBX                             ; 004f9341
    RET                                 ; 004f9342
    PUSH ESI                            ; 004f9343
        ;   Label: LAB_004f9343
    LEA EDX,[ESP + 0x168]               ; 004f9344
    PUSH EDX                            ; 004f934b
    PUSH 0x58dcfe                       ; 004f934c | = "%d\n"
    PUSH EAX                            ; 004f9351
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004f9352
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 004f9357
    MOV EDX,dword ptr [ESP + 0x168]     ; 004f935a
    XOR ESI,ESI                         ; 004f9361
    TEST EDX,EDX                        ; 004f9363
    JLE 0x004f93a0                      ; 004f9365
        ;   XREF to: 004f93a0 (CONDITIONAL_JUMP)  ; LAB_004f93a0
    LEA EAX,[ESP + 0x118]               ; 004f9367
        ;   Label: LAB_004f9367
    PUSH EAX                            ; 004f936e
    PUSH 0x58dd02                       ; 004f936f | = "%s\n"
    PUSH EDI                            ; 004f9374
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004f9375
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 004f937a
    LEA EAX,[ESP + 0x118]               ; 004f937d
    PUSH EAX                            ; 004f9384
    MOV EDX,dword ptr [EBX + 0x194]     ; 004f9385
    PUSH EBX                            ; 004f938b
    CALL dword ptr [EDX + 0xc]          ; 004f938c
    ADD ESP,0x8                         ; 004f938f
    INC ESI                             ; 004f9392
    CMP ESI,dword ptr [ESP + 0x168]     ; 004f9393
    JL 0x004f9367                       ; 004f939a
        ;   XREF to: 004f9367 (CONDITIONAL_JUMP)  ; LAB_004f9367
    LEA EAX,[EAX]                       ; 004f939c
    PUSH EDI                            ; 004f93a0
        ;   Label: LAB_004f93a0
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f93a1
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004f93a6
    POP ESI                             ; 004f93a9
    ADD ESP,0x168                       ; 004f93aa
    POP EDI                             ; 004f93b0
    POP EBX                             ; 004f93b1
    RET                                 ; 004f93b2

