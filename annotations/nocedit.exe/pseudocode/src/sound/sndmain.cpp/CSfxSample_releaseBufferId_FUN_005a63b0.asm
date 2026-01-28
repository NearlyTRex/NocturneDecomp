; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_005a63b0(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170 at 005a617c
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 at 005a62f1
;
; Referenced Globals:
;   CSoundDevice* g_CSoundDevicePtr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a63b0
        ;   Label: sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005a63b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a63b1
    CMP dword ptr [EBX + 0x158],0x0     ; 005a63b5
    JZ 0x005a63d2                       ; 005a63bc
        ;   XREF to: 005a63d2 (CONDITIONAL_JUMP)  ; LAB_005a63d2
    MOV ECX,dword ptr [0x03f69268]      ; 005a63be | g_CSoundDevicePtr
    TEST ECX,ECX                        ; 005a63c4
    JNZ 0x005a63d4                      ; 005a63c6
        ;   XREF to: 005a63d4 (CONDITIONAL_JUMP)  ; LAB_005a63d4
    MOV dword ptr [EBX + 0x158],0x0     ; 005a63c8
    POP EBX                             ; 005a63d2
        ;   Label: LAB_005a63d2
    RET                                 ; 005a63d3
    PUSH ESI                            ; 005a63d4
        ;   Label: LAB_005a63d4
    MOV ESI,dword ptr [EBX + 0x158]     ; 005a63d5
    PUSH ESI                            ; 005a63db
    MOV EDX,dword ptr [ECX]             ; 005a63dc
    PUSH ECX                            ; 005a63de
    CALL dword ptr [EDX + 0x30]         ; 005a63df
    ADD ESP,0x8                         ; 005a63e2
    POP ESI                             ; 005a63e5
    MOV dword ptr [EBX + 0x158],0x0     ; 005a63e6
    POP EBX                             ; 005a63f0
    RET                                 ; 005a63f1

