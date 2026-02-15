; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_requantizeSamples_FUN_005301b0(SMpegSubbandScalefactors *quantized_samples,SMpegSubbandScalefactors *dequantized_samples,SMpegSubbandAllocation *allocation,SMpegFrameHeader *header)
;
; Parameters:
; SMpegSubbandScalefactors * Stack[0x4]:4   quantized_samples
; SMpegSubbandScalefactors * Stack[0x8]:4   dequantized_samples
; SMpegSubbandAllocation * Stack[0xc]:4   allocation
; SMpegFrameHeader * Stack[0x10]:4   header
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 005350f5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005301b0
        ;   Label: sound_mp3.cpp_requantizeSamples_FUN_005301b0
    PUSH ESI                            ; 005301b1
    PUSH EDI                            ; 005301b2
    PUSH EBP                            ; 005301b3
    MOV EBP,ESP                         ; 005301b4
    SUB ESP,0x20                        ; 005301b6
    AND ESP,0xfffffff8                  ; 005301b9
    MOV EAX,dword ptr [EBP + 0x20]      ; 005301bc
    XOR EDX,EDX                         ; 005301bf
    MOV EAX,dword ptr [EAX + 0x10]      ; 005301c1
    MOV dword ptr [ESP + 0x8],EDX       ; 005301c4
    MOV dword ptr [ESP + 0x10],EAX      ; 005301c8
    XOR ECX,ECX                         ; 005301cc
        ;   Label: LAB_005301cc
    MOV EBX,dword ptr [ESP + 0x10]      ; 005301ce
    MOV dword ptr [ESP + 0x18],ECX      ; 005301d2
    TEST EBX,EBX                        ; 005301d6
    JLE 0x00530235                      ; 005301d8
        ;   XREF to: 00530235 (CONDITIONAL_JUMP)  ; LAB_00530235
    MOV EAX,dword ptr [ESP + 0x8]       ; 005301da
    MOV EDX,dword ptr [EBP + 0x18]      ; 005301de
    MOV ECX,dword ptr [EBP + 0x1c]      ; 005301e1
    MOV EDI,dword ptr [ESP + 0x8]       ; 005301e4
    MOV ESI,dword ptr [EBP + 0x14]      ; 005301e8
    MOV dword ptr [ESP + 0xc],EAX       ; 005301eb
    ADD EDI,ESI                         ; 005301ef
    ADD EAX,EDX                         ; 005301f1
    MOV EDX,dword ptr [ESP + 0x8]       ; 005301f3
    MOV EBX,EAX                         ; 005301f7
    ADD EDX,ECX                         ; 005301f9
    IMUL ECX,dword ptr [ESP + 0x18],0x180 ; 005301fb
        ;   Label: LAB_005301fb
    MOV ESI,dword ptr [EDX]             ; 00530203
    TEST ESI,ESI                        ; 00530205
    JNZ 0x0053024f                      ; 00530207
        ;   XREF to: 0053024f (CONDITIONAL_JUMP)  ; LAB_0053024f
    MOV dword ptr [EBX],ESI             ; 00530209
    MOV ESI,dword ptr [ESP + 0x18]      ; 0053020b
        ;   Label: LAB_0053020b
    ADD EBX,0x180                       ; 0053020f
    ADD EDX,0x80                        ; 00530215
    INC ESI                             ; 0053021b
    ADD EDI,0x180                       ; 0053021c
    MOV dword ptr [ESP + 0x18],ESI      ; 00530222
    MOV ECX,ESI                         ; 00530226
    MOV ESI,dword ptr [ESP + 0x10]      ; 00530228
    ADD EAX,0x180                       ; 0053022c
    CMP ECX,ESI                         ; 00530231
    JL 0x005301fb                       ; 00530233
        ;   XREF to: 005301fb (CONDITIONAL_JUMP)  ; LAB_005301fb
    MOV EDI,dword ptr [ESP + 0x8]       ; 00530235
        ;   Label: LAB_00530235
    ADD EDI,0x4                         ; 00530239
    MOV dword ptr [ESP + 0x8],EDI       ; 0053023c
    CMP EDI,0x80                        ; 00530240
    JNZ 0x005301cc                      ; 00530246
        ;   XREF to: 005301cc (CONDITIONAL_JUMP)  ; LAB_005301cc
    MOV ESP,EBP                         ; 00530248
    POP EBP                             ; 0053024a
    POP EDI                             ; 0053024b
    POP ESI                             ; 0053024c
    POP EBX                             ; 0053024d
    RET                                 ; 0053024e
    INC ESI                             ; 0053024f
        ;   Label: LAB_0053024f
    MOV dword ptr [ESP + 0x14],ESI      ; 00530250
    ADD ECX,dword ptr [EBP + 0x14]      ; 00530254
    MOV ESI,dword ptr [ESP + 0xc]       ; 00530257
    ADD ESI,ECX                         ; 0053025b
    MOV ECX,dword ptr [EDX]             ; 0053025d
    MOV ESI,dword ptr [ESI]             ; 0053025f
    SHR ESI,CL                          ; 00530261
    MOV ECX,ESI                         ; 00530263
    AND ECX,0x1                         ; 00530265
    CMP ECX,0x1                         ; 00530268
    JNZ 0x005302e3                      ; 0053026b
        ;   XREF to: 005302e3 (CONDITIONAL_JUMP)  ; LAB_005302e3
    MOV dword ptr [EBX],0x0             ; 0053026d
    MOV ECX,dword ptr [ESP + 0x14]      ; 00530273
        ;   Label: LAB_00530273
    MOV ESI,0x1                         ; 00530277
    DEC ECX                             ; 0053027c
    SHL ESI,CL                          ; 0053027d
    MOV ECX,ESI                         ; 0053027f
    DEC ESI                             ; 00530281
    MOV dword ptr [ESP + 0x1c],ESI      ; 00530282
    MOV ESI,dword ptr [EDI]             ; 00530286
    AND ESI,dword ptr [ESP + 0x1c]      ; 00530288
    MOV dword ptr [ESP + 0x1c],ESI      ; 0053028c
    XOR ESI,ESI                         ; 00530290
    MOV dword ptr [ESP + 0x4],ESI       ; 00530292
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00530296
    MOV dword ptr [ESP],ESI             ; 0053029a
    MOV dword ptr [ESP + 0x1c],ECX      ; 0053029d
    FILD qword ptr [ESP]                ; 005302a1
    FILD dword ptr [ESP + 0x1c]         ; 005302a4
    FLD1                                ; 005302a8
    FDIVRP                              ; 005302aa
    MOV CL,byte ptr [ESP + 0x14]        ; 005302ac
    MOV ESI,0x1                         ; 005302b0
    FXCH                                ; 005302b5
    FMUL ST1                            ; 005302b7
    SHL ESI,CL                          ; 005302b9
    FLD float ptr [EAX]                 ; 005302bb
    FXCH                                ; 005302bd
    FADD ST0,ST1                        ; 005302bf
    MOV dword ptr [ESP + 0x1c],ESI      ; 005302c1
    FSTP ST1                            ; 005302c5
    FADDP                               ; 005302c7
    LEA ECX,[ESI + -0x1]                ; 005302c9
    FILD dword ptr [ESP + 0x1c]         ; 005302cc
    FMULP                               ; 005302d0
    MOV dword ptr [ESP + 0x1c],ECX      ; 005302d2
    FILD dword ptr [ESP + 0x1c]         ; 005302d6
    FDIVP                               ; 005302da
    FSTP float ptr [EAX]                ; 005302dc
    JMP 0x0053020b                      ; 005302de
        ;   XREF to: 0053020b (UNCONDITIONAL_JUMP)  ; LAB_0053020b
    MOV dword ptr [EBX],0xbf800000      ; 005302e3
        ;   Label: LAB_005302e3
    JMP 0x00530273                      ; 005302e9
        ;   XREF to: 00530273 (UNCONDITIONAL_JUMP)  ; LAB_00530273

