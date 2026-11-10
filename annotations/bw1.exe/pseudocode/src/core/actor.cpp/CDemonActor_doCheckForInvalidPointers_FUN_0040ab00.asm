; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ab00(CDemonActor *this_ptr,char *context_file,int context_line)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   context_file
; int              Stack[0xc]:4   context_line
;
; Referenced Globals:
;   undefined4 DAT_005d27fd
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ab00
        ;   Label: core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ab00
    PUSH ESI                            ; 0040ab01
    PUSH EDI                            ; 0040ab02
    PUSH EBP                            ; 0040ab03
    MOV EBP,ESP                         ; 0040ab04
    SUB ESP,0x8                         ; 0040ab06
    MOV EBX,dword ptr [EBP + 0x14]      ; 0040ab09
    TEST EBX,EBX                        ; 0040ab0c
    JZ 0x0040acfe                       ; 0040ab0e
        ;   XREF to: 0040acfe (CONDITIONAL_JUMP)  ; LAB_0040acfe
    CMP EBX,0xff000000                  ; 0040ab14
        ;   Label: LAB_0040ab14
    JC 0x0040ad2e                       ; 0040ab1a
        ;   XREF to: 0040ad2e (CONDITIONAL_JUMP)  ; LAB_0040ad2e
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0040ab20
        ;   Label: LAB_0040ab20
    PUSH ECX                            ; 0040ab23
    MOV ESI,dword ptr [EBP + 0x18]      ; 0040ab24
    PUSH ESI                            ; 0040ab27
    PUSH EBX                            ; 0040ab28
    MOV EAX,0x5d267b                    ; 0040ab29
    MOV EDX,0x765                       ; 0040ab2e
    PUSH 0x5d268d                       ; 0040ab33
    MOV [0x01d1d400],EAX                ; 0040ab38 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0040ab3d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0040ab43
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x10                        ; 0040ab48
    MOV EDI,dword ptr [EBX + 0x68]      ; 0040ab4b
        ;   Label: LAB_0040ab4b
    CMP EDI,0x78a123                    ; 0040ab4e
    JZ 0x0040abb0                       ; 0040ab54
        ;   XREF to: 0040abb0 (CONDITIONAL_JUMP)  ; LAB_0040abb0
    PUSH EDI                            ; 0040ab56
    PUSH 0x32                           ; 0040ab57
    MOV EAX,0x5d26c0                    ; 0040ab59
    PUSH 0x0                            ; 0040ab5e
    MOV EDX,0x76f                       ; 0040ab60
    MOV ESI,EBX                         ; 0040ab65
    PUSH 0x7c2fc0                       ; 0040ab67
    MOV [0x01d1d400],EAX                ; 0040ab6c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0040ab71 | DAT_01d1d404
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0040ab77
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040ab7c
    MOV EDI,0x7c2fc0                    ; 0040ab7f
    MOV ECX,0x31                        ; 0040ab84
    PUSH EDI                            ; 0040ab89
    MOV EAX,ECX                         ; 0040ab8a
    SHR ECX,0x2                         ; 0040ab8c
    MOVSD.REP ES:EDI,ESI                ; 0040ab8f
    MOV CL,AL                           ; 0040ab91
    AND CL,0x3                          ; 0040ab93
    MOVSB.REP ES:EDI,ESI                ; 0040ab96
    POP EDI                             ; 0040ab98
    PUSH EDI                            ; 0040ab99
    PUSH EBX                            ; 0040ab9a
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0040ab9b
    PUSH ESI                            ; 0040ab9e
    MOV EDI,dword ptr [EBP + 0x18]      ; 0040ab9f
    PUSH EDI                            ; 0040aba2
    PUSH 0x5d26d2                       ; 0040aba3
    CALL core_main.c_FUN_005030e0       ; 0040aba8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x18                        ; 0040abad
    LEA EAX,[EBX + 0x20]                ; 0040abb0
        ;   Label: LAB_0040abb0
    FLD float ptr [EAX + 0x4]           ; 0040abb3
    FMUL ST0                            ; 0040abb6
    FLD float ptr [EAX]                 ; 0040abb8
    FMUL ST0                            ; 0040abba
    FADDP                               ; 0040abbc
    FLD float ptr [EAX + 0x8]           ; 0040abbe
    FMUL ST0                            ; 0040abc1
    FADDP                               ; 0040abc3
    FSQRT                               ; 0040abc5
    FCOMP float ptr [0x005d27fd]        ; 0040abc7 | DAT_005d27fd
    FNSTSW AX                           ; 0040abcd
    SAHF                                ; 0040abcf
    JBE 0x0040ac46                      ; 0040abd0
        ;   XREF to: 0040ac46 (CONDITIONAL_JUMP)  ; LAB_0040ac46
    SUB ESP,0x8                         ; 0040abd2
    FLD float ptr [EBX + 0x28]          ; 0040abd5
    FSTP double ptr [ESP]               ; 0040abd8
    SUB ESP,0x8                         ; 0040abdb
    FLD float ptr [EBX + 0x24]          ; 0040abde
    FSTP double ptr [ESP]               ; 0040abe1
    SUB ESP,0x8                         ; 0040abe4
    FLD float ptr [EBX + 0x20]          ; 0040abe7
    FSTP double ptr [ESP]               ; 0040abea
    PUSH 0x32                           ; 0040abed
    MOV EAX,0x5d2730                    ; 0040abef
    PUSH 0x0                            ; 0040abf4
    MOV EDX,0x77a                       ; 0040abf6
    MOV EDI,0x7c2fc0                    ; 0040abfb
    PUSH 0x7c2fc0                       ; 0040ac00
    MOV [0x01d1d400],EAX                ; 0040ac05 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0040ac0a | DAT_01d1d404
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0040ac10
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040ac15
    MOV ESI,EBX                         ; 0040ac18
    MOV ECX,0x31                        ; 0040ac1a
    PUSH EDI                            ; 0040ac1f
    MOV EAX,ECX                         ; 0040ac20
    SHR ECX,0x2                         ; 0040ac22
    MOVSD.REP ES:EDI,ESI                ; 0040ac25
    MOV CL,AL                           ; 0040ac27
    AND CL,0x3                          ; 0040ac29
    MOVSB.REP ES:EDI,ESI                ; 0040ac2c
    POP EDI                             ; 0040ac2e
    PUSH EDI                            ; 0040ac2f
    PUSH EBX                            ; 0040ac30
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0040ac31
    PUSH ECX                            ; 0040ac34
    MOV ESI,dword ptr [EBP + 0x18]      ; 0040ac35
    PUSH ESI                            ; 0040ac38
    PUSH 0x5d2742                       ; 0040ac39
    CALL core_main.c_FUN_005030e0       ; 0040ac3e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x2c                        ; 0040ac43
    MOV dword ptr [EBP + -0x4],EBX      ; 0040ac46
        ;   Label: LAB_0040ac46
    XOR EDI,EDI                         ; 0040ac49
    MOV AH,byte ptr [EBX]               ; 0040ac4b
    MOV dword ptr [EBP + -0x8],EDI      ; 0040ac4d
    TEST AH,AH                          ; 0040ac50
    JZ 0x0040acf7                       ; 0040ac52
        ;   XREF to: 0040acf7 (CONDITIONAL_JUMP)  ; LAB_0040acf7
    CMP dword ptr [EBP + -0x8],0x1d     ; 0040ac58
        ;   Label: LAB_0040ac58
    JC 0x0040ad3f                       ; 0040ac5c
        ;   XREF to: 0040ad3f (CONDITIONAL_JUMP)  ; LAB_0040ad3f
    SUB ESP,0x8                         ; 0040ac62
        ;   Label: LAB_0040ac62
    FLD float ptr [EBX + 0x28]          ; 0040ac65
    FSTP double ptr [ESP]               ; 0040ac68
    SUB ESP,0x8                         ; 0040ac6b
    FLD float ptr [EBX + 0x24]          ; 0040ac6e
    FSTP double ptr [ESP]               ; 0040ac71
    SUB ESP,0x8                         ; 0040ac74
    FLD float ptr [EBX + 0x20]          ; 0040ac77
    FSTP double ptr [ESP]               ; 0040ac7a
    PUSH 0x32                           ; 0040ac7d
    PUSH 0x0                            ; 0040ac7f
    MOV ESI,0x5d279d                    ; 0040ac81
    MOV EDI,0x788                       ; 0040ac86
    PUSH 0x7c2fc0                       ; 0040ac8b
    MOV dword ptr [0x01d1d400],ESI      ; 0040ac90 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0040ac96 | DAT_01d1d404
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0040ac9c
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040aca1
    TEST EBX,EBX                        ; 0040aca4
    JZ 0x0040acc4                       ; 0040aca6
        ;   XREF to: 0040acc4 (CONDITIONAL_JUMP)  ; LAB_0040acc4
    MOV ECX,0x31                        ; 0040aca8
    MOV EDI,0x7c2fc0                    ; 0040acad
    MOV ESI,EBX                         ; 0040acb2
    PUSH EDI                            ; 0040acb4
    MOV EAX,ECX                         ; 0040acb5
    SHR ECX,0x2                         ; 0040acb7
    MOVSD.REP ES:EDI,ESI                ; 0040acba
    MOV CL,AL                           ; 0040acbc
    AND CL,0x3                          ; 0040acbe
    MOVSB.REP ES:EDI,ESI                ; 0040acc1
    POP EDI                             ; 0040acc3
    PUSH 0x7c2fc0                       ; 0040acc4
        ;   Label: LAB_0040acc4
    PUSH EBX                            ; 0040acc9
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0040acca
    PUSH EAX                            ; 0040accd
    MOV EDX,dword ptr [EBP + 0x18]      ; 0040acce
    PUSH EDX                            ; 0040acd1
    PUSH 0x5d27af                       ; 0040acd2
    CALL core_main.c_FUN_005030e0       ; 0040acd7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x2c                        ; 0040acdc
    MOV EDX,dword ptr [EBP + -0x8]      ; 0040acdf
        ;   Label: LAB_0040acdf
    MOV EAX,dword ptr [EBP + -0x4]      ; 0040ace2
    INC EDX                             ; 0040ace5
    INC EAX                             ; 0040ace6
    MOV dword ptr [EBP + -0x8],EDX      ; 0040ace7
    MOV DL,byte ptr [EAX]               ; 0040acea
    MOV dword ptr [EBP + -0x4],EAX      ; 0040acec
    TEST DL,DL                          ; 0040acef
    JNZ 0x0040ac58                      ; 0040acf1
        ;   XREF to: 0040ac58 (CONDITIONAL_JUMP)  ; LAB_0040ac58
    MOV ESP,EBP                         ; 0040acf7
        ;   Label: LAB_0040acf7
    POP EBP                             ; 0040acf9
    POP EDI                             ; 0040acfa
    POP ESI                             ; 0040acfb
    POP EBX                             ; 0040acfc
    RET                                 ; 0040acfd
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0040acfe
        ;   Label: LAB_0040acfe
    PUSH ESI                            ; 0040ad01
    MOV EDI,dword ptr [EBP + 0x18]      ; 0040ad02
    PUSH EDI                            ; 0040ad05
    MOV EDX,0x5d2641                    ; 0040ad06
    MOV ECX,0x761                       ; 0040ad0b
    PUSH 0x5d2653                       ; 0040ad10
    MOV dword ptr [0x01d1d400],EDX      ; 0040ad15 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0040ad1b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0040ad21
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 0040ad26
    JMP 0x0040ab14                      ; 0040ad29
        ;   XREF to: 0040ab14 (UNCONDITIONAL_JUMP)  ; LAB_0040ab14
    CMP EBX,0x1000                      ; 0040ad2e
        ;   Label: LAB_0040ad2e
    JL 0x0040ab20                       ; 0040ad34
        ;   XREF to: 0040ab20 (CONDITIONAL_JUMP)  ; LAB_0040ab20
    JMP 0x0040ab4b                      ; 0040ad3a
        ;   XREF to: 0040ab4b (UNCONDITIONAL_JUMP)  ; LAB_0040ab4b
    MOV EAX,dword ptr [EBP + -0x4]      ; 0040ad3f
        ;   Label: LAB_0040ad3f
    MOV AL,byte ptr [EAX]               ; 0040ad42
    INC AL                              ; 0040ad44
    AND EAX,0xff                        ; 0040ad46
    TEST byte ptr [EAX + 0x626114],0x8  ; 0040ad4b
    JNZ 0x0040acdf                      ; 0040ad52
        ;   XREF to: 0040acdf (CONDITIONAL_JUMP)  ; LAB_0040acdf
    JMP 0x0040ac62                      ; 0040ad54
        ;   XREF to: 0040ac62 (UNCONDITIONAL_JUMP)  ; LAB_0040ac62

