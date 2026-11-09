; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_00505230(CFileBitStream *this_ptr,SMpegSubbandAllocation *output_allocation,SMpegFrame *frame )
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; SMpegSubbandAllocation * Stack[0x8]:4   output_allocation
; SMpegFrame *     Stack[0xc]:4   frame
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050a5ed
;
; Called Functions:
;   sound_mp3.cpp_FUN_00504b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505230
        ;   Label: sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_00505230
    PUSH ESI                            ; 00505231
    PUSH EDI                            ; 00505232
    PUSH EBP                            ; 00505233
    SUB ESP,0x18                        ; 00505234
    MOV EAX,dword ptr [ESP + 0x34]      ; 00505237
    MOV EBX,dword ptr [EAX + 0x18]      ; 0050523b
    MOV EDI,dword ptr [EAX + 0x10]      ; 0050523e
    MOV dword ptr [ESP + 0xc],EBX       ; 00505241
    MOV EBX,dword ptr [EAX + 0x14]      ; 00505245
    MOV EAX,dword ptr [EAX + 0x8]       ; 00505248
    MOV dword ptr [ESP + 0x4],EBX       ; 0050524b
    MOV dword ptr [ESP],EAX             ; 0050524f
    TEST EBX,EBX                        ; 00505252
    JLE 0x005052c4                      ; 00505254
        ;   XREF to: 005052c4 (CONDITIONAL_JUMP)  ; LAB_005052c4
    MOV dword ptr [ESP + 0x10],EAX      ; 00505256
    XOR ECX,ECX                         ; 0050525a
    LEA EAX,[EBX*0x4 + 0x0]             ; 0050525c
    MOV dword ptr [ESP + 0x14],ECX      ; 00505263
    MOV dword ptr [ESP + 0x8],EAX       ; 00505267
    XOR ESI,ESI                         ; 0050526b
        ;   Label: LAB_0050526b
    TEST EDI,EDI                        ; 0050526d
    JLE 0x005052a3                      ; 0050526f
        ;   XREF to: 005052a3 (CONDITIONAL_JUMP)  ; LAB_005052a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00505271
    MOV EAX,dword ptr [ESP + 0x30]      ; 00505275
    MOV EBP,dword ptr [ESP + 0x10]      ; 00505279
    ADD EBX,EAX                         ; 0050527d
    MOV EDX,dword ptr [EBP + 0x4]       ; 0050527f
        ;   Label: LAB_0050527f
    PUSH EDX                            ; 00505282
    MOV ECX,dword ptr [ESP + 0x30]      ; 00505283
    PUSH ECX                            ; 00505287
    CALL sound_mp3.cpp_FUN_00504b00     ; 00505288
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0050528d
    ADD EBX,0x80                        ; 00505290
    AND EAX,0xff                        ; 00505296
    INC ESI                             ; 0050529b
    MOV dword ptr [EBX + -0x80],EAX     ; 0050529c
    CMP ESI,EDI                         ; 0050529f
    JL 0x0050527f                       ; 005052a1
        ;   XREF to: 0050527f (CONDITIONAL_JUMP)  ; LAB_0050527f
    MOV ECX,dword ptr [ESP + 0x14]      ; 005052a3
        ;   Label: LAB_005052a3
    MOV EBX,dword ptr [ESP + 0x10]      ; 005052a7
    MOV ESI,dword ptr [ESP + 0x8]       ; 005052ab
    ADD ECX,0x4                         ; 005052af
    ADD EBX,0x100                       ; 005052b2
    MOV dword ptr [ESP + 0x14],ECX      ; 005052b8
    MOV dword ptr [ESP + 0x10],EBX      ; 005052bc
    CMP ECX,ESI                         ; 005052c0
    JL 0x0050526b                       ; 005052c2
        ;   XREF to: 0050526b (CONDITIONAL_JUMP)  ; LAB_0050526b
    MOV EDX,dword ptr [ESP + 0xc]       ; 005052c4
        ;   Label: LAB_005052c4
    MOV EBP,dword ptr [ESP + 0x4]       ; 005052c8
    CMP EBP,EDX                         ; 005052cc
    JGE 0x00505320                      ; 005052ce
        ;   XREF to: 00505320 (CONDITIONAL_JUMP)  ; LAB_00505320
    MOV ESI,dword ptr [ESP + 0x30]      ; 005052d0
    LEA EBX,[EBP*0x4 + 0x0]             ; 005052d4
    ADD EBX,ESI                         ; 005052db
    MOV ESI,EBP                         ; 005052dd
    MOV EAX,dword ptr [ESP]             ; 005052df
    SHL ESI,0x8                         ; 005052e2
    ADD ESI,EAX                         ; 005052e5
    MOV EAX,dword ptr [ESI + 0x4]       ; 005052e7
        ;   Label: LAB_005052e7
    PUSH EAX                            ; 005052ea
    MOV EDX,dword ptr [ESP + 0x30]      ; 005052eb
    PUSH EDX                            ; 005052ef
    CALL sound_mp3.cpp_FUN_00504b00     ; 005052f0
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005052f5
    MOV ECX,dword ptr [ESP + 0xc]       ; 005052f8
    ADD EBX,0x4                         ; 005052fc
    AND EAX,0xff                        ; 005052ff
    ADD ESI,0x100                       ; 00505304
    MOV dword ptr [EBX + 0x7c],EAX      ; 0050530a
    INC EBP                             ; 0050530d
    MOV dword ptr [EBX + -0x4],EAX      ; 0050530e
    CMP EBP,ECX                         ; 00505311
    JL 0x005052e7                       ; 00505313
        ;   XREF to: 005052e7 (CONDITIONAL_JUMP)  ; LAB_005052e7
    LEA EAX,[EAX]                       ; 00505315
    LEA EDX,[EDX]                       ; 0050531b
    MOV EBX,EBX                         ; 0050531e
    MOV EBX,dword ptr [ESP + 0xc]       ; 00505320
        ;   Label: LAB_00505320
    CMP EBX,0x20                        ; 00505324
    JGE 0x00505358                      ; 00505327
        ;   XREF to: 00505358 (CONDITIONAL_JUMP)  ; LAB_00505358
    LEA ESI,[EBX*0x4 + 0x0]             ; 00505329
    XOR EAX,EAX                         ; 00505330
        ;   Label: LAB_00505330
    TEST EDI,EDI                        ; 00505332
    JLE 0x0050534d                      ; 00505334
        ;   XREF to: 0050534d (CONDITIONAL_JUMP)  ; LAB_0050534d
    MOV EBX,dword ptr [ESP + 0x30]      ; 00505336
    ADD EBX,ESI                         ; 0050533a
    INC EAX                             ; 0050533c
        ;   Label: LAB_0050533c
    MOV dword ptr [EBX],0x0             ; 0050533d
    ADD EBX,0x80                        ; 00505343
    CMP EAX,EDI                         ; 00505349
    JL 0x0050533c                       ; 0050534b
        ;   XREF to: 0050533c (CONDITIONAL_JUMP)  ; LAB_0050533c
    ADD ESI,0x4                         ; 0050534d
        ;   Label: LAB_0050534d
    CMP ESI,0x80                        ; 00505350
    JL 0x00505330                       ; 00505356
        ;   XREF to: 00505330 (CONDITIONAL_JUMP)  ; LAB_00505330
    ADD ESP,0x18                        ; 00505358
        ;   Label: LAB_00505358
    POP EBP                             ; 0050535b
    POP EDI                             ; 0050535c
    POP ESI                             ; 0050535d
    POP EBX                             ; 0050535e
    RET                                 ; 0050535f

