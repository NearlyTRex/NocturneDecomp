; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_alphabit_cpp_FUN_0040d0e0(CAlphaBitmap *param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   core_fldnotes.cpp_SNotesMap_load_FUN_004bc2d0 at 004bc377
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 at 0040d242
;
; Referenced Globals:
;   TerminatedCString s_engine_alphabit_cpp_005d2ee1
;   TerminatedCString s_CAlphaBitmap_allocate_Ou_005d2ef8
;   TerminatedCString s_engine_alphabit_cpp_005d2f1f
;   TerminatedCString s_CAlphaBitmap_allocate_Ou_005d2f36
;   TerminatedCString s_engine_alphabit_cpp_005d2f5d
;   TerminatedCString s_CAlphaBitmap_allocate_Ou_005d2f74
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_malloc_FUN_005c08d0
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d0e0
        ;   Label: engine_alphabit.cpp_FUN_0040d0e0
    PUSH ESI                            ; 0040d0e1
    PUSH EDI                            ; 0040d0e2
    PUSH EBP                            ; 0040d0e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040d0e4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0040d0e8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040d0ec
    PUSH EBX                            ; 0040d0f0
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 0040d0f1
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    MOV EAX,EDI                         ; 0040d0f6
    IMUL EAX,ESI                        ; 0040d0f8
    ADD ESP,0x4                         ; 0040d0fb
    MOV dword ptr [EBX + 0xc],EDI       ; 0040d0fe
    PUSH EAX                            ; 0040d101
    MOV dword ptr [EBX + 0x10],ESI      ; 0040d102
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 0040d105
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 0040d10a
    MOV dword ptr [EBX],EAX             ; 0040d10d
    TEST EAX,EAX                        ; 0040d10f
    JZ 0x0040d164                       ; 0040d111
        ;   XREF to: 0040d164 (CONDITIONAL_JUMP)  ; LAB_0040d164
    MOV EAX,EDI                         ; 0040d113
        ;   Label: LAB_0040d113
    IMUL EAX,ESI                        ; 0040d115
    PUSH EAX                            ; 0040d118
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 0040d119
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 0040d11e
    MOV dword ptr [EBX + 0x4],EAX       ; 0040d121
    TEST EAX,EAX                        ; 0040d124
    JNZ 0x0040d14b                      ; 0040d126
        ;   XREF to: 0040d14b (CONDITIONAL_JUMP)  ; LAB_0040d14b
    MOV EDX,0x5d2f1f                    ; 0040d128 | = "..\\engine\\alphabit.cpp"
    MOV ECX,0xb3                        ; 0040d12d
    PUSH 0x5d2f36                       ; 0040d132 | = "CAlphaBitmap::allocate - Out of memory"
    MOV dword ptr [0x01d1d400],EDX      ; 0040d137 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0040d13d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0040d143
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0040d148
    PUSH 0x400                          ; 0040d14b
        ;   Label: LAB_0040d14b
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 0040d150
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 0040d155
    MOV dword ptr [EBX + 0x8],EAX       ; 0040d158
    TEST EAX,EAX                        ; 0040d15b
    JZ 0x0040d189                       ; 0040d15d
        ;   XREF to: 0040d189 (CONDITIONAL_JUMP)  ; LAB_0040d189
    POP EBP                             ; 0040d15f
    POP EDI                             ; 0040d160
    POP ESI                             ; 0040d161
    POP EBX                             ; 0040d162
    RET                                 ; 0040d163
    MOV ECX,0x5d2ee1                    ; 0040d164 | = "..\\engine\\alphabit.cpp"
        ;   Label: LAB_0040d164
    MOV EBP,0xb0                        ; 0040d169
    PUSH 0x5d2ef8                       ; 0040d16e | = "CAlphaBitmap::allocate - Out of memory"
    MOV dword ptr [0x01d1d400],ECX      ; 0040d173 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0040d179 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0040d17f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0040d184
    JMP 0x0040d113                      ; 0040d187
        ;   XREF to: 0040d113 (UNCONDITIONAL_JUMP)  ; LAB_0040d113
    MOV EDI,0x5d2f5d                    ; 0040d189 | = "..\\engine\\alphabit.cpp"
        ;   Label: LAB_0040d189
    MOV EBP,0xb6                        ; 0040d18e
    PUSH 0x5d2f74                       ; 0040d193 | = "CAlphaBitmap::allocate - Out of memory"
    MOV dword ptr [0x01d1d400],EDI      ; 0040d198 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0040d19e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0040d1a4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0040d1a9
    POP EBP                             ; 0040d1ac
    POP EDI                             ; 0040d1ad
    POP ESI                             ; 0040d1ae
    POP EBX                             ; 0040d1af
    RET                                 ; 0040d1b0

