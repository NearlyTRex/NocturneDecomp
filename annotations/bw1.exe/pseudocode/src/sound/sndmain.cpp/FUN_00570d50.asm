; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00570d50(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30 at 005710ec
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f3764
;   TerminatedCString s_SfxSlot_kill_must_be_loc_005f3779
;   undefined4 DAT_005f379c
;   undefined4 DAT_006232ec
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c807ec
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00573bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570d50
        ;   Label: sound_sndmain.cpp_FUN_00570d50
    PUSH ESI                            ; 00570d51
    PUSH EBP                            ; 00570d52
    SUB ESP,0x1c                        ; 00570d53
    MOV ESI,dword ptr [0x006232ec]      ; 00570d56 | DAT_006232ec
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00570d5c
    CMP dword ptr [0x02c807ec],0x0      ; 00570d60 | DAT_02c807ec
    JLE 0x00570dbd                      ; 00570d67
        ;   XREF to: 00570dbd (CONDITIONAL_JUMP)  ; LAB_00570dbd
    MOV EBP,dword ptr [EBX]             ; 00570d69
        ;   Label: LAB_00570d69
    PUSH EBP                            ; 00570d6b
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00573bc0 ; 00570d6c
        ;   XREF to: 00573bc0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00573bc0()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00570d71
    FLD float ptr [ESP + 0x1c]          ; 00570d75
    FMUL float ptr [EBX + 0x38]         ; 00570d79
    ADD ESP,0x4                         ; 00570d7c
    MOV AH,byte ptr [EBX + 0x4c]        ; 00570d7f
    FSTP float ptr [ESP]                ; 00570d82
    TEST AH,0x1                         ; 00570d85
    JZ 0x00570de4                       ; 00570d88
        ;   XREF to: 00570de4 (CONDITIONAL_JUMP)  ; LAB_00570de4
    MOV ESI,dword ptr [0x006232ec]      ; 00570d8a | DAT_006232ec
    XOR EDX,EDX                         ; 00570d90
    TEST ESI,ESI                        ; 00570d92
    JLE 0x00570db0                      ; 00570d94
        ;   XREF to: 00570db0 (CONDITIONAL_JUMP)  ; LAB_00570db0
    MOV EAX,dword ptr [ESP]             ; 00570d96
    ADD EBX,0x4                         ; 00570d99
        ;   Label: LAB_00570d99
    INC EDX                             ; 00570d9c
    MOV dword ptr [EBX + 0x8c],EAX      ; 00570d9d
    CMP EDX,ESI                         ; 00570da3
    JL 0x00570d99                       ; 00570da5
        ;   XREF to: 00570d99 (CONDITIONAL_JUMP)  ; LAB_00570d99
    LEA EAX,[EAX]                       ; 00570da7
    LEA EDX,[EDX]                       ; 00570dad
    MOV dword ptr [0x006232ec],ESI      ; 00570db0 | DAT_006232ec
        ;   Label: LAB_00570db0
    ADD ESP,0x1c                        ; 00570db6
    POP EBP                             ; 00570db9
    POP ESI                             ; 00570dba
    POP EBX                             ; 00570dbb
    RET                                 ; 00570dbc
    PUSH EDI                            ; 00570dbd
        ;   Label: LAB_00570dbd
    MOV ECX,0x5f3764                    ; 00570dbe | = "..\\sound\\sndmain.cpp"
    MOV EDI,0xa98                       ; 00570dc3
    PUSH 0x5f3779                       ; 00570dc8 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01d1d400],ECX      ; 00570dcd | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00570dd3 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00570dd9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00570dde
    POP EDI                             ; 00570de1
    JMP 0x00570d69                      ; 00570de2
        ;   XREF to: 00570d69 (UNCONDITIONAL_JUMP)  ; LAB_00570d69
    MOV ESI,dword ptr [0x006232ec]      ; 00570de4 | DAT_006232ec
        ;   Label: LAB_00570de4
    XOR ECX,ECX                         ; 00570dea
    TEST ESI,ESI                        ; 00570dec
    JLE 0x00570db0                      ; 00570dee
        ;   XREF to: 00570db0 (CONDITIONAL_JUMP)  ; LAB_00570db0
    MOV EDX,EBX                         ; 00570df0
    MOV EAX,dword ptr [EDX + 0x70]      ; 00570df2
        ;   Label: LAB_00570df2
    MOV dword ptr [ESP + 0x14],EAX      ; 00570df5
    MOV EAX,dword ptr [EBX + 0xf0]      ; 00570df9
    MOV dword ptr [ESP + 0xc],EAX       ; 00570dff
    MOV EAX,dword ptr [EBX + 0xf4]      ; 00570e03
    MOV dword ptr [ESP + 0x4],EAX       ; 00570e09
    MOV EAX,dword ptr [EBX + 0xf8]      ; 00570e0d
    FLD float ptr [ESP + 0x14]          ; 00570e13
    MOV dword ptr [ESP + 0x10],EAX      ; 00570e17
    FCOMP float ptr [ESP + 0x4]         ; 00570e1b
    FNSTSW AX                           ; 00570e1f
    SAHF                                ; 00570e21
    JC 0x00570e6f                       ; 00570e22
        ;   XREF to: 00570e6f (CONDITIONAL_JUMP)  ; LAB_00570e6f
    FLD float ptr [ESP + 0x14]          ; 00570e24
        ;   Label: LAB_00570e24
    FCOMP float ptr [ESP + 0x10]        ; 00570e28
    FNSTSW AX                           ; 00570e2c
    SAHF                                ; 00570e2e
    JBE 0x00570e39                      ; 00570e2f
        ;   XREF to: 00570e39 (CONDITIONAL_JUMP)  ; LAB_00570e39
    MOV EAX,dword ptr [ESP + 0x10]      ; 00570e31
    MOV dword ptr [ESP + 0x14],EAX      ; 00570e35
    FLD float ptr [ESP + 0xc]           ; 00570e39
        ;   Label: LAB_00570e39
    FMUL float ptr [0x005f379c]         ; 00570e3d | DAT_005f379c
    FCOMP float ptr [ESP + 0x14]        ; 00570e43
    FNSTSW AX                           ; 00570e47
    SAHF                                ; 00570e49
    JC 0x00570e79                       ; 00570e4a
        ;   XREF to: 00570e79 (CONDITIONAL_JUMP)  ; LAB_00570e79
    MOV dword ptr [ESP + 0x8],0x41a00000 ; 00570e4c
    FLD float ptr [ESP]                 ; 00570e54
        ;   Label: LAB_00570e54
    FMUL float ptr [ESP + 0x8]          ; 00570e57
    ADD EDX,0x4                         ; 00570e5b
    INC ECX                             ; 00570e5e
    FSTP float ptr [EDX + 0x8c]         ; 00570e5f
    CMP ECX,ESI                         ; 00570e65
    JGE 0x00570db0                      ; 00570e67
        ;   XREF to: 00570db0 (CONDITIONAL_JUMP)  ; LAB_00570db0
    JMP 0x00570df2                      ; 00570e6d
        ;   XREF to: 00570df2 (UNCONDITIONAL_JUMP)  ; LAB_00570df2
    MOV EAX,dword ptr [ESP + 0x4]       ; 00570e6f
        ;   Label: LAB_00570e6f
    MOV dword ptr [ESP + 0x14],EAX      ; 00570e73
    JMP 0x00570e24                      ; 00570e77
        ;   XREF to: 00570e24 (UNCONDITIONAL_JUMP)  ; LAB_00570e24
    FLD float ptr [ESP + 0xc]           ; 00570e79
        ;   Label: LAB_00570e79
    FDIV float ptr [ESP + 0x14]         ; 00570e7d
    FSTP float ptr [ESP + 0x8]          ; 00570e81
    JMP 0x00570e54                      ; 00570e85
        ;   XREF to: 00570e54 (UNCONDITIONAL_JUMP)  ; LAB_00570e54

