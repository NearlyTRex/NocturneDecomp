; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00552bd0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0060422c
;   undefined4 DAT_00604230
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf3294
;   undefined4 DAT_02cf3298
;   undefined4 DAT_02cf329c
;   undefined4 DAT_02cf32a0
;   undefined4 DAT_02cf3338
;   undefined4 DAT_02cf341c
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_memset_FUN_005a28f0
;   crt_string.c_memmove_FUN_005a54c0
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430
;   sound_sndmain.cpp_FUN_00554920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552bd0
        ;   Label: sound_sndmain.cpp_FUN_00552bd0
    PUSH ESI                            ; 00552bd1
    PUSH EDI                            ; 00552bd2
    PUSH EBP                            ; 00552bd3
    SUB ESP,0x30                        ; 00552bd4
    CMP dword ptr [0x02cf341c],0x0      ; 00552bd7 | DAT_02cf341c
    JLE 0x00552d59                      ; 00552bde
        ;   XREF to: 00552d59 (CONDITIONAL_JUMP)  ; LAB_00552d59
    CMP dword ptr [0x02cf3294],0x0      ; 00552be4 | DAT_02cf3294
        ;   Label: LAB_00552be4
    JLE 0x00552c10                      ; 00552beb
        ;   XREF to: 00552c10 (CONDITIONAL_JUMP)  ; LAB_00552c10
    MOV EDI,0x5d2aa0                    ; 00552bed
    MOV EBP,0x599                       ; 00552bf2
    PUSH 0x5d2ab5                       ; 00552bf7
    MOV dword ptr [0x01d71de0],EDI      ; 00552bfc | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 00552c02 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00552c08
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00552c0d
    MOV ESI,dword ptr [0x02cf329c]      ; 00552c10 | DAT_02cf329c
        ;   Label: LAB_00552c10
    MOV EAX,[0x0060422c]                ; 00552c16 | DAT_0060422c
    XOR EDI,EDI                         ; 00552c1b
    SHL ESI,0x2                         ; 00552c1d
    TEST EAX,EAX                        ; 00552c20
    JLE 0x00552c90                      ; 00552c22
        ;   XREF to: 00552c90 (CONDITIONAL_JUMP)  ; LAB_00552c90
    XOR EBX,EBX                         ; 00552c24
    MOV EAX,[0x02cf32a0]                ; 00552c26 | DAT_02cf32a0
        ;   Label: LAB_00552c26
    DEC EAX                             ; 00552c2b
    IMUL EAX,ESI                        ; 00552c2c
    MOV EDX,dword ptr [0x02cf329c]      ; 00552c2f | DAT_02cf329c
    SHL EDX,0x2                         ; 00552c35
    PUSH EAX                            ; 00552c38
    MOV EAX,dword ptr [EBX + 0x2cf32cc] ; 00552c39
    ADD EDX,EAX                         ; 00552c3f
    PUSH EDX                            ; 00552c41
    PUSH EAX                            ; 00552c42
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00552c43
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    MOV EAX,[0x02cf32a0]                ; 00552c48 | DAT_02cf32a0
    MOV EDX,dword ptr [0x02cf329c]      ; 00552c4d | DAT_02cf329c
    DEC EAX                             ; 00552c53
    IMUL EAX,EDX                        ; 00552c54
    ADD ESP,0xc                         ; 00552c57
    LEA EDX,[EAX*0x4 + 0x0]             ; 00552c5a
    PUSH ESI                            ; 00552c61
    MOV EAX,dword ptr [EBX + 0x2cf32cc] ; 00552c62
    PUSH 0x0                            ; 00552c68
    ADD EAX,EDX                         ; 00552c6a
    PUSH EAX                            ; 00552c6c
    ADD EBX,0x4                         ; 00552c6d
    INC EDI                             ; 00552c70
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00552c71
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV ECX,dword ptr [0x0060422c]      ; 00552c76 | DAT_0060422c
    ADD ESP,0xc                         ; 00552c7c
    CMP EDI,ECX                         ; 00552c7f
    JL 0x00552c26                       ; 00552c81
        ;   XREF to: 00552c26 (CONDITIONAL_JUMP)  ; LAB_00552c26
    LEA EAX,[EAX]                       ; 00552c83
    LEA EDX,[EDX]                       ; 00552c89
    NOP                                 ; 00552c8f
    MOV EAX,[0x02cf329c]                ; 00552c90 | DAT_02cf329c
        ;   Label: LAB_00552c90
    MOV dword ptr [ESP + 0x20],EAX      ; 00552c95
    MOV EAX,[0x0060422c]                ; 00552c99 | DAT_0060422c
    MOV dword ptr [ESP + 0x24],EAX      ; 00552c9e
    MOV EAX,[0x00604230]                ; 00552ca2 | DAT_00604230
    MOV EBX,dword ptr [ESP + 0x24]      ; 00552ca7
    MOV dword ptr [ESP + 0x28],EAX      ; 00552cab
    TEST EBX,EBX                        ; 00552caf
    JLE 0x00552cd0                      ; 00552cb1
        ;   XREF to: 00552cd0 (CONDITIONAL_JUMP)  ; LAB_00552cd0
    SHL EBX,0x2                         ; 00552cb3
    XOR EAX,EAX                         ; 00552cb6
    ADD EAX,0x4                         ; 00552cb8
        ;   Label: LAB_00552cb8
    MOV EDX,dword ptr [EAX + 0x2cf32c8] ; 00552cbb
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 00552cc1
    CMP EAX,EBX                         ; 00552cc5
    JL 0x00552cb8                       ; 00552cc7
        ;   XREF to: 00552cb8 (CONDITIONAL_JUMP)  ; LAB_00552cb8
    LEA EAX,[EAX]                       ; 00552cc9
    NOP                                 ; 00552ccf
    FILD dword ptr [0x02cf329c]         ; 00552cd0 | DAT_02cf329c
        ;   Label: LAB_00552cd0
    FILD dword ptr [0x00604230]         ; 00552cd6 | DAT_00604230
    FDIVP                               ; 00552cdc
    MOV EBX,0x2ce721c                   ; 00552cde
    LEA ESI,[EBX + 0x4700]              ; 00552ce3
    FSTP float ptr [ESP + 0x2c]         ; 00552ce9
    PUSH dword ptr [ESP + 0x2c]         ; 00552ced
        ;   Label: LAB_00552ced
    PUSH EBX                            ; 00552cf1
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430 ; 00552cf2
        ;   XREF to: 00554430 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430(CSfxSlot * this_ptr, float delta_time)
    ADD EBX,0x11c                       ; 00552cf7
    ADD ESP,0x8                         ; 00552cfd
    CMP EBX,ESI                         ; 00552d00
    JNZ 0x00552ced                      ; 00552d02
        ;   XREF to: 00552ced (CONDITIONAL_JUMP)  ; LAB_00552ced
    MOV EBX,0x2ce721c                   ; 00552d04
    LEA EBP,[EBX + 0x4700]              ; 00552d09
    SUB ESP,0x2c                        ; 00552d0f
        ;   Label: LAB_00552d0f
    MOV EDI,ESP                         ; 00552d12
    MOV ECX,0xb                         ; 00552d14
    LEA ESI,[ESP + 0x2c]                ; 00552d19
    PUSH EBX                            ; 00552d1d
    MOVSD.REP ES:EDI,ESI                ; 00552d1e
    CALL sound_sndmain.cpp_FUN_00554920 ; 00552d20
        ;   XREF to: 00554920 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00554920()
    ADD EBX,0x11c                       ; 00552d25
    ADD ESP,0x30                        ; 00552d2b
    CMP EBX,EBP                         ; 00552d2e
    JNZ 0x00552d0f                      ; 00552d30
        ;   XREF to: 00552d0f (CONDITIONAL_JUMP)  ; LAB_00552d0f
    MOV EAX,[0x02cf329c]                ; 00552d32 | DAT_02cf329c
    MOV EDI,dword ptr [0x02cf3338]      ; 00552d37 | DAT_02cf3338
    XOR ESI,ESI                         ; 00552d3d
    MOV [0x02cf3294],EAX                ; 00552d3f | DAT_02cf3294
    INC EDI                             ; 00552d44
    MOV dword ptr [0x02cf3298],ESI      ; 00552d45 | DAT_02cf3298
    MOV dword ptr [0x02cf3338],EDI      ; 00552d4b | DAT_02cf3338
    ADD ESP,0x30                        ; 00552d51
    POP EBP                             ; 00552d54
    POP EDI                             ; 00552d55
    POP ESI                             ; 00552d56
    POP EBX                             ; 00552d57
    RET                                 ; 00552d58
    MOV ECX,0x5d2a6b                    ; 00552d59
        ;   Label: LAB_00552d59
    MOV EBX,0x595                       ; 00552d5e
    PUSH 0x5d2a80                       ; 00552d63
    MOV dword ptr [0x01d71de0],ECX      ; 00552d68 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00552d6e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00552d74
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00552d79
    JMP 0x00552be4                      ; 00552d7c
        ;   XREF to: 00552be4 (UNCONDITIONAL_JUMP)  ; LAB_00552be4

