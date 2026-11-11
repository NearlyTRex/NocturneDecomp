; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceTwanaEntry * core_fldnotes_cpp_SPageResourceTwanaEntry_dtor_FUN_004bad40(SPageResourceTwanaEntry *this_ptr,uint flags)
;
; Parameters:
; SPageResourceTwanaEntry * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   void* g_SPageResourceTwanaEntryVTable = 004bad40
;   WatcomTypeInfo g_PageResource_TwanaEntryTypeInfo
;   undefined4 DAT_01cc4200
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   unkaddr_004b9ab0.cpp_SPageResource_dtor_FUN_004ba760
;   unkafter_fldnotes.cpp_FUN_004bf6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bad40
        ;   Label: core_fldnotes.cpp_SPageResourceTwanaEntry_dtor_FUN_004bad40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bad41
    TEST byte ptr [ESP + 0xc],0x4       ; 004bad45
    JNZ 0x004bad96                      ; 004bad4a
        ;   XREF to: 004bad96 (CONDITIONAL_JUMP)  ; LAB_004bad96
    MOV EDX,dword ptr [0x01cc4200]      ; 004bad4c | DAT_01cc4200
    MOV dword ptr [EBX + 0x14],0x600964 ; 004bad52 | g_SPageResourceTwanaEntryVTable
    CMP EBX,EDX                         ; 004bad59
    JNZ 0x004bad65                      ; 004bad5b
        ;   XREF to: 004bad65 (CONDITIONAL_JUMP)  ; LAB_004bad65
    XOR ECX,ECX                         ; 004bad5d
    MOV dword ptr [0x01cc4200],ECX      ; 004bad5f | DAT_01cc4200
    PUSH 0x0                            ; 004bad65
        ;   Label: LAB_004bad65
    ADD EBX,0xdc                        ; 004bad67
    PUSH EBX                            ; 004bad6d
    CALL unkafter_fldnotes.cpp_FUN_004bf6c0 ; 004bad6e
        ;   XREF to: 004bf6c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_fldnotes.cpp_FUN_004bf6c0()
    ADD ESP,0x8                         ; 004bad73
    PUSH 0x1                            ; 004bad76
    LEA EBX,[EAX + 0xffffff24]          ; 004bad78
    PUSH EBX                            ; 004bad7e
    CALL unkaddr_004b9ab0.cpp_SPageResource_dtor_FUN_004ba760 ; 004bad7f
        ;   XREF to: 004ba760 (UNCONDITIONAL_CALL)  ; int unkaddr_004b9ab0.cpp_SPageResource_dtor_FUN_004ba760(SPageResource * this_ptr)
    ADD ESP,0x8                         ; 004bad84
    MOV DL,byte ptr [ESP + 0xc]         ; 004bad87
    MOV EBX,EAX                         ; 004bad8b
    TEST DL,0x2                         ; 004bad8d
    JNZ 0x004badb1                      ; 004bad90
        ;   XREF to: 004badb1 (CONDITIONAL_JUMP)  ; LAB_004badb1
    MOV EAX,EBX                         ; 004bad92
    POP EBX                             ; 004bad94
    RET                                 ; 004bad95
    PUSH 0x600a40                       ; 004bad96 | g_PageResource_TwanaEntryTypeInfo
        ;   Label: LAB_004bad96
    PUSH EBX                            ; 004bad9b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004bad9c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004bada1
    PUSH EAX                            ; 004bada4
    CALL crt_unknown.c_FUN_005c0336     ; 004bada5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004badaa
    MOV EAX,EBX                         ; 004badad
    POP EBX                             ; 004badaf
    RET                                 ; 004badb0
    PUSH EAX                            ; 004badb1
        ;   Label: LAB_004badb1
    CALL crt_unknown.c_FUN_005c0344     ; 004badb2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004badb7
    MOV EAX,EBX                         ; 004badba
    POP EBX                             ; 004badbc
    RET                                 ; 004badbd

