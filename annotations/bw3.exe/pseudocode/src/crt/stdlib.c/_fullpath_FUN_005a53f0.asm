; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_stdlib_c__fullpath_FUN_005a53f0(char *buffer,char *path,SIZE_T buffer_size)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; char *           Stack[0x8]:4   path
; SIZE_T           Stack[0xc]:4   buffer_size
;
; XREF[3]:
;   crt_unknown.c_FUN_005a9aec at 005a9b37
;   crt_unknown.c_FUN_005aaed4 at 005aaf3d
;   engine_dosio.cpp_getFullPath_FUN_00465ff0 at 00466001
;
; Referenced Globals:
;   void* PTR_GetFullPathNameA_005b35ac = 001b3ef2
;   undefined4 DAT_005da6d8
;   undefined4 DAT_006e6f63
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005a92c0
;   crt_string.c__stricmp_FUN_005a3260
;   crt_unknown.c_FUN_005a3650
;   crt_unknown.c_FUN_005a3770
;   crt_unknown.c_FUN_005ab46c
;   crt_unknown.c_FUN_005acb10
;   GetFullPathNameA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a53f0
        ;   Label: crt_stdlib.c__fullpath_FUN_005a53f0
    PUSH ESI                            ; 005a53f1
    PUSH EDI                            ; 005a53f2
    PUSH EBP                            ; 005a53f3
    SUB ESP,0x4                         ; 005a53f4
    MOV EBX,dword ptr [ESP + 0x18]      ; 005a53f7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005a53fb
    MOV EDI,dword ptr [ESP + 0x20]      ; 005a53ff
    TEST EBX,EBX                        ; 005a5403
    JNZ 0x005a542e                      ; 005a5405
        ;   XREF to: 005a542e (CONDITIONAL_JUMP)  ; LAB_005a542e
    MOV EDI,0x104                       ; 005a5407
    PUSH EDI                            ; 005a540c
    CALL crt_unknown.c_FUN_005a3650     ; 005a540d
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005a5412
    MOV EBP,EAX                         ; 005a5415
    TEST EAX,EAX                        ; 005a5417
    JNZ 0x005a542c                      ; 005a5419
        ;   XREF to: 005a542c (CONDITIONAL_JUMP)  ; LAB_005a542c
    PUSH 0x5                            ; 005a541b
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005a541d
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005a5422
    XOR EAX,EAX                         ; 005a5425
    JMP 0x005a54a8                      ; 005a5427
        ;   XREF to: 005a54a8 (UNCONDITIONAL_JUMP)  ; LAB_005a54a8
    MOV EBX,EAX                         ; 005a542c
        ;   Label: LAB_005a542c
    TEST ESI,ESI                        ; 005a542e
        ;   Label: LAB_005a542e
    JZ 0x005a5437                       ; 005a5430
        ;   XREF to: 005a5437 (CONDITIONAL_JUMP)  ; LAB_005a5437
    CMP byte ptr [ESI],0x0              ; 005a5432
    JNZ 0x005a5449                      ; 005a5435
        ;   XREF to: 005a5449 (CONDITIONAL_JUMP)  ; LAB_005a5449
    PUSH EDI                            ; 005a5437
        ;   Label: LAB_005a5437
    PUSH EBX                            ; 005a5438
    CALL crt_unknown.c_FUN_005acb10     ; 005a5439
        ;   XREF to: 005acb10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005acb10()
    ADD ESP,0x8                         ; 005a543e
    ADD ESP,0x4                         ; 005a5441
    POP EBP                             ; 005a5444
    POP EDI                             ; 005a5445
    POP ESI                             ; 005a5446
    POP EBX                             ; 005a5447
    RET                                 ; 005a5448
    PUSH 0x5da6d8                       ; 005a5449 | DAT_005da6d8
        ;   Label: LAB_005a5449
    PUSH ESI                            ; 005a544e
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005a544f
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a5454
    TEST EAX,EAX                        ; 005a5457
    JNZ 0x005a5486                      ; 005a5459
        ;   XREF to: 005a5486 (CONDITIONAL_JUMP)  ; LAB_005a5486
    CMP EDI,0x4                         ; 005a545b
    JNC 0x005a547d                      ; 005a545e
        ;   XREF to: 005a547d (CONDITIONAL_JUMP)  ; LAB_005a547d
    PUSH EBP                            ; 005a5460
    CALL crt_unknown.c_FUN_005a3770     ; 005a5461
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 005a5466
    PUSH 0xe                            ; 005a5469
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005a546b
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005a5470
    XOR EAX,EAX                         ; 005a5473
    ADD ESP,0x4                         ; 005a5475
    POP EBP                             ; 005a5478
    POP EDI                             ; 005a5479
    POP ESI                             ; 005a547a
    POP EBX                             ; 005a547b
    RET                                 ; 005a547c
    MOV EAX,[0x005da6d8]                ; 005a547d | DAT_005da6d8
        ;   Label: LAB_005a547d
    MOV dword ptr [EBX],EAX             ; 005a5482 | DAT_006e6f63
    JMP 0x005a54a6                      ; 005a5484
        ;   XREF to: 005a54a6 (UNCONDITIONAL_JUMP)  ; LAB_005a54a6
    MOV EAX,ESP                         ; 005a5486
        ;   Label: LAB_005a5486
    PUSH EAX                            ; 005a5488
    PUSH EBX                            ; 005a5489
    PUSH EDI                            ; 005a548a
    PUSH ESI                            ; 005a548b
    CALL dword ptr CS:[0x5b35ac]        ; 005a548c | PTR_GetFullPathNameA_005b35ac
    TEST EAX,EAX                        ; 005a5493
    JNZ 0x005a54a6                      ; 005a5495
        ;   XREF to: 005a54a6 (CONDITIONAL_JUMP)  ; LAB_005a54a6
    CALL crt_unknown.c_FUN_005ab46c     ; 005a5497
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    XOR EAX,EAX                         ; 005a549c
    ADD ESP,0x4                         ; 005a549e
    POP EBP                             ; 005a54a1
    POP EDI                             ; 005a54a2
    POP ESI                             ; 005a54a3
    POP EBX                             ; 005a54a4
    RET                                 ; 005a54a5
    MOV EAX,EBX                         ; 005a54a6
        ;   Label: LAB_005a54a6
    ADD ESP,0x4                         ; 005a54a8
        ;   Label: LAB_005a54a8
    POP EBP                             ; 005a54ab
    POP EDI                             ; 005a54ac
    POP ESI                             ; 005a54ad
    POP EBX                             ; 005a54ae
    RET                                 ; 005a54af

