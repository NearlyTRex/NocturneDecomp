; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SButtonStruct * __cdecl core_bmppuzzl_cpp_SButtonStruct_arrdtor30_FUN_0059bfc0(SButtonStruct *this_ptr,uint flags)
;
; Parameters:
; SButtonStruct *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_dtor_FUN_0059bec0 at 0059bed2
;
; Referenced Globals:
;   WatcomTypeInfo g___1hlg6hbuttonStructTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5fe5f0                       ; 0059bfc0 | g___1hlg6hbuttonStructTypeInfo
        ;   Label: core_bmppuzzl.cpp_SButtonStruct_arrdtor30_FUN_0059bfc0
    PUSH 0x1e                           ; 0059bfc5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059bfc7
    PUSH EDX                            ; 0059bfcb
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0059bfcc
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0059bfd1
    RET                                 ; 0059bfd4

