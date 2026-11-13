; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_005823a0(int param_1,int param_2,UINT_PTR param_3)
;
;
; XREF[1]:
;   wincore_winrun.cpp_FUN_00582830 at 005828c2
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   wincore_winrun.cpp_FUN_005824b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005823a0
        ;   Label: wincore_winrun.cpp_FUN_005823a0
    PUSH ESI                            ; 005823a1
    PUSH EDI                            ; 005823a2
    SUB ESP,0x194                       ; 005823a3
    MOV EDI,dword ptr [ESP + 0x1a4]     ; 005823a9
    MOV ESI,dword ptr [ESP + 0x1a8]     ; 005823b0
    PUSH EDI                            ; 005823b7
    IMUL EBX,EDI,0xac                   ; 005823b8
    CALL wincore_winrun.cpp_FUN_005824b0 ; 005823be
        ;   XREF to: 005824b0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005824b0()
    ADD ESP,0x4                         ; 005823c3
    ADD EBX,0x2d22c24                   ; 005823c6
    PUSH 0x10                           ; 005823cc
    MOV EDX,dword ptr [ESP + 0x1b0]     ; 005823ce
    MOV dword ptr [EBX],ESI             ; 005823d5
    PUSH 0x0                            ; 005823d7
    MOV dword ptr [EDI*0x4 + 0x2d22ed4],EDX ; 005823d9
    LEA EAX,[EBX + 0xc]                 ; 005823e0
    MOV dword ptr [EBX + 0x4],0x1       ; 005823e3
    PUSH EAX                            ; 005823ea
    MOV dword ptr [EBX + 0x8],0x0       ; 005823eb
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005823f2
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005823f7
    MOV dword ptr [EBX + 0x1c],0x0      ; 005823fa
    TEST ESI,ESI                        ; 00582401
    JBE 0x0058240a                      ; 00582403
        ;   XREF to: 0058240a (CONDITIONAL_JUMP)  ; LAB_0058240a
    CMP ESI,0x4                         ; 00582405
    JNZ 0x00582414                      ; 00582408
        ;   XREF to: 00582414 (CONDITIONAL_JUMP)  ; LAB_00582414
    ADD ESP,0x194                       ; 0058240a
        ;   Label: LAB_0058240a
    POP EDI                             ; 00582410
    POP ESI                             ; 00582411
    POP EBX                             ; 00582412
    RET                                 ; 00582413
    PUSH 0x4                            ; 00582414
        ;   Label: LAB_00582414
    PUSH 0x0                            ; 00582416
    LEA EAX,[ESP + 0x8]                 ; 00582418
    PUSH EAX                            ; 0058241c
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0058241d
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00582422
    PUSH 0x194                          ; 00582425
    LEA EAX,[ESP + 0x4]                 ; 0058242a
    PUSH EAX                            ; 0058242e
    MOV EDX,dword ptr [ESP + 0x1b4]     ; 0058242f
    PUSH EDX                            ; 00582436
    CALL dword ptr CS:[0x5b343c]        ; 00582437
    TEST EAX,EAX                        ; 0058243e
    JNZ 0x00582491                      ; 00582440
        ;   XREF to: 00582491 (CONDITIONAL_JUMP)  ; LAB_00582491
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00582442
    MOV dword ptr [EBX + 0xc],0x1       ; 00582446
    MOV dword ptr [EBX + 0x10],0x1      ; 0058244d
    MOV dword ptr [EBX + 0x8],EAX       ; 00582454
    TEST byte ptr [ESP + 0x60],0x1      ; 00582457
    SETNZ AL                            ; 0058245c
    AND EAX,0xff                        ; 0058245f
    MOV dword ptr [EBX + 0x14],EAX      ; 00582464
    TEST byte ptr [ESP + 0x60],0x2      ; 00582467
    SETNZ AL                            ; 0058246c
    AND EAX,0xff                        ; 0058246f
    MOV dword ptr [EBX + 0x18],EAX      ; 00582474
    TEST byte ptr [ESP + 0x60],0x10     ; 00582477
    SETNZ AL                            ; 0058247c
    AND EAX,0xff                        ; 0058247f
    MOV dword ptr [EBX + 0x1c],EAX      ; 00582484
    ADD ESP,0x194                       ; 00582487
    POP EDI                             ; 0058248d
    POP ESI                             ; 0058248e
    POP EBX                             ; 0058248f
    RET                                 ; 00582490
    IMUL EDI,EDI,0xac                   ; 00582491
        ;   Label: LAB_00582491
    XOR ECX,ECX                         ; 00582497
    MOV dword ptr [EDI + 0x2d22c28],ECX ; 00582499
    ADD ESP,0x194                       ; 0058249f
    POP EDI                             ; 005824a5
    POP ESI                             ; 005824a6
    POP EBX                             ; 005824a7
    RET                                 ; 005824a8

