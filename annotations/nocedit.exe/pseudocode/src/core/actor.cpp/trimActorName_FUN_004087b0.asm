; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_trimActorName_FUN_004087b0(CDemonActor *actor_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004087b0
        ;   Label: core_actor.cpp_trimActorName_FUN_004087b0
    PUSH ESI                            ; 004087b1
    PUSH EDI                            ; 004087b2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004087b3
    MOV EDI,ESI                         ; 004087b7
    SUB ECX,ECX                         ; 004087b9
    DEC ECX                             ; 004087bb
    XOR EAX,EAX                         ; 004087bc
    SCASB.REPNE ES:EDI                  ; 004087be
    NOT ECX                             ; 004087c0
    DEC ECX                             ; 004087c2
    MOV EBX,ECX                         ; 004087c3
    TEST ECX,ECX                        ; 004087c5
    JLE 0x004087e0                      ; 004087c7
        ;   XREF to: 004087e0 (CONDITIONAL_JUMP)  ; LAB_004087e0
    LEA EAX,[ECX + ESI*0x1]             ; 004087c9
    MOV DL,byte ptr [EAX + -0x1]        ; 004087cc
        ;   Label: LAB_004087cc
    INC DL                              ; 004087cf
    AND EDX,0xff                        ; 004087d1
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004087d7 | g_CharacterClassificationTable
    JNZ 0x004087ff                      ; 004087de
        ;   XREF to: 004087ff (CONDITIONAL_JUMP)  ; LAB_004087ff
    LEA EAX,[ESI + EBX*0x1]             ; 004087e0
        ;   Label: LAB_004087e0
    LEA EDI,[ESI + 0x1]                 ; 004087e3
    MOV byte ptr [EAX],0x0              ; 004087e6
    MOV AL,byte ptr [ESI]               ; 004087e9
        ;   Label: LAB_004087e9
    INC AL                              ; 004087eb
    AND EAX,0xff                        ; 004087ed
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004087f2 | g_CharacterClassificationTable
    JNZ 0x00408807                      ; 004087f9
        ;   XREF to: 00408807 (CONDITIONAL_JUMP)  ; LAB_00408807
    POP EDI                             ; 004087fb
    POP ESI                             ; 004087fc
    POP EBX                             ; 004087fd
    RET                                 ; 004087fe
    DEC EBX                             ; 004087ff
        ;   Label: LAB_004087ff
    DEC EAX                             ; 00408800
    TEST EBX,EBX                        ; 00408801
    JG 0x004087cc                       ; 00408803
        ;   XREF to: 004087cc (CONDITIONAL_JUMP)  ; LAB_004087cc
    JMP 0x004087e0                      ; 00408805
        ;   XREF to: 004087e0 (UNCONDITIONAL_JUMP)  ; LAB_004087e0
    PUSH EBX                            ; 00408807
        ;   Label: LAB_00408807
    PUSH EDI                            ; 00408808
    PUSH ESI                            ; 00408809
    DEC EBX                             ; 0040880a
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0040880b
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00408810
    JMP 0x004087e9                      ; 00408813
        ;   XREF to: 004087e9 (UNCONDITIONAL_JUMP)  ; LAB_004087e9

