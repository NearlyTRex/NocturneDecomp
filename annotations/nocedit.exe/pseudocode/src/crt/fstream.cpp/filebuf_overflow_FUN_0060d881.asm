; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_fstream.cpp_filebuf_overflow_FUN_0060d881(filebuf * this_ptr, int character)
;
; Parameters:
; filebuf *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   character
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
;
; Called Functions:
;   crt_io.c_tell_FUN_00606720
;   crt_io.c_write_FUN_006084ec
;   crt_stdio.c_lseek_FUN_00606690
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060d881
        ;   Label: crt_fstream.cpp_filebuf_overflow_FUN_0060d881
    PUSH ESI                            ; 0060d882
    PUSH EDI                            ; 0060d883
    PUSH EBP                            ; 0060d884
    MOV EBP,ESP                         ; 0060d885
    SUB ESP,0x4                         ; 0060d887
    MOV EBX,dword ptr [EBP + 0x14]      ; 0060d88a
    MOV EAX,dword ptr [EBX + 0x10]      ; 0060d88d
    SUB EAX,dword ptr [EBX + 0x14]      ; 0060d890
    TEST EAX,EAX                        ; 0060d893
    JG 0x0060d8cb                       ; 0060d895 | LAB_0060d8cb
        ;   XREF to: 0060d8cb (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xc],0x0       ; 0060d897
    MOV dword ptr [EBX + 0x14],0x0      ; 0060d89e
    MOV dword ptr [EBX + 0x10],0x0      ; 0060d8a5
    MOV EAX,dword ptr [EBX + 0x4]       ; 0060d8ac
        ;   Label: LAB_0060d8ac
    TEST EAX,EAX                        ; 0060d8af
    JNZ 0x0060d9b7                      ; 0060d8b1 | LAB_0060d9b7
        ;   XREF to: 0060d9b7 (CONDITIONAL_JUMP)
    JZ 0x0060d8df                       ; 0060d8b7 | LAB_0060d8df
        ;   XREF to: 0060d8df (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x4]       ; 0060d8b9
        ;   Label: LAB_0060d8b9
    TEST EAX,EAX                        ; 0060d8bc
    JNZ 0x0060d924                      ; 0060d8be | LAB_0060d924
        ;   XREF to: 0060d924 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x18],-0x1     ; 0060d8c0
    JNZ 0x0060d8fb                      ; 0060d8c4 | LAB_0060d8fb
        ;   XREF to: 0060d8fb (CONDITIONAL_JUMP)
    JMP 0x0060d9b0                      ; 0060d8c6 | LAB_0060d9b0
        ;   XREF to: 0060d9b0 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 0060d8cb
        ;   Label: LAB_0060d8cb
    MOV EAX,dword ptr [EBX + 0x28]      ; 0060d8cc
    CALL dword ptr [EAX + 0x20]         ; 0060d8cf
    ADD ESP,0x4                         ; 0060d8d2
    CMP EAX,-0x1                        ; 0060d8d5
    JNZ 0x0060d8ac                      ; 0060d8d8 | LAB_0060d8ac
        ;   XREF to: 0060d8ac (CONDITIONAL_JUMP)
    JMP 0x0060d9b0                      ; 0060d8da | LAB_0060d9b0
        ;   XREF to: 0060d9b0 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x24]      ; 0060d8df
        ;   Label: LAB_0060d8df
    AND EAX,0x1                         ; 0060d8e2
    JNZ 0x0060d8b9                      ; 0060d8e5 | LAB_0060d8b9
        ;   XREF to: 0060d8b9 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0060d8e7
    MOV EAX,dword ptr [EBX + 0x28]      ; 0060d8e8
    CALL dword ptr [EAX + 0x28]         ; 0060d8eb
    ADD ESP,0x4                         ; 0060d8ee
    CMP EAX,-0x1                        ; 0060d8f1
    JNZ 0x0060d8b9                      ; 0060d8f4 | LAB_0060d8b9
        ;   XREF to: 0060d8b9 (CONDITIONAL_JUMP)
    JMP 0x0060d9b0                      ; 0060d8f6 | LAB_0060d9b0
        ;   XREF to: 0060d9b0 (UNCONDITIONAL_JUMP)
    MOV AL,byte ptr [EBP + 0x18]        ; 0060d8fb
        ;   Label: LAB_0060d8fb
    PUSH 0x1                            ; 0060d8fe
    MOV byte ptr [EBP + -0x4],AL        ; 0060d900
    LEA EAX,[EBP + -0x4]                ; 0060d903
    PUSH EAX                            ; 0060d906
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0060d907
    PUSH EAX                            ; 0060d90a
    CALL crt_io.c_write_FUN_006084ec    ; 0060d90b | int crt_io.c_write_FUN_006084ec(int fd, void * buffer, SIZE_T count)
        ;   XREF to: 006084ec (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0060d910
    CMP EAX,0x1                         ; 0060d913
    SETZ AL                             ; 0060d916
    AND EAX,0xff                        ; 0060d919
    DEC EAX                             ; 0060d91e
    JMP 0x0060d9b0                      ; 0060d91f | LAB_0060d9b0
        ;   XREF to: 0060d9b0 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x18],EAX      ; 0060d924
        ;   Label: LAB_0060d924
    MOV EDX,dword ptr [EBX + 0x8]       ; 0060d927
    MOV dword ptr [EBX + 0x20],EAX      ; 0060d92a
    MOV dword ptr [EBX + 0x1c],EDX      ; 0060d92d
    TEST byte ptr [EBX + 0x30],0x8      ; 0060d930
        ;   Label: LAB_0060d930
    JNZ 0x0060d9ca                      ; 0060d934 | LAB_0060d9ca
        ;   XREF to: 0060d9ca (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x18],-0x1     ; 0060d93a
        ;   Label: LAB_0060d93a
    JNZ 0x0060d9f6                      ; 0060d93e | LAB_0060d9f6
        ;   XREF to: 0060d9f6 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x20]      ; 0060d944
        ;   Label: LAB_0060d944
    MOV ESI,dword ptr [EBX + 0x18]      ; 0060d947
    SUB EAX,ESI                         ; 0060d94a
    MOV ESI,EAX                         ; 0060d94c
    TEST ESI,ESI                        ; 0060d94e
        ;   Label: LAB_0060d94e
    JBE 0x0060d981                      ; 0060d950 | LAB_0060d981
        ;   XREF to: 0060d981 (CONDITIONAL_JUMP)
    CMP ESI,0x7fffffff                  ; 0060d952
    JBE 0x0060da1d                      ; 0060d958 | LAB_0060da1d
        ;   XREF to: 0060da1d (CONDITIONAL_JUMP)
    MOV EAX,0x7fffffff                  ; 0060d95e
    PUSH EAX                            ; 0060d963
        ;   Label: LAB_0060d963
    MOV EAX,dword ptr [EBX + 0x18]      ; 0060d964
    PUSH EAX                            ; 0060d967
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0060d968
    PUSH EAX                            ; 0060d96b
    CALL crt_io.c_write_FUN_006084ec    ; 0060d96c | int crt_io.c_write_FUN_006084ec(int fd, void * buffer, SIZE_T count)
        ;   XREF to: 006084ec (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0060d971
    CMP EAX,-0x1                        ; 0060d974
    JZ 0x0060d9b0                       ; 0060d977 | LAB_0060d9b0
        ;   XREF to: 0060d9b0 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 0060d979
    JNZ 0x0060da24                      ; 0060d97b | LAB_0060da24
        ;   XREF to: 0060da24 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x18],-0x1     ; 0060d981
        ;   Label: LAB_0060d981
    JZ 0x0060d999                       ; 0060d985 | LAB_0060d999
        ;   XREF to: 0060d999 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x20]      ; 0060d987
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0060d98a
    CMP EAX,EDX                         ; 0060d98d
    JNC 0x0060d9ab                      ; 0060d98f | LAB_0060d9ab
        ;   XREF to: 0060d9ab (CONDITIONAL_JUMP)
    MOV DL,byte ptr [EBP + 0x18]        ; 0060d991
    MOV byte ptr [EAX],DL               ; 0060d994
    INC dword ptr [EBX + 0x20]          ; 0060d996
    TEST byte ptr [EBX + 0x30],0x8      ; 0060d999
        ;   Label: LAB_0060d999
    JNZ 0x0060da64                      ; 0060d99d | LAB_0060da64
        ;   XREF to: 0060da64 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 0060d9a3
        ;   Label: LAB_0060d9a3
    JZ 0x0060da80                       ; 0060d9a5 | LAB_0060da80
        ;   XREF to: 0060da80 (CONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 0060d9ab
        ;   Label: LAB_0060d9ab
    MOV ESP,EBP                         ; 0060d9b0
        ;   Label: LAB_0060d9b0
    POP EBP                             ; 0060d9b2
    POP EDI                             ; 0060d9b3
    POP ESI                             ; 0060d9b4
    POP EBX                             ; 0060d9b5
    RET                                 ; 0060d9b6
    MOV EDX,dword ptr [EBX + 0x20]      ; 0060d9b7
        ;   Label: LAB_0060d9b7
    MOV ESI,dword ptr [EBX + 0x18]      ; 0060d9ba
    CMP EDX,ESI                         ; 0060d9bd
    JA 0x0060d930                       ; 0060d9bf | LAB_0060d930
        ;   XREF to: 0060d930 (CONDITIONAL_JUMP)
    JMP 0x0060d924                      ; 0060d9c5 | LAB_0060d924
        ;   XREF to: 0060d924 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0060d9ca
        ;   Label: LAB_0060d9ca
    PUSH EAX                            ; 0060d9cd
    CALL crt_io.c_tell_FUN_00606720     ; 0060d9ce | long crt_io.c_tell_FUN_00606720(int file_handle_index)
        ;   XREF to: 00606720 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060d9d3
    MOV EDI,EAX                         ; 0060d9d6
    TEST EAX,EAX                        ; 0060d9d8
    JL 0x0060d9ab                       ; 0060d9da | LAB_0060d9ab
        ;   XREF to: 0060d9ab (CONDITIONAL_JUMP)
    PUSH 0x2                            ; 0060d9dc
    PUSH 0x0                            ; 0060d9de
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0060d9e0
    PUSH EAX                            ; 0060d9e3
    CALL crt_stdio.c_lseek_FUN_00606690 ; 0060d9e4 | int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0060d9e9
    TEST EAX,EAX                        ; 0060d9ec
    JGE 0x0060d93a                      ; 0060d9ee | LAB_0060d93a
        ;   XREF to: 0060d93a (CONDITIONAL_JUMP)
    JMP 0x0060d9ab                      ; 0060d9f4 | LAB_0060d9ab
        ;   XREF to: 0060d9ab (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x20]      ; 0060d9f6
        ;   Label: LAB_0060d9f6
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0060d9f9
    CMP EAX,EDX                         ; 0060d9fc
    JNC 0x0060d944                      ; 0060d9fe | LAB_0060d944
        ;   XREF to: 0060d944 (CONDITIONAL_JUMP)
    MOV DL,byte ptr [EBP + 0x18]        ; 0060da04
    MOV byte ptr [EAX],DL               ; 0060da07
    MOV ESI,dword ptr [EBX + 0x20]      ; 0060da09
    MOV EAX,0xffffffff                  ; 0060da0c
    INC ESI                             ; 0060da11
    MOV dword ptr [EBP + 0x18],EAX      ; 0060da12
    MOV dword ptr [EBX + 0x20],ESI      ; 0060da15
    JMP 0x0060d944                      ; 0060da18 | LAB_0060d944
        ;   XREF to: 0060d944 (UNCONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 0060da1d
        ;   Label: LAB_0060da1d
    JMP 0x0060d963                      ; 0060da1f | LAB_0060d963
        ;   XREF to: 0060d963 (UNCONDITIONAL_JUMP)
    SUB ESI,EAX                         ; 0060da24
        ;   Label: LAB_0060da24
    TEST ESI,ESI                        ; 0060da26
    JA 0x0060da3b                       ; 0060da28 | LAB_0060da3b
        ;   XREF to: 0060da3b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x18]      ; 0060da2a
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0060da2d
    MOV dword ptr [EBX + 0x20],EAX      ; 0060da30
    MOV dword ptr [EBX + 0x1c],EDX      ; 0060da33
    JMP 0x0060d94e                      ; 0060da36 | LAB_0060d94e
        ;   XREF to: 0060d94e (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x18]      ; 0060da3b
        ;   Label: LAB_0060da3b
    PUSH ESI                            ; 0060da3e
    ADD EAX,EDX                         ; 0060da3f
    PUSH EAX                            ; 0060da41
    PUSH EDX                            ; 0060da42
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0060da43 | void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX + 0x18]      ; 0060da48
    MOV dword ptr [EBX + 0x20],EAX      ; 0060da4b
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0060da4e
    MOV ECX,dword ptr [EBX + 0x20]      ; 0060da51
    MOV dword ptr [EBX + 0x1c],EDX      ; 0060da54
    ADD ECX,ESI                         ; 0060da57
    ADD ESP,0xc                         ; 0060da59
    MOV dword ptr [EBX + 0x20],ECX      ; 0060da5c
    JMP 0x0060d94e                      ; 0060da5f | LAB_0060d94e
        ;   XREF to: 0060d94e (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 0060da64
        ;   Label: LAB_0060da64
    PUSH EDI                            ; 0060da66
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0060da67
    PUSH EAX                            ; 0060da6a
    CALL crt_stdio.c_lseek_FUN_00606690 ; 0060da6b | int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0060da70
    TEST EAX,EAX                        ; 0060da73
    JGE 0x0060d9a3                      ; 0060da75 | LAB_0060d9a3
        ;   XREF to: 0060d9a3 (CONDITIONAL_JUMP)
    JMP 0x0060d9ab                      ; 0060da7b | LAB_0060d9ab
        ;   XREF to: 0060d9ab (UNCONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0060da80
        ;   Label: LAB_0060da80
    JMP 0x0060d9b0                      ; 0060da82 | LAB_0060d9b0
        ;   XREF to: 0060d9b0 (UNCONDITIONAL_JUMP)

