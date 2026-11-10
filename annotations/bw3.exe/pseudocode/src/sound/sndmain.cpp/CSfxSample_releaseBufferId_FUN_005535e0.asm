; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_005535e0(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005533b0 at 005533c2
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520 at 00553566
;
; Referenced Globals:
;   undefined4 DAT_02cf3280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005535e0
        ;   Label: sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005535e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005535e1
    CMP dword ptr [EBX + 0x158],0x0     ; 005535e5
    JZ 0x00553602                       ; 005535ec
        ;   XREF to: 00553602 (CONDITIONAL_JUMP)  ; LAB_00553602
    MOV ECX,dword ptr [0x02cf3280]      ; 005535ee | DAT_02cf3280
    TEST ECX,ECX                        ; 005535f4
    JNZ 0x00553604                      ; 005535f6
        ;   XREF to: 00553604 (CONDITIONAL_JUMP)  ; LAB_00553604
    MOV dword ptr [EBX + 0x158],0x0     ; 005535f8
    POP EBX                             ; 00553602
        ;   Label: LAB_00553602
    RET                                 ; 00553603
    PUSH ESI                            ; 00553604
        ;   Label: LAB_00553604
    MOV ESI,dword ptr [EBX + 0x158]     ; 00553605
    PUSH ESI                            ; 0055360b
    MOV EDX,dword ptr [ECX]             ; 0055360c
    PUSH ECX                            ; 0055360e
    CALL dword ptr [EDX + 0x34]         ; 0055360f
    ADD ESP,0x8                         ; 00553612
    POP ESI                             ; 00553615
    MOV dword ptr [EBX + 0x158],0x0     ; 00553616
    POP EBX                             ; 00553620
    RET                                 ; 00553621

