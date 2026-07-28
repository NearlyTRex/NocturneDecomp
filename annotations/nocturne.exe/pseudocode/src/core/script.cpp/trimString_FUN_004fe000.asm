; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_trimString_FUN_004fe000(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; XREF[3]:
;   core_script.cpp_CScript_dbLoad_FUN_00504e70 at 00504f65
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 005006f3
;   core_script.cpp_parseArgument_FUN_004fe090 at 004fe115
;
; Referenced Globals:
;   undefined4 DAT_005c168c
;
; Called Functions:
;   crt_string.c_memmove_FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe000
        ;   Label: core_script.cpp_trimString_FUN_004fe000
    PUSH ESI                            ; 004fe001
    PUSH EDI                            ; 004fe002
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fe003
    MOV EDI,ESI                         ; 004fe007
    SUB ECX,ECX                         ; 004fe009
    DEC ECX                             ; 004fe00b
    XOR EAX,EAX                         ; 004fe00c
    SCASB.REPNE ES:EDI                  ; 004fe00e
    NOT ECX                             ; 004fe010
    DEC ECX                             ; 004fe012
    MOV EBX,ECX                         ; 004fe013
    TEST ECX,ECX                        ; 004fe015
    JLE 0x004fe030                      ; 004fe017
        ;   XREF to: 004fe030 (CONDITIONAL_JUMP)  ; LAB_004fe030
    LEA EAX,[ECX + ESI*0x1]             ; 004fe019
    MOV DL,byte ptr [EAX + -0x1]        ; 004fe01c
        ;   Label: LAB_004fe01c
    INC DL                              ; 004fe01f
    AND EDX,0xff                        ; 004fe021
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 004fe027 | DAT_005c168c
    JNZ 0x004fe04f                      ; 004fe02e
        ;   XREF to: 004fe04f (CONDITIONAL_JUMP)  ; LAB_004fe04f
    LEA EAX,[ESI + EBX*0x1]             ; 004fe030
        ;   Label: LAB_004fe030
    LEA EDI,[ESI + 0x1]                 ; 004fe033
    MOV byte ptr [EAX],0x0              ; 004fe036
    MOV AL,byte ptr [ESI]               ; 004fe039
        ;   Label: LAB_004fe039
    INC AL                              ; 004fe03b
    AND EAX,0xff                        ; 004fe03d
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 004fe042 | DAT_005c168c
    JNZ 0x004fe057                      ; 004fe049
        ;   XREF to: 004fe057 (CONDITIONAL_JUMP)  ; LAB_004fe057
    POP EDI                             ; 004fe04b
    POP ESI                             ; 004fe04c
    POP EBX                             ; 004fe04d
    RET                                 ; 004fe04e
        ;   Label: LAB_004fe04e
    DEC EBX                             ; 004fe04f
        ;   Label: LAB_004fe04f
    DEC EAX                             ; 004fe050
    TEST EBX,EBX                        ; 004fe051
    JG 0x004fe01c                       ; 004fe053
        ;   XREF to: 004fe01c (CONDITIONAL_JUMP)  ; LAB_004fe01c
    JMP 0x004fe030                      ; 004fe055
        ;   XREF to: 004fe030 (UNCONDITIONAL_JUMP)  ; LAB_004fe030
    PUSH EBX                            ; 004fe057
        ;   Label: LAB_004fe057
    PUSH EDI                            ; 004fe058
    PUSH ESI                            ; 004fe059
    DEC EBX                             ; 004fe05a
    CALL crt_string.c_memmove_FUN_00566170 ; 004fe05b
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004fe060
    JMP 0x004fe039                      ; 004fe063
        ;   XREF to: 004fe039 (UNCONDITIONAL_JUMP)  ; LAB_004fe039

