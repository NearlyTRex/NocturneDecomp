; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_004351b0(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_cloth.cpp_CCloth_load_FUN_00435240 at 0043549a
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_0057ac75
;   TerminatedCString s_CCloth_allocMemory_Out_o_0057ac87
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_cloth.cpp_FUN_00435210
;   core_main.c_FUN_004c8440
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004351b0
        ;   Label: core_cloth.cpp_CCloth_allocMemory_FUN_004351b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004351b1
    PUSH EBX                            ; 004351b5
    CALL core_cloth.cpp_FUN_00435210    ; 004351b6
        ;   XREF to: 00435210 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_00435210()
    MOV EAX,dword ptr [EBX + 0x104]     ; 004351bb
    ADD ESP,0x4                         ; 004351c1
    SHL EAX,0x2                         ; 004351c4
    PUSH EAX                            ; 004351c7
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 004351c8
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_00564c18(SIZE_T size)
    ADD ESP,0x4                         ; 004351cd
    MOV dword ptr [EBX + 0x3aafc],EAX   ; 004351d0
    TEST EAX,EAX                        ; 004351d6
    JZ 0x004351dc                       ; 004351d8
        ;   XREF to: 004351dc (CONDITIONAL_JUMP)  ; LAB_004351dc
    POP EBX                             ; 004351da
    RET                                 ; 004351db
    MOV ECX,0x57ac75                    ; 004351dc | = "..\\core\\cloth.cpp"
        ;   Label: LAB_004351dc
    MOV EBX,0x77                        ; 004351e1
    PUSH 0x57ac87                       ; 004351e6 | = "CCloth::allocMemory - Out of memory"
    MOV dword ptr [0x01cc4800],ECX      ; 004351eb | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004351f1 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004351f7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004351fc
    POP EBX                             ; 004351ff
    RET                                 ; 00435200

