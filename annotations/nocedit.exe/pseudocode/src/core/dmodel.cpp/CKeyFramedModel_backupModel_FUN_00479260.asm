; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_dmodel_cpp_CKeyFramedModel_backupModel_FUN_00479260(CKeyFramedModel *this_ptr,char *filename)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0061fc20
;   TerminatedCString s_rb_0061fc33
;   TerminatedCString s_core_dmodel_cpp_0061fc36
;   TerminatedCString s_wb_0061fc49
;   TerminatedCString s_core_dmodel_cpp_0061fc4c
;   TerminatedCString s_core_dmodel_cpp_0061fc5f
;   TerminatedCString s_core_dmodel_cpp_0061fc72
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fputc_FUN_006007a0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479260
        ;   Label: core_dmodel.cpp_CKeyFramedModel_backupModel_FUN_00479260
    PUSH ESI                            ; 00479261
    PUSH EDI                            ; 00479262
    PUSH 0x5ef                          ; 00479263
    PUSH 0x61fc20                       ; 00479268 | = "..\\core\\dmodel.cpp"
    PUSH 0x61fc33                       ; 0047926d | = "rb"
    PUSH 0x0                            ; 00479272
    MOV EDX,dword ptr [ESP + 0x20]      ; 00479274
    PUSH EDX                            ; 00479278
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00479279
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EDI,EAX                         ; 0047927e
    ADD ESP,0x14                        ; 00479280
    MOV ESI,EAX                         ; 00479283
    TEST EAX,EAX                        ; 00479285
    JNZ 0x0047928d                      ; 00479287
        ;   XREF to: 0047928d (CONDITIONAL_JUMP)  ; LAB_0047928d
    POP EDI                             ; 00479289
    POP ESI                             ; 0047928a
    POP EBX                             ; 0047928b
    RET                                 ; 0047928c
    PUSH 0x5f2                          ; 0047928d
        ;   Label: LAB_0047928d
    PUSH 0x61fc36                       ; 00479292 | = "..\\core\\dmodel.cpp"
    PUSH 0x61fc49                       ; 00479297 | = "wb"
    PUSH 0x0                            ; 0047929c
    MOV ECX,dword ptr [ESP + 0x24]      ; 0047929e
    PUSH ECX                            ; 004792a2
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004792a3
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004792a8
    MOV EBX,EAX                         ; 004792ab
    TEST EAX,EAX                        ; 004792ad
    JZ 0x004792ca                       ; 004792af
        ;   XREF to: 004792ca (CONDITIONAL_JUMP)  ; LAB_004792ca
    PUSH ESI                            ; 004792b1
        ;   Label: LAB_004792b1
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004792b2
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 004792b7
    TEST EAX,EAX                        ; 004792ba
    JL 0x004792e3                       ; 004792bc
        ;   XREF to: 004792e3 (CONDITIONAL_JUMP)  ; LAB_004792e3
    PUSH EBX                            ; 004792be
    PUSH EAX                            ; 004792bf
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 004792c0
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 004792c5
    JMP 0x004792b1                      ; 004792c8
        ;   XREF to: 004792b1 (UNCONDITIONAL_JUMP)  ; LAB_004792b1
    PUSH 0x5f4                          ; 004792ca
        ;   Label: LAB_004792ca
    PUSH 0x61fc4c                       ; 004792cf | = "..\\core\\dmodel.cpp"
    PUSH EDI                            ; 004792d4
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004792d5
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004792da
    XOR EAX,EAX                         ; 004792dd
    POP EDI                             ; 004792df
    POP ESI                             ; 004792e0
    POP EBX                             ; 004792e1
    RET                                 ; 004792e2
    TEST byte ptr [ESI + 0xc],0x20      ; 004792e3
        ;   Label: LAB_004792e3
    JZ 0x00479317                       ; 004792e7
        ;   XREF to: 00479317 (CONDITIONAL_JUMP)  ; LAB_00479317
    XOR EDI,EDI                         ; 004792e9
        ;   Label: LAB_004792e9
    PUSH 0x600                          ; 004792eb
        ;   Label: LAB_004792eb
    PUSH 0x61fc5f                       ; 004792f0 | = "..\\core\\dmodel.cpp"
    PUSH ESI                            ; 004792f5
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004792f6
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004792fb
    PUSH 0x601                          ; 004792fe
    PUSH 0x61fc72                       ; 00479303 | = "..\\core\\dmodel.cpp"
    PUSH EBX                            ; 00479308
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00479309
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0047930e
    MOV EAX,EDI                         ; 00479311
    POP EDI                             ; 00479313
    POP ESI                             ; 00479314
    POP EBX                             ; 00479315
    RET                                 ; 00479316
    TEST byte ptr [EBX + 0xc],0x20      ; 00479317
        ;   Label: LAB_00479317
    JNZ 0x004792e9                      ; 0047931b
        ;   XREF to: 004792e9 (CONDITIONAL_JUMP)  ; LAB_004792e9
    MOV EDI,0x1                         ; 0047931d
    JMP 0x004792eb                      ; 00479322
        ;   XREF to: 004792eb (UNCONDITIONAL_JUMP)  ; LAB_004792eb

