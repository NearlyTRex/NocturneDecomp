; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceTwanaEntry * __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_dtor_FUN_004a8980(SPageResourceTwanaEntry *this_ptr,uint flags)
;
; Parameters:
; SPageResourceTwanaEntry * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   void* g_SPageResourceTwanaEntryVTable = 004a8980
;   WatcomTypeInfo g_PageResource_TwanaEntryTypeInfo
;   undefined4 DAT_01d0cfa0
;
; Called Functions:
;   core_fldnotes.cpp_CAlphaBitmap_arrdtor3_FUN_004ad410
;   core_fldnotes.cpp_SPageResource_dtor_FUN_004a83a0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8980
        ;   Label: core_fldnotes.cpp_SPageResourceTwanaEntry_dtor_FUN_004a8980
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a8981
    TEST byte ptr [ESP + 0xc],0x4       ; 004a8985
    JNZ 0x004a89d6                      ; 004a898a
        ;   XREF to: 004a89d6 (CONDITIONAL_JUMP)  ; LAB_004a89d6
    MOV EDX,dword ptr [0x01d0cfa0]      ; 004a898c | DAT_01d0cfa0
    MOV dword ptr [EBX + 0x14],0x5e02c4 ; 004a8992 | g_SPageResourceTwanaEntryVTable
    CMP EBX,EDX                         ; 004a8999
    JNZ 0x004a89a5                      ; 004a899b
        ;   XREF to: 004a89a5 (CONDITIONAL_JUMP)  ; LAB_004a89a5
    XOR ECX,ECX                         ; 004a899d
    MOV dword ptr [0x01d0cfa0],ECX      ; 004a899f | DAT_01d0cfa0
    PUSH 0x0                            ; 004a89a5
        ;   Label: LAB_004a89a5
    ADD EBX,0xdc                        ; 004a89a7
    PUSH EBX                            ; 004a89ad
    CALL core_fldnotes.cpp_CAlphaBitmap_arrdtor3_FUN_004ad410 ; 004a89ae
        ;   XREF to: 004ad410 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * core_fldnotes.cpp_CAlphaBitmap_arrdtor3_FUN_004ad410(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a89b3
    PUSH 0x1                            ; 004a89b6
    LEA EBX,[EAX + 0xffffff24]          ; 004a89b8
    PUSH EBX                            ; 004a89be
    CALL core_fldnotes.cpp_SPageResource_dtor_FUN_004a83a0 ; 004a89bf
        ;   XREF to: 004a83a0 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_SPageResource_dtor_FUN_004a83a0(SPageResource * this_ptr)
    ADD ESP,0x8                         ; 004a89c4
    MOV DL,byte ptr [ESP + 0xc]         ; 004a89c7
    MOV EBX,EAX                         ; 004a89cb
    TEST DL,0x2                         ; 004a89cd
    JNZ 0x004a89f1                      ; 004a89d0
        ;   XREF to: 004a89f1 (CONDITIONAL_JUMP)  ; LAB_004a89f1
    MOV EAX,EBX                         ; 004a89d2
    POP EBX                             ; 004a89d4
    RET                                 ; 004a89d5
    PUSH 0x5e03a0                       ; 004a89d6 | g_PageResource_TwanaEntryTypeInfo
        ;   Label: LAB_004a89d6
    PUSH EBX                            ; 004a89db
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004a89dc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a89e1
    PUSH EAX                            ; 004a89e4
    CALL crt_unknown.c_FUN_005a30b6     ; 004a89e5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004a89ea
    MOV EAX,EBX                         ; 004a89ed
    POP EBX                             ; 004a89ef
    RET                                 ; 004a89f0
    PUSH EAX                            ; 004a89f1
        ;   Label: LAB_004a89f1
    CALL crt_unknown.c_FUN_005a30c4     ; 004a89f2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004a89f7
    MOV EAX,EBX                         ; 004a89fa
    POP EBX                             ; 004a89fc
    RET                                 ; 004a89fd

