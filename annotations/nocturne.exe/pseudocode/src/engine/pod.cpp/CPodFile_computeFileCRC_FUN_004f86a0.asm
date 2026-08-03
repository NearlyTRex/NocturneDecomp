; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint engine_pod_cpp_CPodFile_computeFileCRC_FUN_004f86a0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_pod.cpp_CPodFile_verifyChecksum_FUN_004f8240 at 004f84a0
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_0058db1d
;   TerminatedCString s_CPodFile_computeOneFileC_0058db2f
;   TerminatedCString s_rb_0058db5b
;   TerminatedCString s_engine_pod_cpp_0058db5e
;   TerminatedCString s_CPodFile_computeOneFileC_0058db70
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   undefined4 DAT_01e428d0
;   undefined4 DAT_01e428d1
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_fseek_FUN_0056582c
;   engine_pod.cpp_crc32UpdateByte_FUN_004f77d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f86a0
        ;   Label: engine_pod.cpp_CPodFile_computeFileCRC_FUN_004f86a0
    PUSH ESI                            ; 004f86a1
    PUSH EDI                            ; 004f86a2
    PUSH EBP                            ; 004f86a3
    SUB ESP,0xc                         ; 004f86a4
    MOV EBX,dword ptr [ESP + 0x20]      ; 004f86a7
    MOV EDI,dword ptr [ESP + 0x24]      ; 004f86ab
    TEST EDI,EDI                        ; 004f86af
    JL 0x004f86bb                       ; 004f86b1
        ;   XREF to: 004f86bb (CONDITIONAL_JUMP)  ; LAB_004f86bb
    CMP EDI,dword ptr [EBX + 0x208]     ; 004f86b3
    JL 0x004f86de                       ; 004f86b9
        ;   XREF to: 004f86de (CONDITIONAL_JUMP)  ; LAB_004f86de
    MOV ECX,0x58db1d                    ; 004f86bb | = "..\\engine\\pod.cpp"
        ;   Label: LAB_004f86bb
    MOV ESI,0x221                       ; 004f86c0
    PUSH 0x58db2f                       ; 004f86c5 | = "CPodFile::computeOneFileCRC - invalid..."
    MOV dword ptr [0x01cc4800],ECX      ; 004f86ca | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004f86d0 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f86d6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f86db
    PUSH 0x58db5b                       ; 004f86de | = "rb"
        ;   Label: LAB_004f86de
    LEA ESI,[EBX + 0x4]                 ; 004f86e3
    PUSH ESI                            ; 004f86e6
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004f86e7
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004f86ec
    MOV dword ptr [ESP],EAX             ; 004f86ef
    TEST EAX,EAX                        ; 004f86f2
    JNZ 0x004f8719                      ; 004f86f4
        ;   XREF to: 004f8719 (CONDITIONAL_JUMP)  ; LAB_004f8719
    PUSH ESI                            ; 004f86f6
    MOV EBP,0x58db5e                    ; 004f86f7 | = "..\\engine\\pod.cpp"
    MOV EAX,0x226                       ; 004f86fc
    PUSH 0x58db70                       ; 004f8701 | = "CPodFile::computeOneFileCRC - can't o..."
    MOV dword ptr [0x01cc4800],EBP      ; 004f8706 | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004f870c | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f8711
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004f8716
    LEA ESI,[EDI*0x4 + 0x0]             ; 004f8719
        ;   Label: LAB_004f8719
    ADD ESI,EDI                         ; 004f8720
    MOV EAX,dword ptr [EBX + 0x20c]     ; 004f8722
    SHL ESI,0x2                         ; 004f8728
    PUSH 0x0                            ; 004f872b
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x8] ; 004f872d
    PUSH EDX                            ; 004f8731
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f8732
    PUSH ECX                            ; 004f8736
    CALL crt_stdio.c_fseek_FUN_0056582c ; 004f8737
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_0056582c(_FILE * file, long offset, int whence)
    MOV EAX,dword ptr [EBX + 0x20c]     ; 004f873c
    ADD ESP,0xc                         ; 004f8742
    ADD ESI,EAX                         ; 004f8745
    MOV EBP,0xffffffff                  ; 004f8747
    MOV EAX,dword ptr [ESP]             ; 004f874c
    MOV EDI,dword ptr [ESI + 0x4]       ; 004f874f
    MOV dword ptr [ESP + 0x8],EAX       ; 004f8752
    CMP EDI,0x10000                     ; 004f8756
    JL 0x004f87a8                       ; 004f875c
        ;   XREF to: 004f87a8 (CONDITIONAL_JUMP)  ; LAB_004f87a8
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f875e
        ;   Label: LAB_004f875e
    PUSH EBX                            ; 004f8762
    PUSH 0x1                            ; 004f8763
    PUSH 0x10000                        ; 004f8765
    PUSH 0x1e428d0                      ; 004f876a | DAT_01e428d0
    MOV ESI,0x1e428d0                   ; 004f876f
    XOR EBX,EBX                         ; 004f8774
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f8776
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f877b
    MOV EAX,EBP                         ; 004f877e
    XOR EDX,EDX                         ; 004f8780
        ;   Label: LAB_004f8780
    MOV DL,byte ptr [ESI]               ; 004f8782 | DAT_01e428d0 | DAT_01e428d1
    PUSH EDX                            ; 004f8784
    PUSH EAX                            ; 004f8785
    INC ESI                             ; 004f8786
    INC EBX                             ; 004f8787
    CALL engine_pod.cpp_crc32UpdateByte_FUN_004f77d0 ; 004f8788
        ;   XREF to: 004f77d0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_004f77d0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 004f878d
    CMP EBX,0x10000                     ; 004f8790
    JC 0x004f8780                       ; 004f8796
        ;   XREF to: 004f8780 (CONDITIONAL_JUMP)  ; LAB_004f8780
    SUB EDI,0x10000                     ; 004f8798
    MOV EBP,EAX                         ; 004f879e
    CMP EDI,0x10000                     ; 004f87a0
    JGE 0x004f875e                      ; 004f87a6
        ;   XREF to: 004f875e (CONDITIONAL_JUMP)  ; LAB_004f875e
    MOV ESI,dword ptr [ESP + 0x8]       ; 004f87a8
        ;   Label: LAB_004f87a8
    PUSH ESI                            ; 004f87ac
    PUSH 0x1                            ; 004f87ad
    PUSH EDI                            ; 004f87af
    PUSH 0x1e428d0                      ; 004f87b0 | DAT_01e428d0
    MOV EBX,0x1e428d0                   ; 004f87b5
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f87ba
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f87bf
    XOR ESI,ESI                         ; 004f87c2
    MOV dword ptr [ESP + 0x4],EDI       ; 004f87c4
    TEST EDI,EDI                        ; 004f87c8
    JBE 0x004f87f0                      ; 004f87ca
        ;   XREF to: 004f87f0 (CONDITIONAL_JUMP)  ; LAB_004f87f0
    MOV EDI,dword ptr [ESP + 0x4]       ; 004f87cc
    XOR EAX,EAX                         ; 004f87d0
        ;   Label: LAB_004f87d0
    MOV AL,byte ptr [EBX]               ; 004f87d2 | DAT_01e428d0 | DAT_01e428d1
    PUSH EAX                            ; 004f87d4
    PUSH EBP                            ; 004f87d5
    INC EBX                             ; 004f87d6
    INC ESI                             ; 004f87d7
    CALL engine_pod.cpp_crc32UpdateByte_FUN_004f77d0 ; 004f87d8
        ;   XREF to: 004f77d0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_004f77d0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 004f87dd
    MOV EBP,EAX                         ; 004f87e0
    CMP ESI,EDI                         ; 004f87e2
    JC 0x004f87d0                       ; 004f87e4
        ;   XREF to: 004f87d0 (CONDITIONAL_JUMP)  ; LAB_004f87d0
    LEA EAX,[EAX]                       ; 004f87e6
    LEA EDX,[EDX]                       ; 004f87ec
    MOV EAX,dword ptr [ESP]             ; 004f87f0
        ;   Label: LAB_004f87f0
    PUSH EAX                            ; 004f87f3
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f87f4
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004f87f9
    MOV EAX,EBP                         ; 004f87fc
    ADD ESP,0xc                         ; 004f87fe
    POP EBP                             ; 004f8801
    POP EDI                             ; 004f8802
    POP ESI                             ; 004f8803
    POP EBX                             ; 004f8804
    RET                                 ; 004f8805

