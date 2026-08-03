; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_cpp_CFileFinder_findNext_FUN_00456cc0(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_podmain.cpp_CDemonPod_load_FUN_004f92b0 at 004f9311
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004746b0 at 0047483e
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0 at 00474a3d
;   shape_edittool.cpp_FUN_00470730 at 00470841
;   shape_edittool.cpp_FUN_00474ae0 at 00474c48
;
; Referenced Globals:
;   void* PTR_FindNextFileA_005754d0 = 00175c0e
;   TerminatedCString s_engine_dosio_c_0057d2e8
;   TerminatedCString s_CFileFinder_open_search_0057d2fa
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   engine_dosio.cpp_CFileFinder_convertStruct_FUN_00456d90
;   engine_dosio.cpp_CFileFinder_reset_FUN_00456d80
;   FindNextFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456cc0
        ;   Label: engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0
    PUSH EDI                            ; 00456cc1
    SUB ESP,0x140                       ; 00456cc2
    MOV EBX,dword ptr [ESP + 0x14c]     ; 00456cc8
    CMP dword ptr [EBX + 0x10c],0x0     ; 00456ccf
    JNZ 0x00456cfd                      ; 00456cd6
        ;   XREF to: 00456cfd (CONDITIONAL_JUMP)  ; LAB_00456cfd
    PUSH ESI                            ; 00456cd8
    MOV ECX,0x57d2e8                    ; 00456cd9 | = "..\\engine\\dosio.c"
    MOV ESI,0x1c7                       ; 00456cde
    PUSH 0x57d2fa                       ; 00456ce3 | = "CFileFinder::open - search not opened!"
    MOV dword ptr [0x01cc4800],ECX      ; 00456ce8 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00456cee | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00456cf4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00456cf9
    POP ESI                             ; 00456cfc
    MOV EAX,ESP                         ; 00456cfd
        ;   Label: LAB_00456cfd
    PUSH EAX                            ; 00456cff
    MOV EDI,dword ptr [EBX + 0x110]     ; 00456d00
    PUSH EDI                            ; 00456d06
    CALL dword ptr CS:[0x5754d0]        ; 00456d07 | PTR_FindNextFileA_005754d0
    TEST EAX,EAX                        ; 00456d0e
    JZ 0x00456d2c                       ; 00456d10
        ;   XREF to: 00456d2c (CONDITIONAL_JUMP)  ; LAB_00456d2c
    MOV EAX,ESP                         ; 00456d12
    PUSH EAX                            ; 00456d14
    PUSH EBX                            ; 00456d15
    CALL engine_dosio.cpp_CFileFinder_convertStruct_FUN_00456d90 ; 00456d16
        ;   XREF to: 00456d90 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_convertStruct_FUN_00456d90(CFileFinder * finder, LPWIN32_FIND_DATAA find_data)
    MOV EAX,0x1                         ; 00456d1b
    ADD ESP,0x8                         ; 00456d20
    ADD ESP,0x140                       ; 00456d23
    POP EDI                             ; 00456d29
    POP EBX                             ; 00456d2a
    RET                                 ; 00456d2b
    PUSH EBX                            ; 00456d2c
        ;   Label: LAB_00456d2c
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_00456d80 ; 00456d2d
        ;   XREF to: 00456d80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_00456d80(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00456d32
    XOR EAX,EAX                         ; 00456d35
    ADD ESP,0x140                       ; 00456d37
    POP EDI                             ; 00456d3d
    POP EBX                             ; 00456d3e
    RET                                 ; 00456d3f

