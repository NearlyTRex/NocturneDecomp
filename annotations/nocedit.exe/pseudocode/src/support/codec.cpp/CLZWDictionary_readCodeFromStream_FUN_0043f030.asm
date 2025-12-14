; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030(CLZWDictionary * this_ptr, SBitBuffer * bit_buffer, FILE * input_file, int * bytes_remaining)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; SBitBuffer *     Stack[0x8]:4   bit_buffer
; FILE *           Stack[0xc]:4   input_file
; int *            Stack[0x10]:4   bytes_remaining
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   support_codec.cpp_CLZWDecompress_process_FUN_0043f510 at 0043f56e
;
; Called Functions:
;   support_codec.cpp_readBitsFromStream_FUN_0043e530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f030
        ;   Label: support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030
    PUSH ESI                            ; 0043f031
    PUSH EDI                            ; 0043f032
    PUSH EBP                            ; 0043f033
    SUB ESP,0x4                         ; 0043f034
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043f037
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043f03b
    MOV EBP,dword ptr [ESP + 0x24]      ; 0043f03f
    MOV EBX,0x1                         ; 0043f043
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043f048
    XOR ESI,ESI                         ; 0043f04b
    MOV EAX,dword ptr [EAX + 0xc]       ; 0043f04d
    DEC ECX                             ; 0043f050
    DEC EAX                             ; 0043f051
    SHL EBX,CL                          ; 0043f052
    MOV dword ptr [ESP],EAX             ; 0043f054
    TEST EBX,EBX                        ; 0043f057
    JZ 0x0043f079                       ; 0043f059
        ;   XREF to: 0043f079 (CONDITIONAL_JUMP)  ; LAB_0043f079
    TEST dword ptr [ESP],EBX            ; 0043f05b
        ;   Label: LAB_0043f05b
    JZ 0x0043f090                       ; 0043f05e
        ;   XREF to: 0043f090 (CONDITIONAL_JUMP)  ; LAB_0043f090
    PUSH EBP                            ; 0043f060
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043f061
    PUSH ECX                            ; 0043f065
    PUSH 0x1                            ; 0043f066
    PUSH EDI                            ; 0043f068
    CALL support_codec.cpp_readBitsFromStream_FUN_0043e530 ; 0043f069
        ;   XREF to: 0043e530 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_readBitsFromStream_FUN_0043e530(SBitBuffer * bit_buffer, int bit_count, FILE * file_stream, int * bytes_remaining)
    ADD ESP,0x10                        ; 0043f06e
    TEST EAX,EAX                        ; 0043f071
    JL 0x0043f087                       ; 0043f073
        ;   XREF to: 0043f087 (CONDITIONAL_JUMP)  ; LAB_0043f087
    JNZ 0x0043f08e                      ; 0043f075
        ;   XREF to: 0043f08e (CONDITIONAL_JUMP)  ; LAB_0043f08e
    SAR EBX,0x1                         ; 0043f077
        ;   Label: LAB_0043f077
    TEST EBX,EBX                        ; 0043f079
        ;   Label: LAB_0043f079
    JNZ 0x0043f0a4                      ; 0043f07b
        ;   XREF to: 0043f0a4 (CONDITIONAL_JUMP)  ; LAB_0043f0a4
    MOV EAX,ESI                         ; 0043f07d
    ADD ESP,0x4                         ; 0043f07f
        ;   Label: LAB_0043f07f
    POP EBP                             ; 0043f082
    POP EDI                             ; 0043f083
    POP ESI                             ; 0043f084
    POP EBX                             ; 0043f085
    RET                                 ; 0043f086
    MOV EAX,0xffffffff                  ; 0043f087
        ;   Label: LAB_0043f087
    JMP 0x0043f07f                      ; 0043f08c
        ;   XREF to: 0043f07f (UNCONDITIONAL_JUMP)  ; LAB_0043f07f
    OR ESI,EBX                          ; 0043f08e
        ;   Label: LAB_0043f08e
    SAR EBX,0x1                         ; 0043f090
        ;   Label: LAB_0043f090
    TEST EBX,EBX                        ; 0043f092
    JNZ 0x0043f05b                      ; 0043f094
        ;   XREF to: 0043f05b (CONDITIONAL_JUMP)  ; LAB_0043f05b
    TEST EBX,EBX                        ; 0043f096
    JNZ 0x0043f0a4                      ; 0043f098
        ;   XREF to: 0043f0a4 (CONDITIONAL_JUMP)  ; LAB_0043f0a4
    MOV EAX,ESI                         ; 0043f09a
    ADD ESP,0x4                         ; 0043f09c
    POP EBP                             ; 0043f09f
    POP EDI                             ; 0043f0a0
    POP ESI                             ; 0043f0a1
    POP EBX                             ; 0043f0a2
    RET                                 ; 0043f0a3
    PUSH EBP                            ; 0043f0a4
        ;   Label: LAB_0043f0a4
    MOV EAX,dword ptr [ESP + 0x24]      ; 0043f0a5
    PUSH EAX                            ; 0043f0a9
    PUSH 0x1                            ; 0043f0aa
    PUSH EDI                            ; 0043f0ac
    CALL support_codec.cpp_readBitsFromStream_FUN_0043e530 ; 0043f0ad
        ;   XREF to: 0043e530 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_readBitsFromStream_FUN_0043e530(SBitBuffer * bit_buffer, int bit_count, FILE * file_stream, int * bytes_remaining)
    ADD ESP,0x10                        ; 0043f0b2
    TEST EAX,EAX                        ; 0043f0b5
    JL 0x0043f087                       ; 0043f0b7
        ;   XREF to: 0043f087 (CONDITIONAL_JUMP)  ; LAB_0043f087
    JZ 0x0043f077                       ; 0043f0b9
        ;   XREF to: 0043f077 (CONDITIONAL_JUMP)  ; LAB_0043f077
    OR ESI,EBX                          ; 0043f0bb
    SAR EBX,0x1                         ; 0043f0bd
    TEST EBX,EBX                        ; 0043f0bf
    JNZ 0x0043f0a4                      ; 0043f0c1
        ;   XREF to: 0043f0a4 (CONDITIONAL_JUMP)  ; LAB_0043f0a4
    MOV EAX,ESI                         ; 0043f0c3
    ADD ESP,0x4                         ; 0043f0c5
    POP EBP                             ; 0043f0c8
    POP EDI                             ; 0043f0c9
    POP ESI                             ; 0043f0ca
    POP EBX                             ; 0043f0cb
    RET                                 ; 0043f0cc

