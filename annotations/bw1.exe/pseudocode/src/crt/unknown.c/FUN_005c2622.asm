; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c2622(int param_1,undefined4 param_2,char *param_3)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c2654 at 005c2671
;   crt_unknown.c_FUN_005c267a at 005c268a
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_unknown.c_FUN_005c9297
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c2622
        ;   Label: crt_unknown.c_FUN_005c2622
    MOV ECX,dword ptr [ESP + 0xc]       ; 005c2626
    TEST EDX,EDX                        ; 005c262a
    JZ 0x005c264a                       ; 005c262c
        ;   XREF to: 005c264a (CONDITIONAL_JUMP)  ; LAB_005c264a
    XOR EAX,EAX                         ; 005c262e
    MOV AL,byte ptr [ECX]               ; 005c2630
    CMP EAX,0x4                         ; 005c2632
    JNZ 0x005c264d                      ; 005c2635
        ;   XREF to: 005c264d (CONDITIONAL_JUMP)  ; LAB_005c264d
    MOV EAX,0x5c9297                    ; 005c2637
    PUSH ECX                            ; 005c263c
        ;   Label: LAB_005c263c
    MOV ECX,dword ptr [ESP + 0xc]       ; 005c263d
    PUSH ECX                            ; 005c2641
    PUSH EDX                            ; 005c2642
    CALL EAX                            ; 005c2643 | undefined crt_unknown.c_FUN_005c9297()
    ADD ESP,0xc                         ; 005c2645
    MOV EDX,EAX                         ; 005c2648
    MOV EAX,EDX                         ; 005c264a
        ;   Label: LAB_005c264a
    RET                                 ; 005c264c
    MOV EAX,0x5c0357                    ; 005c264d
        ;   Label: LAB_005c264d
    JMP 0x005c263c                      ; 005c2652
        ;   XREF to: 005c263c (UNCONDITIONAL_JUMP)  ; LAB_005c263c

