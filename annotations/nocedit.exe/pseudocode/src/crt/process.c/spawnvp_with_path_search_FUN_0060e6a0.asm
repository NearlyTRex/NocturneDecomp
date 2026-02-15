; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_process_c_spawnvp_with_path_search_FUN_0060e6a0(int mode,char *program,char **argv)
;
; Parameters:
; int              Stack[0x4]:4   mode
; char *           Stack[0x8]:4   program
; char * *         Stack[0xc]:4   argv
;
; XREF[1]:
;   crt_process.c_spawnvp_FUN_0060ca20 at 0060ca38
;
; Referenced Globals:
;   TerminatedCString s_PATH_00659750
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;
; Called Functions:
;   crt_env.c_getenv_FUN_006013f0
;   crt_errno.c_setErrno_FUN_00602790
;   crt_errno.c_SetWindowsError_FUN_006027c8
;   crt_process.c_spawnvp_FUN_0060f39c
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_string.c_memcpy_FUN_0060cd60
;   crt_string.c_strchr_FUN_0060f890
;   crt_string.c_strlen_FUN_0060f870
;   crt_thread.c_GetTLS_FUN_0060242c
;
; *****************************************************************************

section .text

    PUSH 0x130                          ; 0060e6a0
        ;   Label: crt_process.c_spawnvp_with_path_search_FUN_0060e6a0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0060e6a5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0060e6aa
    PUSH ESI                            ; 0060e6ab
    PUSH EDI                            ; 0060e6ac
    PUSH EBP                            ; 0060e6ad
    SUB ESP,0x10c                       ; 0060e6ae
    MOV EBP,dword ptr [ESP + 0x124]     ; 0060e6b4
    MOV EDX,dword ptr [ESP + 0x12c]     ; 0060e6bb
    PUSH EDX                            ; 0060e6c2
    MOV EBX,dword ptr [ESP + 0x12c]     ; 0060e6c3
    PUSH EBX                            ; 0060e6ca
    PUSH EBP                            ; 0060e6cb
    MOV ECX,dword ptr [ESP + 0x12c]     ; 0060e6cc
    PUSH ECX                            ; 0060e6d3
    CALL crt_process.c_spawnvp_FUN_0060f39c ; 0060e6d4
        ;   XREF to: 0060f39c (UNCONDITIONAL_CALL)  ; int crt_process.c_spawnvp_FUN_0060f39c(int mode, char * cmdname, char * * argv)
    ADD ESP,0x10                        ; 0060e6d9
    MOV EDI,EAX                         ; 0060e6dc
    CMP EAX,-0x1                        ; 0060e6de
    JNZ 0x0060e83b                      ; 0060e6e1
        ;   XREF to: 0060e83b (CONDITIONAL_JUMP)  ; LAB_0060e83b
    CALL dword ptr [0x00684ee4]         ; 0060e6e7 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    CMP dword ptr [EAX + 0x4],0x1       ; 0060e6ed
    JZ 0x0060e703                       ; 0060e6f1
        ;   XREF to: 0060e703 (CONDITIONAL_JUMP)  ; LAB_0060e703
    CALL dword ptr [0x00684ee4]         ; 0060e6f3 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    CMP dword ptr [EAX + 0x4],0x9       ; 0060e6f9
    JNZ 0x0060e83b                      ; 0060e6fd
        ;   XREF to: 0060e83b (CONDITIONAL_JUMP)  ; LAB_0060e83b
    MOV AH,byte ptr [EBP]               ; 0060e703
        ;   Label: LAB_0060e703
    CMP AH,0x5c                         ; 0060e706
    JZ 0x0060e83b                       ; 0060e709
        ;   XREF to: 0060e83b (CONDITIONAL_JUMP)  ; LAB_0060e83b
    TEST AH,AH                          ; 0060e70f
    JZ 0x0060e83b                       ; 0060e711
        ;   XREF to: 0060e83b (CONDITIONAL_JUMP)  ; LAB_0060e83b
    CMP byte ptr [EBP + 0x1],0x3a       ; 0060e717
    JZ 0x0060e83b                       ; 0060e71b
        ;   XREF to: 0060e83b (CONDITIONAL_JUMP)  ; LAB_0060e83b
    PUSH 0x659750                       ; 0060e721 | = "PATH"
    CALL crt_env.c_getenv_FUN_006013f0  ; 0060e726
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_006013f0(char * name)
    MOV ESI,EAX                         ; 0060e72b
    ADD ESP,0x4                         ; 0060e72d
    MOV EBX,EAX                         ; 0060e730
    TEST EAX,EAX                        ; 0060e732
    JZ 0x0060e83b                       ; 0060e734
        ;   XREF to: 0060e83b (CONDITIONAL_JUMP)  ; LAB_0060e83b
    PUSH EBP                            ; 0060e73a
    CALL crt_string.c_strlen_FUN_0060f870 ; 0060e73b
        ;   XREF to: 0060f870 (UNCONDITIONAL_CALL)  ; int crt_string.c_strlen_FUN_0060f870(char * str)
    ADD ESP,0x4                         ; 0060e740
    INC EAX                             ; 0060e743
    MOV CL,byte ptr [ESI]               ; 0060e744
    MOV dword ptr [ESP + 0x108],EAX     ; 0060e746
    TEST CL,CL                          ; 0060e74d
    JZ 0x0060e83b                       ; 0060e74f
        ;   XREF to: 0060e83b (CONDITIONAL_JUMP)  ; LAB_0060e83b
    MOV EAX,0x104                       ; 0060e755
    MOV ECX,dword ptr [ESP + 0x108]     ; 0060e75a
    SUB EAX,ECX                         ; 0060e761
    MOV dword ptr [ESP + 0x104],EAX     ; 0060e763
    PUSH 0x3b                           ; 0060e76a
        ;   Label: LAB_0060e76a
    PUSH EBX                            ; 0060e76c
    CALL crt_string.c_strchr_FUN_0060f890 ; 0060e76d
        ;   XREF to: 0060f890 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strchr_FUN_0060f890(char * str, int ch)
    ADD ESP,0x8                         ; 0060e772
    MOV ESI,EAX                         ; 0060e775
    TEST EAX,EAX                        ; 0060e777
    JNZ 0x0060e787                      ; 0060e779
        ;   XREF to: 0060e787 (CONDITIONAL_JUMP)  ; LAB_0060e787
    PUSH EBX                            ; 0060e77b
    CALL crt_string.c_strlen_FUN_0060f870 ; 0060e77c
        ;   XREF to: 0060f870 (UNCONDITIONAL_CALL)  ; int crt_string.c_strlen_FUN_0060f870(char * str)
    ADD ESP,0x4                         ; 0060e781
    LEA ESI,[EBX + EAX*0x1]             ; 0060e784
    MOV EDI,ESI                         ; 0060e787
        ;   Label: LAB_0060e787
    MOV EAX,dword ptr [ESP + 0x104]     ; 0060e789
    SUB EDI,EBX                         ; 0060e790
    CMP EDI,EAX                         ; 0060e792
    JBE 0x0060e7b4                      ; 0060e794
        ;   XREF to: 0060e7b4 (CONDITIONAL_JUMP)  ; LAB_0060e7b4
    PUSH 0x2                            ; 0060e796
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060e798
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 0060e79d
    PUSH 0xa                            ; 0060e7a0
    CALL crt_errno.c_SetWindowsError_FUN_006027c8 ; 0060e7a2
        ;   XREF to: 006027c8 (UNCONDITIONAL_CALL)  ; void crt_errno.c_SetWindowsError_FUN_006027c8(DWORD windows_error_code)
    MOV EAX,0xffffffff                  ; 0060e7a7
    ADD ESP,0x4                         ; 0060e7ac
    JMP 0x0060e83d                      ; 0060e7af
        ;   XREF to: 0060e83d (UNCONDITIONAL_JUMP)  ; LAB_0060e83d
    PUSH EDI                            ; 0060e7b4
        ;   Label: LAB_0060e7b4
    PUSH EBX                            ; 0060e7b5
    LEA EAX,[ESP + 0x8]                 ; 0060e7b6
    LEA EBX,[ESP + 0x8]                 ; 0060e7ba
    PUSH EAX                            ; 0060e7be
    ADD EBX,EDI                         ; 0060e7bf
    CALL crt_string.c_memcpy_FUN_0060cd60 ; 0060e7c1
        ;   XREF to: 0060cd60 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memcpy_FUN_0060cd60(void * dest, void * src, SIZE_T count)
    MOV AL,byte ptr [EBX + -0x1]        ; 0060e7c6
    ADD ESP,0xc                         ; 0060e7c9
    CMP AL,0x5c                         ; 0060e7cc
    JZ 0x0060e7d4                       ; 0060e7ce
        ;   XREF to: 0060e7d4 (CONDITIONAL_JUMP)  ; LAB_0060e7d4
    MOV byte ptr [EBX],0x5c             ; 0060e7d0
    INC EBX                             ; 0060e7d3
    MOV EDX,dword ptr [ESP + 0x108]     ; 0060e7d4
        ;   Label: LAB_0060e7d4
    PUSH EDX                            ; 0060e7db
    PUSH EBP                            ; 0060e7dc
    PUSH EBX                            ; 0060e7dd
    CALL crt_string.c_memcpy_FUN_0060cd60 ; 0060e7de
        ;   XREF to: 0060cd60 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memcpy_FUN_0060cd60(void * dest, void * src, SIZE_T count)
    ADD ESP,0xc                         ; 0060e7e3
    MOV EBX,dword ptr [ESP + 0x12c]     ; 0060e7e6
    PUSH EBX                            ; 0060e7ed
    MOV ECX,dword ptr [ESP + 0x12c]     ; 0060e7ee
    PUSH ECX                            ; 0060e7f5
    LEA EAX,[ESP + 0x8]                 ; 0060e7f6
    PUSH EAX                            ; 0060e7fa
    MOV EDI,dword ptr [ESP + 0x12c]     ; 0060e7fb
    PUSH EDI                            ; 0060e802
    CALL crt_process.c_spawnvp_FUN_0060f39c ; 0060e803
        ;   XREF to: 0060f39c (UNCONDITIONAL_CALL)  ; int crt_process.c_spawnvp_FUN_0060f39c(int mode, char * cmdname, char * * argv)
    ADD ESP,0x10                        ; 0060e808
    MOV EDI,EAX                         ; 0060e80b
    CMP EAX,-0x1                        ; 0060e80d
    JNZ 0x0060e83b                      ; 0060e810
        ;   XREF to: 0060e83b (CONDITIONAL_JUMP)  ; LAB_0060e83b
    CALL dword ptr [0x00684ee4]         ; 0060e812 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    CMP dword ptr [EAX + 0x4],0x1       ; 0060e818
    JZ 0x0060e82a                       ; 0060e81c
        ;   XREF to: 0060e82a (CONDITIONAL_JUMP)  ; LAB_0060e82a
    CALL dword ptr [0x00684ee4]         ; 0060e81e | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    CMP dword ptr [EAX + 0x4],0x9       ; 0060e824
    JNZ 0x0060e83b                      ; 0060e828
        ;   XREF to: 0060e83b (CONDITIONAL_JUMP)  ; LAB_0060e83b
    CMP byte ptr [ESI],0x3b             ; 0060e82a
        ;   Label: LAB_0060e82a
    JNZ 0x0060e83b                      ; 0060e82d
        ;   XREF to: 0060e83b (CONDITIONAL_JUMP)  ; LAB_0060e83b
    LEA EBX,[ESI + 0x1]                 ; 0060e82f
    CMP byte ptr [EBX],0x0              ; 0060e832
    JNZ 0x0060e76a                      ; 0060e835
        ;   XREF to: 0060e76a (CONDITIONAL_JUMP)  ; LAB_0060e76a
    MOV EAX,EDI                         ; 0060e83b
        ;   Label: LAB_0060e83b
    ADD ESP,0x10c                       ; 0060e83d
        ;   Label: LAB_0060e83d
    POP EBP                             ; 0060e843
    POP EDI                             ; 0060e844
    POP ESI                             ; 0060e845
    POP EBX                             ; 0060e846
    RET                                 ; 0060e847

