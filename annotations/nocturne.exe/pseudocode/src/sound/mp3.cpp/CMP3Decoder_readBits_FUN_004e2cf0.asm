; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0(int param_1,uint param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_004e5200 at 004e58bc
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e8eff
;   sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_004e4c70 at 004e4fdf
;   sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0 at 004e30cb
;   sound_mp3.cpp_CMP3Decoder_readBit_FUN_004e2dd0 at 004e2dd7
;   sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004e48a0 at 004e497c
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0058b5de
;   TerminatedCString s_Buffer_overflow_File_s_0058b5ef
;   undefined4 DAT_005bc010
;   undefined4 DAT_005bc030
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2cf0
        ;   Label: sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0
    PUSH ESI                            ; 004e2cf1
    PUSH EDI                            ; 004e2cf2
    PUSH EBP                            ; 004e2cf3
    SUB ESP,0x4                         ; 004e2cf4
    MOV EBX,dword ptr [ESP + 0x18]      ; 004e2cf7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e2cfb
    MOV EDX,dword ptr [EBX + 0x1314]    ; 004e2cff
    MOV ESI,EAX                         ; 004e2d05
    ADD EDX,EAX                         ; 004e2d07
    XOR EDI,EDI                         ; 004e2d09
    MOV dword ptr [EBX + 0x1314],EDX    ; 004e2d0b
    TEST EAX,EAX                        ; 004e2d11
    JLE 0x004e2d71                      ; 004e2d13
        ;   XREF to: 004e2d71 (CONDITIONAL_JUMP)  ; LAB_004e2d71
    CMP dword ptr [EBX + 0x531c],0x0    ; 004e2d15
        ;   Label: LAB_004e2d15
    JZ 0x004e2d7b                       ; 004e2d1c
        ;   XREF to: 004e2d7b (CONDITIONAL_JUMP)  ; LAB_004e2d7b
    MOV EDX,dword ptr [EBX + 0x531c]    ; 004e2d1e
        ;   Label: LAB_004e2d1e
    CMP ESI,EDX                         ; 004e2d24
    JNC 0x004e2dc8                      ; 004e2d26
        ;   XREF to: 004e2dc8 (CONDITIONAL_JUMP)  ; LAB_004e2dc8
    MOV EAX,ESI                         ; 004e2d2c
    MOV EDX,dword ptr [EBX + 0x1318]    ; 004e2d2e
        ;   Label: LAB_004e2d2e
    MOV ECX,dword ptr [EBX + 0x531c]    ; 004e2d34
    SUB ESI,EAX                         ; 004e2d3a
    AND EDX,0xfff                       ; 004e2d3c
    MOV EBP,dword ptr [ECX*0x4 + 0x5bc010] ; 004e2d42 | DAT_005bc010 | DAT_005bc030
    SUB ECX,EAX                         ; 004e2d49
    MOV EDX,dword ptr [EBX + EDX*0x4 + 0x131c] ; 004e2d4b
    MOV dword ptr [ESP],ECX             ; 004e2d52
    AND EDX,EBP                         ; 004e2d55
    MOV CL,byte ptr [ESP]               ; 004e2d57
    MOV EAX,ESI                         ; 004e2d5a
    SHR EDX,CL                          ; 004e2d5c
    MOV CL,AL                           ; 004e2d5e
    SHL EDX,CL                          ; 004e2d60
    OR EDI,EDX                          ; 004e2d62
    MOV EDX,dword ptr [ESP]             ; 004e2d64
    MOV dword ptr [EBX + 0x531c],EDX    ; 004e2d67
    TEST ESI,ESI                        ; 004e2d6d
    JG 0x004e2d15                       ; 004e2d6f
        ;   XREF to: 004e2d15 (CONDITIONAL_JUMP)  ; LAB_004e2d15
    MOV EAX,EDI                         ; 004e2d71
        ;   Label: LAB_004e2d71
    ADD ESP,0x4                         ; 004e2d73
    POP EBP                             ; 004e2d76
    POP EDI                             ; 004e2d77
    POP ESI                             ; 004e2d78
    POP EBX                             ; 004e2d79
    RET                                 ; 004e2d7a
    MOV EDX,dword ptr [EBX + 0x1318]    ; 004e2d7b
        ;   Label: LAB_004e2d7b
    MOV dword ptr [EBX + 0x531c],0x8    ; 004e2d81
    INC EDX                             ; 004e2d8b
    MOV ECX,dword ptr [EBX + 0x1310]    ; 004e2d8c
    MOV dword ptr [EBX + 0x1318],EDX    ; 004e2d92
    CMP EDX,ECX                         ; 004e2d98
    JBE 0x004e2d1e                      ; 004e2d9a
        ;   XREF to: 004e2d1e (CONDITIONAL_JUMP)  ; LAB_004e2d1e
    PUSH 0x1cd8b28                      ; 004e2d9c
    MOV EBP,0x58b5de                    ; 004e2da1 | = "..\\sound\\mp3.cpp"
    MOV EAX,0x2c0                       ; 004e2da6
    PUSH 0x58b5ef                       ; 004e2dab | = "Buffer overflow!!  File: %s"
    MOV dword ptr [0x01cc4800],EBP      ; 004e2db0 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004e2db6 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004e2dbb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 004e2dc0
    JMP 0x004e2d1e                      ; 004e2dc3
        ;   XREF to: 004e2d1e (UNCONDITIONAL_JUMP)  ; LAB_004e2d1e
    MOV EAX,EDX                         ; 004e2dc8
        ;   Label: LAB_004e2dc8
    JMP 0x004e2d2e                      ; 004e2dca
        ;   XREF to: 004e2d2e (UNCONDITIONAL_JUMP)  ; LAB_004e2d2e

