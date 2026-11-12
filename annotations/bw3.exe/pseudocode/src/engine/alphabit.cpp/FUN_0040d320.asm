; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_alphabit_cpp_FUN_0040d320(CAlphaBitmap *param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   core_fldnotes.cpp_SNotesMap_load_FUN_004a9f30 at 004a9fd7
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 at 0040d482
;
; Referenced Globals:
;   TerminatedCString s_engine_alphabit_cpp_005b5f31
;   TerminatedCString s_CAlphaBitmap_allocate_Ou_005b5f48
;   TerminatedCString s_engine_alphabit_cpp_005b5f6f
;   TerminatedCString s_CAlphaBitmap_allocate_Ou_005b5f86
;   TerminatedCString s_engine_alphabit_cpp_005b5fad
;   TerminatedCString s_CAlphaBitmap_allocate_Ou_005b5fc4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_malloc_FUN_005a3650
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d320
        ;   Label: engine_alphabit.cpp_FUN_0040d320
    PUSH ESI                            ; 0040d321
    PUSH EDI                            ; 0040d322
    PUSH EBP                            ; 0040d323
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040d324
    MOV EDI,dword ptr [ESP + 0x18]      ; 0040d328
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040d32c
    PUSH EBX                            ; 0040d330
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 0040d331
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    MOV EAX,EDI                         ; 0040d336
    IMUL EAX,ESI                        ; 0040d338
    ADD ESP,0x4                         ; 0040d33b
    MOV dword ptr [EBX + 0xc],EDI       ; 0040d33e
    PUSH EAX                            ; 0040d341
    MOV dword ptr [EBX + 0x10],ESI      ; 0040d342
    CALL crt_memory.c_malloc_FUN_005a3650 ; 0040d345
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 0040d34a
    MOV dword ptr [EBX],EAX             ; 0040d34d
    TEST EAX,EAX                        ; 0040d34f
    JZ 0x0040d3a4                       ; 0040d351
        ;   XREF to: 0040d3a4 (CONDITIONAL_JUMP)  ; LAB_0040d3a4
    MOV EAX,EDI                         ; 0040d353
        ;   Label: LAB_0040d353
    IMUL EAX,ESI                        ; 0040d355
    PUSH EAX                            ; 0040d358
    CALL crt_memory.c_malloc_FUN_005a3650 ; 0040d359
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 0040d35e
    MOV dword ptr [EBX + 0x4],EAX       ; 0040d361
    TEST EAX,EAX                        ; 0040d364
    JNZ 0x0040d38b                      ; 0040d366
        ;   XREF to: 0040d38b (CONDITIONAL_JUMP)  ; LAB_0040d38b
    MOV EDX,0x5b5f6f                    ; 0040d368 | = "..\\engine\\alphabit.cpp"
    MOV ECX,0xb3                        ; 0040d36d
    PUSH 0x5b5f86                       ; 0040d372 | = "CAlphaBitmap::allocate - Out of memory"
    MOV dword ptr [0x01d71de0],EDX      ; 0040d377 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0040d37d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040d383
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0040d388
    PUSH 0x400                          ; 0040d38b
        ;   Label: LAB_0040d38b
    CALL crt_memory.c_malloc_FUN_005a3650 ; 0040d390
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 0040d395
    MOV dword ptr [EBX + 0x8],EAX       ; 0040d398
    TEST EAX,EAX                        ; 0040d39b
    JZ 0x0040d3c9                       ; 0040d39d
        ;   XREF to: 0040d3c9 (CONDITIONAL_JUMP)  ; LAB_0040d3c9
    POP EBP                             ; 0040d39f
    POP EDI                             ; 0040d3a0
    POP ESI                             ; 0040d3a1
    POP EBX                             ; 0040d3a2
    RET                                 ; 0040d3a3
    MOV ECX,0x5b5f31                    ; 0040d3a4 | = "..\\engine\\alphabit.cpp"
        ;   Label: LAB_0040d3a4
    MOV EBP,0xb0                        ; 0040d3a9
    PUSH 0x5b5f48                       ; 0040d3ae | = "CAlphaBitmap::allocate - Out of memory"
    MOV dword ptr [0x01d71de0],ECX      ; 0040d3b3 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0040d3b9 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040d3bf
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0040d3c4
    JMP 0x0040d353                      ; 0040d3c7
        ;   XREF to: 0040d353 (UNCONDITIONAL_JUMP)  ; LAB_0040d353
    MOV EDI,0x5b5fad                    ; 0040d3c9 | = "..\\engine\\alphabit.cpp"
        ;   Label: LAB_0040d3c9
    MOV EBP,0xb6                        ; 0040d3ce
    PUSH 0x5b5fc4                       ; 0040d3d3 | = "CAlphaBitmap::allocate - Out of memory"
    MOV dword ptr [0x01d71de0],EDI      ; 0040d3d8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0040d3de | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040d3e4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0040d3e9
    POP EBP                             ; 0040d3ec
    POP EDI                             ; 0040d3ed
    POP ESI                             ; 0040d3ee
    POP EBX                             ; 0040d3ef
    RET                                 ; 0040d3f0

