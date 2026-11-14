; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ad40(CDemonActor *this_ptr,char *context_file,int context_line)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   context_file
; int              Stack[0xc]:4   context_line
;
; Referenced Globals:
;   undefined4 DAT_005b5849
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ad40
        ;   Label: core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ad40
    PUSH ESI                            ; 0040ad41
    PUSH EDI                            ; 0040ad42
    PUSH EBP                            ; 0040ad43
    MOV EBP,ESP                         ; 0040ad44
    SUB ESP,0x8                         ; 0040ad46
    MOV EBX,dword ptr [EBP + 0x14]      ; 0040ad49
    TEST EBX,EBX                        ; 0040ad4c
    JZ 0x0040af3e                       ; 0040ad4e
        ;   XREF to: 0040af3e (CONDITIONAL_JUMP)  ; LAB_0040af3e
    CMP EBX,0xff000000                  ; 0040ad54
        ;   Label: LAB_0040ad54
    JC 0x0040af6e                       ; 0040ad5a
        ;   XREF to: 0040af6e (CONDITIONAL_JUMP)  ; LAB_0040af6e
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0040ad60
        ;   Label: LAB_0040ad60
    PUSH ECX                            ; 0040ad63
    MOV ESI,dword ptr [EBP + 0x18]      ; 0040ad64
    PUSH ESI                            ; 0040ad67
    PUSH EBX                            ; 0040ad68
    MOV EAX,0x5b56c7                    ; 0040ad69
    MOV EDX,0x77f                       ; 0040ad6e
    PUSH 0x5b56d9                       ; 0040ad73
    MOV [0x01d71de0],EAX                ; 0040ad78 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0040ad7d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040ad83
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x10                        ; 0040ad88
    MOV EDI,dword ptr [EBX + 0x68]      ; 0040ad8b
        ;   Label: LAB_0040ad8b
    CMP EDI,0x78a123                    ; 0040ad8e
    JZ 0x0040adf0                       ; 0040ad94
        ;   XREF to: 0040adf0 (CONDITIONAL_JUMP)  ; LAB_0040adf0
    PUSH EDI                            ; 0040ad96
    PUSH 0x32                           ; 0040ad97
    MOV EAX,0x5b570c                    ; 0040ad99
    PUSH 0x0                            ; 0040ad9e
    MOV EDX,0x789                       ; 0040ada0
    MOV ESI,EBX                         ; 0040ada5
    PUSH 0x7df940                       ; 0040ada7
    MOV [0x01d71de0],EAX                ; 0040adac | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0040adb1 | DAT_01d71de4
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0040adb7
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040adbc
    MOV EDI,0x7df940                    ; 0040adbf
    MOV ECX,0x31                        ; 0040adc4
    PUSH EDI                            ; 0040adc9
    MOV EAX,ECX                         ; 0040adca
    SHR ECX,0x2                         ; 0040adcc
    MOVSD.REP ES:EDI,ESI                ; 0040adcf
    MOV CL,AL                           ; 0040add1
    AND CL,0x3                          ; 0040add3
    MOVSB.REP ES:EDI,ESI                ; 0040add6
    POP EDI                             ; 0040add8
    PUSH EDI                            ; 0040add9
    PUSH EBX                            ; 0040adda
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0040addb
    PUSH ESI                            ; 0040adde
    MOV EDI,dword ptr [EBP + 0x18]      ; 0040addf
    PUSH EDI                            ; 0040ade2
    PUSH 0x5b571e                       ; 0040ade3
    CALL core_main.c_FUN_004e4330       ; 0040ade8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x18                        ; 0040aded
    LEA EAX,[EBX + 0x20]                ; 0040adf0
        ;   Label: LAB_0040adf0
    FLD float ptr [EAX + 0x4]           ; 0040adf3
    FMUL ST0                            ; 0040adf6
    FLD float ptr [EAX]                 ; 0040adf8
    FMUL ST0                            ; 0040adfa
    FADDP                               ; 0040adfc
    FLD float ptr [EAX + 0x8]           ; 0040adfe
    FMUL ST0                            ; 0040ae01
    FADDP                               ; 0040ae03
    FSQRT                               ; 0040ae05
    FCOMP float ptr [0x005b5849]        ; 0040ae07 | DAT_005b5849
    FNSTSW AX                           ; 0040ae0d
    SAHF                                ; 0040ae0f
    JBE 0x0040ae86                      ; 0040ae10
        ;   XREF to: 0040ae86 (CONDITIONAL_JUMP)  ; LAB_0040ae86
    SUB ESP,0x8                         ; 0040ae12
    FLD float ptr [EBX + 0x28]          ; 0040ae15
    FSTP double ptr [ESP]               ; 0040ae18
    SUB ESP,0x8                         ; 0040ae1b
    FLD float ptr [EBX + 0x24]          ; 0040ae1e
    FSTP double ptr [ESP]               ; 0040ae21
    SUB ESP,0x8                         ; 0040ae24
    FLD float ptr [EBX + 0x20]          ; 0040ae27
    FSTP double ptr [ESP]               ; 0040ae2a
    PUSH 0x32                           ; 0040ae2d
    MOV EAX,0x5b577c                    ; 0040ae2f
    PUSH 0x0                            ; 0040ae34
    MOV EDX,0x794                       ; 0040ae36
    MOV EDI,0x7df940                    ; 0040ae3b
    PUSH 0x7df940                       ; 0040ae40
    MOV [0x01d71de0],EAX                ; 0040ae45 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0040ae4a | DAT_01d71de4
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0040ae50
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040ae55
    MOV ESI,EBX                         ; 0040ae58
    MOV ECX,0x31                        ; 0040ae5a
    PUSH EDI                            ; 0040ae5f
    MOV EAX,ECX                         ; 0040ae60
    SHR ECX,0x2                         ; 0040ae62
    MOVSD.REP ES:EDI,ESI                ; 0040ae65
    MOV CL,AL                           ; 0040ae67
    AND CL,0x3                          ; 0040ae69
    MOVSB.REP ES:EDI,ESI                ; 0040ae6c
    POP EDI                             ; 0040ae6e
    PUSH EDI                            ; 0040ae6f
    PUSH EBX                            ; 0040ae70
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0040ae71
    PUSH ECX                            ; 0040ae74
    MOV ESI,dword ptr [EBP + 0x18]      ; 0040ae75
    PUSH ESI                            ; 0040ae78
    PUSH 0x5b578e                       ; 0040ae79
    CALL core_main.c_FUN_004e4330       ; 0040ae7e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x2c                        ; 0040ae83
    MOV dword ptr [EBP + -0x4],EBX      ; 0040ae86
        ;   Label: LAB_0040ae86
    XOR EDI,EDI                         ; 0040ae89
    MOV AH,byte ptr [EBX]               ; 0040ae8b
    MOV dword ptr [EBP + -0x8],EDI      ; 0040ae8d
    TEST AH,AH                          ; 0040ae90
    JZ 0x0040af37                       ; 0040ae92
        ;   XREF to: 0040af37 (CONDITIONAL_JUMP)  ; LAB_0040af37
    CMP dword ptr [EBP + -0x8],0x1d     ; 0040ae98
        ;   Label: LAB_0040ae98
    JC 0x0040af7f                       ; 0040ae9c
        ;   XREF to: 0040af7f (CONDITIONAL_JUMP)  ; LAB_0040af7f
    SUB ESP,0x8                         ; 0040aea2
        ;   Label: LAB_0040aea2
    FLD float ptr [EBX + 0x28]          ; 0040aea5
    FSTP double ptr [ESP]               ; 0040aea8
    SUB ESP,0x8                         ; 0040aeab
    FLD float ptr [EBX + 0x24]          ; 0040aeae
    FSTP double ptr [ESP]               ; 0040aeb1
    SUB ESP,0x8                         ; 0040aeb4
    FLD float ptr [EBX + 0x20]          ; 0040aeb7
    FSTP double ptr [ESP]               ; 0040aeba
    PUSH 0x32                           ; 0040aebd
    PUSH 0x0                            ; 0040aebf
    MOV ESI,0x5b57e9                    ; 0040aec1
    MOV EDI,0x7a2                       ; 0040aec6
    PUSH 0x7df940                       ; 0040aecb
    MOV dword ptr [0x01d71de0],ESI      ; 0040aed0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0040aed6 | DAT_01d71de4
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0040aedc
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040aee1
    TEST EBX,EBX                        ; 0040aee4
    JZ 0x0040af04                       ; 0040aee6
        ;   XREF to: 0040af04 (CONDITIONAL_JUMP)  ; LAB_0040af04
    MOV ECX,0x31                        ; 0040aee8
    MOV EDI,0x7df940                    ; 0040aeed
    MOV ESI,EBX                         ; 0040aef2
    PUSH EDI                            ; 0040aef4
    MOV EAX,ECX                         ; 0040aef5
    SHR ECX,0x2                         ; 0040aef7
    MOVSD.REP ES:EDI,ESI                ; 0040aefa
    MOV CL,AL                           ; 0040aefc
    AND CL,0x3                          ; 0040aefe
    MOVSB.REP ES:EDI,ESI                ; 0040af01
    POP EDI                             ; 0040af03
    PUSH 0x7df940                       ; 0040af04
        ;   Label: LAB_0040af04
    PUSH EBX                            ; 0040af09
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0040af0a
    PUSH EAX                            ; 0040af0d
    MOV EDX,dword ptr [EBP + 0x18]      ; 0040af0e
    PUSH EDX                            ; 0040af11
    PUSH 0x5b57fb                       ; 0040af12
    CALL core_main.c_FUN_004e4330       ; 0040af17
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x2c                        ; 0040af1c
    MOV EDX,dword ptr [EBP + -0x8]      ; 0040af1f
        ;   Label: LAB_0040af1f
    MOV EAX,dword ptr [EBP + -0x4]      ; 0040af22
    INC EDX                             ; 0040af25
    INC EAX                             ; 0040af26
    MOV dword ptr [EBP + -0x8],EDX      ; 0040af27
    MOV DL,byte ptr [EAX]               ; 0040af2a
    MOV dword ptr [EBP + -0x4],EAX      ; 0040af2c
    TEST DL,DL                          ; 0040af2f
    JNZ 0x0040ae98                      ; 0040af31
        ;   XREF to: 0040ae98 (CONDITIONAL_JUMP)  ; LAB_0040ae98
    MOV ESP,EBP                         ; 0040af37
        ;   Label: LAB_0040af37
    POP EBP                             ; 0040af39
    POP EDI                             ; 0040af3a
    POP ESI                             ; 0040af3b
    POP EBX                             ; 0040af3c
    RET                                 ; 0040af3d
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0040af3e
        ;   Label: LAB_0040af3e
    PUSH ESI                            ; 0040af41
    MOV EDI,dword ptr [EBP + 0x18]      ; 0040af42
    PUSH EDI                            ; 0040af45
    MOV EDX,0x5b568d                    ; 0040af46
    MOV ECX,0x77b                       ; 0040af4b
    PUSH 0x5b569f                       ; 0040af50
    MOV dword ptr [0x01d71de0],EDX      ; 0040af55 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0040af5b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040af61
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 0040af66
    JMP 0x0040ad54                      ; 0040af69
        ;   XREF to: 0040ad54 (UNCONDITIONAL_JUMP)  ; LAB_0040ad54
    CMP EBX,0x1000                      ; 0040af6e
        ;   Label: LAB_0040af6e
    JL 0x0040ad60                       ; 0040af74
        ;   XREF to: 0040ad60 (CONDITIONAL_JUMP)  ; LAB_0040ad60
    JMP 0x0040ad8b                      ; 0040af7a
        ;   XREF to: 0040ad8b (UNCONDITIONAL_JUMP)  ; LAB_0040ad8b
    MOV EAX,dword ptr [EBP + -0x4]      ; 0040af7f
        ;   Label: LAB_0040af7f
    MOV AL,byte ptr [EAX]               ; 0040af82
    INC AL                              ; 0040af84
    AND EAX,0xff                        ; 0040af86
    TEST byte ptr [EAX + 0x6074b8],0x8  ; 0040af8b
    JNZ 0x0040af1f                      ; 0040af92
        ;   XREF to: 0040af1f (CONDITIONAL_JUMP)  ; LAB_0040af1f
    JMP 0x0040aea2                      ; 0040af94
        ;   XREF to: 0040aea2 (UNCONDITIONAL_JUMP)  ; LAB_0040aea2

