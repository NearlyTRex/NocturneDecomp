; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_FUN_004346d0(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,_istream *istream,int *bytes_remaining)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; SBitBuffer *     Stack[0x8]:4   bit_buffer
; _istream *       Stack[0xc]:4   istream
; int *            Stack[0x10]:4   bytes_remaining
;
; XREF[1]:
;   support_codec.cpp_FUN_00434a70 at 00434adf
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004346d0
        ;   Label: support_codec.cpp_FUN_004346d0
    PUSH ESI                            ; 004346d1
    PUSH EDI                            ; 004346d2
    PUSH EBP                            ; 004346d3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004346d4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004346d8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004346dc
    MOV EBP,dword ptr [ESP + 0x20]      ; 004346e0
    MOV EAX,EDI                         ; 004346e4
    MOV EDX,dword ptr [EBX + 0x10]      ; 004346e6
    SHL EAX,0x4                         ; 004346e9
    ADD EAX,EDX                         ; 004346ec
    MOV EDX,dword ptr [EAX + 0x4]       ; 004346ee
    TEST EDX,EDX                        ; 004346f1
    JL 0x0043470e                       ; 004346f3
        ;   XREF to: 0043470e (CONDITIONAL_JUMP)  ; LAB_0043470e
    CMP EDI,ECX                         ; 004346f5
    JNZ 0x00434736                      ; 004346f7
        ;   XREF to: 00434736 (CONDITIONAL_JUMP)  ; LAB_00434736
    MOV EAX,ECX                         ; 004346f9
    SHL EAX,0x4                         ; 004346fb
        ;   Label: LAB_004346fb
    MOV EDX,dword ptr [EBX + 0x10]      ; 004346fe
    ADD EAX,EDX                         ; 00434701
    MOV ESI,dword ptr [EAX + 0x4]       ; 00434703
    TEST ESI,ESI                        ; 00434706
    JL 0x0043470e                       ; 00434708
        ;   XREF to: 0043470e (CONDITIONAL_JUMP)  ; LAB_0043470e
    MOV EAX,ESI                         ; 0043470a
    JMP 0x004346fb                      ; 0043470c
        ;   XREF to: 004346fb (UNCONDITIONAL_JUMP)  ; LAB_004346fb
    MOV ESI,dword ptr [EAX]             ; 0043470e
        ;   Label: LAB_0043470e
    MOV EDX,EDI                         ; 00434710
        ;   Label: LAB_00434710
    MOV EAX,dword ptr [EBX + 0x10]      ; 00434712
    SHL EDX,0x4                         ; 00434715
    MOV ECX,dword ptr [EBP]             ; 00434718
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0043471b
    AND EAX,0xff                        ; 0043471e
    PUSH EAX                            ; 00434723
    PUSH EBP                            ; 00434724
    CALL dword ptr [ECX + 0x4]          ; 00434725
    ADD ESP,0x8                         ; 00434728
    TEST EAX,EAX                        ; 0043472b
    JL 0x0043474d                       ; 0043472d
        ;   XREF to: 0043474d (CONDITIONAL_JUMP)  ; LAB_0043474d
    MOV EAX,ESI                         ; 0043472f
    POP EBP                             ; 00434731
    POP EDI                             ; 00434732
    POP ESI                             ; 00434733
    POP EBX                             ; 00434734
    RET                                 ; 00434735
    PUSH EBP                            ; 00434736
        ;   Label: LAB_00434736
    PUSH ECX                            ; 00434737
    PUSH EDX                            ; 00434738
    PUSH EBX                            ; 00434739
    CALL support_codec.cpp_FUN_004346d0 ; 0043473a
        ;   XREF to: 004346d0 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_FUN_004346d0(CLZWDictionary * this_ptr, SBitBuffer * bit_buffer, _istream * istream, int * bytes_remaining)
    ADD ESP,0x10                        ; 0043473f
    MOV ESI,EAX                         ; 00434742
    TEST EAX,EAX                        ; 00434744
    JGE 0x00434710                      ; 00434746
        ;   XREF to: 00434710 (CONDITIONAL_JUMP)  ; LAB_00434710
    POP EBP                             ; 00434748
    POP EDI                             ; 00434749
    POP ESI                             ; 0043474a
    POP EBX                             ; 0043474b
    RET                                 ; 0043474c
    CMP EAX,-0x1                        ; 0043474d
        ;   Label: LAB_0043474d
    JNZ 0x0043475e                      ; 00434750
        ;   XREF to: 0043475e (CONDITIONAL_JUMP)  ; LAB_0043475e
    MOV EAX,0xfffffffe                  ; 00434752
    SUB EAX,EDI                         ; 00434757
    POP EBP                             ; 00434759
    POP EDI                             ; 0043475a
    POP ESI                             ; 0043475b
    POP EBX                             ; 0043475c
    RET                                 ; 0043475d
    MOV EAX,0xffffffff                  ; 0043475e
        ;   Label: LAB_0043475e
    POP EBP                             ; 00434763
    POP EDI                             ; 00434764
    POP ESI                             ; 00434765
    POP EBX                             ; 00434766
    RET                                 ; 00434767

