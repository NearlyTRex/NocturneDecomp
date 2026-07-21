; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndwav_cpp_CWavOutDevice_start_FUN_0052c340(int *param_1)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; Referenced Globals:
;   undefined4 DAT_00594925
;   undefined4 DAT_02dc942c
;   undefined4 DAT_02dc9434
;   undefined4 DAT_02dc9438
;   undefined4 DAT_02dc943c
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;   sound_sndmain.cpp_startSoundThread_FUN_005286d0
;   sound_sndwav.cpp_writeWavOutBuffer_FUN_0052c130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c340
        ;   Label: sound_sndwav.cpp_CWavOutDevice_start_FUN_0052c340
    PUSH ESI                            ; 0052c341
    PUSH EDI                            ; 0052c342
    PUSH EBP                            ; 0052c343
    MOV EDX,dword ptr [0x02dc943c]      ; 0052c344 | DAT_02dc943c
    XOR ESI,ESI                         ; 0052c34a
    TEST EDX,EDX                        ; 0052c34c
    JLE 0x0052c3a6                      ; 0052c34e
        ;   XREF to: 0052c3a6 (CONDITIONAL_JUMP)  ; LAB_0052c3a6
    XOR EBX,EBX                         ; 0052c350
    PUSH 0x20                           ; 0052c352
        ;   Label: LAB_0052c352
    PUSH 0x0                            ; 0052c354
    MOV EDI,dword ptr [EBX + 0x2dc93a8] ; 0052c356
    PUSH EDI                            ; 0052c35c
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0052c35d
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    MOV EAX,dword ptr [EBX + 0x2dc93a8] ; 0052c362
    MOV EDX,dword ptr [EBX + 0x2dc93c8] ; 0052c368
    MOV dword ptr [EAX],EDX             ; 0052c36e
    MOV EAX,dword ptr [EBX + 0x2dc93a8] ; 0052c370
    MOV dword ptr [EAX + 0xc],ESI       ; 0052c376
    ADD ESP,0xc                         ; 0052c379
    MOV EAX,dword ptr [EBX + 0x2dc93a8] ; 0052c37c
    MOV EDX,dword ptr [0x02dc9438]      ; 0052c382 | DAT_02dc9438
    PUSH ESI                            ; 0052c388
    MOV dword ptr [EAX + 0x4],EDX       ; 0052c389
    CALL sound_sndwav.cpp_writeWavOutBuffer_FUN_0052c130 ; 0052c38c
        ;   XREF to: 0052c130 (UNCONDITIONAL_CALL)  ; undefined sound_sndwav.cpp_writeWavOutBuffer_FUN_0052c130()
    ADD ESP,0x4                         ; 0052c391
    TEST EAX,EAX                        ; 0052c394
    JZ 0x0052c3d6                       ; 0052c396
        ;   XREF to: 0052c3d6 (CONDITIONAL_JUMP)  ; LAB_0052c3d6
    MOV ECX,dword ptr [0x02dc943c]      ; 0052c398 | DAT_02dc943c
    INC ESI                             ; 0052c39e
    ADD EBX,0x4                         ; 0052c39f
    CMP ESI,ECX                         ; 0052c3a2
    JL 0x0052c352                       ; 0052c3a4
        ;   XREF to: 0052c352 (CONDITIONAL_JUMP)  ; LAB_0052c352
    FILD dword ptr [0x02dc9434]         ; 0052c3a6 | DAT_02dc9434
        ;   Label: LAB_0052c3a6
    FILD dword ptr [0x02dc942c]         ; 0052c3ac | DAT_02dc942c
    FDIVP                               ; 0052c3b2
    FMUL double ptr [0x00594925]        ; 0052c3b4 | DAT_00594925
    SUB ESP,0x8                         ; 0052c3ba
    FSTP double ptr [ESP]               ; 0052c3bd
    CALL sound_sndmain.cpp_startSoundThread_FUN_005286d0 ; 0052c3c0
        ;   XREF to: 005286d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_startSoundThread_FUN_005286d0()
    ADD ESP,0x8                         ; 0052c3c5
    TEST EAX,EAX                        ; 0052c3c8
    JZ 0x0052c3d6                       ; 0052c3ca
        ;   XREF to: 0052c3d6 (CONDITIONAL_JUMP)  ; LAB_0052c3d6
    MOV EAX,0x1                         ; 0052c3cc
    POP EBP                             ; 0052c3d1
    POP EDI                             ; 0052c3d2
    POP ESI                             ; 0052c3d3
    POP EBX                             ; 0052c3d4
    RET                                 ; 0052c3d5
    MOV EBP,dword ptr [ESP + 0x14]      ; 0052c3d6
        ;   Label: LAB_0052c3d6
    MOV EAX,dword ptr [ESP + 0x14]      ; 0052c3da
    PUSH EBP                            ; 0052c3de
    MOV EAX,dword ptr [EAX]             ; 0052c3df
    CALL dword ptr [EAX + 0x8]          ; 0052c3e1
    ADD ESP,0x4                         ; 0052c3e4
    XOR EAX,EAX                         ; 0052c3e7
    POP EBP                             ; 0052c3e9
    POP EDI                             ; 0052c3ea
    POP ESI                             ; 0052c3eb
    POP EBX                             ; 0052c3ec
    RET                                 ; 0052c3ed

