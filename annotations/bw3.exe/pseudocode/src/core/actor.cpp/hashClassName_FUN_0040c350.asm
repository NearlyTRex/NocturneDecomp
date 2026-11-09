; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_hashClassName_FUN_0040c350(char *class_name)
;
; Parameters:
; char *           Stack[0x4]:4   class_name
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005a35a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c350
        ;   Label: core_actor.cpp_hashClassName_FUN_0040c350
    PUSH ESI                            ; 0040c351
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040c352
    XOR EBX,EBX                         ; 0040c356
    XOR EAX,EAX                         ; 0040c358
        ;   Label: LAB_0040c358
    MOV AL,byte ptr [ESI]               ; 0040c35a
    INC ESI                             ; 0040c35c
    TEST EAX,EAX                        ; 0040c35d
    JZ 0x0040c392                       ; 0040c35f
        ;   XREF to: 0040c392 (CONDITIONAL_JUMP)  ; LAB_0040c392
    MOV DL,AL                           ; 0040c361
    INC DL                              ; 0040c363
    AND EDX,0xff                        ; 0040c365
    TEST byte ptr [EDX + 0x6074b8],0xe0 ; 0040c36b
    JZ 0x0040c358                       ; 0040c372
        ;   XREF to: 0040c358 (CONDITIONAL_JUMP)  ; LAB_0040c358
    PUSH EAX                            ; 0040c374
    CALL crt_ctype.c_tolower_FUN_005a35a0 ; 0040c375
        ;   XREF to: 005a35a0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005a35a0(int character)
    MOV EDX,EBX                         ; 0040c37a
    SHL EDX,0x7                         ; 0040c37c
    SHR EBX,0x19                        ; 0040c37f
    ADD EBX,EDX                         ; 0040c382
    MOV EDX,EAX                         ; 0040c384
    SHL EDX,0x11                        ; 0040c386
    ADD EBX,EDX                         ; 0040c389
    ADD ESP,0x4                         ; 0040c38b
    ADD EBX,EAX                         ; 0040c38e
    JMP 0x0040c358                      ; 0040c390
        ;   XREF to: 0040c358 (UNCONDITIONAL_JUMP)  ; LAB_0040c358
    MOV EAX,EBX                         ; 0040c392
        ;   Label: LAB_0040c392
    POP ESI                             ; 0040c394
    POP EBX                             ; 0040c395
    RET                                 ; 0040c396

