; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_ReadFileBytesMaybe_FUN_005733e0(uint param_1,char *param_2,DWORD param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_fstream.cpp_filebuf_underflow_FUN_005721d7 at 0057228f
;
; Referenced Globals:
;   void* PTR_GetLastError_0057551c = 00175d70
;   void* PTR_ReadFile_0057557c = 00175f40
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4 = 005671e4
;   undefined4 DAT_005c1d54
;   undefined4 DAT_005c1d7c
;   undefined4 DAT_005c1f54
;   undefined4 DAT_005c1f90
;
; Called Functions:
;   crt_errno.c___set_errno_FUN_0056c73c
;   crt_errno.c_setErrno_FUN_00568e80
;   crt_stdio.c_lseek_FUN_005689c0
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   crt_unknown.c_FUN_0056f220
;   GetLastError
;   ReadFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005733e0
        ;   Label: crt_unknown.c_ReadFileBytesMaybe_FUN_005733e0
    PUSH ESI                            ; 005733e1
    PUSH EDI                            ; 005733e2
    PUSH EBP                            ; 005733e3
    SUB ESP,0x10                        ; 005733e4
    MOV EBP,dword ptr [ESP + 0x28]      ; 005733e7
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005733eb
    MOV EDX,dword ptr [ESP + 0x24]      ; 005733ef
    TEST EDX,EDX                        ; 005733f3
    JL 0x005733ff                       ; 005733f5
        ;   XREF to: 005733ff (CONDITIONAL_JUMP)  ; LAB_005733ff
    CMP EDX,dword ptr [0x005c1f90]      ; 005733f7 | DAT_005c1f90
    JBE 0x00573413                      ; 005733fd
        ;   XREF to: 00573413 (CONDITIONAL_JUMP)  ; LAB_00573413
    PUSH 0x4                            ; 005733ff
        ;   Label: LAB_005733ff
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 00573401
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    MOV EAX,0xffffffff                  ; 00573406
    ADD ESP,0x4                         ; 0057340b
    JMP 0x005735e1                      ; 0057340e
        ;   XREF to: 005735e1 (UNCONDITIONAL_JUMP)  ; LAB_005735e1
    MOV EAX,[0x005c1f54]                ; 00573413 | DAT_005c1f54
        ;   Label: LAB_00573413
    MOV EAX,dword ptr [EAX + EDX*0x4]   ; 00573418
    PUSH EDX                            ; 0057341b
    MOV dword ptr [ESP + 0x10],EAX      ; 0057341c
    CALL crt_unknown.c_FUN_0056f220     ; 00573420
        ;   XREF to: 0056f220 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056f220()
    ADD ESP,0x4                         ; 00573425
    MOV EBX,EAX                         ; 00573428
    MOV dword ptr [ESP + 0x8],EAX       ; 0057342a
    TEST EAX,EAX                        ; 0057342e
    JNZ 0x00573449                      ; 00573430
        ;   XREF to: 00573449 (CONDITIONAL_JUMP)  ; LAB_00573449
    PUSH 0x4                            ; 00573432
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 00573434
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    MOV EAX,0xffffffff                  ; 00573439
    ADD ESP,0x4                         ; 0057343e
    ADD ESP,0x10                        ; 00573441
    POP EBP                             ; 00573444
    POP EDI                             ; 00573445
    POP ESI                             ; 00573446
    POP EBX                             ; 00573447
    RET                                 ; 00573448
    MOV ESI,dword ptr [ESP + 0x24]      ; 00573449
        ;   Label: LAB_00573449
    PUSH ESI                            ; 0057344d
    CALL dword ptr [0x005c1ac0]         ; 0057344e | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0
    ADD ESP,0x4                         ; 00573454
    TEST BL,0x1                         ; 00573457
    JNZ 0x0057347d                      ; 0057345a
        ;   XREF to: 0057347d (CONDITIONAL_JUMP)  ; LAB_0057347d
    PUSH 0x6                            ; 0057345c
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 0057345e
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    ADD ESP,0x4                         ; 00573463
    PUSH ESI                            ; 00573466
    CALL dword ptr [0x005c1ac4]         ; 00573467 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    MOV EAX,0xffffffff                  ; 0057346d
    ADD ESP,0x4                         ; 00573472
    ADD ESP,0x10                        ; 00573475
    POP EBP                             ; 00573478
    POP EDI                             ; 00573479
    POP ESI                             ; 0057347a
    POP EBX                             ; 0057347b
    RET                                 ; 0057347c
    TEST BL,0x40                        ; 0057347d
        ;   Label: LAB_0057347d
    JZ 0x005734f7                       ; 00573480
        ;   XREF to: 005734f7 (CONDITIONAL_JUMP)  ; LAB_005734f7
    CMP dword ptr [0x005c1d7c],0x0      ; 00573482 | DAT_005c1d7c
    JZ 0x005734ac                       ; 00573489
        ;   XREF to: 005734ac (CONDITIONAL_JUMP)  ; LAB_005734ac
    PUSH ESI                            ; 0057348b
    CALL dword ptr [0x005c1d54]         ; 0057348c | DAT_005c1d54
    ADD ESP,0x4                         ; 00573492
    TEST EAX,EAX                        ; 00573495
    JZ 0x005734ac                       ; 00573497
        ;   XREF to: 005734ac (CONDITIONAL_JUMP)  ; LAB_005734ac
    PUSH EDI                            ; 00573499
    PUSH EBP                            ; 0057349a
    PUSH EAX                            ; 0057349b
    CALL dword ptr [0x005c1d7c]         ; 0057349c | DAT_005c1d7c
    ADD ESP,0xc                         ; 005734a2
    MOV ESI,EAX                         ; 005734a5
    JMP 0x005735d1                      ; 005734a7
        ;   XREF to: 005735d1 (UNCONDITIONAL_JUMP)  ; LAB_005735d1
    PUSH 0x0                            ; 005734ac
        ;   Label: LAB_005734ac
    LEA EAX,[ESP + 0x4]                 ; 005734ae
    PUSH EAX                            ; 005734b2
    PUSH EDI                            ; 005734b3
    PUSH EBP                            ; 005734b4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005734b5
    PUSH EBX                            ; 005734b9
    CALL dword ptr CS:[0x57557c]        ; 005734ba | PTR_ReadFile_0057557c
    MOV ESI,dword ptr [ESP]             ; 005734c1
    TEST EAX,EAX                        ; 005734c4
    JNZ 0x005735d1                      ; 005734c6
        ;   XREF to: 005735d1 (CONDITIONAL_JUMP)  ; LAB_005735d1
    MOV ECX,dword ptr [ESP + 0x24]      ; 005734cc
    PUSH ECX                            ; 005734d0
    CALL dword ptr [0x005c1ac4]         ; 005734d1 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 005734d7
    CALL dword ptr CS:[0x57551c]        ; 005734da | PTR_GetLastError_0057551c
    CMP EAX,0x6d                        ; 005734e1
    JZ 0x005735df                       ; 005734e4
        ;   XREF to: 005735df (CONDITIONAL_JUMP)  ; LAB_005735df
    CALL crt_errno.c___set_errno_FUN_0056c73c ; 005734ea
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_0056c73c()
        ;   Label: LAB_005734ea
    ADD ESP,0x10                        ; 005734ef
    POP EBP                             ; 005734f2
    POP EDI                             ; 005734f3
    POP ESI                             ; 005734f4
    POP EBX                             ; 005734f5
    RET                                 ; 005734f6
    MOV dword ptr [ESP + 0x4],EDI       ; 005734f7
        ;   Label: LAB_005734f7
    XOR ESI,ESI                         ; 005734fb
    CMP dword ptr [0x005c1d7c],0x0      ; 005734fd | DAT_005c1d7c
        ;   Label: LAB_005734fd
    JZ 0x0057352d                       ; 00573504
        ;   XREF to: 0057352d (CONDITIONAL_JUMP)  ; LAB_0057352d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00573506
    PUSH EAX                            ; 0057350a
    CALL dword ptr [0x005c1d54]         ; 0057350b | DAT_005c1d54
    ADD ESP,0x4                         ; 00573511
    TEST EAX,EAX                        ; 00573514
    JZ 0x0057352d                       ; 00573516
        ;   XREF to: 0057352d (CONDITIONAL_JUMP)  ; LAB_0057352d
    MOV EDI,dword ptr [ESP + 0x4]       ; 00573518
    PUSH EDI                            ; 0057351c
    PUSH EBP                            ; 0057351d
    PUSH EAX                            ; 0057351e
    CALL dword ptr [0x005c1d7c]         ; 0057351f | DAT_005c1d7c
    ADD ESP,0xc                         ; 00573525
    MOV dword ptr [ESP],EAX             ; 00573528
    JMP 0x00573569                      ; 0057352b
        ;   XREF to: 00573569 (UNCONDITIONAL_JUMP)  ; LAB_00573569
    PUSH 0x0                            ; 0057352d
        ;   Label: LAB_0057352d
    LEA EAX,[ESP + 0x4]                 ; 0057352f
    PUSH EAX                            ; 00573533
    MOV EDX,dword ptr [ESP + 0xc]       ; 00573534
    PUSH EDX                            ; 00573538
    PUSH EBP                            ; 00573539
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0057353a
    PUSH EBX                            ; 0057353e
    CALL dword ptr CS:[0x57557c]        ; 0057353f | PTR_ReadFile_0057557c
    TEST EAX,EAX                        ; 00573546
    JNZ 0x00573569                      ; 00573548
        ;   XREF to: 00573569 (CONDITIONAL_JUMP)  ; LAB_00573569
    MOV ECX,dword ptr [ESP + 0x24]      ; 0057354a
    PUSH ECX                            ; 0057354e
    CALL dword ptr [0x005c1ac4]         ; 0057354f | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 00573555
    CALL dword ptr CS:[0x57551c]        ; 00573558 | PTR_GetLastError_0057551c
    CMP EAX,0x6d                        ; 0057355f
    JNZ 0x005734ea                      ; 00573562
        ;   XREF to: 005734ea (CONDITIONAL_JUMP)  ; LAB_005734ea
    JMP 0x005735df                      ; 00573564
        ;   XREF to: 005735df (UNCONDITIONAL_JUMP)  ; LAB_005735df
    CMP dword ptr [ESP],0x0             ; 00573569
        ;   Label: LAB_00573569
    JZ 0x005735d1                       ; 0057356d
        ;   XREF to: 005735d1 (CONDITIONAL_JUMP)  ; LAB_005735d1
    MOV ECX,dword ptr [ESP]             ; 0057356f
    MOV EAX,EBP                         ; 00573572
    XOR EBX,EBX                         ; 00573574
    XOR EDX,EDX                         ; 00573576
    TEST ECX,ECX                        ; 00573578
    JBE 0x005735b7                      ; 0057357a
        ;   XREF to: 005735b7 (CONDITIONAL_JUMP)  ; LAB_005735b7
    MOV CL,byte ptr [EAX]               ; 0057357c
        ;   Label: LAB_0057357c
    CMP CL,0x1a                         ; 0057357e
    JNZ 0x0057359e                      ; 00573581
        ;   XREF to: 0057359e (CONDITIONAL_JUMP)  ; LAB_0057359e
    MOV ECX,dword ptr [ESP]             ; 00573583
    MOV EAX,EBX                         ; 00573586
    SUB EAX,ECX                         ; 00573588
    PUSH 0x1                            ; 0057358a
    INC EAX                             ; 0057358c
    PUSH EAX                            ; 0057358d
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0057358e
    PUSH EDI                            ; 00573592
    CALL crt_stdio.c_lseek_FUN_005689c0 ; 00573593
        ;   XREF to: 005689c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_005689c0(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 00573598
    PUSH EDI                            ; 0057359b
    JMP 0x005735d6                      ; 0057359c
        ;   XREF to: 005735d6 (UNCONDITIONAL_JUMP)  ; LAB_005735d6
    CMP CL,0xd                          ; 0057359e
        ;   Label: LAB_0057359e
    JZ 0x005735ae                       ; 005735a1
        ;   XREF to: 005735ae (CONDITIONAL_JUMP)  ; LAB_005735ae
    MOV ECX,EDX                         ; 005735a3
    INC ESI                             ; 005735a5
    LEA EDI,[ECX + EBP*0x1]             ; 005735a6
    MOV CL,byte ptr [EAX]               ; 005735a9
    INC EDX                             ; 005735ab
    MOV byte ptr [EDI],CL               ; 005735ac
    MOV EDI,dword ptr [ESP]             ; 005735ae
        ;   Label: LAB_005735ae
    INC EBX                             ; 005735b1
    INC EAX                             ; 005735b2
    CMP EBX,EDI                         ; 005735b3
    JC 0x0057357c                       ; 005735b5
        ;   XREF to: 0057357c (CONDITIONAL_JUMP)  ; LAB_0057357c
    SUB dword ptr [ESP + 0x4],EDX       ; 005735b7
        ;   Label: LAB_005735b7
    MOV AH,byte ptr [ESP + 0x9]         ; 005735bb
    ADD EBP,EDX                         ; 005735bf
    TEST AH,0x20                        ; 005735c1
    JNZ 0x005735d1                      ; 005735c4
        ;   XREF to: 005735d1 (CONDITIONAL_JUMP)  ; LAB_005735d1
    CMP dword ptr [ESP + 0x4],0x0       ; 005735c6
    JNZ 0x005734fd                      ; 005735cb
        ;   XREF to: 005734fd (CONDITIONAL_JUMP)  ; LAB_005734fd
    MOV EAX,dword ptr [ESP + 0x24]      ; 005735d1
        ;   Label: LAB_005735d1
    PUSH EAX                            ; 005735d5
    CALL dword ptr [0x005c1ac4]         ; 005735d6 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
        ;   Label: LAB_005735d6
    ADD ESP,0x4                         ; 005735dc
    MOV EAX,ESI                         ; 005735df
        ;   Label: LAB_005735df
    ADD ESP,0x10                        ; 005735e1
        ;   Label: LAB_005735e1
    POP EBP                             ; 005735e4
    POP EDI                             ; 005735e5
    POP ESI                             ; 005735e6
    POP EBX                             ; 005735e7
    RET                                 ; 005735e8

