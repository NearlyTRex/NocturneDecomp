; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_00557dc0(CWavOutDevice *this_ptr)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005ea575
;   undefined4 DAT_0264b0f4
;   undefined4 DAT_0264b0f8
;   undefined4 DAT_0264b0fc
;   undefined4 DAT_0264b100
;   undefined4 DAT_0264b104
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   sound_sndmain.cpp_FUN_005531d0
;   sound_sndwav.cpp_writeWavOutBuffer_FUN_00557b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557dc0
        ;   Label: sound_sndwav.cpp_CWavOutDevice_start_FUN_00557dc0
    PUSH ESI                            ; 00557dc1
    PUSH EDI                            ; 00557dc2
    MOV EDX,dword ptr [0x0264b104]      ; 00557dc3 | DAT_0264b104
    XOR ESI,ESI                         ; 00557dc9
    TEST EDX,EDX                        ; 00557dcb
    JLE 0x00557e41                      ; 00557dcd
        ;   XREF to: 00557e41 (CONDITIONAL_JUMP)  ; LAB_00557e41
    XOR EBX,EBX                         ; 00557dcf
    PUSH 0x20                           ; 00557dd1
        ;   Label: LAB_00557dd1
    PUSH 0x0                            ; 00557dd3
    MOV EDI,dword ptr [EBX + 0x264b094] ; 00557dd5
    PUSH EDI                            ; 00557ddb
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00557ddc
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EDX,dword ptr [EBX + 0x264b094] ; 00557de1
    MOV EAX,dword ptr [EBX + 0x264b0d4] ; 00557de7
    MOV dword ptr [EDX],EAX             ; 00557ded
    MOV EAX,dword ptr [EBX + 0x264b094] ; 00557def
    MOV dword ptr [EAX + 0xc],ESI       ; 00557df5
    MOV EAX,[0x0264b0f4]                ; 00557df8 | DAT_0264b0f4
    MOV EDX,EAX                         ; 00557dfd
    SAR EDX,0x1f                        ; 00557dff
    SHL EDX,0x3                         ; 00557e02
    SBB EAX,EDX                         ; 00557e05
    SAR EAX,0x3                         ; 00557e07
    IMUL EAX,dword ptr [0x0264b100]     ; 00557e0a | DAT_0264b100
    MOV EDX,dword ptr [0x0264b0f8]      ; 00557e11 | DAT_0264b0f8
    IMUL EDX,EAX                        ; 00557e17
    ADD ESP,0xc                         ; 00557e1a
    MOV EAX,dword ptr [EBX + 0x264b094] ; 00557e1d
    PUSH ESI                            ; 00557e23
    MOV dword ptr [EAX + 0x4],EDX       ; 00557e24
    CALL sound_sndwav.cpp_writeWavOutBuffer_FUN_00557b90 ; 00557e27
        ;   XREF to: 00557b90 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_writeWavOutBuffer_FUN_00557b90(int buffer_index)
    ADD ESP,0x4                         ; 00557e2c
    TEST EAX,EAX                        ; 00557e2f
    JZ 0x00557e70                       ; 00557e31
        ;   XREF to: 00557e70 (CONDITIONAL_JUMP)  ; LAB_00557e70
    MOV ECX,dword ptr [0x0264b104]      ; 00557e33 | DAT_0264b104
    INC ESI                             ; 00557e39
    ADD EBX,0x4                         ; 00557e3a
    CMP ESI,ECX                         ; 00557e3d
    JL 0x00557dd1                       ; 00557e3f
        ;   XREF to: 00557dd1 (CONDITIONAL_JUMP)  ; LAB_00557dd1
    FILD dword ptr [0x0264b100]         ; 00557e41 | DAT_0264b100
        ;   Label: LAB_00557e41
    FILD dword ptr [0x0264b0fc]         ; 00557e47 | DAT_0264b0fc
    FDIVP                               ; 00557e4d
    FMUL double ptr [0x005ea575]        ; 00557e4f | DAT_005ea575
    SUB ESP,0x4                         ; 00557e55
    FSTP float ptr [ESP]                ; 00557e58
    CALL sound_sndmain.cpp_FUN_005531d0 ; 00557e5b
        ;   XREF to: 005531d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005531d0()
    ADD ESP,0x4                         ; 00557e60
    TEST EAX,EAX                        ; 00557e63
    JZ 0x00557e70                       ; 00557e65
        ;   XREF to: 00557e70 (CONDITIONAL_JUMP)  ; LAB_00557e70
    MOV EAX,0x1                         ; 00557e67
    POP EDI                             ; 00557e6c
    POP ESI                             ; 00557e6d
    POP EBX                             ; 00557e6e
    RET                                 ; 00557e6f
    MOV EDX,dword ptr [ESP + 0x10]      ; 00557e70
        ;   Label: LAB_00557e70
    MOV EAX,dword ptr [ESP + 0x10]      ; 00557e74
    PUSH EDX                            ; 00557e78
    MOV EAX,dword ptr [EAX]             ; 00557e79
    CALL dword ptr [EAX + 0x8]          ; 00557e7b
    ADD ESP,0x4                         ; 00557e7e
    XOR EAX,EAX                         ; 00557e81
    POP EDI                             ; 00557e83
    POP ESI                             ; 00557e84
    POP EBX                             ; 00557e85
    RET                                 ; 00557e86

