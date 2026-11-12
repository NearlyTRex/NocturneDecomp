; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceTwanaEntry * core_fldnotes_cpp_SPageResourceTwanaEntry_ctor_FUN_004a88d0(SPageResourceTwanaEntry *this_ptr)
;
; Parameters:
; SPageResourceTwanaEntry * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_handleTag_FUN_004a9330 at 004a9665
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005c0d9f
;   TerminatedCString s_Can_t_have_more_than_one_005c0db4
;   WatcomTypeInfo g_CAlphaBitmapTypeInfo
;   void* g_SPageResourceTwanaEntryVTable = 004a8980
;   undefined4 DAT_01d0cfa0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_fldnotes.cpp_SPageResource_ctor_FUN_004a8370
;   core_main.c_FUN_004e4330
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a88d0
        ;   Label: core_fldnotes.cpp_SPageResourceTwanaEntry_ctor_FUN_004a88d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a88d1
    PUSH EBX                            ; 004a88d5
    CALL core_fldnotes.cpp_SPageResource_ctor_FUN_004a8370 ; 004a88d6
        ;   XREF to: 004a8370 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SPageResource_ctor_FUN_004a8370(SPageResource * this_ptr)
    ADD ESP,0x4                         ; 004a88db
    PUSH 0x5dbf20                       ; 004a88de | g_CAlphaBitmapTypeInfo
    PUSH 0x3                            ; 004a88e3
    ADD EAX,0xdc                        ; 004a88e5
    PUSH EAX                            ; 004a88ea
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004a88eb
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 004a88f0
    PUSH 0x60                           ; 004a88f3
    LEA EBX,[EAX + 0xffffff24]          ; 004a88f5
    PUSH 0x0                            ; 004a88fb
    LEA EAX,[EBX + 0x18]                ; 004a88fd
    PUSH EAX                            ; 004a8900
    MOV dword ptr [EBX + 0x14],0x5e02c4 ; 004a8901 | g_SPageResourceTwanaEntryVTable
    CALL crt_memory.c_memset_FUN_005a28f0 ; 004a8908
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004a890d
    PUSH 0x60                           ; 004a8910
    PUSH 0x0                            ; 004a8912
    LEA EAX,[EBX + 0x7c]                ; 004a8914
    PUSH EAX                            ; 004a8917
    CALL crt_memory.c_memset_FUN_005a28f0 ; 004a8918
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0x78],0x0      ; 004a891d
    MOV EDX,dword ptr [0x01d0cfa0]      ; 004a8924 | DAT_01d0cfa0
    MOV dword ptr [EBX + 0x8],0x69      ; 004a892a
    ADD ESP,0xc                         ; 004a8931
    MOV dword ptr [EBX + 0xc],0x2f      ; 004a8934
    TEST EDX,EDX                        ; 004a893b
    JNZ 0x004a8949                      ; 004a893d
        ;   XREF to: 004a8949 (CONDITIONAL_JUMP)  ; LAB_004a8949
    MOV EAX,EBX                         ; 004a893f
    MOV dword ptr [0x01d0cfa0],EBX      ; 004a8941 | DAT_01d0cfa0
    POP EBX                             ; 004a8947
    RET                                 ; 004a8948
    PUSH ESI                            ; 004a8949
        ;   Label: LAB_004a8949
    MOV ECX,0x5c0d9f                    ; 004a894a | = "..\\core\\fldnotes.cpp"
    MOV ESI,0x406                       ; 004a894f
    PUSH 0x5c0db4                       ; 004a8954 | = "Can't have more than one twana entry ..."
    MOV dword ptr [0x01d71de0],ECX      ; 004a8959 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004a895f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004a8965
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004a896a
    POP ESI                             ; 004a896d
    MOV EAX,EBX                         ; 004a896e
    MOV dword ptr [0x01d0cfa0],EBX      ; 004a8970 | DAT_01d0cfa0
    POP EBX                             ; 004a8976
    RET                                 ; 004a8977

