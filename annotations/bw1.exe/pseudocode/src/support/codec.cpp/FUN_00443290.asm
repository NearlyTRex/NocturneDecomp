; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00443290(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   support_codec.cpp_FUN_00443530 at 0044358f
;   support_codec.cpp_FUN_00443630 at 0044364b
;
; Called Functions:
;   support_codec.cpp_FUN_00442600
;   support_codec.cpp_FUN_004427a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443290
        ;   Label: support_codec.cpp_FUN_00443290
    PUSH ESI                            ; 00443291
    PUSH EDI                            ; 00443292
    PUSH EBP                            ; 00443293
    MOV EBP,ESP                         ; 00443294
    SUB ESP,0x4                         ; 00443296
    MOV ESI,dword ptr [EBP + 0x14]      ; 00443299
    MOV EDI,dword ptr [EBP + 0x20]      ; 0044329c
    PUSH EDI                            ; 0044329f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004432a0
    PUSH EDX                            ; 004432a3
    CALL support_codec.cpp_FUN_004427a0 ; 004432a4
        ;   XREF to: 004427a0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_004427a0()
    ADD ESP,0x8                         ; 004432a9
    TEST EAX,EAX                        ; 004432ac
    JL 0x004432df                       ; 004432ae
        ;   XREF to: 004432df (CONDITIONAL_JUMP)  ; LAB_004432df
    MOV EBX,0x1                         ; 004432b0
    MOV ECX,dword ptr [ESI + 0x8]       ; 004432b5
    MOV EAX,dword ptr [ESI + 0xc]       ; 004432b8
    DEC ECX                             ; 004432bb
    DEC EAX                             ; 004432bc
    XOR ESI,ESI                         ; 004432bd
    SHL EBX,CL                          ; 004432bf
    MOV dword ptr [EBP + -0x4],EAX      ; 004432c1
    TEST EBX,EBX                        ; 004432c4
    JZ 0x004432d2                       ; 004432c6
        ;   XREF to: 004432d2 (CONDITIONAL_JUMP)  ; LAB_004432d2
    TEST dword ptr [EBP + -0x4],EBX     ; 004432c8
        ;   Label: LAB_004432c8
    JZ 0x00443300                       ; 004432cb
        ;   XREF to: 00443300 (CONDITIONAL_JUMP)  ; LAB_00443300
    TEST dword ptr [EBP + 0x18],EBX     ; 004432cd
    JNZ 0x004432eb                      ; 004432d0
        ;   XREF to: 004432eb (CONDITIONAL_JUMP)  ; LAB_004432eb
    TEST EBX,EBX                        ; 004432d2
        ;   Label: LAB_004432d2
    JNZ 0x0044331c                      ; 004432d4
        ;   XREF to: 0044331c (CONDITIONAL_JUMP)  ; LAB_0044331c
    MOV EAX,ESI                         ; 004432d6
    MOV ESP,EBP                         ; 004432d8
        ;   Label: LAB_004432d8
    POP EBP                             ; 004432da
    POP EDI                             ; 004432db
    POP ESI                             ; 004432dc
    POP EBX                             ; 004432dd
    RET                                 ; 004432de
    CMP EAX,-0x1                        ; 004432df
        ;   Label: LAB_004432df
    JZ 0x004432d8                       ; 004432e2
        ;   XREF to: 004432d8 (CONDITIONAL_JUMP)  ; LAB_004432d8
    MOV EAX,0xfffffffd                  ; 004432e4
        ;   Label: LAB_004432e4
    JMP 0x004432d8                      ; 004432e9
        ;   XREF to: 004432d8 (UNCONDITIONAL_JUMP)  ; LAB_004432d8
    PUSH EDI                            ; 004432eb
        ;   Label: LAB_004432eb
    PUSH 0x1                            ; 004432ec
    PUSH 0x1                            ; 004432ee
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004432f0
    PUSH EDX                            ; 004432f3
    CALL support_codec.cpp_FUN_00442600 ; 004432f4
        ;   XREF to: 00442600 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00442600()
    ADD ESP,0x10                        ; 004432f9
    TEST EAX,EAX                        ; 004432fc
    JL 0x00443313                       ; 004432fe
        ;   XREF to: 00443313 (CONDITIONAL_JUMP)  ; LAB_00443313
    SAR EBX,0x1                         ; 00443300
        ;   Label: LAB_00443300
    TEST EBX,EBX                        ; 00443302
    JNZ 0x004432c8                      ; 00443304
        ;   XREF to: 004432c8 (CONDITIONAL_JUMP)  ; LAB_004432c8
    TEST EBX,EBX                        ; 00443306
    JNZ 0x0044331c                      ; 00443308
        ;   XREF to: 0044331c (CONDITIONAL_JUMP)  ; LAB_0044331c
    MOV EAX,ESI                         ; 0044330a
    MOV ESP,EBP                         ; 0044330c
    POP EBP                             ; 0044330e
    POP EDI                             ; 0044330f
    POP ESI                             ; 00443310
    POP EBX                             ; 00443311
    RET                                 ; 00443312
    CMP EAX,-0x2                        ; 00443313
        ;   Label: LAB_00443313
    JNZ 0x004432e4                      ; 00443316
        ;   XREF to: 004432e4 (CONDITIONAL_JUMP)  ; LAB_004432e4
    MOV ESI,EAX                         ; 00443318
    JMP 0x00443300                      ; 0044331a
        ;   XREF to: 00443300 (UNCONDITIONAL_JUMP)  ; LAB_00443300
    MOV ECX,dword ptr [EBP + 0x18]      ; 0044331c
        ;   Label: LAB_0044331c
    PUSH EDI                            ; 0044331f
    TEST EBX,ECX                        ; 00443320
    SETNZ AL                            ; 00443322
    AND EAX,0xff                        ; 00443325
    PUSH EAX                            ; 0044332a
    PUSH 0x1                            ; 0044332b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0044332d
    PUSH EAX                            ; 00443330
    CALL support_codec.cpp_FUN_00442600 ; 00443331
        ;   XREF to: 00442600 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00442600()
    ADD ESP,0x10                        ; 00443336
    TEST EAX,EAX                        ; 00443339
    JL 0x0044334c                       ; 0044333b
        ;   XREF to: 0044334c (CONDITIONAL_JUMP)  ; LAB_0044334c
    SAR EBX,0x1                         ; 0044333d
    TEST EBX,EBX                        ; 0044333f
    JNZ 0x0044331c                      ; 00443341
        ;   XREF to: 0044331c (CONDITIONAL_JUMP)  ; LAB_0044331c
    MOV EAX,ESI                         ; 00443343
    MOV ESP,EBP                         ; 00443345
    POP EBP                             ; 00443347
    POP EDI                             ; 00443348
    POP ESI                             ; 00443349
    POP EBX                             ; 0044334a
    RET                                 ; 0044334b
    CMP EAX,-0x2                        ; 0044334c
        ;   Label: LAB_0044334c
    JNZ 0x004432e4                      ; 0044334f
        ;   XREF to: 004432e4 (CONDITIONAL_JUMP)  ; LAB_004432e4
    MOV ESI,EAX                         ; 00443351
    SAR EBX,0x1                         ; 00443353
    TEST EBX,EBX                        ; 00443355
    JNZ 0x0044331c                      ; 00443357
        ;   XREF to: 0044331c (CONDITIONAL_JUMP)  ; LAB_0044331c
    MOV EAX,ESI                         ; 00443359
    MOV ESP,EBP                         ; 0044335b
    POP EBP                             ; 0044335d
    POP EDI                             ; 0044335e
    POP ESI                             ; 0044335f
    POP EBX                             ; 00443360
    RET                                 ; 00443361

