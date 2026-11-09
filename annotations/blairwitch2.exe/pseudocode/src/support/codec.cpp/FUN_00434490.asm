; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint support_codec_cpp_FUN_00434490(int param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   support_codec.cpp_FUN_00434a10 at 00434a43
;
; Called Functions:
;   support_codec.cpp_FUN_00433780
;   support_codec.cpp_FUN_004338a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434490
        ;   Label: support_codec.cpp_FUN_00434490
    PUSH ESI                            ; 00434491
    PUSH EDI                            ; 00434492
    PUSH EBP                            ; 00434493
    SUB ESP,0x8                         ; 00434494
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00434497
    MOV EBX,0x1                         ; 0043449b
    MOV ECX,dword ptr [EAX + 0x8]       ; 004344a0
    XOR EDX,EDX                         ; 004344a3
    XOR EBP,EBP                         ; 004344a5
    XOR EDI,EDI                         ; 004344a7
    DEC ECX                             ; 004344a9
    MOV EAX,dword ptr [EAX + 0xc]       ; 004344aa
    MOV dword ptr [ESP + 0x4],EDX       ; 004344ad
    DEC EAX                             ; 004344b1
    SHL EBX,CL                          ; 004344b2
    MOV dword ptr [ESP],EAX             ; 004344b4
    TEST EBX,EBX                        ; 004344b7
    JZ 0x004344e5                       ; 004344b9
        ;   XREF to: 004344e5 (CONDITIONAL_JUMP)  ; LAB_004344e5
    TEST dword ptr [ESP],EBX            ; 004344bb
        ;   Label: LAB_004344bb
    JZ 0x00434510                       ; 004344be
        ;   XREF to: 00434510 (CONDITIONAL_JUMP)  ; LAB_00434510
    MOV ESI,dword ptr [ESP + 0x24]      ; 004344c0
    PUSH ESI                            ; 004344c4
    PUSH 0x1                            ; 004344c5
    MOV EAX,dword ptr [ESP + 0x28]      ; 004344c7
    PUSH EAX                            ; 004344cb
    CALL support_codec.cpp_FUN_00433780 ; 004344cc
        ;   XREF to: 00433780 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00433780()
    MOV ESI,EAX                         ; 004344d1
    ADD ESP,0xc                         ; 004344d3
    TEST EAX,EAX                        ; 004344d6
    JL 0x004344f9                       ; 004344d8
        ;   XREF to: 004344f9 (CONDITIONAL_JUMP)  ; LAB_004344f9
    ADD EDI,EDI                         ; 004344da
    INC EBP                             ; 004344dc
    OR EDI,EAX                          ; 004344dd
    TEST EAX,EAX                        ; 004344df
    JNZ 0x0043450c                      ; 004344e1
        ;   XREF to: 0043450c (CONDITIONAL_JUMP)  ; LAB_0043450c
    SAR EBX,0x1                         ; 004344e3
    MOV ESI,dword ptr [ESP + 0x24]      ; 004344e5
        ;   Label: LAB_004344e5
    TEST EBX,EBX                        ; 004344e9
    JNZ 0x00434518                      ; 004344eb
        ;   XREF to: 00434518 (CONDITIONAL_JUMP)  ; LAB_00434518
    MOV EAX,dword ptr [ESP + 0x4]       ; 004344ed
    ADD ESP,0x8                         ; 004344f1
        ;   Label: LAB_004344f1
    POP EBP                             ; 004344f4
    POP EDI                             ; 004344f5
    POP ESI                             ; 004344f6
    POP EBX                             ; 004344f7
    RET                                 ; 004344f8
    PUSH EDI                            ; 004344f9
        ;   Label: LAB_004344f9
    PUSH EBP                            ; 004344fa
    MOV ECX,dword ptr [ESP + 0x28]      ; 004344fb
    PUSH ECX                            ; 004344ff
    CALL support_codec.cpp_FUN_004338a0 ; 00434500
        ;   XREF to: 004338a0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_004338a0()
    ADD ESP,0xc                         ; 00434505
    MOV EAX,ESI                         ; 00434508
    JMP 0x004344f1                      ; 0043450a
        ;   XREF to: 004344f1 (UNCONDITIONAL_JUMP)  ; LAB_004344f1
    OR dword ptr [ESP + 0x4],EBX        ; 0043450c
        ;   Label: LAB_0043450c
    SAR EBX,0x1                         ; 00434510
        ;   Label: LAB_00434510
    TEST EBX,EBX                        ; 00434512
    JNZ 0x004344bb                      ; 00434514
        ;   XREF to: 004344bb (CONDITIONAL_JUMP)  ; LAB_004344bb
    JMP 0x004344e5                      ; 00434516
        ;   XREF to: 004344e5 (UNCONDITIONAL_JUMP)  ; LAB_004344e5
    PUSH ESI                            ; 00434518
        ;   Label: LAB_00434518
    PUSH 0x1                            ; 00434519
    MOV EAX,dword ptr [ESP + 0x28]      ; 0043451b
    PUSH EAX                            ; 0043451f
    CALL support_codec.cpp_FUN_00433780 ; 00434520
        ;   XREF to: 00433780 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00433780()
    ADD ESP,0xc                         ; 00434525
    TEST EAX,EAX                        ; 00434528
    JL 0x00434547                       ; 0043452a
        ;   XREF to: 00434547 (CONDITIONAL_JUMP)  ; LAB_00434547
    ADD EDI,EDI                         ; 0043452c
    INC EBP                             ; 0043452e
    OR EDI,EAX                          ; 0043452f
    TEST EAX,EAX                        ; 00434531
    JNZ 0x00434563                      ; 00434533
        ;   XREF to: 00434563 (CONDITIONAL_JUMP)  ; LAB_00434563
    SAR EBX,0x1                         ; 00434535
        ;   Label: LAB_00434535
    TEST EBX,EBX                        ; 00434537
    JNZ 0x00434518                      ; 00434539
        ;   XREF to: 00434518 (CONDITIONAL_JUMP)  ; LAB_00434518
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043453b
    ADD ESP,0x8                         ; 0043453f
    POP EBP                             ; 00434542
    POP EDI                             ; 00434543
    POP ESI                             ; 00434544
    POP EBX                             ; 00434545
    RET                                 ; 00434546
    PUSH EDI                            ; 00434547
        ;   Label: LAB_00434547
    PUSH EBP                            ; 00434548
    MOV ECX,dword ptr [ESP + 0x28]      ; 00434549
    PUSH ECX                            ; 0043454d
    CALL support_codec.cpp_FUN_004338a0 ; 0043454e
        ;   XREF to: 004338a0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_004338a0()
    MOV EAX,0xffffffff                  ; 00434553
    ADD ESP,0xc                         ; 00434558
    ADD ESP,0x8                         ; 0043455b
    POP EBP                             ; 0043455e
    POP EDI                             ; 0043455f
    POP ESI                             ; 00434560
    POP EBX                             ; 00434561
    RET                                 ; 00434562
    OR dword ptr [ESP + 0x4],EBX        ; 00434563
        ;   Label: LAB_00434563
    JMP 0x00434535                      ; 00434567
        ;   XREF to: 00434535 (UNCONDITIONAL_JUMP)  ; LAB_00434535

