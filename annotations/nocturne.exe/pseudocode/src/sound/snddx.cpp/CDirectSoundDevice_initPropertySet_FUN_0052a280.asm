; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_snddx_cpp_CDirectSoundDevice_initPropertySet_FUN_0052a280(CDirectSoundDevice *this_ptr)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005940b7
;   TerminatedCString s_Create_temp_secondary_bu_005941a5
;   undefined4 DAT_005bed10
;   undefined4 DAT_005c3918
;   undefined4 DAT_02dc9214
;   undefined4 DAT_02dc9224
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stdio.c_sprintf_FUN_00563c90
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
;   sound_sndmain.cpp_FUN_00529980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a280
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_initPropertySet_FUN_0052a280
    PUSH ESI                            ; 0052a281
    PUSH EDI                            ; 0052a282
    PUSH EBP                            ; 0052a283
    SUB ESP,0x1c0                       ; 0052a284
    MOV EDX,dword ptr [0x02dc9224]      ; 0052a28a | DAT_02dc9224
    TEST EDX,EDX                        ; 0052a290
    JZ 0x0052a2a4                       ; 0052a292
        ;   XREF to: 0052a2a4 (CONDITIONAL_JUMP)  ; LAB_0052a2a4
    MOV EAX,EDX                         ; 0052a294
    PUSH EAX                            ; 0052a296
    MOV EDX,dword ptr [EDX]             ; 0052a297
    CALL dword ptr [EDX + 0x8]          ; 0052a299
    XOR ECX,ECX                         ; 0052a29c
    MOV dword ptr [0x02dc9224],ECX      ; 0052a29e | DAT_02dc9224
    PUSH 0x12                           ; 0052a2a4
        ;   Label: LAB_0052a2a4
    LEA EAX,[ESP + 0x1a8]               ; 0052a2a6
    XOR EBX,EBX                         ; 0052a2ad
    MOV EDI,0x5622                      ; 0052a2af
    PUSH EBX                            ; 0052a2b4
    MOV ESI,0x2                         ; 0052a2b5
    MOV EBP,0xac44                      ; 0052a2ba
    PUSH EAX                            ; 0052a2bf
    MOV dword ptr [ESP + 0x1c4],EBX     ; 0052a2c0
    MOV dword ptr [ESP + 0x1c8],EBX     ; 0052a2c7
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0052a2ce
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV EDX,0x1                         ; 0052a2d3
    ADD ESP,0xc                         ; 0052a2d8
    MOV ECX,0x10                        ; 0052a2db
    LEA EAX,[ESP + 0x190]               ; 0052a2e0
    PUSH 0x14                           ; 0052a2e7
    MOV word ptr [ESP + 0x1a8],DX       ; 0052a2e9
    MOV word ptr [ESP + 0x1aa],DX       ; 0052a2f1
    PUSH EBX                            ; 0052a2f9
    MOV dword ptr [ESP + 0x1b0],EDI     ; 0052a2fa
    MOV word ptr [ESP + 0x1ba],CX       ; 0052a301
    PUSH EAX                            ; 0052a309
    MOV word ptr [ESP + 0x1bc],SI       ; 0052a30a
    MOV dword ptr [ESP + 0x1b8],EBP     ; 0052a312
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0052a319
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV EAX,0x14                        ; 0052a31e
    MOV EDX,0x12                        ; 0052a323
    ADD ESP,0xc                         ; 0052a328
    MOV ECX,0x400                       ; 0052a32b
    MOV dword ptr [ESP + 0x190],EAX     ; 0052a330
    MOV dword ptr [ESP + 0x194],EDX     ; 0052a337
    PUSH EBX                            ; 0052a33e
    LEA EAX,[ESP + 0x1a8]               ; 0052a33f
    LEA EDX,[ESP + 0x1bc]               ; 0052a346
    MOV dword ptr [ESP + 0x1a4],EAX     ; 0052a34d
    PUSH EDX                            ; 0052a354
    LEA EDX,[ESP + 0x198]               ; 0052a355
    MOV EAX,[0x02dc9214]                ; 0052a35c | DAT_02dc9214
    MOV dword ptr [ESP + 0x1a0],ECX     ; 0052a361
    PUSH EDX                            ; 0052a368
    MOV ECX,dword ptr [EAX]             ; 0052a369
    PUSH EAX                            ; 0052a36b
    CALL dword ptr [ECX + 0xc]          ; 0052a36c
    TEST EAX,EAX                        ; 0052a36f
    JNZ 0x0052a3b4                      ; 0052a371
        ;   XREF to: 0052a3b4 (CONDITIONAL_JUMP)  ; LAB_0052a3b4
    LEA EDX,[ESP + 0x1bc]               ; 0052a373
    PUSH EDX                            ; 0052a37a
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0052a37b
    PUSH 0x5c3918                       ; 0052a382 | DAT_005c3918
    MOV EBX,dword ptr [ESP + 0x1c0]     ; 0052a387
    MOV EAX,dword ptr [EAX]             ; 0052a38e
    PUSH EBX                            ; 0052a390
    CALL dword ptr [EAX]                ; 0052a391
    MOV ESI,dword ptr [ESP + 0x1bc]     ; 0052a393
    TEST ESI,ESI                        ; 0052a39a
    JNZ 0x0052a3f2                      ; 0052a39c
        ;   XREF to: 0052a3f2 (CONDITIONAL_JUMP)  ; LAB_0052a3f2
    MOV EBP,dword ptr [ESP + 0x1b8]     ; 0052a39e
    TEST EBP,EBP                        ; 0052a3a5
    JNZ 0x0052a3e2                      ; 0052a3a7
        ;   XREF to: 0052a3e2 (CONDITIONAL_JUMP)  ; LAB_0052a3e2
    ADD ESP,0x1c0                       ; 0052a3a9
        ;   Label: LAB_0052a3a9
    POP EBP                             ; 0052a3af
    POP EDI                             ; 0052a3b0
    POP ESI                             ; 0052a3b1
    POP EBX                             ; 0052a3b2
    RET                                 ; 0052a3b3
    PUSH EAX                            ; 0052a3b4
        ;   Label: LAB_0052a3b4
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052a3b5
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052a3ba
    PUSH EAX                            ; 0052a3bd
    PUSH 0x5941a5                       ; 0052a3be | = "Create temp secondary buffer for prop..."
    PUSH 0x5940b7                       ; 0052a3c3 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0052a3c8
    PUSH EAX                            ; 0052a3cc
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052a3cd
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0052a3d2
    MOV EAX,ESP                         ; 0052a3d5
    PUSH EAX                            ; 0052a3d7
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052a3d8
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 0052a3dd
    JMP 0x0052a3a9                      ; 0052a3e0
        ;   XREF to: 0052a3a9 (UNCONDITIONAL_JUMP)  ; LAB_0052a3a9
    PUSH EBP                            ; 0052a3e2
        ;   Label: LAB_0052a3e2
    MOV EAX,dword ptr [EBP]             ; 0052a3e3
    CALL dword ptr [EAX + 0x8]          ; 0052a3e6
    MOV dword ptr [ESP + 0x1b8],ESI     ; 0052a3e9
    JMP 0x0052a3a9                      ; 0052a3f0
        ;   XREF to: 0052a3a9 (UNCONDITIONAL_JUMP)  ; LAB_0052a3a9
    PUSH 0x2dc9224                      ; 0052a3f2 | DAT_02dc9224
        ;   Label: LAB_0052a3f2
    PUSH 0x5bed10                       ; 0052a3f7 | DAT_005bed10
    MOV EAX,dword ptr [ESI]             ; 0052a3fc
    PUSH ESI                            ; 0052a3fe
    CALL dword ptr [EAX]                ; 0052a3ff
    MOV EBP,dword ptr [ESP + 0x1b8]     ; 0052a401
    TEST EBP,EBP                        ; 0052a408
    JZ 0x0052a41c                       ; 0052a40a
        ;   XREF to: 0052a41c (CONDITIONAL_JUMP)  ; LAB_0052a41c
    PUSH EBP                            ; 0052a40c
    MOV EAX,dword ptr [EBP]             ; 0052a40d
    CALL dword ptr [EAX + 0x8]          ; 0052a410
    XOR ECX,ECX                         ; 0052a413
    MOV dword ptr [ESP + 0x1b8],ECX     ; 0052a415
    MOV EBX,dword ptr [ESP + 0x1bc]     ; 0052a41c
        ;   Label: LAB_0052a41c
    TEST EBX,EBX                        ; 0052a423
    JZ 0x0052a3a9                       ; 0052a425
        ;   XREF to: 0052a3a9 (CONDITIONAL_JUMP)  ; LAB_0052a3a9
    PUSH EBX                            ; 0052a427
    MOV EAX,dword ptr [EBX]             ; 0052a428
    XOR EDI,EDI                         ; 0052a42a
    CALL dword ptr [EAX + 0x8]          ; 0052a42c
    MOV dword ptr [ESP + 0x1bc],EDI     ; 0052a42f
    ADD ESP,0x1c0                       ; 0052a436
    POP EBP                             ; 0052a43c
    POP EDI                             ; 0052a43d
    POP ESI                             ; 0052a43e
    POP EBX                             ; 0052a43f
    RET                                 ; 0052a440

