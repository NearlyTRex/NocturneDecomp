; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_mp3.cpp_calculateMainDataSize_FUN_00533c50(SMpegFrame frame_info)
;
; Parameters:
; SMpegFrame       Stack[0x4]:28   frame_info
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 00535627
;
; Referenced Globals:
;   double[2][4] g_MpegSampleRateTable
;   undefined4 DAT_0067e2d0
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533c50
        ;   Label: sound_mp3.cpp_calculateMainDataSize_FUN_00533c50
    PUSH ESI                            ; 00533c51
    SUB ESP,0x8                         ; 00533c52
    MOV EDX,dword ptr [ESP + 0x14]      ; 00533c55
    MOV EDX,dword ptr [EDX]             ; 00533c59
    LEA EAX,[EDX*0x4 + 0x0]             ; 00533c5b
    SUB EAX,EDX                         ; 00533c62
    SHL EAX,0x2                         ; 00533c64
    MOV EDX,EAX                         ; 00533c67
    SHL EAX,0x4                         ; 00533c69
    SUB EAX,EDX                         ; 00533c6c
    MOV EDX,EAX                         ; 00533c6e
    MOV EAX,dword ptr [ESP + 0x14]      ; 00533c70
    MOV EAX,dword ptr [EAX + 0xc]       ; 00533c74
    MOV EDX,dword ptr [EDX + EAX*0x4 + 0x67e2d0] ; 00533c77 | DAT_0067e2d0
    LEA EAX,[EDX*0x8 + 0x0]             ; 00533c7e
    ADD EAX,EDX                         ; 00533c85
    SHL EAX,0x4                         ; 00533c87
    MOV dword ptr [ESP + 0x4],EAX       ; 00533c8a
    MOV EAX,dword ptr [ESP + 0x14]      ; 00533c8e
    MOV EDX,dword ptr [EAX]             ; 00533c92
    SHL EDX,0x5                         ; 00533c94
    MOV EAX,dword ptr [EAX + 0x10]      ; 00533c97
    FILD dword ptr [ESP + 0x4]          ; 00533c9a
    FDIV double ptr [EDX + EAX*0x8 + 0x67e218] ; 00533c9e | g_MpegSampleRateTable
    MOV EAX,dword ptr [ESP + 0x14]      ; 00533ca5
    CALL crt_math.c_round_FUN_005fe6b0  ; 00533ca9
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EDX,dword ptr [EAX]             ; 00533cae
    FISTP dword ptr [ESP]               ; 00533cb0
    TEST EDX,EDX                        ; 00533cb3
    JZ 0x00533cf2                       ; 00533cb5
        ;   XREF to: 00533cf2 (CONDITIONAL_JUMP)  ; LAB_00533cf2
    CMP dword ptr [ESP + 0x24],0x1      ; 00533cb7
    JNZ 0x00533cec                      ; 00533cbc
        ;   XREF to: 00533cec (CONDITIONAL_JUMP)  ; LAB_00533cec
    SUB dword ptr [ESP],0x11            ; 00533cbe
    MOV EAX,dword ptr [ESP + 0x14]      ; 00533cc2
        ;   Label: LAB_00533cc2
    CMP dword ptr [EAX + 0x14],0x0      ; 00533cc6
    JZ 0x00533ccf                       ; 00533cca
        ;   XREF to: 00533ccf (CONDITIONAL_JUMP)  ; LAB_00533ccf
    INC dword ptr [ESP]                 ; 00533ccc
    MOV EBX,dword ptr [ESP]             ; 00533ccf
        ;   Label: LAB_00533ccf
    MOV EAX,dword ptr [ESP + 0x14]      ; 00533cd2
    SUB EBX,0x4                         ; 00533cd6
    MOV ESI,dword ptr [EAX + 0x8]       ; 00533cd9
    MOV dword ptr [ESP],EBX             ; 00533cdc
    TEST ESI,ESI                        ; 00533cdf
    JNZ 0x00533d1a                      ; 00533ce1
        ;   XREF to: 00533d1a (CONDITIONAL_JUMP)  ; LAB_00533d1a
    MOV EAX,dword ptr [ESP]             ; 00533ce3
    ADD ESP,0x8                         ; 00533ce6
    POP ESI                             ; 00533ce9
    POP EBX                             ; 00533cea
    RET                                 ; 00533ceb
    SUB dword ptr [ESP],0x20            ; 00533cec
        ;   Label: LAB_00533cec
    JMP 0x00533cc2                      ; 00533cf0
        ;   XREF to: 00533cc2 (UNCONDITIONAL_JUMP)  ; LAB_00533cc2
    MOV EAX,dword ptr [ESP]             ; 00533cf2
        ;   Label: LAB_00533cf2
    MOV EDX,EAX                         ; 00533cf5
    SAR EDX,0x1f                        ; 00533cf7
    SUB EAX,EDX                         ; 00533cfa
    SAR EAX,0x1                         ; 00533cfc
    MOV ECX,dword ptr [ESP + 0x24]      ; 00533cfe
    MOV dword ptr [ESP],EAX             ; 00533d02
    CMP ECX,0x1                         ; 00533d05
    JNZ 0x00533d12                      ; 00533d08
        ;   XREF to: 00533d12 (CONDITIONAL_JUMP)  ; LAB_00533d12
    LEA ESI,[EAX + -0x9]                ; 00533d0a
    MOV dword ptr [ESP],ESI             ; 00533d0d
    JMP 0x00533cc2                      ; 00533d10
        ;   XREF to: 00533cc2 (UNCONDITIONAL_JUMP)  ; LAB_00533cc2
    LEA EBX,[EAX + -0x11]               ; 00533d12
        ;   Label: LAB_00533d12
    MOV dword ptr [ESP],EBX             ; 00533d15
    JMP 0x00533cc2                      ; 00533d18
        ;   XREF to: 00533cc2 (UNCONDITIONAL_JUMP)  ; LAB_00533cc2
    PUSH EDI                            ; 00533d1a
        ;   Label: LAB_00533d1a
    LEA EDI,[EBX + -0x2]                ; 00533d1b
    MOV dword ptr [ESP + 0x4],EDI       ; 00533d1e
    POP EDI                             ; 00533d22
    MOV EAX,dword ptr [ESP]             ; 00533d23
    ADD ESP,0x8                         ; 00533d26
    POP ESI                             ; 00533d29
    POP EBX                             ; 00533d2a
    RET                                 ; 00533d2b

