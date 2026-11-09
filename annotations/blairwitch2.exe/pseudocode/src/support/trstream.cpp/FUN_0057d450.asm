; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_0057d450(int *param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   TerminatedCString s_support_trstream_cpp_005ed577
;   TerminatedCString s_Hey_we_re_using_windows_005ed58f
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fseek_FUN_005b929c
;   support_trstream.cpp_FUN_0057d1d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d450
        ;   Label: support_trstream.cpp_FUN_0057d450
    PUSH ESI                            ; 0057d451
    PUSH EDI                            ; 0057d452
    MOV EBX,dword ptr [ESP + 0x10]      ; 0057d453
    MOV EDX,0x5ed577                    ; 0057d457 | = "..\\support\\trstream.cpp"
    MOV ECX,0x6e5                       ; 0057d45c
    PUSH 0x5ed58f                       ; 0057d461 | = "Hey, we're using windows handles for ..."
    MOV dword ptr [0x01d046a0],EDX      ; 0057d466 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0057d46c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0057d472
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0057d477
    MOV EAX,dword ptr [EBX]             ; 0057d47a
    PUSH EBX                            ; 0057d47c
    CALL dword ptr [EAX + 0x24]         ; 0057d47d
    ADD ESP,0x4                         ; 0057d480
    MOV dword ptr [EBX + 0x10],0x0      ; 0057d483
    MOV EAX,dword ptr [ESP + 0x14]      ; 0057d48a
    MOV dword ptr [EBX + 0x4],EAX       ; 0057d48e
    MOV EAX,dword ptr [ESP + 0x18]      ; 0057d491
    PUSH 0x0                            ; 0057d495
    MOV dword ptr [EBX + 0x8],EAX       ; 0057d497
    MOV EAX,dword ptr [ESP + 0x20]      ; 0057d49a
    MOV ESI,dword ptr [EBX + 0x10]      ; 0057d49e
    MOV dword ptr [EBX + 0xc],EAX       ; 0057d4a1
    ADD EAX,ESI                         ; 0057d4a4
    PUSH EAX                            ; 0057d4a6
    MOV EDI,dword ptr [EBX + 0x4]       ; 0057d4a7
    PUSH EDI                            ; 0057d4aa
    CALL crt_stdio.c_fseek_FUN_005b929c ; 0057d4ab
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005b929c()
    ADD ESP,0xc                         ; 0057d4b0
    MOV EAX,dword ptr [EBX]             ; 0057d4b3
    PUSH EBX                            ; 0057d4b5
    CALL dword ptr [EAX + 0x1c]         ; 0057d4b6
    ADD ESP,0x4                         ; 0057d4b9
    TEST EAX,EAX                        ; 0057d4bc
    JZ 0x0057d4d2                       ; 0057d4be
        ;   XREF to: 0057d4d2 (CONDITIONAL_JUMP)  ; LAB_0057d4d2
    PUSH EBX                            ; 0057d4c0
    CALL support_trstream.cpp_FUN_0057d1d0 ; 0057d4c1
        ;   XREF to: 0057d1d0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d1d0()
    MOV EAX,0x1                         ; 0057d4c6
    ADD ESP,0x4                         ; 0057d4cb
    POP EDI                             ; 0057d4ce
    POP ESI                             ; 0057d4cf
    POP EBX                             ; 0057d4d0
    RET                                 ; 0057d4d1
    PUSH EBX                            ; 0057d4d2
        ;   Label: LAB_0057d4d2
    MOV EAX,dword ptr [EBX]             ; 0057d4d3
    CALL dword ptr [EAX + 0x24]         ; 0057d4d5
    ADD ESP,0x4                         ; 0057d4d8
    XOR EAX,EAX                         ; 0057d4db
    POP EDI                             ; 0057d4dd
    POP ESI                             ; 0057d4de
    POP EBX                             ; 0057d4df
    RET                                 ; 0057d4e0

