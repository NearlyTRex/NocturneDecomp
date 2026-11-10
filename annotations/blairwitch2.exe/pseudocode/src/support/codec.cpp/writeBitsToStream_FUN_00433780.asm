; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint support_codec_cpp_writeBitsToStream_FUN_00433780(byte *param_1,int param_2,int *param_3)
;
;
; XREF[2]:
;   support_codec.cpp_FUN_00434490 at 004344cc
;   support_codec.cpp_FUN_00434bb0 at 00434bc6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433780
        ;   Label: support_codec.cpp_writeBitsToStream_FUN_00433780
    PUSH ESI                            ; 00433781
    PUSH EDI                            ; 00433782
    PUSH EBP                            ; 00433783
    MOV EBP,dword ptr [ESP + 0x14]      ; 00433784
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00433788
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043378c
    MOV EDX,dword ptr [EBP]             ; 00433790
    CMP EAX,EDX                         ; 00433793
    JL 0x004337fd                       ; 00433795
        ;   XREF to: 004337fd (CONDITIONAL_JUMP)  ; LAB_004337fd
    JZ 0x0043382c                       ; 00433797
        ;   XREF to: 0043382c (CONDITIONAL_JUMP)  ; LAB_0043382c
    MOV ESI,0xffffffff                  ; 0043379d
    MOV CL,byte ptr [EBP]               ; 004337a2
    SUB EAX,EDX                         ; 004337a5
    MOV EBX,dword ptr [EBP + 0x4]       ; 004337a7
    MOV dword ptr [ESP + 0x18],EAX      ; 004337aa
    SHL ESI,CL                          ; 004337ae
    MOV dword ptr [EBP],0x0             ; 004337b0
    NOT ESI                             ; 004337b7
    MOV dword ptr [EBP + 0x4],0x0       ; 004337b9
    AND ESI,EBX                         ; 004337c0
    MOV EBX,EDX                         ; 004337c2
    CMP EAX,0x8                         ; 004337c4
    JL 0x004337ef                       ; 004337c7
        ;   XREF to: 004337ef (CONDITIONAL_JUMP)  ; LAB_004337ef
    PUSH EDI                            ; 004337c9
        ;   Label: LAB_004337c9
    MOV EAX,dword ptr [EDI]             ; 004337ca
    CALL dword ptr [EAX + 0x4]          ; 004337cc
    ADD ESP,0x4                         ; 004337cf
    TEST EAX,EAX                        ; 004337d2
    JL 0x00433842                       ; 004337d4
        ;   XREF to: 00433842 (CONDITIONAL_JUMP)  ; LAB_00433842
    MOV CL,BL                           ; 004337d6
    SHL EAX,CL                          ; 004337d8
    OR ESI,EAX                          ; 004337da
    MOV EAX,dword ptr [ESP + 0x18]      ; 004337dc
    SUB EAX,0x8                         ; 004337e0
    ADD EBX,0x8                         ; 004337e3
    MOV dword ptr [ESP + 0x18],EAX      ; 004337e6
    CMP EAX,0x8                         ; 004337ea
    JGE 0x004337c9                      ; 004337ed
        ;   XREF to: 004337c9 (CONDITIONAL_JUMP)  ; LAB_004337c9
    CMP dword ptr [ESP + 0x18],0x0      ; 004337ef
        ;   Label: LAB_004337ef
    JG 0x0043384d                       ; 004337f4
        ;   XREF to: 0043384d (CONDITIONAL_JUMP)  ; LAB_0043384d
    MOV EAX,ESI                         ; 004337f6
    POP EBP                             ; 004337f8
    POP EDI                             ; 004337f9
    POP ESI                             ; 004337fa
    POP EBX                             ; 004337fb
    RET                                 ; 004337fc
    MOV CL,byte ptr [ESP + 0x18]        ; 004337fd
        ;   Label: LAB_004337fd
    MOV EAX,0xffffffff                  ; 00433801
    SHL EAX,CL                          ; 00433806
    NOT EAX                             ; 00433808
    MOV ECX,dword ptr [EBP + 0x4]       ; 0043380a
    MOV EBX,dword ptr [EBP + 0x4]       ; 0043380d
    AND EAX,ECX                         ; 00433810
    MOV CL,byte ptr [ESP + 0x18]        ; 00433812
    SHR EBX,CL                          ; 00433816
    MOV ESI,dword ptr [EBP]             ; 00433818
    MOV dword ptr [EBP + 0x4],EBX       ; 0043381b
    MOV EBX,dword ptr [ESP + 0x18]      ; 0043381e
    SUB ESI,EBX                         ; 00433822
    MOV dword ptr [EBP],ESI             ; 00433824
    POP EBP                             ; 00433827
    POP EDI                             ; 00433828
    POP ESI                             ; 00433829
    POP EBX                             ; 0043382a
    RET                                 ; 0043382b
    MOV dword ptr [EBP],0x0             ; 0043382c
        ;   Label: LAB_0043382c
    MOV EAX,dword ptr [EBP + 0x4]       ; 00433833
    MOV dword ptr [EBP + 0x4],0x0       ; 00433836
    POP EBP                             ; 0043383d
    POP EDI                             ; 0043383e
    POP ESI                             ; 0043383f
    POP EBX                             ; 00433840
    RET                                 ; 00433841
    MOV dword ptr [EBP + 0x4],ESI       ; 00433842
        ;   Label: LAB_00433842
    MOV dword ptr [EBP],EBX             ; 00433845
    POP EBP                             ; 00433848
    POP EDI                             ; 00433849
    POP ESI                             ; 0043384a
    POP EBX                             ; 0043384b
    RET                                 ; 0043384c
    PUSH EDI                            ; 0043384d
        ;   Label: LAB_0043384d
    MOV EAX,dword ptr [EDI]             ; 0043384e
    CALL dword ptr [EAX + 0x4]          ; 00433850
    ADD ESP,0x4                         ; 00433853
    TEST EAX,EAX                        ; 00433856
    JL 0x00433842                       ; 00433858
        ;   XREF to: 00433842 (CONDITIONAL_JUMP)  ; LAB_00433842
    MOV CL,byte ptr [ESP + 0x18]        ; 0043385a
    MOV dword ptr [EBP + 0x4],EAX       ; 0043385e
    MOV EAX,0xffffffff                  ; 00433861
    SHL EAX,CL                          ; 00433866
    MOV EDI,dword ptr [EBP + 0x4]       ; 00433868
    NOT EAX                             ; 0043386b
    MOV CL,BL                           ; 0043386d
    AND EAX,EDI                         ; 0043386f
    SHL EAX,CL                          ; 00433871
    MOV CL,byte ptr [ESP + 0x18]        ; 00433873
    OR ESI,EAX                          ; 00433877
    MOV EAX,EDI                         ; 00433879
    SHR EAX,CL                          ; 0043387b
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043387d
    MOV dword ptr [EBP + 0x4],EAX       ; 00433881
    MOV EAX,0x8                         ; 00433884
    SUB EAX,EDX                         ; 00433889
    MOV dword ptr [EBP],EAX             ; 0043388b
    MOV EAX,ESI                         ; 0043388e
    POP EBP                             ; 00433890
    POP EDI                             ; 00433891
    POP ESI                             ; 00433892
    POP EBX                             ; 00433893
    RET                                 ; 00433894

