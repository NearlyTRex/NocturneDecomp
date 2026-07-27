; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_pod_cpp_FUN_004f7980(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_0058d9a8
;   TerminatedCString s_rb_0058d9a9
;   undefined4 DAT_01e428d0
;   undefined4 DAT_01e428d1
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_fseek_FUN_0056582c
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;   engine_pod.cpp_FUN_004f77d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7980
        ;   Label: engine_pod.cpp_FUN_004f7980
    PUSH ESI                            ; 004f7981
    PUSH EDI                            ; 004f7982
    PUSH EBP                            ; 004f7983
    SUB ESP,0x8                         ; 004f7984
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004f7987
    MOV EDI,dword ptr [ESP + 0x20]      ; 004f798b
    PUSH ESI                            ; 004f798f
    PUSH 0x58d9a8                       ; 004f7990 | DAT_0058d9a8
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 004f7995
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFileSize_FUN_004568c0()
    ADD ESP,0x8                         ; 004f799a
    PUSH 0x58d9a9                       ; 004f799d | = "rb"
    PUSH ESI                            ; 004f79a2
    MOV EBX,EAX                         ; 004f79a3
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004f79a5
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_0056568c()
    ADD ESP,0x8                         ; 004f79aa
    PUSH 0x0                            ; 004f79ad
    PUSH EDI                            ; 004f79af
    SUB EBX,EDI                         ; 004f79b0
    MOV ESI,0xffffffff                  ; 004f79b2
    PUSH EAX                            ; 004f79b7
    MOV EBP,EAX                         ; 004f79b8
    MOV dword ptr [ESP + 0xc],EAX       ; 004f79ba
    CALL crt_stdio.c_fseek_FUN_0056582c ; 004f79be
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_0056582c()
    MOV EDI,EBX                         ; 004f79c3
    ADD ESP,0xc                         ; 004f79c5
    CMP EBX,0x10000                     ; 004f79c8
    JL 0x004f7a16                       ; 004f79ce
        ;   XREF to: 004f7a16 (CONDITIONAL_JUMP)  ; LAB_004f7a16
    PUSH EBP                            ; 004f79d0
        ;   Label: LAB_004f79d0
    PUSH 0x1                            ; 004f79d1
    PUSH 0x10000                        ; 004f79d3
    PUSH 0x1e428d0                      ; 004f79d8 | DAT_01e428d0
    MOV EBX,0x1e428d0                   ; 004f79dd
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f79e2
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 004f79e7
    MOV EAX,ESI                         ; 004f79ea
    XOR ESI,ESI                         ; 004f79ec
    XOR EDX,EDX                         ; 004f79ee
        ;   Label: LAB_004f79ee
    MOV DL,byte ptr [EBX]               ; 004f79f0 | DAT_01e428d0 | DAT_01e428d1
    PUSH EDX                            ; 004f79f2
    PUSH EAX                            ; 004f79f3
    INC EBX                             ; 004f79f4
    INC ESI                             ; 004f79f5
    CALL engine_pod.cpp_FUN_004f77d0    ; 004f79f6
        ;   XREF to: 004f77d0 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_004f77d0()
    ADD ESP,0x8                         ; 004f79fb
    CMP ESI,0x10000                     ; 004f79fe
    JC 0x004f79ee                       ; 004f7a04
        ;   XREF to: 004f79ee (CONDITIONAL_JUMP)  ; LAB_004f79ee
    SUB EDI,0x10000                     ; 004f7a06
    MOV ESI,EAX                         ; 004f7a0c
    CMP EDI,0x10000                     ; 004f7a0e
    JGE 0x004f79d0                      ; 004f7a14
        ;   XREF to: 004f79d0 (CONDITIONAL_JUMP)  ; LAB_004f79d0
    PUSH EBP                            ; 004f7a16
        ;   Label: LAB_004f7a16
    PUSH 0x1                            ; 004f7a17
    PUSH EDI                            ; 004f7a19
    PUSH 0x1e428d0                      ; 004f7a1a | DAT_01e428d0
    MOV EBX,0x1e428d0                   ; 004f7a1f
    MOV EBP,ESI                         ; 004f7a24
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f7a26
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 004f7a2b
    XOR ESI,ESI                         ; 004f7a2e
    MOV dword ptr [ESP + 0x4],EDI       ; 004f7a30
    TEST EDI,EDI                        ; 004f7a34
    JBE 0x004f7a60                      ; 004f7a36
        ;   XREF to: 004f7a60 (CONDITIONAL_JUMP)  ; LAB_004f7a60
    XOR EAX,EAX                         ; 004f7a38
        ;   Label: LAB_004f7a38
    MOV AL,byte ptr [EBX]               ; 004f7a3a | DAT_01e428d0 | DAT_01e428d1
    PUSH EAX                            ; 004f7a3c
    PUSH EBP                            ; 004f7a3d
    INC EBX                             ; 004f7a3e
    CALL engine_pod.cpp_FUN_004f77d0    ; 004f7a3f
        ;   XREF to: 004f77d0 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_004f77d0()
    ADD ESP,0x8                         ; 004f7a44
    INC ESI                             ; 004f7a47
    MOV EDX,dword ptr [ESP + 0x4]       ; 004f7a48
    MOV EBP,EAX                         ; 004f7a4c
    CMP ESI,EDX                         ; 004f7a4e
    JC 0x004f7a38                       ; 004f7a50
        ;   XREF to: 004f7a38 (CONDITIONAL_JUMP)  ; LAB_004f7a38
    LEA EAX,[EAX]                       ; 004f7a52
    LEA EDX,[EDX]                       ; 004f7a58
    MOV EAX,EAX                         ; 004f7a5e
    MOV ECX,dword ptr [ESP]             ; 004f7a60
        ;   Label: LAB_004f7a60
    PUSH ECX                            ; 004f7a63
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f7a64
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 004f7a69
    MOV EAX,EBP                         ; 004f7a6c
    ADD ESP,0x8                         ; 004f7a6e
    POP EBP                             ; 004f7a71
    POP EDI                             ; 004f7a72
    POP ESI                             ; 004f7a73
    POP EBX                             ; 004f7a74
    RET                                 ; 004f7a75

