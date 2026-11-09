; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a83ce(int param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a3650
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004a83ce
        ;   Label: core_fldnotes.cpp_FUN_004a83ce
    PUSH EBX                            ; 004a83d0
    PUSH ESI                            ; 004a83d1
    PUSH EBP                            ; 004a83d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a83d3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a83d7
    MOV EDX,dword ptr [EBX + 0x10]      ; 004a83db
    TEST EDX,EDX                        ; 004a83de
    JNZ 0x004a83ea                      ; 004a83e0
        ;   XREF to: 004a83ea (CONDITIONAL_JUMP)  ; LAB_004a83ea
    TEST ESI,ESI                        ; 004a83e2
    JNZ 0x004a8402                      ; 004a83e4
        ;   XREF to: 004a8402 (CONDITIONAL_JUMP)  ; LAB_004a8402
    POP EBP                             ; 004a83e6
    POP ESI                             ; 004a83e7
    POP EBX                             ; 004a83e8
    RET                                 ; 004a83e9
    PUSH EDX                            ; 004a83ea
        ;   Label: LAB_004a83ea
    CALL crt_unknown.c_FUN_005a3770     ; 004a83eb
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004a83f0
    MOV dword ptr [EBX + 0x10],0x0      ; 004a83f3
    TEST ESI,ESI                        ; 004a83fa
    JNZ 0x004a8402                      ; 004a83fc
        ;   XREF to: 004a8402 (CONDITIONAL_JUMP)  ; LAB_004a8402
    POP EBP                             ; 004a83fe
    POP ESI                             ; 004a83ff
    POP EBX                             ; 004a8400
    RET                                 ; 004a8401
    PUSH EDI                            ; 004a8402
        ;   Label: LAB_004a8402
    MOV EDI,ESI                         ; 004a8403
    SUB ECX,ECX                         ; 004a8405
    DEC ECX                             ; 004a8407
    XOR EAX,EAX                         ; 004a8408
    SCASB.REPNE ES:EDI                  ; 004a840a
    NOT ECX                             ; 004a840c
    DEC ECX                             ; 004a840e
    INC ECX                             ; 004a840f
    PUSH ECX                            ; 004a8410
    CALL crt_unknown.c_FUN_005a3650     ; 004a8411
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 004a8416
    MOV dword ptr [EBX + 0x10],EAX      ; 004a8419
    TEST EAX,EAX                        ; 004a841c
    JNZ 0x004a8442                      ; 004a841e
        ;   XREF to: 004a8442 (CONDITIONAL_JUMP)  ; LAB_004a8442
    MOV EBP,0x5c0d77                    ; 004a8420
    MOV EAX,0x36c                       ; 004a8425
    PUSH 0x5c0d8c                       ; 004a842a
    MOV dword ptr [0x01d71de0],EBP      ; 004a842f | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004a8435 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004a843a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004a843f
    MOV EDI,dword ptr [EBX + 0x10]      ; 004a8442
        ;   Label: LAB_004a8442
    PUSH EDI                            ; 004a8445
    MOV AL,byte ptr [ESI]               ; 004a8446
        ;   Label: LAB_004a8446
    MOV byte ptr [EDI],AL               ; 004a8448
    CMP AL,0x0                          ; 004a844a
    JZ 0x004a845e                       ; 004a844c
        ;   XREF to: 004a845e (CONDITIONAL_JUMP)  ; LAB_004a845e
    MOV AL,byte ptr [ESI + 0x1]         ; 004a844e
    ADD ESI,0x2                         ; 004a8451
    MOV byte ptr [EDI + 0x1],AL         ; 004a8454
    ADD EDI,0x2                         ; 004a8457
    CMP AL,0x0                          ; 004a845a
    JNZ 0x004a8446                      ; 004a845c
        ;   XREF to: 004a8446 (CONDITIONAL_JUMP)  ; LAB_004a8446
    POP EDI                             ; 004a845e
        ;   Label: LAB_004a845e
    POP EDI                             ; 004a845f
    POP EBP                             ; 004a8460
    POP ESI                             ; 004a8461
    POP EBX                             ; 004a8462
    RET                                 ; 004a8463

