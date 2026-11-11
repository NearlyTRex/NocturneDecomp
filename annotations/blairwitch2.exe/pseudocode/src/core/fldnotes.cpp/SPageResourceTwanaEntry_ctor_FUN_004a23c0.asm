; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceTwanaEntry * core_fldnotes_cpp_SPageResourceTwanaEntry_ctor_FUN_004a23c0(SPageResourceTwanaEntry *this_ptr)
;
; Parameters:
; SPageResourceTwanaEntry * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_handleTag_FUN_004a2cc0 at 004a2ff5
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005d5a67
;   TerminatedCString s_Can_t_have_more_than_one_005d5a7c
;   void* g_SPageResourceTwanaEntryVTable = 004a2470
;   WatcomTypeInfo g_CAlphaBitmapTypeInfo
;   undefined4 DAT_01cab780
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c___arrinit_FUN_005b7f5f
;   crt_memory.c_memset_FUN_005b77c0
;   unkaddr_004a1200.cpp_SPageResource_ctor_FUN_004a1e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a23c0
        ;   Label: core_fldnotes.cpp_SPageResourceTwanaEntry_ctor_FUN_004a23c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a23c1
    PUSH EBX                            ; 004a23c5
    CALL unkaddr_004a1200.cpp_SPageResource_ctor_FUN_004a1e60 ; 004a23c6
        ;   XREF to: 004a1e60 (UNCONDITIONAL_CALL)  ; void unkaddr_004a1200.cpp_SPageResource_ctor_FUN_004a1e60(SPageResource * this_ptr)
    ADD ESP,0x4                         ; 004a23cb
    PUSH 0x5f6f60                       ; 004a23ce | g_CAlphaBitmapTypeInfo
    PUSH 0x3                            ; 004a23d3
    ADD EAX,0xd8                        ; 004a23d5
    PUSH EAX                            ; 004a23da
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004a23db
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 004a23e0
    PUSH 0x60                           ; 004a23e3
    LEA EBX,[EAX + 0xffffff28]          ; 004a23e5
    PUSH 0x0                            ; 004a23eb
    LEA EAX,[EBX + 0x18]                ; 004a23ed
    PUSH EAX                            ; 004a23f0
    MOV dword ptr [EBX + 0x14],0x5f6f04 ; 004a23f1 | g_SPageResourceTwanaEntryVTable
    CALL crt_memory.c_memset_FUN_005b77c0 ; 004a23f8
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004a23fd
    PUSH 0x60                           ; 004a2400
    PUSH 0x0                            ; 004a2402
    LEA EAX,[EBX + 0x78]                ; 004a2404
    PUSH EAX                            ; 004a2407
    CALL crt_memory.c_memset_FUN_005b77c0 ; 004a2408
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EDX,dword ptr [0x01cab780]      ; 004a240d | DAT_01cab780
    MOV dword ptr [EBX + 0x8],0x69      ; 004a2413
    ADD ESP,0xc                         ; 004a241a
    MOV dword ptr [EBX + 0xc],0x2f      ; 004a241d
    TEST EDX,EDX                        ; 004a2424
    JNZ 0x004a2432                      ; 004a2426
        ;   XREF to: 004a2432 (CONDITIONAL_JUMP)  ; LAB_004a2432
    MOV EAX,EBX                         ; 004a2428
    MOV dword ptr [0x01cab780],EBX      ; 004a242a | DAT_01cab780
    POP EBX                             ; 004a2430
    RET                                 ; 004a2431
    PUSH ESI                            ; 004a2432
        ;   Label: LAB_004a2432
    MOV ECX,0x5d5a67                    ; 004a2433 | = "..\\core\\fldnotes.cpp"
    MOV ESI,0x3f9                       ; 004a2438
    PUSH 0x5d5a7c                       ; 004a243d | = "Can't have more than one twana entry ..."
    MOV dword ptr [0x01d046a0],ECX      ; 004a2442 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004a2448 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a244e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a2453
    POP ESI                             ; 004a2456
    MOV EAX,EBX                         ; 004a2457
    MOV dword ptr [0x01cab780],EBX      ; 004a2459 | DAT_01cab780
    POP EBX                             ; 004a245f
    RET                                 ; 004a2460

