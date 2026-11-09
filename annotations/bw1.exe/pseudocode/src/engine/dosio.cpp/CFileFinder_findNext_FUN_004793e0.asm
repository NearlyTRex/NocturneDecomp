; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_cpp_CFileFinder_findNext_FUN_004793e0(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_podmain.cpp_FUN_0053d580 at 0053d5f1
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00499ed0 at 0049a05e
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_0049a0d0 at 0049a25d
;   shape_edittool.cpp_FUN_0049517e at 00495291
;   shape_edittool.cpp_FUN_0049a300 at 0049a394
;   shape_edittool.cpp_FUN_0049a480 at 0049a56f
;
; Referenced Globals:
;   void* PTR_FindNextFileA_005d055c = 001d0d7c
;   TerminatedCString s_engine_dosio_c_005daa55
;   TerminatedCString s_CFileFinder_open_search_005daa67
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_dosio.cpp_CFileFinder_reset_FUN_004794a0
;   engine_dosio.cpp_FUN_004794b0
;   FindNextFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004793e0
        ;   Label: engine_dosio.cpp_CFileFinder_findNext_FUN_004793e0
    PUSH EDI                            ; 004793e1
    SUB ESP,0x140                       ; 004793e2
    MOV EBX,dword ptr [ESP + 0x14c]     ; 004793e8
    CMP dword ptr [EBX + 0x10c],0x0     ; 004793ef
    JNZ 0x0047941d                      ; 004793f6
        ;   XREF to: 0047941d (CONDITIONAL_JUMP)  ; LAB_0047941d
    PUSH ESI                            ; 004793f8
    MOV ECX,0x5daa55                    ; 004793f9 | = "..\\engine\\dosio.c"
    MOV ESI,0x28e                       ; 004793fe
    PUSH 0x5daa67                       ; 00479403 | = "CFileFinder::open - search not opened!"
    MOV dword ptr [0x01d1d400],ECX      ; 00479408 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0047940e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00479414
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00479419
    POP ESI                             ; 0047941c
    MOV EAX,ESP                         ; 0047941d
        ;   Label: LAB_0047941d
    PUSH EAX                            ; 0047941f
    MOV EDI,dword ptr [EBX + 0x110]     ; 00479420
    PUSH EDI                            ; 00479426
    CALL dword ptr CS:[0x5d055c]        ; 00479427 | PTR_FindNextFileA_005d055c
    TEST EAX,EAX                        ; 0047942e
    JZ 0x0047944c                       ; 00479430
        ;   XREF to: 0047944c (CONDITIONAL_JUMP)  ; LAB_0047944c
    MOV EAX,ESP                         ; 00479432
    PUSH EAX                            ; 00479434
    PUSH EBX                            ; 00479435
    CALL engine_dosio.cpp_FUN_004794b0  ; 00479436
        ;   XREF to: 004794b0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_004794b0()
    MOV EAX,0x1                         ; 0047943b
    ADD ESP,0x8                         ; 00479440
    ADD ESP,0x140                       ; 00479443
    POP EDI                             ; 00479449
    POP EBX                             ; 0047944a
    RET                                 ; 0047944b
    PUSH EBX                            ; 0047944c
        ;   Label: LAB_0047944c
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_004794a0 ; 0047944d
        ;   XREF to: 004794a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_004794a0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00479452
    XOR EAX,EAX                         ; 00479455
    ADD ESP,0x140                       ; 00479457
    POP EDI                             ; 0047945d
    POP EBX                             ; 0047945e
    RET                                 ; 0047945f

