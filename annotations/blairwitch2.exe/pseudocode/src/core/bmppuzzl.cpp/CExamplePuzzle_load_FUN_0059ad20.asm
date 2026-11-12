; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CExamplePuzzle_load_FUN_0059ad20(CExamplePuzzle *this_ptr,int param_2)
;
; Parameters:
; CExamplePuzzle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ad20
        ;   Label: core_bmppuzzl.cpp_CExamplePuzzle_load_FUN_0059ad20
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059ad21
    CMP dword ptr [ESP + 0xc],0x0       ; 0059ad25
    JNZ 0x0059ad2e                      ; 0059ad2a
        ;   XREF to: 0059ad2e (CONDITIONAL_JUMP)  ; LAB_0059ad2e
    POP EBX                             ; 0059ad2c
    RET                                 ; 0059ad2d
    MOV EAX,[0x006141b8]                ; 0059ad2e | DAT_006141b8
        ;   Label: LAB_0059ad2e
    SUB EAX,0x14                        ; 0059ad33
    PUSH EAX                            ; 0059ad36
    PUSH 0xa                            ; 0059ad37
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0059ad39
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    MOV dword ptr [EBX + 0x4],EAX       ; 0059ad3e
    MOV EAX,[0x006141bc]                ; 0059ad41 | DAT_006141bc
    ADD ESP,0x8                         ; 0059ad46
    SUB EAX,0x14                        ; 0059ad49
    PUSH EAX                            ; 0059ad4c
    PUSH 0xa                            ; 0059ad4d
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0059ad4f
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    MOV dword ptr [EBX + 0x8],EAX       ; 0059ad54
    MOV EAX,[0x006141b8]                ; 0059ad57 | DAT_006141b8
    ADD ESP,0x8                         ; 0059ad5c
    SUB EAX,0xa                         ; 0059ad5f
    PUSH EAX                            ; 0059ad62
    MOV EAX,dword ptr [EBX + 0x4]       ; 0059ad63
    ADD EAX,0x5                         ; 0059ad66
    PUSH EAX                            ; 0059ad69
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0059ad6a
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    MOV dword ptr [EBX + 0xc],EAX       ; 0059ad6f
    MOV EAX,[0x006141bc]                ; 0059ad72 | DAT_006141bc
    ADD ESP,0x8                         ; 0059ad77
    SUB EAX,0xa                         ; 0059ad7a
    PUSH EAX                            ; 0059ad7d
    MOV EAX,dword ptr [EBX + 0x8]       ; 0059ad7e
    ADD EAX,0x5                         ; 0059ad81
    PUSH EAX                            ; 0059ad84
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0059ad85
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0059ad8a
    MOV dword ptr [EBX + 0x10],EAX      ; 0059ad8d
    POP EBX                             ; 0059ad90
    RET                                 ; 0059ad91

