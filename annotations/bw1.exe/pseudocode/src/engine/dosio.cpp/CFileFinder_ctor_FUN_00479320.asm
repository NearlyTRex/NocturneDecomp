; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_ctor_FUN_00479320(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_podmain.cpp_FUN_0053d580 at 0053d5b0
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00499ed0 at 0049a009
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_0049a0d0 at 0049a1fc
;   shape_edittool.cpp_FUN_0049517e at 0049523c
;   shape_edittool.cpp_FUN_0049a300 at 0049a358
;   shape_edittool.cpp_FUN_0049a480 at 0049a53f
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_reset_FUN_004794a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479320
        ;   Label: engine_dosio.cpp_CFileFinder_ctor_FUN_00479320
    MOV EBX,dword ptr [ESP + 0x8]       ; 00479321
    PUSH EBX                            ; 00479325
    MOV dword ptr [EBX + 0x10c],0x0     ; 00479326
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_004794a0 ; 00479330
        ;   XREF to: 004794a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_004794a0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00479335
    MOV EAX,EBX                         ; 00479338
    POP EBX                             ; 0047933a
    RET                                 ; 0047933b

