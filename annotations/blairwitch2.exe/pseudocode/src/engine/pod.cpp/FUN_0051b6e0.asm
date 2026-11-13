; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_pod_cpp_FUN_0051b6e0(void)
;
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_stdio.c_fopen_FUN_005b910c
;   crt_stdio.c_fseek_FUN_005b929c
;   crt_stdio.c_fwrite_FUN_005b9690
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;   engine_pod.cpp_CPodFile_cleanup_FUN_0051a8f0
;   engine_pod.cpp_CPodFile_ctor_FUN_00519e50
;   engine_pod.cpp_CPodFile_dtor_FUN_00519ec0
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_00519f00
;   engine_pod.cpp_crc32UpdateByte_FUN_00519cb0
;   shape_edittool.cpp_FUN_0047be90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b6e0
        ;   Label: engine_pod.cpp_FUN_0051b6e0
    PUSH ESI                            ; 0051b6e1
    PUSH EDI                            ; 0051b6e2
    PUSH EBP                            ; 0051b6e3
    SUB ESP,0x43c                       ; 0051b6e4
    MOV EDX,dword ptr [ESP + 0x454]     ; 0051b6ea
    PUSH EDX                            ; 0051b6f1
    PUSH 0x5e2859                       ; 0051b6f2
    MOV ECX,dword ptr [0x006138e0]      ; 0051b6f7 | g_CEditorToolsPtr
    PUSH ECX                            ; 0051b6fd
    CALL shape_edittool.cpp_FUN_0047be90 ; 0051b6fe
        ;   XREF to: 0047be90 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be90()
    ADD ESP,0xc                         ; 0051b703
    MOV EAX,ESP                         ; 0051b706
    PUSH EAX                            ; 0051b708
    CALL engine_pod.cpp_CPodFile_ctor_FUN_00519e50 ; 0051b709
        ;   XREF to: 00519e50 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_00519e50(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 0051b70e
    MOV EBX,dword ptr [ESP + 0x454]     ; 0051b711
    PUSH EBX                            ; 0051b718
    LEA EAX,[ESP + 0x4]                 ; 0051b719
    PUSH EAX                            ; 0051b71d
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_00519f00 ; 0051b71e
        ;   XREF to: 00519f00 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_mountFromFile_FUN_00519f00(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 0051b723
    TEST EAX,EAX                        ; 0051b726
    JNZ 0x0051b74e                      ; 0051b728
        ;   XREF to: 0051b74e (CONDITIONAL_JUMP)  ; LAB_0051b74e
    PUSH EBX                            ; 0051b72a
    MOV ESI,0x5e287e                    ; 0051b72b
    MOV EDI,0x4ee                       ; 0051b730
    PUSH 0x5e2890                       ; 0051b735
    MOV dword ptr [0x01d046a0],ESI      ; 0051b73a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0051b740 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051b746
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0051b74b
    MOV EAX,ESP                         ; 0051b74e
        ;   Label: LAB_0051b74e
    PUSH EAX                            ; 0051b750
    MOV EBX,dword ptr [ESP + 0x4]       ; 0051b751
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_0051a8f0 ; 0051b755
        ;   XREF to: 0051a8f0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_cleanup_FUN_0051a8f0(CPodFile * this_ptr)
    MOV EAX,0xffffffff                  ; 0051b75a
    ADD ESP,0x4                         ; 0051b75f
    MOV dword ptr [ESP + 0x434],EAX     ; 0051b762
    CMP EBX,0x1                         ; 0051b769
    JNZ 0x0051b87c                      ; 0051b76c
        ;   XREF to: 0051b87c (CONDITIONAL_JUMP)  ; LAB_0051b87c
    MOV dword ptr [ESP + 0x434],0x54    ; 0051b772
    MOV EBP,dword ptr [ESP + 0x454]     ; 0051b77d
        ;   Label: LAB_0051b77d
    PUSH EBP                            ; 0051b784
    PUSH 0x5e2403                       ; 0051b785
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 0051b78a
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0051b78f
    MOV EDX,dword ptr [ESP + 0x434]     ; 0051b792
    PUSH 0x5e2404                       ; 0051b799
    SUB EAX,EDX                         ; 0051b79e
    PUSH EBP                            ; 0051b7a0
    MOV dword ptr [ESP + 0x438],EAX     ; 0051b7a1
    CALL crt_stdio.c_fopen_FUN_005b910c ; 0051b7a8
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005b910c(char * filename, char * mode)
    ADD ESP,0x8                         ; 0051b7ad
    PUSH 0x0                            ; 0051b7b0
    MOV EBX,dword ptr [ESP + 0x438]     ; 0051b7b2
    PUSH EBX                            ; 0051b7b9
    PUSH EAX                            ; 0051b7ba
    MOV EDI,EAX                         ; 0051b7bb
    MOV dword ptr [ESP + 0x444],EAX     ; 0051b7bd
    CALL crt_stdio.c_fseek_FUN_005b929c ; 0051b7c4
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005b929c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0051b7c9
    MOV ESI,0xffffffff                  ; 0051b7cc
    MOV EBP,dword ptr [ESP + 0x430]     ; 0051b7d1
    XOR EBX,EBX                         ; 0051b7d8
    TEST EBP,EBP                        ; 0051b7da
    JLE 0x0051b800                      ; 0051b7dc
        ;   XREF to: 0051b800 (CONDITIONAL_JUMP)  ; LAB_0051b800
    PUSH EDI                            ; 0051b7de
        ;   Label: LAB_0051b7de
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0051b7df
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 0051b7e4
    AND EAX,0xff                        ; 0051b7e7
    PUSH EAX                            ; 0051b7ec
    PUSH ESI                            ; 0051b7ed
    INC EBX                             ; 0051b7ee
    CALL engine_pod.cpp_crc32UpdateByte_FUN_00519cb0 ; 0051b7ef
        ;   XREF to: 00519cb0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_00519cb0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 0051b7f4
    MOV ESI,EAX                         ; 0051b7f7
    CMP EBX,EBP                         ; 0051b7f9
    JL 0x0051b7de                       ; 0051b7fb
        ;   XREF to: 0051b7de (CONDITIONAL_JUMP)  ; LAB_0051b7de
    LEA EAX,[EAX]                       ; 0051b7fd
    MOV EDX,dword ptr [ESP + 0x438]     ; 0051b800
        ;   Label: LAB_0051b800
    PUSH EDX                            ; 0051b807
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0051b808
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 0051b80d
    PUSH 0x5e28e1                       ; 0051b810
    MOV ECX,dword ptr [ESP + 0x458]     ; 0051b815
    PUSH ECX                            ; 0051b81c
    MOV dword ptr [ESP + 0x434],ESI     ; 0051b81d
    CALL crt_stdio.c_fopen_FUN_005b910c ; 0051b824
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005b910c(char * filename, char * mode)
    ADD ESP,0x8                         ; 0051b829
    MOV EBX,EAX                         ; 0051b82c
    MOV EAX,dword ptr [ESP + 0x434]     ; 0051b82e
    PUSH 0x0                            ; 0051b835
    SUB EAX,0x4                         ; 0051b837
    PUSH EAX                            ; 0051b83a
    PUSH EBX                            ; 0051b83b
    CALL crt_stdio.c_fseek_FUN_005b929c ; 0051b83c
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005b929c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0051b841
    PUSH EBX                            ; 0051b844
    PUSH 0x1                            ; 0051b845
    PUSH 0x4                            ; 0051b847
    LEA EAX,[ESP + 0x438]               ; 0051b849
    PUSH EAX                            ; 0051b850
    CALL crt_stdio.c_fwrite_FUN_005b9690 ; 0051b851
        ;   XREF to: 005b9690 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005b9690(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0051b856
    PUSH EBX                            ; 0051b859
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0051b85a
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 0051b85f
    PUSH 0x0                            ; 0051b862
        ;   Label: LAB_0051b862
    LEA EAX,[ESP + 0x4]                 ; 0051b864
    PUSH EAX                            ; 0051b868
    CALL engine_pod.cpp_CPodFile_dtor_FUN_00519ec0 ; 0051b869
        ;   XREF to: 00519ec0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_00519ec0(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051b86e
    ADD ESP,0x43c                       ; 0051b871
    POP EBP                             ; 0051b877
    POP EDI                             ; 0051b878
    POP ESI                             ; 0051b879
    POP EBX                             ; 0051b87a
    RET                                 ; 0051b87b
    CMP EBX,0xc8                        ; 0051b87c
        ;   Label: LAB_0051b87c
    JNZ 0x0051b894                      ; 0051b882
        ;   XREF to: 0051b894 (CONDITIONAL_JUMP)  ; LAB_0051b894
    MOV dword ptr [ESP + 0x434],0x8     ; 0051b884
    JMP 0x0051b77d                      ; 0051b88f
        ;   XREF to: 0051b77d (UNCONDITIONAL_JUMP)  ; LAB_0051b77d
    CMP EBX,0x64                        ; 0051b894
        ;   Label: LAB_0051b894
    JZ 0x0051b862                       ; 0051b897
        ;   XREF to: 0051b862 (CONDITIONAL_JUMP)  ; LAB_0051b862
    PUSH EBX                            ; 0051b899
    MOV EBX,dword ptr [ESP + 0x458]     ; 0051b89a
    PUSH EBX                            ; 0051b8a1
    MOV EDX,0x5e28b0                    ; 0051b8a2
    MOV ECX,0x4ff                       ; 0051b8a7
    PUSH 0x5e28c2                       ; 0051b8ac
    MOV dword ptr [0x01d046a0],EDX      ; 0051b8b1 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0051b8b7 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051b8bd
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 0051b8c2
    JMP 0x0051b77d                      ; 0051b8c5
        ;   XREF to: 0051b77d (UNCONDITIONAL_JUMP)  ; LAB_0051b77d

