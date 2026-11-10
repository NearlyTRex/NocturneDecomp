; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00553630(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005533b0 at 005533cb
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520 at 0055355d
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553630
        ;   Label: sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00553630
    MOV EBX,dword ptr [ESP + 0x8]       ; 00553631
    MOV EDX,dword ptr [EBX + 0x120]     ; 00553635
    TEST EDX,EDX                        ; 0055363b
    JNZ 0x00553641                      ; 0055363d
        ;   XREF to: 00553641 (CONDITIONAL_JUMP)  ; LAB_00553641
    POP EBX                             ; 0055363f
    RET                                 ; 00553640
    PUSH EDX                            ; 00553641
        ;   Label: LAB_00553641
    CALL crt_unknown.c_FUN_005a3770     ; 00553642
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00553647
    MOV dword ptr [EBX + 0x120],0x0     ; 0055364a
    POP EBX                             ; 00553654
    RET                                 ; 00553655

