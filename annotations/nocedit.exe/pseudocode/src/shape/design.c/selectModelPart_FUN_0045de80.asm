; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_selectModelPart_FUN_0045de80(void)
;
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined1       Stack[-0x2b]:1  local_2b
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Part_name_0061b4a2
;   SModelPartName[500] g_ModelPartNames
;   undefined4 DAT_01e50191
;   undefined4 DAT_01e50192
;   undefined4 DAT_01e50193
;   int g_PartsCount
;   int g_CurrentPartIndex
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005fef20
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045de80
        ;   Label: shape_design.c_selectModelPart_FUN_0045de80
    PUSH ESI                            ; 0045de81
    PUSH EDI                            ; 0045de82
    PUSH EBP                            ; 0045de83
    MOV EBP,ESP                         ; 0045de84
    SUB ESP,0x1c                        ; 0045de86
    MOV ECX,0x61b4a2                    ; 0045de8c | = "Part name : "
    PUSH ECX                            ; 0045de91 | = "Part name : "
    PUSH 0xb                            ; 0045de92
    PUSH 0x0                            ; 0045de94
    PUSH 0x13                           ; 0045de96
    LEA ECX,[EBP + -0x1c]               ; 0045de98
    PUSH ECX                            ; 0045de9b
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0045de9c
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0045dea1
    LEA EDI,[EBP + -0x1c]               ; 0045dea4
    SUB ECX,ECX                         ; 0045dea7
    DEC ECX                             ; 0045dea9
    XOR EAX,EAX                         ; 0045deaa
    SCASB.REPNE ES:EDI                  ; 0045deac
    NOT ECX                             ; 0045deae
    DEC ECX                             ; 0045deb0
    TEST ECX,ECX                        ; 0045deb1
    JZ 0x0045df4d                       ; 0045deb3
        ;   XREF to: 0045df4d (CONDITIONAL_JUMP)  ; LAB_0045df4d
    MOV dword ptr [EBP + -0x4],0xffffffff ; 0045deb9
    MOV dword ptr [EBP + -0x8],0x0      ; 0045dec0
    JMP 0x0045decf                      ; 0045dec7
        ;   XREF to: 0045decf (UNCONDITIONAL_JUMP)  ; LAB_0045decf
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045dec9
        ;   Label: LAB_0045dec9
    INC dword ptr [EBP + -0x8]          ; 0045decc
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045decf
        ;   Label: LAB_0045decf
    CMP EAX,dword ptr [0x01e528a0]      ; 0045ded2 | g_PartsCount
    JGE 0x0045df00                      ; 0045ded8
        ;   XREF to: 0045df00 (CONDITIONAL_JUMP)  ; LAB_0045df00
    IMUL EDX,dword ptr [EBP + -0x8],0x14 ; 0045deda
    MOV EAX,0x1e50190                   ; 0045dede | g_ModelPartNames
    ADD EAX,EDX                         ; 0045dee3
    PUSH EAX                            ; 0045dee5
    LEA EAX,[EBP + -0x1c]               ; 0045dee6
    PUSH EAX                            ; 0045dee9
    CALL crt_string.c__strcmp_FUN_005fef20 ; 0045deea
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0045deef
    TEST EAX,EAX                        ; 0045def2
    JNZ 0x0045defe                      ; 0045def4
        ;   XREF to: 0045defe (CONDITIONAL_JUMP)  ; LAB_0045defe
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045def6
    MOV dword ptr [EBP + -0x4],EAX      ; 0045def9
    JMP 0x0045df00                      ; 0045defc
        ;   XREF to: 0045df00 (UNCONDITIONAL_JUMP)  ; LAB_0045df00
    JMP 0x0045dec9                      ; 0045defe
        ;   XREF to: 0045dec9 (UNCONDITIONAL_JUMP)  ; LAB_0045dec9
        ;   Label: LAB_0045defe
    CMP dword ptr [EBP + -0x4],-0x1     ; 0045df00
        ;   Label: LAB_0045df00
    JZ 0x0045df10                       ; 0045df04
        ;   XREF to: 0045df10 (CONDITIONAL_JUMP)  ; LAB_0045df10
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045df06
    MOV [0x01e6614c],EAX                ; 0045df09 | g_CurrentPartIndex
    JMP 0x0045df4d                      ; 0045df0e
        ;   XREF to: 0045df4d (UNCONDITIONAL_JUMP)  ; LAB_0045df4d
    LEA ESI,[EBP + -0x1c]               ; 0045df10
        ;   Label: LAB_0045df10
    IMUL EAX,dword ptr [0x01e528a0],0x14 ; 0045df13 | g_PartsCount
    MOV EDI,0x1e50190                   ; 0045df1a | g_ModelPartNames
    ADD EDI,EAX                         ; 0045df1f
    PUSH EDI                            ; 0045df21
    MOV AL,byte ptr [ESI]               ; 0045df22
        ;   Label: LAB_0045df22
    MOV byte ptr [EDI],AL               ; 0045df24 | g_ModelPartNames | DAT_01e50192
    CMP AL,0x0                          ; 0045df26
    JZ 0x0045df3a                       ; 0045df28
        ;   XREF to: 0045df3a (CONDITIONAL_JUMP)  ; LAB_0045df3a
    MOV AL,byte ptr [ESI + 0x1]         ; 0045df2a
    ADD ESI,0x2                         ; 0045df2d
    MOV byte ptr [EDI + 0x1],AL         ; 0045df30 | DAT_01e50191 | DAT_01e50193
    ADD EDI,0x2                         ; 0045df33
    CMP AL,0x0                          ; 0045df36
    JNZ 0x0045df22                      ; 0045df38
        ;   XREF to: 0045df22 (CONDITIONAL_JUMP)  ; LAB_0045df22
    POP EDI                             ; 0045df3a
        ;   Label: LAB_0045df3a
    MOV ESI,dword ptr [0x01e528a0]      ; 0045df3b | g_PartsCount
    MOV dword ptr [0x01e6614c],ESI      ; 0045df41 | g_CurrentPartIndex
    INC dword ptr [0x01e528a0]          ; 0045df47 | g_PartsCount
    MOV ESP,EBP                         ; 0045df4d
        ;   Label: LAB_0045df4d
    POP EBP                             ; 0045df4f
    POP EDI                             ; 0045df50
    POP ESI                             ; 0045df51
    POP EBX                             ; 0045df52
    RET                                 ; 0045df53

