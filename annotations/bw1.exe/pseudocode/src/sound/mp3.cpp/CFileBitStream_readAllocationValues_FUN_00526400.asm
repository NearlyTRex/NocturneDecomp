; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_00526400(CFileBitStream *this_ptr,SMpegSubbandAllocation *output_allocation,SMpegFrame *frame )
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 at 0052b7bd
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526400
        ;   Label: sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_00526400
    PUSH ESI                            ; 00526401
    PUSH EDI                            ; 00526402
    PUSH EBP                            ; 00526403
    SUB ESP,0x18                        ; 00526404
    MOV EAX,dword ptr [ESP + 0x34]      ; 00526407
    MOV EBX,dword ptr [EAX + 0x18]      ; 0052640b
    MOV EDI,dword ptr [EAX + 0x10]      ; 0052640e
    MOV dword ptr [ESP + 0xc],EBX       ; 00526411
    MOV EBX,dword ptr [EAX + 0x14]      ; 00526415
    MOV EAX,dword ptr [EAX + 0x8]       ; 00526418
    MOV dword ptr [ESP + 0x4],EBX       ; 0052641b
    MOV dword ptr [ESP],EAX             ; 0052641f
    TEST EBX,EBX                        ; 00526422
    JLE 0x00526494                      ; 00526424
        ;   XREF to: 00526494 (CONDITIONAL_JUMP)  ; LAB_00526494
    MOV dword ptr [ESP + 0x10],EAX      ; 00526426
    XOR ECX,ECX                         ; 0052642a
    LEA EAX,[EBX*0x4 + 0x0]             ; 0052642c
    MOV dword ptr [ESP + 0x14],ECX      ; 00526433
    MOV dword ptr [ESP + 0x8],EAX       ; 00526437
    XOR ESI,ESI                         ; 0052643b
        ;   Label: LAB_0052643b
    TEST EDI,EDI                        ; 0052643d
    JLE 0x00526473                      ; 0052643f
        ;   XREF to: 00526473 (CONDITIONAL_JUMP)  ; LAB_00526473
    MOV EBX,dword ptr [ESP + 0x14]      ; 00526441
    MOV EAX,dword ptr [ESP + 0x30]      ; 00526445
    MOV EBP,dword ptr [ESP + 0x10]      ; 00526449
    ADD EBX,EAX                         ; 0052644d
    MOV EDX,dword ptr [EBP + 0x4]       ; 0052644f
        ;   Label: LAB_0052644f
    PUSH EDX                            ; 00526452
    MOV ECX,dword ptr [ESP + 0x30]      ; 00526453
    PUSH ECX                            ; 00526457
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0 ; 00526458
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0052645d
    ADD EBX,0x80                        ; 00526460
    AND EAX,0xff                        ; 00526466
    INC ESI                             ; 0052646b
    MOV dword ptr [EBX + -0x80],EAX     ; 0052646c
    CMP ESI,EDI                         ; 0052646f
    JL 0x0052644f                       ; 00526471
        ;   XREF to: 0052644f (CONDITIONAL_JUMP)  ; LAB_0052644f
    MOV ECX,dword ptr [ESP + 0x14]      ; 00526473
        ;   Label: LAB_00526473
    MOV EBX,dword ptr [ESP + 0x10]      ; 00526477
    MOV ESI,dword ptr [ESP + 0x8]       ; 0052647b
    ADD ECX,0x4                         ; 0052647f
    ADD EBX,0x100                       ; 00526482
    MOV dword ptr [ESP + 0x14],ECX      ; 00526488
    MOV dword ptr [ESP + 0x10],EBX      ; 0052648c
    CMP ECX,ESI                         ; 00526490
    JL 0x0052643b                       ; 00526492
        ;   XREF to: 0052643b (CONDITIONAL_JUMP)  ; LAB_0052643b
    MOV EDX,dword ptr [ESP + 0xc]       ; 00526494
        ;   Label: LAB_00526494
    MOV EBP,dword ptr [ESP + 0x4]       ; 00526498
    CMP EBP,EDX                         ; 0052649c
    JGE 0x005264f0                      ; 0052649e
        ;   XREF to: 005264f0 (CONDITIONAL_JUMP)  ; LAB_005264f0
    MOV ESI,dword ptr [ESP + 0x30]      ; 005264a0
    LEA EBX,[EBP*0x4 + 0x0]             ; 005264a4
    ADD EBX,ESI                         ; 005264ab
    MOV ESI,EBP                         ; 005264ad
    MOV EAX,dword ptr [ESP]             ; 005264af
    SHL ESI,0x8                         ; 005264b2
    ADD ESI,EAX                         ; 005264b5
    MOV EAX,dword ptr [ESI + 0x4]       ; 005264b7
        ;   Label: LAB_005264b7
    PUSH EAX                            ; 005264ba
    MOV EDX,dword ptr [ESP + 0x30]      ; 005264bb
    PUSH EDX                            ; 005264bf
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0 ; 005264c0
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005264c5
    MOV ECX,dword ptr [ESP + 0xc]       ; 005264c8
    ADD EBX,0x4                         ; 005264cc
    AND EAX,0xff                        ; 005264cf
    ADD ESI,0x100                       ; 005264d4
    MOV dword ptr [EBX + 0x7c],EAX      ; 005264da
    INC EBP                             ; 005264dd
    MOV dword ptr [EBX + -0x4],EAX      ; 005264de
    CMP EBP,ECX                         ; 005264e1
    JL 0x005264b7                       ; 005264e3
        ;   XREF to: 005264b7 (CONDITIONAL_JUMP)  ; LAB_005264b7
    LEA EAX,[EAX]                       ; 005264e5
    LEA EDX,[EDX]                       ; 005264eb
    MOV EBX,EBX                         ; 005264ee
    MOV EBX,dword ptr [ESP + 0xc]       ; 005264f0
        ;   Label: LAB_005264f0
    CMP EBX,0x20                        ; 005264f4
    JGE 0x00526528                      ; 005264f7
        ;   XREF to: 00526528 (CONDITIONAL_JUMP)  ; LAB_00526528
    LEA ESI,[EBX*0x4 + 0x0]             ; 005264f9
    XOR EAX,EAX                         ; 00526500
        ;   Label: LAB_00526500
    TEST EDI,EDI                        ; 00526502
    JLE 0x0052651d                      ; 00526504
        ;   XREF to: 0052651d (CONDITIONAL_JUMP)  ; LAB_0052651d
    MOV EBX,dword ptr [ESP + 0x30]      ; 00526506
    ADD EBX,ESI                         ; 0052650a
    INC EAX                             ; 0052650c
        ;   Label: LAB_0052650c
    MOV dword ptr [EBX],0x0             ; 0052650d
    ADD EBX,0x80                        ; 00526513
    CMP EAX,EDI                         ; 00526519
    JL 0x0052650c                       ; 0052651b
        ;   XREF to: 0052650c (CONDITIONAL_JUMP)  ; LAB_0052650c
    ADD ESI,0x4                         ; 0052651d
        ;   Label: LAB_0052651d
    CMP ESI,0x80                        ; 00526520
    JL 0x00526500                       ; 00526526
        ;   XREF to: 00526500 (CONDITIONAL_JUMP)  ; LAB_00526500
    ADD ESP,0x18                        ; 00526528
        ;   Label: LAB_00526528
    POP EBP                             ; 0052652b
    POP EDI                             ; 0052652c
    POP ESI                             ; 0052652d
    POP EBX                             ; 0052652e
    RET                                 ; 0052652f

