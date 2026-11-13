; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceText * __cdecl core_fldnotes_cpp_SPageResourceText_dtor_FUN_004a2000(SPageResourceText *this_ptr,uint flags)
;
; Parameters:
; SPageResourceText * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   void* g_SPageResourceTextVTable = 004a2000
;   WatcomTypeInfo g_PageResource_TextTypeInfo
;
; Called Functions:
;   core_fldnotes.cpp_SPageResource_dtor_FUN_004a1e90
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2000
        ;   Label: core_fldnotes.cpp_SPageResourceText_dtor_FUN_004a2000
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a2001
    TEST byte ptr [ESP + 0xc],0x4       ; 004a2005
    JNZ 0x004a202d                      ; 004a200a
        ;   XREF to: 004a202d (CONDITIONAL_JUMP)  ; LAB_004a202d
    PUSH 0x1                            ; 004a200c
    PUSH EBX                            ; 004a200e
    MOV dword ptr [EBX + 0x14],0x5f6ed4 ; 004a200f | g_SPageResourceTextVTable
    CALL core_fldnotes.cpp_SPageResource_dtor_FUN_004a1e90 ; 004a2016
        ;   XREF to: 004a1e90 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_SPageResource_dtor_FUN_004a1e90(SPageResource * this_ptr)
    ADD ESP,0x8                         ; 004a201b
    MOV DL,byte ptr [ESP + 0xc]         ; 004a201e
    MOV EBX,EAX                         ; 004a2022
    TEST DL,0x2                         ; 004a2024
    JNZ 0x004a2048                      ; 004a2027
        ;   XREF to: 004a2048 (CONDITIONAL_JUMP)  ; LAB_004a2048
    MOV EAX,EBX                         ; 004a2029
    POP EBX                             ; 004a202b
    RET                                 ; 004a202c
    PUSH 0x5f6fa0                       ; 004a202d | g_PageResource_TextTypeInfo
        ;   Label: LAB_004a202d
    PUSH EBX                            ; 004a2032
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004a2033
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a2038
    PUSH EAX                            ; 004a203b
    CALL crt_unknown.c_FUN_005b7fce     ; 004a203c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004a2041
    MOV EAX,EBX                         ; 004a2044
    POP EBX                             ; 004a2046
    RET                                 ; 004a2047
    PUSH EAX                            ; 004a2048
        ;   Label: LAB_004a2048
    CALL crt_unknown.c_FUN_005b7fdc     ; 004a2049
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004a204e
    MOV EAX,EBX                         ; 004a2051
    POP EBX                             ; 004a2053
    RET                                 ; 004a2054

