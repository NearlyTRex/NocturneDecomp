; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_memory_c_freeTypeArray_FUN_005feee9(void **obj_array,int obj_count,WatcomTypeInfo *type_info)
;
; Parameters:
; void * *         Stack[0x4]:4   obj_array
; int              Stack[0x8]:4   obj_count
; WatcomTypeInfo * Stack[0xc]:4   type_info
; Local Variables:
; WatcomTypeArrayInfo Stack[-0xc]:12  local_destroy_info
;
; XREF[90]:
;   core_actor.cpp_freeVectors_FUN_00410500 at 0041050c
;   core_backgnd.cpp_cleanupVector_FUN_004126e0 at 004126ec
;   core_backgnd.cpp_freeFires_FUN_00412700 at 0041270c
;   core_backgnd.cpp_freeFlames_FUN_00412720 at 0041272c
;   core_bodypart.cpp_freeBodyPartFires_FUN_0041b6b0 at 0041b6bc
;   core_bodypart.cpp_freeBodyPartModels_FUN_0041b690 at 0041b69c
;   core_boneguy.cpp_FUN_0041db30 at 0041db3c
;   core_box.cpp_freeScrapes_FUN_00420220 at 0042022c
;   core_boxactor.cpp_freeFilters_FUN_004236e0 at 004236ec
;   core_bugs.cpp_FUN_00427cc0 at 00427ccf
;   ... and 80 more
;
; Called Functions:
;   crt_memory.c_destroyTypeArray_FUN_005feeaf
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005feee9
        ;   Label: crt_memory.c_freeTypeArray_FUN_005feee9
    MOV EAX,dword ptr [ESP + 0x14]      ; 005feeec
    MOV dword ptr [ESP],EAX             ; 005feef0
    MOV EAX,dword ptr [ESP + 0x18]      ; 005feef3
    MOV dword ptr [ESP + 0x4],EAX       ; 005feef7
    MOV EAX,dword ptr [ESP + 0x10]      ; 005feefb
    MOV dword ptr [ESP + 0x8],EAX       ; 005feeff
    MOV EAX,ESP                         ; 005fef03
    PUSH EAX                            ; 005fef05
    CALL crt_memory.c_destroyTypeArray_FUN_005feeaf ; 005fef06
        ;   XREF to: 005feeaf (UNCONDITIONAL_CALL)  ; void * crt_memory.c_destroyTypeArray_FUN_005feeaf(WatcomTypeArrayInfo * destroy_info)
    ADD ESP,0x4                         ; 005fef0b
    MOV EAX,dword ptr [ESP + 0x10]      ; 005fef0e
    ADD ESP,0xc                         ; 005fef12
    RET                                 ; 005fef15

