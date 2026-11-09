; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_004fd960(CMP3Decoder *this_ptr,int num_bits)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   num_bits
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_004ffd20 at 0050035c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd960
        ;   Label: sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_004fd960
    PUSH EBP                            ; 004fd961
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fd962
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fd966
    MOV EBX,dword ptr [EAX + 0x531c]    ; 004fd96a
    MOV ECX,dword ptr [EAX + 0x1314]    ; 004fd970
    ADD EBX,EDX                         ; 004fd976
    SUB ECX,EDX                         ; 004fd978
    MOV dword ptr [EAX + 0x531c],EBX    ; 004fd97a
    MOV dword ptr [EAX + 0x1314],ECX    ; 004fd980
    CMP EBX,0x8                         ; 004fd986
    JC 0x004fd9b4                       ; 004fd989
        ;   XREF to: 004fd9b4 (CONDITIONAL_JUMP)  ; LAB_004fd9b4
    PUSH EDI                            ; 004fd98b
    MOV EDI,dword ptr [EAX + 0x531c]    ; 004fd98c
        ;   Label: LAB_004fd98c
    SUB EDI,0x8                         ; 004fd992
    MOV EBP,dword ptr [EAX + 0x1318]    ; 004fd995
    MOV dword ptr [EAX + 0x531c],EDI    ; 004fd99b
    DEC EBP                             ; 004fd9a1
    MOV EDX,dword ptr [EAX + 0x531c]    ; 004fd9a2
    MOV dword ptr [EAX + 0x1318],EBP    ; 004fd9a8
    CMP EDX,0x8                         ; 004fd9ae
    JNC 0x004fd98c                      ; 004fd9b1
        ;   XREF to: 004fd98c (CONDITIONAL_JUMP)  ; LAB_004fd98c
    POP EDI                             ; 004fd9b3
    POP EBP                             ; 004fd9b4
        ;   Label: LAB_004fd9b4
    POP EBX                             ; 004fd9b5
    RET                                 ; 004fd9b6

