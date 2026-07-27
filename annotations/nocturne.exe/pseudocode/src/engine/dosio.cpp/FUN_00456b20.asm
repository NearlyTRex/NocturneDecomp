; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_dosio_cpp_FUN_00456b20(int param_1,undefined4 param_2,uint param_3,int *param_4)
;
; Local Variables:
; undefined        Stack[-0x220]:1  local_220
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
;
; Referenced Globals:
;   undefined4 DAT_005a47a0
;
; Called Functions:
;   crt_fstream.cpp_istream_seekg_FUN_00565f14
;   crt_fstream.cpp_openFile_FUN_00565eb5
;   crt_stdio.c_fflush_FUN_00565e59
;   crt_unknown.c_FUN_00565e94
;   crt_watcom.c__mkdir_FUN_00565e40
;   engine_dosio.cpp_findFile_FUN_004567a0
;   engine_dosio.cpp_getRelativeFilePath_FUN_00456700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456b20
        ;   Label: engine_dosio.cpp_FUN_00456b20
    PUSH ESI                            ; 00456b21
    PUSH EBP                            ; 00456b22
    SUB ESP,0x214                       ; 00456b23
    MOV ESI,dword ptr [ESP + 0x224]     ; 00456b29
    MOV EBX,dword ptr [ESP + 0x230]     ; 00456b30
    PUSH EBX                            ; 00456b37
    CALL crt_stdio.c_fflush_FUN_00565e59 ; 00456b38
        ;   XREF to: 00565e59 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fflush_FUN_00565e59()
    MOV EAX,dword ptr [EBX]             ; 00456b3d
    ADD ESP,0x4                         ; 00456b3f
    MOV EAX,dword ptr [EAX + 0x4]       ; 00456b42
    PUSH 0x0                            ; 00456b45
    ADD EAX,EBX                         ; 00456b47
    PUSH EAX                            ; 00456b49
    CALL crt_unknown.c_FUN_00565e94     ; 00456b4a
        ;   XREF to: 00565e94 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00565e94()
    ADD ESP,0x8                         ; 00456b4f
    MOV EDX,dword ptr [ESP + 0x228]     ; 00456b52
    PUSH EDX                            ; 00456b59
    PUSH ESI                            ; 00456b5a
    LEA EAX,[ESP + 0x8]                 ; 00456b5b
    PUSH EAX                            ; 00456b5f
    CALL engine_dosio.cpp_getRelativeFilePath_FUN_00456700 ; 00456b60
        ;   XREF to: 00456700 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getRelativeFilePath_FUN_00456700()
    ADD ESP,0xc                         ; 00456b65
    TEST byte ptr [ESP + 0x22c],0x52    ; 00456b68
    JZ 0x00456ba5                       ; 00456b70
        ;   XREF to: 00456ba5 (CONDITIONAL_JUMP)  ; LAB_00456ba5
    TEST ESI,ESI                        ; 00456b72
    JZ 0x00456b7f                       ; 00456b74
        ;   XREF to: 00456b7f (CONDITIONAL_JUMP)  ; LAB_00456b7f
    PUSH ESI                            ; 00456b76
    CALL crt_watcom.c__mkdir_FUN_00565e40 ; 00456b77
        ;   XREF to: 00565e40 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__mkdir_FUN_00565e40()
    ADD ESP,0x4                         ; 00456b7c
    MOV EAX,[0x005a47a0]                ; 00456b7f | DAT_005a47a0
        ;   Label: LAB_00456b7f
    PUSH EAX                            ; 00456b84
    MOV EBP,dword ptr [ESP + 0x230]     ; 00456b85
    PUSH EBP                            ; 00456b8c
    LEA EAX,[ESP + 0x8]                 ; 00456b8d
    PUSH EAX                            ; 00456b91
    PUSH EBX                            ; 00456b92
    CALL crt_fstream.cpp_openFile_FUN_00565eb5 ; 00456b93
        ;   XREF to: 00565eb5 (UNCONDITIONAL_CALL)  ; undefined crt_fstream.cpp_openFile_FUN_00565eb5()
    ADD ESP,0x10                        ; 00456b98
    ADD ESP,0x214                       ; 00456b9b
        ;   Label: LAB_00456b9b
    POP EBP                             ; 00456ba1
    POP ESI                             ; 00456ba2
    POP EBX                             ; 00456ba3
    RET                                 ; 00456ba4
    MOV EAX,ESP                         ; 00456ba5
        ;   Label: LAB_00456ba5
    PUSH EAX                            ; 00456ba7
    CALL engine_dosio.cpp_findFile_FUN_004567a0 ; 00456ba8
        ;   XREF to: 004567a0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFile_FUN_004567a0()
    ADD ESP,0x4                         ; 00456bad
    TEST EAX,EAX                        ; 00456bb0
    JZ 0x00456b9b                       ; 00456bb2
        ;   XREF to: 00456b9b (CONDITIONAL_JUMP)  ; LAB_00456b9b
    MOV EAX,[0x005a47a0]                ; 00456bb4 | DAT_005a47a0
    PUSH EAX                            ; 00456bb9
    MOV ECX,dword ptr [ESP + 0x230]     ; 00456bba
    PUSH ECX                            ; 00456bc1
    LEA EAX,[ESP + 0x108]               ; 00456bc2
    PUSH EAX                            ; 00456bc9
    PUSH EBX                            ; 00456bca
    CALL crt_fstream.cpp_openFile_FUN_00565eb5 ; 00456bcb
        ;   XREF to: 00565eb5 (UNCONDITIONAL_CALL)  ; undefined crt_fstream.cpp_openFile_FUN_00565eb5()
    ADD ESP,0x10                        ; 00456bd0
    MOV ESI,dword ptr [ESP + 0x200]     ; 00456bd3
    TEST ESI,ESI                        ; 00456bda
    JZ 0x00456b9b                       ; 00456bdc
        ;   XREF to: 00456b9b (CONDITIONAL_JUMP)  ; LAB_00456b9b
    PUSH ESI                            ; 00456bde
    ADD EBX,0x44                        ; 00456bdf
    PUSH EBX                            ; 00456be2
    CALL crt_fstream.cpp_istream_seekg_FUN_00565f14 ; 00456be3
        ;   XREF to: 00565f14 (UNCONDITIONAL_CALL)  ; undefined crt_fstream.cpp_istream_seekg_FUN_00565f14()
    ADD ESP,0x8                         ; 00456be8
    ADD ESP,0x214                       ; 00456beb
    POP EBP                             ; 00456bf1
    POP ESI                             ; 00456bf2
    POP EBX                             ; 00456bf3
    RET                                 ; 00456bf4

