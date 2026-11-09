; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_cpp_CFileFinder_openSearch_FUN_00465ba0(CFileFinder *this_ptr,char *search_pattern)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   search_pattern
;
; XREF[6]:
;   core_podmain.cpp_FUN_005152e0 at 00515322
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00482a70 at 00482bc1
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00482c70 at 00482db4
;   shape_edittool.cpp_FUN_0047dd1e at 0047de09
;   shape_edittool.cpp_FUN_00482ea0 at 00482f0d
;   shape_edittool.cpp_FUN_00483020 at 004830f4
;
; Referenced Globals:
;   void* PTR_FindFirstFileA_005b3558 = 001b3d70
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0
;   engine_dosio.cpp_CFileFinder_convertStruct_FUN_00465cf0
;   engine_dosio.cpp_CFileFinder_reset_FUN_00465ce0
;   FindFirstFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465ba0
        ;   Label: engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0
    SUB ESP,0x140                       ; 00465ba1
    MOV EBX,dword ptr [ESP + 0x148]     ; 00465ba7
    PUSH EBX                            ; 00465bae
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0 ; 00465baf
        ;   XREF to: 00465ca0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00465bb4
    MOV EAX,ESP                         ; 00465bb7
    PUSH EAX                            ; 00465bb9
    MOV EDX,dword ptr [ESP + 0x150]     ; 00465bba
    PUSH EDX                            ; 00465bc1
    CALL dword ptr CS:[0x5b3558]        ; 00465bc2 | PTR_FindFirstFileA_005b3558
    CMP EAX,-0x1                        ; 00465bc9
    JNZ 0x00465be5                      ; 00465bcc
        ;   XREF to: 00465be5 (CONDITIONAL_JUMP)  ; LAB_00465be5
    CMP dword ptr [EBX + 0x10c],0x0     ; 00465bce
    JZ 0x00465c03                       ; 00465bd5
        ;   XREF to: 00465c03 (CONDITIONAL_JUMP)  ; LAB_00465c03
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00465bd7
        ;   Label: LAB_00465bd7
    ADD ESP,0x140                       ; 00465bdd
    POP EBX                             ; 00465be3
    RET                                 ; 00465be4
    MOV dword ptr [EBX + 0x110],EAX     ; 00465be5
        ;   Label: LAB_00465be5
    MOV EAX,ESP                         ; 00465beb
    PUSH EAX                            ; 00465bed
    PUSH EBX                            ; 00465bee
    CALL engine_dosio.cpp_CFileFinder_convertStruct_FUN_00465cf0 ; 00465bef
        ;   XREF to: 00465cf0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_convertStruct_FUN_00465cf0(CFileFinder * this_ptr, LPWIN32_FIND_DATAA find_data)
    ADD ESP,0x8                         ; 00465bf4
    MOV dword ptr [EBX + 0x10c],0x1     ; 00465bf7
    JMP 0x00465bd7                      ; 00465c01
        ;   XREF to: 00465bd7 (UNCONDITIONAL_JUMP)  ; LAB_00465bd7
    PUSH EBX                            ; 00465c03
        ;   Label: LAB_00465c03
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_00465ce0 ; 00465c04
        ;   XREF to: 00465ce0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_00465ce0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00465c09
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00465c0c
    ADD ESP,0x140                       ; 00465c12
    POP EBX                             ; 00465c18
    RET                                 ; 00465c19

