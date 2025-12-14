; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_CObj_allocateVertices_FUN_005d2500(CObj * this_ptr, int vertex_count)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
;
; Referenced Globals:
;   TerminatedCString s_Unable_to_allocate_RAM_f_00654376
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_memory.c_memset_FUN_005fde40
;   shape_superopt.cpp_logToFile_FUN_005c7910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d2500
        ;   Label: shape_superopt.cpp_CObj_allocateVertices_FUN_005d2500
    MOV EBX,dword ptr [ESP + 0x8]       ; 005d2501
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d2505
    MOV dword ptr [EBX],EAX             ; 005d2509
    SHL EAX,0x3                         ; 005d250b
    MOV EDX,EAX                         ; 005d250e
    SHL EAX,0x3                         ; 005d2510
    SUB EAX,EDX                         ; 005d2513
    PUSH EAX                            ; 005d2515
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 005d2516
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 005d251b
    MOV dword ptr [EBX + 0x4],EAX       ; 005d251e
    TEST EAX,EAX                        ; 005d2521
    JNZ 0x005d2554                      ; 005d2523
        ;   XREF to: 005d2554 (CONDITIONAL_JUMP)  ; LAB_005d2554
    MOV ECX,dword ptr [EBX + 0xc]       ; 005d2525
    TEST ECX,ECX                        ; 005d2528
    JZ 0x005d2535                       ; 005d252a
        ;   XREF to: 005d2535 (CONDITIONAL_JUMP)  ; LAB_005d2535
    PUSH ECX                            ; 005d252c
    CALL crt_memory.c_free_FUN_00601cd0 ; 005d252d
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 005d2532
    PUSH 0x654376                       ; 005d2535 | = "Unable to allocate RAM for object ver..."
        ;   Label: LAB_005d2535
    MOV dword ptr [EBX + 0xc],0x0       ; 005d253a
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d2541
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    ADD ESP,0x4                         ; 005d2546
    MOV dword ptr [EBX + 0x14],0x0      ; 005d2549
    XOR EAX,EAX                         ; 005d2550
    POP EBX                             ; 005d2552
    RET                                 ; 005d2553
    PUSH EDI                            ; 005d2554
        ;   Label: LAB_005d2554
    MOV EAX,dword ptr [EBX]             ; 005d2555
    SHL EAX,0x3                         ; 005d2557
    MOV EDX,EAX                         ; 005d255a
    SHL EAX,0x3                         ; 005d255c
    SUB EAX,EDX                         ; 005d255f
    PUSH EAX                            ; 005d2561
    PUSH 0x0                            ; 005d2562
    MOV EDI,dword ptr [EBX + 0x4]       ; 005d2564
    PUSH EDI                            ; 005d2567
    CALL crt_memory.c_memset_FUN_005fde40 ; 005d2568
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EAX,0x1                         ; 005d256d
    ADD ESP,0xc                         ; 005d2572
    POP EDI                             ; 005d2575
    POP EBX                             ; 005d2576
    RET                                 ; 005d2577

