; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_trimWhitespace_FUN_00488f50(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; Called Functions:
;   crt_string.c_memmove_FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488f50
        ;   Label: core_event.cpp_trimWhitespace_FUN_00488f50
    PUSH ESI                            ; 00488f51
    PUSH EDI                            ; 00488f52
    MOV ESI,dword ptr [ESP + 0x10]      ; 00488f53
    MOV EDI,ESI                         ; 00488f57
    SUB ECX,ECX                         ; 00488f59
    DEC ECX                             ; 00488f5b
    XOR EAX,EAX                         ; 00488f5c
    SCASB.REPNE ES:EDI                  ; 00488f5e
    NOT ECX                             ; 00488f60
    DEC ECX                             ; 00488f62
    MOV EBX,ECX                         ; 00488f63
    TEST ECX,ECX                        ; 00488f65
    JLE 0x00488f80                      ; 00488f67
        ;   XREF to: 00488f80 (CONDITIONAL_JUMP)  ; LAB_00488f80
    LEA EAX,[ECX + ESI*0x1]             ; 00488f69
    MOV DL,byte ptr [EAX + -0x1]        ; 00488f6c
        ;   Label: LAB_00488f6c
    INC DL                              ; 00488f6f
    AND EDX,0xff                        ; 00488f71
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 00488f77
    JNZ 0x00488f9f                      ; 00488f7e
        ;   XREF to: 00488f9f (CONDITIONAL_JUMP)  ; LAB_00488f9f
    LEA EAX,[ESI + EBX*0x1]             ; 00488f80
        ;   Label: LAB_00488f80
    LEA EDI,[ESI + 0x1]                 ; 00488f83
    MOV byte ptr [EAX],0x0              ; 00488f86
    MOV AL,byte ptr [ESI]               ; 00488f89
        ;   Label: LAB_00488f89
    INC AL                              ; 00488f8b
    AND EAX,0xff                        ; 00488f8d
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 00488f92
    JNZ 0x00488fa7                      ; 00488f99
        ;   XREF to: 00488fa7 (CONDITIONAL_JUMP)  ; LAB_00488fa7
    POP EDI                             ; 00488f9b
    POP ESI                             ; 00488f9c
    POP EBX                             ; 00488f9d
    RET                                 ; 00488f9e
    DEC EBX                             ; 00488f9f
        ;   Label: LAB_00488f9f
    DEC EAX                             ; 00488fa0
    TEST EBX,EBX                        ; 00488fa1
    JG 0x00488f6c                       ; 00488fa3
        ;   XREF to: 00488f6c (CONDITIONAL_JUMP)  ; LAB_00488f6c
    JMP 0x00488f80                      ; 00488fa5
        ;   XREF to: 00488f80 (UNCONDITIONAL_JUMP)  ; LAB_00488f80
    PUSH EBX                            ; 00488fa7
        ;   Label: LAB_00488fa7
    PUSH EDI                            ; 00488fa8
    PUSH ESI                            ; 00488fa9
    DEC EBX                             ; 00488faa
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 00488fab
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00488fb0
    JMP 0x00488f89                      ; 00488fb3
        ;   XREF to: 00488f89 (UNCONDITIONAL_JUMP)  ; LAB_00488f89

