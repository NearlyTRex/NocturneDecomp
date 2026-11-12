; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint engine_pod_cpp_FUN_0053c4c0(int param_1,int param_2)
;
;
; XREF[1]:
;   engine_pod.cpp_FUN_0053bfc0 at 0053c1a2
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_stdio.c_fopen_FUN_005c157c
;   crt_stdio.c_fseek_FUN_005c170c
;   engine_pod.cpp_crc32UpdateByte_FUN_0053b000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c4c0
        ;   Label: engine_pod.cpp_FUN_0053c4c0
    PUSH ESI                            ; 0053c4c1
    PUSH EDI                            ; 0053c4c2
    PUSH EBP                            ; 0053c4c3
    SUB ESP,0x4                         ; 0053c4c4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0053c4c7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0053c4cb
    TEST EDI,EDI                        ; 0053c4cf
    JL 0x0053c4db                       ; 0053c4d1
        ;   XREF to: 0053c4db (CONDITIONAL_JUMP)  ; LAB_0053c4db
    CMP EDI,dword ptr [EBX + 0x410]     ; 0053c4d3
    JL 0x0053c4fe                       ; 0053c4d9
        ;   XREF to: 0053c4fe (CONDITIONAL_JUMP)  ; LAB_0053c4fe
    MOV ECX,0x5ed95c                    ; 0053c4db
        ;   Label: LAB_0053c4db
    MOV ESI,0x401                       ; 0053c4e0
    PUSH 0x5ed96e                       ; 0053c4e5
    MOV dword ptr [0x01d1d400],ECX      ; 0053c4ea | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0053c4f0 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053c4f6
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0053c4fb
    PUSH 0x5ed99a                       ; 0053c4fe
        ;   Label: LAB_0053c4fe
    LEA ESI,[EBX + 0x4]                 ; 0053c503
    PUSH ESI                            ; 0053c506
    CALL crt_stdio.c_fopen_FUN_005c157c ; 0053c507
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005c157c()
    ADD ESP,0x8                         ; 0053c50c
    MOV dword ptr [ESP],EAX             ; 0053c50f
    TEST EAX,EAX                        ; 0053c512
    JNZ 0x0053c539                      ; 0053c514
        ;   XREF to: 0053c539 (CONDITIONAL_JUMP)  ; LAB_0053c539
    PUSH ESI                            ; 0053c516
    MOV EBP,0x5ed99d                    ; 0053c517
    MOV EAX,0x406                       ; 0053c51c
    PUSH 0x5ed9af                       ; 0053c521
    MOV dword ptr [0x01d1d400],EBP      ; 0053c526 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0053c52c | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053c531
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0053c536
    LEA EAX,[EDI*0x4 + 0x0]             ; 0053c539
        ;   Label: LAB_0053c539
    LEA ESI,[EDI + EAX*0x1]             ; 0053c540
    MOV EAX,dword ptr [EBX + 0x414]     ; 0053c543
    SHL ESI,0x2                         ; 0053c549
    PUSH 0x0                            ; 0053c54c
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x8] ; 0053c54e
    PUSH EDX                            ; 0053c552
    MOV ECX,dword ptr [ESP + 0x8]       ; 0053c553
    PUSH ECX                            ; 0053c557
    CALL crt_stdio.c_fseek_FUN_005c170c ; 0053c558
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005c170c()
    ADD ESP,0xc                         ; 0053c55d
    MOV EAX,dword ptr [EBX + 0x414]     ; 0053c560
    MOV EBP,dword ptr [ESP]             ; 0053c566
    MOV EDI,dword ptr [ESI + EAX*0x1 + 0x4] ; 0053c569
    XOR EBX,EBX                         ; 0053c56d
    MOV ESI,0xffffffff                  ; 0053c56f
    TEST EDI,EDI                        ; 0053c574
    JLE 0x0053c5a0                      ; 0053c576
        ;   XREF to: 0053c5a0 (CONDITIONAL_JUMP)  ; LAB_0053c5a0
    PUSH EBP                            ; 0053c578
        ;   Label: LAB_0053c578
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0053c579
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 0053c57e
    AND EAX,0xff                        ; 0053c581
    PUSH EAX                            ; 0053c586
    PUSH ESI                            ; 0053c587
    INC EBX                             ; 0053c588
    CALL engine_pod.cpp_crc32UpdateByte_FUN_0053b000 ; 0053c589
        ;   XREF to: 0053b000 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_0053b000(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 0053c58e
    MOV ESI,EAX                         ; 0053c591
    CMP EBX,EDI                         ; 0053c593
    JL 0x0053c578                       ; 0053c595
        ;   XREF to: 0053c578 (CONDITIONAL_JUMP)  ; LAB_0053c578
    LEA EAX,[EAX]                       ; 0053c597
    LEA EDX,[EDX]                       ; 0053c59d
    MOV EBX,dword ptr [ESP]             ; 0053c5a0
        ;   Label: LAB_0053c5a0
    PUSH EBX                            ; 0053c5a3
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0053c5a4
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0053c5a9
    MOV EAX,ESI                         ; 0053c5ac
    ADD ESP,0x4                         ; 0053c5ae
    POP EBP                             ; 0053c5b1
    POP EDI                             ; 0053c5b2
    POP ESI                             ; 0053c5b3
    POP EBX                             ; 0053c5b4
    RET                                 ; 0053c5b5

