; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavInDevice_start_FUN_0055de50(CWavInDevice *this_ptr)
;
; Parameters:
; CWavInDevice *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   void* PTR_waveInStart_005b3474 = 001b39a8
;   TerminatedCString s_waveInStart_failed_005d508f
;   undefined4 DAT_02cf5504
;   undefined4 DAT_02cf5648
;   undefined4 DAT_02cf564c
;   undefined4 DAT_02cf5658
;   undefined4 DAT_02cf565c
;   undefined4 DAT_02cf5670
;   undefined4 DAT_02cf5674
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   sound_sndmain.cpp_FUN_0055a560
;   sound_sndwav.cpp_writeWavInBuffer_FUN_0055dcf0
;   waveInStart
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055de50
        ;   Label: sound_sndwav.cpp_CWavInDevice_start_FUN_0055de50
    PUSH ESI                            ; 0055de51
    PUSH EDI                            ; 0055de52
    PUSH EBP                            ; 0055de53
    MOV EDI,dword ptr [ESP + 0x14]      ; 0055de54
    MOV EDX,dword ptr [0x02cf565c]      ; 0055de58 | DAT_02cf565c
    XOR ESI,ESI                         ; 0055de5e
    TEST EDX,EDX                        ; 0055de60
    JLE 0x0055ded4                      ; 0055de62
        ;   XREF to: 0055ded4 (CONDITIONAL_JUMP)  ; LAB_0055ded4
    XOR EBX,EBX                         ; 0055de64
    PUSH 0x20                           ; 0055de66
        ;   Label: LAB_0055de66
    PUSH 0x0                            ; 0055de68
    MOV EBP,dword ptr [EBX + 0x2cf5558] ; 0055de6a
    PUSH EBP                            ; 0055de70
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055de71
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV EDX,dword ptr [EBX + 0x2cf5558] ; 0055de76
    MOV EAX,dword ptr [EBX + 0x2cf55f8] ; 0055de7c
    MOV dword ptr [EDX],EAX             ; 0055de82
    MOV EAX,dword ptr [EBX + 0x2cf5558] ; 0055de84
    MOV dword ptr [EAX + 0xc],ESI       ; 0055de8a
    MOV EAX,[0x02cf5648]                ; 0055de8d | DAT_02cf5648
    MOV EDX,EAX                         ; 0055de92
    SAR EDX,0x1f                        ; 0055de94
    SHL EDX,0x3                         ; 0055de97
    SBB EAX,EDX                         ; 0055de9a
    SAR EAX,0x3                         ; 0055de9c
    IMUL EAX,dword ptr [0x02cf5658]     ; 0055de9f | DAT_02cf5658
    IMUL EAX,dword ptr [0x02cf564c]     ; 0055dea6 | DAT_02cf564c
    ADD ESP,0xc                         ; 0055dead
    MOV EDX,dword ptr [EBX + 0x2cf5558] ; 0055deb0
    PUSH ESI                            ; 0055deb6
    MOV dword ptr [EDX + 0x4],EAX       ; 0055deb7
    CALL sound_sndwav.cpp_writeWavInBuffer_FUN_0055dcf0 ; 0055deba
        ;   XREF to: 0055dcf0 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_writeWavInBuffer_FUN_0055dcf0(int buffer_index)
    ADD ESP,0x4                         ; 0055debf
    TEST EAX,EAX                        ; 0055dec2
    JZ 0x0055df05                       ; 0055dec4
        ;   XREF to: 0055df05 (CONDITIONAL_JUMP)  ; LAB_0055df05
    MOV ECX,dword ptr [0x02cf565c]      ; 0055dec6 | DAT_02cf565c
    INC ESI                             ; 0055decc
    ADD EBX,0x4                         ; 0055decd
    CMP ESI,ECX                         ; 0055ded0
    JL 0x0055de66                       ; 0055ded2
        ;   XREF to: 0055de66 (CONDITIONAL_JUMP)  ; LAB_0055de66
    MOV EAX,[0x02cf565c]                ; 0055ded4 | DAT_02cf565c
        ;   Label: LAB_0055ded4
    DEC EAX                             ; 0055ded9
    MOV EBX,dword ptr [0x02cf5504]      ; 0055deda | DAT_02cf5504
    MOV [0x02cf5670],EAX                ; 0055dee0 | DAT_02cf5670
    MOV EAX,[0x02cf5658]                ; 0055dee5 | DAT_02cf5658
    PUSH EBX                            ; 0055deea
    MOV [0x02cf5674],EAX                ; 0055deeb | DAT_02cf5674
    CALL dword ptr CS:[0x5b3474]        ; 0055def0 | PTR_waveInStart_005b3474
    TEST EAX,EAX                        ; 0055def7
    JNZ 0x0055df15                      ; 0055def9
        ;   XREF to: 0055df15 (CONDITIONAL_JUMP)  ; LAB_0055df15
    MOV EAX,0x1                         ; 0055defb
    POP EBP                             ; 0055df00
    POP EDI                             ; 0055df01
    POP ESI                             ; 0055df02
    POP EBX                             ; 0055df03
    RET                                 ; 0055df04
    PUSH EDI                            ; 0055df05
        ;   Label: LAB_0055df05
    MOV EAX,dword ptr [EDI]             ; 0055df06
    CALL dword ptr [EAX + 0x8]          ; 0055df08
    ADD ESP,0x4                         ; 0055df0b
    XOR EAX,EAX                         ; 0055df0e
    POP EBP                             ; 0055df10
    POP EDI                             ; 0055df11
    POP ESI                             ; 0055df12
    POP EBX                             ; 0055df13
    RET                                 ; 0055df14
    PUSH 0x5d508f                       ; 0055df15 | = "waveInStart failed!"
        ;   Label: LAB_0055df15
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055df1a
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055df1f
    MOV EAX,dword ptr [EDI]             ; 0055df22
    PUSH EDI                            ; 0055df24
    CALL dword ptr [EAX + 0x8]          ; 0055df25
    ADD ESP,0x4                         ; 0055df28
    XOR EAX,EAX                         ; 0055df2b
    POP EBP                             ; 0055df2d
    POP EDI                             ; 0055df2e
    POP ESI                             ; 0055df2f
    POP EBX                             ; 0055df30
    RET                                 ; 0055df31

