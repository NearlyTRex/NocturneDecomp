; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_004ffb20(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,SMpegFrame *frame)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   scalefactor_dest
; SMpegLayer3SideInfo * Stack[0xc]:4   side_info
; int              Stack[0x10]:4   channel
; int              Stack[0x14]:4   granule
; SMpegFrame *     Stack[0x18]:4   frame
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 00503917
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_004ff790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ffb20
        ;   Label: sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_004ffb20
    PUSH ESI                            ; 004ffb21
    PUSH EDI                            ; 004ffb22
    PUSH EBP                            ; 004ffb23
    SUB ESP,0x10                        ; 004ffb24
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004ffb27
    MOV ECX,dword ptr [ESP + 0x30]      ; 004ffb2b
    MOV EDX,dword ptr [ESP + 0x34]      ; 004ffb2f
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ffb33
    ADD EAX,EDX                         ; 004ffb3a
    SHL EAX,0x5                         ; 004ffb3c
    LEA EDX,[ESI + 0x8]                 ; 004ffb3f
    LEA EDI,[EDX + EAX*0x1]             ; 004ffb42
    MOV EDX,dword ptr [ESP + 0x38]      ; 004ffb45
    PUSH EDX                            ; 004ffb49
    MOV EBP,dword ptr [ESP + 0x38]      ; 004ffb4a
    LEA EAX,[ECX*0x8 + 0x0]             ; 004ffb4e
    PUSH EBP                            ; 004ffb55
    ADD EDI,0x10                        ; 004ffb56
    ADD EAX,ECX                         ; 004ffb59
    PUSH ECX                            ; 004ffb5b
    SHL EAX,0x3                         ; 004ffb5c
    PUSH ESI                            ; 004ffb5f
    ADD EDI,EAX                         ; 004ffb60
    MOV EAX,dword ptr [ESP + 0x38]      ; 004ffb62
    PUSH EAX                            ; 004ffb66
    MOV EDX,dword ptr [ESP + 0x38]      ; 004ffb67
    PUSH EDX                            ; 004ffb6b
    XOR EBX,EBX                         ; 004ffb6c
    CALL sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_004ff790 ; 004ffb6e
        ;   XREF to: 004ff790 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_004ff790(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3SideInfo * side_info, int channel, ...)
    MOV ECX,dword ptr [EDI + 0x10]      ; 004ffb73
    ADD ESP,0x18                        ; 004ffb76
    TEST ECX,ECX                        ; 004ffb79
    JNZ 0x004ffbc6                      ; 004ffb7b
        ;   XREF to: 004ffbc6 (CONDITIONAL_JUMP)  ; LAB_004ffbc6
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ffb7d
        ;   Label: LAB_004ffb7d
    MOV EBP,dword ptr [ESP + 0x24]      ; 004ffb81
    SHL EAX,0x3                         ; 004ffb85
    MOV ECX,dword ptr [ESP + 0x28]      ; 004ffb88
    MOV EDI,EAX                         ; 004ffb8c
    LEA EDX,[EBX*0x4 + 0x0]             ; 004ffb8e
    SHL EDI,0x5                         ; 004ffb95
    ADD EDX,EBP                         ; 004ffb98
    SUB EDI,EAX                         ; 004ffb9a
    XOR EAX,EAX                         ; 004ffb9c
    ADD EDI,ECX                         ; 004ffb9e
    INC EBX                             ; 004ffba0
        ;   Label: LAB_004ffba0
    MOV ECX,dword ptr [EDX + 0x7358]    ; 004ffba1
    LEA ESI,[EDI + EAX*0x1]             ; 004ffba7
    ADD EDX,0x4                         ; 004ffbaa
    ADD EAX,0x4                         ; 004ffbad
    MOV dword ptr [ESI],ECX             ; 004ffbb0
    CMP EAX,0x54                        ; 004ffbb2
    JNZ 0x004ffba0                      ; 004ffbb5
        ;   XREF to: 004ffba0 (CONDITIONAL_JUMP)  ; LAB_004ffba0
    MOV dword ptr [EDI + 0x58],0x0      ; 004ffbb7
    ADD ESP,0x10                        ; 004ffbbe
    POP EBP                             ; 004ffbc1
    POP EDI                             ; 004ffbc2
    POP ESI                             ; 004ffbc3
    POP EBX                             ; 004ffbc4
    RET                                 ; 004ffbc5
    CMP dword ptr [EDI + 0x14],0x2      ; 004ffbc6
        ;   Label: LAB_004ffbc6
    JNZ 0x004ffb7d                      ; 004ffbca
        ;   XREF to: 004ffb7d (CONDITIONAL_JUMP)  ; LAB_004ffb7d
    LEA EAX,[EBP*0x8 + 0x0]             ; 004ffbcc
    MOV EDX,EAX                         ; 004ffbd3
    SHL EAX,0x5                         ; 004ffbd5
    MOV ESI,dword ptr [ESP + 0x28]      ; 004ffbd8
    SUB EAX,EDX                         ; 004ffbdc
    MOV EBP,dword ptr [EDI + 0x18]      ; 004ffbde
    ADD ESI,EAX                         ; 004ffbe1
    TEST EBP,EBP                        ; 004ffbe3
    JZ 0x004ffc9c                       ; 004ffbe5
        ;   XREF to: 004ffc9c (CONDITIONAL_JUMP)  ; LAB_004ffc9c
    MOV EDX,dword ptr [ESP + 0x24]      ; 004ffbeb
    MOV EAX,ESI                         ; 004ffbef
    ADD ESI,0x20                        ; 004ffbf1
    ADD EAX,0x4                         ; 004ffbf4
        ;   Label: LAB_004ffbf4
    MOV ECX,dword ptr [EDX + 0x7358]    ; 004ffbf7
    ADD EDX,0x4                         ; 004ffbfd
    INC EBX                             ; 004ffc00
    MOV dword ptr [EAX + -0x4],ECX      ; 004ffc01
    CMP EAX,ESI                         ; 004ffc04
    JNZ 0x004ffbf4                      ; 004ffc06
        ;   XREF to: 004ffbf4 (CONDITIONAL_JUMP)  ; LAB_004ffbf4
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ffc08
    SHL EAX,0x3                         ; 004ffc0c
    MOV EDX,EAX                         ; 004ffc0f
    SHL EAX,0x5                         ; 004ffc11
    SUB EAX,EDX                         ; 004ffc14
    MOV EDX,dword ptr [ESP + 0x28]      ; 004ffc16
    MOV EBP,0xa8                        ; 004ffc1a
    ADD EDX,EAX                         ; 004ffc1f
    MOV EDI,0x3                         ; 004ffc21
    MOV dword ptr [ESP + 0xc],EDX       ; 004ffc26
    MOV dword ptr [ESP],EDX             ; 004ffc2a
    MOV ESI,dword ptr [ESP + 0xc]       ; 004ffc2d
        ;   Label: LAB_004ffc2d
    MOV ECX,dword ptr [ESP + 0x24]      ; 004ffc31
    LEA EAX,[EDI*0x4 + 0x0]             ; 004ffc35
    LEA EDX,[EBX*0x4 + 0x0]             ; 004ffc3c
    ADD EAX,ESI                         ; 004ffc43
    MOV ESI,dword ptr [ESP]             ; 004ffc45
    ADD EDX,ECX                         ; 004ffc48
    ADD ESI,EBP                         ; 004ffc4a
    ADD EAX,0x34                        ; 004ffc4c
        ;   Label: LAB_004ffc4c
    MOV ECX,dword ptr [EDX + 0x7358]    ; 004ffc4f
    ADD EDX,0x4                         ; 004ffc55
    INC EBX                             ; 004ffc58
    MOV dword ptr [EAX + 0x28],ECX      ; 004ffc59
    CMP EAX,ESI                         ; 004ffc5c
    JNZ 0x004ffc4c                      ; 004ffc5e
        ;   XREF to: 004ffc4c (CONDITIONAL_JUMP)  ; LAB_004ffc4c
    INC EDI                             ; 004ffc60
    ADD EBP,0x4                         ; 004ffc61
    CMP EDI,0xc                         ; 004ffc64
    JL 0x004ffc2d                       ; 004ffc67
        ;   XREF to: 004ffc2d (CONDITIONAL_JUMP)  ; LAB_004ffc2d
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ffc69
    SHL EAX,0x3                         ; 004ffc6d
    MOV EDX,EAX                         ; 004ffc70
    SHL EAX,0x5                         ; 004ffc72
    SUB EAX,EDX                         ; 004ffc75
    MOV EDX,dword ptr [ESP + 0x28]      ; 004ffc77
    ADD EDX,EAX                         ; 004ffc7b
    LEA EAX,[EDX + 0x30]                ; 004ffc7d
    ADD EDX,0xcc                        ; 004ffc80
    ADD EAX,0x34                        ; 004ffc86
        ;   Label: LAB_004ffc86
    MOV dword ptr [EAX + 0x28],0x0      ; 004ffc89
    CMP EAX,EDX                         ; 004ffc90
    JNZ 0x004ffc86                      ; 004ffc92
        ;   XREF to: 004ffc86 (CONDITIONAL_JUMP)  ; LAB_004ffc86
    ADD ESP,0x10                        ; 004ffc94
    POP EBP                             ; 004ffc97
    POP EDI                             ; 004ffc98
    POP ESI                             ; 004ffc99
    POP EBX                             ; 004ffc9a
    RET                                 ; 004ffc9b
    MOV EBP,0x9c                        ; 004ffc9c
        ;   Label: LAB_004ffc9c
    MOV dword ptr [ESP + 0x8],ESI       ; 004ffca1
    MOV dword ptr [ESP + 0x4],ESI       ; 004ffca5
    XOR EDI,EDI                         ; 004ffca9
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ffcab
        ;   Label: LAB_004ffcab
    MOV ECX,dword ptr [ESP + 0x24]      ; 004ffcaf
    LEA EAX,[EDI*0x4 + 0x0]             ; 004ffcb3
    MOV ESI,dword ptr [ESP + 0x4]       ; 004ffcba
    ADD EAX,EDX                         ; 004ffcbe
    LEA EDX,[EBX*0x4 + 0x0]             ; 004ffcc0
    ADD ESI,EBP                         ; 004ffcc7
    ADD EDX,ECX                         ; 004ffcc9
    ADD EAX,0x34                        ; 004ffccb
        ;   Label: LAB_004ffccb
    MOV ECX,dword ptr [EDX + 0x7358]    ; 004ffcce
    ADD EDX,0x4                         ; 004ffcd4
    INC EBX                             ; 004ffcd7
    MOV dword ptr [EAX + 0x28],ECX      ; 004ffcd8
    CMP EAX,ESI                         ; 004ffcdb
    JNZ 0x004ffccb                      ; 004ffcdd
        ;   XREF to: 004ffccb (CONDITIONAL_JUMP)  ; LAB_004ffccb
    INC EDI                             ; 004ffcdf
    ADD EBP,0x4                         ; 004ffce0
    CMP EDI,0xc                         ; 004ffce3
    JL 0x004ffcab                       ; 004ffce6
        ;   XREF to: 004ffcab (CONDITIONAL_JUMP)  ; LAB_004ffcab
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ffce8
    SHL EAX,0x3                         ; 004ffcec
    MOV EDX,EAX                         ; 004ffcef
    SHL EAX,0x5                         ; 004ffcf1
    SUB EAX,EDX                         ; 004ffcf4
    MOV EDX,dword ptr [ESP + 0x28]      ; 004ffcf6
    ADD EDX,EAX                         ; 004ffcfa
    LEA EAX,[EDX + 0x30]                ; 004ffcfc
    ADD EDX,0xcc                        ; 004ffcff
    ADD EAX,0x34                        ; 004ffd05
        ;   Label: LAB_004ffd05
    MOV dword ptr [EAX + 0x28],0x0      ; 004ffd08
    CMP EAX,EDX                         ; 004ffd0f
    JNZ 0x004ffd05                      ; 004ffd11
        ;   XREF to: 004ffd05 (CONDITIONAL_JUMP)  ; LAB_004ffd05
    ADD ESP,0x10                        ; 004ffd13
    POP EBP                             ; 004ffd16
    POP EDI                             ; 004ffd17
    POP ESI                             ; 004ffd18
    POP EBX                             ; 004ffd19
    RET                                 ; 004ffd1a

