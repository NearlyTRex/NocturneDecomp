; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_requantizeSamples_FUN_004fe850(SMpegSubbandScalefactors *quantized_samples,SMpegSubbandScalefactors *dequantized_samples,SMpegSubbandAllocation *allocation,SMpegFrame *frame)
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 00502e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe850
        ;   Label: sound_mp3.cpp_requantizeSamples_FUN_004fe850
    PUSH ESI                            ; 004fe851
    PUSH EDI                            ; 004fe852
    PUSH EBP                            ; 004fe853
    MOV EBP,ESP                         ; 004fe854
    SUB ESP,0x20                        ; 004fe856
    AND ESP,0xfffffff8                  ; 004fe859
    MOV EAX,dword ptr [EBP + 0x20]      ; 004fe85c
    XOR EDX,EDX                         ; 004fe85f
    MOV EAX,dword ptr [EAX + 0x10]      ; 004fe861
    MOV dword ptr [ESP + 0x8],EDX       ; 004fe864
    MOV dword ptr [ESP + 0x10],EAX      ; 004fe868
    XOR ECX,ECX                         ; 004fe86c
        ;   Label: LAB_004fe86c
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fe86e
    MOV dword ptr [ESP + 0x18],ECX      ; 004fe872
    TEST EBX,EBX                        ; 004fe876
    JLE 0x004fe8d5                      ; 004fe878
        ;   XREF to: 004fe8d5 (CONDITIONAL_JUMP)  ; LAB_004fe8d5
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fe87a
    MOV EDX,dword ptr [EBP + 0x18]      ; 004fe87e
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004fe881
    MOV EDI,dword ptr [ESP + 0x8]       ; 004fe884
    MOV ESI,dword ptr [EBP + 0x14]      ; 004fe888
    MOV dword ptr [ESP + 0xc],EAX       ; 004fe88b
    ADD EDI,ESI                         ; 004fe88f
    ADD EAX,EDX                         ; 004fe891
    MOV EDX,dword ptr [ESP + 0x8]       ; 004fe893
    MOV EBX,EAX                         ; 004fe897
    ADD EDX,ECX                         ; 004fe899
    IMUL ECX,dword ptr [ESP + 0x18],0x180 ; 004fe89b
        ;   Label: LAB_004fe89b
    MOV ESI,dword ptr [EDX]             ; 004fe8a3
    TEST ESI,ESI                        ; 004fe8a5
    JNZ 0x004fe8ef                      ; 004fe8a7
        ;   XREF to: 004fe8ef (CONDITIONAL_JUMP)  ; LAB_004fe8ef
    MOV dword ptr [EBX],ESI             ; 004fe8a9
    MOV ESI,dword ptr [ESP + 0x18]      ; 004fe8ab
        ;   Label: LAB_004fe8ab
    ADD EBX,0x180                       ; 004fe8af
    ADD EDX,0x80                        ; 004fe8b5
    INC ESI                             ; 004fe8bb
    ADD EDI,0x180                       ; 004fe8bc
    MOV dword ptr [ESP + 0x18],ESI      ; 004fe8c2
    MOV ECX,ESI                         ; 004fe8c6
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fe8c8
    ADD EAX,0x180                       ; 004fe8cc
    CMP ECX,ESI                         ; 004fe8d1
    JL 0x004fe89b                       ; 004fe8d3
        ;   XREF to: 004fe89b (CONDITIONAL_JUMP)  ; LAB_004fe89b
    MOV EDI,dword ptr [ESP + 0x8]       ; 004fe8d5
        ;   Label: LAB_004fe8d5
    ADD EDI,0x4                         ; 004fe8d9
    MOV dword ptr [ESP + 0x8],EDI       ; 004fe8dc
    CMP EDI,0x80                        ; 004fe8e0
    JNZ 0x004fe86c                      ; 004fe8e6
        ;   XREF to: 004fe86c (CONDITIONAL_JUMP)  ; LAB_004fe86c
    MOV ESP,EBP                         ; 004fe8e8
    POP EBP                             ; 004fe8ea
    POP EDI                             ; 004fe8eb
    POP ESI                             ; 004fe8ec
    POP EBX                             ; 004fe8ed
    RET                                 ; 004fe8ee
    INC ESI                             ; 004fe8ef
        ;   Label: LAB_004fe8ef
    MOV dword ptr [ESP + 0x14],ESI      ; 004fe8f0
    ADD ECX,dword ptr [EBP + 0x14]      ; 004fe8f4
    MOV ESI,dword ptr [ESP + 0xc]       ; 004fe8f7
    ADD ESI,ECX                         ; 004fe8fb
    MOV ECX,dword ptr [EDX]             ; 004fe8fd
    MOV ESI,dword ptr [ESI]             ; 004fe8ff
    SHR ESI,CL                          ; 004fe901
    MOV ECX,ESI                         ; 004fe903
    AND ECX,0x1                         ; 004fe905
    CMP ECX,0x1                         ; 004fe908
    JNZ 0x004fe983                      ; 004fe90b
        ;   XREF to: 004fe983 (CONDITIONAL_JUMP)  ; LAB_004fe983
    MOV dword ptr [EBX],0x0             ; 004fe90d
    MOV ECX,dword ptr [ESP + 0x14]      ; 004fe913
        ;   Label: LAB_004fe913
    MOV ESI,0x1                         ; 004fe917
    DEC ECX                             ; 004fe91c
    SHL ESI,CL                          ; 004fe91d
    MOV ECX,ESI                         ; 004fe91f
    DEC ESI                             ; 004fe921
    MOV dword ptr [ESP + 0x1c],ESI      ; 004fe922
    MOV ESI,dword ptr [EDI]             ; 004fe926
    AND ESI,dword ptr [ESP + 0x1c]      ; 004fe928
    MOV dword ptr [ESP + 0x1c],ESI      ; 004fe92c
    XOR ESI,ESI                         ; 004fe930
    MOV dword ptr [ESP + 0x4],ESI       ; 004fe932
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004fe936
    MOV dword ptr [ESP],ESI             ; 004fe93a
    MOV dword ptr [ESP + 0x1c],ECX      ; 004fe93d
    FILD qword ptr [ESP]                ; 004fe941
    FILD dword ptr [ESP + 0x1c]         ; 004fe944
    FLD1                                ; 004fe948
    FDIVRP                              ; 004fe94a
    MOV CL,byte ptr [ESP + 0x14]        ; 004fe94c
    MOV ESI,0x1                         ; 004fe950
    FXCH                                ; 004fe955
    FMUL ST1                            ; 004fe957
    SHL ESI,CL                          ; 004fe959
    FLD float ptr [EAX]                 ; 004fe95b
    FXCH                                ; 004fe95d
    FADD ST0,ST1                        ; 004fe95f
    MOV dword ptr [ESP + 0x1c],ESI      ; 004fe961
    FSTP ST1                            ; 004fe965
    FADDP                               ; 004fe967
    LEA ECX,[ESI + -0x1]                ; 004fe969
    FILD dword ptr [ESP + 0x1c]         ; 004fe96c
    FMULP                               ; 004fe970
    MOV dword ptr [ESP + 0x1c],ECX      ; 004fe972
    FILD dword ptr [ESP + 0x1c]         ; 004fe976
    FDIVP                               ; 004fe97a
    FSTP float ptr [EAX]                ; 004fe97c
    JMP 0x004fe8ab                      ; 004fe97e
        ;   XREF to: 004fe8ab (UNCONDITIONAL_JUMP)  ; LAB_004fe8ab
    MOV dword ptr [EBX],0xbf800000      ; 004fe983
        ;   Label: LAB_004fe983
    JMP 0x004fe913                      ; 004fe989
        ;   XREF to: 004fe913 (UNCONDITIONAL_JUMP)  ; LAB_004fe913

