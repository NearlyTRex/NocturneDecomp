; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_00505410(CFileBitStream *this_ptr,SMpegSubbandAllocation *allocation_indices,SMpegSubbandScalefactors *scalefactors,SMpegFrame *frame)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; SMpegSubbandAllocation * Stack[0x8]:4   allocation_indices
; SMpegSubbandScalefactors * Stack[0xc]:4   scalefactors
; SMpegFrame *     Stack[0x10]:4   frame
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050a33e
;
; Called Functions:
;   sound_mp3.cpp_FUN_00504b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505410
        ;   Label: sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_00505410
    PUSH ESI                            ; 00505411
    PUSH EDI                            ; 00505412
    PUSH EBP                            ; 00505413
    SUB ESP,0x4                         ; 00505414
    XOR EDX,EDX                         ; 00505417
    MOV EBP,dword ptr [ESP + 0x24]      ; 00505419
    MOV dword ptr [ESP],EDX             ; 0050541d
    MOV EBP,dword ptr [EBP + 0x10]      ; 00505420
    XOR ESI,ESI                         ; 00505423
        ;   Label: LAB_00505423
    TEST EBP,EBP                        ; 00505425
    JLE 0x00505457                      ; 00505427
        ;   XREF to: 00505457 (CONDITIONAL_JUMP)  ; LAB_00505457
    MOV EBX,dword ptr [ESP]             ; 00505429
    MOV EDI,dword ptr [ESP + 0x20]      ; 0050542c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00505430
    ADD EBX,EDI                         ; 00505434
    MOV EDI,dword ptr [ESP]             ; 00505436
    ADD EDI,EAX                         ; 00505439
    CMP dword ptr [EDI],0x0             ; 0050543b
        ;   Label: LAB_0050543b
    JNZ 0x00505470                      ; 0050543e
        ;   XREF to: 00505470 (CONDITIONAL_JUMP)  ; LAB_00505470
    MOV dword ptr [EBX],0x3f            ; 00505440
    ADD EBX,0x180                       ; 00505446
        ;   Label: LAB_00505446
    INC ESI                             ; 0050544c
    ADD EDI,0x80                        ; 0050544d
    CMP ESI,EBP                         ; 00505453
    JL 0x0050543b                       ; 00505455
        ;   XREF to: 0050543b (CONDITIONAL_JUMP)  ; LAB_0050543b
    MOV ECX,dword ptr [ESP]             ; 00505457
        ;   Label: LAB_00505457
    ADD ECX,0x4                         ; 0050545a
    MOV dword ptr [ESP],ECX             ; 0050545d
    CMP ECX,0x80                        ; 00505460
    JNZ 0x00505423                      ; 00505466
        ;   XREF to: 00505423 (CONDITIONAL_JUMP)  ; LAB_00505423
    ADD ESP,0x4                         ; 00505468
    POP EBP                             ; 0050546b
    POP EDI                             ; 0050546c
    POP ESI                             ; 0050546d
    POP EBX                             ; 0050546e
    RET                                 ; 0050546f
    PUSH 0x6                            ; 00505470
        ;   Label: LAB_00505470
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00505472
    PUSH ECX                            ; 00505476
    CALL sound_mp3.cpp_FUN_00504b00     ; 00505477
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0050547c
    MOV dword ptr [EBX],EAX             ; 0050547f
    JMP 0x00505446                      ; 00505481
        ;   XREF to: 00505446 (UNCONDITIONAL_JUMP)  ; LAB_00505446

