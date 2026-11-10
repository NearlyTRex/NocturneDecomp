; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndmain_cpp_allocateHwSample_FUN_0056f360(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c78ff0
;   undefined4 DAT_02c80650
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020
;   sound_sndmain.cpp_FUN_005773f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f360
        ;   Label: sound_sndmain.cpp_allocateHwSample_FUN_0056f360
    PUSH ESI                            ; 0056f361
    CMP dword ptr [0x02c80650],0x0      ; 0056f362 | DAT_02c80650
    JZ 0x0056f3bf                       ; 0056f369
        ;   XREF to: 0056f3bf (CONDITIONAL_JUMP)  ; LAB_0056f3bf
    XOR ESI,ESI                         ; 0056f36b
    LEA EDX,[ESP + 0xc]                 ; 0056f36d
        ;   Label: LAB_0056f36d
    MOV EAX,[0x02c80650]                ; 0056f371 | DAT_02c80650
    PUSH EDX                            ; 0056f376
    MOV ECX,dword ptr [EAX]             ; 0056f377
    PUSH EAX                            ; 0056f379
    CALL dword ptr [ECX + 0x30]         ; 0056f37a
    ADD ESP,0x8                         ; 0056f37d
    TEST EAX,EAX                        ; 0056f380
    JNZ 0x0056f3c1                      ; 0056f382
        ;   XREF to: 0056f3c1 (CONDITIONAL_JUMP)  ; LAB_0056f3c1
    MOV EAX,[0x02c78ff0]                ; 0056f384 | DAT_02c78ff0
    MOV EBX,ESI                         ; 0056f389
    IMUL ECX,EAX,0x1b0                  ; 0056f38b
    INC EAX                             ; 0056f391
        ;   Label: LAB_0056f391
    CMP EAX,0x40                        ; 0056f392
    JL 0x0056f399                       ; 0056f395
        ;   XREF to: 0056f399 (CONDITIONAL_JUMP)  ; LAB_0056f399
    MOV EAX,ESI                         ; 0056f397
    IMUL EDX,EAX,0x1b0                  ; 0056f399
        ;   Label: LAB_0056f399
    CMP ESI,dword ptr [EDX + 0x2c79148] ; 0056f39f
    JZ 0x0056f3c4                       ; 0056f3a5
        ;   XREF to: 0056f3c4 (CONDITIONAL_JUMP)  ; LAB_0056f3c4
    INC EBX                             ; 0056f3a7
        ;   Label: LAB_0056f3a7
    CMP EBX,0x40                        ; 0056f3a8
    JL 0x0056f391                       ; 0056f3ab
        ;   XREF to: 0056f391 (CONDITIONAL_JUMP)  ; LAB_0056f391
    CMP EBX,0x40                        ; 0056f3ad
        ;   Label: LAB_0056f3ad
    JL 0x0056f36d                       ; 0056f3b0
        ;   XREF to: 0056f36d (CONDITIONAL_JUMP)  ; LAB_0056f36d
    PUSH 0x5f312c                       ; 0056f3b2
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0056f3b7
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 0056f3bc
    XOR EAX,EAX                         ; 0056f3bf
        ;   Label: LAB_0056f3bf
    POP ESI                             ; 0056f3c1
        ;   Label: LAB_0056f3c1
    POP EBX                             ; 0056f3c2
    RET                                 ; 0056f3c3
    CMP ESI,dword ptr [EDX + 0x2c7914c] ; 0056f3c4
        ;   Label: LAB_0056f3c4
    JZ 0x0056f3a7                       ; 0056f3ca
        ;   XREF to: 0056f3a7 (CONDITIONAL_JUMP)  ; LAB_0056f3a7
    CMP ESI,dword ptr [EDX + 0x2c79144] ; 0056f3cc
    JNZ 0x0056f3a7                      ; 0056f3d2
        ;   XREF to: 0056f3a7 (CONDITIONAL_JUMP)  ; LAB_0056f3a7
    CMP ESI,dword ptr [EDX + 0x2c79150] ; 0056f3d4
    JNZ 0x0056f3a7                      ; 0056f3da
        ;   XREF to: 0056f3a7 (CONDITIONAL_JUMP)  ; LAB_0056f3a7
    CMP ESI,dword ptr [ECX + 0x2c791a0] ; 0056f3dc
    JNZ 0x0056f3a7                      ; 0056f3e2
        ;   XREF to: 0056f3a7 (CONDITIONAL_JUMP)  ; LAB_0056f3a7
    ADD EDX,0x2c78ff4                   ; 0056f3e4
    PUSH EDX                            ; 0056f3ea
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020 ; 0056f3eb
        ;   XREF to: 00570020 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0056f3f0
    JMP 0x0056f3ad                      ; 0056f3f3
        ;   XREF to: 0056f3ad (UNCONDITIONAL_JUMP)  ; LAB_0056f3ad

