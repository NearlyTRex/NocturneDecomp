; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_00504e80(CMP3Decoder *this_ptr,int num_bits)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   num_bits
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00507240 at 0050787c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504e80
        ;   Label: sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_00504e80
    PUSH EBP                            ; 00504e81
    MOV EAX,dword ptr [ESP + 0xc]       ; 00504e82
    MOV EDX,dword ptr [ESP + 0x10]      ; 00504e86
    MOV EBX,dword ptr [EAX + 0x531c]    ; 00504e8a
    MOV ECX,dword ptr [EAX + 0x1314]    ; 00504e90
    ADD EBX,EDX                         ; 00504e96
    SUB ECX,EDX                         ; 00504e98
    MOV dword ptr [EAX + 0x531c],EBX    ; 00504e9a
    MOV dword ptr [EAX + 0x1314],ECX    ; 00504ea0
    CMP EBX,0x8                         ; 00504ea6
    JC 0x00504ed4                       ; 00504ea9
        ;   XREF to: 00504ed4 (CONDITIONAL_JUMP)  ; LAB_00504ed4
    PUSH EDI                            ; 00504eab
    MOV EDI,dword ptr [EAX + 0x531c]    ; 00504eac
        ;   Label: LAB_00504eac
    SUB EDI,0x8                         ; 00504eb2
    MOV EBP,dword ptr [EAX + 0x1318]    ; 00504eb5
    MOV dword ptr [EAX + 0x531c],EDI    ; 00504ebb
    DEC EBP                             ; 00504ec1
    MOV EDX,dword ptr [EAX + 0x531c]    ; 00504ec2
    MOV dword ptr [EAX + 0x1318],EBP    ; 00504ec8
    CMP EDX,0x8                         ; 00504ece
    JNC 0x00504eac                      ; 00504ed1
        ;   XREF to: 00504eac (CONDITIONAL_JUMP)  ; LAB_00504eac
    POP EDI                             ; 00504ed3
    POP EBP                             ; 00504ed4
        ;   Label: LAB_00504ed4
    POP EBX                             ; 00504ed5
    RET                                 ; 00504ed6

