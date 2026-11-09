; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_trimString_FUN_00521110(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; XREF[3]:
;   core_script.cpp_CScript_dbLoad_FUN_00529c10 at 00529d5a
;   core_script.cpp_FUN_00522350 at 00523db9
;   core_script.cpp_parseArgument_FUN_005211a0 at 00521225
;
; Referenced Globals:
;   undefined4 DAT_0061ed94
;
; Called Functions:
;   crt_string.c_memmove_FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521110
        ;   Label: core_script.cpp_trimString_FUN_00521110
    PUSH ESI                            ; 00521111
    PUSH EDI                            ; 00521112
    MOV ESI,dword ptr [ESP + 0x10]      ; 00521113
    MOV EDI,ESI                         ; 00521117
    SUB ECX,ECX                         ; 00521119
    DEC ECX                             ; 0052111b
    XOR EAX,EAX                         ; 0052111c
    SCASB.REPNE ES:EDI                  ; 0052111e
    NOT ECX                             ; 00521120
    DEC ECX                             ; 00521122
    MOV EBX,ECX                         ; 00521123
    TEST ECX,ECX                        ; 00521125
    JLE 0x00521140                      ; 00521127
        ;   XREF to: 00521140 (CONDITIONAL_JUMP)  ; LAB_00521140
    LEA EAX,[ECX + ESI*0x1]             ; 00521129
    MOV DL,byte ptr [EAX + -0x1]        ; 0052112c
        ;   Label: LAB_0052112c
    INC DL                              ; 0052112f
    AND EDX,0xff                        ; 00521131
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 00521137 | DAT_0061ed94
    JNZ 0x0052115f                      ; 0052113e
        ;   XREF to: 0052115f (CONDITIONAL_JUMP)  ; LAB_0052115f
    LEA EAX,[ESI + EBX*0x1]             ; 00521140
        ;   Label: LAB_00521140
    LEA EDI,[ESI + 0x1]                 ; 00521143
    MOV byte ptr [EAX],0x0              ; 00521146
    MOV AL,byte ptr [ESI]               ; 00521149
        ;   Label: LAB_00521149
    INC AL                              ; 0052114b
    AND EAX,0xff                        ; 0052114d
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 00521152 | DAT_0061ed94
    JNZ 0x00521167                      ; 00521159
        ;   XREF to: 00521167 (CONDITIONAL_JUMP)  ; LAB_00521167
    POP EDI                             ; 0052115b
    POP ESI                             ; 0052115c
    POP EBX                             ; 0052115d
    RET                                 ; 0052115e
        ;   Label: LAB_0052115e
    DEC EBX                             ; 0052115f
        ;   Label: LAB_0052115f
    DEC EAX                             ; 00521160
    TEST EBX,EBX                        ; 00521161
    JG 0x0052112c                       ; 00521163
        ;   XREF to: 0052112c (CONDITIONAL_JUMP)  ; LAB_0052112c
    JMP 0x00521140                      ; 00521165
        ;   XREF to: 00521140 (UNCONDITIONAL_JUMP)  ; LAB_00521140
    PUSH EBX                            ; 00521167
        ;   Label: LAB_00521167
    PUSH EDI                            ; 00521168
    PUSH ESI                            ; 00521169
    DEC EBX                             ; 0052116a
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0052116b
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00521170
    JMP 0x00521149                      ; 00521173
        ;   XREF to: 00521149 (UNCONDITIONAL_JUMP)  ; LAB_00521149

