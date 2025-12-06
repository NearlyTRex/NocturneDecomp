; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_fstream.cpp_filebuf_pbackfail_FUN_0060d7ae(filebuf * this_ptr, int character)
;
; Parameters:
; filebuf *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   character
;
; Called Functions:
;   crt_stdio.c_lseek_FUN_00606690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060d7ae
        ;   Label: crt_fstream.cpp_filebuf_pbackfail_FUN_0060d7ae
    PUSH ESI                            ; 0060d7af
    PUSH EBP                            ; 0060d7b0
    MOV EBP,ESP                         ; 0060d7b1
    MOV EBX,dword ptr [EBP + 0x10]      ; 0060d7b3
    MOV EAX,dword ptr [EBX + 0x4]       ; 0060d7b6
    TEST EAX,EAX                        ; 0060d7b9
    JNZ 0x0060d837                      ; 0060d7bb | LAB_0060d837
        ;   XREF to: 0060d837 (CONDITIONAL_JUMP)
    JZ 0x0060d7fa                       ; 0060d7c1 | LAB_0060d7fa
        ;   XREF to: 0060d7fa (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x4]       ; 0060d7c3
        ;   Label: LAB_0060d7c3
    TEST EAX,EAX                        ; 0060d7c6
    JNZ 0x0060d815                      ; 0060d7c8 | LAB_0060d815
        ;   XREF to: 0060d815 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x38]                ; 0060d7ca
    MOV dword ptr [EBX + 0x14],EAX      ; 0060d7cd
    LEA EDX,[EBX + 0x34]                ; 0060d7d0
    MOV dword ptr [EBX + 0x10],EAX      ; 0060d7d3
    MOV dword ptr [EBX + 0xc],EDX       ; 0060d7d6
    MOV EAX,dword ptr [EBX + 0x14]      ; 0060d7d9
        ;   Label: LAB_0060d7d9
    CMP EAX,dword ptr [EBX + 0xc]       ; 0060d7dc
    JBE 0x0060d823                      ; 0060d7df | LAB_0060d823
        ;   XREF to: 0060d823 (CONDITIONAL_JUMP)
    LEA ESI,[EAX + -0x1]                ; 0060d7e1
    MOV DL,byte ptr [EBP + 0x14]        ; 0060d7e4
    MOV dword ptr [EBX + 0x14],ESI      ; 0060d7e7
    MOV byte ptr [ESI],DL               ; 0060d7ea
    MOV EAX,dword ptr [EBX + 0x14]      ; 0060d7ec
    MOV AL,byte ptr [EAX]               ; 0060d7ef
    AND EAX,0xff                        ; 0060d7f1
    POP EBP                             ; 0060d7f6
        ;   Label: LAB_0060d7f6
    POP ESI                             ; 0060d7f7
    POP EBX                             ; 0060d7f8
    RET                                 ; 0060d7f9
    MOV EAX,dword ptr [EBX + 0x24]      ; 0060d7fa
        ;   Label: LAB_0060d7fa
    AND EAX,0x1                         ; 0060d7fd
    JNZ 0x0060d7c3                      ; 0060d800 | LAB_0060d7c3
        ;   XREF to: 0060d7c3 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0060d802
    MOV EAX,dword ptr [EBX + 0x28]      ; 0060d803
    CALL dword ptr [EAX + 0x28]         ; 0060d806
    ADD ESP,0x4                         ; 0060d809
    CMP EAX,-0x1                        ; 0060d80c
    JNZ 0x0060d7c3                      ; 0060d80f | LAB_0060d7c3
        ;   XREF to: 0060d7c3 (CONDITIONAL_JUMP)
    POP EBP                             ; 0060d811
    POP ESI                             ; 0060d812
    POP EBX                             ; 0060d813
    RET                                 ; 0060d814
    LEA EDX,[EAX + 0x4]                 ; 0060d815
        ;   Label: LAB_0060d815
    MOV dword ptr [EBX + 0xc],EAX       ; 0060d818
    MOV dword ptr [EBX + 0x14],EDX      ; 0060d81b
    MOV dword ptr [EBX + 0x10],EDX      ; 0060d81e
    JMP 0x0060d7d9                      ; 0060d821 | LAB_0060d7d9
        ;   XREF to: 0060d7d9 (UNCONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 0060d823
        ;   Label: LAB_0060d823
    MOV DL,byte ptr [EBP + 0x14]        ; 0060d825
    PUSH EDX                            ; 0060d828
    MOV EAX,dword ptr [EBX + 0x28]      ; 0060d829
    PUSH EBX                            ; 0060d82c
    CALL dword ptr [EAX + 0x8]          ; 0060d82d
    ADD ESP,0x8                         ; 0060d830
    POP EBP                             ; 0060d833
    POP ESI                             ; 0060d834
    POP EBX                             ; 0060d835
    RET                                 ; 0060d836
    PUSH EBX                            ; 0060d837
        ;   Label: LAB_0060d837
    MOV EAX,dword ptr [EBX + 0x28]      ; 0060d838
    CALL dword ptr [EAX + 0x20]         ; 0060d83b
    ADD ESP,0x4                         ; 0060d83e
    CMP EAX,-0x1                        ; 0060d841
    JZ 0x0060d7f6                       ; 0060d844 | LAB_0060d7f6
        ;   XREF to: 0060d7f6 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x14],0xa      ; 0060d846
    JNZ 0x0060d871                      ; 0060d84a | LAB_0060d871
        ;   XREF to: 0060d871 (CONDITIONAL_JUMP)
    TEST byte ptr [EBX + 0x30],0x80     ; 0060d84c
    JZ 0x0060d871                       ; 0060d850 | LAB_0060d871
        ;   XREF to: 0060d871 (CONDITIONAL_JUMP)
    MOV EAX,0xfffffffe                  ; 0060d852
    PUSH 0x1                            ; 0060d857
        ;   Label: LAB_0060d857
    PUSH EAX                            ; 0060d859
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0060d85a
    PUSH EAX                            ; 0060d85d
    CALL crt_stdio.c_lseek_FUN_00606690 ; 0060d85e | int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0060d863
    TEST EAX,EAX                        ; 0060d866
    JL 0x0060d878                       ; 0060d868 | LAB_0060d878
        ;   XREF to: 0060d878 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0060d86a
    POP EBP                             ; 0060d86d
    POP ESI                             ; 0060d86e
    POP EBX                             ; 0060d86f
    RET                                 ; 0060d870
    MOV EAX,0xffffffff                  ; 0060d871
        ;   Label: LAB_0060d871
    JMP 0x0060d857                      ; 0060d876 | LAB_0060d857
        ;   XREF to: 0060d857 (UNCONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 0060d878
        ;   Label: LAB_0060d878
    POP EBP                             ; 0060d87d
    POP ESI                             ; 0060d87e
    POP EBX                             ; 0060d87f
    RET                                 ; 0060d880

