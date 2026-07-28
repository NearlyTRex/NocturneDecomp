; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_requantizeSamples_FUN_004e3d30(SMpegSubbandScalefactors *quantized_samples,SMpegSubbandScalefactors *dequantized_samples,SMpegSubbandAllocation *allocation,SMpegFrame *frame)
;
; Parameters:
; SMpegSubbandScalefactors * Stack[0x4]:4   quantized_samples
; SMpegSubbandScalefactors * Stack[0x8]:4   dequantized_samples
; SMpegSubbandAllocation * Stack[0xc]:4   allocation
; SMpegFrame *     Stack[0x10]:4   frame
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e8965
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3d30
        ;   Label: sound_mp3.cpp_requantizeSamples_FUN_004e3d30
    PUSH ESI                            ; 004e3d31
    PUSH EDI                            ; 004e3d32
    PUSH EBP                            ; 004e3d33
    MOV EBP,ESP                         ; 004e3d34
    SUB ESP,0x20                        ; 004e3d36
    AND ESP,0xfffffff8                  ; 004e3d39
    MOV EAX,dword ptr [EBP + 0x20]      ; 004e3d3c
    XOR EDX,EDX                         ; 004e3d3f
    MOV EAX,dword ptr [EAX + 0x10]      ; 004e3d41
    MOV dword ptr [ESP + 0x8],EDX       ; 004e3d44
    MOV dword ptr [ESP + 0x10],EAX      ; 004e3d48
    XOR ECX,ECX                         ; 004e3d4c
        ;   Label: LAB_004e3d4c
    MOV EBX,dword ptr [ESP + 0x10]      ; 004e3d4e
    MOV dword ptr [ESP + 0x18],ECX      ; 004e3d52
    TEST EBX,EBX                        ; 004e3d56
    JLE 0x004e3db5                      ; 004e3d58
        ;   XREF to: 004e3db5 (CONDITIONAL_JUMP)  ; LAB_004e3db5
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e3d5a
    MOV EDX,dword ptr [EBP + 0x18]      ; 004e3d5e
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004e3d61
    MOV EDI,dword ptr [ESP + 0x8]       ; 004e3d64
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e3d68
    MOV dword ptr [ESP + 0xc],EAX       ; 004e3d6b
    ADD EDI,ESI                         ; 004e3d6f
    ADD EAX,EDX                         ; 004e3d71
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e3d73
    MOV EBX,EAX                         ; 004e3d77
    ADD EDX,ECX                         ; 004e3d79
    IMUL ECX,dword ptr [ESP + 0x18],0x180 ; 004e3d7b
        ;   Label: LAB_004e3d7b
    MOV ESI,dword ptr [EDX]             ; 004e3d83
    TEST ESI,ESI                        ; 004e3d85
    JNZ 0x004e3dcf                      ; 004e3d87
        ;   XREF to: 004e3dcf (CONDITIONAL_JUMP)  ; LAB_004e3dcf
    MOV dword ptr [EBX],ESI             ; 004e3d89
    MOV ESI,dword ptr [ESP + 0x18]      ; 004e3d8b
        ;   Label: LAB_004e3d8b
    ADD EBX,0x180                       ; 004e3d8f
    ADD EDX,0x80                        ; 004e3d95
    INC ESI                             ; 004e3d9b
    ADD EDI,0x180                       ; 004e3d9c
    MOV dword ptr [ESP + 0x18],ESI      ; 004e3da2
    MOV ECX,ESI                         ; 004e3da6
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e3da8
    ADD EAX,0x180                       ; 004e3dac
    CMP ECX,ESI                         ; 004e3db1
    JL 0x004e3d7b                       ; 004e3db3
        ;   XREF to: 004e3d7b (CONDITIONAL_JUMP)  ; LAB_004e3d7b
    MOV EDI,dword ptr [ESP + 0x8]       ; 004e3db5
        ;   Label: LAB_004e3db5
    ADD EDI,0x4                         ; 004e3db9
    MOV dword ptr [ESP + 0x8],EDI       ; 004e3dbc
    CMP EDI,0x80                        ; 004e3dc0
    JNZ 0x004e3d4c                      ; 004e3dc6
        ;   XREF to: 004e3d4c (CONDITIONAL_JUMP)  ; LAB_004e3d4c
    MOV ESP,EBP                         ; 004e3dc8
    POP EBP                             ; 004e3dca
    POP EDI                             ; 004e3dcb
    POP ESI                             ; 004e3dcc
    POP EBX                             ; 004e3dcd
    RET                                 ; 004e3dce
    INC ESI                             ; 004e3dcf
        ;   Label: LAB_004e3dcf
    MOV dword ptr [ESP + 0x14],ESI      ; 004e3dd0
    ADD ECX,dword ptr [EBP + 0x14]      ; 004e3dd4
    MOV ESI,dword ptr [ESP + 0xc]       ; 004e3dd7
    ADD ESI,ECX                         ; 004e3ddb
    MOV ECX,dword ptr [EDX]             ; 004e3ddd
    MOV ESI,dword ptr [ESI]             ; 004e3ddf
    SHR ESI,CL                          ; 004e3de1
    MOV ECX,ESI                         ; 004e3de3
    AND ECX,0x1                         ; 004e3de5
    CMP ECX,0x1                         ; 004e3de8
    JNZ 0x004e3e63                      ; 004e3deb
        ;   XREF to: 004e3e63 (CONDITIONAL_JUMP)  ; LAB_004e3e63
    MOV dword ptr [EBX],0x0             ; 004e3ded
    MOV ECX,dword ptr [ESP + 0x14]      ; 004e3df3
        ;   Label: LAB_004e3df3
    MOV ESI,0x1                         ; 004e3df7
    DEC ECX                             ; 004e3dfc
    SHL ESI,CL                          ; 004e3dfd
    MOV ECX,ESI                         ; 004e3dff
    DEC ESI                             ; 004e3e01
    MOV dword ptr [ESP + 0x1c],ESI      ; 004e3e02
    MOV ESI,dword ptr [EDI]             ; 004e3e06
    AND ESI,dword ptr [ESP + 0x1c]      ; 004e3e08
    MOV dword ptr [ESP + 0x1c],ESI      ; 004e3e0c
    XOR ESI,ESI                         ; 004e3e10
    MOV dword ptr [ESP + 0x4],ESI       ; 004e3e12
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004e3e16
    MOV dword ptr [ESP],ESI             ; 004e3e1a
    MOV dword ptr [ESP + 0x1c],ECX      ; 004e3e1d
    FILD qword ptr [ESP]                ; 004e3e21
    FILD dword ptr [ESP + 0x1c]         ; 004e3e24
    FLD1                                ; 004e3e28
    FDIVRP                              ; 004e3e2a
    MOV CL,byte ptr [ESP + 0x14]        ; 004e3e2c
    MOV ESI,0x1                         ; 004e3e30
    FXCH                                ; 004e3e35
    FMUL ST1                            ; 004e3e37
    SHL ESI,CL                          ; 004e3e39
    FLD float ptr [EAX]                 ; 004e3e3b
    FXCH                                ; 004e3e3d
    FADD ST0,ST1                        ; 004e3e3f
    MOV dword ptr [ESP + 0x1c],ESI      ; 004e3e41
    FSTP ST1                            ; 004e3e45
    FADDP                               ; 004e3e47
    LEA ECX,[ESI + -0x1]                ; 004e3e49
    FILD dword ptr [ESP + 0x1c]         ; 004e3e4c
    FMULP                               ; 004e3e50
    MOV dword ptr [ESP + 0x1c],ECX      ; 004e3e52
    FILD dword ptr [ESP + 0x1c]         ; 004e3e56
    FDIVP                               ; 004e3e5a
    FSTP float ptr [EAX]                ; 004e3e5c
    JMP 0x004e3d8b                      ; 004e3e5e
        ;   XREF to: 004e3d8b (UNCONDITIONAL_JUMP)  ; LAB_004e3d8b
    MOV dword ptr [EBX],0xbf800000      ; 004e3e63
        ;   Label: LAB_004e3e63
    JMP 0x004e3df3                      ; 004e3e69
        ;   XREF to: 004e3df3 (UNCONDITIONAL_JUMP)  ; LAB_004e3df3

