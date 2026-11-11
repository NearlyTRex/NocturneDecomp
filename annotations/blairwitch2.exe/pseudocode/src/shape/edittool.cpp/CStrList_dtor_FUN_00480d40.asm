; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStrList * __cdecl shape_edittool_cpp_CStrList_dtor_FUN_00480d40(CStrList *this_ptr,uint flags)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[6]:
;   core_fldnotes.cpp_SNotesEntry_dtor_FUN_004a32c0 at 004a32cc
;   core_script.cpp_CScript_dtor_FUN_00521600 at 00521614
;   shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047c760 at 0047c7dc
;   shape_edittool.cpp_CPickList_dtor_FUN_004820b0 at 00482104
;   shape_edittool.cpp_FUN_0047c7ee at 0047c86c
;   shape_edittool.cpp_FUN_0047c87e at 0047c926
;
; Referenced Globals:
;   undefined1* g_CStrListVTable = 00480d40
;   WatcomTypeInfo g_CStrListTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   shape_edittool.cpp_CStrList_clear_FUN_00480e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480d40
        ;   Label: shape_edittool.cpp_CStrList_dtor_FUN_00480d40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00480d41
    TEST byte ptr [ESP + 0xc],0x4       ; 00480d45
    JNZ 0x00480d67                      ; 00480d4a
        ;   XREF to: 00480d67 (CONDITIONAL_JUMP)  ; LAB_00480d67
    PUSH EBX                            ; 00480d4c
    MOV dword ptr [EBX + 0xc],0x5f5d14  ; 00480d4d | g_CStrListVTable
    CALL shape_edittool.cpp_CStrList_clear_FUN_00480e10 ; 00480d54
        ;   XREF to: 00480e10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_clear_FUN_00480e10(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00480d59
    TEST byte ptr [ESP + 0xc],0x2       ; 00480d5c
    JNZ 0x00480d82                      ; 00480d61
        ;   XREF to: 00480d82 (CONDITIONAL_JUMP)  ; LAB_00480d82
    MOV EAX,EBX                         ; 00480d63
    POP EBX                             ; 00480d65
    RET                                 ; 00480d66
    PUSH 0x5f5d90                       ; 00480d67 | g_CStrListTypeInfo
        ;   Label: LAB_00480d67
    PUSH EBX                            ; 00480d6c
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00480d6d
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00480d72
    PUSH EAX                            ; 00480d75
    CALL crt_unknown.c_FUN_005b7fce     ; 00480d76
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00480d7b
    MOV EAX,EBX                         ; 00480d7e
    POP EBX                             ; 00480d80
    RET                                 ; 00480d81
    PUSH EBX                            ; 00480d82
        ;   Label: LAB_00480d82
    CALL crt_unknown.c_FUN_005b7fdc     ; 00480d83
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00480d88
    MOV EAX,EBX                         ; 00480d8b
    POP EBX                             ; 00480d8d
    RET                                 ; 00480d8e

