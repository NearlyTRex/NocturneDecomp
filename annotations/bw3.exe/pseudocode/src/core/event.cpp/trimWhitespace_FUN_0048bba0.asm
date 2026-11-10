; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_trimWhitespace_FUN_0048bba0(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; Called Functions:
;   crt_string.c_memmove_FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048bba0
        ;   Label: core_event.cpp_trimWhitespace_FUN_0048bba0
    PUSH ESI                            ; 0048bba1
    PUSH EDI                            ; 0048bba2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0048bba3
    MOV EDI,ESI                         ; 0048bba7
    SUB ECX,ECX                         ; 0048bba9
    DEC ECX                             ; 0048bbab
    XOR EAX,EAX                         ; 0048bbac
    SCASB.REPNE ES:EDI                  ; 0048bbae
    NOT ECX                             ; 0048bbb0
    DEC ECX                             ; 0048bbb2
    MOV EBX,ECX                         ; 0048bbb3
    TEST ECX,ECX                        ; 0048bbb5
    JLE 0x0048bbd0                      ; 0048bbb7
        ;   XREF to: 0048bbd0 (CONDITIONAL_JUMP)  ; LAB_0048bbd0
    LEA EAX,[ECX + ESI*0x1]             ; 0048bbb9
    MOV DL,byte ptr [EAX + -0x1]        ; 0048bbbc
        ;   Label: LAB_0048bbbc
    INC DL                              ; 0048bbbf
    AND EDX,0xff                        ; 0048bbc1
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 0048bbc7
    JNZ 0x0048bbef                      ; 0048bbce
        ;   XREF to: 0048bbef (CONDITIONAL_JUMP)  ; LAB_0048bbef
    LEA EAX,[ESI + EBX*0x1]             ; 0048bbd0
        ;   Label: LAB_0048bbd0
    LEA EDI,[ESI + 0x1]                 ; 0048bbd3
    MOV byte ptr [EAX],0x0              ; 0048bbd6
    MOV AL,byte ptr [ESI]               ; 0048bbd9
        ;   Label: LAB_0048bbd9
    INC AL                              ; 0048bbdb
    AND EAX,0xff                        ; 0048bbdd
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048bbe2
    JNZ 0x0048bbf7                      ; 0048bbe9
        ;   XREF to: 0048bbf7 (CONDITIONAL_JUMP)  ; LAB_0048bbf7
    POP EDI                             ; 0048bbeb
    POP ESI                             ; 0048bbec
    POP EBX                             ; 0048bbed
    RET                                 ; 0048bbee
    DEC EBX                             ; 0048bbef
        ;   Label: LAB_0048bbef
    DEC EAX                             ; 0048bbf0
    TEST EBX,EBX                        ; 0048bbf1
    JG 0x0048bbbc                       ; 0048bbf3
        ;   XREF to: 0048bbbc (CONDITIONAL_JUMP)  ; LAB_0048bbbc
    JMP 0x0048bbd0                      ; 0048bbf5
        ;   XREF to: 0048bbd0 (UNCONDITIONAL_JUMP)  ; LAB_0048bbd0
    PUSH EBX                            ; 0048bbf7
        ;   Label: LAB_0048bbf7
    PUSH EDI                            ; 0048bbf8
    PUSH ESI                            ; 0048bbf9
    DEC EBX                             ; 0048bbfa
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048bbfb
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048bc00
    JMP 0x0048bbd9                      ; 0048bc03
        ;   XREF to: 0048bbd9 (UNCONDITIONAL_JUMP)  ; LAB_0048bbd9

