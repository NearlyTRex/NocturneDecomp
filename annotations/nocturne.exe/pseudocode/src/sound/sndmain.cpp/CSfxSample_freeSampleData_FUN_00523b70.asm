; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00523b70(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910 at 00523929
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60 at 00523a79
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523b70
        ;   Label: sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00523b70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00523b71
    MOV EDX,dword ptr [EBX + 0x120]     ; 00523b75
    TEST EDX,EDX                        ; 00523b7b
    JNZ 0x00523b81                      ; 00523b7d
        ;   XREF to: 00523b81 (CONDITIONAL_JUMP)  ; LAB_00523b81
    POP EBX                             ; 00523b7f
    RET                                 ; 00523b80
    PUSH EDX                            ; 00523b81
        ;   Label: LAB_00523b81
    CALL crt_memory.c_free_FUN_005638d0 ; 00523b82
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 00523b87
    MOV dword ptr [EBX + 0x120],0x0     ; 00523b8a
    POP EBX                             ; 00523b94
    RET                                 ; 00523b95

