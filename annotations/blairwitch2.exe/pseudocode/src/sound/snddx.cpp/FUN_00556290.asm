; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00556290(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   TerminatedCString s_sound_snddx_cpp_005e9d0e
;   TerminatedCString s_DirectSoundDevice_alloca_005e9d21
;   TerminatedCString s_sound_snddx_cpp_005e9d5c
;   TerminatedCString s_DirectSoundDevice_alloca_005e9d6f
;   TerminatedCString s_DirectSoundDevice_alloca_005e9da6
;   TerminatedCString s_Duplicate_sound_buffer_005e9dd8
;   TerminatedCString s_get_DirectSound3DBuffer_005e9def
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_00621070
;   undefined4 DAT_007c158c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0264a5c4
;   undefined4 DAT_0264a5d0
;   ... and 11 more
;
; Called Functions:
;   FUN_00436710
;   FUN_004e4500
;   FUN_005549c0
;   FUN_00554ad0
;   FUN_00554e50
;   FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556290
        ;   Label: FUN_00556290
    PUSH ESI                            ; 00556291
    PUSH EDI                            ; 00556292
    PUSH EBP                            ; 00556293
    SUB ESP,0x320                       ; 00556294
    MOV EBP,dword ptr [ESP + 0x338]     ; 0055629a
    TEST EBP,EBP                        ; 005562a1
    JLE 0x005562ae                      ; 005562a3
        ;   XREF to: 005562ae (CONDITIONAL_JUMP)  ; LAB_005562ae
    CMP EBP,0x41                        ; 005562a5
    JL 0x005563d8                       ; 005562a8
        ;   XREF to: 005563d8 (CONDITIONAL_JUMP)  ; LAB_005563d8
    PUSH EBP                            ; 005562ae
        ;   Label: LAB_005562ae
    MOV EBX,0x5e9d0e                    ; 005562af | = "..\\sound\\snddx.cpp"
    MOV ESI,0x47b                       ; 005562b4
    PUSH 0x5e9d21                       ; 005562b9 | = "DirectSoundDevice::allocateSfx - Inva..."
    MOV dword ptr [0x01d046a0],EBX      ; 005562be | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 005562c4 | DAT_01d046a4
    CALL FUN_004e4500                   ; 005562ca
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 005562cf
    CMP dword ptr [0x0264a5c4],0x0      ; 005562d2 | DAT_0264a5c4
        ;   Label: LAB_005562d2
    JNZ 0x005562fd                      ; 005562d9
        ;   XREF to: 005562fd (CONDITIONAL_JUMP)  ; LAB_005562fd
    MOV EAX,0x5e9d5c                    ; 005562db | = "..\\sound\\snddx.cpp"
    MOV EDX,0x47c                       ; 005562e0
    PUSH 0x5e9d6f                       ; 005562e5 | = "DirectSoundDevice::allocateSfx - dSou..."
    MOV [0x01d046a0],EAX                ; 005562ea | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 005562ef | DAT_01d046a4
    CALL FUN_004e4500                   ; 005562f5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 005562fa
    MOV EAX,0x24                        ; 005562fd
        ;   Label: LAB_005562fd
    MOV ECX,dword ptr [0x0264ac34]      ; 00556302 | DAT_0264ac34
    MOV EBX,0x1                         ; 00556308
    TEST ECX,ECX                        ; 0055630d
    JZ 0x00556325                       ; 0055630f
        ;   XREF to: 00556325 (CONDITIONAL_JUMP)  ; LAB_00556325
    ADD EAX,0x24                        ; 00556311
        ;   Label: LAB_00556311
    INC EBX                             ; 00556314
    CMP EAX,0x45c                       ; 00556315
    JGE 0x00556325                      ; 0055631a
        ;   XREF to: 00556325 (CONDITIONAL_JUMP)  ; LAB_00556325
    CMP dword ptr [EAX + 0x264ac10],0x0 ; 0055631c | DAT_0264ac58 | DAT_0264ac7c
    JNZ 0x00556311                      ; 00556323
        ;   XREF to: 00556311 (CONDITIONAL_JUMP)  ; LAB_00556311
    CMP EBX,0x1f                        ; 00556325
        ;   Label: LAB_00556325
    JGE 0x00556403                      ; 00556328
        ;   XREF to: 00556403 (CONDITIONAL_JUMP)  ; LAB_00556403
    LEA EAX,[EBP*0x4 + 0x0]             ; 0055632e
    SUB EAX,EBP                         ; 00556335
    MOV ESI,0x264a5f4                   ; 00556337
    SHL EAX,0x3                         ; 0055633c
    ADD ESI,EAX                         ; 0055633f
    LEA EAX,[EBX*0x8 + 0x0]             ; 00556341
    ADD EAX,EBX                         ; 00556348
    MOV EDI,0x264ac10                   ; 0055634a
    SHL EAX,0x2                         ; 0055634f
    ADD EDI,EAX                         ; 00556352
    MOV EAX,dword ptr [ESI + 0x4]       ; 00556354
    TEST EAX,EAX                        ; 00556357
    JZ 0x0055636c                       ; 00556359
        ;   XREF to: 0055636c (CONDITIONAL_JUMP)  ; LAB_0055636c
    IMUL EDX,EAX,0x24                   ; 0055635b
        ;   Label: LAB_0055635b
    MOV ECX,dword ptr [EDX + 0x264ac10] ; 0055635e
    CMP ECX,dword ptr [ESI]             ; 00556364
    JNZ 0x00556424                      ; 00556366
        ;   XREF to: 00556424 (CONDITIONAL_JUMP)  ; LAB_00556424
    TEST EAX,EAX                        ; 0055636c
        ;   Label: LAB_0055636c
    JNZ 0x00556437                      ; 0055636e
        ;   XREF to: 00556437 (CONDITIONAL_JUMP)  ; LAB_00556437
    MOV EAX,dword ptr [ESI]             ; 00556374
    MOV dword ptr [EDI],EAX             ; 00556376 | DAT_0264ac58
    MOV dword ptr [EDI + 0x8],EBP       ; 00556378 | DAT_0264ac60
    MOV EDX,dword ptr [ESI + 0x4]       ; 0055637b
    TEST EDX,EDX                        ; 0055637e
    JZ 0x00556392                       ; 00556380
        ;   XREF to: 00556392 (CONDITIONAL_JUMP)  ; LAB_00556392
    LEA EAX,[EDX*0x8 + 0x0]             ; 00556382
    ADD EAX,EDX                         ; 00556389
    MOV dword ptr [EAX*0x4 + 0x264ac1c],EBX ; 0055638b
    MOV EAX,dword ptr [ESI + 0x4]       ; 00556392
        ;   Label: LAB_00556392
    MOV dword ptr [EDI + 0xc],0x0       ; 00556395 | DAT_0264ac64
    MOV dword ptr [EDI + 0x10],EAX      ; 0055639c | DAT_0264ac68
    MOV dword ptr [ESI + 0x4],EBX       ; 0055639f
    CMP dword ptr [0x0264a5d0],0x0      ; 005563a2 | DAT_0264a5d0
    JNZ 0x005564b4                      ; 005563a9
        ;   XREF to: 005564b4 (CONDITIONAL_JUMP)  ; LAB_005564b4
    MOV dword ptr [EDI + 0x1c],0xffffffff ; 005563af | DAT_0264ac74
        ;   Label: LAB_005563af
    MOV dword ptr [EDI + 0x20],0xffffffff ; 005563b6 | DAT_0264ac78
    MOV dword ptr [EDI + 0x18],0x0      ; 005563bd | DAT_0264ac70
    MOV EAX,EBX                         ; 005563c4
    MOV dword ptr [EDI + 0x14],0x0      ; 005563c6 | DAT_0264ac6c
    ADD ESP,0x320                       ; 005563cd
        ;   Label: LAB_005563cd
    POP EBP                             ; 005563d3
    POP EDI                             ; 005563d4
    POP ESI                             ; 005563d5
    POP EBX                             ; 005563d6
    RET                                 ; 005563d7
    LEA EAX,[EBP*0x4 + 0x0]             ; 005563d8
        ;   Label: LAB_005563d8
    SUB EAX,EBP                         ; 005563df
    SHL EAX,0x3                         ; 005563e1
    CMP dword ptr [EAX + 0x264a5f4],0x0 ; 005563e4
    JZ 0x005562ae                       ; 005563eb
        ;   XREF to: 005562ae (CONDITIONAL_JUMP)  ; LAB_005562ae
    CMP dword ptr [EAX + 0x264a5fc],0x1 ; 005563f1
    JL 0x005562ae                       ; 005563f8
        ;   XREF to: 005562ae (CONDITIONAL_JUMP)  ; LAB_005562ae
    JMP 0x005562d2                      ; 005563fe
        ;   XREF to: 005562d2 (UNCONDITIONAL_JUMP)  ; LAB_005562d2
    PUSH 0x5e9da6                       ; 00556403 | = "DirectSoundDevice::allocateSfx - no f..."
        ;   Label: LAB_00556403
    MOV EDI,dword ptr [0x00609ed0]      ; 00556408 | PTR_DAT_00609ed0
    PUSH EDI                            ; 0055640e | DAT_007c158c
    CALL FUN_00436710                   ; 0055640f
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0x8                         ; 00556414
    XOR EAX,EAX                         ; 00556417
    ADD ESP,0x320                       ; 00556419
    POP EBP                             ; 0055641f
    POP EDI                             ; 00556420
    POP ESI                             ; 00556421
    POP EBX                             ; 00556422
    RET                                 ; 00556423
    MOV EAX,dword ptr [EDX + 0x264ac20] ; 00556424
        ;   Label: LAB_00556424
    TEST EAX,EAX                        ; 0055642a
    JNZ 0x0055635b                      ; 0055642c
        ;   XREF to: 0055635b (CONDITIONAL_JUMP)  ; LAB_0055635b
    JMP 0x0055636c                      ; 00556432
        ;   XREF to: 0055636c (UNCONDITIONAL_JUMP)  ; LAB_0055636c
    PUSH EDI                            ; 00556437 | DAT_0264ac58
        ;   Label: LAB_00556437
    MOV ECX,dword ptr [ESI]             ; 00556438
    MOV EAX,[0x0264a5c4]                ; 0055643a | DAT_0264a5c4
    PUSH ECX                            ; 0055643f
    MOV EDX,dword ptr [EAX]             ; 00556440
    PUSH EAX                            ; 00556442
    CALL dword ptr [EDX + 0x14]         ; 00556443
    TEST EAX,EAX                        ; 00556446
    JNZ 0x00556473                      ; 00556448
        ;   XREF to: 00556473 (CONDITIONAL_JUMP)  ; LAB_00556473
    MOV EAX,dword ptr [EDI]             ; 0055644a | DAT_0264ac58
    TEST EAX,EAX                        ; 0055644c
    JZ 0x005563cd                       ; 0055644e
        ;   XREF to: 005563cd (CONDITIONAL_JUMP)  ; LAB_005563cd
    MOV EDX,dword ptr [ESI + 0x4]       ; 00556454
    LEA EAX,[EDX*0x8 + 0x0]             ; 00556457
    ADD EAX,EDX                         ; 0055645e
    SHL EAX,0x2                         ; 00556460
    ADD EAX,0x264ac10                   ; 00556463
    MOV dword ptr [EAX + 0xc],EBX       ; 00556468
    MOV dword ptr [EDI + 0x8],EBP       ; 0055646b | DAT_0264ac60
    JMP 0x00556392                      ; 0055646e
        ;   XREF to: 00556392 (UNCONDITIONAL_JUMP)  ; LAB_00556392
    PUSH EAX                            ; 00556473
        ;   Label: LAB_00556473
    CALL FUN_00554ad0                   ; 00556474
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00554ad0()
    ADD ESP,0x4                         ; 00556479
    PUSH EAX                            ; 0055647c
    PUSH 0x5e9dd8                       ; 0055647d | = "Duplicate sound buffer"
    PUSH 0x5e9a3b                       ; 00556482 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 00556487
    PUSH EAX                            ; 0055648e
    CALL FUN_005b7790                   ; 0055648f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x10                        ; 00556494
    LEA EAX,[ESP + 0x190]               ; 00556497
    PUSH EAX                            ; 0055649e
    CALL FUN_005549c0                   ; 0055649f
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005549c0()
    ADD ESP,0x4                         ; 005564a4
    XOR EAX,EAX                         ; 005564a7
    ADD ESP,0x320                       ; 005564a9
    POP EBP                             ; 005564af
    POP EDI                             ; 005564b0
    POP ESI                             ; 005564b1
    POP EBX                             ; 005564b2
    RET                                 ; 005564b3
    LEA EDX,[EDI + 0x4]                 ; 005564b4
        ;   Label: LAB_005564b4
    PUSH EDX                            ; 005564b7
    MOV EAX,dword ptr [EDI]             ; 005564b8 | DAT_0264ac58
    PUSH 0x621070                       ; 005564ba | DAT_00621070
    MOV ECX,dword ptr [EAX]             ; 005564bf
    PUSH EAX                            ; 005564c1
    CALL dword ptr [ECX]                ; 005564c2
    TEST EAX,EAX                        ; 005564c4
    JNZ 0x005564e8                      ; 005564c6
        ;   XREF to: 005564e8 (CONDITIONAL_JUMP)  ; LAB_005564e8
    CMP dword ptr [EDI + 0x4],0x0       ; 005564c8 | DAT_0264ac5c
        ;   Label: LAB_005564c8
    JNZ 0x005563af                      ; 005564cc
        ;   XREF to: 005563af (CONDITIONAL_JUMP)  ; LAB_005563af
    PUSH EBX                            ; 005564d2
    CALL FUN_00554e50                   ; 005564d3
        ;   XREF to: 00554e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00554e50()
    ADD ESP,0x4                         ; 005564d8
    XOR EAX,EAX                         ; 005564db
    ADD ESP,0x320                       ; 005564dd
    POP EBP                             ; 005564e3
    POP EDI                             ; 005564e4
    POP ESI                             ; 005564e5
    POP EBX                             ; 005564e6
    RET                                 ; 005564e7
    PUSH EAX                            ; 005564e8
        ;   Label: LAB_005564e8
    CALL FUN_00554ad0                   ; 005564e9
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00554ad0()
    ADD ESP,0x4                         ; 005564ee
    PUSH EAX                            ; 005564f1
    PUSH 0x5e9def                       ; 005564f2 | = "get DirectSound3DBuffer interface fro..."
    PUSH 0x5e9a3b                       ; 005564f7 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005564fc
    PUSH EAX                            ; 00556500
    CALL FUN_005b7790                   ; 00556501
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x10                        ; 00556506
    MOV EAX,ESP                         ; 00556509
    PUSH EAX                            ; 0055650b
    CALL FUN_005549c0                   ; 0055650c
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005549c0()
    ADD ESP,0x4                         ; 00556511
    JMP 0x005564c8                      ; 00556514
        ;   XREF to: 005564c8 (UNCONDITIONAL_JUMP)  ; LAB_005564c8

