; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005a5512(int param_1,undefined4 param_2,char *param_3)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005a5544 at 005a5561
;   crt_unknown.c_FUN_005a556a at 005a557a
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_unknown.c_FUN_005acbd7
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a5512
        ;   Label: crt_unknown.c_FUN_005a5512
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a5516
    TEST EDX,EDX                        ; 005a551a
    JZ 0x005a553a                       ; 005a551c
        ;   XREF to: 005a553a (CONDITIONAL_JUMP)  ; LAB_005a553a
    XOR EAX,EAX                         ; 005a551e
    MOV AL,byte ptr [ECX]               ; 005a5520
    CMP EAX,0x4                         ; 005a5522
    JNZ 0x005a553d                      ; 005a5525
        ;   XREF to: 005a553d (CONDITIONAL_JUMP)  ; LAB_005a553d
    MOV EAX,0x5acbd7                    ; 005a5527
    PUSH ECX                            ; 005a552c
        ;   Label: LAB_005a552c
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a552d
    PUSH ECX                            ; 005a5531
    PUSH EDX                            ; 005a5532
    CALL EAX                            ; 005a5533 | undefined crt_unknown.c_FUN_005acbd7()
    ADD ESP,0xc                         ; 005a5535
    MOV EDX,EAX                         ; 005a5538
    MOV EAX,EDX                         ; 005a553a
        ;   Label: LAB_005a553a
    RET                                 ; 005a553c
    MOV EAX,0x5a30d7                    ; 005a553d
        ;   Label: LAB_005a553d
    JMP 0x005a552c                      ; 005a5542
        ;   XREF to: 005a552c (UNCONDITIONAL_JUMP)  ; LAB_005a552c

