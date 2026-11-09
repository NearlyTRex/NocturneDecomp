; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004feb90(CMP3Decoder *this_ptr,float *subband_samples,int channel_index,short *pcm_output)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; float *          Stack[0x8]:4   subband_samples
; int              Stack[0xc]:4   channel_index
; short *          Stack[0x10]:4   pcm_output
; Local Variables:
; undefined8       Stack[-0xf0]:8  local_f0
; undefined8       Stack[-0x64]:8  local_64
; undefined8       Stack[-0x5c]:8  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 00502f41
;
; Referenced Globals:
;   undefined4 DAT_005ca097
;   undefined4 DAT_005ca09f
;   undefined4 DAT_005ca0a7
;   undefined4 DAT_005ca0af
;   undefined4 DAT_005ca0b7
;   undefined4 DAT_005ca0bf
;   undefined4 DAT_005ca0c7
;   undefined4 DAT_00600910
;   undefined4 DAT_00600990
;   undefined4 DAT_00601110
;   undefined4 DAT_01d8e410
;   undefined4 DAT_01d8e414
;   undefined4 DAT_01d8e490
;
; Called Functions:
;   crt_math.c_modf_FUN_005a5fd6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004feb90
        ;   Label: sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004feb90
    PUSH ESI                            ; 004feb91
    PUSH EDI                            ; 004feb92
    PUSH EBP                            ; 004feb93
    MOV EBP,ESP                         ; 004feb94
    SUB ESP,0xd4                        ; 004feb96
    CMP dword ptr [0x00601110],0x0      ; 004feb9c | DAT_00601110
    JNZ 0x004fed5e                      ; 004feba3
        ;   XREF to: 004fed5e (CONDITIONAL_JUMP)  ; LAB_004fed5e
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004feba9
        ;   Label: LAB_004feba9
    MOV ECX,dword ptr [EBP + 0x14]      ; 004febac
    SHL EAX,0x2                         ; 004febaf
    ADD EAX,ECX                         ; 004febb2
    MOV EBX,dword ptr [EAX + 0x7350]    ; 004febb4
    SUB EBX,0x40                        ; 004febba
    AND EBX,0x3ff                       ; 004febbd
    MOV dword ptr [EAX + 0x7350],EBX    ; 004febc3
    LEA ESI,[EBX*0x4 + 0x0]             ; 004febc9
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004febd0
    LEA EAX,[ECX + 0x5350]              ; 004febd3
    SHL EBX,0xc                         ; 004febd9
    ADD EAX,EBX                         ; 004febdc
    ADD EAX,ESI                         ; 004febde
    MOV dword ptr [EBP + -0x34],EAX     ; 004febe0
    XOR EBX,EBX                         ; 004febe3
    MOV dword ptr [EBP + -0x3c],EBX     ; 004febe5
    MOV ESI,dword ptr [EBP + 0x18]      ; 004febe8
    LEA EAX,[EBX*0x4 + 0x0]             ; 004febeb
        ;   Label: LAB_004febeb
    ADD EAX,ESI                         ; 004febf2
    FLD float ptr [EAX]                 ; 004febf4
    FABS                                ; 004febf6
    FCOMP double ptr [0x005ca0c7]       ; 004febf8 | DAT_005ca0c7
    FNSTSW AX                           ; 004febfe
    SAHF                                ; 004fec00
    JBE 0x004fec10                      ; 004fec01
        ;   XREF to: 004fec10 (CONDITIONAL_JUMP)  ; LAB_004fec10
    MOV EAX,dword ptr [EBP + -0x3c]     ; 004fec03
    MOV dword ptr [EBP + EAX*0x4 + 0xffffff2c],EBX ; 004fec06
    INC dword ptr [EBP + -0x3c]         ; 004fec0d
    INC EBX                             ; 004fec10
        ;   Label: LAB_004fec10
    CMP EBX,0x20                        ; 004fec11
    JL 0x004febeb                       ; 004fec14
        ;   XREF to: 004febeb (CONDITIONAL_JUMP)  ; LAB_004febeb
    XOR EAX,EAX                         ; 004fec16
    MOV dword ptr [EBP + -0x10],EAX     ; 004fec18
    MOV EAX,dword ptr [EBP + -0x10]     ; 004fec1b
        ;   Label: LAB_004fec1b
    MOV EBX,0x1d8e410                   ; 004fec1e
    SHL EAX,0x7                         ; 004fec23
    ADD EBX,EAX                         ; 004fec26
    MOV dword ptr [EBP + -0x30],EBX     ; 004fec28
    MOV EAX,dword ptr [EBP + 0x18]      ; 004fec2b
    MOV dword ptr [EBP + -0x2c],EAX     ; 004fec2e
    FLDZ                                ; 004fec31
    MOV ECX,dword ptr [EBP + 0xffffffc4] ; 004fec33
    SUB ECX,0x1                         ; 004fec39
    JL 0x004fec5e                       ; 004fec3c
        ;   XREF to: 004fec5e (CONDITIONAL_JUMP)  ; LAB_004fec5e
    MOV EBX,dword ptr [EBP + 0xffffffd0] ; 004fec3e
    MOV EDX,dword ptr [EBP + 0xffffffd4] ; 004fec44
    MOV EAX,dword ptr [EBP + ECX*0x4 + 0xffffff2c] ; 004fec4a
        ;   Label: LAB_004fec4a
    FLD float ptr [EBX + EAX*0x4]       ; 004fec51
    FMUL float ptr [EDX + EAX*0x4]      ; 004fec54
    FADDP                               ; 004fec57
    SUB ECX,0x1                         ; 004fec59
    JGE 0x004fec4a                      ; 004fec5c
        ;   XREF to: 004fec4a (CONDITIONAL_JUMP)  ; LAB_004fec4a
    MOV EBX,dword ptr [EBP + 0xffffffcc] ; 004fec5e
        ;   Label: LAB_004fec5e
    FSTP float ptr [EBX]                ; 004fec64
    ADD dword ptr [EBP + -0x34],0x4     ; 004fec66
    MOV ECX,dword ptr [EBP + -0x10]     ; 004fec6a
    INC ECX                             ; 004fec6d
    MOV dword ptr [EBP + -0x10],ECX     ; 004fec6e
    CMP ECX,0x40                        ; 004fec71
    JL 0x004fec1b                       ; 004fec74
        ;   XREF to: 004fec1b (CONDITIONAL_JUMP)  ; LAB_004fec1b
    XOR ESI,ESI                         ; 004fec76
    MOV dword ptr [EBP + -0x38],ESI     ; 004fec78
    CMP dword ptr [EBP + -0x38],0x20    ; 004fec7b
    JGE 0x004fed57                      ; 004fec7f
        ;   XREF to: 004fed57 (CONDITIONAL_JUMP)  ; LAB_004fed57
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004fec85
    MOV EBX,dword ptr [EBP + 0x14]      ; 004fec88
    SHL EAX,0x2                         ; 004fec8b
    ADD EBX,EAX                         ; 004fec8e
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004fec90
    MOV dword ptr [EBP + -0x1c],EBX     ; 004fec93
    MOV EBX,dword ptr [EBP + 0x14]      ; 004fec96
    SHL EAX,0xc                         ; 004fec99
    ADD EBX,0x5350                      ; 004fec9c
    ADD EBX,EAX                         ; 004feca2
    MOV dword ptr [EBP + -0x18],EBX     ; 004feca4
    MOV EAX,dword ptr [EBP + -0x38]     ; 004feca7
        ;   Label: LAB_004feca7
    MOV EBX,dword ptr [EBP + -0x1c]     ; 004fecaa
    MOV ESI,dword ptr [EBX + 0x7350]    ; 004fecad
    ADD EAX,ESI                         ; 004fecb3
    MOV dword ptr [EBP + -0x8],EAX      ; 004fecb5
    MOV EAX,dword ptr [EBP + -0x18]     ; 004fecb8
    MOV dword ptr [EBP + -0x28],EAX     ; 004fecbb
    MOV dword ptr [EBP + -0x24],0x47000000 ; 004fecbe
    FLDZ                                ; 004fecc5
    MOV EBX,dword ptr [EBP + 0xffffffc8] ; 004fecc7
    MOV EDX,dword ptr [EBP + 0xfffffff8] ; 004feccd
    MOV ECX,0x8                         ; 004fecd3
    MOV ESI,dword ptr [EBP + 0xffffffd8] ; 004fecd8
    FLD float ptr [EBX*0x4 + 0x600910]  ; 004fecde | DAT_00600910
        ;   Label: LAB_004fecde
    AND EDX,0x3ff                       ; 004fece5
    FMUL float ptr [ESI + EDX*0x4]      ; 004feceb
    ADD EDX,0x60                        ; 004fecee
    FLD float ptr [EBX*0x4 + 0x600990]  ; 004fecf1 | DAT_00600990
    AND EDX,0x3ff                       ; 004fecf8
    FMUL float ptr [ESI + EDX*0x4]      ; 004fecfe
    ADD EBX,0x40                        ; 004fed01
    ADD EDX,0x20                        ; 004fed04
    FADDP                               ; 004fed07
    FADDP                               ; 004fed09
    DEC ECX                             ; 004fed0b
    JNZ 0x004fecde                      ; 004fed0c
        ;   XREF to: 004fecde (CONDITIONAL_JUMP)  ; LAB_004fecde
    FMUL float ptr [EBP + 0xffffffdc]   ; 004fed0e
    FISTP dword ptr [EBP + 0xffffffe0]  ; 004fed14
    CMP dword ptr [EBP + -0x20],0x8000  ; 004fed1a
    JGE 0x004fee32                      ; 004fed21
        ;   XREF to: 004fee32 (CONDITIONAL_JUMP)  ; LAB_004fee32
    CMP dword ptr [EBP + -0x20],0xffff8000 ; 004fed27
    JGE 0x004fed37                      ; 004fed2e
        ;   XREF to: 004fed37 (CONDITIONAL_JUMP)  ; LAB_004fed37
    MOV dword ptr [EBP + -0x20],0xffff8000 ; 004fed30
    MOV EBX,dword ptr [EBP + -0x38]     ; 004fed37
        ;   Label: LAB_004fed37
    MOV EAX,dword ptr [EBP + 0x20]      ; 004fed3a
    ADD EBX,EBX                         ; 004fed3d
    ADD EBX,EAX                         ; 004fed3f
    MOV EAX,dword ptr [EBP + -0x20]     ; 004fed41
    MOV word ptr [EBX],AX               ; 004fed44
    MOV EAX,dword ptr [EBP + -0x38]     ; 004fed47
    INC dword ptr [EBP + -0x38]         ; 004fed4a
    CMP dword ptr [EBP + -0x38],0x20    ; 004fed4d
    JL 0x004feca7                       ; 004fed51
        ;   XREF to: 004feca7 (CONDITIONAL_JUMP)  ; LAB_004feca7
    MOV ESP,EBP                         ; 004fed57
        ;   Label: LAB_004fed57
    POP EBP                             ; 004fed59
    POP EDI                             ; 004fed5a
    POP ESI                             ; 004fed5b
    POP EBX                             ; 004fed5c
    RET                                 ; 004fed5d
    XOR ECX,ECX                         ; 004fed5e
        ;   Label: LAB_004fed5e
    MOV EBX,0x1d8e410                   ; 004fed60
    MOV dword ptr [EBP + -0xc],ECX      ; 004fed65
    MOV dword ptr [EBP + -0x14],EBX     ; 004fed68
    MOV EBX,dword ptr [EBP + -0x14]     ; 004fed6b
        ;   Label: LAB_004fed6b
    MOV EDI,0x1                         ; 004fed6e
    MOV ESI,EBX                         ; 004fed73
    MOV EAX,dword ptr [EBP + -0xc]      ; 004fed75
        ;   Label: LAB_004fed75
    MOV dword ptr [EBP + -0x4],EAX      ; 004fed78
    FILD dword ptr [EBP + -0x4]         ; 004fed7b
    FMUL double ptr [0x005ca097]        ; 004fed7e | DAT_005ca097
    FADD double ptr [0x005ca0af]        ; 004fed84 | DAT_005ca0af
    MOV dword ptr [EBP + -0x4],EDI      ; 004fed8a
    FILD dword ptr [EBP + -0x4]         ; 004fed8d
    FMULP                               ; 004fed90
    FCOS                                ; 004fed92
    FMUL double ptr [0x005ca09f]        ; 004fed94 | DAT_005ca09f
    FLDZ                                ; 004fed9a
    FXCH                                ; 004fed9c
    FSTP float ptr [EBX]                ; 004fed9e | DAT_01d8e410 | DAT_01d8e414 | DAT_01d8e490
    FCOMP float ptr [EBX]               ; 004feda0 | DAT_01d8e410 | DAT_01d8e414 | DAT_01d8e490
    FNSTSW AX                           ; 004feda2
    SAHF                                ; 004feda4
    JA 0x004fee11                       ; 004feda5
        ;   XREF to: 004fee11 (CONDITIONAL_JUMP)  ; LAB_004fee11
    FLD float ptr [EBX]                 ; 004feda7 | DAT_01d8e410
    LEA EAX,[EBP + -0x54]               ; 004feda9
    FSTP double ptr [EBP + -0x54]       ; 004fedac
    FLD float ptr [EBX]                 ; 004fedaf | DAT_01d8e410
    PUSH EAX                            ; 004fedb1
    FADD double ptr [0x005ca0bf]        ; 004fedb2 | DAT_005ca0bf
    SUB ESP,0x8                         ; 004fedb8
    FSTP double ptr [ESP]               ; 004fedbb
    CALL crt_math.c_modf_FUN_005a5fd6   ; 004fedbe
        ;   XREF to: 005a5fd6 (UNCONDITIONAL_CALL)  ; double crt_math.c_modf_FUN_005a5fd6(double value, double * integer_part)
    FLD double ptr [EBP + -0x54]        ; 004fedc3
    ADD ESP,0xc                         ; 004fedc6
        ;   Label: LAB_004fedc6
    FSTP float ptr [EBX]                ; 004fedc9 | DAT_01d8e410 | DAT_01d8e414
    FLD float ptr [ESI]                 ; 004fedcb | DAT_01d8e410 | DAT_01d8e414
    FLD ST0                             ; 004fedcd
    FMUL double ptr [0x005ca0a7]        ; 004fedcf | DAT_005ca0a7
    ADD EBX,0x4                         ; 004fedd5
    ADD EDI,0x2                         ; 004fedd8
    ADD ESI,0x4                         ; 004feddb
    FSTP ST1                            ; 004fedde
    FSTP float ptr [ESI + -0x4]         ; 004fede0 | DAT_01d8e410 | DAT_01d8e414
    CMP EDI,0x41                        ; 004fede3
    JNZ 0x004fed75                      ; 004fede6
        ;   XREF to: 004fed75 (CONDITIONAL_JUMP)  ; LAB_004fed75
    MOV EDI,dword ptr [EBP + -0xc]      ; 004fede8
    MOV ESI,dword ptr [EBP + -0x14]     ; 004fedeb
    INC EDI                             ; 004fedee
    ADD ESI,0x80                        ; 004fedef
    MOV dword ptr [EBP + -0xc],EDI      ; 004fedf5
    MOV dword ptr [EBP + -0x14],ESI     ; 004fedf8
    CMP EDI,0x40                        ; 004fedfb
    JL 0x004fed6b                       ; 004fedfe
        ;   XREF to: 004fed6b (CONDITIONAL_JUMP)  ; LAB_004fed6b
    XOR EDX,EDX                         ; 004fee04
    MOV dword ptr [0x00601110],EDX      ; 004fee06 | DAT_00601110
    JMP 0x004feba9                      ; 004fee0c
        ;   XREF to: 004feba9 (UNCONDITIONAL_JUMP)  ; LAB_004feba9
    FLD float ptr [EBX]                 ; 004fee11 | DAT_01d8e414
        ;   Label: LAB_004fee11
    LEA EAX,[EBP + -0x4c]               ; 004fee13
    FSTP double ptr [EBP + -0x4c]       ; 004fee16
    FLD float ptr [EBX]                 ; 004fee19 | DAT_01d8e414
    PUSH EAX                            ; 004fee1b
    FADD double ptr [0x005ca0b7]        ; 004fee1c | DAT_005ca0b7
    SUB ESP,0x8                         ; 004fee22
    FSTP double ptr [ESP]               ; 004fee25
    CALL crt_math.c_modf_FUN_005a5fd6   ; 004fee28
        ;   XREF to: 005a5fd6 (UNCONDITIONAL_CALL)  ; double crt_math.c_modf_FUN_005a5fd6(double value, double * integer_part)
    FLD double ptr [EBP + -0x4c]        ; 004fee2d
    JMP 0x004fedc6                      ; 004fee30
        ;   XREF to: 004fedc6 (UNCONDITIONAL_JUMP)  ; LAB_004fedc6
    MOV dword ptr [EBP + -0x20],0x7fff  ; 004fee32
        ;   Label: LAB_004fee32
    JMP 0x004fed37                      ; 004fee39
        ;   XREF to: 004fed37 (UNCONDITIONAL_JUMP)  ; LAB_004fed37

