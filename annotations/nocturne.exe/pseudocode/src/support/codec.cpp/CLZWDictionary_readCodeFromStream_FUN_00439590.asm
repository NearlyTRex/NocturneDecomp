; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_codec_cpp_CLZWDictionary_readCodeFromStream_FUN_00439590(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   support_codec.cpp_CLZWDecompress_process_FUN_00439a70 at 00439ace
;
; Called Functions:
;   support_codec.cpp_readBitsFromStream_FUN_00438ab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439590
        ;   Label: support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_00439590
    PUSH ESI                            ; 00439591
    PUSH EDI                            ; 00439592
    PUSH EBP                            ; 00439593
    SUB ESP,0x4                         ; 00439594
    MOV EAX,dword ptr [ESP + 0x18]      ; 00439597
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043959b
    MOV EBP,dword ptr [ESP + 0x24]      ; 0043959f
    MOV EBX,0x1                         ; 004395a3
    MOV ECX,dword ptr [EAX + 0x8]       ; 004395a8
    XOR ESI,ESI                         ; 004395ab
    MOV EAX,dword ptr [EAX + 0xc]       ; 004395ad
    DEC ECX                             ; 004395b0
    DEC EAX                             ; 004395b1
    SHL EBX,CL                          ; 004395b2
    MOV dword ptr [ESP],EAX             ; 004395b4
    TEST EBX,EBX                        ; 004395b7
    JZ 0x004395d9                       ; 004395b9
        ;   XREF to: 004395d9 (CONDITIONAL_JUMP)  ; LAB_004395d9
    TEST dword ptr [ESP],EBX            ; 004395bb
        ;   Label: LAB_004395bb
    JZ 0x004395f0                       ; 004395be
        ;   XREF to: 004395f0 (CONDITIONAL_JUMP)  ; LAB_004395f0
    PUSH EBP                            ; 004395c0
    MOV ECX,dword ptr [ESP + 0x24]      ; 004395c1
    PUSH ECX                            ; 004395c5
    PUSH 0x1                            ; 004395c6
    PUSH EDI                            ; 004395c8
    CALL support_codec.cpp_readBitsFromStream_FUN_00438ab0 ; 004395c9
        ;   XREF to: 00438ab0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_readBitsFromStream_FUN_00438ab0()
    ADD ESP,0x10                        ; 004395ce
    TEST EAX,EAX                        ; 004395d1
    JL 0x004395e7                       ; 004395d3
        ;   XREF to: 004395e7 (CONDITIONAL_JUMP)  ; LAB_004395e7
    JNZ 0x004395ee                      ; 004395d5
        ;   XREF to: 004395ee (CONDITIONAL_JUMP)  ; LAB_004395ee
    SAR EBX,0x1                         ; 004395d7
        ;   Label: LAB_004395d7
    TEST EBX,EBX                        ; 004395d9
        ;   Label: LAB_004395d9
    JNZ 0x00439604                      ; 004395db
        ;   XREF to: 00439604 (CONDITIONAL_JUMP)  ; LAB_00439604
    MOV EAX,ESI                         ; 004395dd
    ADD ESP,0x4                         ; 004395df
        ;   Label: LAB_004395df
    POP EBP                             ; 004395e2
    POP EDI                             ; 004395e3
    POP ESI                             ; 004395e4
    POP EBX                             ; 004395e5
    RET                                 ; 004395e6
    MOV EAX,0xffffffff                  ; 004395e7
        ;   Label: LAB_004395e7
    JMP 0x004395df                      ; 004395ec
        ;   XREF to: 004395df (UNCONDITIONAL_JUMP)  ; LAB_004395df
    OR ESI,EBX                          ; 004395ee
        ;   Label: LAB_004395ee
    SAR EBX,0x1                         ; 004395f0
        ;   Label: LAB_004395f0
    TEST EBX,EBX                        ; 004395f2
    JNZ 0x004395bb                      ; 004395f4
        ;   XREF to: 004395bb (CONDITIONAL_JUMP)  ; LAB_004395bb
    TEST EBX,EBX                        ; 004395f6
    JNZ 0x00439604                      ; 004395f8
        ;   XREF to: 00439604 (CONDITIONAL_JUMP)  ; LAB_00439604
    MOV EAX,ESI                         ; 004395fa
    ADD ESP,0x4                         ; 004395fc
    POP EBP                             ; 004395ff
    POP EDI                             ; 00439600
    POP ESI                             ; 00439601
    POP EBX                             ; 00439602
    RET                                 ; 00439603
    PUSH EBP                            ; 00439604
        ;   Label: LAB_00439604
    MOV EAX,dword ptr [ESP + 0x24]      ; 00439605
    PUSH EAX                            ; 00439609
    PUSH 0x1                            ; 0043960a
    PUSH EDI                            ; 0043960c
    CALL support_codec.cpp_readBitsFromStream_FUN_00438ab0 ; 0043960d
        ;   XREF to: 00438ab0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_readBitsFromStream_FUN_00438ab0()
    ADD ESP,0x10                        ; 00439612
    TEST EAX,EAX                        ; 00439615
    JL 0x004395e7                       ; 00439617
        ;   XREF to: 004395e7 (CONDITIONAL_JUMP)  ; LAB_004395e7
    JZ 0x004395d7                       ; 00439619
        ;   XREF to: 004395d7 (CONDITIONAL_JUMP)  ; LAB_004395d7
    OR ESI,EBX                          ; 0043961b
    SAR EBX,0x1                         ; 0043961d
    TEST EBX,EBX                        ; 0043961f
    JNZ 0x00439604                      ; 00439621
        ;   XREF to: 00439604 (CONDITIONAL_JUMP)  ; LAB_00439604
    MOV EAX,ESI                         ; 00439623
    ADD ESP,0x4                         ; 00439625
    POP EBP                             ; 00439628
    POP EDI                             ; 00439629
    POP ESI                             ; 0043962a
    POP EBX                             ; 0043962b
    RET                                 ; 0043962c

