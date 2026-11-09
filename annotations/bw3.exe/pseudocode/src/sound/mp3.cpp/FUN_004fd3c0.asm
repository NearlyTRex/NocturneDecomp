; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_mp3_cpp_FUN_004fd3c0(int *param_1,int param_2,ulong param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fseek_FUN_005a457c
;   crt_stdio.c_ftell_FUN_005a5d00
;   crt_unknown.c_FUN_005a3650
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd3c0
        ;   Label: sound_mp3.cpp_FUN_004fd3c0
    PUSH ESI                            ; 004fd3c1
    PUSH EDI                            ; 004fd3c2
    PUSH EBP                            ; 004fd3c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004fd3c4
    MOV EDX,dword ptr [EBX]             ; 004fd3c8
    MOV ESI,EBX                         ; 004fd3ca
    TEST EDX,EDX                        ; 004fd3cc
    JNZ 0x004fd45a                      ; 004fd3ce
        ;   XREF to: 004fd45a (CONDITIONAL_JUMP)  ; LAB_004fd45a
    MOV EDI,dword ptr [ESI + 0x4]       ; 004fd3d4
        ;   Label: LAB_004fd3d4
    TEST EDI,EDI                        ; 004fd3d7
    JZ 0x004fd3eb                       ; 004fd3d9
        ;   XREF to: 004fd3eb (CONDITIONAL_JUMP)  ; LAB_004fd3eb
    PUSH EDI                            ; 004fd3db
    CALL crt_unknown.c_FUN_005a3770     ; 004fd3dc
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004fd3e1
    MOV dword ptr [ESI + 0x4],0x0       ; 004fd3e4
    MOV EAX,dword ptr [ESP + 0x18]      ; 004fd3eb
        ;   Label: LAB_004fd3eb
    PUSH EAX                            ; 004fd3ef
    MOV dword ptr [EBX],EAX             ; 004fd3f0
    CALL crt_stdio.c_ftell_FUN_005a5d00 ; 004fd3f2
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005a5d00()
    ADD ESP,0x4                         ; 004fd3f7
    MOV dword ptr [EBX + 0x20],EAX      ; 004fd3fa
    MOV EAX,dword ptr [ESP + 0x20]      ; 004fd3fd
    MOV dword ptr [EBX + 0x24],EAX      ; 004fd401
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fd404
    PUSH EAX                            ; 004fd408
    MOV dword ptr [EBX + 0x8],EAX       ; 004fd409
    CALL crt_unknown.c_FUN_005a3650     ; 004fd40c
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 004fd411
    MOV dword ptr [EBX + 0x4],EAX       ; 004fd414
    TEST EAX,EAX                        ; 004fd417
    JZ 0x004fd46e                       ; 004fd419
        ;   XREF to: 004fd46e (CONDITIONAL_JUMP)  ; LAB_004fd46e
    PUSH 0x0                            ; 004fd41b
        ;   Label: LAB_004fd41b
    MOV EBP,dword ptr [EBX + 0x20]      ; 004fd41d
    PUSH EBP                            ; 004fd420
    MOV EAX,dword ptr [EBX]             ; 004fd421
    PUSH EAX                            ; 004fd423
    CALL crt_stdio.c_fseek_FUN_005a457c ; 004fd424
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005a457c()
    MOV dword ptr [EBX + 0x10],0x0      ; 004fd429
    MOV dword ptr [EBX + 0x14],0x0      ; 004fd430
    MOV dword ptr [EBX + 0xc],0x0       ; 004fd437
    MOV dword ptr [EBX + 0x18],0x0      ; 004fd43e
    MOV dword ptr [EBX + 0x1c],0x0      ; 004fd445
    MOV EAX,dword ptr [EBX + 0x24]      ; 004fd44c
    ADD ESP,0xc                         ; 004fd44f
    MOV dword ptr [EBX + 0x28],EAX      ; 004fd452
    POP EBP                             ; 004fd455
    POP EDI                             ; 004fd456
    POP ESI                             ; 004fd457
    POP EBX                             ; 004fd458
    RET                                 ; 004fd459
    PUSH EDX                            ; 004fd45a
        ;   Label: LAB_004fd45a
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004fd45b
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 004fd460
    MOV dword ptr [EBX],0x0             ; 004fd463
    JMP 0x004fd3d4                      ; 004fd469
        ;   XREF to: 004fd3d4 (UNCONDITIONAL_JUMP)  ; LAB_004fd3d4
    PUSH 0x1d94b98                      ; 004fd46e
        ;   Label: LAB_004fd46e
    MOV ESI,0x5c9f4e                    ; 004fd473
    MOV EDI,0x23d                       ; 004fd478
    PUSH 0x5c9f5f                       ; 004fd47d
    MOV dword ptr [0x01d71de0],ESI      ; 004fd482 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004fd488 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fd48e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004fd493
    JMP 0x004fd41b                      ; 004fd496
        ;   XREF to: 004fd41b (UNCONDITIONAL_JUMP)  ; LAB_004fd41b

