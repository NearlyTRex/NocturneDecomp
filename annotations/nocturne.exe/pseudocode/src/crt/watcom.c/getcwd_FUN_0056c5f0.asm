; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_watcom_c_getcwd_FUN_0056c5f0(char *buffer,SIZE_T size)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; SIZE_T           Stack[0x8]:4   size
;
; XREF[4]:
;   crt_io.c_getFileStat_FUN_0056c864 at 0056c8b7
;   crt_io.c_getTempDirectory_FUN_005687bc at 00568828
;   crt_stdlib.c__fullpath_FUN_00565d00 at 00565d49
;   crt_watcom.c_getcwd_FUN_0056c5f0 at 00566440
;
; Referenced Globals:
;   void* PTR_GetCurrentDirectoryA_005754f4 = 00175ca6
;
; Called Functions:
;   crt_errno.c___set_errno_FUN_0056c73c
;   crt_errno.c_setErrno_FUN_00568e80
;   crt_memory.c_malloc_FUN_005635b0
;   GetCurrentDirectoryA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056c5f0
        ;   Label: crt_watcom.c_getcwd_FUN_0056c5f0
    PUSH ESI                            ; 0056c5f1
    PUSH EDI                            ; 0056c5f2
    SUB ESP,0x104                       ; 0056c5f3
    MOV EBX,dword ptr [ESP + 0x114]     ; 0056c5f9
    MOV ESI,dword ptr [ESP + 0x118]     ; 0056c600
    MOV EAX,ESP                         ; 0056c607
    PUSH EAX                            ; 0056c609
    PUSH 0x104                          ; 0056c60a
    CALL dword ptr CS:[0x5754f4]        ; 0056c60f | PTR_GetCurrentDirectoryA_005754f4
    MOV EDI,EAX                         ; 0056c616
    TEST EAX,EAX                        ; 0056c618
    JNZ 0x0056c625                      ; 0056c61a
        ;   XREF to: 0056c625 (CONDITIONAL_JUMP)  ; LAB_0056c625
    CALL crt_errno.c___set_errno_FUN_0056c73c ; 0056c61c
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_0056c73c()
    XOR EAX,EAX                         ; 0056c621
    JMP 0x0056c68e                      ; 0056c623
        ;   XREF to: 0056c68e (UNCONDITIONAL_JUMP)  ; LAB_0056c68e
    TEST EBX,EBX                        ; 0056c625
        ;   Label: LAB_0056c625
    JNZ 0x0056c655                      ; 0056c627
        ;   XREF to: 0056c655 (CONDITIONAL_JUMP)  ; LAB_0056c655
    INC EAX                             ; 0056c629
    CMP ESI,EAX                         ; 0056c62a
    JBE 0x0056c630                      ; 0056c62c
        ;   XREF to: 0056c630 (CONDITIONAL_JUMP)  ; LAB_0056c630
    MOV EAX,ESI                         ; 0056c62e
    PUSH EAX                            ; 0056c630
        ;   Label: LAB_0056c630
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0056c631
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 0056c636
    MOV EBX,EAX                         ; 0056c639
    TEST EAX,EAX                        ; 0056c63b
    JNZ 0x0056c66f                      ; 0056c63d
        ;   XREF to: 0056c66f (CONDITIONAL_JUMP)  ; LAB_0056c66f
    PUSH 0x5                            ; 0056c63f
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 0056c641
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    ADD ESP,0x4                         ; 0056c646
    XOR EAX,EAX                         ; 0056c649
    ADD ESP,0x104                       ; 0056c64b
    POP EDI                             ; 0056c651
    POP ESI                             ; 0056c652
    POP EBX                             ; 0056c653
    RET                                 ; 0056c654
    CMP EAX,ESI                         ; 0056c655
        ;   Label: LAB_0056c655
    JBE 0x0056c66f                      ; 0056c657
        ;   XREF to: 0056c66f (CONDITIONAL_JUMP)  ; LAB_0056c66f
    PUSH 0xe                            ; 0056c659
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 0056c65b
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    ADD ESP,0x4                         ; 0056c660
    XOR EAX,EAX                         ; 0056c663
    ADD ESP,0x104                       ; 0056c665
    POP EDI                             ; 0056c66b
    POP ESI                             ; 0056c66c
    POP EBX                             ; 0056c66d
    RET                                 ; 0056c66e
    LEA ECX,[EDI + 0x1]                 ; 0056c66f
        ;   Label: LAB_0056c66f
    MOV ESI,ESP                         ; 0056c672
    MOV EDI,EBX                         ; 0056c674
    PUSH ES                             ; 0056c676
    MOV AX,DS                           ; 0056c677
    MOV ES,AX                           ; 0056c679
    PUSH EDI                            ; 0056c67b
    MOV EAX,ECX                         ; 0056c67c
    SHR ECX,0x2                         ; 0056c67e
    MOVSD.REP ES:EDI,ESI                ; 0056c681
    MOV CL,AL                           ; 0056c683
    AND CL,0x3                          ; 0056c685
    MOVSB.REP ES:EDI,ESI                ; 0056c688
    POP EDI                             ; 0056c68a
    POP ES                              ; 0056c68b
    MOV EAX,EBX                         ; 0056c68c
    ADD ESP,0x104                       ; 0056c68e
        ;   Label: LAB_0056c68e
    POP EDI                             ; 0056c694
    POP ESI                             ; 0056c695
    POP EBX                             ; 0056c696
    RET                                 ; 0056c697

