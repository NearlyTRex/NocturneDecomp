; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_codec_cpp_CLZWDictionary_readCodeFromBuffer_FUN_00439630(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   support_codec.cpp_CLZWDecompress_processBuffer_FUN_00439b30 at 00439ba5
;
; Called Functions:
;   support_codec.cpp_extractBitsFromBuffer_FUN_00438dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439630
        ;   Label: support_codec.cpp_CLZWDictionary_readCodeFromBuffer_FUN_00439630
    PUSH ESI                            ; 00439631
    PUSH EDI                            ; 00439632
    PUSH EBP                            ; 00439633
    SUB ESP,0x4                         ; 00439634
    MOV EAX,dword ptr [ESP + 0x18]      ; 00439637
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043963b
    MOV EBP,dword ptr [ESP + 0x24]      ; 0043963f
    MOV EBX,0x1                         ; 00439643
    MOV ECX,dword ptr [EAX + 0x8]       ; 00439648
    XOR ESI,ESI                         ; 0043964b
    MOV EAX,dword ptr [EAX + 0xc]       ; 0043964d
    DEC ECX                             ; 00439650
    DEC EAX                             ; 00439651
    SHL EBX,CL                          ; 00439652
    MOV dword ptr [ESP],EAX             ; 00439654
    TEST EBX,EBX                        ; 00439657
    JZ 0x00439679                       ; 00439659
        ;   XREF to: 00439679 (CONDITIONAL_JUMP)  ; LAB_00439679
    TEST dword ptr [ESP],EBX            ; 0043965b
        ;   Label: LAB_0043965b
    JZ 0x00439690                       ; 0043965e
        ;   XREF to: 00439690 (CONDITIONAL_JUMP)  ; LAB_00439690
    PUSH EBP                            ; 00439660
    MOV ECX,dword ptr [ESP + 0x24]      ; 00439661
    PUSH ECX                            ; 00439665
    PUSH 0x1                            ; 00439666
    PUSH EDI                            ; 00439668
    CALL support_codec.cpp_extractBitsFromBuffer_FUN_00438dc0 ; 00439669
        ;   XREF to: 00438dc0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_extractBitsFromBuffer_FUN_00438dc0()
    ADD ESP,0x10                        ; 0043966e
    TEST EAX,EAX                        ; 00439671
    JL 0x00439687                       ; 00439673
        ;   XREF to: 00439687 (CONDITIONAL_JUMP)  ; LAB_00439687
    JNZ 0x0043968e                      ; 00439675
        ;   XREF to: 0043968e (CONDITIONAL_JUMP)  ; LAB_0043968e
    SAR EBX,0x1                         ; 00439677
        ;   Label: LAB_00439677
    TEST EBX,EBX                        ; 00439679
        ;   Label: LAB_00439679
    JNZ 0x004396a4                      ; 0043967b
        ;   XREF to: 004396a4 (CONDITIONAL_JUMP)  ; LAB_004396a4
    MOV EAX,ESI                         ; 0043967d
    ADD ESP,0x4                         ; 0043967f
        ;   Label: LAB_0043967f
    POP EBP                             ; 00439682
    POP EDI                             ; 00439683
    POP ESI                             ; 00439684
    POP EBX                             ; 00439685
    RET                                 ; 00439686
    MOV EAX,0xffffffff                  ; 00439687
        ;   Label: LAB_00439687
    JMP 0x0043967f                      ; 0043968c
        ;   XREF to: 0043967f (UNCONDITIONAL_JUMP)  ; LAB_0043967f
    OR ESI,EBX                          ; 0043968e
        ;   Label: LAB_0043968e
    SAR EBX,0x1                         ; 00439690
        ;   Label: LAB_00439690
    TEST EBX,EBX                        ; 00439692
    JNZ 0x0043965b                      ; 00439694
        ;   XREF to: 0043965b (CONDITIONAL_JUMP)  ; LAB_0043965b
    TEST EBX,EBX                        ; 00439696
    JNZ 0x004396a4                      ; 00439698
        ;   XREF to: 004396a4 (CONDITIONAL_JUMP)  ; LAB_004396a4
    MOV EAX,ESI                         ; 0043969a
    ADD ESP,0x4                         ; 0043969c
    POP EBP                             ; 0043969f
    POP EDI                             ; 004396a0
    POP ESI                             ; 004396a1
    POP EBX                             ; 004396a2
    RET                                 ; 004396a3
    PUSH EBP                            ; 004396a4
        ;   Label: LAB_004396a4
    MOV EAX,dword ptr [ESP + 0x24]      ; 004396a5
    PUSH EAX                            ; 004396a9
    PUSH 0x1                            ; 004396aa
    PUSH EDI                            ; 004396ac
    CALL support_codec.cpp_extractBitsFromBuffer_FUN_00438dc0 ; 004396ad
        ;   XREF to: 00438dc0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_extractBitsFromBuffer_FUN_00438dc0()
    ADD ESP,0x10                        ; 004396b2
    TEST EAX,EAX                        ; 004396b5
    JL 0x00439687                       ; 004396b7
        ;   XREF to: 00439687 (CONDITIONAL_JUMP)  ; LAB_00439687
    JZ 0x00439677                       ; 004396b9
        ;   XREF to: 00439677 (CONDITIONAL_JUMP)  ; LAB_00439677
    OR ESI,EBX                          ; 004396bb
    SAR EBX,0x1                         ; 004396bd
    TEST EBX,EBX                        ; 004396bf
    JNZ 0x004396a4                      ; 004396c1
        ;   XREF to: 004396a4 (CONDITIONAL_JUMP)  ; LAB_004396a4
    MOV EAX,ESI                         ; 004396c3
    ADD ESP,0x4                         ; 004396c5
    POP EBP                             ; 004396c8
    POP EDI                             ; 004396c9
    POP ESI                             ; 004396ca
    POP EBX                             ; 004396cb
    RET                                 ; 004396cc

