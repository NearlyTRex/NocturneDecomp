; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_004303d0(undefined4 *param_1,int param_2,uint param_3,uint param_4)
;
;
; Referenced Globals:
;   TerminatedCString s_Unable_to_allocate_u_byt_0057aaab
;   TerminatedCString s_cockpit_ckptutil_c_0057aae5
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_memory.c_free_FUN_005638d0
;   crt_memory.c_malloc_FUN_005635b0
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004303d0
        ;   Label: cockpit_ckptutil.c_FUN_004303d0
    PUSH ESI                            ; 004303d1
    PUSH EDI                            ; 004303d2
    PUSH EBP                            ; 004303d3
    SUB ESP,0x68                        ; 004303d4
    MOV EBP,dword ptr [ESP + 0x88]      ; 004303d7
    MOV EAX,dword ptr [ESP + 0x80]      ; 004303de
    IMUL EAX,EBP                        ; 004303e5
    MOV EBX,dword ptr [ESP + 0x80]      ; 004303e8
    IMUL EBX,dword ptr [ESP + 0x84]     ; 004303ef
    IMUL EBX,EBP                        ; 004303f7
    PUSH EBX                            ; 004303fa
    MOV dword ptr [ESP + 0x64],EAX      ; 004303fb
    CALL crt_memory.c_malloc_FUN_005635b0 ; 004303ff
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 00430404
    MOV dword ptr [ESP + 0x54],EAX      ; 00430407
    TEST EAX,EAX                        ; 0043040b
    JZ 0x004304bc                       ; 0043040d
        ;   XREF to: 004304bc (CONDITIONAL_JUMP)  ; LAB_004304bc
    CMP EBP,0x1                         ; 00430413
        ;   Label: LAB_00430413
    JNZ 0x004304f5                      ; 00430416
        ;   XREF to: 004304f5 (CONDITIONAL_JUMP)  ; LAB_004304f5
    MOV EAX,dword ptr [ESP + 0x84]      ; 0043041c
    XOR ESI,ESI                         ; 00430423
    TEST EAX,EAX                        ; 00430425
    JBE 0x0043047d                      ; 00430427
        ;   XREF to: 0043047d (CONDITIONAL_JUMP)  ; LAB_0043047d
    MOV EAX,dword ptr [ESP + 0x60]      ; 00430429
    MOV dword ptr [ESP + 0x50],EAX      ; 0043042d
    IMUL EDI,EAX,0x0                    ; 00430431
    MOV EAX,dword ptr [ESP + 0x84]      ; 00430434
        ;   Label: LAB_00430434
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0043043b
    MOV EBX,dword ptr [ESP + 0x54]      ; 0043043f
    SUB EAX,ESI                         ; 00430443
    MOV ECX,dword ptr [ESP + 0x60]      ; 00430445
    DEC EAX                             ; 00430449
    ADD EDX,EDI                         ; 0043044a
    ADD EBX,EAX                         ; 0043044c
    XOR EAX,EAX                         ; 0043044e
    TEST ECX,ECX                        ; 00430450
    JBE 0x0043046b                      ; 00430452
        ;   XREF to: 0043046b (CONDITIONAL_JUMP)  ; LAB_0043046b
    MOV CL,byte ptr [EDX]               ; 00430454
        ;   Label: LAB_00430454
    MOV byte ptr [EBX],CL               ; 00430456
    MOV ECX,dword ptr [ESP + 0x84]      ; 00430458
    INC EAX                             ; 0043045f
    ADD EBX,ECX                         ; 00430460
    MOV ECX,dword ptr [ESP + 0x60]      ; 00430462
    INC EDX                             ; 00430466
    CMP EAX,ECX                         ; 00430467
    JC 0x00430454                       ; 00430469
        ;   XREF to: 00430454 (CONDITIONAL_JUMP)  ; LAB_00430454
    MOV EBX,dword ptr [ESP + 0x50]      ; 0043046b
        ;   Label: LAB_0043046b
    MOV EAX,dword ptr [ESP + 0x84]      ; 0043046f
    INC ESI                             ; 00430476
    ADD EDI,EBX                         ; 00430477
    CMP ESI,EAX                         ; 00430479
    JC 0x00430434                       ; 0043047b
        ;   XREF to: 00430434 (CONDITIONAL_JUMP)  ; LAB_00430434
    MOV ECX,dword ptr [ESP + 0x80]      ; 0043047d
        ;   Label: LAB_0043047d
    IMUL ECX,dword ptr [ESP + 0x84]     ; 00430484
    IMUL ECX,EBP                        ; 0043048c
    MOV ESI,dword ptr [ESP + 0x54]      ; 0043048f
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00430493
    PUSH EDI                            ; 00430497
    MOV EAX,ECX                         ; 00430498
    SHR ECX,0x2                         ; 0043049a
    MOVSD.REP ES:EDI,ESI                ; 0043049d
    MOV CL,AL                           ; 0043049f
    AND CL,0x3                          ; 004304a1
    MOVSB.REP ES:EDI,ESI                ; 004304a4
    POP EDI                             ; 004304a6
    MOV ESI,dword ptr [ESP + 0x54]      ; 004304a7
    PUSH ESI                            ; 004304ab
    CALL crt_memory.c_free_FUN_005638d0 ; 004304ac
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 004304b1
    ADD ESP,0x68                        ; 004304b4
    POP EBP                             ; 004304b7
    POP EDI                             ; 004304b8
    POP ESI                             ; 004304b9
    POP EBX                             ; 004304ba
    RET                                 ; 004304bb
    PUSH EBX                            ; 004304bc
        ;   Label: LAB_004304bc
    PUSH 0x57aaab                       ; 004304bd | = "Unable to allocate %u bytes for tempo..."
    LEA EAX,[ESP + 0x8]                 ; 004304c2
    PUSH EAX                            ; 004304c6
    MOV EBX,0x802                       ; 004304c7
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004304cc
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004304d1
    MOV EAX,ESP                         ; 004304d4
    MOV ECX,0x57aae5                    ; 004304d6 | = "..\\cockpit\\ckptutil.c"
    PUSH EAX                            ; 004304db
    MOV dword ptr [0x01cc4804],EBX      ; 004304dc | g_CurrentLineNumber
    MOV dword ptr [0x01cc4800],ECX      ; 004304e2 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004304e8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004304ed
    JMP 0x00430413                      ; 004304f0
        ;   XREF to: 00430413 (UNCONDITIONAL_JUMP)  ; LAB_00430413
    XOR ESI,ESI                         ; 004304f5
        ;   Label: LAB_004304f5
    MOV EDI,dword ptr [ESP + 0x84]      ; 004304f7
    MOV dword ptr [ESP + 0x58],ESI      ; 004304fe
    TEST EDI,EDI                        ; 00430502
    JBE 0x0043047d                      ; 00430504
        ;   XREF to: 0043047d (CONDITIONAL_JUMP)  ; LAB_0043047d
    MOV EAX,EDI                         ; 0043050a
    IMUL EAX,EBP                        ; 0043050c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0043050f
    MOV EDX,dword ptr [ESP + 0x58]      ; 00430513
        ;   Label: LAB_00430513
    IMUL EDX,dword ptr [ESP + 0x60]     ; 00430517
    MOV EAX,dword ptr [ESP + 0x84]      ; 0043051c
    SUB EAX,dword ptr [ESP + 0x58]      ; 00430523
    DEC EAX                             ; 00430527
    IMUL EAX,EBP                        ; 00430528
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0043052b
    MOV EBX,dword ptr [ESP + 0x54]      ; 0043052f
    MOV ECX,dword ptr [ESP + 0x60]      ; 00430533
    ADD EBX,EAX                         ; 00430537
    XOR EAX,EAX                         ; 00430539
    ADD EDX,ESI                         ; 0043053b
    MOV dword ptr [ESP + 0x64],EAX      ; 0043053d
    TEST ECX,ECX                        ; 00430541
    JBE 0x00430574                      ; 00430543
        ;   XREF to: 00430574 (CONDITIONAL_JUMP)  ; LAB_00430574
    MOV ECX,EBP                         ; 00430545
        ;   Label: LAB_00430545
    MOV ESI,EDX                         ; 00430547
    MOV EDI,EBX                         ; 00430549
    PUSH EDI                            ; 0043054b
    MOV EAX,ECX                         ; 0043054c
    SHR ECX,0x2                         ; 0043054e
    MOVSD.REP ES:EDI,ESI                ; 00430551
    MOV CL,AL                           ; 00430553
    AND CL,0x3                          ; 00430555
    MOVSB.REP ES:EDI,ESI                ; 00430558
    POP EDI                             ; 0043055a
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0043055b
    MOV EDI,dword ptr [ESP + 0x64]      ; 0043055f
    MOV ECX,dword ptr [ESP + 0x60]      ; 00430563
    ADD EDX,EBP                         ; 00430567
    INC EDI                             ; 00430569
    ADD EBX,ESI                         ; 0043056a
    MOV dword ptr [ESP + 0x64],EDI      ; 0043056c
    CMP EDI,ECX                         ; 00430570
    JC 0x00430545                       ; 00430572
        ;   XREF to: 00430545 (CONDITIONAL_JUMP)  ; LAB_00430545
    MOV EDX,dword ptr [ESP + 0x58]      ; 00430574
        ;   Label: LAB_00430574
    INC EDX                             ; 00430578
    MOV ECX,dword ptr [ESP + 0x84]      ; 00430579
    MOV dword ptr [ESP + 0x58],EDX      ; 00430580
    CMP EDX,ECX                         ; 00430584
    JNC 0x0043047d                      ; 00430586
        ;   XREF to: 0043047d (CONDITIONAL_JUMP)  ; LAB_0043047d
    JMP 0x00430513                      ; 0043058c
        ;   XREF to: 00430513 (UNCONDITIONAL_JUMP)  ; LAB_00430513

