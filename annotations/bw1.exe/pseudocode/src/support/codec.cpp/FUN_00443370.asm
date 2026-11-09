; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_codec_cpp_FUN_00443370(int param_1,int param_2,int *param_3)
;
;
; XREF[1]:
;   support_codec.cpp_FUN_00443790 at 004437ae
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443370
        ;   Label: support_codec.cpp_FUN_00443370
    PUSH ESI                            ; 00443371
    PUSH EDI                            ; 00443372
    PUSH EBP                            ; 00443373
    MOV EDI,dword ptr [ESP + 0x14]      ; 00443374
    MOV EBP,dword ptr [ESP + 0x18]      ; 00443378
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0044337c
    MOV EAX,EBP                         ; 00443380
    MOV EDX,dword ptr [EDI + 0x10]      ; 00443382
    SHL EAX,0x4                         ; 00443385
    ADD EAX,EDX                         ; 00443388
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044338a
    TEST EDX,EDX                        ; 0044338d
    JGE 0x004433b9                      ; 0044338f
        ;   XREF to: 004433b9 (CONDITIONAL_JUMP)  ; LAB_004433b9
    MOV EBX,dword ptr [EAX]             ; 00443391
    MOV ECX,EBP                         ; 00443393
        ;   Label: LAB_00443393
    MOV EDX,dword ptr [EDI + 0x10]      ; 00443395
    SHL ECX,0x4                         ; 00443398
    MOV EAX,dword ptr [ESI]             ; 0044339b
    MOV DL,byte ptr [ECX + EDX*0x1]     ; 0044339d
    AND EDX,0xff                        ; 004433a0
    PUSH EDX                            ; 004433a6
    PUSH ESI                            ; 004433a7
    CALL dword ptr [EAX + 0x4]          ; 004433a8
    ADD ESP,0x8                         ; 004433ab
    TEST EAX,EAX                        ; 004433ae
    JL 0x004433cf                       ; 004433b0
        ;   XREF to: 004433cf (CONDITIONAL_JUMP)  ; LAB_004433cf
    MOV EAX,EBX                         ; 004433b2
    POP EBP                             ; 004433b4
    POP EDI                             ; 004433b5
    POP ESI                             ; 004433b6
    POP EBX                             ; 004433b7
    RET                                 ; 004433b8
    PUSH ESI                            ; 004433b9
        ;   Label: LAB_004433b9
    PUSH EDX                            ; 004433ba
    PUSH EDI                            ; 004433bb
    CALL support_codec.cpp_FUN_00443370 ; 004433bc
        ;   XREF to: 00443370 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00443370()
    ADD ESP,0xc                         ; 004433c1
    MOV EBX,EAX                         ; 004433c4
    TEST EAX,EAX                        ; 004433c6
    JGE 0x00443393                      ; 004433c8
        ;   XREF to: 00443393 (CONDITIONAL_JUMP)  ; LAB_00443393
    POP EBP                             ; 004433ca
    POP EDI                             ; 004433cb
    POP ESI                             ; 004433cc
    POP EBX                             ; 004433cd
    RET                                 ; 004433ce
    CMP EAX,-0x1                        ; 004433cf
        ;   Label: LAB_004433cf
    JNZ 0x004433e0                      ; 004433d2
        ;   XREF to: 004433e0 (CONDITIONAL_JUMP)  ; LAB_004433e0
    MOV EAX,0xfffffffe                  ; 004433d4
    SUB EAX,EBP                         ; 004433d9
    POP EBP                             ; 004433db
    POP EDI                             ; 004433dc
    POP ESI                             ; 004433dd
    POP EBX                             ; 004433de
    RET                                 ; 004433df
    MOV EAX,0xffffffff                  ; 004433e0
        ;   Label: LAB_004433e0
    POP EBP                             ; 004433e5
    POP EDI                             ; 004433e6
    POP ESI                             ; 004433e7
    POP EBX                             ; 004433e8
    RET                                 ; 004433e9

