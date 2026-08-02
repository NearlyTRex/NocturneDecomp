; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e1a0(void)
;
;
; XREF[1]:
;   crt_startup.c_initialize_runtime_FUN_0056720c at 00567241
;
; Referenced Globals:
;   void* PTR_GetStdHandle_00575538 = 00175dee
;
; Called Functions:
;   crt_unknown.c_FUN_0056e010
;   crt_unknown.c_FUN_0056e208
;   GetStdHandle
;
; *****************************************************************************

section .text

    PUSH -0xa                           ; 0056e1a0
        ;   Label: crt_unknown.c_FUN_0056e1a0
    CALL dword ptr CS:[0x575538]        ; 0056e1a2 | PTR_GetStdHandle_00575538
    MOV EDX,EAX                         ; 0056e1a9
    TEST EAX,EAX                        ; 0056e1ab
    JZ 0x0056e1b4                       ; 0056e1ad
        ;   XREF to: 0056e1b4 (CONDITIONAL_JUMP)  ; LAB_0056e1b4
    CMP EAX,-0x1                        ; 0056e1af
    JNZ 0x0056e1b9                      ; 0056e1b2
        ;   XREF to: 0056e1b9 (CONDITIONAL_JUMP)  ; LAB_0056e1b9
    CALL crt_unknown.c_FUN_0056e208     ; 0056e1b4
        ;   XREF to: 0056e208 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e208()
        ;   Label: LAB_0056e1b4
    PUSH EAX                            ; 0056e1b9
        ;   Label: LAB_0056e1b9
    CALL crt_unknown.c_FUN_0056e010     ; 0056e1ba
        ;   XREF to: 0056e010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e010()
    ADD ESP,0x4                         ; 0056e1bf
    PUSH -0xb                           ; 0056e1c2
    CALL dword ptr CS:[0x575538]        ; 0056e1c4 | PTR_GetStdHandle_00575538
    MOV EDX,EAX                         ; 0056e1cb
    TEST EAX,EAX                        ; 0056e1cd
    JZ 0x0056e1d6                       ; 0056e1cf
        ;   XREF to: 0056e1d6 (CONDITIONAL_JUMP)  ; LAB_0056e1d6
    CMP EAX,-0x1                        ; 0056e1d1
    JNZ 0x0056e1db                      ; 0056e1d4
        ;   XREF to: 0056e1db (CONDITIONAL_JUMP)  ; LAB_0056e1db
    CALL crt_unknown.c_FUN_0056e208     ; 0056e1d6
        ;   XREF to: 0056e208 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e208()
        ;   Label: LAB_0056e1d6
    PUSH EAX                            ; 0056e1db
        ;   Label: LAB_0056e1db
    CALL crt_unknown.c_FUN_0056e010     ; 0056e1dc
        ;   XREF to: 0056e010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e010()
    ADD ESP,0x4                         ; 0056e1e1
    PUSH -0xc                           ; 0056e1e4
    CALL dword ptr CS:[0x575538]        ; 0056e1e6 | PTR_GetStdHandle_00575538
    MOV EDX,EAX                         ; 0056e1ed
    TEST EAX,EAX                        ; 0056e1ef
    JZ 0x0056e1f8                       ; 0056e1f1
        ;   XREF to: 0056e1f8 (CONDITIONAL_JUMP)  ; LAB_0056e1f8
    CMP EAX,-0x1                        ; 0056e1f3
    JNZ 0x0056e1fd                      ; 0056e1f6
        ;   XREF to: 0056e1fd (CONDITIONAL_JUMP)  ; LAB_0056e1fd
    CALL crt_unknown.c_FUN_0056e208     ; 0056e1f8
        ;   XREF to: 0056e208 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e208()
        ;   Label: LAB_0056e1f8
    PUSH EAX                            ; 0056e1fd
        ;   Label: LAB_0056e1fd
    CALL crt_unknown.c_FUN_0056e010     ; 0056e1fe
        ;   XREF to: 0056e010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e010()
    ADD ESP,0x4                         ; 0056e203
    RET                                 ; 0056e206

