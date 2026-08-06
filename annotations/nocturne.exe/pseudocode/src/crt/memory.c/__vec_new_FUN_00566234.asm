; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c___vec_new_FUN_00566234(void *array_memory,int element_count,WatcomTypeInfo *type_info)
;
; Parameters:
; void *           Stack[0x4]:4   array_memory
; int              Stack[0x8]:4   element_count
; WatcomTypeInfo * Stack[0xc]:4   type_info
;
; XREF[4]:
;   cockpit_pkbitmap.cpp_CPackedBitmapSet_FUN_004f4f90 at 004f5068
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_004f5350 at 004f539c
;   core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00467330 at 00467366
;   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00517ec0 at 00517f81
;
; Called Functions:
;   crt_unknown.c___vec_new_FUN_005661f4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566234
        ;   Label: crt_memory.c___vec_new_FUN_00566234
    MOV EDX,dword ptr [ESP + 0x10]      ; 00566235
    PUSH EDX                            ; 00566239
    MOV ECX,dword ptr [ESP + 0x10]      ; 0056623a
    PUSH ECX                            ; 0056623e
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056623f
    PUSH EBX                            ; 00566243
    CALL crt_unknown.c___vec_new_FUN_005661f4 ; 00566244
        ;   XREF to: 005661f4 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c___vec_new_FUN_005661f4(void * dest, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00566249
    POP EBX                             ; 0056624c
    RET                                 ; 0056624d

