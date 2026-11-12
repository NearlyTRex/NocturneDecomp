; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceTwanaEntry * core_fldnotes_cpp_SPageResourceTwanaEntry_ctor_FUN_004bac90(SPageResourceTwanaEntry *this_ptr)
;
; Parameters:
; SPageResourceTwanaEntry * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_handleTag_FUN_004bb6f0 at 004bba25
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005df8b2
;   TerminatedCString s_Can_t_have_more_than_one_005df8c7
;   WatcomTypeInfo g_CAlphaBitmapTypeInfo
;   void* g_SPageResourceTwanaEntryVTable = 004bad40
;   undefined4 DAT_01cc4200
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_fldnotes.cpp_SPageResource_ctor_FUN_004ba730
;   core_main.c_FUN_005030e0
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bac90
        ;   Label: core_fldnotes.cpp_SPageResourceTwanaEntry_ctor_FUN_004bac90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bac91
    PUSH EBX                            ; 004bac95
    CALL core_fldnotes.cpp_SPageResource_ctor_FUN_004ba730 ; 004bac96
        ;   XREF to: 004ba730 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SPageResource_ctor_FUN_004ba730(SPageResource * this_ptr)
    ADD ESP,0x4                         ; 004bac9b
    PUSH 0x5fca10                       ; 004bac9e | g_CAlphaBitmapTypeInfo
    PUSH 0x3                            ; 004baca3
    ADD EAX,0xdc                        ; 004baca5
    PUSH EAX                            ; 004bacaa
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004bacab
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bacb0
    PUSH 0x60                           ; 004bacb3
    LEA EBX,[EAX + 0xffffff24]          ; 004bacb5
    PUSH 0x0                            ; 004bacbb
    LEA EAX,[EBX + 0x18]                ; 004bacbd
    PUSH EAX                            ; 004bacc0
    MOV dword ptr [EBX + 0x14],0x600964 ; 004bacc1 | g_SPageResourceTwanaEntryVTable
    CALL crt_memory.c_memset_FUN_005bfb70 ; 004bacc8
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004baccd
    PUSH 0x60                           ; 004bacd0
    PUSH 0x0                            ; 004bacd2
    LEA EAX,[EBX + 0x7c]                ; 004bacd4
    PUSH EAX                            ; 004bacd7
    CALL crt_memory.c_memset_FUN_005bfb70 ; 004bacd8
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0x78],0x0      ; 004bacdd
    MOV EDX,dword ptr [0x01cc4200]      ; 004bace4 | DAT_01cc4200
    MOV dword ptr [EBX + 0x8],0x69      ; 004bacea
    ADD ESP,0xc                         ; 004bacf1
    MOV dword ptr [EBX + 0xc],0x2f      ; 004bacf4
    TEST EDX,EDX                        ; 004bacfb
    JNZ 0x004bad09                      ; 004bacfd
        ;   XREF to: 004bad09 (CONDITIONAL_JUMP)  ; LAB_004bad09
    MOV EAX,EBX                         ; 004bacff
    MOV dword ptr [0x01cc4200],EBX      ; 004bad01 | DAT_01cc4200
    POP EBX                             ; 004bad07
    RET                                 ; 004bad08
    PUSH ESI                            ; 004bad09
        ;   Label: LAB_004bad09
    MOV ECX,0x5df8b2                    ; 004bad0a | = "..\\core\\fldnotes.cpp"
    MOV ESI,0x40b                       ; 004bad0f
    PUSH 0x5df8c7                       ; 004bad14 | = "Can't have more than one twana entry ..."
    MOV dword ptr [0x01d1d400],ECX      ; 004bad19 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004bad1f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bad25
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bad2a
    POP ESI                             ; 004bad2d
    MOV EAX,EBX                         ; 004bad2e
    MOV dword ptr [0x01cc4200],EBX      ; 004bad30 | DAT_01cc4200
    POP EBX                             ; 004bad36
    RET                                 ; 004bad37

