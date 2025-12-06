; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int support_codec.cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0(CLZWDictionary * this_ptr, SBitBuffer * bit_buffer, byte * output_stream, int * bytes_remaining, int code_value)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; SBitBuffer *     Stack[0x8]:4   bit_buffer
; byte *           Stack[0xc]:4   output_stream
; int *            Stack[0x10]:4   bytes_remaining
; int              Stack[0x14]:4   code_value
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0 at 0043f645
;
; Called Functions:
;   support_codec.cpp_extractBitsFromBuffer_FUN_0043e840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f0d0
        ;   Label: support_codec.cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0
    PUSH ESI                            ; 0043f0d1
    PUSH EDI                            ; 0043f0d2
    PUSH EBP                            ; 0043f0d3
    SUB ESP,0x4                         ; 0043f0d4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043f0d7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043f0db
    MOV EBP,dword ptr [ESP + 0x24]      ; 0043f0df
    MOV EBX,0x1                         ; 0043f0e3
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043f0e8
    XOR ESI,ESI                         ; 0043f0eb
    MOV EAX,dword ptr [EAX + 0xc]       ; 0043f0ed
    DEC ECX                             ; 0043f0f0
    DEC EAX                             ; 0043f0f1
    SHL EBX,CL                          ; 0043f0f2
    MOV dword ptr [ESP],EAX             ; 0043f0f4
    TEST EBX,EBX                        ; 0043f0f7
    JZ 0x0043f119                       ; 0043f0f9 | LAB_0043f119
        ;   XREF to: 0043f119 (CONDITIONAL_JUMP)
    TEST dword ptr [ESP],EBX            ; 0043f0fb
        ;   Label: LAB_0043f0fb
    JZ 0x0043f130                       ; 0043f0fe | LAB_0043f130
        ;   XREF to: 0043f130 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 0043f100
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043f101
    PUSH ECX                            ; 0043f105
    PUSH 0x1                            ; 0043f106
    PUSH EDI                            ; 0043f108
    CALL support_codec.cpp_extractBitsFromBuffer_FUN_0043e840 ; 0043f109 | int support_codec.cpp_extractBitsFromBuffer_FUN_0043e840(SBitBuffer * bit_state, int bit_count, byte * * output_pos, int * bytes_remaining)
        ;   XREF to: 0043e840 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0043f10e
    TEST EAX,EAX                        ; 0043f111
    JL 0x0043f127                       ; 0043f113 | LAB_0043f127
        ;   XREF to: 0043f127 (CONDITIONAL_JUMP)
    JNZ 0x0043f12e                      ; 0043f115 | LAB_0043f12e
        ;   XREF to: 0043f12e (CONDITIONAL_JUMP)
    SAR EBX,0x1                         ; 0043f117
        ;   Label: LAB_0043f117
    TEST EBX,EBX                        ; 0043f119
        ;   Label: LAB_0043f119
    JNZ 0x0043f144                      ; 0043f11b | LAB_0043f144
        ;   XREF to: 0043f144 (CONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 0043f11d
    ADD ESP,0x4                         ; 0043f11f
        ;   Label: LAB_0043f11f
    POP EBP                             ; 0043f122
    POP EDI                             ; 0043f123
    POP ESI                             ; 0043f124
    POP EBX                             ; 0043f125
    RET                                 ; 0043f126
    MOV EAX,0xffffffff                  ; 0043f127
        ;   Label: LAB_0043f127
    JMP 0x0043f11f                      ; 0043f12c | LAB_0043f11f
        ;   XREF to: 0043f11f (UNCONDITIONAL_JUMP)
    OR ESI,EBX                          ; 0043f12e
        ;   Label: LAB_0043f12e
    SAR EBX,0x1                         ; 0043f130
        ;   Label: LAB_0043f130
    TEST EBX,EBX                        ; 0043f132
    JNZ 0x0043f0fb                      ; 0043f134 | LAB_0043f0fb
        ;   XREF to: 0043f0fb (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 0043f136
    JNZ 0x0043f144                      ; 0043f138 | LAB_0043f144
        ;   XREF to: 0043f144 (CONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 0043f13a
    ADD ESP,0x4                         ; 0043f13c
    POP EBP                             ; 0043f13f
    POP EDI                             ; 0043f140
    POP ESI                             ; 0043f141
    POP EBX                             ; 0043f142
    RET                                 ; 0043f143
    PUSH EBP                            ; 0043f144
        ;   Label: LAB_0043f144
    MOV EAX,dword ptr [ESP + 0x24]      ; 0043f145
    PUSH EAX                            ; 0043f149
    PUSH 0x1                            ; 0043f14a
    PUSH EDI                            ; 0043f14c
    CALL support_codec.cpp_extractBitsFromBuffer_FUN_0043e840 ; 0043f14d | int support_codec.cpp_extractBitsFromBuffer_FUN_0043e840(SBitBuffer * bit_state, int bit_count, byte * * output_pos, int * bytes_remaining)
        ;   XREF to: 0043e840 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0043f152
    TEST EAX,EAX                        ; 0043f155
    JL 0x0043f127                       ; 0043f157 | LAB_0043f127
        ;   XREF to: 0043f127 (CONDITIONAL_JUMP)
    JZ 0x0043f117                       ; 0043f159 | LAB_0043f117
        ;   XREF to: 0043f117 (CONDITIONAL_JUMP)
    OR ESI,EBX                          ; 0043f15b
    SAR EBX,0x1                         ; 0043f15d
    TEST EBX,EBX                        ; 0043f15f
    JNZ 0x0043f144                      ; 0043f161 | LAB_0043f144
        ;   XREF to: 0043f144 (CONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 0043f163
    ADD ESP,0x4                         ; 0043f165
    POP EBP                             ; 0043f168
    POP EDI                             ; 0043f169
    POP ESI                             ; 0043f16a
    POP EBX                             ; 0043f16b
    RET                                 ; 0043f16c

