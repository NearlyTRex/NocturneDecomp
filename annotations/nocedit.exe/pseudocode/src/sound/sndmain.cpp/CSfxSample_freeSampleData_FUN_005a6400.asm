; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_005a6400(CSfxSample * this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170 at 005a6189
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 at 005a62de
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0064fd42
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6400
        ;   Label: sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_005a6400
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a6401
    MOV EDX,dword ptr [EBX + 0x120]     ; 005a6405
    TEST EDX,EDX                        ; 005a640b
    JNZ 0x005a6411                      ; 005a640d
        ;   XREF to: 005a6411 (CONDITIONAL_JUMP)  ; LAB_005a6411
    POP EBX                             ; 005a640f
    RET                                 ; 005a6410
    PUSH 0x744                          ; 005a6411
        ;   Label: LAB_005a6411
    PUSH 0x64fd42                       ; 005a6416 | = "..\\sound\\sndmain.cpp"
    PUSH EDX                            ; 005a641b
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005a641c
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 005a6421
    MOV dword ptr [EBX + 0x120],0x0     ; 005a6424
    POP EBX                             ; 005a642e
    RET                                 ; 005a642f

