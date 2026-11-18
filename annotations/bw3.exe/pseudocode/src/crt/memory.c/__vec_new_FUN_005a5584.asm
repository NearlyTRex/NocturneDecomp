; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c___vec_new_FUN_005a5584(void *array_memory,int element_count,WatcomTypeInfo *type_info)
;
; Parameters:
; void *           Stack[0x4]:4   array_memory
; int              Stack[0x8]:4   element_count
; WatcomTypeInfo * Stack[0xc]:4   type_info
;
; XREF[4]:
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_005102b0 at 00510389
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_005106a0 at 005106ec
;   core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_004735c0 at 004735f6
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230 at 0047d2c9
;
; Called Functions:
;   crt_unknown.c_FUN_005a5544
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5584
        ;   Label: crt_memory.c___vec_new_FUN_005a5584
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a5585
    PUSH EDX                            ; 005a5589
    MOV ECX,dword ptr [ESP + 0x10]      ; 005a558a
    PUSH ECX                            ; 005a558e
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a558f
    PUSH EBX                            ; 005a5593
    CALL crt_unknown.c_FUN_005a5544     ; 005a5594
        ;   XREF to: 005a5544 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5544()
    ADD ESP,0xc                         ; 005a5599
    POP EBX                             ; 005a559c
    RET                                 ; 005a559d

