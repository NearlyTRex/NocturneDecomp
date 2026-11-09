; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_trimLine_FUN_00521070(char *input_line,char *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   input_line
; char *           Stack[0x8]:4   output_buffer
;
; XREF[1]:
;   core_script.cpp_FUN_00521ec0 at 00521f08
;
; Referenced Globals:
;   undefined4 DAT_005e2c7e
;   undefined4 DAT_0061ed94
;
; Called Functions:
;   crt_string.c_strstr_FUN_005ba9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521070
        ;   Label: core_script.cpp_trimLine_FUN_00521070
    PUSH ESI                            ; 00521071
    PUSH EDI                            ; 00521072
    MOV ESI,dword ptr [ESP + 0x10]      ; 00521073
    MOV EBX,dword ptr [ESP + 0x14]      ; 00521077
    MOV byte ptr [EBX],0x0              ; 0052107b
    MOV AL,byte ptr [ESI]               ; 0052107e
        ;   Label: LAB_0052107e
    INC AL                              ; 00521080
    AND EAX,0xff                        ; 00521082
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 00521087 | DAT_0061ed94
    JZ 0x00521093                       ; 0052108e
        ;   XREF to: 00521093 (CONDITIONAL_JUMP)  ; LAB_00521093
    INC ESI                             ; 00521090
    JMP 0x0052107e                      ; 00521091
        ;   XREF to: 0052107e (UNCONDITIONAL_JUMP)  ; LAB_0052107e
    MOV EDI,EBX                         ; 00521093
        ;   Label: LAB_00521093
    PUSH EDI                            ; 00521095
    MOV AL,byte ptr [ESI]               ; 00521096
        ;   Label: LAB_00521096
    MOV byte ptr [EDI],AL               ; 00521098
    CMP AL,0x0                          ; 0052109a
    JZ 0x005210ae                       ; 0052109c
        ;   XREF to: 005210ae (CONDITIONAL_JUMP)  ; LAB_005210ae
    MOV AL,byte ptr [ESI + 0x1]         ; 0052109e
    ADD ESI,0x2                         ; 005210a1
    MOV byte ptr [EDI + 0x1],AL         ; 005210a4
    ADD EDI,0x2                         ; 005210a7
    CMP AL,0x0                          ; 005210aa
    JNZ 0x00521096                      ; 005210ac
        ;   XREF to: 00521096 (CONDITIONAL_JUMP)  ; LAB_00521096
    POP EDI                             ; 005210ae
        ;   Label: LAB_005210ae
    PUSH 0x5e2c7e                       ; 005210af | DAT_005e2c7e
    PUSH EBX                            ; 005210b4
    CALL crt_string.c_strstr_FUN_005ba9e0 ; 005210b5
        ;   XREF to: 005ba9e0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005ba9e0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 005210ba
    TEST EAX,EAX                        ; 005210bd
    JZ 0x005210c4                       ; 005210bf
        ;   XREF to: 005210c4 (CONDITIONAL_JUMP)  ; LAB_005210c4
    MOV byte ptr [EAX],0x0              ; 005210c1
    MOV ESI,EBX                         ; 005210c4
        ;   Label: LAB_005210c4
    XOR DL,DL                           ; 005210c6
    MOV AL,byte ptr [ESI]               ; 005210c8
        ;   Label: LAB_005210c8
    CMP AL,DL                           ; 005210ca
    JZ 0x005210e0                       ; 005210cc
        ;   XREF to: 005210e0 (CONDITIONAL_JUMP)  ; LAB_005210e0
    CMP AL,0x0                          ; 005210ce
    JZ 0x005210de                       ; 005210d0
        ;   XREF to: 005210de (CONDITIONAL_JUMP)  ; LAB_005210de
    INC ESI                             ; 005210d2
    MOV AL,byte ptr [ESI]               ; 005210d3
    CMP AL,DL                           ; 005210d5
    JZ 0x005210e0                       ; 005210d7
        ;   XREF to: 005210e0 (CONDITIONAL_JUMP)  ; LAB_005210e0
    INC ESI                             ; 005210d9
    CMP AL,0x0                          ; 005210da
    JNZ 0x005210c8                      ; 005210dc
        ;   XREF to: 005210c8 (CONDITIONAL_JUMP)  ; LAB_005210c8
    SUB ESI,ESI                         ; 005210de
        ;   Label: LAB_005210de
    MOV EAX,ESI                         ; 005210e0
        ;   Label: LAB_005210e0
    CMP ESI,EBX                         ; 005210e2
    JBE 0x005210ff                      ; 005210e4
        ;   XREF to: 005210ff (CONDITIONAL_JUMP)  ; LAB_005210ff
    MOV DL,byte ptr [EAX + -0x1]        ; 005210e6
        ;   Label: LAB_005210e6
    INC DL                              ; 005210e9
    MOVZX ESI,DL                        ; 005210eb
    TEST byte ptr [ESI + 0x61ed94],0x2  ; 005210ee | DAT_0061ed94
    JZ 0x005210ff                       ; 005210f5
        ;   XREF to: 005210ff (CONDITIONAL_JUMP)  ; LAB_005210ff
    DEC EAX                             ; 005210f7
    MOV byte ptr [EAX],0x0              ; 005210f8
    CMP EAX,EBX                         ; 005210fb
    JA 0x005210e6                       ; 005210fd
        ;   XREF to: 005210e6 (CONDITIONAL_JUMP)  ; LAB_005210e6
    POP EDI                             ; 005210ff
        ;   Label: LAB_005210ff
    POP ESI                             ; 00521100
    POP EBX                             ; 00521101
    RET                                 ; 00521102

