; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_trimLineAndRemoveComments_FUN_0054ba30(char *line)
;
; Parameters:
; char *           Stack[0x4]:4   line
;
; Called Functions:
;   crt_string.c_memmove_FUN_005ba1f0
;   crt_string.c_strstr_FUN_005ba9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ba30
        ;   Label: sound_sndmain.cpp_trimLineAndRemoveComments_FUN_0054ba30
    PUSH ESI                            ; 0054ba31
    PUSH EDI                            ; 0054ba32
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054ba33
    PUSH 0x5e7a58                       ; 0054ba37
    PUSH EBX                            ; 0054ba3c
    CALL crt_string.c_strstr_FUN_005ba9e0 ; 0054ba3d
        ;   XREF to: 005ba9e0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005ba9e0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 0054ba42
    TEST EAX,EAX                        ; 0054ba45
    JZ 0x0054ba4c                       ; 0054ba47
        ;   XREF to: 0054ba4c (CONDITIONAL_JUMP)  ; LAB_0054ba4c
    MOV byte ptr [EAX],0x0              ; 0054ba49
    MOV ESI,EBX                         ; 0054ba4c
        ;   Label: LAB_0054ba4c
    XOR DL,DL                           ; 0054ba4e
    MOV AL,byte ptr [ESI]               ; 0054ba50
        ;   Label: LAB_0054ba50
    CMP AL,DL                           ; 0054ba52
    JZ 0x0054ba68                       ; 0054ba54
        ;   XREF to: 0054ba68 (CONDITIONAL_JUMP)  ; LAB_0054ba68
    CMP AL,0x0                          ; 0054ba56
    JZ 0x0054ba66                       ; 0054ba58
        ;   XREF to: 0054ba66 (CONDITIONAL_JUMP)  ; LAB_0054ba66
    INC ESI                             ; 0054ba5a
    MOV AL,byte ptr [ESI]               ; 0054ba5b
    CMP AL,DL                           ; 0054ba5d
    JZ 0x0054ba68                       ; 0054ba5f
        ;   XREF to: 0054ba68 (CONDITIONAL_JUMP)  ; LAB_0054ba68
    INC ESI                             ; 0054ba61
    CMP AL,0x0                          ; 0054ba62
    JNZ 0x0054ba50                      ; 0054ba64
        ;   XREF to: 0054ba50 (CONDITIONAL_JUMP)  ; LAB_0054ba50
    SUB ESI,ESI                         ; 0054ba66
        ;   Label: LAB_0054ba66
    MOV EAX,ESI                         ; 0054ba68
        ;   Label: LAB_0054ba68
    CMP ESI,EBX                         ; 0054ba6a
    JBE 0x0054ba82                      ; 0054ba6c
        ;   XREF to: 0054ba82 (CONDITIONAL_JUMP)  ; LAB_0054ba82
    MOV CL,byte ptr [EAX + -0x1]        ; 0054ba6e
        ;   Label: LAB_0054ba6e
    INC CL                              ; 0054ba71
    AND ECX,0xff                        ; 0054ba73
    TEST byte ptr [ECX + 0x61ed94],0x2  ; 0054ba79
    JNZ 0x0054ba9e                      ; 0054ba80
        ;   XREF to: 0054ba9e (CONDITIONAL_JUMP)  ; LAB_0054ba9e
    LEA ESI,[EBX + 0x1]                 ; 0054ba82
        ;   Label: LAB_0054ba82
    MOV byte ptr [EAX],0x0              ; 0054ba85
    MOV AL,byte ptr [EBX]               ; 0054ba88
        ;   Label: LAB_0054ba88
    INC AL                              ; 0054ba8a
    AND EAX,0xff                        ; 0054ba8c
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 0054ba91
    JNZ 0x0054baa5                      ; 0054ba98
        ;   XREF to: 0054baa5 (CONDITIONAL_JUMP)  ; LAB_0054baa5
    POP EDI                             ; 0054ba9a
    POP ESI                             ; 0054ba9b
    POP EBX                             ; 0054ba9c
    RET                                 ; 0054ba9d
    DEC EAX                             ; 0054ba9e
        ;   Label: LAB_0054ba9e
    CMP EAX,EBX                         ; 0054ba9f
    JA 0x0054ba6e                       ; 0054baa1
        ;   XREF to: 0054ba6e (CONDITIONAL_JUMP)  ; LAB_0054ba6e
    JMP 0x0054ba82                      ; 0054baa3
        ;   XREF to: 0054ba82 (UNCONDITIONAL_JUMP)  ; LAB_0054ba82
    MOV EDI,EBX                         ; 0054baa5
        ;   Label: LAB_0054baa5
    SUB ECX,ECX                         ; 0054baa7
    DEC ECX                             ; 0054baa9
    XOR EAX,EAX                         ; 0054baaa
    SCASB.REPNE ES:EDI                  ; 0054baac
    NOT ECX                             ; 0054baae
    DEC ECX                             ; 0054bab0
    PUSH ECX                            ; 0054bab1
    PUSH ESI                            ; 0054bab2
    PUSH EBX                            ; 0054bab3
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0054bab4
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0054bab9
    JMP 0x0054ba88                      ; 0054babc
        ;   XREF to: 0054ba88 (UNCONDITIONAL_JUMP)  ; LAB_0054ba88

