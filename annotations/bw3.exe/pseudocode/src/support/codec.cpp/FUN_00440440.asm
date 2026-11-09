; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_codec_cpp_FUN_00440440(int *param_1,int *param_2)
;
;
; XREF[1]:
;   support_codec.cpp_FUN_00441290 at 004412e6
;
; Called Functions:
;   support_codec.cpp_FUN_00440400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440440
        ;   Label: support_codec.cpp_FUN_00440440
    PUSH ESI                            ; 00440441
    MOV EBX,dword ptr [ESP + 0xc]       ; 00440442
    MOV ESI,dword ptr [ESP + 0x10]      ; 00440446
    PUSH ESI                            ; 0044044a
    PUSH EBX                            ; 0044044b
    CALL support_codec.cpp_FUN_00440400 ; 0044044c
        ;   XREF to: 00440400 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00440400()
    ADD ESP,0x8                         ; 00440451
    TEST EAX,EAX                        ; 00440454
    JL 0x0044045f                       ; 00440456
        ;   XREF to: 0044045f (CONDITIONAL_JUMP)  ; LAB_0044045f
    CMP dword ptr [EBX],0x0             ; 00440458
    JG 0x00440462                       ; 0044045b
        ;   XREF to: 00440462 (CONDITIONAL_JUMP)  ; LAB_00440462
    XOR EAX,EAX                         ; 0044045d
    POP ESI                             ; 0044045f
        ;   Label: LAB_0044045f
    POP EBX                             ; 00440460
    RET                                 ; 00440461
    XOR EDX,EDX                         ; 00440462
        ;   Label: LAB_00440462
    MOV DL,byte ptr [EBX + 0x4]         ; 00440464
    PUSH EDX                            ; 00440467
    MOV EAX,dword ptr [ESI]             ; 00440468
    PUSH ESI                            ; 0044046a
    CALL dword ptr [EAX + 0x4]          ; 0044046b
    ADD ESP,0x8                         ; 0044046e
    TEST EAX,EAX                        ; 00440471
    JL 0x0044045f                       ; 00440473
        ;   XREF to: 0044045f (CONDITIONAL_JUMP)  ; LAB_0044045f
    MOV dword ptr [EBX],0x0             ; 00440475
    MOV dword ptr [EBX + 0x4],0x0       ; 0044047b
    XOR EAX,EAX                         ; 00440482
    POP ESI                             ; 00440484
    POP EBX                             ; 00440485
    RET                                 ; 00440486

