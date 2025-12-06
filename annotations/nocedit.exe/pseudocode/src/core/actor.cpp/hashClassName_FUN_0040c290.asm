; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint core_actor.cpp_hashClassName_FUN_0040c290(char * class_name)
;
; Parameters:
; char *           Stack[0x4]:4   class_name
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005feb30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c290
        ;   Label: core_actor.cpp_hashClassName_FUN_0040c290
    PUSH ESI                            ; 0040c291
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040c292
    XOR EBX,EBX                         ; 0040c296
    XOR EAX,EAX                         ; 0040c298
        ;   Label: LAB_0040c298
    MOV AL,byte ptr [ESI]               ; 0040c29a
    INC ESI                             ; 0040c29c
    TEST EAX,EAX                        ; 0040c29d
    JZ 0x0040c2d2                       ; 0040c29f | LAB_0040c2d2
        ;   XREF to: 0040c2d2 (CONDITIONAL_JUMP)
    MOV DL,AL                           ; 0040c2a1
    INC DL                              ; 0040c2a3
    AND EDX,0xff                        ; 0040c2a5
    TEST byte ptr [EDX + 0x6849c4],0xe0 ; 0040c2ab | char[256] g_CharacterClassificationTable
    JZ 0x0040c298                       ; 0040c2b2 | LAB_0040c298
        ;   XREF to: 0040c298 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0040c2b4
    CALL crt_ctype.c_tolower_FUN_005feb30 ; 0040c2b5 | int crt_ctype.c_tolower_FUN_005feb30(int character)
        ;   XREF to: 005feb30 (UNCONDITIONAL_CALL)
    MOV EDX,EBX                         ; 0040c2ba
    SHL EDX,0x7                         ; 0040c2bc
    SHR EBX,0x19                        ; 0040c2bf
    ADD EBX,EDX                         ; 0040c2c2
    MOV EDX,EAX                         ; 0040c2c4
    SHL EDX,0x11                        ; 0040c2c6
    ADD EBX,EDX                         ; 0040c2c9
    ADD ESP,0x4                         ; 0040c2cb
    ADD EBX,EAX                         ; 0040c2ce
    JMP 0x0040c298                      ; 0040c2d0 | LAB_0040c298
        ;   XREF to: 0040c298 (UNCONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 0040c2d2
        ;   Label: LAB_0040c2d2
    POP ESI                             ; 0040c2d4
    POP EBX                             ; 0040c2d5
    RET                                 ; 0040c2d6

