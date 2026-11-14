; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_snddx_cpp_FUN_0055b880(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   undefined4 s_Create_secondary_buffer_005d46f0+1
;   TerminatedCString s_DirectSoundDevice_alloca_005d4709
;   undefined4 DAT_02cf49c4
;   undefined4 DAT_02cf49d0
;   undefined4 DAT_02cf4a0c
;   undefined4 DAT_02cf4a24
;   undefined4 DAT_02cf4a2c
;   undefined4 DAT_02cf4a30
;   undefined4 DAT_02cf4a34
;   undefined4 DAT_02cf4a3c
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c_sprintf_FUN_005a28c0
;   sound_snddx.cpp_FUN_0055a670
;   sound_sndmain.cpp_logSoundError_FUN_0055a560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055b880
        ;   Label: sound_snddx.cpp_FUN_0055b880
    PUSH ESI                            ; 0055b881
    PUSH EDI                            ; 0055b882
    PUSH EBP                            ; 0055b883
    SUB ESP,0x1c8                       ; 0055b884
    MOV ESI,dword ptr [ESP + 0x1e0]     ; 0055b88a
    CMP dword ptr [0x02cf49c4],0x0      ; 0055b891 | DAT_02cf49c4
    JZ 0x0055ba60                       ; 0055b898
        ;   XREF to: 0055ba60 (CONDITIONAL_JUMP)  ; LAB_0055ba60
    MOV EAX,0x18                        ; 0055b89e
    MOV ECX,dword ptr [0x02cf4a0c]      ; 0055b8a3 | DAT_02cf4a0c
    MOV EBX,0x1                         ; 0055b8a9
    TEST ECX,ECX                        ; 0055b8ae
    JZ 0x0055b8c6                       ; 0055b8b0
        ;   XREF to: 0055b8c6 (CONDITIONAL_JUMP)  ; LAB_0055b8c6
    ADD EAX,0x18                        ; 0055b8b2
        ;   Label: LAB_0055b8b2
    INC EBX                             ; 0055b8b5
    CMP EAX,0x618                       ; 0055b8b6
    JGE 0x0055b8c6                      ; 0055b8bb
        ;   XREF to: 0055b8c6 (CONDITIONAL_JUMP)  ; LAB_0055b8c6
    CMP dword ptr [EAX + 0x2cf49f4],0x0 ; 0055b8bd | DAT_02cf4a24 | DAT_02cf4a3c
    JNZ 0x0055b8b2                      ; 0055b8c4
        ;   XREF to: 0055b8b2 (CONDITIONAL_JUMP)  ; LAB_0055b8b2
    CMP EBX,0x41                        ; 0055b8c6
        ;   Label: LAB_0055b8c6
    JGE 0x0055ba60                      ; 0055b8c9
        ;   XREF to: 0055ba60 (CONDITIONAL_JUMP)  ; LAB_0055ba60
    PUSH 0x12                           ; 0055b8cf
    PUSH 0x0                            ; 0055b8d1
    LEA EAX,[ESP + 0x1bc]               ; 0055b8d3
    PUSH EAX                            ; 0055b8da
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055b8db
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055b8e0
    PUSH 0x24                           ; 0055b8e3
    PUSH 0x0                            ; 0055b8e5
    LEA EAX,[ESP + 0x198]               ; 0055b8e7
    PUSH EAX                            ; 0055b8ee
    MOV EBP,0x24                        ; 0055b8ef
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055b8f4
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV EAX,0xa0                        ; 0055b8f9
    ADD ESP,0xc                         ; 0055b8fe
    MOV EDX,dword ptr [0x02cf49d0]      ; 0055b901 | DAT_02cf49d0
    MOV dword ptr [ESP + 0x190],EBP     ; 0055b907
    MOV dword ptr [ESP + 0x194],EAX     ; 0055b90e
    TEST EDX,EDX                        ; 0055b915
    JNZ 0x0055ba6d                      ; 0055b917
        ;   XREF to: 0055ba6d (CONDITIONAL_JUMP)  ; LAB_0055ba6d
    MOV dword ptr [ESP + 0x194],0xe0    ; 0055b91d
    MOV EAX,dword ptr [ESI + 0x100]     ; 0055b928
        ;   Label: LAB_0055b928
    CMP EAX,0x2                         ; 0055b92e
    JNZ 0x0055ba7d                      ; 0055b931
        ;   XREF to: 0055ba7d (CONDITIONAL_JUMP)  ; LAB_0055ba7d
    MOV word ptr [ESP + 0x1b4],0x20     ; 0055b937
    MOV AX,word ptr [ESI + 0x108]       ; 0055b941
    MOV word ptr [ESP + 0x1b6],AX       ; 0055b948
    MOV EAX,dword ptr [ESI + 0x10c]     ; 0055b950
    XOR EDX,EDX                         ; 0055b956
    MOV dword ptr [ESP + 0x1b8],EAX     ; 0055b958
    MOV DX,word ptr [ESP + 0x1b6]       ; 0055b95f
    MOV EAX,dword ptr [ESI + 0x104]     ; 0055b967
    IMUL EDX,EAX                        ; 0055b96d
    MOV EAX,EDX                         ; 0055b970
    SAR EDX,0x1f                        ; 0055b972
    SHL EDX,0x4                         ; 0055b975
    SBB EAX,EDX                         ; 0055b978
    SAR EAX,0x4                         ; 0055b97a
    MOV word ptr [ESP + 0x1c0],AX       ; 0055b97d
    XOR EAX,EAX                         ; 0055b985
    MOV EDX,dword ptr [ESI + 0x10c]     ; 0055b987
    MOV AX,word ptr [ESP + 0x1c0]       ; 0055b98d
    IMUL EDX,EAX                        ; 0055b995
    MOV word ptr [ESP + 0x1c2],0x4      ; 0055b998
    MOV dword ptr [ESP + 0x1bc],EDX     ; 0055b9a2
    MOV EDX,dword ptr [ESI + 0x110]     ; 0055b9a9
    MOV ECX,dword ptr [ESI + 0x108]     ; 0055b9af
    IMUL EDX,ECX                        ; 0055b9b5
    MOV EAX,EDX                         ; 0055b9b8
    SAR EDX,0x1f                        ; 0055b9ba
    SUB EAX,EDX                         ; 0055b9bd
    SAR EAX,0x1                         ; 0055b9bf
    MOV dword ptr [ESP + 0x198],EAX     ; 0055b9c1
        ;   Label: LAB_0055b9c1
    LEA EAX,[ESP + 0x1b4]               ; 0055b9c8
    MOV dword ptr [ESP + 0x1a0],EAX     ; 0055b9cf
    LEA EAX,[EBX*0x4 + 0x0]             ; 0055b9d6
    SUB EAX,EBX                         ; 0055b9dd
    LEA EDI,[EAX*0x8 + 0x0]             ; 0055b9df
    MOV EAX,0x2cf49f4                   ; 0055b9e6
    PUSH 0x0                            ; 0055b9eb
    ADD EAX,EDI                         ; 0055b9ed
    PUSH EAX                            ; 0055b9ef | DAT_02cf4a24
    LEA EAX,[ESP + 0x198]               ; 0055b9f0
    MOV EDX,dword ptr [0x02cf49c4]      ; 0055b9f7 | DAT_02cf49c4
    PUSH EAX                            ; 0055b9fd
    MOV ECX,dword ptr [EDX]             ; 0055b9fe
    PUSH EDX                            ; 0055ba00
    CALL dword ptr [ECX + 0xc]          ; 0055ba01
    TEST EAX,EAX                        ; 0055ba04
    JNZ 0x0055bafd                      ; 0055ba06
        ;   XREF to: 0055bafd (CONDITIONAL_JUMP)  ; LAB_0055bafd
    CMP dword ptr [EDI + 0x2cf49f4],0x0 ; 0055ba0c | DAT_02cf4a24
    JZ 0x0055bb29                       ; 0055ba13
        ;   XREF to: 0055bb29 (CONDITIONAL_JUMP)  ; LAB_0055bb29
    MOV EDX,dword ptr [ESI + 0x104]     ; 0055ba19
    MOV EAX,dword ptr [ESI + 0x108]     ; 0055ba1f
    SHL EDX,0x8                         ; 0055ba25
    IMUL EDX,EAX                        ; 0055ba28
    MOV EAX,EDX                         ; 0055ba2b
    SAR EDX,0x1f                        ; 0055ba2d
    SHL EDX,0x3                         ; 0055ba30
    SBB EAX,EDX                         ; 0055ba33
    SAR EAX,0x3                         ; 0055ba35
    XOR EDX,EDX                         ; 0055ba38
    MOV dword ptr [EDI + 0x2cf49fc],EAX ; 0055ba3a | DAT_02cf4a2c
    MOV EAX,dword ptr [ESP + 0x198]     ; 0055ba40
    MOV dword ptr [EDI + 0x2cf4a04],EDX ; 0055ba47 | DAT_02cf4a34
    MOV dword ptr [EDI + 0x2cf4a00],EAX ; 0055ba4d | DAT_02cf4a30
    MOV EAX,EBX                         ; 0055ba53
    ADD ESP,0x1c8                       ; 0055ba55
    POP EBP                             ; 0055ba5b
    POP EDI                             ; 0055ba5c
    POP ESI                             ; 0055ba5d
    POP EBX                             ; 0055ba5e
    RET                                 ; 0055ba5f
    XOR EAX,EAX                         ; 0055ba60
        ;   Label: LAB_0055ba60
    ADD ESP,0x1c8                       ; 0055ba62
    POP EBP                             ; 0055ba68
    POP EDI                             ; 0055ba69
    POP ESI                             ; 0055ba6a
    POP EBX                             ; 0055ba6b
    RET                                 ; 0055ba6c
    MOV dword ptr [ESP + 0x194],0xb0    ; 0055ba6d
        ;   Label: LAB_0055ba6d
    JMP 0x0055b928                      ; 0055ba78
        ;   XREF to: 0055b928 (UNCONDITIONAL_JUMP)  ; LAB_0055b928
    MOV word ptr [ESP + 0x1b4],0x1      ; 0055ba7d
        ;   Label: LAB_0055ba7d
    MOV AX,word ptr [ESI + 0x108]       ; 0055ba87
    MOV word ptr [ESP + 0x1b6],AX       ; 0055ba8e
    MOV EAX,dword ptr [ESI + 0x10c]     ; 0055ba96
    XOR EDX,EDX                         ; 0055ba9c
    MOV dword ptr [ESP + 0x1b8],EAX     ; 0055ba9e
    MOV DX,word ptr [ESP + 0x1b6]       ; 0055baa5
    MOV EBP,dword ptr [ESI + 0x104]     ; 0055baad
    IMUL EDX,EBP                        ; 0055bab3
    MOV EAX,EDX                         ; 0055bab6
    SAR EDX,0x1f                        ; 0055bab8
    SHL EDX,0x3                         ; 0055babb
    SBB EAX,EDX                         ; 0055babe
    SAR EAX,0x3                         ; 0055bac0
    XOR EDX,EDX                         ; 0055bac3
    MOV word ptr [ESP + 0x1c0],AX       ; 0055bac5
    MOV DX,AX                           ; 0055bacd
    MOV EAX,dword ptr [ESI + 0x10c]     ; 0055bad0
    IMUL EAX,EDX                        ; 0055bad6
    MOV dword ptr [ESP + 0x1bc],EAX     ; 0055bad9
    MOV AX,word ptr [ESI + 0x104]       ; 0055bae0
    MOV word ptr [ESP + 0x1c2],AX       ; 0055bae7
    MOV EAX,dword ptr [ESI + 0x110]     ; 0055baef
    IMUL EAX,EDX                        ; 0055baf5
    JMP 0x0055b9c1                      ; 0055baf8
        ;   XREF to: 0055b9c1 (UNCONDITIONAL_JUMP)  ; LAB_0055b9c1
    PUSH EAX                            ; 0055bafd
        ;   Label: LAB_0055bafd
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055bafe
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055bb03
    PUSH EAX                            ; 0055bb06
    PUSH 0x5d46f1                       ; 0055bb07 | s_Create_secondary_buffer_005d46f0+1
    PUSH 0x5d452f                       ; 0055bb0c | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0055bb11
    PUSH EAX                            ; 0055bb15
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055bb16
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055bb1b
    MOV EAX,ESP                         ; 0055bb1e
    PUSH EAX                            ; 0055bb20
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055bb21
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055bb26
    PUSH 0x5d4709                       ; 0055bb29 | = "DirectSoundDevice::allocateSample - a..."
        ;   Label: LAB_0055bb29
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055bb2e
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055bb33
    XOR EAX,EAX                         ; 0055bb36
    ADD ESP,0x1c8                       ; 0055bb38
    POP EBP                             ; 0055bb3e
    POP EDI                             ; 0055bb3f
    POP ESI                             ; 0055bb40
    POP EBX                             ; 0055bb41
    RET                                 ; 0055bb42

