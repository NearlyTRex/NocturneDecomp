; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0(CDemonFilter * this_ptr)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260 at 00470266
;   core_dfilter.cpp_CDemonFilter_dtor_FUN_00470240 at 00470246
;
; Referenced Globals:
;   TerminatedCString s_core_dfilter_cpp_0061e59b
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004702c0
        ;   Label: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004702c1
    MOV EDX,dword ptr [EBX + 0x48]      ; 004702c5
    TEST EDX,EDX                        ; 004702c8
    JNZ 0x004702ce                      ; 004702ca | LAB_004702ce
        ;   XREF to: 004702ce (CONDITIONAL_JUMP)
    POP EBX                             ; 004702cc
    RET                                 ; 004702cd
    PUSH 0x98                           ; 004702ce
        ;   Label: LAB_004702ce
    PUSH 0x61e59b                       ; 004702d3 | = "..\\core\\dfilter.cpp" | s_core_dfilter_cpp_0061e59b = ..\core\dfilter.cpp
    PUSH EDX                            ; 004702d8
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004702d9 | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004702de
    MOV dword ptr [EBX + 0x48],0x0      ; 004702e1
    POP EBX                             ; 004702e8
    RET                                 ; 004702e9

