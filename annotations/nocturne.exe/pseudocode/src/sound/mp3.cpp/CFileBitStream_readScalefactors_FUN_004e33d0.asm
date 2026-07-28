; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_004e33d0(CFileBitStream *this_ptr,SMpegSubbandAllocation *allocation_indices,SMpegSubbandScalefactors *scalefactors,SMpegFrame *frame)
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e8903
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e33d0
        ;   Label: sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_004e33d0
    PUSH ESI                            ; 004e33d1
    PUSH EDI                            ; 004e33d2
    PUSH EBP                            ; 004e33d3
    SUB ESP,0x4                         ; 004e33d4
    XOR EDX,EDX                         ; 004e33d7
    MOV EBP,dword ptr [ESP + 0x24]      ; 004e33d9
    MOV dword ptr [ESP],EDX             ; 004e33dd
    MOV EBP,dword ptr [EBP + 0x10]      ; 004e33e0
    XOR ESI,ESI                         ; 004e33e3
        ;   Label: LAB_004e33e3
    TEST EBP,EBP                        ; 004e33e5
    JLE 0x004e3417                      ; 004e33e7
        ;   XREF to: 004e3417 (CONDITIONAL_JUMP)  ; LAB_004e3417
    MOV EBX,dword ptr [ESP]             ; 004e33e9
    MOV EDI,dword ptr [ESP + 0x20]      ; 004e33ec
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e33f0
    ADD EBX,EDI                         ; 004e33f4
    MOV EDI,dword ptr [ESP]             ; 004e33f6
    ADD EDI,EAX                         ; 004e33f9
    CMP dword ptr [EDI],0x0             ; 004e33fb
        ;   Label: LAB_004e33fb
    JNZ 0x004e3430                      ; 004e33fe
        ;   XREF to: 004e3430 (CONDITIONAL_JUMP)  ; LAB_004e3430
    MOV dword ptr [EBX],0x3f            ; 004e3400
    ADD EBX,0x180                       ; 004e3406
        ;   Label: LAB_004e3406
    INC ESI                             ; 004e340c
    ADD EDI,0x80                        ; 004e340d
    CMP ESI,EBP                         ; 004e3413
    JL 0x004e33fb                       ; 004e3415
        ;   XREF to: 004e33fb (CONDITIONAL_JUMP)  ; LAB_004e33fb
    MOV ECX,dword ptr [ESP]             ; 004e3417
        ;   Label: LAB_004e3417
    ADD ECX,0x4                         ; 004e341a
    MOV dword ptr [ESP],ECX             ; 004e341d
    CMP ECX,0x80                        ; 004e3420
    JNZ 0x004e33e3                      ; 004e3426
        ;   XREF to: 004e33e3 (CONDITIONAL_JUMP)  ; LAB_004e33e3
    ADD ESP,0x4                         ; 004e3428
    POP EBP                             ; 004e342b
    POP EDI                             ; 004e342c
    POP ESI                             ; 004e342d
    POP EBX                             ; 004e342e
    RET                                 ; 004e342f
    PUSH 0x6                            ; 004e3430
        ;   Label: LAB_004e3430
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004e3432
    PUSH ECX                            ; 004e3436
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e3437
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 004e343c
    MOV dword ptr [EBX],EAX             ; 004e343f
    JMP 0x004e3406                      ; 004e3441
        ;   XREF to: 004e3406 (UNCONDITIONAL_JUMP)  ; LAB_004e3406

