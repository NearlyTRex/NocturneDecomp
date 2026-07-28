; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dimage_cpp_CDemonImage_allocMemory_FUN_0044d460(CDemonImage *this_ptr)
;
; Parameters:
; CDemonImage *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dimage.cpp_CDemonImage_load_FUN_0044d550 at 0044d5c7
;
; Referenced Globals:
;   TerminatedCString s_core_dimage_cpp_0057c399
;   TerminatedCString s_CDemonImage_allocMemory_0057c3ac
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_dimage.cpp_CDemonImage_freeMemory_FUN_0044d4c0
;   core_main.c_FUN_004c8440
;   crt_memory.c_malloc_FUN_005635b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d460
        ;   Label: core_dimage.cpp_CDemonImage_allocMemory_FUN_0044d460
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044d461
    PUSH EBX                            ; 0044d465
    CALL core_dimage.cpp_CDemonImage_freeMemory_FUN_0044d4c0 ; 0044d466
        ;   XREF to: 0044d4c0 (UNCONDITIONAL_CALL)  ; void core_dimage.cpp_CDemonImage_freeMemory_FUN_0044d4c0(CDemonImage * this_ptr)
    MOV EAX,dword ptr [EBX + 0x304]     ; 0044d46b
    IMUL EAX,dword ptr [EBX + 0x308]    ; 0044d471
    ADD ESP,0x4                         ; 0044d478
    PUSH EAX                            ; 0044d47b
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0044d47c
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 0044d481
    MOV dword ptr [EBX + 0x300],EAX     ; 0044d484
    TEST EAX,EAX                        ; 0044d48a
    JZ 0x0044d490                       ; 0044d48c
        ;   XREF to: 0044d490 (CONDITIONAL_JUMP)  ; LAB_0044d490
    POP EBX                             ; 0044d48e
    RET                                 ; 0044d48f
    PUSH ESI                            ; 0044d490
        ;   Label: LAB_0044d490
    MOV EBX,0x57c399                    ; 0044d491 | = "..\\core\\dimage.cpp"
    MOV ESI,0x31                        ; 0044d496
    PUSH 0x57c3ac                       ; 0044d49b | = "CDemonImage::allocMemory - Out of mem..."
    MOV dword ptr [0x01cc4800],EBX      ; 0044d4a0 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0044d4a6 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044d4ac
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044d4b1
    POP ESI                             ; 0044d4b4
    POP EBX                             ; 0044d4b5
    RET                                 ; 0044d4b6

