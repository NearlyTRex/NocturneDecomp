; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SButtonStruct * __cdecl core_bmppuzzl_cpp_SButtonStruct_arrdtor50Chem_FUN_00418890(SButtonStruct *this_ptr,uint flags)
;
; Parameters:
; SButtonStruct *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_bmppuzzl.cpp_CChemPuzzle_dtor_FUN_00417630 at 00417648
;
; Referenced Globals:
;   undefined4 DAT_005fca90
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca90                       ; 00418890 | DAT_005fca90
        ;   Label: core_bmppuzzl.cpp_SButtonStruct_arrdtor50Chem_FUN_00418890
    PUSH 0x32                           ; 00418895
    MOV EDX,dword ptr [ESP + 0xc]       ; 00418897
    PUSH EDX                            ; 0041889b
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 0041889c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004188a1
    RET                                 ; 004188a4

