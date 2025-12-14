; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_CObj_addVertices_FUN_005d2580(CObj * this_ptr, int add_count)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   add_count
;
; Referenced Globals:
;   TerminatedCString s_Unable_to_add_verts_to_o_006543a1
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   crt_memory.c_realloc_FUN_00601df0
;   shape_superopt.cpp_logToFile_FUN_005c7910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d2580
        ;   Label: shape_superopt.cpp_CObj_addVertices_FUN_005d2580
    PUSH ESI                            ; 005d2581
    MOV EBX,dword ptr [ESP + 0xc]       ; 005d2582
    MOV ESI,dword ptr [ESP + 0x10]      ; 005d2586
    MOV EAX,dword ptr [EBX]             ; 005d258a
    ADD EAX,ESI                         ; 005d258c
    SHL EAX,0x3                         ; 005d258e
    MOV EDX,EAX                         ; 005d2591
    SHL EAX,0x3                         ; 005d2593
    SUB EAX,EDX                         ; 005d2596
    PUSH EAX                            ; 005d2598
    MOV EDX,dword ptr [EBX + 0x4]       ; 005d2599
    PUSH EDX                            ; 005d259c
    CALL crt_memory.c_realloc_FUN_00601df0 ; 005d259d
        ;   XREF to: 00601df0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005d25a2
    TEST EAX,EAX                        ; 005d25a5
    JZ 0x005d25e7                       ; 005d25a7
        ;   XREF to: 005d25e7 (CONDITIONAL_JUMP)  ; LAB_005d25e7
    MOV dword ptr [EBX + 0x4],EAX       ; 005d25a9
    LEA EAX,[ESI*0x8 + 0x0]             ; 005d25ac
    MOV EDX,EAX                         ; 005d25b3
    SHL EAX,0x3                         ; 005d25b5
    SUB EAX,EDX                         ; 005d25b8
    PUSH EAX                            ; 005d25ba
    MOV EAX,dword ptr [EBX]             ; 005d25bb
    SHL EAX,0x3                         ; 005d25bd
    MOV EDX,EAX                         ; 005d25c0
    SHL EAX,0x3                         ; 005d25c2
    SUB EAX,EDX                         ; 005d25c5
    MOV EDX,EAX                         ; 005d25c7
    MOV EAX,dword ptr [EBX + 0x4]       ; 005d25c9
    PUSH 0x0                            ; 005d25cc
    ADD EAX,EDX                         ; 005d25ce
    PUSH EAX                            ; 005d25d0
    CALL crt_memory.c_memset_FUN_005fde40 ; 005d25d1
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV ECX,dword ptr [EBX]             ; 005d25d6
    MOV EAX,0x1                         ; 005d25d8
    ADD ECX,ESI                         ; 005d25dd
    ADD ESP,0xc                         ; 005d25df
    MOV dword ptr [EBX],ECX             ; 005d25e2
    POP ESI                             ; 005d25e4
    POP EBX                             ; 005d25e5
    RET                                 ; 005d25e6
    PUSH 0x6543a1                       ; 005d25e7 | = "Unable to add verts to object"
        ;   Label: LAB_005d25e7
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d25ec
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    ADD ESP,0x4                         ; 005d25f1
    XOR EAX,EAX                         ; 005d25f4
    POP ESI                             ; 005d25f6
    POP EBX                             ; 005d25f7
    RET                                 ; 005d25f8

