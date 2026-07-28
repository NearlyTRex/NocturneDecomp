; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004e37d0(CFileBitStream *this_ptr,SMpegSubbandScalefactors *sample_array,SMpegSubbandAllocation *allocation_array,SMpegFrame *frame)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; SMpegSubbandScalefactors * Stack[0x8]:4   sample_array
; SMpegSubbandAllocation * Stack[0xc]:4   allocation_array
; SMpegFrame *     Stack[0x10]:4   frame
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e8c9a
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e37d0
        ;   Label: sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004e37d0
    PUSH ESI                            ; 004e37d1
    PUSH EDI                            ; 004e37d2
    PUSH EBP                            ; 004e37d3
    SUB ESP,0x40                        ; 004e37d4
    MOV EBP,dword ptr [ESP + 0x54]      ; 004e37d7
    MOV EAX,dword ptr [ESP + 0x60]      ; 004e37db
    MOV EDX,dword ptr [EAX + 0x10]      ; 004e37df
    MOV dword ptr [ESP + 0x2c],EDX      ; 004e37e2
    MOV EDX,dword ptr [EAX + 0x18]      ; 004e37e6
    MOV dword ptr [ESP],EDX             ; 004e37e9
    MOV EDX,dword ptr [EAX + 0x14]      ; 004e37ec
    MOV ECX,dword ptr [ESP]             ; 004e37ef
    MOV dword ptr [ESP + 0x14],EDX      ; 004e37f2
    MOV EAX,dword ptr [EAX + 0x8]       ; 004e37f6
    XOR EDX,EDX                         ; 004e37f9
    MOV dword ptr [ESP + 0xc],EAX       ; 004e37fb
    MOV dword ptr [ESP + 0x24],EDX      ; 004e37ff
    TEST ECX,ECX                        ; 004e3803
    JLE 0x004e3914                      ; 004e3805
        ;   XREF to: 004e3914 (CONDITIONAL_JUMP)  ; LAB_004e3914
    MOV dword ptr [ESP + 0x4],EAX       ; 004e380b
    MOV dword ptr [ESP + 0x8],EDX       ; 004e380f
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e3813
        ;   Label: LAB_004e3813
    MOV dword ptr [ESP + 0x28],EAX      ; 004e3817
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e381b
    SHL EAX,0x8                         ; 004e381f
    MOV dword ptr [ESP + 0x10],EAX      ; 004e3822
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e3826
    MOV dword ptr [ESP + 0x3c],EAX      ; 004e382a
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e382e
    MOV dword ptr [ESP + 0x20],EAX      ; 004e3832
    MOV dword ptr [ESP + 0x18],EAX      ; 004e3836
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e383a
    MOV EAX,dword ptr [ESP + 0x58]      ; 004e383e
    MOV EDI,dword ptr [ESP + 0x5c]      ; 004e3842
    MOV dword ptr [ESP + 0x38],EAX      ; 004e3846
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e384a
    XOR ESI,ESI                         ; 004e384e
    ADD EAX,EDI                         ; 004e3850
    MOV dword ptr [ESP + 0x30],ESI      ; 004e3852
    MOV dword ptr [ESP + 0x34],EAX      ; 004e3856
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e385a
        ;   Label: LAB_004e385a
    CMP EAX,dword ptr [ESP + 0x14]      ; 004e385e
    JGE 0x004e396f                      ; 004e3862
        ;   XREF to: 004e396f (CONDITIONAL_JUMP)  ; LAB_004e396f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e3868
    MOV ECX,dword ptr [ESP + 0x30]      ; 004e386c
        ;   Label: LAB_004e386c
    CMP EAX,ECX                         ; 004e3870
    JLE 0x004e38e7                      ; 004e3872
        ;   XREF to: 004e38e7 (CONDITIONAL_JUMP)  ; LAB_004e38e7
    MOV EAX,ECX                         ; 004e3874
    MOV ECX,dword ptr [ESP + 0x5c]      ; 004e3876
    SHL EAX,0x7                         ; 004e387a
    ADD ECX,EAX                         ; 004e387d
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e387f
    MOV EBX,dword ptr [EAX]             ; 004e3883
    TEST EBX,EBX                        ; 004e3885
    JNZ 0x004e3979                      ; 004e3887
        ;   XREF to: 004e3979 (CONDITIONAL_JUMP)  ; LAB_004e3979
    MOV EBX,dword ptr [ESP + 0x18]      ; 004e388d
    MOV ECX,dword ptr [ESP + 0x18]      ; 004e3891
    MOV ESI,dword ptr [ESP + 0x38]      ; 004e3895
    ADD EBX,0x180                       ; 004e3899
    ADD ECX,ESI                         ; 004e389f
    ADD EBX,ESI                         ; 004e38a1
    MOV dword ptr [ECX],0x0             ; 004e38a3
        ;   Label: LAB_004e38a3
    ADD ECX,0x80                        ; 004e38a9
    CMP ECX,EBX                         ; 004e38af
    JNZ 0x004e38a3                      ; 004e38b1
        ;   XREF to: 004e38a3 (CONDITIONAL_JUMP)  ; LAB_004e38a3
    CMP dword ptr [ESP + 0x2c],0x2      ; 004e38b3
        ;   Label: LAB_004e38b3
    JZ 0x004e3a20                       ; 004e38b8
        ;   XREF to: 004e3a20 (CONDITIONAL_JUMP)  ; LAB_004e3a20
    MOV EDX,dword ptr [ESP + 0x34]      ; 004e38be
        ;   Label: LAB_004e38be
    MOV ECX,dword ptr [ESP + 0x30]      ; 004e38c2
    MOV EAX,dword ptr [ESP + 0x38]      ; 004e38c6
    ADD EDX,0x80                        ; 004e38ca
    INC ECX                             ; 004e38d0
    ADD EAX,0x180                       ; 004e38d1
    MOV dword ptr [ESP + 0x34],EDX      ; 004e38d6
    MOV dword ptr [ESP + 0x30],ECX      ; 004e38da
    MOV dword ptr [ESP + 0x38],EAX      ; 004e38de
    JMP 0x004e385a                      ; 004e38e2
        ;   XREF to: 004e385a (UNCONDITIONAL_JUMP)  ; LAB_004e385a
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e38e7
        ;   Label: LAB_004e38e7
    MOV ESI,dword ptr [ESP + 0x4]       ; 004e38eb
    MOV EDI,dword ptr [ESP + 0x24]      ; 004e38ef
    MOV EDX,dword ptr [ESP]             ; 004e38f3
    ADD EBX,0x4                         ; 004e38f6
    ADD ESI,0x100                       ; 004e38f9
    INC EDI                             ; 004e38ff
    MOV dword ptr [ESP + 0x8],EBX       ; 004e3900
    MOV dword ptr [ESP + 0x4],ESI       ; 004e3904
    MOV dword ptr [ESP + 0x24],EDI      ; 004e3908
    CMP EDI,EDX                         ; 004e390c
    JL 0x004e3813                       ; 004e390e
        ;   XREF to: 004e3813 (CONDITIONAL_JUMP)  ; LAB_004e3813
    MOV ECX,dword ptr [ESP]             ; 004e3914
        ;   Label: LAB_004e3914
    CMP ECX,0x20                        ; 004e3917
    JGE 0x004e3967                      ; 004e391a
        ;   XREF to: 004e3967 (CONDITIONAL_JUMP)  ; LAB_004e3967
    LEA EDI,[ECX*0x4 + 0x0]             ; 004e391c
    XOR EBP,EBP                         ; 004e3923
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004e3925
        ;   Label: LAB_004e3925
    MOV EDX,EBP                         ; 004e3929
    CMP EBP,EBX                         ; 004e392b
    JGE 0x004e395c                      ; 004e392d
        ;   XREF to: 004e395c (CONDITIONAL_JUMP)  ; LAB_004e395c
    MOV EBX,EDI                         ; 004e392f
    IMUL EAX,EDX,0x180                  ; 004e3931
        ;   Label: LAB_004e3931
    ADD EAX,dword ptr [ESP + 0x58]      ; 004e3937
    LEA ECX,[EBX + EAX*0x1]             ; 004e393b
    LEA ESI,[EBX + 0x180]               ; 004e393e
    ADD EAX,ESI                         ; 004e3944
    ADD ECX,0x80                        ; 004e3946
        ;   Label: LAB_004e3946
    MOV dword ptr [ECX + -0x80],EBP     ; 004e394c
    CMP ECX,EAX                         ; 004e394f
    JNZ 0x004e3946                      ; 004e3951
        ;   XREF to: 004e3946 (CONDITIONAL_JUMP)  ; LAB_004e3946
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004e3953
    INC EDX                             ; 004e3957
    CMP EDX,ESI                         ; 004e3958
    JL 0x004e3931                       ; 004e395a
        ;   XREF to: 004e3931 (CONDITIONAL_JUMP)  ; LAB_004e3931
    ADD EDI,0x4                         ; 004e395c
        ;   Label: LAB_004e395c
    CMP EDI,0x80                        ; 004e395f
    JL 0x004e3925                       ; 004e3965
        ;   XREF to: 004e3925 (CONDITIONAL_JUMP)  ; LAB_004e3925
    ADD ESP,0x40                        ; 004e3967
        ;   Label: LAB_004e3967
    POP EBP                             ; 004e396a
    POP EDI                             ; 004e396b
    POP ESI                             ; 004e396c
    POP EBX                             ; 004e396d
    RET                                 ; 004e396e
    MOV EAX,0x1                         ; 004e396f
        ;   Label: LAB_004e396f
    JMP 0x004e386c                      ; 004e3974
        ;   XREF to: 004e386c (UNCONDITIONAL_JUMP)  ; LAB_004e386c
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e3979
        ;   Label: LAB_004e3979
    MOV EAX,EBX                         ; 004e397d
    MOV EBX,dword ptr [ESP + 0x10]      ; 004e397f
    SHL EAX,0x4                         ; 004e3983
    ADD EDX,EBX                         ; 004e3986
    ADD EAX,EDX                         ; 004e3988
    CMP dword ptr [EAX + 0x8],0x3       ; 004e398a
    JNZ 0x004e39d6                      ; 004e398e
        ;   XREF to: 004e39d6 (CONDITIONAL_JUMP)  ; LAB_004e39d6
    MOV EBX,dword ptr [ESP + 0x28]      ; 004e3990
    MOV EDX,dword ptr [ESP + 0x38]      ; 004e3994
    MOV EDI,dword ptr [ESP + 0x28]      ; 004e3998
    MOV ESI,dword ptr [ESP + 0x28]      ; 004e399c
    ADD EDI,0x180                       ; 004e39a0
    ADD EBX,EDX                         ; 004e39a6
    ADD ESI,ECX                         ; 004e39a8
    ADD EDI,EDX                         ; 004e39aa
    MOV EAX,dword ptr [ESI]             ; 004e39ac
        ;   Label: LAB_004e39ac
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e39ae
    SHL EAX,0x4                         ; 004e39b2
    ADD EAX,EDX                         ; 004e39b5
    MOV EAX,dword ptr [EAX + 0x4]       ; 004e39b7
    PUSH EAX                            ; 004e39ba
    PUSH EBP                            ; 004e39bb
    ADD EBX,0x80                        ; 004e39bc
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e39c2
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 004e39c7
    MOV dword ptr [EBX + -0x80],EAX     ; 004e39ca
    CMP EBX,EDI                         ; 004e39cd
    JNZ 0x004e39ac                      ; 004e39cf
        ;   XREF to: 004e39ac (CONDITIONAL_JUMP)  ; LAB_004e39ac
    JMP 0x004e38b3                      ; 004e39d1
        ;   XREF to: 004e38b3 (UNCONDITIONAL_JUMP)  ; LAB_004e38b3
    MOV ESI,dword ptr [EAX]             ; 004e39d6
        ;   Label: LAB_004e39d6
    MOV EAX,dword ptr [EAX + 0x4]       ; 004e39d8
    PUSH EAX                            ; 004e39db
    PUSH EBP                            ; 004e39dc
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e39dd
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 004e39e2
    MOV EBX,dword ptr [ESP + 0x20]      ; 004e39e5
    MOV EDI,dword ptr [ESP + 0x38]      ; 004e39e9
    MOV ECX,EAX                         ; 004e39ed
    ADD EBX,EDI                         ; 004e39ef
    MOV EDI,dword ptr [ESP + 0x20]      ; 004e39f1
    MOV EAX,dword ptr [ESP + 0x38]      ; 004e39f5
    ADD EDI,0x180                       ; 004e39f9
    ADD EDI,EAX                         ; 004e39ff
    MOV EAX,ECX                         ; 004e3a01
        ;   Label: LAB_004e3a01
    XOR EDX,EDX                         ; 004e3a03
    DIV ESI                             ; 004e3a05
    MOV EAX,ECX                         ; 004e3a07
    MOV dword ptr [EBX],EDX             ; 004e3a09
    XOR EDX,EDX                         ; 004e3a0b
    DIV ESI                             ; 004e3a0d
    ADD EBX,0x80                        ; 004e3a0f
    MOV ECX,EAX                         ; 004e3a15
    CMP EBX,EDI                         ; 004e3a17
    JNZ 0x004e3a01                      ; 004e3a19
        ;   XREF to: 004e3a01 (CONDITIONAL_JUMP)  ; LAB_004e3a01
    JMP 0x004e38b3                      ; 004e3a1b
        ;   XREF to: 004e38b3 (UNCONDITIONAL_JUMP)  ; LAB_004e38b3
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e3a20
        ;   Label: LAB_004e3a20
    CMP EAX,dword ptr [ESP + 0x14]      ; 004e3a24
    JL 0x004e38be                       ; 004e3a28
        ;   XREF to: 004e38be (CONDITIONAL_JUMP)  ; LAB_004e38be
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e3a2e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004e3a32
    MOV ESI,dword ptr [ESP + 0x58]      ; 004e3a36
    ADD EDX,0x180                       ; 004e3a3a
    ADD ECX,ESI                         ; 004e3a40
    ADD EDX,ESI                         ; 004e3a42
    ADD ECX,0x80                        ; 004e3a44
        ;   Label: LAB_004e3a44
    MOV EAX,dword ptr [ECX + -0x80]     ; 004e3a4a
    MOV dword ptr [ECX + 0x100],EAX     ; 004e3a4d
    CMP ECX,EDX                         ; 004e3a53
    JZ 0x004e38be                       ; 004e3a55
        ;   XREF to: 004e38be (CONDITIONAL_JUMP)  ; LAB_004e38be
    JMP 0x004e3a44                      ; 004e3a5b
        ;   XREF to: 004e3a44 (UNCONDITIONAL_JUMP)  ; LAB_004e3a44

