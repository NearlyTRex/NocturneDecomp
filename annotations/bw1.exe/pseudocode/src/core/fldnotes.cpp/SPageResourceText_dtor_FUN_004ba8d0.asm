; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceText * core_fldnotes_cpp_SPageResourceText_dtor_FUN_004ba8d0(SPageResourceText *this_ptr,uint flags)
;
; Parameters:
; SPageResourceText * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   void* g_SPageResourceTextVTable = 004ba8d0
;   WatcomTypeInfo g_PageResource_TextTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   unkaddr_004b9ab0.cpp_SPageResource_dtor_FUN_004ba760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba8d0
        ;   Label: core_fldnotes.cpp_SPageResourceText_dtor_FUN_004ba8d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ba8d1
    TEST byte ptr [ESP + 0xc],0x4       ; 004ba8d5
    JNZ 0x004ba8fd                      ; 004ba8da
        ;   XREF to: 004ba8fd (CONDITIONAL_JUMP)  ; LAB_004ba8fd
    PUSH 0x1                            ; 004ba8dc
    PUSH EBX                            ; 004ba8de
    MOV dword ptr [EBX + 0x14],0x600934 ; 004ba8df | g_SPageResourceTextVTable
    CALL unkaddr_004b9ab0.cpp_SPageResource_dtor_FUN_004ba760 ; 004ba8e6
        ;   XREF to: 004ba760 (UNCONDITIONAL_CALL)  ; int unkaddr_004b9ab0.cpp_SPageResource_dtor_FUN_004ba760(SPageResource * this_ptr)
    ADD ESP,0x8                         ; 004ba8eb
    MOV DL,byte ptr [ESP + 0xc]         ; 004ba8ee
    MOV EBX,EAX                         ; 004ba8f2
    TEST DL,0x2                         ; 004ba8f4
    JNZ 0x004ba918                      ; 004ba8f7
        ;   XREF to: 004ba918 (CONDITIONAL_JUMP)  ; LAB_004ba918
    MOV EAX,EBX                         ; 004ba8f9
    POP EBX                             ; 004ba8fb
    RET                                 ; 004ba8fc
    PUSH 0x6009e0                       ; 004ba8fd | g_PageResource_TextTypeInfo
        ;   Label: LAB_004ba8fd
    PUSH EBX                            ; 004ba902
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004ba903
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004ba908
    PUSH EAX                            ; 004ba90b
    CALL crt_unknown.c_FUN_005c0336     ; 004ba90c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004ba911
    MOV EAX,EBX                         ; 004ba914
    POP EBX                             ; 004ba916
    RET                                 ; 004ba917
    PUSH EAX                            ; 004ba918
        ;   Label: LAB_004ba918
    CALL crt_unknown.c_FUN_005c0344     ; 004ba919
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004ba91e
    MOV EAX,EBX                         ; 004ba921
    POP EBX                             ; 004ba923
    RET                                 ; 004ba924

