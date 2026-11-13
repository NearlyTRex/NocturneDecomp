; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_findFreeSfxSample_FUN_00551450(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02cebc20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551450
        ;   Label: sound_sndmain.cpp_findFreeSfxSample_FUN_00551450
    PUSH ESI                            ; 00551451
    PUSH EDI                            ; 00551452
    PUSH EBP                            ; 00551453
    MOV EDX,dword ptr [0x02cebc20]      ; 00551454 | DAT_02cebc20
    XOR ECX,ECX                         ; 0055145a
    XOR EBX,EBX                         ; 0055145c
    INC EDX                             ; 0055145e
        ;   Label: LAB_0055145e
    CMP EDX,0x40                        ; 0055145f
    JL 0x00551466                       ; 00551462
        ;   XREF to: 00551466 (CONDITIONAL_JUMP)  ; LAB_00551466
    MOV EDX,EBX                         ; 00551464
    IMUL EAX,EDX,0x1b0                  ; 00551466
        ;   Label: LAB_00551466
    MOV ESI,dword ptr [EAX + 0x2cebd74] ; 0055146c
    CMP EBX,ESI                         ; 00551472
    JZ 0x00551489                       ; 00551474
        ;   XREF to: 00551489 (CONDITIONAL_JUMP)  ; LAB_00551489
    INC ECX                             ; 00551476
        ;   Label: LAB_00551476
    CMP ECX,0x40                        ; 00551477
    JL 0x0055145e                       ; 0055147a
        ;   XREF to: 0055145e (CONDITIONAL_JUMP)  ; LAB_0055145e
    XOR EAX,EAX                         ; 0055147c
    MOV dword ptr [0x02cebc20],EDX      ; 0055147e | DAT_02cebc20
    POP EBP                             ; 00551484
    POP EDI                             ; 00551485
    POP ESI                             ; 00551486
    POP EBX                             ; 00551487
    RET                                 ; 00551488
    MOV EDI,dword ptr [EAX + 0x2cebd78] ; 00551489
        ;   Label: LAB_00551489
    CMP ESI,EDI                         ; 0055148f
    JNZ 0x00551476                      ; 00551491
        ;   XREF to: 00551476 (CONDITIONAL_JUMP)  ; LAB_00551476
    MOV EBP,dword ptr [EAX + 0x2cebd80] ; 00551493
    CMP EDI,EBP                         ; 00551499
    JNZ 0x00551476                      ; 0055149b
        ;   XREF to: 00551476 (CONDITIONAL_JUMP)  ; LAB_00551476
    CMP EBP,dword ptr [EAX + 0x2cebdd0] ; 0055149d
    JNZ 0x00551476                      ; 005514a3
        ;   XREF to: 00551476 (CONDITIONAL_JUMP)  ; LAB_00551476
    ADD EAX,0x2cebc24                   ; 005514a5
    MOV dword ptr [0x02cebc20],EDX      ; 005514aa | DAT_02cebc20
    POP EBP                             ; 005514b0
    POP EDI                             ; 005514b1
    POP ESI                             ; 005514b2
    POP EBX                             ; 005514b3
    RET                                 ; 005514b4

