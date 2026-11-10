; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorphModel * __cdecl core_morph_cpp_FUN_00523880(CMorphModel *this_ptr,uint flags)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_morph.cpp_CMorph_dtor_FUN_00522fc0 at 00522fd4
;
; Referenced Globals:
;   WatcomTypeInfo g_CMorphModelTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x604280                       ; 00523880 | g_CMorphModelTypeInfo
        ;   Label: core_morph.cpp_FUN_00523880
    PUSH 0x2                            ; 00523885
    MOV EDX,dword ptr [ESP + 0xc]       ; 00523887
    PUSH EDX                            ; 0052388b
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 0052388c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005c1066()
    ADD ESP,0xc                         ; 00523891
    RET                                 ; 00523894

