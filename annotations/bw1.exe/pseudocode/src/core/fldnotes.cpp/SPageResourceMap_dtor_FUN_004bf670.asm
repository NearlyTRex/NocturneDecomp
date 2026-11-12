; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceMap * core_fldnotes_cpp_SPageResourceMap_dtor_FUN_004bf670(SPageResourceMap *this_ptr,uint flags)
;
; Parameters:
; SPageResourceMap * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_PageResource_MapTypeInfo
;
; Called Functions:
;   core_fldnotes.cpp_SPageResource_dtor_FUN_004ba760
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bf670
        ;   Label: core_fldnotes.cpp_SPageResourceMap_dtor_FUN_004bf670
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bf671
    TEST byte ptr [ESP + 0xc],0x4       ; 004bf675
    JNZ 0x004bf696                      ; 004bf67a
        ;   XREF to: 004bf696 (CONDITIONAL_JUMP)  ; LAB_004bf696
    PUSH 0x1                            ; 004bf67c
    PUSH EBX                            ; 004bf67e
    CALL core_fldnotes.cpp_SPageResource_dtor_FUN_004ba760 ; 004bf67f
        ;   XREF to: 004ba760 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_SPageResource_dtor_FUN_004ba760(SPageResource * this_ptr)
    ADD ESP,0x8                         ; 004bf684
    MOV DL,byte ptr [ESP + 0xc]         ; 004bf687
    MOV EBX,EAX                         ; 004bf68b
    TEST DL,0x2                         ; 004bf68d
    JNZ 0x004bf6b1                      ; 004bf690
        ;   XREF to: 004bf6b1 (CONDITIONAL_JUMP)  ; LAB_004bf6b1
    MOV EAX,EBX                         ; 004bf692
    POP EBX                             ; 004bf694
    RET                                 ; 004bf695
    PUSH 0x600a80                       ; 004bf696 | g_PageResource_MapTypeInfo
        ;   Label: LAB_004bf696
    PUSH EBX                            ; 004bf69b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004bf69c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004bf6a1
    PUSH EAX                            ; 004bf6a4
    CALL crt_unknown.c_FUN_005c0336     ; 004bf6a5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004bf6aa
    MOV EAX,EBX                         ; 004bf6ad
    POP EBX                             ; 004bf6af
    RET                                 ; 004bf6b0
    PUSH EAX                            ; 004bf6b1
        ;   Label: LAB_004bf6b1
    CALL crt_unknown.c_FUN_005c0344     ; 004bf6b2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004bf6b7
    MOV EAX,EBX                         ; 004bf6ba
    POP EBX                             ; 004bf6bc
    RET                                 ; 004bf6bd

