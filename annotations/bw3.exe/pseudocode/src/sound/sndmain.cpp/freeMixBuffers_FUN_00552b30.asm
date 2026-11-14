; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_00552b30(void)
;
;
; XREF[1]:
;   sound_sndmain.cpp_resetSoundDevice_FUN_00558250 at 00558277
;
; Referenced Globals:
;   undefined4 DAT_02cf3294
;   undefined4 DAT_02cf3298
;   undefined4 DAT_02cf329c
;   undefined4 DAT_02cf32a0
;   undefined4 DAT_02cf32a4
;   undefined4 DAT_02cf32c8
;   undefined4 DAT_02cf32ec
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552b30
        ;   Label: sound_sndmain.cpp_freeMixBuffers_FUN_00552b30
    PUSH EBP                            ; 00552b31
    MOV EDX,dword ptr [0x02cf32c8]      ; 00552b32 | DAT_02cf32c8
    TEST EDX,EDX                        ; 00552b38
    JNZ 0x00552ba3                      ; 00552b3a
        ;   XREF to: 00552ba3 (CONDITIONAL_JUMP)  ; LAB_00552ba3
    PUSH ESI                            ; 00552b3c
        ;   Label: LAB_00552b3c
    MOV ESI,dword ptr [0x02cf32ec]      ; 00552b3d | DAT_02cf32ec
    TEST ESI,ESI                        ; 00552b43
    JZ 0x00552b58                       ; 00552b45
        ;   XREF to: 00552b58 (CONDITIONAL_JUMP)  ; LAB_00552b58
    PUSH ESI                            ; 00552b47
    CALL crt_unknown.c_FUN_005a3770     ; 00552b48
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    XOR EBP,EBP                         ; 00552b4d
    ADD ESP,0x4                         ; 00552b4f
    MOV dword ptr [0x02cf32ec],EBP      ; 00552b52 | DAT_02cf32ec
    MOV EAX,[0x02cf32a4]                ; 00552b58 | DAT_02cf32a4
        ;   Label: LAB_00552b58
    TEST EAX,EAX                        ; 00552b5d
    JNZ 0x00552bb6                      ; 00552b5f
        ;   XREF to: 00552bb6 (CONDITIONAL_JUMP)  ; LAB_00552bb6
    XOR EAX,EAX                         ; 00552b61
        ;   Label: LAB_00552b61
    XOR EDX,EDX                         ; 00552b63
    POP ESI                             ; 00552b65
    ADD EAX,0x4                         ; 00552b66
        ;   Label: LAB_00552b66
    MOV dword ptr [EAX + 0x2cf32a4],EDX ; 00552b69
    MOV dword ptr [EAX + 0x2cf32ec],EDX ; 00552b6f
    MOV dword ptr [EAX + 0x2cf330c],EDX ; 00552b75
    MOV dword ptr [EAX + 0x2cf32c8],EDX ; 00552b7b
    CMP EAX,0x20                        ; 00552b81
    JNZ 0x00552b66                      ; 00552b84
        ;   XREF to: 00552b66 (CONDITIONAL_JUMP)  ; LAB_00552b66
    XOR EBX,EBX                         ; 00552b86
    MOV dword ptr [0x02cf32a0],EBX      ; 00552b88 | DAT_02cf32a0
    MOV dword ptr [0x02cf3294],EBX      ; 00552b8e | DAT_02cf3294
    MOV dword ptr [0x02cf3298],EBX      ; 00552b94 | DAT_02cf3298
    MOV dword ptr [0x02cf329c],EBX      ; 00552b9a | DAT_02cf329c
    POP EBP                             ; 00552ba0
    POP EBX                             ; 00552ba1
    RET                                 ; 00552ba2
    PUSH EDX                            ; 00552ba3
        ;   Label: LAB_00552ba3
    CALL crt_unknown.c_FUN_005a3770     ; 00552ba4
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    XOR EBX,EBX                         ; 00552ba9
    ADD ESP,0x4                         ; 00552bab
    MOV dword ptr [0x02cf32c8],EBX      ; 00552bae | DAT_02cf32c8
    JMP 0x00552b3c                      ; 00552bb4
        ;   XREF to: 00552b3c (UNCONDITIONAL_JUMP)  ; LAB_00552b3c
    PUSH EAX                            ; 00552bb6
        ;   Label: LAB_00552bb6
    CALL crt_unknown.c_FUN_005a3770     ; 00552bb7
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    XOR ECX,ECX                         ; 00552bbc
    ADD ESP,0x4                         ; 00552bbe
    MOV dword ptr [0x02cf32a4],ECX      ; 00552bc1 | DAT_02cf32a4
    JMP 0x00552b61                      ; 00552bc7
        ;   XREF to: 00552b61 (UNCONDITIONAL_JUMP)  ; LAB_00552b61

