; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_cpp_CFileFinder_openSearch_FUN_00460e50(CFileFinder *this_ptr,char *search_pattern)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   search_pattern
;
; XREF[6]:
;   core_podmain.cpp_CDemonPod_load_FUN_0051c000 at 0051c040
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00481870 at 004819c1
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00481a70 at 00481bb4
;   shape_edittool.cpp_FUN_0047cb20 at 0047cc09
;   shape_edittool.cpp_FUN_00481ca0 at 00481d0d
;   shape_edittool.cpp_FUN_00481e20 at 00481ef4
;
; Referenced Globals:
;   void* PTR_FindFirstFileA_005c8548 = 001c8d42
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00460f50
;   engine_dosio.cpp_CFileFinder_convertStruct_FUN_00460fa0
;   engine_dosio.cpp_CFileFinder_reset_FUN_00460f90
;   FindFirstFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460e50
        ;   Label: engine_dosio.cpp_CFileFinder_openSearch_FUN_00460e50
    SUB ESP,0x140                       ; 00460e51
    MOV EBX,dword ptr [ESP + 0x148]     ; 00460e57
    PUSH EBX                            ; 00460e5e
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00460f50 ; 00460e5f
        ;   XREF to: 00460f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_closeSearch_FUN_00460f50(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00460e64
    MOV EAX,ESP                         ; 00460e67
    PUSH EAX                            ; 00460e69
    MOV EDX,dword ptr [ESP + 0x150]     ; 00460e6a
    PUSH EDX                            ; 00460e71
    CALL dword ptr CS:[0x5c8548]        ; 00460e72 | PTR_FindFirstFileA_005c8548
    CMP EAX,-0x1                        ; 00460e79
    JNZ 0x00460e95                      ; 00460e7c
        ;   XREF to: 00460e95 (CONDITIONAL_JUMP)  ; LAB_00460e95
    CMP dword ptr [EBX + 0x10c],0x0     ; 00460e7e
    JZ 0x00460eb3                       ; 00460e85
        ;   XREF to: 00460eb3 (CONDITIONAL_JUMP)  ; LAB_00460eb3
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00460e87
        ;   Label: LAB_00460e87
    ADD ESP,0x140                       ; 00460e8d
    POP EBX                             ; 00460e93
    RET                                 ; 00460e94
    MOV dword ptr [EBX + 0x110],EAX     ; 00460e95
        ;   Label: LAB_00460e95
    MOV EAX,ESP                         ; 00460e9b
    PUSH EAX                            ; 00460e9d
    PUSH EBX                            ; 00460e9e
    CALL engine_dosio.cpp_CFileFinder_convertStruct_FUN_00460fa0 ; 00460e9f
        ;   XREF to: 00460fa0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_convertStruct_FUN_00460fa0(CFileFinder * this_ptr, byte * param_2)
    ADD ESP,0x8                         ; 00460ea4
    MOV dword ptr [EBX + 0x10c],0x1     ; 00460ea7
    JMP 0x00460e87                      ; 00460eb1
        ;   XREF to: 00460e87 (UNCONDITIONAL_JUMP)  ; LAB_00460e87
    PUSH EBX                            ; 00460eb3
        ;   Label: LAB_00460eb3
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_00460f90 ; 00460eb4
        ;   XREF to: 00460f90 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_00460f90(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00460eb9
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00460ebc
    ADD ESP,0x140                       ; 00460ec2
    POP EBX                             ; 00460ec8
    RET                                 ; 00460ec9

