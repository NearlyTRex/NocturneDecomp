; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dimage_cpp_CDemonImage_freeMemory_FUN_00471a40(CDemonImage *this_ptr)
;
; Parameters:
; CDemonImage *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dimage.cpp_CDemonImage_allocMemory_FUN_004719e0 at 004719e6
;   core_dimage.cpp_CDemonImage_dtor_FUN_004719c0 at 004719c6
;
; Referenced Globals:
;   TerminatedCString s_core_dimage_cpp_0061ecaa
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471a40
        ;   Label: core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00471a41
    MOV EDX,dword ptr [EBX + 0x300]     ; 00471a45
    TEST EDX,EDX                        ; 00471a4b
    JNZ 0x00471a51                      ; 00471a4d
        ;   XREF to: 00471a51 (CONDITIONAL_JUMP)  ; LAB_00471a51
    POP EBX                             ; 00471a4f
    RET                                 ; 00471a50
    PUSH 0x36                           ; 00471a51
        ;   Label: LAB_00471a51
    PUSH 0x61ecaa                       ; 00471a53 | = "..\\core\\dimage.cpp"
    PUSH EDX                            ; 00471a58
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00471a59
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00471a5e
    MOV dword ptr [EBX + 0x300],0x0     ; 00471a61
    POP EBX                             ; 00471a6b
    RET                                 ; 00471a6c

