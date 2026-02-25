; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CLZWDictionary_writeCodeBits_FUN_0043f170(CLZWDictionary *this_ptr,int code_value,SBitBuffer *bit_buffer,_ostream *ostream)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   code_value
; SBitBuffer *     Stack[0xc]:4   bit_buffer
; _ostream *       Stack[0x10]:4   ostream
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   support_codec.cpp_CLZWCompress_finalize_FUN_0043f440 at 0043f474
;   support_codec.cpp_CLZWCompress_process_FUN_0043f360 at 0043f3ed
;
; Called Functions:
;   support_codec.cpp_writeBitsToStream_FUN_0043e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f170
        ;   Label: support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170
    PUSH ESI                            ; 0043f171
    PUSH EDI                            ; 0043f172
    PUSH EBP                            ; 0043f173
    MOV EBP,ESP                         ; 0043f174
    SUB ESP,0x4                         ; 0043f176
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043f179
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0043f17c
    MOV EDI,dword ptr [EBP + 0x20]      ; 0043f17f
    MOV EBX,0x1                         ; 0043f182
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043f187
    MOV EAX,dword ptr [EAX + 0xc]       ; 0043f18a
    DEC ECX                             ; 0043f18d
    DEC EAX                             ; 0043f18e
    SHL EBX,CL                          ; 0043f18f
    MOV dword ptr [EBP + -0x4],EAX      ; 0043f191
    TEST EBX,EBX                        ; 0043f194
    JZ 0x0043f1a2                       ; 0043f196
        ;   XREF to: 0043f1a2 (CONDITIONAL_JUMP)  ; LAB_0043f1a2
    TEST dword ptr [EBP + -0x4],EBX     ; 0043f198
        ;   Label: LAB_0043f198
    JZ 0x0043f1bb                       ; 0043f19b
        ;   XREF to: 0043f1bb (CONDITIONAL_JUMP)  ; LAB_0043f1bb
    TEST dword ptr [EBP + 0x18],EBX     ; 0043f19d
    JNZ 0x0043f1ad                      ; 0043f1a0
        ;   XREF to: 0043f1ad (CONDITIONAL_JUMP)  ; LAB_0043f1ad
    TEST EBX,EBX                        ; 0043f1a2
        ;   Label: LAB_0043f1a2
    JNZ 0x0043f1cc                      ; 0043f1a4
        ;   XREF to: 0043f1cc (CONDITIONAL_JUMP)  ; LAB_0043f1cc
    MOV ESP,EBP                         ; 0043f1a6
    POP EBP                             ; 0043f1a8
    POP EDI                             ; 0043f1a9
    POP ESI                             ; 0043f1aa
    POP EBX                             ; 0043f1ab
    RET                                 ; 0043f1ac
    PUSH EDI                            ; 0043f1ad
        ;   Label: LAB_0043f1ad
    PUSH 0x1                            ; 0043f1ae
    PUSH 0x1                            ; 0043f1b0
    PUSH ESI                            ; 0043f1b2
    CALL support_codec.cpp_writeBitsToStream_FUN_0043e6c0 ; 0043f1b3
        ;   XREF to: 0043e6c0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_writeBitsToStream_FUN_0043e6c0(SBitBuffer * bit_buffer, int bit_count, int bit_value, _ostream * ostream)
    ADD ESP,0x10                        ; 0043f1b8
    SAR EBX,0x1                         ; 0043f1bb
        ;   Label: LAB_0043f1bb
    TEST EBX,EBX                        ; 0043f1bd
    JNZ 0x0043f198                      ; 0043f1bf
        ;   XREF to: 0043f198 (CONDITIONAL_JUMP)  ; LAB_0043f198
    TEST EBX,EBX                        ; 0043f1c1
    JNZ 0x0043f1cc                      ; 0043f1c3
        ;   XREF to: 0043f1cc (CONDITIONAL_JUMP)  ; LAB_0043f1cc
    MOV ESP,EBP                         ; 0043f1c5
    POP EBP                             ; 0043f1c7
    POP EDI                             ; 0043f1c8
    POP ESI                             ; 0043f1c9
    POP EBX                             ; 0043f1ca
    RET                                 ; 0043f1cb
    MOV EDX,dword ptr [EBP + 0x18]      ; 0043f1cc
        ;   Label: LAB_0043f1cc
    PUSH EDI                            ; 0043f1cf
    TEST EBX,EDX                        ; 0043f1d0
    SETNZ AL                            ; 0043f1d2
    AND EAX,0xff                        ; 0043f1d5
    PUSH EAX                            ; 0043f1da
    PUSH 0x1                            ; 0043f1db
    PUSH ESI                            ; 0043f1dd
    SAR EBX,0x1                         ; 0043f1de
    CALL support_codec.cpp_writeBitsToStream_FUN_0043e6c0 ; 0043f1e0
        ;   XREF to: 0043e6c0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_writeBitsToStream_FUN_0043e6c0(SBitBuffer * bit_buffer, int bit_count, int bit_value, _ostream * ostream)
    ADD ESP,0x10                        ; 0043f1e5
    TEST EBX,EBX                        ; 0043f1e8
    JNZ 0x0043f1cc                      ; 0043f1ea
        ;   XREF to: 0043f1cc (CONDITIONAL_JUMP)  ; LAB_0043f1cc
    MOV ESP,EBP                         ; 0043f1ec
    POP EBP                             ; 0043f1ee
    POP EDI                             ; 0043f1ef
    POP ESI                             ; 0043f1f0
    POP EBX                             ; 0043f1f1
    RET                                 ; 0043f1f2

