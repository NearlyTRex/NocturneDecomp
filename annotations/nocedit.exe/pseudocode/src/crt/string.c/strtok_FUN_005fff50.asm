; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_strtok_FUN_005fff50(char *str,char *delimiters)
;
; Parameters:
; char *           Stack[0x4]:4   str
; char *           Stack[0x8]:4   delimiters
; Local Variables:
; undefined1       Stack[-0x28]:1  local_28
;
; XREF[1]:
;   shape_design.c_loadModelFile_FUN_00458ac0 at 00458f4a
;
; Referenced Globals:
;   undefined4 DAT_00665f28
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_0060242c
;   crt_unknown.c_FUN_00607080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fff50
        ;   Label: crt_string.c_strtok_FUN_005fff50
    PUSH ESI                            ; 005fff51
    SUB ESP,0x20                        ; 005fff52
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005fff55
    TEST ESI,ESI                        ; 005fff59
    JNZ 0x005fff71                      ; 005fff5b
        ;   XREF to: 005fff71 (CONDITIONAL_JUMP)  ; LAB_005fff71
    CALL dword ptr [0x00684ee4]         ; 005fff5d | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    MOV ESI,dword ptr [EAX + 0x10]      ; 005fff63
    TEST ESI,ESI                        ; 005fff66
    JNZ 0x005fff71                      ; 005fff68
        ;   XREF to: 005fff71 (CONDITIONAL_JUMP)  ; LAB_005fff71
    XOR EAX,EAX                         ; 005fff6a
    JMP 0x005ffffc                      ; 005fff6c
        ;   XREF to: 005ffffc (UNCONDITIONAL_JUMP)  ; LAB_005ffffc
    MOV EDX,dword ptr [ESP + 0x30]      ; 005fff71
        ;   Label: LAB_005fff71
    PUSH EDX                            ; 005fff75
    LEA EAX,[ESP + 0x4]                 ; 005fff76
    PUSH EAX                            ; 005fff7a
    CALL crt_unknown.c_FUN_00607080     ; 005fff7b
        ;   XREF to: 00607080 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00607080()
    ADD ESP,0x8                         ; 005fff80
    JMP 0x005fffa5                      ; 005fff83
        ;   XREF to: 005fffa5 (UNCONDITIONAL_JUMP)  ; LAB_005fffa5
    MOV EDX,EAX                         ; 005fff85
        ;   Label: LAB_005fff85
    SHR EDX,0x3                         ; 005fff87
    XOR EBX,EBX                         ; 005fff8a
    MOV BL,byte ptr [ESP + EDX*0x1]     ; 005fff8c
    MOV EDX,EAX                         ; 005fff8f
    AND EDX,0x7                         ; 005fff91
    MOV DL,byte ptr [EDX + 0x665f28]    ; 005fff94 | DAT_00665f28
    AND EDX,0xff                        ; 005fff9a
    TEST EBX,EDX                        ; 005fffa0
    JZ 0x005fffad                       ; 005fffa2
        ;   XREF to: 005fffad (CONDITIONAL_JUMP)  ; LAB_005fffad
    INC ESI                             ; 005fffa4
    XOR EAX,EAX                         ; 005fffa5
        ;   Label: LAB_005fffa5
    MOV AL,byte ptr [ESI]               ; 005fffa7
    TEST EAX,EAX                        ; 005fffa9
    JNZ 0x005fff85                      ; 005fffab
        ;   XREF to: 005fff85 (CONDITIONAL_JUMP)  ; LAB_005fff85
    TEST EAX,EAX                        ; 005fffad
        ;   Label: LAB_005fffad
    JZ 0x005ffffc                       ; 005fffaf
        ;   XREF to: 005ffffc (CONDITIONAL_JUMP)  ; LAB_005ffffc
    MOV EBX,ESI                         ; 005fffb1
    JMP 0x005fffe5                      ; 005fffb3
        ;   XREF to: 005fffe5 (UNCONDITIONAL_JUMP)  ; LAB_005fffe5
    MOV EDX,EAX                         ; 005fffb5
        ;   Label: LAB_005fffb5
    SHR EDX,0x3                         ; 005fffb7
    MOV DL,byte ptr [ESP + EDX*0x1]     ; 005fffba
    AND EAX,0x7                         ; 005fffbd
    AND EDX,0xff                        ; 005fffc0
    MOV AL,byte ptr [EAX + 0x665f28]    ; 005fffc6 | DAT_00665f28
    AND EAX,0xff                        ; 005fffcc
    TEST EDX,EAX                        ; 005fffd1
    JZ 0x005fffe4                       ; 005fffd3
        ;   XREF to: 005fffe4 (CONDITIONAL_JUMP)  ; LAB_005fffe4
    MOV byte ptr [EBX],0x0              ; 005fffd5
    INC EBX                             ; 005fffd8
    CALL dword ptr [0x00684ee4]         ; 005fffd9 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    MOV dword ptr [EAX + 0x10],EBX      ; 005fffdf
    JMP 0x005ffffa                      ; 005fffe2
        ;   XREF to: 005ffffa (UNCONDITIONAL_JUMP)  ; LAB_005ffffa
    INC EBX                             ; 005fffe4
        ;   Label: LAB_005fffe4
    XOR EAX,EAX                         ; 005fffe5
        ;   Label: LAB_005fffe5
    MOV AL,byte ptr [EBX]               ; 005fffe7
    TEST EAX,EAX                        ; 005fffe9
    JNZ 0x005fffb5                      ; 005fffeb
        ;   XREF to: 005fffb5 (CONDITIONAL_JUMP)  ; LAB_005fffb5
    CALL dword ptr [0x00684ee4]         ; 005fffed | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    MOV dword ptr [EAX + 0x10],0x0      ; 005ffff3
    MOV EAX,ESI                         ; 005ffffa
        ;   Label: LAB_005ffffa
    ADD ESP,0x20                        ; 005ffffc
        ;   Label: LAB_005ffffc
    POP ESI                             ; 005fffff
    POP EBX                             ; 00600000
    RET                                 ; 00600001

