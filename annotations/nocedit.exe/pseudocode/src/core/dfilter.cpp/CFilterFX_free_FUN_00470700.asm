; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dfilter.cpp_CFilterFX_free_FUN_00470700(CFilterFx * this_ptr)
;
; Parameters:
; CFilterFx *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_CFilterFX_dtor_FUN_004706e0 at 004706e6
;   core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730 at 00470748
;
; Referenced Globals:
;   TerminatedCString s_core_dfilter_cpp_0061e776
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00470700
        ;   Label: core_dfilter.cpp_CFilterFX_free_FUN_00470700
    MOV EBX,dword ptr [ESP + 0x8]       ; 00470701
    MOV EDX,dword ptr [EBX + 0x4]       ; 00470705
    TEST EDX,EDX                        ; 00470708
    JNZ 0x0047070e                      ; 0047070a
        ;   XREF to: 0047070e (CONDITIONAL_JUMP)  ; LAB_0047070e
    POP EBX                             ; 0047070c
    RET                                 ; 0047070d
    PUSH 0x13f                          ; 0047070e
        ;   Label: LAB_0047070e
    PUSH 0x61e776                       ; 00470713 | = "..\\core\\dfilter.cpp"
    PUSH EDX                            ; 00470718
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00470719
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0047071e
    MOV dword ptr [EBX + 0x4],0x0       ; 00470721
    POP EBX                             ; 00470728
    RET                                 ; 00470729

