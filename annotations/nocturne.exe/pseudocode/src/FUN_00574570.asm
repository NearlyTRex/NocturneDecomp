; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; BOOL FUN_00574570(LPCWSTR param_1,LPCWSTR param_2)
;
;
; XREF[1]:
;   FUN_005740b0 at 00574194
;
; Referenced Globals:
;   void* PTR_SetEnvironmentVariableA_00575590 = 00175f9e
;   void* PTR_SetEnvironmentVariableW_00575594 = 00175fb8
;   undefined2 DAT_005c1d11
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005635b0
;   FUN_005638d0
;   FUN_00570bd0
;   FUN_005713e0
;   SetEnvironmentVariableA
;   SetEnvironmentVariableW
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574570
        ;   Label: FUN_00574570
    PUSH ESI                            ; 00574571
    PUSH EDI                            ; 00574572
    PUSH EBP                            ; 00574573
    CMP word ptr [0x005c1d11],0x8000    ; 00574574 | DAT_005c1d11
    JNC 0x00574595                      ; 0057457d
        ;   XREF to: 00574595 (CONDITIONAL_JUMP)  ; LAB_00574595
    MOV EDX,dword ptr [ESP + 0x18]      ; 0057457f
    PUSH EDX                            ; 00574583
    MOV EBX,dword ptr [ESP + 0x18]      ; 00574584
    PUSH EBX                            ; 00574588
    CALL dword ptr CS:[0x575594]        ; 00574589 | PTR_SetEnvironmentVariableW_00575594
    POP EBP                             ; 00574590
    POP EDI                             ; 00574591
    POP ESI                             ; 00574592
    POP EBX                             ; 00574593
    RET                                 ; 00574594
    MOV EDX,dword ptr [ESP + 0x14]      ; 00574595
        ;   Label: LAB_00574595
    PUSH EDX                            ; 00574599
    CALL FUN_005713e0                   ; 0057459a
        ;   XREF to: 005713e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005713e0()
    ADD EAX,EAX                         ; 0057459f
    ADD ESP,0x4                         ; 005745a1
    LEA ESI,[EAX + 0x1]                 ; 005745a4
    PUSH ESI                            ; 005745a7
    CALL crt_memory.c_malloc_FUN_005635b0 ; 005745a8
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    MOV EDI,EAX                         ; 005745ad
    ADD ESP,0x4                         ; 005745af
    MOV EBP,EAX                         ; 005745b2
    TEST EAX,EAX                        ; 005745b4
    JZ 0x0057466d                       ; 005745b6
        ;   XREF to: 0057466d (CONDITIONAL_JUMP)  ; LAB_0057466d
    MOV EBX,dword ptr [ESP + 0x18]      ; 005745bc
    TEST EBX,EBX                        ; 005745c0
    JZ 0x005745f1                       ; 005745c2
        ;   XREF to: 005745f1 (CONDITIONAL_JUMP)  ; LAB_005745f1
    PUSH EBX                            ; 005745c4
    CALL FUN_005713e0                   ; 005745c5
        ;   XREF to: 005713e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005713e0()
    ADD EAX,EAX                         ; 005745ca
    ADD ESP,0x4                         ; 005745cc
    LEA ESI,[EAX + 0x1]                 ; 005745cf
    PUSH ESI                            ; 005745d2
    CALL crt_memory.c_malloc_FUN_005635b0 ; 005745d3
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 005745d8
    MOV EBX,EAX                         ; 005745db
    TEST EAX,EAX                        ; 005745dd
    JNZ 0x005745f1                      ; 005745df
        ;   XREF to: 005745f1 (CONDITIONAL_JUMP)  ; LAB_005745f1
    PUSH EDI                            ; 005745e1
    CALL FUN_005638d0                   ; 005745e2
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 005745e7
    XOR EAX,EAX                         ; 005745ea
    POP EBP                             ; 005745ec
    POP EDI                             ; 005745ed
    POP ESI                             ; 005745ee
    POP EBX                             ; 005745ef
    RET                                 ; 005745f0
    PUSH ESI                            ; 005745f1
        ;   Label: LAB_005745f1
    MOV EDI,dword ptr [ESP + 0x18]      ; 005745f2
    PUSH EDI                            ; 005745f6
    PUSH EBP                            ; 005745f7
    CALL FUN_00570bd0                   ; 005745f8
        ;   XREF to: 00570bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00570bd0()
    ADD ESP,0xc                         ; 005745fd
    CMP EAX,-0x1                        ; 00574600
    JNZ 0x00574622                      ; 00574603
        ;   XREF to: 00574622 (CONDITIONAL_JUMP)  ; LAB_00574622
    PUSH EBP                            ; 00574605
    CALL FUN_005638d0                   ; 00574606
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 0057460b
    TEST EBX,EBX                        ; 0057460e
    JZ 0x0057461b                       ; 00574610
        ;   XREF to: 0057461b (CONDITIONAL_JUMP)  ; LAB_0057461b
    PUSH EBX                            ; 00574612
    CALL FUN_005638d0                   ; 00574613
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 00574618
    XOR EAX,EAX                         ; 0057461b
        ;   Label: LAB_0057461b
    POP EBP                             ; 0057461d
    POP EDI                             ; 0057461e
    POP ESI                             ; 0057461f
    POP EBX                             ; 00574620
    RET                                 ; 00574621
    TEST EBX,EBX                        ; 00574622
        ;   Label: LAB_00574622
    JZ 0x0057464a                       ; 00574624
        ;   XREF to: 0057464a (CONDITIONAL_JUMP)  ; LAB_0057464a
    PUSH ESI                            ; 00574626
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00574627
    PUSH EAX                            ; 0057462b
    PUSH EBX                            ; 0057462c
    CALL FUN_00570bd0                   ; 0057462d
        ;   XREF to: 00570bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00570bd0()
    ADD ESP,0xc                         ; 00574632
    CMP EAX,-0x1                        ; 00574635
    JNZ 0x0057464a                      ; 00574638
        ;   XREF to: 0057464a (CONDITIONAL_JUMP)  ; LAB_0057464a
    PUSH EBX                            ; 0057463a
    CALL FUN_005638d0                   ; 0057463b
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 00574640
    XOR EAX,EAX                         ; 00574643
    POP EBP                             ; 00574645
    POP EDI                             ; 00574646
    POP ESI                             ; 00574647
    POP EBX                             ; 00574648
    RET                                 ; 00574649
    PUSH EBX                            ; 0057464a
        ;   Label: LAB_0057464a
    PUSH EBP                            ; 0057464b
    CALL dword ptr CS:[0x575590]        ; 0057464c | PTR_SetEnvironmentVariableA_00575590
    PUSH EBP                            ; 00574653
    MOV ESI,EAX                         ; 00574654
    CALL FUN_005638d0                   ; 00574656
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 0057465b
    TEST EBX,EBX                        ; 0057465e
    JZ 0x0057466b                       ; 00574660
        ;   XREF to: 0057466b (CONDITIONAL_JUMP)  ; LAB_0057466b
    PUSH EBX                            ; 00574662
    CALL FUN_005638d0                   ; 00574663
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 00574668
    MOV EAX,ESI                         ; 0057466b
        ;   Label: LAB_0057466b
    POP EBP                             ; 0057466d
        ;   Label: LAB_0057466d
    POP EDI                             ; 0057466e
    POP ESI                             ; 0057466f
    POP EBX                             ; 00574670
    RET                                 ; 00574671

