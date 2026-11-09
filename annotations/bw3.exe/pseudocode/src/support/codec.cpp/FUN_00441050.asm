; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_FUN_00441050(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,_istream *istream,int *bytes_remaining)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; SBitBuffer *     Stack[0x8]:4   bit_buffer
; _istream *       Stack[0xc]:4   istream
; int *            Stack[0x10]:4   bytes_remaining
;
; XREF[1]:
;   support_codec.cpp_FUN_004413f0 at 0044145f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441050
        ;   Label: support_codec.cpp_FUN_00441050
    PUSH ESI                            ; 00441051
    PUSH EDI                            ; 00441052
    PUSH EBP                            ; 00441053
    MOV EBX,dword ptr [ESP + 0x14]      ; 00441054
    MOV EDI,dword ptr [ESP + 0x18]      ; 00441058
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0044105c
    MOV EBP,dword ptr [ESP + 0x20]      ; 00441060
    MOV EAX,EDI                         ; 00441064
    MOV EDX,dword ptr [EBX + 0x10]      ; 00441066
    SHL EAX,0x4                         ; 00441069
    ADD EAX,EDX                         ; 0044106c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044106e
    TEST EDX,EDX                        ; 00441071
    JL 0x0044108e                       ; 00441073
        ;   XREF to: 0044108e (CONDITIONAL_JUMP)  ; LAB_0044108e
    CMP EDI,ECX                         ; 00441075
    JNZ 0x004410b6                      ; 00441077
        ;   XREF to: 004410b6 (CONDITIONAL_JUMP)  ; LAB_004410b6
    MOV EAX,ECX                         ; 00441079
    SHL EAX,0x4                         ; 0044107b
        ;   Label: LAB_0044107b
    MOV EDX,dword ptr [EBX + 0x10]      ; 0044107e
    ADD EAX,EDX                         ; 00441081
    MOV ESI,dword ptr [EAX + 0x4]       ; 00441083
    TEST ESI,ESI                        ; 00441086
    JL 0x0044108e                       ; 00441088
        ;   XREF to: 0044108e (CONDITIONAL_JUMP)  ; LAB_0044108e
    MOV EAX,ESI                         ; 0044108a
    JMP 0x0044107b                      ; 0044108c
        ;   XREF to: 0044107b (UNCONDITIONAL_JUMP)  ; LAB_0044107b
    MOV ESI,dword ptr [EAX]             ; 0044108e
        ;   Label: LAB_0044108e
    MOV EDX,EDI                         ; 00441090
        ;   Label: LAB_00441090
    MOV EAX,dword ptr [EBX + 0x10]      ; 00441092
    SHL EDX,0x4                         ; 00441095
    MOV ECX,dword ptr [EBP]             ; 00441098
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0044109b
    AND EAX,0xff                        ; 0044109e
    PUSH EAX                            ; 004410a3
    PUSH EBP                            ; 004410a4
    CALL dword ptr [ECX + 0x4]          ; 004410a5
    ADD ESP,0x8                         ; 004410a8
    TEST EAX,EAX                        ; 004410ab
    JL 0x004410cd                       ; 004410ad
        ;   XREF to: 004410cd (CONDITIONAL_JUMP)  ; LAB_004410cd
    MOV EAX,ESI                         ; 004410af
    POP EBP                             ; 004410b1
    POP EDI                             ; 004410b2
    POP ESI                             ; 004410b3
    POP EBX                             ; 004410b4
    RET                                 ; 004410b5
    PUSH EBP                            ; 004410b6
        ;   Label: LAB_004410b6
    PUSH ECX                            ; 004410b7
    PUSH EDX                            ; 004410b8
    PUSH EBX                            ; 004410b9
    CALL support_codec.cpp_FUN_00441050 ; 004410ba
        ;   XREF to: 00441050 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_FUN_00441050(CLZWDictionary * this_ptr, SBitBuffer * bit_buffer, _istream * istream, int * bytes_remaining)
    ADD ESP,0x10                        ; 004410bf
    MOV ESI,EAX                         ; 004410c2
    TEST EAX,EAX                        ; 004410c4
    JGE 0x00441090                      ; 004410c6
        ;   XREF to: 00441090 (CONDITIONAL_JUMP)  ; LAB_00441090
    POP EBP                             ; 004410c8
    POP EDI                             ; 004410c9
    POP ESI                             ; 004410ca
    POP EBX                             ; 004410cb
    RET                                 ; 004410cc
    CMP EAX,-0x1                        ; 004410cd
        ;   Label: LAB_004410cd
    JNZ 0x004410de                      ; 004410d0
        ;   XREF to: 004410de (CONDITIONAL_JUMP)  ; LAB_004410de
    MOV EAX,0xfffffffe                  ; 004410d2
    SUB EAX,EDI                         ; 004410d7
    POP EBP                             ; 004410d9
    POP EDI                             ; 004410da
    POP ESI                             ; 004410db
    POP EBX                             ; 004410dc
    RET                                 ; 004410dd
    MOV EAX,0xffffffff                  ; 004410de
        ;   Label: LAB_004410de
    POP EBP                             ; 004410e3
    POP EDI                             ; 004410e4
    POP ESI                             ; 004410e5
    POP EBX                             ; 004410e6
    RET                                 ; 004410e7

