; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_0052f2c0(CMP3Decoder * this_ptr, int num_bits)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   num_bits
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680 at 00531cbc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052f2c0
        ;   Label: sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_0052f2c0
    PUSH EBP                            ; 0052f2c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052f2c2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0052f2c6
    MOV EBX,dword ptr [EAX + 0x531c]    ; 0052f2ca
    MOV ECX,dword ptr [EAX + 0x1314]    ; 0052f2d0
    ADD EBX,EDX                         ; 0052f2d6
    SUB ECX,EDX                         ; 0052f2d8
    MOV dword ptr [EAX + 0x531c],EBX    ; 0052f2da
    MOV dword ptr [EAX + 0x1314],ECX    ; 0052f2e0
    CMP EBX,0x8                         ; 0052f2e6
    JC 0x0052f314                       ; 0052f2e9
        ;   XREF to: 0052f314 (CONDITIONAL_JUMP)  ; LAB_0052f314
    PUSH EDI                            ; 0052f2eb
    MOV EDI,dword ptr [EAX + 0x531c]    ; 0052f2ec
        ;   Label: LAB_0052f2ec
    SUB EDI,0x8                         ; 0052f2f2
    MOV EBP,dword ptr [EAX + 0x1318]    ; 0052f2f5
    MOV dword ptr [EAX + 0x531c],EDI    ; 0052f2fb
    DEC EBP                             ; 0052f301
    MOV EDX,dword ptr [EAX + 0x531c]    ; 0052f302
    MOV dword ptr [EAX + 0x1318],EBP    ; 0052f308
    CMP EDX,0x8                         ; 0052f30e
    JNC 0x0052f2ec                      ; 0052f311
        ;   XREF to: 0052f2ec (CONDITIONAL_JUMP)  ; LAB_0052f2ec
    POP EDI                             ; 0052f313
    POP EBP                             ; 0052f314
        ;   Label: LAB_0052f314
    POP EBX                             ; 0052f315
    RET                                 ; 0052f316

