; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_hashClassName_FUN_0040c110(char *class_name)
;
; Parameters:
; char *           Stack[0x4]:4   class_name
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005c0820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c110
        ;   Label: core_actor.cpp_hashClassName_FUN_0040c110
    PUSH ESI                            ; 0040c111
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040c112
    XOR EBX,EBX                         ; 0040c116
    XOR EAX,EAX                         ; 0040c118
        ;   Label: LAB_0040c118
    MOV AL,byte ptr [ESI]               ; 0040c11a
    INC ESI                             ; 0040c11c
    TEST EAX,EAX                        ; 0040c11d
    JZ 0x0040c152                       ; 0040c11f
        ;   XREF to: 0040c152 (CONDITIONAL_JUMP)  ; LAB_0040c152
    MOV DL,AL                           ; 0040c121
    INC DL                              ; 0040c123
    AND EDX,0xff                        ; 0040c125
    TEST byte ptr [EDX + 0x626114],0xe0 ; 0040c12b
    JZ 0x0040c118                       ; 0040c132
        ;   XREF to: 0040c118 (CONDITIONAL_JUMP)  ; LAB_0040c118
    PUSH EAX                            ; 0040c134
    CALL crt_ctype.c_tolower_FUN_005c0820 ; 0040c135
        ;   XREF to: 005c0820 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005c0820(int character)
    MOV EDX,EBX                         ; 0040c13a
    SHL EDX,0x7                         ; 0040c13c
    SHR EBX,0x19                        ; 0040c13f
    ADD EBX,EDX                         ; 0040c142
    MOV EDX,EAX                         ; 0040c144
    SHL EDX,0x11                        ; 0040c146
    ADD EBX,EDX                         ; 0040c149
    ADD ESP,0x4                         ; 0040c14b
    ADD EBX,EAX                         ; 0040c14e
    JMP 0x0040c118                      ; 0040c150
        ;   XREF to: 0040c118 (UNCONDITIONAL_JUMP)  ; LAB_0040c118
    MOV EAX,EBX                         ; 0040c152
        ;   Label: LAB_0040c152
    POP ESI                             ; 0040c154
    POP EBX                             ; 0040c155
    RET                                 ; 0040c156

