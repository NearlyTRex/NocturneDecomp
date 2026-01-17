; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl long crt_exception.c_TopLevelExceptionFilter_FUN_0060a7a4(_EXCEPTION_POINTERS * ExceptionInfo)
;
; Parameters:
; _EXCEPTION_POINTERS * Stack[0x4]:4   ExceptionInfo
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   crt_exception.c_installExceptionHandler_FUN_0060aba8 at 0060abe6
;
; Referenced Globals:
;   WriteFile* g_WriteFileFunc = 00212300
;   TerminatedCString s_The_instruction_at_0x000_0065912c
;   TerminatedCString s_The_instruction_at_0x000_00659180
;   TerminatedCString s_The_instruction_at_0x000_006591d4
;   TerminatedCString s_The_instruction_at_0x000_00659228
;   TerminatedCString s_The_instruction_at_0x000_0065927c
;   TerminatedCString s_The_instruction_at_0x000_006592d0
;   TerminatedCString s_The_instruction_at_0x000_0065931c
;   TerminatedCString s_The_instruction_at_0x000_0065936c
;   TerminatedCString s_The_instruction_at_0x000_006593c4
;   TerminatedCString s_at_0x00000000_The_memory_006593f8
;   TerminatedCString s_read_00659420
;   TerminatedCString s_written_00659428
;   TerminatedCString s_A_privileged_instruction_00659434
;   TerminatedCString s_An_illegal_instruction_w_00659474
;   ... and 5 more
;
; Called Functions:
;   crt_exception.c_FormatHexString_FUN_0060a748
;   crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c
;   crt_windows.c_has_active_window_FUN_0060a710
;   WriteFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060a7a4
        ;   Label: crt_exception.c_TopLevelExceptionFilter_FUN_0060a7a4
    PUSH ESI                            ; 0060a7a5
    PUSH EDI                            ; 0060a7a6
    PUSH EBP                            ; 0060a7a7
    SUB ESP,0x104                       ; 0060a7a8
    MOV EDI,dword ptr [ESP + 0x118]     ; 0060a7ae
    MOV EBX,dword ptr [EDI]             ; 0060a7b5
    MOV EDI,dword ptr [EDI + 0x4]       ; 0060a7b7
    CALL crt_windows.c_has_active_window_FUN_0060a710 ; 0060a7ba
        ;   XREF to: 0060a710 (UNCONDITIONAL_CALL)  ; BOOL crt_windows.c_has_active_window_FUN_0060a710()
    TEST EAX,EAX                        ; 0060a7bf
    JNZ 0x0060a7cd                      ; 0060a7c1
        ;   XREF to: 0060a7cd (CONDITIONAL_JUMP)  ; LAB_0060a7cd
    CALL crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c ; 0060a7c3
        ;   XREF to: 0060ce3c (UNCONDITIONAL_CALL)  ; HANDLE crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c()
    CMP EAX,-0x1                        ; 0060a7c8
    JNZ 0x0060a7d4                      ; 0060a7cb
        ;   XREF to: 0060a7d4 (CONDITIONAL_JUMP)  ; LAB_0060a7d4
    XOR EAX,EAX                         ; 0060a7cd
        ;   Label: LAB_0060a7cd
    JMP 0x0060a9ae                      ; 0060a7cf
        ;   XREF to: 0060a9ae (UNCONDITIONAL_JUMP)  ; LAB_0060a9ae
    XOR AH,AH                           ; 0060a7d4
        ;   Label: LAB_0060a7d4
    MOV byte ptr [ESP],AH               ; 0060a7d6
    MOV EAX,dword ptr [EBX]             ; 0060a7d9
    CMP EAX,0xc0000090                  ; 0060a7db
    JC 0x0060a82f                       ; 0060a7e0
        ;   XREF to: 0060a82f (CONDITIONAL_JUMP)  ; LAB_0060a82f
    JBE 0x0060a8ca                      ; 0060a7e2
        ;   XREF to: 0060a8ca (CONDITIONAL_JUMP)  ; LAB_0060a8ca
    CMP EAX,0xc0000093                  ; 0060a7e8
    JC 0x0060a822                       ; 0060a7ed
        ;   XREF to: 0060a822 (CONDITIONAL_JUMP)  ; LAB_0060a822
    JBE 0x0060a8bc                      ; 0060a7ef
        ;   XREF to: 0060a8bc (CONDITIONAL_JUMP)  ; LAB_0060a8bc
    CMP EAX,0xc0000096                  ; 0060a7f5
    JC 0x0060a812                       ; 0060a7fa
        ;   XREF to: 0060a812 (CONDITIONAL_JUMP)  ; LAB_0060a812
    JBE 0x0060a91e                      ; 0060a7fc
        ;   XREF to: 0060a91e (CONDITIONAL_JUMP)  ; LAB_0060a91e
    CMP EAX,0xc00000fd                  ; 0060a802
    JZ 0x0060a93f                       ; 0060a807
        ;   XREF to: 0060a93f (CONDITIONAL_JUMP)  ; LAB_0060a93f
    JMP 0x0060a94a                      ; 0060a80d
        ;   XREF to: 0060a94a (UNCONDITIONAL_JUMP)  ; LAB_0060a94a
    CMP EAX,0xc0000094                  ; 0060a812
        ;   Label: LAB_0060a812
    JZ 0x0060a934                       ; 0060a817
        ;   XREF to: 0060a934 (CONDITIONAL_JUMP)  ; LAB_0060a934
    JMP 0x0060a94a                      ; 0060a81d
        ;   XREF to: 0060a94a (UNCONDITIONAL_JUMP)  ; LAB_0060a94a
    CMP EAX,0xc0000091                  ; 0060a822
        ;   Label: LAB_0060a822
    JBE 0x0060a8ae                      ; 0060a827
        ;   XREF to: 0060a8ae (CONDITIONAL_JUMP)  ; LAB_0060a8ae
    JMP 0x0060a862                      ; 0060a82d
        ;   XREF to: 0060a862 (UNCONDITIONAL_JUMP)  ; LAB_0060a862
    CMP EAX,0xc000008d                  ; 0060a82f
        ;   Label: LAB_0060a82f
    JC 0x0060a841                       ; 0060a834
        ;   XREF to: 0060a841 (CONDITIONAL_JUMP)  ; LAB_0060a841
    JBE 0x0060a884                      ; 0060a836
        ;   XREF to: 0060a884 (CONDITIONAL_JUMP)  ; LAB_0060a884
    CMP EAX,0xc000008e                  ; 0060a838
    JBE 0x0060a892                      ; 0060a83d
        ;   XREF to: 0060a892 (CONDITIONAL_JUMP)  ; LAB_0060a892
    JMP 0x0060a8a0                      ; 0060a83f
        ;   XREF to: 0060a8a0 (UNCONDITIONAL_JUMP)  ; LAB_0060a8a0
    CMP EAX,0xc0000005                  ; 0060a841
        ;   Label: LAB_0060a841
    JC 0x0060a94a                       ; 0060a846
        ;   XREF to: 0060a94a (CONDITIONAL_JUMP)  ; LAB_0060a94a
    JBE 0x0060a8d8                      ; 0060a84c
        ;   XREF to: 0060a8d8 (CONDITIONAL_JUMP)  ; LAB_0060a8d8
    CMP EAX,0xc000001d                  ; 0060a852
    JZ 0x0060a929                       ; 0060a857
        ;   XREF to: 0060a929 (CONDITIONAL_JUMP)  ; LAB_0060a929
    JMP 0x0060a94a                      ; 0060a85d
        ;   XREF to: 0060a94a (UNCONDITIONAL_JUMP)  ; LAB_0060a94a
    TEST byte ptr [EDI + 0x21],0x2      ; 0060a862
        ;   Label: LAB_0060a862
    JZ 0x0060a876                       ; 0060a866
        ;   XREF to: 0060a876 (CONDITIONAL_JUMP)  ; LAB_0060a876
    MOV EAX,dword ptr [EBX + 0xc]       ; 0060a868
    PUSH EAX                            ; 0060a86b
    PUSH 0x65912c                       ; 0060a86c | = "The instruction at 0x00000000 caused ..."
    JMP 0x0060a968                      ; 0060a871
        ;   XREF to: 0060a968 (UNCONDITIONAL_JUMP)  ; LAB_0060a968
    MOV EBP,dword ptr [EBX + 0xc]       ; 0060a876
        ;   Label: LAB_0060a876
    PUSH EBP                            ; 0060a879
    PUSH 0x659180                       ; 0060a87a | = "The instruction at 0x00000000 caused ..."
    JMP 0x0060a968                      ; 0060a87f
        ;   XREF to: 0060a968 (UNCONDITIONAL_JUMP)  ; LAB_0060a968
    MOV EBP,dword ptr [EBX + 0xc]       ; 0060a884
        ;   Label: LAB_0060a884
    PUSH EBP                            ; 0060a887
    PUSH 0x6591d4                       ; 0060a888 | = "The instruction at 0x00000000 caused ..."
    JMP 0x0060a968                      ; 0060a88d
        ;   XREF to: 0060a968 (UNCONDITIONAL_JUMP)  ; LAB_0060a968
    MOV EDI,dword ptr [EBX + 0xc]       ; 0060a892
        ;   Label: LAB_0060a892
    PUSH EDI                            ; 0060a895
    PUSH 0x659228                       ; 0060a896 | = "The instruction at 0x00000000 caused ..."
    JMP 0x0060a968                      ; 0060a89b
        ;   XREF to: 0060a968 (UNCONDITIONAL_JUMP)  ; LAB_0060a968
    MOV ESI,dword ptr [EBX + 0xc]       ; 0060a8a0
        ;   Label: LAB_0060a8a0
    PUSH ESI                            ; 0060a8a3
    PUSH 0x65927c                       ; 0060a8a4 | = "The instruction at 0x00000000 caused ..."
    JMP 0x0060a968                      ; 0060a8a9
        ;   XREF to: 0060a968 (UNCONDITIONAL_JUMP)  ; LAB_0060a968
    MOV EDX,dword ptr [EBX + 0xc]       ; 0060a8ae
        ;   Label: LAB_0060a8ae
    PUSH EDX                            ; 0060a8b1
    PUSH 0x6592d0                       ; 0060a8b2 | = "The instruction at 0x00000000 caused ..."
    JMP 0x0060a968                      ; 0060a8b7
        ;   XREF to: 0060a968 (UNCONDITIONAL_JUMP)  ; LAB_0060a968
    MOV EDI,dword ptr [EBX + 0xc]       ; 0060a8bc
        ;   Label: LAB_0060a8bc
    PUSH EDI                            ; 0060a8bf
    PUSH 0x65931c                       ; 0060a8c0 | = "The instruction at 0x00000000 caused ..."
    JMP 0x0060a968                      ; 0060a8c5
        ;   XREF to: 0060a968 (UNCONDITIONAL_JUMP)  ; LAB_0060a968
    MOV ECX,dword ptr [EBX + 0xc]       ; 0060a8ca
        ;   Label: LAB_0060a8ca
    PUSH ECX                            ; 0060a8cd
    PUSH 0x65936c                       ; 0060a8ce | = "The instruction at 0x00000000 caused ..."
    JMP 0x0060a968                      ; 0060a8d3
        ;   XREF to: 0060a968 (UNCONDITIONAL_JUMP)  ; LAB_0060a968
    MOV EDX,dword ptr [EBX + 0xc]       ; 0060a8d8
        ;   Label: LAB_0060a8d8
    PUSH EDX                            ; 0060a8db
    PUSH 0x6593c4                       ; 0060a8dc | = "The instruction at 0x00000000 referen..."
    LEA EAX,[ESP + 0x8]                 ; 0060a8e1
    PUSH EAX                            ; 0060a8e5
    CALL crt_exception.c_FormatHexString_FUN_0060a748 ; 0060a8e6
        ;   XREF to: 0060a748 (UNCONDITIONAL_CALL)  ; void crt_exception.c_FormatHexString_FUN_0060a748(char * dest, char * format, DWORD value)
    ADD ESP,0xc                         ; 0060a8eb
    MOV ECX,dword ptr [EBX + 0x18]      ; 0060a8ee
    PUSH ECX                            ; 0060a8f1
    PUSH 0x6593f8                       ; 0060a8f2 | = "at 0x00000000.\nThe memory could not be "
    LEA EAX,[ESP + 0x8]                 ; 0060a8f7
    PUSH EAX                            ; 0060a8fb
    CALL crt_exception.c_FormatHexString_FUN_0060a748 ; 0060a8fc
        ;   XREF to: 0060a748 (UNCONDITIONAL_CALL)  ; void crt_exception.c_FormatHexString_FUN_0060a748(char * dest, char * format, DWORD value)
    MOV ESI,dword ptr [EBX + 0x14]      ; 0060a901
    ADD ESP,0xc                         ; 0060a904
    TEST ESI,ESI                        ; 0060a907
    JNZ 0x0060a914                      ; 0060a909
        ;   XREF to: 0060a914 (CONDITIONAL_JUMP)  ; LAB_0060a914
    PUSH ESI                            ; 0060a90b
    MOV EAX,0x659420                    ; 0060a90c | = "read.\n"
    PUSH EAX                            ; 0060a911 | = "read.\n"
    JMP 0x0060a968                      ; 0060a912
        ;   XREF to: 0060a968 (UNCONDITIONAL_JUMP)  ; LAB_0060a968
    PUSH 0x0                            ; 0060a914
        ;   Label: LAB_0060a914
    MOV EAX,0x659428                    ; 0060a916 | = "written.\n"
    PUSH EAX                            ; 0060a91b | = "written.\n"
    JMP 0x0060a968                      ; 0060a91c
        ;   XREF to: 0060a968 (UNCONDITIONAL_JUMP)  ; LAB_0060a968
    MOV ECX,dword ptr [EBX + 0xc]       ; 0060a91e
        ;   Label: LAB_0060a91e
    PUSH ECX                            ; 0060a921
    PUSH 0x659434                       ; 0060a922 | = "A privileged instruction was executed..."
    JMP 0x0060a968                      ; 0060a927
        ;   XREF to: 0060a968 (UNCONDITIONAL_JUMP)  ; LAB_0060a968
    MOV EAX,dword ptr [EBX + 0xc]       ; 0060a929
        ;   Label: LAB_0060a929
    PUSH EAX                            ; 0060a92c
    PUSH 0x659474                       ; 0060a92d | = "An illegal instruction was executed a..."
    JMP 0x0060a968                      ; 0060a932
        ;   XREF to: 0060a968 (UNCONDITIONAL_JUMP)  ; LAB_0060a968
    MOV ESI,dword ptr [EBX + 0xc]       ; 0060a934
        ;   Label: LAB_0060a934
    PUSH ESI                            ; 0060a937
    PUSH 0x6594b0                       ; 0060a938 | = "An integer divide by zero was encount..."
    JMP 0x0060a968                      ; 0060a93d
        ;   XREF to: 0060a968 (UNCONDITIONAL_JUMP)  ; LAB_0060a968
    MOV EDX,dword ptr [EBX + 0xc]       ; 0060a93f
        ;   Label: LAB_0060a93f
    PUSH EDX                            ; 0060a942
    PUSH 0x6594f4                       ; 0060a943 | = "A stack overflow was encountered at a..."
    JMP 0x0060a968                      ; 0060a948
        ;   XREF to: 0060a968 (UNCONDITIONAL_JUMP)  ; LAB_0060a968
    MOV EDI,dword ptr [EBX]             ; 0060a94a
        ;   Label: LAB_0060a94a
    PUSH EDI                            ; 0060a94c
    PUSH 0x659530                       ; 0060a94d | = "The program encountered exception 0x0..."
    LEA EAX,[ESP + 0x8]                 ; 0060a952
    PUSH EAX                            ; 0060a956
    CALL crt_exception.c_FormatHexString_FUN_0060a748 ; 0060a957
        ;   XREF to: 0060a748 (UNCONDITIONAL_CALL)  ; void crt_exception.c_FormatHexString_FUN_0060a748(char * dest, char * format, DWORD value)
    ADD ESP,0xc                         ; 0060a95c
    MOV EBP,dword ptr [EBX + 0xc]       ; 0060a95f
    PUSH EBP                            ; 0060a962
    PUSH 0x659564                       ; 0060a963 | = "address 0x00000000 and\ncannot contin..."
    LEA EAX,[ESP + 0x8]                 ; 0060a968
        ;   Label: LAB_0060a968
    PUSH EAX                            ; 0060a96c
    CALL crt_exception.c_FormatHexString_FUN_0060a748 ; 0060a96d
        ;   XREF to: 0060a748 (UNCONDITIONAL_CALL)  ; void crt_exception.c_FormatHexString_FUN_0060a748(char * dest, char * format, DWORD value)
    ADD ESP,0xc                         ; 0060a972
    PUSH 0x0                            ; 0060a975
    LEA EAX,[ESP + 0x104]               ; 0060a977
    PUSH EAX                            ; 0060a97e
    LEA EDI,[ESP + 0x8]                 ; 0060a97f
    PUSH ES                             ; 0060a983
    MOV AX,DS                           ; 0060a984
    MOV ES,AX                           ; 0060a986
    SUB ECX,ECX                         ; 0060a988
    DEC ECX                             ; 0060a98a
    XOR EAX,EAX                         ; 0060a98b
    SCASB.REPNE ES:EDI                  ; 0060a98d
    NOT ECX                             ; 0060a98f
    DEC ECX                             ; 0060a991
    POP ES                              ; 0060a992
    PUSH ECX                            ; 0060a993
    LEA EAX,[ESP + 0xc]                 ; 0060a994
    PUSH EAX                            ; 0060a998
    MOV EAX,[0x0068526c]                ; 0060a999 | g_IOControlBlock
    MOV EDX,dword ptr [EAX + 0x8]       ; 0060a99e
    PUSH EDX                            ; 0060a9a1
    CALL dword ptr CS:[0x611678]        ; 0060a9a2 | g_WriteFileFunc
    MOV EAX,0x1                         ; 0060a9a9
    ADD ESP,0x104                       ; 0060a9ae
        ;   Label: LAB_0060a9ae
    POP EBP                             ; 0060a9b4
    POP EDI                             ; 0060a9b5
    POP ESI                             ; 0060a9b6
    POP EBX                             ; 0060a9b7
    RET 0x4                             ; 0060a9b8

