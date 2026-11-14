; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00570c40(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30 at 005710bb
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f372f
;   TerminatedCString s_SfxSlot_kill_must_be_loc_005f3744
;   undefined4 DAT_00605af8
;   undefined4 DAT_006232ec
;   undefined4 DAT_006232f0
;   undefined4 DAT_00623304
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c807ec
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570c40
        ;   Label: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_00570c40
    PUSH ESI                            ; 00570c41
    PUSH EDI                            ; 00570c42
    SUB ESP,0x8                         ; 00570c43
    MOV ESI,dword ptr [0x006232ec]      ; 00570c46 | DAT_006232ec
    MOV EDI,dword ptr [ESP + 0x18]      ; 00570c4c
    CMP dword ptr [0x02c807ec],0x0      ; 00570c50 | DAT_02c807ec
    JLE 0x00570c9d                      ; 00570c57
        ;   XREF to: 00570c9d (CONDITIONAL_JUMP)  ; LAB_00570c9d
    MOV ESI,dword ptr [0x006232ec]      ; 00570c59 | DAT_006232ec
        ;   Label: LAB_00570c59
    CMP ESI,0x2                         ; 00570c5f
    JL 0x00570cc2                       ; 00570c62
        ;   XREF to: 00570cc2 (CONDITIONAL_JUMP)  ; LAB_00570cc2
    TEST byte ptr [EDI + 0x4c],0x1      ; 00570c64
    JZ 0x00570cce                       ; 00570c68
        ;   XREF to: 00570cce (CONDITIONAL_JUMP)  ; LAB_00570cce
    XOR EDX,EDX                         ; 00570c6a
    TEST ESI,ESI                        ; 00570c6c
    JLE 0x00570c90                      ; 00570c6e
        ;   XREF to: 00570c90 (CONDITIONAL_JUMP)  ; LAB_00570c90
    MOV EAX,EDI                         ; 00570c70
    ADD EAX,0x4                         ; 00570c72
        ;   Label: LAB_00570c72
    INC EDX                             ; 00570c75
    MOV dword ptr [EAX + 0xac],0x0      ; 00570c76
    CMP EDX,ESI                         ; 00570c80
    JL 0x00570c72                       ; 00570c82
        ;   XREF to: 00570c72 (CONDITIONAL_JUMP)  ; LAB_00570c72
    LEA EAX,[EAX]                       ; 00570c84
    LEA EDX,[EDX]                       ; 00570c8a
    MOV dword ptr [0x006232ec],ESI      ; 00570c90 | DAT_006232ec
        ;   Label: LAB_00570c90
    ADD ESP,0x8                         ; 00570c96
    POP EDI                             ; 00570c99
    POP ESI                             ; 00570c9a
    POP EBX                             ; 00570c9b
    RET                                 ; 00570c9c
    MOV ECX,0x5f372f                    ; 00570c9d | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00570c9d
    MOV EBX,0xa69                       ; 00570ca2
    PUSH 0x5f3744                       ; 00570ca7 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01d1d400],ECX      ; 00570cac | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00570cb2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00570cb8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00570cbd
    JMP 0x00570c59                      ; 00570cc0
        ;   XREF to: 00570c59 (UNCONDITIONAL_JUMP)  ; LAB_00570c59
    MOV dword ptr [EDI + 0xb0],0x0      ; 00570cc2
        ;   Label: LAB_00570cc2
    JMP 0x00570c90                      ; 00570ccc
        ;   XREF to: 00570c90 (UNCONDITIONAL_JUMP)  ; LAB_00570c90
    FLD1                                ; 00570cce
        ;   Label: LAB_00570cce
    FDIV float ptr [0x00605af8]         ; 00570cd0 | DAT_00605af8
    FMUL float ptr [0x00623304]         ; 00570cd6 | DAT_00623304
    FILD dword ptr [0x006232f0]         ; 00570cdc | DAT_006232f0
    FMULP                               ; 00570ce2
    MOV EBX,0x1869f                     ; 00570ce4
    XOR ECX,ECX                         ; 00570ce9
    FSTP float ptr [ESP + 0x4]          ; 00570ceb
    TEST ESI,ESI                        ; 00570cef
    JLE 0x00570d1b                      ; 00570cf1
        ;   XREF to: 00570d1b (CONDITIONAL_JUMP)  ; LAB_00570d1b
    MOV EDX,EDI                         ; 00570cf3
    FLD float ptr [EDX + 0x70]          ; 00570cf5
        ;   Label: LAB_00570cf5
    FMUL float ptr [ESP + 0x4]          ; 00570cf8
    CALL crt_math.c_round_FUN_005c03a0  ; 00570cfc
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 00570d01
    MOV EAX,dword ptr [ESP]             ; 00570d04
    MOV dword ptr [EDX + 0xb0],EAX      ; 00570d07
    CMP EBX,EAX                         ; 00570d0d
    JLE 0x00570d13                      ; 00570d0f
        ;   XREF to: 00570d13 (CONDITIONAL_JUMP)  ; LAB_00570d13
    MOV EBX,EAX                         ; 00570d11
    INC ECX                             ; 00570d13
        ;   Label: LAB_00570d13
    ADD EDX,0x4                         ; 00570d14
    CMP ECX,ESI                         ; 00570d17
    JL 0x00570cf5                       ; 00570d19
        ;   XREF to: 00570cf5 (CONDITIONAL_JUMP)  ; LAB_00570cf5
    XOR EDX,EDX                         ; 00570d1b
        ;   Label: LAB_00570d1b
    TEST ESI,ESI                        ; 00570d1d
    JLE 0x00570c90                      ; 00570d1f
        ;   XREF to: 00570c90 (CONDITIONAL_JUMP)  ; LAB_00570c90
    MOV EAX,EDI                         ; 00570d25
    MOV ECX,dword ptr [EAX + 0xb0]      ; 00570d27
        ;   Label: LAB_00570d27
    ADD EAX,0x4                         ; 00570d2d
    SUB ECX,EBX                         ; 00570d30
    INC EDX                             ; 00570d32
    MOV dword ptr [EAX + 0xac],ECX      ; 00570d33
    CMP EDX,ESI                         ; 00570d39
    JL 0x00570d27                       ; 00570d3b
        ;   XREF to: 00570d27 (CONDITIONAL_JUMP)  ; LAB_00570d27
    MOV dword ptr [0x006232ec],ESI      ; 00570d3d | DAT_006232ec
    ADD ESP,0x8                         ; 00570d43
    POP EDI                             ; 00570d46
    POP ESI                             ; 00570d47
    POP EBX                             ; 00570d48
    RET                                 ; 00570d49

