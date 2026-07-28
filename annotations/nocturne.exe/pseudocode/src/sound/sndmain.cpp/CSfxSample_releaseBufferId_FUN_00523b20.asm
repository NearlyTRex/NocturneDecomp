; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_00523b20(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910 at 0052391c
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60 at 00523a82
;
; Referenced Globals:
;   undefined4 DAT_02dc8318
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523b20
        ;   Label: sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_00523b20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00523b21
    CMP dword ptr [EBX + 0x130],0x0     ; 00523b25
    JZ 0x00523b42                       ; 00523b2c
        ;   XREF to: 00523b42 (CONDITIONAL_JUMP)  ; LAB_00523b42
    MOV ECX,dword ptr [0x02dc8318]      ; 00523b2e | DAT_02dc8318
    TEST ECX,ECX                        ; 00523b34
    JNZ 0x00523b44                      ; 00523b36
        ;   XREF to: 00523b44 (CONDITIONAL_JUMP)  ; LAB_00523b44
    MOV dword ptr [EBX + 0x130],0x0     ; 00523b38
    POP EBX                             ; 00523b42
        ;   Label: LAB_00523b42
    RET                                 ; 00523b43
    PUSH ESI                            ; 00523b44
        ;   Label: LAB_00523b44
    MOV ESI,dword ptr [EBX + 0x130]     ; 00523b45
    PUSH ESI                            ; 00523b4b
    MOV EDX,dword ptr [ECX]             ; 00523b4c
    PUSH ECX                            ; 00523b4e
    CALL dword ptr [EDX + 0x30]         ; 00523b4f
    ADD ESP,0x8                         ; 00523b52
    POP ESI                             ; 00523b55
    MOV dword ptr [EBX + 0x130],0x0     ; 00523b56
    POP EBX                             ; 00523b60
    RET                                 ; 00523b61

