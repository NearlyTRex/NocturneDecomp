; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_00505360(CFileBitStream *this_ptr,uint *output_array,SMpegFrame *frame)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; uint *           Stack[0x8]:4   output_array
; SMpegFrame *     Stack[0xc]:4   frame
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050a31d
;
; Called Functions:
;   sound_mp3.cpp_FUN_00504b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505360
        ;   Label: sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_00505360
    PUSH ESI                            ; 00505361
    PUSH EDI                            ; 00505362
    PUSH EBP                            ; 00505363
    SUB ESP,0xc                         ; 00505364
    MOV EBP,dword ptr [ESP + 0x20]      ; 00505367
    MOV EAX,dword ptr [ESP + 0x28]      ; 0050536b
    MOV EDI,dword ptr [EAX + 0x10]      ; 0050536f
    MOV EAX,dword ptr [EAX + 0x14]      ; 00505372
    MOV dword ptr [ESP],EAX             ; 00505375
    TEST EAX,EAX                        ; 00505378
    JLE 0x005053c6                      ; 0050537a
        ;   XREF to: 005053c6 (CONDITIONAL_JUMP)  ; LAB_005053c6
    XOR EAX,EAX                         ; 0050537c
    MOV dword ptr [ESP + 0x8],EAX       ; 0050537e
    MOV EAX,dword ptr [ESP]             ; 00505382
    SHL EAX,0x2                         ; 00505385
    MOV dword ptr [ESP + 0x4],EAX       ; 00505388
    XOR EBX,EBX                         ; 0050538c
        ;   Label: LAB_0050538c
    TEST EDI,EDI                        ; 0050538e
    JLE 0x005053b3                      ; 00505390
        ;   XREF to: 005053b3 (CONDITIONAL_JUMP)  ; LAB_005053b3
    MOV ESI,dword ptr [ESP + 0x8]       ; 00505392
    ADD ESI,dword ptr [ESP + 0x24]      ; 00505396
    PUSH 0x4                            ; 0050539a
        ;   Label: LAB_0050539a
    PUSH EBP                            ; 0050539c
    ADD ESI,0x80                        ; 0050539d
    INC EBX                             ; 005053a3
    CALL sound_mp3.cpp_FUN_00504b00     ; 005053a4
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005053a9
    MOV dword ptr [ESI + -0x80],EAX     ; 005053ac
    CMP EBX,EDI                         ; 005053af
    JL 0x0050539a                       ; 005053b1
        ;   XREF to: 0050539a (CONDITIONAL_JUMP)  ; LAB_0050539a
    MOV ECX,dword ptr [ESP + 0x8]       ; 005053b3
        ;   Label: LAB_005053b3
    ADD ECX,0x4                         ; 005053b7
    MOV EBX,dword ptr [ESP + 0x4]       ; 005053ba
    MOV dword ptr [ESP + 0x8],ECX       ; 005053be
    CMP ECX,EBX                         ; 005053c2
    JL 0x0050538c                       ; 005053c4
        ;   XREF to: 0050538c (CONDITIONAL_JUMP)  ; LAB_0050538c
    MOV ESI,dword ptr [ESP]             ; 005053c6
        ;   Label: LAB_005053c6
    CMP ESI,0x20                        ; 005053c9
    JGE 0x00505403                      ; 005053cc
        ;   XREF to: 00505403 (CONDITIONAL_JUMP)  ; LAB_00505403
    SHL ESI,0x2                         ; 005053ce
    PUSH 0x4                            ; 005053d1
        ;   Label: LAB_005053d1
    PUSH EBP                            ; 005053d3
    CALL sound_mp3.cpp_FUN_00504b00     ; 005053d4
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005053d9
    MOV EBX,EAX                         ; 005053dc
    XOR EAX,EAX                         ; 005053de
    TEST EDI,EDI                        ; 005053e0
    JLE 0x005053f8                      ; 005053e2
        ;   XREF to: 005053f8 (CONDITIONAL_JUMP)  ; LAB_005053f8
    MOV EDX,dword ptr [ESP + 0x24]      ; 005053e4
    ADD EDX,ESI                         ; 005053e8
    ADD EDX,0x80                        ; 005053ea
        ;   Label: LAB_005053ea
    INC EAX                             ; 005053f0
    MOV dword ptr [EDX + -0x80],EBX     ; 005053f1
    CMP EAX,EDI                         ; 005053f4
    JL 0x005053ea                       ; 005053f6
        ;   XREF to: 005053ea (CONDITIONAL_JUMP)  ; LAB_005053ea
    ADD ESI,0x4                         ; 005053f8
        ;   Label: LAB_005053f8
    CMP ESI,0x80                        ; 005053fb
    JL 0x005053d1                       ; 00505401
        ;   XREF to: 005053d1 (CONDITIONAL_JUMP)  ; LAB_005053d1
    ADD ESP,0xc                         ; 00505403
        ;   Label: LAB_00505403
    POP EBP                             ; 00505406
    POP EDI                             ; 00505407
    POP ESI                             ; 00505408
    POP EBX                             ; 00505409
    RET                                 ; 0050540a

