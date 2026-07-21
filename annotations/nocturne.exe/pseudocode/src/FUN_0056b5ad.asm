; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_0056b5ad(int *param_1,byte param_2)
;
;
; XREF[3]:
;   FUN_0056b491 at 0056b4a0
;   crt_strstream.cpp_istrstream_dtor_FUN_00564fd8 at 0056501e
;   crt_strstream.cpp_ostrstream_dtor_FUN_00564e98 at 00564ede
;
; Referenced Globals:
;   void* PTR_FUN_005a48bc = 0056b5ad
;   void* PTR_FUN_005a48c4 = 0056b491
;   undefined4 DAT_005a4980
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_00564494
;   FUN_0056b633
;   FUN_005701cf
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b5ad
        ;   Label: FUN_0056b5ad
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056b5ae
    TEST byte ptr [ESP + 0xc],0x4       ; 0056b5b2
    JNZ 0x0056b5fd                      ; 0056b5b7
        ;   XREF to: 0056b5fd (CONDITIONAL_JUMP)  ; LAB_0056b5fd
    MOV EAX,dword ptr [EBX]             ; 0056b5b9
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b5bb
    LEA EDX,[EBX + EAX*0x1]             ; 0056b5be
    MOV dword ptr [EDX + -0x4],EAX      ; 0056b5c1
    PUSH 0x0                            ; 0056b5c4
    MOV EAX,dword ptr [EBX]             ; 0056b5c6
    MOV dword ptr [EBX + 0x44],0x5a48bc ; 0056b5c8 | PTR_FUN_005a48bc
    ADD EBX,0x4                         ; 0056b5cf
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b5d2
    PUSH EBX                            ; 0056b5d5
    MOV dword ptr [EBX + EAX*0x1 + 0x24],0x5a48c4 ; 0056b5d6 | PTR_FUN_005a48c4
    CALL FUN_005701cf                   ; 0056b5de
        ;   XREF to: 005701cf (UNCONDITIONAL_CALL)  ; undefined FUN_005701cf()
    ADD ESP,0x8                         ; 0056b5e3
    MOV DL,byte ptr [ESP + 0xc]         ; 0056b5e6
    LEA EBX,[EAX + -0x4]                ; 0056b5ea
    TEST DL,0x1                         ; 0056b5ed
    JZ 0x0056b618                       ; 0056b5f0
        ;   XREF to: 0056b618 (CONDITIONAL_JUMP)  ; LAB_0056b618
    TEST byte ptr [ESP + 0xc],0x2       ; 0056b5f2
        ;   Label: LAB_0056b5f2
    JNZ 0x0056b62b                      ; 0056b5f7
        ;   XREF to: 0056b62b (CONDITIONAL_JUMP)  ; LAB_0056b62b
    MOV EAX,EBX                         ; 0056b5f9
    POP EBX                             ; 0056b5fb
    RET                                 ; 0056b5fc
    PUSH 0x5a4980                       ; 0056b5fd | DAT_005a4980
        ;   Label: LAB_0056b5fd
    PUSH EBX                            ; 0056b602
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0056b603
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 0056b608
    PUSH EAX                            ; 0056b60b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0056b60c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 0056b611
        ;   Label: LAB_0056b611
    MOV EAX,EBX                         ; 0056b614
    POP EBX                             ; 0056b616
    RET                                 ; 0056b617
    PUSH 0x1                            ; 0056b618
        ;   Label: LAB_0056b618
    ADD EBX,0x4c                        ; 0056b61a
    PUSH EBX                            ; 0056b61d
    CALL FUN_0056b633                   ; 0056b61e
        ;   XREF to: 0056b633 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b633()
    ADD ESP,0x8                         ; 0056b623
    LEA EBX,[EAX + -0x4c]               ; 0056b626
    JMP 0x0056b5f2                      ; 0056b629
        ;   XREF to: 0056b5f2 (UNCONDITIONAL_JUMP)  ; LAB_0056b5f2
    PUSH EBX                            ; 0056b62b
        ;   Label: LAB_0056b62b
    CALL FUN_00564494                   ; 0056b62c
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    JMP 0x0056b611                      ; 0056b631
        ;   XREF to: 0056b611 (UNCONDITIONAL_JUMP)  ; LAB_0056b611

