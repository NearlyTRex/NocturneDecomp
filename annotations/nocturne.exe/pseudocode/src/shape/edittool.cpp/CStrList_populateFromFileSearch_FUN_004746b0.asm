; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004746b0(CStrList *this_ptr,char *directory_path,char *file_pattern)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   directory_path
; char *           Stack[0xc]:4   file_pattern
; Local Variables:
; undefined1       Stack[-0x844]:1  local_844
; undefined        Stack[-0x744]:1  local_744
; undefined4       Stack[-0x640]:4  local_640
; undefined4       Stack[-0x638]:4  local_638
; undefined        Stack[-0x528]:1  local_528
; undefined4       Stack[-0x424]:4  local_424
; undefined4       Stack[-0x420]:4  local_420
; undefined        Stack[-0x414]:1  local_414
; undefined        Stack[-0x310]:1  local_310
; undefined1       Stack[-0x30f]:1  local_30f
; undefined        Stack[-0x210]:1  local_210
; undefined        Stack[-0x20f]:1  local_20f
; undefined        Stack[-0x110]:1  local_110
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550 at 00470589
;
; Referenced Globals:
;   TerminatedCString s_s_s_0057ee13
;   CPod* g_CPod_PTR_005be1cc = 01e528d0
;
; Called Functions:
;   crt_file.c_makepath_FUN_0056626c
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_string.c_memmove_FUN_00566170
;   crt_string.c_splitpath_FUN_00566498
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40
;   engine_pod.cpp_CPod_getNextSearchResult_FUN_004f8da0
;   engine_pod.cpp_CPod_initSearch_FUN_004f8d50
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00474460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004746b0
        ;   Label: shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004746b0
    PUSH ESI                            ; 004746b1
    PUSH EDI                            ; 004746b2
    PUSH EBP                            ; 004746b3
    SUB ESP,0x834                       ; 004746b4
    MOV EBX,dword ptr [ESP + 0x848]     ; 004746ba
    MOV ESI,dword ptr [ESP + 0x84c]     ; 004746c1
    MOV EDI,dword ptr [ESP + 0x850]     ; 004746c8
    TEST ESI,ESI                        ; 004746cf
    JZ 0x0047487d                       ; 004746d1
        ;   XREF to: 0047487d (CONDITIONAL_JUMP)  ; LAB_0047487d
    CMP byte ptr [ESI],0x0              ; 004746d7
    JZ 0x0047487d                       ; 004746da
        ;   XREF to: 0047487d (CONDITIONAL_JUMP)  ; LAB_0047487d
    PUSH EDI                            ; 004746e0
    PUSH ESI                            ; 004746e1
    PUSH 0x57ee13                       ; 004746e2 | = "%s\\%s"
    LEA ECX,[ESP + 0x540]               ; 004746e7
    PUSH ECX                            ; 004746ee
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004746ef
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 004746f4
    MOV EDX,dword ptr [0x005be1cc]      ; 004746f7 | g_CPod_PTR_005be1cc
        ;   Label: LAB_004746f7
    TEST EDX,EDX                        ; 004746fd
    JZ 0x004747e1                       ; 004746ff
        ;   XREF to: 004747e1 (CONDITIONAL_JUMP)  ; LAB_004747e1
    MOV ECX,ESP                         ; 00474705
    PUSH ECX                            ; 00474707
    LEA ECX,[ESP + 0x538]               ; 00474708
    PUSH ECX                            ; 0047470f
    PUSH EDX                            ; 00474710
    CALL engine_pod.cpp_CPod_initSearch_FUN_004f8d50 ; 00474711
        ;   XREF to: 004f8d50 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_initSearch_FUN_004f8d50(CPod * this_ptr, char * search_pattern, CPodSearchContext * search_context)
    ADD ESP,0xc                         ; 00474716
    CMP byte ptr [ESP],0x0              ; 00474719
    JZ 0x004747e1                       ; 0047471d
        ;   XREF to: 004747e1 (CONDITIONAL_JUMP)  ; LAB_004747e1
    LEA ECX,[ESP + 0x634]               ; 00474723
        ;   Label: LAB_00474723
    PUSH ECX                            ; 0047472a
    LEA ECX,[ESP + 0x738]               ; 0047472b
    PUSH ECX                            ; 00474732
    PUSH 0x0                            ; 00474733
    PUSH 0x0                            ; 00474735
    LEA ECX,[ESP + 0x10]                ; 00474737
    PUSH ECX                            ; 0047473b
    CALL crt_string.c_splitpath_FUN_00566498 ; 0047473c
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_00566498(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00474741
    CMP byte ptr [ESP + 0x634],0x2e     ; 00474744
    JNZ 0x00474778                      ; 0047474c
        ;   XREF to: 00474778 (CONDITIONAL_JUMP)  ; LAB_00474778
    LEA EDI,[ESP + 0x634]               ; 0047474e
    SUB ECX,ECX                         ; 00474755
    DEC ECX                             ; 00474757
    XOR EAX,EAX                         ; 00474758
    SCASB.REPNE ES:EDI                  ; 0047475a
    NOT ECX                             ; 0047475c
    DEC ECX                             ; 0047475e
    PUSH ECX                            ; 0047475f
    LEA ECX,[ESP + 0x639]               ; 00474760
    PUSH ECX                            ; 00474767
    LEA ECX,[ESP + 0x63c]               ; 00474768
    PUSH ECX                            ; 0047476f
    CALL crt_string.c_memmove_FUN_00566170 ; 00474770
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00474775
    LEA ECX,[ESP + 0x634]               ; 00474778
        ;   Label: LAB_00474778
    PUSH ECX                            ; 0047477f
    LEA ECX,[ESP + 0x738]               ; 00474780
    PUSH ECX                            ; 00474787
    PUSH 0x0                            ; 00474788
    PUSH 0x0                            ; 0047478a
    LEA ECX,[ESP + 0x440]               ; 0047478c
    PUSH ECX                            ; 00474793
    CALL crt_file.c_makepath_FUN_0056626c ; 00474794
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_0056626c(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00474799
    MOV ESI,dword ptr [ESP + 0x20c]     ; 0047479c
    PUSH ESI                            ; 004747a3
    MOV EDI,dword ptr [ESP + 0x208]     ; 004747a4
    PUSH EDI                            ; 004747ab
    LEA ECX,[ESP + 0x108]               ; 004747ac
    PUSH ECX                            ; 004747b3
    LEA ECX,[ESP + 0x43c]               ; 004747b4
    PUSH ECX                            ; 004747bb
    PUSH EBX                            ; 004747bc
    CALL shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00474460 ; 004747bd
        ;   XREF to: 00474460 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00474460(CStrList * this_ptr, char * search_key, char * file_path, int file_size, ...)
    ADD ESP,0x14                        ; 004747c2
    MOV ECX,ESP                         ; 004747c5
    PUSH ECX                            ; 004747c7
    MOV EBP,dword ptr [0x005be1cc]      ; 004747c8 | g_CPod_PTR_005be1cc
    PUSH EBP                            ; 004747ce
    CALL engine_pod.cpp_CPod_getNextSearchResult_FUN_004f8da0 ; 004747cf
        ;   XREF to: 004f8da0 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPod_getNextSearchResult_FUN_004f8da0(CPod * this_ptr, CPodSearchContext * search_context)
    ADD ESP,0x8                         ; 004747d4
    CMP byte ptr [ESP],0x0              ; 004747d7
    JNZ 0x00474723                      ; 004747db
        ;   XREF to: 00474723 (CONDITIONAL_JUMP)  ; LAB_00474723
    LEA ECX,[ESP + 0x31c]               ; 004747e1
        ;   Label: LAB_004747e1
    PUSH ECX                            ; 004747e8
    CALL engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00 ; 004747e9
        ;   XREF to: 00456c00 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004747ee
    LEA ECX,[ESP + 0x534]               ; 004747f1
    PUSH ECX                            ; 004747f8
    LEA ECX,[ESP + 0x320]               ; 004747f9
    PUSH ECX                            ; 00474800
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40 ; 00474801
        ;   XREF to: 00456c40 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 00474806
    CMP byte ptr [ESP + 0x31c],0x0      ; 00474809
    JZ 0x00474850                       ; 00474811
        ;   XREF to: 00474850 (CONDITIONAL_JUMP)  ; LAB_00474850
    MOV EAX,dword ptr [ESP + 0x424]     ; 00474813
        ;   Label: LAB_00474813
    PUSH EAX                            ; 0047481a
    MOV EDX,dword ptr [ESP + 0x424]     ; 0047481b
    PUSH EDX                            ; 00474822
    PUSH 0x0                            ; 00474823
    LEA ECX,[ESP + 0x328]               ; 00474825
    PUSH ECX                            ; 0047482c
    PUSH EBX                            ; 0047482d
    CALL shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00474460 ; 0047482e
        ;   XREF to: 00474460 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00474460(CStrList * this_ptr, char * search_key, char * file_path, int file_size, ...)
    ADD ESP,0x14                        ; 00474833
    LEA ECX,[ESP + 0x31c]               ; 00474836
    PUSH ECX                            ; 0047483d
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0 ; 0047483e
        ;   XREF to: 00456cc0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00474843
    CMP byte ptr [ESP + 0x31c],0x0      ; 00474846
    JNZ 0x00474813                      ; 0047484e
        ;   XREF to: 00474813 (CONDITIONAL_JUMP)  ; LAB_00474813
    LEA ECX,[ESP + 0x31c]               ; 00474850
        ;   Label: LAB_00474850
    PUSH ECX                            ; 00474857
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40 ; 00474858
        ;   XREF to: 00456d40 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 0047485d
    PUSH 0x0                            ; 00474860
    LEA ECX,[ESP + 0x320]               ; 00474862
    PUSH ECX                            ; 00474869
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20 ; 0047486a
        ;   XREF to: 00456c20 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047486f
    ADD ESP,0x834                       ; 00474872
    POP EBP                             ; 00474878
    POP EDI                             ; 00474879
    POP ESI                             ; 0047487a
    POP EBX                             ; 0047487b
    RET                                 ; 0047487c
    MOV ESI,EDI                         ; 0047487d
        ;   Label: LAB_0047487d
    LEA EDI,[ESP + 0x534]               ; 0047487f
    PUSH EDI                            ; 00474886
    MOV AL,byte ptr [ESI]               ; 00474887
        ;   Label: LAB_00474887
    MOV byte ptr [EDI],AL               ; 00474889
    CMP AL,0x0                          ; 0047488b
    JZ 0x0047489f                       ; 0047488d
        ;   XREF to: 0047489f (CONDITIONAL_JUMP)  ; LAB_0047489f
    MOV AL,byte ptr [ESI + 0x1]         ; 0047488f
    ADD ESI,0x2                         ; 00474892
    MOV byte ptr [EDI + 0x1],AL         ; 00474895
    ADD EDI,0x2                         ; 00474898
    CMP AL,0x0                          ; 0047489b
    JNZ 0x00474887                      ; 0047489d
        ;   XREF to: 00474887 (CONDITIONAL_JUMP)  ; LAB_00474887
    POP EDI                             ; 0047489f
        ;   Label: LAB_0047489f
    JMP 0x004746f7                      ; 004748a0
        ;   XREF to: 004746f7 (UNCONDITIONAL_JUMP)  ; LAB_004746f7

