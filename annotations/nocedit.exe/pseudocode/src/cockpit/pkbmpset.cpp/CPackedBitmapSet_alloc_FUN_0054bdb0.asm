; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_0054bdb0(CPackedBitmapSet *this_ptr,int bitmap_count)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bitmap_count
; Local Variables:
; undefined        Stack[-0xd0]:1  local_d0
;
; XREF[3]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70 at 0054bea2
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 at 0054c016
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0 at 0054c404
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbmpset_cpp_0063f3b6
;   TerminatedCString s_Unable_to_allocate_u_byt_0063f3ce
;   TerminatedCString s_cockpit_pkbmpset_cpp_0063f41b
;   WatcomTypeInfo g_CPackedBitmapTypeInfo
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c___vec_new_FUN_00601272
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054bdb0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
    PUSH ESI                            ; 0054bdb1
    SUB ESP,0xc8                        ; 0054bdb2
    MOV ESI,dword ptr [ESP + 0xd4]      ; 0054bdb8
    MOV EBX,dword ptr [ESP + 0xd8]      ; 0054bdbf
    PUSH ESI                            ; 0054bdc6
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60 ; 0054bdc7
        ;   XREF to: 0054bd60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 0054bdcc
    TEST EBX,EBX                        ; 0054bdcf
    JG 0x0054bddc                       ; 0054bdd1
        ;   XREF to: 0054bddc (CONDITIONAL_JUMP)  ; LAB_0054bddc
    ADD ESP,0xc8                        ; 0054bdd3
    POP ESI                             ; 0054bdd9
    POP EBX                             ; 0054bdda
    RET                                 ; 0054bddb
    PUSH 0x662260                       ; 0054bddc | g_CPackedBitmapTypeInfo
        ;   Label: LAB_0054bddc
    PUSH EBX                            ; 0054bde1
    LEA EAX,[EBX*0x8 + 0x0]             ; 0054bde2
    ADD EAX,EBX                         ; 0054bde9
    PUSH 0x64                           ; 0054bdeb
    SHL EAX,0x2                         ; 0054bded
    PUSH 0x63f3b6                       ; 0054bdf0 | = "..\\cockpit\\pkbmpset.cpp"
    ADD EAX,0x4                         ; 0054bdf5
    PUSH EAX                            ; 0054bdf8
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0054bdf9
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0054bdfe
    PUSH EAX                            ; 0054be01
    CALL crt_memory.c___vec_new_FUN_00601272 ; 0054be02
        ;   XREF to: 00601272 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_new_FUN_00601272(void * array_memory, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0054be07
    TEST EAX,EAX                        ; 0054be0a
    MOV dword ptr [ESI + 0x4],EAX       ; 0054be0c
    JNZ 0x0054be56                      ; 0054be0f
        ;   XREF to: 0054be56 (CONDITIONAL_JUMP)  ; LAB_0054be56
    PUSH EDI                            ; 0054be11
    PUSH EBX                            ; 0054be12
    LEA EAX,[EBX*0x8 + 0x0]             ; 0054be13
    ADD EAX,EBX                         ; 0054be1a
    SHL EAX,0x2                         ; 0054be1c
    PUSH EAX                            ; 0054be1f
    PUSH 0x63f3ce                       ; 0054be20 | = "Unable to allocate %u bytes for %u CP..."
    LEA EAX,[ESP + 0x10]                ; 0054be25
    PUSH EAX                            ; 0054be29
    MOV EDI,0x6c                        ; 0054be2a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0054be2f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0054be34
    LEA EAX,[ESP + 0x4]                 ; 0054be37
    MOV ECX,0x63f41b                    ; 0054be3b | = "..\\cockpit\\pkbmpset.cpp"
    PUSH EAX                            ; 0054be40
    MOV dword ptr [0x02f0ca4c],EDI      ; 0054be41 | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 0054be47 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054be4d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054be52
    POP EDI                             ; 0054be55
    MOV dword ptr [ESI],EBX             ; 0054be56
        ;   Label: LAB_0054be56
    ADD ESP,0xc8                        ; 0054be58
    POP ESI                             ; 0054be5e
    POP EBX                             ; 0054be5f
    RET                                 ; 0054be60

