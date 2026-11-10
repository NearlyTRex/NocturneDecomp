; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint support_codec_cpp_writeBitsToStream_FUN_004400f0(byte *param_1,int param_2,int *param_3)
;
;
; XREF[2]:
;   support_codec.cpp_FUN_00440e10 at 00440e4c
;   support_codec.cpp_FUN_00441530 at 00441546
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004400f0
        ;   Label: support_codec.cpp_writeBitsToStream_FUN_004400f0
    PUSH ESI                            ; 004400f1
    PUSH EDI                            ; 004400f2
    PUSH EBP                            ; 004400f3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004400f4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004400f8
    MOV EAX,dword ptr [ESP + 0x18]      ; 004400fc
    MOV EDX,dword ptr [EBP]             ; 00440100
    CMP EAX,EDX                         ; 00440103
    JL 0x0044016d                       ; 00440105
        ;   XREF to: 0044016d (CONDITIONAL_JUMP)  ; LAB_0044016d
    JZ 0x0044019c                       ; 00440107
        ;   XREF to: 0044019c (CONDITIONAL_JUMP)  ; LAB_0044019c
    MOV ESI,0xffffffff                  ; 0044010d
    MOV CL,byte ptr [EBP]               ; 00440112
    SUB EAX,EDX                         ; 00440115
    MOV EBX,dword ptr [EBP + 0x4]       ; 00440117
    MOV dword ptr [ESP + 0x18],EAX      ; 0044011a
    SHL ESI,CL                          ; 0044011e
    MOV dword ptr [EBP],0x0             ; 00440120
    NOT ESI                             ; 00440127
    MOV dword ptr [EBP + 0x4],0x0       ; 00440129
    AND ESI,EBX                         ; 00440130
    MOV EBX,EDX                         ; 00440132
    CMP EAX,0x8                         ; 00440134
    JL 0x0044015f                       ; 00440137
        ;   XREF to: 0044015f (CONDITIONAL_JUMP)  ; LAB_0044015f
    PUSH EDI                            ; 00440139
        ;   Label: LAB_00440139
    MOV EAX,dword ptr [EDI]             ; 0044013a
    CALL dword ptr [EAX + 0x4]          ; 0044013c
    ADD ESP,0x4                         ; 0044013f
    TEST EAX,EAX                        ; 00440142
    JL 0x004401b2                       ; 00440144
        ;   XREF to: 004401b2 (CONDITIONAL_JUMP)  ; LAB_004401b2
    MOV CL,BL                           ; 00440146
    SHL EAX,CL                          ; 00440148
    OR ESI,EAX                          ; 0044014a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044014c
    SUB EAX,0x8                         ; 00440150
    ADD EBX,0x8                         ; 00440153
    MOV dword ptr [ESP + 0x18],EAX      ; 00440156
    CMP EAX,0x8                         ; 0044015a
    JGE 0x00440139                      ; 0044015d
        ;   XREF to: 00440139 (CONDITIONAL_JUMP)  ; LAB_00440139
    CMP dword ptr [ESP + 0x18],0x0      ; 0044015f
        ;   Label: LAB_0044015f
    JG 0x004401bd                       ; 00440164
        ;   XREF to: 004401bd (CONDITIONAL_JUMP)  ; LAB_004401bd
    MOV EAX,ESI                         ; 00440166
    POP EBP                             ; 00440168
    POP EDI                             ; 00440169
    POP ESI                             ; 0044016a
    POP EBX                             ; 0044016b
    RET                                 ; 0044016c
    MOV CL,byte ptr [ESP + 0x18]        ; 0044016d
        ;   Label: LAB_0044016d
    MOV EAX,0xffffffff                  ; 00440171
    SHL EAX,CL                          ; 00440176
    NOT EAX                             ; 00440178
    MOV ECX,dword ptr [EBP + 0x4]       ; 0044017a
    MOV EBX,dword ptr [EBP + 0x4]       ; 0044017d
    AND EAX,ECX                         ; 00440180
    MOV CL,byte ptr [ESP + 0x18]        ; 00440182
    SHR EBX,CL                          ; 00440186
    MOV ESI,dword ptr [EBP]             ; 00440188
    MOV dword ptr [EBP + 0x4],EBX       ; 0044018b
    MOV EBX,dword ptr [ESP + 0x18]      ; 0044018e
    SUB ESI,EBX                         ; 00440192
    MOV dword ptr [EBP],ESI             ; 00440194
    POP EBP                             ; 00440197
    POP EDI                             ; 00440198
    POP ESI                             ; 00440199
    POP EBX                             ; 0044019a
    RET                                 ; 0044019b
    MOV dword ptr [EBP],0x0             ; 0044019c
        ;   Label: LAB_0044019c
    MOV EAX,dword ptr [EBP + 0x4]       ; 004401a3
    MOV dword ptr [EBP + 0x4],0x0       ; 004401a6
    POP EBP                             ; 004401ad
    POP EDI                             ; 004401ae
    POP ESI                             ; 004401af
    POP EBX                             ; 004401b0
    RET                                 ; 004401b1
    MOV dword ptr [EBP + 0x4],ESI       ; 004401b2
        ;   Label: LAB_004401b2
    MOV dword ptr [EBP],EBX             ; 004401b5
    POP EBP                             ; 004401b8
    POP EDI                             ; 004401b9
    POP ESI                             ; 004401ba
    POP EBX                             ; 004401bb
    RET                                 ; 004401bc
    PUSH EDI                            ; 004401bd
        ;   Label: LAB_004401bd
    MOV EAX,dword ptr [EDI]             ; 004401be
    CALL dword ptr [EAX + 0x4]          ; 004401c0
    ADD ESP,0x4                         ; 004401c3
    TEST EAX,EAX                        ; 004401c6
    JL 0x004401b2                       ; 004401c8
        ;   XREF to: 004401b2 (CONDITIONAL_JUMP)  ; LAB_004401b2
    MOV CL,byte ptr [ESP + 0x18]        ; 004401ca
    MOV dword ptr [EBP + 0x4],EAX       ; 004401ce
    MOV EAX,0xffffffff                  ; 004401d1
    SHL EAX,CL                          ; 004401d6
    MOV EDI,dword ptr [EBP + 0x4]       ; 004401d8
    NOT EAX                             ; 004401db
    MOV CL,BL                           ; 004401dd
    AND EAX,EDI                         ; 004401df
    SHL EAX,CL                          ; 004401e1
    MOV CL,byte ptr [ESP + 0x18]        ; 004401e3
    OR ESI,EAX                          ; 004401e7
    MOV EAX,EDI                         ; 004401e9
    SHR EAX,CL                          ; 004401eb
    MOV EDX,dword ptr [ESP + 0x18]      ; 004401ed
    MOV dword ptr [EBP + 0x4],EAX       ; 004401f1
    MOV EAX,0x8                         ; 004401f4
    SUB EAX,EDX                         ; 004401f9
    MOV dword ptr [EBP],EAX             ; 004401fb
    MOV EAX,ESI                         ; 004401fe
    POP EBP                             ; 00440200
    POP EDI                             ; 00440201
    POP ESI                             ; 00440202
    POP EBX                             ; 00440203
    RET                                 ; 00440204

