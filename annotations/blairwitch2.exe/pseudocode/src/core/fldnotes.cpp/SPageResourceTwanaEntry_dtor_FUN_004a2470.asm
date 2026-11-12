; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceTwanaEntry * core_fldnotes_cpp_SPageResourceTwanaEntry_dtor_FUN_004a2470(SPageResourceTwanaEntry *this_ptr,uint flags)
;
; Parameters:
; SPageResourceTwanaEntry * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   void* g_SPageResourceTwanaEntryVTable = 004a2470
;   WatcomTypeInfo g_PageResource_TwanaEntryTypeInfo
;   undefined4 DAT_01cab780
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a66f0
;   core_fldnotes.cpp_SPageResource_dtor_FUN_004a1e90
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2470
        ;   Label: core_fldnotes.cpp_SPageResourceTwanaEntry_dtor_FUN_004a2470
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a2471
    TEST byte ptr [ESP + 0xc],0x4       ; 004a2475
    JNZ 0x004a24c6                      ; 004a247a
        ;   XREF to: 004a24c6 (CONDITIONAL_JUMP)  ; LAB_004a24c6
    MOV EDX,dword ptr [0x01cab780]      ; 004a247c | DAT_01cab780
    MOV dword ptr [EBX + 0x14],0x5f6f04 ; 004a2482 | g_SPageResourceTwanaEntryVTable
    CMP EBX,EDX                         ; 004a2489
    JNZ 0x004a2495                      ; 004a248b
        ;   XREF to: 004a2495 (CONDITIONAL_JUMP)  ; LAB_004a2495
    XOR ECX,ECX                         ; 004a248d
    MOV dword ptr [0x01cab780],ECX      ; 004a248f | DAT_01cab780
    PUSH 0x0                            ; 004a2495
        ;   Label: LAB_004a2495
    ADD EBX,0xd8                        ; 004a2497
    PUSH EBX                            ; 004a249d
    CALL core_fldnotes.cpp_FUN_004a66f0 ; 004a249e
        ;   XREF to: 004a66f0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a66f0()
    ADD ESP,0x8                         ; 004a24a3
    PUSH 0x1                            ; 004a24a6
    LEA EBX,[EAX + 0xffffff28]          ; 004a24a8
    PUSH EBX                            ; 004a24ae
    CALL core_fldnotes.cpp_SPageResource_dtor_FUN_004a1e90 ; 004a24af
        ;   XREF to: 004a1e90 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_SPageResource_dtor_FUN_004a1e90(SPageResource * this_ptr)
    ADD ESP,0x8                         ; 004a24b4
    MOV DL,byte ptr [ESP + 0xc]         ; 004a24b7
    MOV EBX,EAX                         ; 004a24bb
    TEST DL,0x2                         ; 004a24bd
    JNZ 0x004a24e1                      ; 004a24c0
        ;   XREF to: 004a24e1 (CONDITIONAL_JUMP)  ; LAB_004a24e1
    MOV EAX,EBX                         ; 004a24c2
    POP EBX                             ; 004a24c4
    RET                                 ; 004a24c5
    PUSH 0x5f7000                       ; 004a24c6 | g_PageResource_TwanaEntryTypeInfo
        ;   Label: LAB_004a24c6
    PUSH EBX                            ; 004a24cb
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004a24cc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a24d1
    PUSH EAX                            ; 004a24d4
    CALL crt_unknown.c_FUN_005b7fce     ; 004a24d5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004a24da
    MOV EAX,EBX                         ; 004a24dd
    POP EBX                             ; 004a24df
    RET                                 ; 004a24e0
    PUSH EAX                            ; 004a24e1
        ;   Label: LAB_004a24e1
    CALL crt_unknown.c_FUN_005b7fdc     ; 004a24e2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004a24e7
    MOV EAX,EBX                         ; 004a24ea
    POP EBX                             ; 004a24ec
    RET                                 ; 004a24ed

