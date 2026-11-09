; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_calculateMainDataSize_FUN_00502190(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 0050332b
;
; Referenced Globals:
;   undefined4 DAT_006011b8
;   undefined4 DAT_00601270
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502190
        ;   Label: sound_mp3.cpp_calculateMainDataSize_FUN_00502190
    PUSH ESI                            ; 00502191
    SUB ESP,0x8                         ; 00502192
    MOV EDX,dword ptr [ESP + 0x14]      ; 00502195
    MOV EDX,dword ptr [EDX]             ; 00502199
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050219b
    SUB EAX,EDX                         ; 005021a2
    SHL EAX,0x2                         ; 005021a4
    MOV EDX,EAX                         ; 005021a7
    SHL EAX,0x4                         ; 005021a9
    SUB EAX,EDX                         ; 005021ac
    MOV EDX,EAX                         ; 005021ae
    MOV EAX,dword ptr [ESP + 0x14]      ; 005021b0
    MOV EAX,dword ptr [EAX + 0xc]       ; 005021b4
    MOV EDX,dword ptr [EDX + EAX*0x4 + 0x601270] ; 005021b7 | DAT_00601270
    LEA EAX,[EDX*0x8 + 0x0]             ; 005021be
    ADD EAX,EDX                         ; 005021c5
    SHL EAX,0x4                         ; 005021c7
    MOV dword ptr [ESP + 0x4],EAX       ; 005021ca
    MOV EAX,dword ptr [ESP + 0x14]      ; 005021ce
    MOV EDX,dword ptr [EAX]             ; 005021d2
    SHL EDX,0x5                         ; 005021d4
    MOV EAX,dword ptr [EAX + 0x10]      ; 005021d7
    FILD dword ptr [ESP + 0x4]          ; 005021da
    FDIV double ptr [EDX + EAX*0x8 + 0x6011b8] ; 005021de | DAT_006011b8
    MOV EAX,dword ptr [ESP + 0x14]      ; 005021e5
    CALL crt_math.c_round_FUN_005a3120  ; 005021e9
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    MOV EDX,dword ptr [EAX]             ; 005021ee
    FISTP dword ptr [ESP]               ; 005021f0
    TEST EDX,EDX                        ; 005021f3
    JZ 0x00502232                       ; 005021f5
        ;   XREF to: 00502232 (CONDITIONAL_JUMP)  ; LAB_00502232
    CMP dword ptr [ESP + 0x24],0x1      ; 005021f7
    JNZ 0x0050222c                      ; 005021fc
        ;   XREF to: 0050222c (CONDITIONAL_JUMP)  ; LAB_0050222c
    SUB dword ptr [ESP],0x11            ; 005021fe
    MOV EAX,dword ptr [ESP + 0x14]      ; 00502202
        ;   Label: LAB_00502202
    CMP dword ptr [EAX + 0x14],0x0      ; 00502206
    JZ 0x0050220f                       ; 0050220a
        ;   XREF to: 0050220f (CONDITIONAL_JUMP)  ; LAB_0050220f
    INC dword ptr [ESP]                 ; 0050220c
    MOV EBX,dword ptr [ESP]             ; 0050220f
        ;   Label: LAB_0050220f
    MOV EAX,dword ptr [ESP + 0x14]      ; 00502212
    SUB EBX,0x4                         ; 00502216
    MOV ESI,dword ptr [EAX + 0x8]       ; 00502219
    MOV dword ptr [ESP],EBX             ; 0050221c
    TEST ESI,ESI                        ; 0050221f
    JNZ 0x0050225a                      ; 00502221
        ;   XREF to: 0050225a (CONDITIONAL_JUMP)  ; LAB_0050225a
    MOV EAX,dword ptr [ESP]             ; 00502223
    ADD ESP,0x8                         ; 00502226
    POP ESI                             ; 00502229
    POP EBX                             ; 0050222a
    RET                                 ; 0050222b
    SUB dword ptr [ESP],0x20            ; 0050222c
        ;   Label: LAB_0050222c
    JMP 0x00502202                      ; 00502230
        ;   XREF to: 00502202 (UNCONDITIONAL_JUMP)  ; LAB_00502202
    MOV EAX,dword ptr [ESP]             ; 00502232
        ;   Label: LAB_00502232
    MOV EDX,EAX                         ; 00502235
    SAR EDX,0x1f                        ; 00502237
    SUB EAX,EDX                         ; 0050223a
    SAR EAX,0x1                         ; 0050223c
    MOV ECX,dword ptr [ESP + 0x24]      ; 0050223e
    MOV dword ptr [ESP],EAX             ; 00502242
    CMP ECX,0x1                         ; 00502245
    JNZ 0x00502252                      ; 00502248
        ;   XREF to: 00502252 (CONDITIONAL_JUMP)  ; LAB_00502252
    LEA ESI,[EAX + -0x9]                ; 0050224a
    MOV dword ptr [ESP],ESI             ; 0050224d
    JMP 0x00502202                      ; 00502250
        ;   XREF to: 00502202 (UNCONDITIONAL_JUMP)  ; LAB_00502202
    LEA EBX,[EAX + -0x11]               ; 00502252
        ;   Label: LAB_00502252
    MOV dword ptr [ESP],EBX             ; 00502255
    JMP 0x00502202                      ; 00502258
        ;   XREF to: 00502202 (UNCONDITIONAL_JUMP)  ; LAB_00502202
    PUSH EDI                            ; 0050225a
        ;   Label: LAB_0050225a
    LEA EDI,[EBX + -0x2]                ; 0050225b
    MOV dword ptr [ESP + 0x4],EDI       ; 0050225e
    POP EDI                             ; 00502262
    MOV EAX,dword ptr [ESP]             ; 00502263
    ADD ESP,0x8                         ; 00502266
    POP ESI                             ; 00502269
    POP EBX                             ; 0050226a
    RET                                 ; 0050226b

