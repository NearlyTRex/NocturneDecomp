; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_0055d920(CWavOutDevice *this_ptr)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005d4fc8
;   undefined4 DAT_02cf54f0
;   undefined4 DAT_02cf54f4
;   undefined4 DAT_02cf54f8
;   undefined4 DAT_02cf54fc
;   undefined4 DAT_02cf5500
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   sound_sndmain.cpp_startSoundThread_FUN_00558d70
;   sound_sndwav.cpp_writeWavOutBuffer_FUN_0055d6f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d920
        ;   Label: sound_sndwav.cpp_CWavOutDevice_start_FUN_0055d920
    PUSH ESI                            ; 0055d921
    PUSH EDI                            ; 0055d922
    MOV EDX,dword ptr [0x02cf5500]      ; 0055d923 | DAT_02cf5500
    XOR ESI,ESI                         ; 0055d929
    TEST EDX,EDX                        ; 0055d92b
    JLE 0x0055d9a1                      ; 0055d92d
        ;   XREF to: 0055d9a1 (CONDITIONAL_JUMP)  ; LAB_0055d9a1
    XOR EBX,EBX                         ; 0055d92f
    PUSH 0x20                           ; 0055d931
        ;   Label: LAB_0055d931
    PUSH 0x0                            ; 0055d933
    MOV EDI,dword ptr [EBX + 0x2cf5490] ; 0055d935
    PUSH EDI                            ; 0055d93b
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055d93c
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV EDX,dword ptr [EBX + 0x2cf5490] ; 0055d941
    MOV EAX,dword ptr [EBX + 0x2cf54d0] ; 0055d947
    MOV dword ptr [EDX],EAX             ; 0055d94d
    MOV EAX,dword ptr [EBX + 0x2cf5490] ; 0055d94f
    MOV dword ptr [EAX + 0xc],ESI       ; 0055d955
    MOV EAX,[0x02cf54f0]                ; 0055d958 | DAT_02cf54f0
    MOV EDX,EAX                         ; 0055d95d
    SAR EDX,0x1f                        ; 0055d95f
    SHL EDX,0x3                         ; 0055d962
    SBB EAX,EDX                         ; 0055d965
    SAR EAX,0x3                         ; 0055d967
    IMUL EAX,dword ptr [0x02cf54fc]     ; 0055d96a | DAT_02cf54fc
    MOV EDX,dword ptr [0x02cf54f4]      ; 0055d971 | DAT_02cf54f4
    IMUL EDX,EAX                        ; 0055d977
    ADD ESP,0xc                         ; 0055d97a
    MOV EAX,dword ptr [EBX + 0x2cf5490] ; 0055d97d
    PUSH ESI                            ; 0055d983
    MOV dword ptr [EAX + 0x4],EDX       ; 0055d984
    CALL sound_sndwav.cpp_writeWavOutBuffer_FUN_0055d6f0 ; 0055d987
        ;   XREF to: 0055d6f0 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_writeWavOutBuffer_FUN_0055d6f0(int buffer_index)
    ADD ESP,0x4                         ; 0055d98c
    TEST EAX,EAX                        ; 0055d98f
    JZ 0x0055d9d0                       ; 0055d991
        ;   XREF to: 0055d9d0 (CONDITIONAL_JUMP)  ; LAB_0055d9d0
    MOV ECX,dword ptr [0x02cf5500]      ; 0055d993 | DAT_02cf5500
    INC ESI                             ; 0055d999
    ADD EBX,0x4                         ; 0055d99a
    CMP ESI,ECX                         ; 0055d99d
    JL 0x0055d931                       ; 0055d99f
        ;   XREF to: 0055d931 (CONDITIONAL_JUMP)  ; LAB_0055d931
    FILD dword ptr [0x02cf54fc]         ; 0055d9a1 | DAT_02cf54fc
        ;   Label: LAB_0055d9a1
    FILD dword ptr [0x02cf54f8]         ; 0055d9a7 | DAT_02cf54f8
    FDIVP                               ; 0055d9ad
    FMUL double ptr [0x005d4fc8]        ; 0055d9af | DAT_005d4fc8
    SUB ESP,0x4                         ; 0055d9b5
    FSTP float ptr [ESP]                ; 0055d9b8
    CALL sound_sndmain.cpp_startSoundThread_FUN_00558d70 ; 0055d9bb
        ;   XREF to: 00558d70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_startSoundThread_FUN_00558d70()
    ADD ESP,0x4                         ; 0055d9c0
    TEST EAX,EAX                        ; 0055d9c3
    JZ 0x0055d9d0                       ; 0055d9c5
        ;   XREF to: 0055d9d0 (CONDITIONAL_JUMP)  ; LAB_0055d9d0
    MOV EAX,0x1                         ; 0055d9c7
    POP EDI                             ; 0055d9cc
    POP ESI                             ; 0055d9cd
    POP EBX                             ; 0055d9ce
    RET                                 ; 0055d9cf
    MOV EDX,dword ptr [ESP + 0x10]      ; 0055d9d0
        ;   Label: LAB_0055d9d0
    MOV EAX,dword ptr [ESP + 0x10]      ; 0055d9d4
    PUSH EDX                            ; 0055d9d8
    MOV EAX,dword ptr [EAX]             ; 0055d9d9
    CALL dword ptr [EAX + 0x8]          ; 0055d9db
    ADD ESP,0x4                         ; 0055d9de
    XOR EAX,EAX                         ; 0055d9e1
    POP EDI                             ; 0055d9e3
    POP ESI                             ; 0055d9e4
    POP EBX                             ; 0055d9e5
    RET                                 ; 0055d9e6

