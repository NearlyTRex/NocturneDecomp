; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_codec_cpp_extractBitsFromBuffer_FUN_00438dc0(byte *param_1,int param_2,int *param_3,int *param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   support_codec.cpp_CLZWDictionary_readCodeFromBuffer_FUN_00439630 at 00439669
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438dc0
        ;   Label: support_codec.cpp_extractBitsFromBuffer_FUN_00438dc0
    PUSH ESI                            ; 00438dc1
    PUSH EDI                            ; 00438dc2
    PUSH EBP                            ; 00438dc3
    SUB ESP,0x4                         ; 00438dc4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00438dc7
    MOV EDI,dword ptr [ESP + 0x20]      ; 00438dcb
    MOV EBX,dword ptr [ESP + 0x24]      ; 00438dcf
    MOV EAX,dword ptr [ESP + 0x18]      ; 00438dd3
    MOV ECX,dword ptr [EAX]             ; 00438dd7
    CMP EDX,ECX                         ; 00438dd9
    JL 0x00438eb0                       ; 00438ddb
        ;   XREF to: 00438eb0 (CONDITIONAL_JUMP)  ; LAB_00438eb0
    JZ 0x00438ee6                       ; 00438de1
        ;   XREF to: 00438ee6 (CONDITIONAL_JUMP)  ; LAB_00438ee6
    MOV CL,byte ptr [EAX]               ; 00438de7
    MOV EAX,0xffffffff                  ; 00438de9
    MOV ESI,dword ptr [ESP + 0x18]      ; 00438dee
    SHL EAX,CL                          ; 00438df2
    MOV ESI,dword ptr [ESI + 0x4]       ; 00438df4
    NOT EAX                             ; 00438df7
    AND ESI,EAX                         ; 00438df9
    MOV EAX,dword ptr [ESP + 0x18]      ; 00438dfb
    MOV ECX,dword ptr [ESP + 0x18]      ; 00438dff
    MOV EAX,dword ptr [EAX]             ; 00438e03
    MOV dword ptr [ECX],0x0             ; 00438e05
    SUB EDX,EAX                         ; 00438e0b
    MOV dword ptr [ECX + 0x4],0x0       ; 00438e0d
    CMP EDX,0x8                         ; 00438e14
    JL 0x00438e4d                       ; 00438e17
        ;   XREF to: 00438e4d (CONDITIONAL_JUMP)  ; LAB_00438e4d
    CMP dword ptr [EBX],0x1             ; 00438e19
        ;   Label: LAB_00438e19
    JL 0x00438f00                       ; 00438e1c
        ;   XREF to: 00438f00 (CONDITIONAL_JUMP)  ; LAB_00438f00
    MOV ECX,dword ptr [EDI]             ; 00438e22
    LEA EBP,[ECX + 0x1]                 ; 00438e24
    MOV dword ptr [EDI],EBP             ; 00438e27
    MOV CL,byte ptr [ECX]               ; 00438e29
    AND ECX,0xff                        ; 00438e2b
    MOV dword ptr [ESP],ECX             ; 00438e31
    MOV EBP,dword ptr [ESP]             ; 00438e34
    MOV CL,AL                           ; 00438e37
    SHL EBP,CL                          ; 00438e39
    OR ESI,EBP                          ; 00438e3b
    MOV EBP,dword ptr [EBX]             ; 00438e3d
    SUB EDX,0x8                         ; 00438e3f
    DEC EBP                             ; 00438e42
    ADD EAX,0x8                         ; 00438e43
    MOV dword ptr [EBX],EBP             ; 00438e46
    CMP EDX,0x8                         ; 00438e48
    JGE 0x00438e19                      ; 00438e4b
        ;   XREF to: 00438e19 (CONDITIONAL_JUMP)  ; LAB_00438e19
    TEST EDX,EDX                        ; 00438e4d
        ;   Label: LAB_00438e4d
    JLE 0x00438ea4                      ; 00438e4f
        ;   XREF to: 00438ea4 (CONDITIONAL_JUMP)  ; LAB_00438ea4
    CMP dword ptr [EBX],0x1             ; 00438e51
    JL 0x00438f00                       ; 00438e54
        ;   XREF to: 00438f00 (CONDITIONAL_JUMP)  ; LAB_00438f00
    MOV ECX,dword ptr [EDI]             ; 00438e5a
    LEA EBP,[ECX + 0x1]                 ; 00438e5c
    MOV dword ptr [EDI],EBP             ; 00438e5f
    MOV CL,byte ptr [ECX]               ; 00438e61
    MOV EDI,dword ptr [ESP + 0x18]      ; 00438e63
    AND ECX,0xff                        ; 00438e67
    MOV dword ptr [EDI + 0x4],ECX       ; 00438e6d
    MOV EDI,0xffffffff                  ; 00438e70
    MOV CL,DL                           ; 00438e75
    SHL EDI,CL                          ; 00438e77
    MOV ECX,EDI                         ; 00438e79
    DEC dword ptr [EBX]                 ; 00438e7b
    MOV EBX,dword ptr [ESP + 0x18]      ; 00438e7d
    NOT ECX                             ; 00438e81
    MOV EBX,dword ptr [EBX + 0x4]       ; 00438e83
    AND EBX,ECX                         ; 00438e86
    MOV CL,AL                           ; 00438e88
    MOV EAX,dword ptr [ESP + 0x18]      ; 00438e8a
    SHL EBX,CL                          ; 00438e8e
    MOV CL,DL                           ; 00438e90
    SHR dword ptr [EAX + 0x4],CL        ; 00438e92
    MOV EAX,0x8                         ; 00438e95
    SUB EAX,EDX                         ; 00438e9a
    MOV EDX,dword ptr [ESP + 0x18]      ; 00438e9c
    OR ESI,EBX                          ; 00438ea0
    MOV dword ptr [EDX],EAX             ; 00438ea2
    MOV ECX,ESI                         ; 00438ea4
        ;   Label: LAB_00438ea4
    MOV EAX,ECX                         ; 00438ea6
    ADD ESP,0x4                         ; 00438ea8
    POP EBP                             ; 00438eab
    POP EDI                             ; 00438eac
    POP ESI                             ; 00438ead
    POP EBX                             ; 00438eae
    RET                                 ; 00438eaf
    MOV EAX,0xffffffff                  ; 00438eb0
        ;   Label: LAB_00438eb0
    MOV CL,DL                           ; 00438eb5
    MOV EBX,dword ptr [ESP + 0x18]      ; 00438eb7
    SHL EAX,CL                          ; 00438ebb
    MOV ECX,dword ptr [ESP + 0x18]      ; 00438ebd
    MOV EBP,dword ptr [EBX + 0x4]       ; 00438ec1
    MOV EDI,dword ptr [ECX + 0x4]       ; 00438ec4
    MOV CL,DL                           ; 00438ec7
    SHR EBP,CL                          ; 00438ec9
    MOV dword ptr [EBX + 0x4],EBP       ; 00438ecb
    MOV ECX,EBX                         ; 00438ece
    MOV EBX,dword ptr [EBX]             ; 00438ed0
    NOT EAX                             ; 00438ed2
    SUB EBX,EDX                         ; 00438ed4
    AND EAX,EDI                         ; 00438ed6
    MOV dword ptr [ECX],EBX             ; 00438ed8
    MOV ECX,EAX                         ; 00438eda
    MOV EAX,ECX                         ; 00438edc
    ADD ESP,0x4                         ; 00438ede
    POP EBP                             ; 00438ee1
    POP EDI                             ; 00438ee2
    POP ESI                             ; 00438ee3
    POP EBX                             ; 00438ee4
    RET                                 ; 00438ee5
    MOV dword ptr [EAX],0x0             ; 00438ee6
        ;   Label: LAB_00438ee6
    MOV ECX,dword ptr [EAX + 0x4]       ; 00438eec
    MOV dword ptr [EAX + 0x4],0x0       ; 00438eef
    MOV EAX,ECX                         ; 00438ef6
    ADD ESP,0x4                         ; 00438ef8
    POP EBP                             ; 00438efb
    POP EDI                             ; 00438efc
    POP ESI                             ; 00438efd
    POP EBX                             ; 00438efe
    RET                                 ; 00438eff
    MOV EDX,dword ptr [ESP + 0x18]      ; 00438f00
        ;   Label: LAB_00438f00
    MOV dword ptr [EDX + 0x4],ESI       ; 00438f04
    MOV ECX,0xffffffff                  ; 00438f07
    MOV dword ptr [EDX],EAX             ; 00438f0c
    MOV EAX,ECX                         ; 00438f0e
    ADD ESP,0x4                         ; 00438f10
    POP EBP                             ; 00438f13
    POP EDI                             ; 00438f14
    POP ESI                             ; 00438f15
    POP EBX                             ; 00438f16
    RET                                 ; 00438f17

