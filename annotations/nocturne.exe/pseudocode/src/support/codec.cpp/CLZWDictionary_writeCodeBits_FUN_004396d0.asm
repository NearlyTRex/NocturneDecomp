; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_codec_cpp_CLZWDictionary_writeCodeBits_FUN_004396d0(int param_1,uint param_2,SBitBuffer *param_3,_ostream *param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   support_codec.cpp_CLZWCompress_finalize_FUN_004399a0 at 004399d4
;   support_codec.cpp_CLZWCompress_process_FUN_004398c0 at 0043994d
;
; Called Functions:
;   support_codec.cpp_writeBitsToStream_FUN_00438c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004396d0
        ;   Label: support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_004396d0
    PUSH ESI                            ; 004396d1
    PUSH EDI                            ; 004396d2
    PUSH EBP                            ; 004396d3
    MOV EBP,ESP                         ; 004396d4
    SUB ESP,0x4                         ; 004396d6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004396d9
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004396dc
    MOV EDI,dword ptr [EBP + 0x20]      ; 004396df
    MOV EBX,0x1                         ; 004396e2
    MOV ECX,dword ptr [EAX + 0x8]       ; 004396e7
    MOV EAX,dword ptr [EAX + 0xc]       ; 004396ea
    DEC ECX                             ; 004396ed
    DEC EAX                             ; 004396ee
    SHL EBX,CL                          ; 004396ef
    MOV dword ptr [EBP + -0x4],EAX      ; 004396f1
    TEST EBX,EBX                        ; 004396f4
    JZ 0x00439702                       ; 004396f6
        ;   XREF to: 00439702 (CONDITIONAL_JUMP)  ; LAB_00439702
    TEST dword ptr [EBP + -0x4],EBX     ; 004396f8
        ;   Label: LAB_004396f8
    JZ 0x0043971b                       ; 004396fb
        ;   XREF to: 0043971b (CONDITIONAL_JUMP)  ; LAB_0043971b
    TEST dword ptr [EBP + 0x18],EBX     ; 004396fd
    JNZ 0x0043970d                      ; 00439700
        ;   XREF to: 0043970d (CONDITIONAL_JUMP)  ; LAB_0043970d
    TEST EBX,EBX                        ; 00439702
        ;   Label: LAB_00439702
    JNZ 0x0043972c                      ; 00439704
        ;   XREF to: 0043972c (CONDITIONAL_JUMP)  ; LAB_0043972c
    MOV ESP,EBP                         ; 00439706
    POP EBP                             ; 00439708
    POP EDI                             ; 00439709
    POP ESI                             ; 0043970a
    POP EBX                             ; 0043970b
    RET                                 ; 0043970c
    PUSH EDI                            ; 0043970d
        ;   Label: LAB_0043970d
    PUSH 0x1                            ; 0043970e
    PUSH 0x1                            ; 00439710
    PUSH ESI                            ; 00439712
    CALL support_codec.cpp_writeBitsToStream_FUN_00438c40 ; 00439713
        ;   XREF to: 00438c40 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_writeBitsToStream_FUN_00438c40(SBitBuffer * bit_buffer, int bit_count, int bit_value, _ostream * ostream)
    ADD ESP,0x10                        ; 00439718
    SAR EBX,0x1                         ; 0043971b
        ;   Label: LAB_0043971b
    TEST EBX,EBX                        ; 0043971d
    JNZ 0x004396f8                      ; 0043971f
        ;   XREF to: 004396f8 (CONDITIONAL_JUMP)  ; LAB_004396f8
    TEST EBX,EBX                        ; 00439721
    JNZ 0x0043972c                      ; 00439723
        ;   XREF to: 0043972c (CONDITIONAL_JUMP)  ; LAB_0043972c
    MOV ESP,EBP                         ; 00439725
    POP EBP                             ; 00439727
    POP EDI                             ; 00439728
    POP ESI                             ; 00439729
    POP EBX                             ; 0043972a
    RET                                 ; 0043972b
    MOV EDX,dword ptr [EBP + 0x18]      ; 0043972c
        ;   Label: LAB_0043972c
    PUSH EDI                            ; 0043972f
    TEST EBX,EDX                        ; 00439730
    SETNZ AL                            ; 00439732
    AND EAX,0xff                        ; 00439735
    PUSH EAX                            ; 0043973a
    PUSH 0x1                            ; 0043973b
    PUSH ESI                            ; 0043973d
    SAR EBX,0x1                         ; 0043973e
    CALL support_codec.cpp_writeBitsToStream_FUN_00438c40 ; 00439740
        ;   XREF to: 00438c40 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_writeBitsToStream_FUN_00438c40(SBitBuffer * bit_buffer, int bit_count, int bit_value, _ostream * ostream)
    ADD ESP,0x10                        ; 00439745
    TEST EBX,EBX                        ; 00439748
    JNZ 0x0043972c                      ; 0043974a
        ;   XREF to: 0043972c (CONDITIONAL_JUMP)  ; LAB_0043972c
    MOV ESP,EBP                         ; 0043974c
    POP EBP                             ; 0043974e
    POP EDI                             ; 0043974f
    POP ESI                             ; 00439750
    POP EBX                             ; 00439751
    RET                                 ; 00439752

