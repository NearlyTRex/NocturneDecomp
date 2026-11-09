; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_CFileFinder_closeSearch_FUN_00479460(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_podmain.cpp_FUN_0053d580 at 0053d602
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00479340 at 00479346
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00479360 at 0047936f
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00499ed0 at 0049a078
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_0049a0d0 at 0049a277
;   shape_edittool.cpp_FUN_0049a300 at 0049a3a5
;   shape_edittool.cpp_FUN_0049a480 at 0049a580
;
; Referenced Globals:
;   void* PTR_FindClose_005d0554 = 001d0d5e
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_reset_FUN_004794a0
;   FindClose
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479460
        ;   Label: engine_dosio.cpp_CFileFinder_closeSearch_FUN_00479460
    MOV EBX,dword ptr [ESP + 0x8]       ; 00479461
    CMP dword ptr [EBX + 0x10c],0x0     ; 00479465
    JNZ 0x00479479                      ; 0047946c
        ;   XREF to: 00479479 (CONDITIONAL_JUMP)  ; LAB_00479479
    PUSH EBX                            ; 0047946e
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_004794a0 ; 0047946f
        ;   XREF to: 004794a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_004794a0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00479474
    POP EBX                             ; 00479477
    RET                                 ; 00479478
    MOV ECX,dword ptr [EBX + 0x110]     ; 00479479
        ;   Label: LAB_00479479
    PUSH ECX                            ; 0047947f
    CALL dword ptr CS:[0x5d0554]        ; 00479480 | PTR_FindClose_005d0554
    MOV dword ptr [EBX + 0x10c],0x0     ; 00479487
    PUSH EBX                            ; 00479491
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_004794a0 ; 00479492
        ;   XREF to: 004794a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_004794a0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00479497
    POP EBX                             ; 0047949a
    RET                                 ; 0047949b

