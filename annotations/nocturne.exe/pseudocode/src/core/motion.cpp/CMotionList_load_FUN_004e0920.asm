; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionList_load_FUN_004e0920(CMotionList *this_ptr,_FILE *file_handle)
;
; Parameters:
; CMotionList *    Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CSkeleton_loadStream_FUN_005175f0 at 00517906
;
; Referenced Globals:
;   TerminatedCString s_d_0058adcd
;   TerminatedCString s_core_motion_cpp_0058add1
;   TerminatedCString s_Error_reading_motion_lis_0058ade4
;   TerminatedCString s_core_motion_cpp_0058adff
;   TerminatedCString s_Can_t_read_motion_list_i_0058ae12
;   TerminatedCString s_d_0058ae85
;   TerminatedCString s_s_0058ae89
;   TerminatedCString s_d_0058ae8d
;   TerminatedCString s_f_d_d_d_0058ae91
;   TerminatedCString s_d_d_f_0058aea6
;   TerminatedCString s_d_f_d_0058aeb0
;   TerminatedCString s_d_f_0058aeba
;   TerminatedCString s_d_0058aec1
;   TerminatedCString s_d_d_d_f_f_d_0058aec5
;   TerminatedCString s_d_0058aed8
;   ... and 5 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0920
        ;   Label: core_motion.cpp_CMotionList_load_FUN_004e0920
    PUSH ESI                            ; 004e0921
    PUSH EDI                            ; 004e0922
    PUSH EBP                            ; 004e0923
    SUB ESP,0x28                        ; 004e0924
    MOV EDI,dword ptr [ESP + 0x40]      ; 004e0927
    MOV EDX,0xffffffff                  ; 004e092b
    MOV EBX,EDI                         ; 004e0930
    MOV dword ptr [ESP + 0x4],EDX       ; 004e0932
    PUSH EBX                            ; 004e0936
        ;   Label: LAB_004e0936
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004e0937
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_00564570(_FILE * file)
    ADD ESP,0x4                         ; 004e093c
    TEST EAX,EAX                        ; 004e093f
    JL 0x004e0948                       ; 004e0941
        ;   XREF to: 004e0948 (CONDITIONAL_JUMP)  ; LAB_004e0948
    CMP EAX,0xa                         ; 004e0943
    JNZ 0x004e0936                      ; 004e0946
        ;   XREF to: 004e0936 (CONDITIONAL_JUMP)  ; LAB_004e0936
    LEA EAX,[ESP + 0x4]                 ; 004e0948
        ;   Label: LAB_004e0948
    PUSH EAX                            ; 004e094c
    PUSH 0x58adcd                       ; 004e094d | = "%d\n"
    PUSH EDI                            ; 004e0952
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004e0953
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 004e0958
    CMP dword ptr [ESP + 0x4],0x0       ; 004e095b
    JL 0x004e0cb9                       ; 004e0960
        ;   XREF to: 004e0cb9 (CONDITIONAL_JUMP)  ; LAB_004e0cb9
    MOV EBP,dword ptr [ESP + 0x4]       ; 004e0966
        ;   Label: LAB_004e0966
    CMP EBP,0x2                         ; 004e096a
    JG 0x004e0ce1                       ; 004e096d
        ;   XREF to: 004e0ce1 (CONDITIONAL_JUMP)  ; LAB_004e0ce1
    MOV EBX,EDI                         ; 004e0973
        ;   Label: LAB_004e0973
    PUSH EBX                            ; 004e0975
        ;   Label: LAB_004e0975
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004e0976
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_00564570(_FILE * file)
    ADD ESP,0x4                         ; 004e097b
    TEST EAX,EAX                        ; 004e097e
    JL 0x004e0987                       ; 004e0980
        ;   XREF to: 004e0987 (CONDITIONAL_JUMP)  ; LAB_004e0987
    CMP EAX,0xa                         ; 004e0982
    JNZ 0x004e0975                      ; 004e0985
        ;   XREF to: 004e0975 (CONDITIONAL_JUMP)  ; LAB_004e0975
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004e0987
        ;   Label: LAB_004e0987
    PUSH EBX                            ; 004e098b
    PUSH 0x58ae85                       ; 004e098c | = "%d\n"
    PUSH EDI                            ; 004e0991
    XOR ESI,ESI                         ; 004e0992
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004e0994
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EBP,dword ptr [EBX]             ; 004e0999
    ADD ESP,0xc                         ; 004e099b
    TEST EBP,EBP                        ; 004e099e
    JLE 0x004e09d0                      ; 004e09a0
        ;   XREF to: 004e09d0 (CONDITIONAL_JUMP)  ; LAB_004e09d0
    ADD EBX,0x4                         ; 004e09a2
    PUSH EBX                            ; 004e09a5
        ;   Label: LAB_004e09a5
    PUSH 0x58ae89                       ; 004e09a6 | = "%s\n"
    PUSH EDI                            ; 004e09ab
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004e09ac
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 004e09b1
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004e09b4
    INC ESI                             ; 004e09b8
    MOV EDX,dword ptr [EAX]             ; 004e09b9
    ADD EBX,0x1e                        ; 004e09bb
    CMP ESI,EDX                         ; 004e09be
    JL 0x004e09a5                       ; 004e09c0
        ;   XREF to: 004e09a5 (CONDITIONAL_JUMP)  ; LAB_004e09a5
    LEA EAX,[EAX]                       ; 004e09c2
    LEA EDX,[EDX]                       ; 004e09c8
    MOV EAX,EAX                         ; 004e09ce
    MOV EBX,EDI                         ; 004e09d0
        ;   Label: LAB_004e09d0
    PUSH EBX                            ; 004e09d2
        ;   Label: LAB_004e09d2
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004e09d3
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_00564570(_FILE * file)
    ADD ESP,0x4                         ; 004e09d8
    TEST EAX,EAX                        ; 004e09db
    JL 0x004e09e4                       ; 004e09dd
        ;   XREF to: 004e09e4 (CONDITIONAL_JUMP)  ; LAB_004e09e4
    CMP EAX,0xa                         ; 004e09df
    JNZ 0x004e09d2                      ; 004e09e2
        ;   XREF to: 004e09d2 (CONDITIONAL_JUMP)  ; LAB_004e09d2
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004e09e4
        ;   Label: LAB_004e09e4
    ADD EAX,0x964                       ; 004e09e8
    PUSH EAX                            ; 004e09ed
    PUSH 0x58ae8d                       ; 004e09ee | = "%d\n"
    PUSH EDI                            ; 004e09f3
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004e09f4
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 004e09f9
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004e09fc
    XOR ECX,ECX                         ; 004e0a00
    MOV EBX,dword ptr [EAX + 0x964]     ; 004e0a02
    MOV dword ptr [ESP + 0x10],ECX      ; 004e0a08
    TEST EBX,EBX                        ; 004e0a0c
    JLE 0x004e0cb1                      ; 004e0a0e
        ;   XREF to: 004e0cb1 (CONDITIONAL_JUMP)  ; LAB_004e0cb1
    ADD EAX,0x968                       ; 004e0a14
    MOV dword ptr [ESP + 0xc],EAX       ; 004e0a19
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e0a1d
        ;   Label: LAB_004e0a1d
    MOV ESI,EDI                         ; 004e0a21
    PUSH ESI                            ; 004e0a23
        ;   Label: LAB_004e0a23
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004e0a24
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_00564570(_FILE * file)
    ADD ESP,0x4                         ; 004e0a29
    TEST EAX,EAX                        ; 004e0a2c
    JL 0x004e0a35                       ; 004e0a2e
        ;   XREF to: 004e0a35 (CONDITIONAL_JUMP)  ; LAB_004e0a35
    CMP EAX,0xa                         ; 004e0a30
    JNZ 0x004e0a23                      ; 004e0a33
        ;   XREF to: 004e0a23 (CONDITIONAL_JUMP)  ; LAB_004e0a23
    LEA EAX,[EBX + 0x64]                ; 004e0a35
        ;   Label: LAB_004e0a35
    PUSH EAX                            ; 004e0a38
    LEA EAX,[EBX + 0x60]                ; 004e0a39
    PUSH EAX                            ; 004e0a3c
    LEA EAX,[EBX + 0x24]                ; 004e0a3d
    PUSH EAX                            ; 004e0a40
    LEA EAX,[EBX + 0x20]                ; 004e0a41
    PUSH EAX                            ; 004e0a44
    PUSH EBX                            ; 004e0a45
    PUSH 0x58ae91                       ; 004e0a46 | = "\"%[^\"]\",%f,%d,%d,%d\n"
    PUSH EDI                            ; 004e0a4b
    MOV ESI,EDI                         ; 004e0a4c
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004e0a4e
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x1c                        ; 004e0a53
    PUSH ESI                            ; 004e0a56
        ;   Label: LAB_004e0a56
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004e0a57
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_00564570(_FILE * file)
    ADD ESP,0x4                         ; 004e0a5c
    TEST EAX,EAX                        ; 004e0a5f
    JL 0x004e0a68                       ; 004e0a61
        ;   XREF to: 004e0a68 (CONDITIONAL_JUMP)  ; LAB_004e0a68
    CMP EAX,0xa                         ; 004e0a63
    JNZ 0x004e0a56                      ; 004e0a66
        ;   XREF to: 004e0a56 (CONDITIONAL_JUMP)  ; LAB_004e0a56
    LEA EAX,[EBX + 0x38]                ; 004e0a68
        ;   Label: LAB_004e0a68
    PUSH EAX                            ; 004e0a6b
    LEA EAX,[EBX + 0x34]                ; 004e0a6c
    PUSH EAX                            ; 004e0a6f
    LEA EAX,[EBX + 0x28]                ; 004e0a70
    PUSH EAX                            ; 004e0a73
    PUSH 0x58aea6                       ; 004e0a74 | = "%d,%d,%f\n"
    PUSH EDI                            ; 004e0a79
    MOV ESI,EDI                         ; 004e0a7a
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004e0a7c
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 004e0a81
    PUSH ESI                            ; 004e0a84
        ;   Label: LAB_004e0a84
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004e0a85
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_00564570(_FILE * file)
    ADD ESP,0x4                         ; 004e0a8a
    TEST EAX,EAX                        ; 004e0a8d
    JL 0x004e0a96                       ; 004e0a8f
        ;   XREF to: 004e0a96 (CONDITIONAL_JUMP)  ; LAB_004e0a96
    CMP EAX,0xa                         ; 004e0a91
    JNZ 0x004e0a84                      ; 004e0a94
        ;   XREF to: 004e0a84 (CONDITIONAL_JUMP)  ; LAB_004e0a84
    LEA EAX,[EBX + 0x40]                ; 004e0a96
        ;   Label: LAB_004e0a96
    PUSH EAX                            ; 004e0a99
    LEA EAX,[EBX + 0x3c]                ; 004e0a9a
    PUSH EAX                            ; 004e0a9d
    LEA EAX,[ESP + 0x8]                 ; 004e0a9e
    PUSH EAX                            ; 004e0aa2
    PUSH 0x58aeb0                       ; 004e0aa3 | = "%d,%f,%d\n"
    PUSH EDI                            ; 004e0aa8
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004e0aa9
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 004e0aae
    MOV EAX,dword ptr [ESP]             ; 004e0ab1
    MOV ESI,EDI                         ; 004e0ab4
    MOV dword ptr [EBX + 0x30],EAX      ; 004e0ab6
    PUSH ESI                            ; 004e0ab9
        ;   Label: LAB_004e0ab9
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004e0aba
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_00564570(_FILE * file)
    ADD ESP,0x4                         ; 004e0abf
    TEST EAX,EAX                        ; 004e0ac2
    JL 0x004e0acb                       ; 004e0ac4
        ;   XREF to: 004e0acb (CONDITIONAL_JUMP)  ; LAB_004e0acb
    CMP EAX,0xa                         ; 004e0ac6
    JNZ 0x004e0ab9                      ; 004e0ac9
        ;   XREF to: 004e0ab9 (CONDITIONAL_JUMP)  ; LAB_004e0ab9
    LEA EAX,[EBX + 0x54]                ; 004e0acb
        ;   Label: LAB_004e0acb
    PUSH EAX                            ; 004e0ace
    LEA EAX,[EBX + 0x50]                ; 004e0acf
    PUSH EAX                            ; 004e0ad2
    PUSH 0x58aeba                       ; 004e0ad3 | = "%d,%f\n"
    PUSH EDI                            ; 004e0ad8
    MOV ESI,EDI                         ; 004e0ad9
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004e0adb
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 004e0ae0
    PUSH ESI                            ; 004e0ae3
        ;   Label: LAB_004e0ae3
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004e0ae4
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_00564570(_FILE * file)
    ADD ESP,0x4                         ; 004e0ae9
    TEST EAX,EAX                        ; 004e0aec
    JL 0x004e0af5                       ; 004e0aee
        ;   XREF to: 004e0af5 (CONDITIONAL_JUMP)  ; LAB_004e0af5
    CMP EAX,0xa                         ; 004e0af0
    JNZ 0x004e0ae3                      ; 004e0af3
        ;   XREF to: 004e0ae3 (CONDITIONAL_JUMP)  ; LAB_004e0ae3
    LEA EAX,[EBX + 0x68]                ; 004e0af5
        ;   Label: LAB_004e0af5
    PUSH EAX                            ; 004e0af8
    PUSH 0x58aec1                       ; 004e0af9 | = "%d\n"
    PUSH EDI                            ; 004e0afe
    XOR ESI,ESI                         ; 004e0aff
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004e0b01
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EBP,dword ptr [EBX + 0x68]      ; 004e0b06
    ADD ESP,0xc                         ; 004e0b09
    TEST EBP,EBP                        ; 004e0b0c
    JLE 0x004e0ba1                      ; 004e0b0e
        ;   XREF to: 004e0ba1 (CONDITIONAL_JUMP)  ; LAB_004e0ba1
    LEA EAX,[EBX + 0x6c]                ; 004e0b14
    MOV dword ptr [ESP + 0x14],EAX      ; 004e0b17
    LEA EAX,[EBX + 0x74]                ; 004e0b1b
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e0b1e
    LEA EAX,[EBX + 0x78]                ; 004e0b22
    MOV dword ptr [ESP + 0x24],EAX      ; 004e0b25
    LEA EAX,[EBX + 0x7c]                ; 004e0b29
    MOV dword ptr [ESP + 0x20],EAX      ; 004e0b2c
    LEA EBP,[EBX + 0x80]                ; 004e0b30
    IMUL EAX,ESI,0x18                   ; 004e0b36
        ;   Label: LAB_004e0b36
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e0b39
    PUSH EBP                            ; 004e0b3d
    ADD EDX,EAX                         ; 004e0b3e
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e0b40
    PUSH EAX                            ; 004e0b44
    MOV dword ptr [ESP + 0x10],EDX      ; 004e0b45
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004e0b49
    PUSH EDX                            ; 004e0b4d
    MOV ECX,dword ptr [ESP + 0x28]      ; 004e0b4e
    PUSH ECX                            ; 004e0b52
    LEA EAX,[ESP + 0x10]                ; 004e0b53
    PUSH EAX                            ; 004e0b57
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e0b58
    PUSH EAX                            ; 004e0b5c
    PUSH 0x58aec5                       ; 004e0b5d | = "%d,%d,%d,%f,%f,%d\n"
    PUSH EDI                            ; 004e0b62
    ADD EBP,0x18                        ; 004e0b63
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004e0b66
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x20                        ; 004e0b6b
    INC ESI                             ; 004e0b6e
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e0b6f
    MOV ECX,dword ptr [ESP + 0x24]      ; 004e0b73
    MOV EAX,dword ptr [ESP]             ; 004e0b77
    ADD ECX,0x18                        ; 004e0b7a
    MOV dword ptr [EDX + 0x4],EAX       ; 004e0b7d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e0b80
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e0b84
    MOV dword ptr [ESP + 0x24],ECX      ; 004e0b88
    ADD EDX,0x18                        ; 004e0b8c
    ADD EAX,0x18                        ; 004e0b8f
    MOV dword ptr [ESP + 0x1c],EDX      ; 004e0b92
    MOV EDX,dword ptr [EBX + 0x68]      ; 004e0b96
    MOV dword ptr [ESP + 0x20],EAX      ; 004e0b99
    CMP ESI,EDX                         ; 004e0b9d
    JL 0x004e0b36                       ; 004e0b9f
        ;   XREF to: 004e0b36 (CONDITIONAL_JUMP)  ; LAB_004e0b36
    MOV EBP,EDI                         ; 004e0ba1
        ;   Label: LAB_004e0ba1
    PUSH EBP                            ; 004e0ba3
        ;   Label: LAB_004e0ba3
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004e0ba4
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_00564570(_FILE * file)
    ADD ESP,0x4                         ; 004e0ba9
    TEST EAX,EAX                        ; 004e0bac
    JL 0x004e0bb5                       ; 004e0bae
        ;   XREF to: 004e0bb5 (CONDITIONAL_JUMP)  ; LAB_004e0bb5
    CMP EAX,0xa                         ; 004e0bb0
    JNZ 0x004e0ba3                      ; 004e0bb3
        ;   XREF to: 004e0ba3 (CONDITIONAL_JUMP)  ; LAB_004e0ba3
    LEA EAX,[EBX + 0x4a4]               ; 004e0bb5
        ;   Label: LAB_004e0bb5
    PUSH EAX                            ; 004e0bbb
    PUSH 0x58aed8                       ; 004e0bbc | = "%d\n"
    PUSH EDI                            ; 004e0bc1
    XOR ESI,ESI                         ; 004e0bc2
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004e0bc4
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV ECX,dword ptr [EBX + 0x4a4]     ; 004e0bc9
    ADD ESP,0xc                         ; 004e0bcf
    TEST ECX,ECX                        ; 004e0bd2
    JLE 0x004e0c11                      ; 004e0bd4
        ;   XREF to: 004e0c11 (CONDITIONAL_JUMP)  ; LAB_004e0c11
    LEA EAX,[EBX + 0x4a8]               ; 004e0bd6
    LEA EBP,[EBX + 0x4ac]               ; 004e0bdc
    MOV dword ptr [ESP + 0x18],EAX      ; 004e0be2
    MOV EDX,dword ptr [ESP + 0x18]      ; 004e0be6
        ;   Label: LAB_004e0be6
    LEA EAX,[ESI*0x8 + 0x0]             ; 004e0bea
    PUSH EBP                            ; 004e0bf1
    ADD EAX,EDX                         ; 004e0bf2
    PUSH EAX                            ; 004e0bf4
    PUSH 0x58aedc                       ; 004e0bf5 | = "%d,%d\n"
    PUSH EDI                            ; 004e0bfa
    ADD EBP,0x8                         ; 004e0bfb
    INC ESI                             ; 004e0bfe
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004e0bff
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV ECX,dword ptr [EBX + 0x4a4]     ; 004e0c04
    ADD ESP,0x10                        ; 004e0c0a
    CMP ESI,ECX                         ; 004e0c0d
    JL 0x004e0be6                       ; 004e0c0f
        ;   XREF to: 004e0be6 (CONDITIONAL_JUMP)  ; LAB_004e0be6
    CMP dword ptr [ESP + 0x4],0x2       ; 004e0c11
        ;   Label: LAB_004e0c11
    JL 0x004e0d0b                       ; 004e0c16
        ;   XREF to: 004e0d0b (CONDITIONAL_JUMP)  ; LAB_004e0d0b
    MOV EBP,EDI                         ; 004e0c1c
    PUSH EBP                            ; 004e0c1e
        ;   Label: LAB_004e0c1e
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004e0c1f
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_00564570(_FILE * file)
    ADD ESP,0x4                         ; 004e0c24
    TEST EAX,EAX                        ; 004e0c27
    JL 0x004e0c30                       ; 004e0c29
        ;   XREF to: 004e0c30 (CONDITIONAL_JUMP)  ; LAB_004e0c30
    CMP EAX,0xa                         ; 004e0c2b
    JNZ 0x004e0c1e                      ; 004e0c2e
        ;   XREF to: 004e0c1e (CONDITIONAL_JUMP)  ; LAB_004e0c1e
    LEA EAX,[EBX + 0x520]               ; 004e0c30
        ;   Label: LAB_004e0c30
    PUSH EAX                            ; 004e0c36
    PUSH 0x58aee3                       ; 004e0c37 | = "%d"
    PUSH EDI                            ; 004e0c3c
    XOR ESI,ESI                         ; 004e0c3d
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004e0c3f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EBP,dword ptr [EBX + 0x520]     ; 004e0c44
    ADD ESP,0xc                         ; 004e0c4a
    TEST EBP,EBP                        ; 004e0c4d
    JLE 0x004e0c74                      ; 004e0c4f
        ;   XREF to: 004e0c74 (CONDITIONAL_JUMP)  ; LAB_004e0c74
    LEA EBP,[EBX + 0x524]               ; 004e0c51
    PUSH EBP                            ; 004e0c57
        ;   Label: LAB_004e0c57
    PUSH 0x58aee6                       ; 004e0c58 | = "%d"
    PUSH EDI                            ; 004e0c5d
    INC ESI                             ; 004e0c5e
    ADD EBP,0x4                         ; 004e0c5f
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004e0c62
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,dword ptr [EBX + 0x520]     ; 004e0c67
    ADD ESP,0xc                         ; 004e0c6d
    CMP ESI,EAX                         ; 004e0c70
    JL 0x004e0c57                       ; 004e0c72
        ;   XREF to: 004e0c57 (CONDITIONAL_JUMP)  ; LAB_004e0c57
    MOV EBP,EDI                         ; 004e0c74
        ;   Label: LAB_004e0c74
    PUSH EBP                            ; 004e0c76
        ;   Label: LAB_004e0c76
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004e0c77
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_00564570(_FILE * file)
    ADD ESP,0x4                         ; 004e0c7c
    TEST EAX,EAX                        ; 004e0c7f
    JL 0x004e0c88                       ; 004e0c81
        ;   XREF to: 004e0c88 (CONDITIONAL_JUMP)  ; LAB_004e0c88
    CMP EAX,0xa                         ; 004e0c83
    JNZ 0x004e0c76                      ; 004e0c86
        ;   XREF to: 004e0c76 (CONDITIONAL_JUMP)  ; LAB_004e0c76
    MOV ESI,dword ptr [ESP + 0xc]       ; 004e0c88
        ;   Label: LAB_004e0c88
    MOV EBP,dword ptr [ESP + 0x10]      ; 004e0c8c
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e0c90
    ADD ESI,0x54c                       ; 004e0c94
    INC EBP                             ; 004e0c9a
    MOV ECX,dword ptr [EDX + 0x964]     ; 004e0c9b
    MOV dword ptr [ESP + 0xc],ESI       ; 004e0ca1
    MOV dword ptr [ESP + 0x10],EBP      ; 004e0ca5
    CMP EBP,ECX                         ; 004e0ca9
    JL 0x004e0a1d                       ; 004e0cab
        ;   XREF to: 004e0a1d (CONDITIONAL_JUMP)  ; LAB_004e0a1d
    ADD ESP,0x28                        ; 004e0cb1
        ;   Label: LAB_004e0cb1
    POP EBP                             ; 004e0cb4
    POP EDI                             ; 004e0cb5
    POP ESI                             ; 004e0cb6
    POP EBX                             ; 004e0cb7
    RET                                 ; 004e0cb8
    MOV EBX,0x58add1                    ; 004e0cb9 | = "..\\core\\motion.cpp"
        ;   Label: LAB_004e0cb9
    MOV ESI,0x5b                        ; 004e0cbe
    PUSH 0x58ade4                       ; 004e0cc3 | = "Error reading motion list."
    MOV dword ptr [0x01cc4800],EBX      ; 004e0cc8 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004e0cce | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e0cd4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004e0cd9
    JMP 0x004e0966                      ; 004e0cdc
        ;   XREF to: 004e0966 (UNCONDITIONAL_JUMP)  ; LAB_004e0966
    PUSH 0x2                            ; 004e0ce1
        ;   Label: LAB_004e0ce1
    PUSH EBP                            ; 004e0ce3
    MOV EAX,0x58adff                    ; 004e0ce4 | = "..\\core\\motion.cpp"
    MOV EDX,0x5d                        ; 004e0ce9
    PUSH 0x58ae12                       ; 004e0cee | = "Can't read motion list - it's version..."
    MOV [0x01cc4800],EAX                ; 004e0cf3 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004e0cf8 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e0cfe
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 004e0d03
    JMP 0x004e0973                      ; 004e0d06
        ;   XREF to: 004e0973 (UNCONDITIONAL_JUMP)  ; LAB_004e0973
    MOV dword ptr [EBX + 0x520],0x0     ; 004e0d0b
        ;   Label: LAB_004e0d0b
    JMP 0x004e0c88                      ; 004e0d15
        ;   XREF to: 004e0c88 (UNCONDITIONAL_JUMP)  ; LAB_004e0c88

