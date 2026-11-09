; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_calculateMainDataSize_FUN_0052a880(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 at 0052ba1b
;
; Referenced Globals:
;   undefined4 DAT_006202e8
;   undefined4 DAT_006203a0
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a880
        ;   Label: sound_mp3.cpp_calculateMainDataSize_FUN_0052a880
    PUSH ESI                            ; 0052a881
    SUB ESP,0x8                         ; 0052a882
    MOV EDX,dword ptr [ESP + 0x14]      ; 0052a885
    MOV EDX,dword ptr [EDX]             ; 0052a889
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052a88b
    SUB EAX,EDX                         ; 0052a892
    SHL EAX,0x2                         ; 0052a894
    MOV EDX,EAX                         ; 0052a897
    SHL EAX,0x4                         ; 0052a899
    SUB EAX,EDX                         ; 0052a89c
    MOV EDX,EAX                         ; 0052a89e
    MOV EAX,dword ptr [ESP + 0x14]      ; 0052a8a0
    MOV EAX,dword ptr [EAX + 0xc]       ; 0052a8a4
    MOV EDX,dword ptr [EDX + EAX*0x4 + 0x6203a0] ; 0052a8a7 | DAT_006203a0
    LEA EAX,[EDX*0x8 + 0x0]             ; 0052a8ae
    ADD EAX,EDX                         ; 0052a8b5
    SHL EAX,0x4                         ; 0052a8b7
    MOV dword ptr [ESP + 0x4],EAX       ; 0052a8ba
    MOV EAX,dword ptr [ESP + 0x14]      ; 0052a8be
    MOV EDX,dword ptr [EAX]             ; 0052a8c2
    SHL EDX,0x5                         ; 0052a8c4
    MOV EAX,dword ptr [EAX + 0x10]      ; 0052a8c7
    FILD dword ptr [ESP + 0x4]          ; 0052a8ca
    FDIV double ptr [EDX + EAX*0x8 + 0x6202e8] ; 0052a8ce | DAT_006202e8
    MOV EAX,dword ptr [ESP + 0x14]      ; 0052a8d5
    CALL crt_math.c_round_FUN_005c03a0  ; 0052a8d9
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV EDX,dword ptr [EAX]             ; 0052a8de
    FISTP dword ptr [ESP]               ; 0052a8e0
    TEST EDX,EDX                        ; 0052a8e3
    JZ 0x0052a922                       ; 0052a8e5
        ;   XREF to: 0052a922 (CONDITIONAL_JUMP)  ; LAB_0052a922
    CMP dword ptr [ESP + 0x24],0x1      ; 0052a8e7
    JNZ 0x0052a91c                      ; 0052a8ec
        ;   XREF to: 0052a91c (CONDITIONAL_JUMP)  ; LAB_0052a91c
    SUB dword ptr [ESP],0x11            ; 0052a8ee
    MOV EAX,dword ptr [ESP + 0x14]      ; 0052a8f2
        ;   Label: LAB_0052a8f2
    CMP dword ptr [EAX + 0x14],0x0      ; 0052a8f6
    JZ 0x0052a8ff                       ; 0052a8fa
        ;   XREF to: 0052a8ff (CONDITIONAL_JUMP)  ; LAB_0052a8ff
    INC dword ptr [ESP]                 ; 0052a8fc
    MOV EBX,dword ptr [ESP]             ; 0052a8ff
        ;   Label: LAB_0052a8ff
    MOV EAX,dword ptr [ESP + 0x14]      ; 0052a902
    SUB EBX,0x4                         ; 0052a906
    MOV ESI,dword ptr [EAX + 0x8]       ; 0052a909
    MOV dword ptr [ESP],EBX             ; 0052a90c
    TEST ESI,ESI                        ; 0052a90f
    JNZ 0x0052a94a                      ; 0052a911
        ;   XREF to: 0052a94a (CONDITIONAL_JUMP)  ; LAB_0052a94a
    MOV EAX,dword ptr [ESP]             ; 0052a913
    ADD ESP,0x8                         ; 0052a916
    POP ESI                             ; 0052a919
    POP EBX                             ; 0052a91a
    RET                                 ; 0052a91b
    SUB dword ptr [ESP],0x20            ; 0052a91c
        ;   Label: LAB_0052a91c
    JMP 0x0052a8f2                      ; 0052a920
        ;   XREF to: 0052a8f2 (UNCONDITIONAL_JUMP)  ; LAB_0052a8f2
    MOV EAX,dword ptr [ESP]             ; 0052a922
        ;   Label: LAB_0052a922
    MOV EDX,EAX                         ; 0052a925
    SAR EDX,0x1f                        ; 0052a927
    SUB EAX,EDX                         ; 0052a92a
    SAR EAX,0x1                         ; 0052a92c
    MOV ECX,dword ptr [ESP + 0x24]      ; 0052a92e
    MOV dword ptr [ESP],EAX             ; 0052a932
    CMP ECX,0x1                         ; 0052a935
    JNZ 0x0052a942                      ; 0052a938
        ;   XREF to: 0052a942 (CONDITIONAL_JUMP)  ; LAB_0052a942
    LEA ESI,[EAX + -0x9]                ; 0052a93a
    MOV dword ptr [ESP],ESI             ; 0052a93d
    JMP 0x0052a8f2                      ; 0052a940
        ;   XREF to: 0052a8f2 (UNCONDITIONAL_JUMP)  ; LAB_0052a8f2
    LEA EBX,[EAX + -0x11]               ; 0052a942
        ;   Label: LAB_0052a942
    MOV dword ptr [ESP],EBX             ; 0052a945
    JMP 0x0052a8f2                      ; 0052a948
        ;   XREF to: 0052a8f2 (UNCONDITIONAL_JUMP)  ; LAB_0052a8f2
    PUSH EDI                            ; 0052a94a
        ;   Label: LAB_0052a94a
    LEA EDI,[EBX + -0x2]                ; 0052a94b
    MOV dword ptr [ESP + 0x4],EDI       ; 0052a94e
    POP EDI                             ; 0052a952
    MOV EAX,dword ptr [ESP]             ; 0052a953
    ADD ESP,0x8                         ; 0052a956
    POP ESI                             ; 0052a959
    POP EBX                             ; 0052a95a
    RET                                 ; 0052a95b

