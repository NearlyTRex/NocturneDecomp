; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceMap * __cdecl core_fldnotes_cpp_SPageResourceMap_dtor_FUN_004a66a0(SPageResourceMap *this_ptr,uint flags)
;
; Parameters:
; SPageResourceMap * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_PageResource_MapTypeInfo
;
; Called Functions:
;   core_fldnotes.cpp_SPageResource_dtor_FUN_004a1e90
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a66a0
        ;   Label: core_fldnotes.cpp_SPageResourceMap_dtor_FUN_004a66a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a66a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004a66a5
    JNZ 0x004a66c6                      ; 004a66aa
        ;   XREF to: 004a66c6 (CONDITIONAL_JUMP)  ; LAB_004a66c6
    PUSH 0x1                            ; 004a66ac
    PUSH EBX                            ; 004a66ae
    CALL core_fldnotes.cpp_SPageResource_dtor_FUN_004a1e90 ; 004a66af
        ;   XREF to: 004a1e90 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_SPageResource_dtor_FUN_004a1e90(SPageResource * this_ptr)
    ADD ESP,0x8                         ; 004a66b4
    MOV DL,byte ptr [ESP + 0xc]         ; 004a66b7
    MOV EBX,EAX                         ; 004a66bb
    TEST DL,0x2                         ; 004a66bd
    JNZ 0x004a66e1                      ; 004a66c0
        ;   XREF to: 004a66e1 (CONDITIONAL_JUMP)  ; LAB_004a66e1
    MOV EAX,EBX                         ; 004a66c2
    POP EBX                             ; 004a66c4
    RET                                 ; 004a66c5
    PUSH 0x5f7040                       ; 004a66c6 | g_PageResource_MapTypeInfo
        ;   Label: LAB_004a66c6
    PUSH EBX                            ; 004a66cb
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004a66cc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a66d1
    PUSH EAX                            ; 004a66d4
    CALL crt_unknown.c_FUN_005b7fce     ; 004a66d5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004a66da
    MOV EAX,EBX                         ; 004a66dd
    POP EBX                             ; 004a66df
    RET                                 ; 004a66e0
    PUSH EAX                            ; 004a66e1
        ;   Label: LAB_004a66e1
    CALL crt_unknown.c_FUN_005b7fdc     ; 004a66e2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004a66e7
    MOV EAX,EBX                         ; 004a66ea
    POP EBX                             ; 004a66ec
    RET                                 ; 004a66ed

