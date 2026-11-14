; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trstream_cpp_CInStreamFile_allocBuffer_FUN_005a0e10(CInStreamFile *this_ptr)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   support_trstream.cpp_CInStreamFile_openHandle_FUN_005a1090 at 005a1101
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0 at 005a105d
;   support_trstream.cpp_CInStreamFile_open_FUN_005a0f60 at 005a0fab
;
; Referenced Globals:
;   TerminatedCString s_support_trstream_cpp_005f88ad
;   TerminatedCString s_Out_of_memory_005f88c5
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_malloc_FUN_005c08d0
;   support_trstream.cpp_CInStreamFile_freeBuffer_FUN_005a0e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0e10
        ;   Label: support_trstream.cpp_CInStreamFile_allocBuffer_FUN_005a0e10
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a0e11
    PUSH EBX                            ; 005a0e15
    CALL support_trstream.cpp_CInStreamFile_freeBuffer_FUN_005a0e80 ; 005a0e16
        ;   XREF to: 005a0e80 (UNCONDITIONAL_CALL)  ; void support_trstream.cpp_CInStreamFile_freeBuffer_FUN_005a0e80(CInStreamFile * this_ptr)
    MOV dword ptr [EBX + 0x20],0x1000   ; 005a0e1b
    MOV EAX,dword ptr [EBX + 0x20]      ; 005a0e22
    ADD ESP,0x4                         ; 005a0e25
    ADD EAX,0x1f                        ; 005a0e28
    PUSH EAX                            ; 005a0e2b
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 005a0e2c
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005a0e31
    MOV dword ptr [EBX + 0x14],EAX      ; 005a0e34
    TEST EAX,EAX                        ; 005a0e37
    JZ 0x005a0e56                       ; 005a0e39
        ;   XREF to: 005a0e56 (CONDITIONAL_JUMP)  ; LAB_005a0e56
    MOV EAX,dword ptr [EBX + 0x14]      ; 005a0e3b
        ;   Label: LAB_005a0e3b
    MOV dword ptr [EBX + 0x1c],0x0      ; 005a0e3e
    ADD EAX,0x1f                        ; 005a0e45
    MOV dword ptr [EBX + 0x24],0x0      ; 005a0e48
    AND AL,0xe0                         ; 005a0e4f
    MOV dword ptr [EBX + 0x18],EAX      ; 005a0e51
    POP EBX                             ; 005a0e54
    RET                                 ; 005a0e55
    PUSH ESI                            ; 005a0e56
        ;   Label: LAB_005a0e56
    MOV ECX,0x5f88ad                    ; 005a0e57 | = "..\\support\\trstream.cpp"
    MOV ESI,0x62c                       ; 005a0e5c
    PUSH 0x5f88c5                       ; 005a0e61 | = "Out of memory"
    MOV dword ptr [0x01d1d400],ECX      ; 005a0e66 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 005a0e6c | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005a0e72
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005a0e77
    POP ESI                             ; 005a0e7a
    JMP 0x005a0e3b                      ; 005a0e7b
        ;   XREF to: 005a0e3b (UNCONDITIONAL_JUMP)  ; LAB_005a0e3b

