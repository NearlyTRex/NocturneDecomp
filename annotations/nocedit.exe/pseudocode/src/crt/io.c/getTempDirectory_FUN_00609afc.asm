; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl undefined crt_io.c_getTempDirectory_FUN_00609afc()
;
;
; XREF[1]:
;   crt_io.c_generateTempFilename_FUN_00601f1c at 00601f32
;
; Referenced Globals:
;   undefined1 DAT_006590a4
;   undefined1 DAT_006590a8
;   char** g_TempEnvVarNames = 006590a4
;   void* PTR_DAT_006852cc = 006590a8
;   undefined1 DAT_006852db
;   char[260] g_TempDirectoryBuffer
;   undefined4 DAT_006852dd
;   undefined4 DAT_006852de
;   undefined4 s__006852df
;
; Called Functions:
;   crt_env.c_getenv_FUN_006013f0
;   crt_io.c_getcwd_FUN_00608d20
;   crt_io.c_realpath_FUN_00601140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00609afc
        ;   Label: crt_io.c_getTempDirectory_FUN_00609afc
    PUSH ESI                            ; 00609afd
    PUSH EDI                            ; 00609afe
    CMP byte ptr [0x006852dc],0x0       ; 00609aff | g_TempDirectoryBuffer
    JNZ 0x00609bc1                      ; 00609b06
        ;   XREF to: 00609bc1 (CONDITIONAL_JUMP)  ; LAB_00609bc1
    MOV EBX,0x6852c8                    ; 00609b0c | g_TempEnvVarNames
    JMP 0x00609b54                      ; 00609b11
        ;   XREF to: 00609b54 (UNCONDITIONAL_JUMP)  ; LAB_00609b54
    PUSH EDX                            ; 00609b13 | DAT_006590a4
        ;   Label: LAB_00609b13
    CALL crt_env.c_getenv_FUN_006013f0  ; 00609b14
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_006013f0(char * name)
    MOV EDX,EAX                         ; 00609b19
    ADD ESP,0x4                         ; 00609b1b
    TEST EAX,EAX                        ; 00609b1e
    JZ 0x00609b51                       ; 00609b20
        ;   XREF to: 00609b51 (CONDITIONAL_JUMP)  ; LAB_00609b51
    MOV EDI,EAX                         ; 00609b22
    PUSH ES                             ; 00609b24
    MOV AX,DS                           ; 00609b25
    MOV ES,AX                           ; 00609b27
    SUB ECX,ECX                         ; 00609b29
    DEC ECX                             ; 00609b2b
    XOR EAX,EAX                         ; 00609b2c
    SCASB.REPNE ES:EDI                  ; 00609b2e
    NOT ECX                             ; 00609b30
    DEC ECX                             ; 00609b32
    POP ES                              ; 00609b33
    CMP ECX,0x103                       ; 00609b34
    JA 0x00609b51                       ; 00609b3a
        ;   XREF to: 00609b51 (CONDITIONAL_JUMP)  ; LAB_00609b51
    PUSH 0x103                          ; 00609b3c
    PUSH EDX                            ; 00609b41
    PUSH 0x6852dc                       ; 00609b42 | g_TempDirectoryBuffer
    CALL crt_io.c_realpath_FUN_00601140 ; 00609b47
        ;   XREF to: 00601140 (UNCONDITIONAL_CALL)  ; char * crt_io.c_realpath_FUN_00601140(char * buffer, char * path, SIZE_T buffer_size)
    ADD ESP,0xc                         ; 00609b4c
    JMP 0x00609b5b                      ; 00609b4f
        ;   XREF to: 00609b5b (UNCONDITIONAL_JUMP)  ; LAB_00609b5b
    ADD EBX,0x4                         ; 00609b51
        ;   Label: LAB_00609b51
    MOV EDX,dword ptr [EBX]             ; 00609b54 | DAT_006590a4 | g_TempEnvVarNames | PTR_DAT_006852cc
        ;   Label: LAB_00609b54
    CMP byte ptr [EDX],0x0              ; 00609b56 | DAT_006590a4 | DAT_006590a8
    JNZ 0x00609b13                      ; 00609b59
        ;   XREF to: 00609b13 (CONDITIONAL_JUMP)  ; LAB_00609b13
    CMP byte ptr [0x006852dc],0x0       ; 00609b5b | g_TempDirectoryBuffer
        ;   Label: LAB_00609b5b
    JNZ 0x00609b91                      ; 00609b62
        ;   XREF to: 00609b91 (CONDITIONAL_JUMP)  ; LAB_00609b91
    PUSH 0x0                            ; 00609b64
    PUSH 0x0                            ; 00609b66
    CALL crt_io.c_getcwd_FUN_00608d20   ; 00609b68
        ;   XREF to: 00608d20 (UNCONDITIONAL_CALL)  ; char * crt_io.c_getcwd_FUN_00608d20(char * buffer, SIZE_T size)
    ADD ESP,0x8                         ; 00609b6d
    MOV EDI,0x6852dc                    ; 00609b70 | g_TempDirectoryBuffer
    MOV ESI,EAX                         ; 00609b75
    PUSH EDI                            ; 00609b77 | g_TempDirectoryBuffer
    MOV AL,byte ptr [ESI]               ; 00609b78
        ;   Label: LAB_00609b78
    MOV byte ptr [EDI],AL               ; 00609b7a | g_TempDirectoryBuffer | DAT_006852de
    CMP AL,0x0                          ; 00609b7c
    JZ 0x00609b90                       ; 00609b7e
        ;   XREF to: 00609b90 (CONDITIONAL_JUMP)  ; LAB_00609b90
    MOV AL,byte ptr [ESI + 0x1]         ; 00609b80
    ADD ESI,0x2                         ; 00609b83
    MOV byte ptr [EDI + 0x1],AL         ; 00609b86 | DAT_006852dd | s__006852df
    ADD EDI,0x2                         ; 00609b89
    CMP AL,0x0                          ; 00609b8c
    JNZ 0x00609b78                      ; 00609b8e
        ;   XREF to: 00609b78 (CONDITIONAL_JUMP)  ; LAB_00609b78
    POP EDI                             ; 00609b90
        ;   Label: LAB_00609b90
    MOV EDI,0x6852dc                    ; 00609b91 | g_TempDirectoryBuffer
        ;   Label: LAB_00609b91
    PUSH ES                             ; 00609b96
    MOV AX,DS                           ; 00609b97
    MOV ES,AX                           ; 00609b99
    SUB ECX,ECX                         ; 00609b9b
    DEC ECX                             ; 00609b9d
    XOR EAX,EAX                         ; 00609b9e
    SCASB.REPNE ES:EDI                  ; 00609ba0 | g_TempDirectoryBuffer | DAT_006852dd
    NOT ECX                             ; 00609ba2
    DEC ECX                             ; 00609ba4
    POP ES                              ; 00609ba5
    LEA EDX,[ECX + -0x1]                ; 00609ba6
    ADD EDX,0x6852dc                    ; 00609ba9 | g_TempDirectoryBuffer
    MOV AL,byte ptr [EDX]               ; 00609baf | DAT_006852db | g_TempDirectoryBuffer
    CMP AL,0x5c                         ; 00609bb1
    JZ 0x00609bc1                       ; 00609bb3
        ;   XREF to: 00609bc1 (CONDITIONAL_JUMP)  ; LAB_00609bc1
    CMP AL,0x2f                         ; 00609bb5
    JZ 0x00609bc1                       ; 00609bb7
        ;   XREF to: 00609bc1 (CONDITIONAL_JUMP)  ; LAB_00609bc1
    INC EDX                             ; 00609bb9
    MOV byte ptr [EDX],0x5c             ; 00609bba | g_TempDirectoryBuffer | DAT_006852dd
    INC EDX                             ; 00609bbd
    MOV byte ptr [EDX],0x0              ; 00609bbe | DAT_006852dd | DAT_006852de
    MOV EAX,0x6852dc                    ; 00609bc1 | g_TempDirectoryBuffer
        ;   Label: LAB_00609bc1
    POP EDI                             ; 00609bc6
    POP ESI                             ; 00609bc7
    POP EBX                             ; 00609bc8
    RET                                 ; 00609bc9

