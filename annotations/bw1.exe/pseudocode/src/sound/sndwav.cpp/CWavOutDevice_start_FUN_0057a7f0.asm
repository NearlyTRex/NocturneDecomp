; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_0057a7f0(CWavOutDevice *this_ptr)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f576f
;   undefined4 DAT_02c828c4
;   undefined4 DAT_02c828c8
;   undefined4 DAT_02c828cc
;   undefined4 DAT_02c828d0
;   undefined4 DAT_02c828d4
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   sound_sndmain.cpp_startSoundThread_FUN_00575c00
;   sound_sndwav.cpp_writeWavOutBuffer_FUN_0057a5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a7f0
        ;   Label: sound_sndwav.cpp_CWavOutDevice_start_FUN_0057a7f0
    PUSH ESI                            ; 0057a7f1
    PUSH EDI                            ; 0057a7f2
    MOV EDX,dword ptr [0x02c828d4]      ; 0057a7f3 | DAT_02c828d4
    XOR ESI,ESI                         ; 0057a7f9
    TEST EDX,EDX                        ; 0057a7fb
    JLE 0x0057a871                      ; 0057a7fd
        ;   XREF to: 0057a871 (CONDITIONAL_JUMP)  ; LAB_0057a871
    XOR EBX,EBX                         ; 0057a7ff
    PUSH 0x20                           ; 0057a801
        ;   Label: LAB_0057a801
    PUSH 0x0                            ; 0057a803
    MOV EDI,dword ptr [EBX + 0x2c82864] ; 0057a805
    PUSH EDI                            ; 0057a80b
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0057a80c
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV EDX,dword ptr [EBX + 0x2c82864] ; 0057a811
    MOV EAX,dword ptr [EBX + 0x2c828a4] ; 0057a817
    MOV dword ptr [EDX],EAX             ; 0057a81d
    MOV EAX,dword ptr [EBX + 0x2c82864] ; 0057a81f
    MOV dword ptr [EAX + 0xc],ESI       ; 0057a825
    MOV EAX,[0x02c828c4]                ; 0057a828 | DAT_02c828c4
    MOV EDX,EAX                         ; 0057a82d
    SAR EDX,0x1f                        ; 0057a82f
    SHL EDX,0x3                         ; 0057a832
    SBB EAX,EDX                         ; 0057a835
    SAR EAX,0x3                         ; 0057a837
    IMUL EAX,dword ptr [0x02c828d0]     ; 0057a83a | DAT_02c828d0
    MOV EDX,dword ptr [0x02c828c8]      ; 0057a841 | DAT_02c828c8
    IMUL EDX,EAX                        ; 0057a847
    ADD ESP,0xc                         ; 0057a84a
    MOV EAX,dword ptr [EBX + 0x2c82864] ; 0057a84d
    PUSH ESI                            ; 0057a853
    MOV dword ptr [EAX + 0x4],EDX       ; 0057a854
    CALL sound_sndwav.cpp_writeWavOutBuffer_FUN_0057a5c0 ; 0057a857
        ;   XREF to: 0057a5c0 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_writeWavOutBuffer_FUN_0057a5c0(int buffer_index)
    ADD ESP,0x4                         ; 0057a85c
    TEST EAX,EAX                        ; 0057a85f
    JZ 0x0057a8a0                       ; 0057a861
        ;   XREF to: 0057a8a0 (CONDITIONAL_JUMP)  ; LAB_0057a8a0
    MOV ECX,dword ptr [0x02c828d4]      ; 0057a863 | DAT_02c828d4
    INC ESI                             ; 0057a869
    ADD EBX,0x4                         ; 0057a86a
    CMP ESI,ECX                         ; 0057a86d
    JL 0x0057a801                       ; 0057a86f
        ;   XREF to: 0057a801 (CONDITIONAL_JUMP)  ; LAB_0057a801
    FILD dword ptr [0x02c828d0]         ; 0057a871 | DAT_02c828d0
        ;   Label: LAB_0057a871
    FILD dword ptr [0x02c828cc]         ; 0057a877 | DAT_02c828cc
    FDIVP                               ; 0057a87d
    FMUL double ptr [0x005f576f]        ; 0057a87f | DAT_005f576f
    SUB ESP,0x4                         ; 0057a885
    FSTP float ptr [ESP]                ; 0057a888
    CALL sound_sndmain.cpp_startSoundThread_FUN_00575c00 ; 0057a88b
        ;   XREF to: 00575c00 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_startSoundThread_FUN_00575c00(double latency_seconds)
    ADD ESP,0x4                         ; 0057a890
    TEST EAX,EAX                        ; 0057a893
    JZ 0x0057a8a0                       ; 0057a895
        ;   XREF to: 0057a8a0 (CONDITIONAL_JUMP)  ; LAB_0057a8a0
    MOV EAX,0x1                         ; 0057a897
    POP EDI                             ; 0057a89c
    POP ESI                             ; 0057a89d
    POP EBX                             ; 0057a89e
    RET                                 ; 0057a89f
    MOV EDX,dword ptr [ESP + 0x10]      ; 0057a8a0
        ;   Label: LAB_0057a8a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 0057a8a4
    PUSH EDX                            ; 0057a8a8
    MOV EAX,dword ptr [EAX]             ; 0057a8a9
    CALL dword ptr [EAX + 0x8]          ; 0057a8ab
    ADD ESP,0x4                         ; 0057a8ae
    XOR EAX,EAX                         ; 0057a8b1
    POP EDI                             ; 0057a8b3
    POP ESI                             ; 0057a8b4
    POP EBX                             ; 0057a8b5
    RET                                 ; 0057a8b6

