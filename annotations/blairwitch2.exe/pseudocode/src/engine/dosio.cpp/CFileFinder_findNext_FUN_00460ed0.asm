; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_cpp_CFileFinder_findNext_FUN_00460ed0(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_podmain.cpp_FUN_0051c000 at 0051c061
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00481870 at 004819fe
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00481a70 at 00481bfd
;   shape_edittool.cpp_FUN_0047cb1e at 0047cc31
;   shape_edittool.cpp_FUN_00481ca0 at 00481d34
;   shape_edittool.cpp_FUN_00481e20 at 00481f0f
;
; Referenced Globals:
;   void* PTR_FindNextFileA_005c854c = 001c8d54
;   TerminatedCString s_engine_dosio_c_005d0c5c
;   TerminatedCString s_CFileFinder_open_search_005d0c6e
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_dosio.cpp_CFileFinder_reset_FUN_00460f90
;   engine_dosio.cpp_FUN_00460fa0
;   FindNextFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460ed0
        ;   Label: engine_dosio.cpp_CFileFinder_findNext_FUN_00460ed0
    PUSH EDI                            ; 00460ed1
    SUB ESP,0x140                       ; 00460ed2
    MOV EBX,dword ptr [ESP + 0x14c]     ; 00460ed8
    CMP dword ptr [EBX + 0x10c],0x0     ; 00460edf
    JNZ 0x00460f0d                      ; 00460ee6
        ;   XREF to: 00460f0d (CONDITIONAL_JUMP)  ; LAB_00460f0d
    PUSH ESI                            ; 00460ee8
    MOV ECX,0x5d0c5c                    ; 00460ee9 | = "..\\engine\\dosio.c"
    MOV ESI,0x28e                       ; 00460eee
    PUSH 0x5d0c6e                       ; 00460ef3 | = "CFileFinder::open - search not opened!"
    MOV dword ptr [0x01d046a0],ECX      ; 00460ef8 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00460efe | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00460f04
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00460f09
    POP ESI                             ; 00460f0c
    MOV EAX,ESP                         ; 00460f0d
        ;   Label: LAB_00460f0d
    PUSH EAX                            ; 00460f0f
    MOV EDI,dword ptr [EBX + 0x110]     ; 00460f10
    PUSH EDI                            ; 00460f16
    CALL dword ptr CS:[0x5c854c]        ; 00460f17 | PTR_FindNextFileA_005c854c
    TEST EAX,EAX                        ; 00460f1e
    JZ 0x00460f3c                       ; 00460f20
        ;   XREF to: 00460f3c (CONDITIONAL_JUMP)  ; LAB_00460f3c
    MOV EAX,ESP                         ; 00460f22
    PUSH EAX                            ; 00460f24
    PUSH EBX                            ; 00460f25
    CALL engine_dosio.cpp_FUN_00460fa0  ; 00460f26
        ;   XREF to: 00460fa0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00460fa0()
    MOV EAX,0x1                         ; 00460f2b
    ADD ESP,0x8                         ; 00460f30
    ADD ESP,0x140                       ; 00460f33
    POP EDI                             ; 00460f39
    POP EBX                             ; 00460f3a
    RET                                 ; 00460f3b
    PUSH EBX                            ; 00460f3c
        ;   Label: LAB_00460f3c
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_00460f90 ; 00460f3d
        ;   XREF to: 00460f90 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_00460f90(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00460f42
    XOR EAX,EAX                         ; 00460f45
    ADD ESP,0x140                       ; 00460f47
    POP EDI                             ; 00460f4d
    POP EBX                             ; 00460f4e
    RET                                 ; 00460f4f

