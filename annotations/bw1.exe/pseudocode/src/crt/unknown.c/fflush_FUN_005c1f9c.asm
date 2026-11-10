; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_unknown_c_fflush_FUN_005c1f9c(_FILE *stream)
;
; Parameters:
; _FILE *          Stack[0x4]:4   stream
;
; XREF[1]:
;   engine_dosio.cpp_reopenFileStream_FUN_00479240 at 00479258
;
; Called Functions:
;   crt_unknown.c_FUN_005c8dfc
;   crt_unknown.c_FUN_005c8e45
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1f9c
        ;   Label: crt_unknown.c_fflush_FUN_005c1f9c
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c1f9d
    MOV EAX,dword ptr [EBX]             ; 005c1fa1
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c1fa3
    ADD EAX,EBX                         ; 005c1fa6
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c1fa8
    TEST EDX,EDX                        ; 005c1fab
    JZ 0x005c1fbe                       ; 005c1fad
        ;   XREF to: 005c1fbe (CONDITIONAL_JUMP)  ; LAB_005c1fbe
    PUSH EDX                            ; 005c1faf
    CALL crt_unknown.c_FUN_005c8dfc     ; 005c1fb0
        ;   XREF to: 005c8dfc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8dfc()
    ADD ESP,0x4                         ; 005c1fb5
    TEST EAX,EAX                        ; 005c1fb8
    JZ 0x005c1fcb                       ; 005c1fba
        ;   XREF to: 005c1fcb (CONDITIONAL_JUMP)  ; LAB_005c1fcb
    POP EBX                             ; 005c1fbc
    RET                                 ; 005c1fbd
    PUSH 0x2                            ; 005c1fbe
        ;   Label: LAB_005c1fbe
    PUSH EAX                            ; 005c1fc0
    CALL crt_unknown.c_FUN_005c8e45     ; 005c1fc1
        ;   XREF to: 005c8e45 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8e45()
        ;   Label: LAB_005c1fc1
    ADD ESP,0x8                         ; 005c1fc6
    POP EBX                             ; 005c1fc9
    RET                                 ; 005c1fca
    MOV EAX,dword ptr [EBX]             ; 005c1fcb
        ;   Label: LAB_005c1fcb
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c1fcd
    PUSH 0x2                            ; 005c1fd0
    ADD EBX,EDX                         ; 005c1fd2
    PUSH EBX                            ; 005c1fd4
    JMP 0x005c1fc1                      ; 005c1fd5
        ;   XREF to: 005c1fc1 (UNCONDITIONAL_JUMP)  ; LAB_005c1fc1

