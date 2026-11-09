; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_hashClassName_FUN_0040c400(char *class_name)
;
; Parameters:
; char *           Stack[0x4]:4   class_name
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005b8470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c400
        ;   Label: core_actor.cpp_hashClassName_FUN_0040c400
    PUSH ESI                            ; 0040c401
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040c402
    XOR EBX,EBX                         ; 0040c406
    XOR EAX,EAX                         ; 0040c408
        ;   Label: LAB_0040c408
    MOV AL,byte ptr [ESI]               ; 0040c40a
    INC ESI                             ; 0040c40c
    TEST EAX,EAX                        ; 0040c40d
    JZ 0x0040c442                       ; 0040c40f
        ;   XREF to: 0040c442 (CONDITIONAL_JUMP)  ; LAB_0040c442
    MOV DL,AL                           ; 0040c411
    INC DL                              ; 0040c413
    AND EDX,0xff                        ; 0040c415
    TEST byte ptr [EDX + 0x61ed94],0xe0 ; 0040c41b
    JZ 0x0040c408                       ; 0040c422
        ;   XREF to: 0040c408 (CONDITIONAL_JUMP)  ; LAB_0040c408
    PUSH EAX                            ; 0040c424
    CALL crt_ctype.c_tolower_FUN_005b8470 ; 0040c425
        ;   XREF to: 005b8470 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005b8470(int character)
    MOV EDX,EBX                         ; 0040c42a
    SHL EDX,0x7                         ; 0040c42c
    SHR EBX,0x19                        ; 0040c42f
    ADD EBX,EDX                         ; 0040c432
    MOV EDX,EAX                         ; 0040c434
    SHL EDX,0x11                        ; 0040c436
    ADD EBX,EDX                         ; 0040c439
    ADD ESP,0x4                         ; 0040c43b
    ADD EBX,EAX                         ; 0040c43e
    JMP 0x0040c408                      ; 0040c440
        ;   XREF to: 0040c408 (UNCONDITIONAL_JUMP)  ; LAB_0040c408
    MOV EAX,EBX                         ; 0040c442
        ;   Label: LAB_0040c442
    POP ESI                             ; 0040c444
    POP EBX                             ; 0040c445
    RET                                 ; 0040c446

