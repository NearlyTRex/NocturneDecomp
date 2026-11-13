; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00517640(CPackedBitmapSet *this_ptr)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00517710 at 0051772a
;   cockpit_pkbmpset.cpp_FUN_00517670 at 00517687
;   cockpit_pkbmpset.cpp_FUN_005177e0 at 005177f9
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517640
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00517640
    MOV EBX,dword ptr [ESP + 0x8]       ; 00517641
    PUSH 0x5fac10                       ; 00517645
    MOV EDX,dword ptr [EBX + 0x4]       ; 0051764a
    PUSH EDX                            ; 0051764d
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0051764e
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00517653
    PUSH EAX                            ; 00517656
    CALL crt_unknown.c_FUN_005b7fce     ; 00517657
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    MOV dword ptr [EBX],0x0             ; 0051765c
    ADD ESP,0x4                         ; 00517662
    MOV dword ptr [EBX + 0x4],0x0       ; 00517665
    POP EBX                             ; 0051766c
    RET                                 ; 0051766d

