; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStrList * __cdecl shape_edittool_cpp_CStrList_dtor_FUN_004993a0(CStrList *this_ptr,uint flags)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[6]:
;   core_fldnotes.cpp_SNotesEntry_dtor_FUN_004bbcf0 at 004bbcfc
;   core_script.cpp_CScript_dtor_FUN_00543710 at 00543724
;   shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_00494d20 at 00494dbf
;   shape_edittool.cpp_CPickList_dtor_FUN_0049a710 at 0049a764
;   shape_edittool.cpp_FUN_00494de0 at 00494e7f
;   shape_edittool.cpp_FUN_00494ea0 at 00494f6f
;
; Referenced Globals:
;   undefined1* g_CStrListVTable = 004993a0
;   WatcomTypeInfo g_CStrListTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   shape_edittool.cpp_CStrList_clear_FUN_00499470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004993a0
        ;   Label: shape_edittool.cpp_CStrList_dtor_FUN_004993a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004993a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004993a5
    JNZ 0x004993c7                      ; 004993aa
        ;   XREF to: 004993c7 (CONDITIONAL_JUMP)  ; LAB_004993c7
    PUSH EBX                            ; 004993ac
    MOV dword ptr [EBX + 0xc],0x5ff814  ; 004993ad | g_CStrListVTable
    CALL shape_edittool.cpp_CStrList_clear_FUN_00499470 ; 004993b4
        ;   XREF to: 00499470 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_clear_FUN_00499470(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004993b9
    TEST byte ptr [ESP + 0xc],0x2       ; 004993bc
    JNZ 0x004993e2                      ; 004993c1
        ;   XREF to: 004993e2 (CONDITIONAL_JUMP)  ; LAB_004993e2
    MOV EAX,EBX                         ; 004993c3
    POP EBX                             ; 004993c5
    RET                                 ; 004993c6
    PUSH 0x5ff890                       ; 004993c7 | g_CStrListTypeInfo
        ;   Label: LAB_004993c7
    PUSH EBX                            ; 004993cc
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004993cd
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004993d2
    PUSH EAX                            ; 004993d5
    CALL crt_unknown.c_FUN_005c0336     ; 004993d6
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004993db
    MOV EAX,EBX                         ; 004993de
    POP EBX                             ; 004993e0
    RET                                 ; 004993e1
    PUSH EBX                            ; 004993e2
        ;   Label: LAB_004993e2
    CALL crt_unknown.c_FUN_005c0344     ; 004993e3
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004993e8
    MOV EAX,EBX                         ; 004993eb
    POP EBX                             ; 004993ed
    RET                                 ; 004993ee

