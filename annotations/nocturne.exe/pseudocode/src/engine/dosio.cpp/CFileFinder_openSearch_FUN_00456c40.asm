; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(int param_1,LPCSTR param_2)
;
;
; XREF[6]:
;   core_podmain.cpp_CDemonPod_load_FUN_004f92b0 at 004f92f0
;   engine_dosio.cpp_FUN_004569a0 at 004569df
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004746b0 at 00474801
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0 at 004749f4
;   shape_edittool.cpp_FUN_00470730 at 00470819
;   shape_edittool.cpp_FUN_00474ae0 at 00474bb4
;
; Referenced Globals:
;   void* PTR_FindFirstFileA_005754cc = 00175bfc
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40
;   engine_dosio.cpp_CFileFinder_convertStruct_FUN_00456d90
;   engine_dosio.cpp_CFileFinder_reset_FUN_00456d80
;   FindFirstFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456c40
        ;   Label: engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40
    SUB ESP,0x140                       ; 00456c41
    MOV EBX,dword ptr [ESP + 0x148]     ; 00456c47
    PUSH EBX                            ; 00456c4e
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40 ; 00456c4f
        ;   XREF to: 00456d40 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40()
    ADD ESP,0x4                         ; 00456c54
    MOV EAX,ESP                         ; 00456c57
    PUSH EAX                            ; 00456c59
    MOV EDX,dword ptr [ESP + 0x150]     ; 00456c5a
    PUSH EDX                            ; 00456c61
    CALL dword ptr CS:[0x5754cc]        ; 00456c62 | PTR_FindFirstFileA_005754cc
    CMP EAX,-0x1                        ; 00456c69
    JNZ 0x00456c85                      ; 00456c6c
        ;   XREF to: 00456c85 (CONDITIONAL_JUMP)  ; LAB_00456c85
    CMP dword ptr [EBX + 0x10c],0x0     ; 00456c6e
    JZ 0x00456ca3                       ; 00456c75
        ;   XREF to: 00456ca3 (CONDITIONAL_JUMP)  ; LAB_00456ca3
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00456c77
        ;   Label: LAB_00456c77
    ADD ESP,0x140                       ; 00456c7d
    POP EBX                             ; 00456c83
    RET                                 ; 00456c84
    MOV dword ptr [EBX + 0x110],EAX     ; 00456c85
        ;   Label: LAB_00456c85
    MOV EAX,ESP                         ; 00456c8b
    PUSH EAX                            ; 00456c8d
    PUSH EBX                            ; 00456c8e
    CALL engine_dosio.cpp_CFileFinder_convertStruct_FUN_00456d90 ; 00456c8f
        ;   XREF to: 00456d90 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_convertStruct_FUN_00456d90()
    ADD ESP,0x8                         ; 00456c94
    MOV dword ptr [EBX + 0x10c],0x1     ; 00456c97
    JMP 0x00456c77                      ; 00456ca1
        ;   XREF to: 00456c77 (UNCONDITIONAL_JUMP)  ; LAB_00456c77
    PUSH EBX                            ; 00456ca3
        ;   Label: LAB_00456ca3
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_00456d80 ; 00456ca4
        ;   XREF to: 00456d80 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_reset_FUN_00456d80()
    ADD ESP,0x4                         ; 00456ca9
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00456cac
    ADD ESP,0x140                       ; 00456cb2
    POP EBX                             ; 00456cb8
    RET                                 ; 00456cb9

