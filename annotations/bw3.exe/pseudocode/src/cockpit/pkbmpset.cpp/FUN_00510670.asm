; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbmpset_cpp_FUN_00510670(undefined4 *param_1)
;
;
; XREF[3]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00510740 at 0051075a
;   cockpit_pkbmpset.cpp_FUN_005106a0 at 005106b7
;   cockpit_pkbmpset.cpp_FUN_0051080e at 00510829
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510670
        ;   Label: cockpit_pkbmpset.cpp_FUN_00510670
    MOV EBX,dword ptr [ESP + 0x8]       ; 00510671
    PUSH 0x5e32c0                       ; 00510675
    MOV EDX,dword ptr [EBX + 0x4]       ; 0051067a
    PUSH EDX                            ; 0051067d
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0051067e
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00510683
    PUSH EAX                            ; 00510686
    CALL crt_unknown.c_FUN_005a30b6     ; 00510687
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    MOV dword ptr [EBX],0x0             ; 0051068c
    ADD ESP,0x4                         ; 00510692
    MOV dword ptr [EBX + 0x4],0x0       ; 00510695
    POP EBX                             ; 0051069c
    RET                                 ; 0051069d

