; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_script_cpp_FUN_00559360(void)
;
;
; XREF[3]:
;   core_script.cpp_CScript_dbLoad_FUN_005603c0 at 005604c5
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055bc43
;   core_script.cpp_FUN_005593f0 at 00559475
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559360
        ;   Label: core_script.cpp_FUN_00559360
    PUSH ESI                            ; 00559361
    PUSH EDI                            ; 00559362
    MOV ESI,dword ptr [ESP + 0x10]      ; 00559363
    MOV EDI,ESI                         ; 00559367
    SUB ECX,ECX                         ; 00559369
    DEC ECX                             ; 0055936b
    XOR EAX,EAX                         ; 0055936c
    SCASB.REPNE ES:EDI                  ; 0055936e
    NOT ECX                             ; 00559370
    DEC ECX                             ; 00559372
    MOV EBX,ECX                         ; 00559373
    TEST ECX,ECX                        ; 00559375
    JLE 0x00559390                      ; 00559377
        ;   XREF to: 00559390 (CONDITIONAL_JUMP)  ; LAB_00559390
    LEA EAX,[ECX + ESI*0x1]             ; 00559379
    MOV DL,byte ptr [EAX + -0x1]        ; 0055937c
        ;   Label: LAB_0055937c
    INC DL                              ; 0055937f
    AND EDX,0xff                        ; 00559381
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 00559387 | g_CharacterClassificationTable
    JNZ 0x005593af                      ; 0055938e
        ;   XREF to: 005593af (CONDITIONAL_JUMP)  ; LAB_005593af
    LEA EAX,[ESI + EBX*0x1]             ; 00559390
        ;   Label: LAB_00559390
    LEA EDI,[ESI + 0x1]                 ; 00559393
    MOV byte ptr [EAX],0x0              ; 00559396
    MOV AL,byte ptr [ESI]               ; 00559399
        ;   Label: LAB_00559399
    INC AL                              ; 0055939b
    AND EAX,0xff                        ; 0055939d
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 005593a2 | g_CharacterClassificationTable
    JNZ 0x005593b7                      ; 005593a9
        ;   XREF to: 005593b7 (CONDITIONAL_JUMP)  ; LAB_005593b7
    POP EDI                             ; 005593ab
    POP ESI                             ; 005593ac
    POP EBX                             ; 005593ad
    RET                                 ; 005593ae
        ;   Label: LAB_005593ae
    DEC EBX                             ; 005593af
        ;   Label: LAB_005593af
    DEC EAX                             ; 005593b0
    TEST EBX,EBX                        ; 005593b1
    JG 0x0055937c                       ; 005593b3
        ;   XREF to: 0055937c (CONDITIONAL_JUMP)  ; LAB_0055937c
    JMP 0x00559390                      ; 005593b5
        ;   XREF to: 00559390 (UNCONDITIONAL_JUMP)  ; LAB_00559390
    PUSH EBX                            ; 005593b7
        ;   Label: LAB_005593b7
    PUSH EDI                            ; 005593b8
    PUSH ESI                            ; 005593b9
    DEC EBX                             ; 005593ba
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005593bb
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005593c0
    JMP 0x00559399                      ; 005593c3
        ;   XREF to: 00559399 (UNCONDITIONAL_JUMP)  ; LAB_00559399

