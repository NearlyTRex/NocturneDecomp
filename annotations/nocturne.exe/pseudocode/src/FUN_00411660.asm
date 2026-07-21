; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00411660(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00599d30
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_004b4800
;   FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411660
        ;   Label: FUN_00411660
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411661
    TEST byte ptr [ESP + 0xc],0x4       ; 00411665
    JNZ 0x00411686                      ; 0041166a
        ;   XREF to: 00411686 (CONDITIONAL_JUMP)  ; LAB_00411686
    PUSH 0x1                            ; 0041166c
    PUSH EBX                            ; 0041166e
    CALL FUN_004b4800                   ; 0041166f
        ;   XREF to: 004b4800 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4800()
    ADD ESP,0x8                         ; 00411674
    MOV DL,byte ptr [ESP + 0xc]         ; 00411677
    MOV EBX,EAX                         ; 0041167b
    TEST DL,0x2                         ; 0041167d
    JNZ 0x004116a1                      ; 00411680
        ;   XREF to: 004116a1 (CONDITIONAL_JUMP)  ; LAB_004116a1
    MOV EAX,EBX                         ; 00411682
    POP EBX                             ; 00411684
    RET                                 ; 00411685
    PUSH 0x599d30                       ; 00411686 | DAT_00599d30
        ;   Label: LAB_00411686
    PUSH EBX                            ; 0041168b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0041168c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 00411691
    PUSH EAX                            ; 00411694
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00411695
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 0041169a
    MOV EAX,EBX                         ; 0041169d
    POP EBX                             ; 0041169f
    RET                                 ; 004116a0
    PUSH EAX                            ; 004116a1
        ;   Label: LAB_004116a1
    CALL FUN_00564494                   ; 004116a2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004116a7
    MOV EAX,EBX                         ; 004116aa
    POP EBX                             ; 004116ac
    RET                                 ; 004116ad

