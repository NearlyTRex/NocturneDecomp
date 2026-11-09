; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_0040adf0(char *param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005ca89a
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040adf0
        ;   Label: core_actor.cpp_FUN_0040adf0
    PUSH ESI                            ; 0040adf1
    PUSH EDI                            ; 0040adf2
    PUSH EBP                            ; 0040adf3
    MOV EBP,ESP                         ; 0040adf4
    SUB ESP,0x8                         ; 0040adf6
    MOV EBX,dword ptr [EBP + 0x14]      ; 0040adf9
    TEST EBX,EBX                        ; 0040adfc
    JZ 0x0040afee                       ; 0040adfe
        ;   XREF to: 0040afee (CONDITIONAL_JUMP)  ; LAB_0040afee
    CMP EBX,0xff000000                  ; 0040ae04
        ;   Label: LAB_0040ae04
    JC 0x0040b01e                       ; 0040ae0a
        ;   XREF to: 0040b01e (CONDITIONAL_JUMP)  ; LAB_0040b01e
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0040ae10
        ;   Label: LAB_0040ae10
    PUSH ECX                            ; 0040ae13
    MOV ESI,dword ptr [EBP + 0x18]      ; 0040ae14
    PUSH ESI                            ; 0040ae17
    PUSH EBX                            ; 0040ae18
    MOV EAX,0x5ca718                    ; 0040ae19
    MOV EDX,0x780                       ; 0040ae1e
    PUSH 0x5ca72a                       ; 0040ae23
    MOV [0x01d046a0],EAX                ; 0040ae28 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0040ae2d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0040ae33
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x10                        ; 0040ae38
    MOV EDI,dword ptr [EBX + 0x68]      ; 0040ae3b
        ;   Label: LAB_0040ae3b
    CMP EDI,0x78a123                    ; 0040ae3e
    JZ 0x0040aea0                       ; 0040ae44
        ;   XREF to: 0040aea0 (CONDITIONAL_JUMP)  ; LAB_0040aea0
    PUSH EDI                            ; 0040ae46
    PUSH 0x32                           ; 0040ae47
    MOV EAX,0x5ca75d                    ; 0040ae49
    PUSH 0x0                            ; 0040ae4e
    MOV EDX,0x78a                       ; 0040ae50
    MOV ESI,EBX                         ; 0040ae55
    PUSH 0x7bbfc0                       ; 0040ae57
    MOV [0x01d046a0],EAX                ; 0040ae5c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0040ae61 | DAT_01d046a4
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0040ae67
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040ae6c
    MOV EDI,0x7bbfc0                    ; 0040ae6f
    MOV ECX,0x31                        ; 0040ae74
    PUSH EDI                            ; 0040ae79
    MOV EAX,ECX                         ; 0040ae7a
    SHR ECX,0x2                         ; 0040ae7c
    MOVSD.REP ES:EDI,ESI                ; 0040ae7f
    MOV CL,AL                           ; 0040ae81
    AND CL,0x3                          ; 0040ae83
    MOVSB.REP ES:EDI,ESI                ; 0040ae86
    POP EDI                             ; 0040ae88
    PUSH EDI                            ; 0040ae89
    PUSH EBX                            ; 0040ae8a
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0040ae8b
    PUSH ESI                            ; 0040ae8e
    MOV EDI,dword ptr [EBP + 0x18]      ; 0040ae8f
    PUSH EDI                            ; 0040ae92
    PUSH 0x5ca76f                       ; 0040ae93
    CALL core_main.c_FUN_004e4500       ; 0040ae98
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x18                        ; 0040ae9d
    LEA EAX,[EBX + 0x20]                ; 0040aea0
        ;   Label: LAB_0040aea0
    FLD float ptr [EAX + 0x4]           ; 0040aea3
    FMUL ST0                            ; 0040aea6
    FLD float ptr [EAX]                 ; 0040aea8
    FMUL ST0                            ; 0040aeaa
    FADDP                               ; 0040aeac
    FLD float ptr [EAX + 0x8]           ; 0040aeae
    FMUL ST0                            ; 0040aeb1
    FADDP                               ; 0040aeb3
    FSQRT                               ; 0040aeb5
    FCOMP float ptr [0x005ca89a]        ; 0040aeb7 | DAT_005ca89a
    FNSTSW AX                           ; 0040aebd
    SAHF                                ; 0040aebf
    JBE 0x0040af36                      ; 0040aec0
        ;   XREF to: 0040af36 (CONDITIONAL_JUMP)  ; LAB_0040af36
    SUB ESP,0x8                         ; 0040aec2
    FLD float ptr [EBX + 0x28]          ; 0040aec5
    FSTP double ptr [ESP]               ; 0040aec8
    SUB ESP,0x8                         ; 0040aecb
    FLD float ptr [EBX + 0x24]          ; 0040aece
    FSTP double ptr [ESP]               ; 0040aed1
    SUB ESP,0x8                         ; 0040aed4
    FLD float ptr [EBX + 0x20]          ; 0040aed7
    FSTP double ptr [ESP]               ; 0040aeda
    PUSH 0x32                           ; 0040aedd
    MOV EAX,0x5ca7cd                    ; 0040aedf
    PUSH 0x0                            ; 0040aee4
    MOV EDX,0x795                       ; 0040aee6
    MOV EDI,0x7bbfc0                    ; 0040aeeb
    PUSH 0x7bbfc0                       ; 0040aef0
    MOV [0x01d046a0],EAX                ; 0040aef5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0040aefa | DAT_01d046a4
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0040af00
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040af05
    MOV ESI,EBX                         ; 0040af08
    MOV ECX,0x31                        ; 0040af0a
    PUSH EDI                            ; 0040af0f
    MOV EAX,ECX                         ; 0040af10
    SHR ECX,0x2                         ; 0040af12
    MOVSD.REP ES:EDI,ESI                ; 0040af15
    MOV CL,AL                           ; 0040af17
    AND CL,0x3                          ; 0040af19
    MOVSB.REP ES:EDI,ESI                ; 0040af1c
    POP EDI                             ; 0040af1e
    PUSH EDI                            ; 0040af1f
    PUSH EBX                            ; 0040af20
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0040af21
    PUSH ECX                            ; 0040af24
    MOV ESI,dword ptr [EBP + 0x18]      ; 0040af25
    PUSH ESI                            ; 0040af28
    PUSH 0x5ca7df                       ; 0040af29
    CALL core_main.c_FUN_004e4500       ; 0040af2e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x2c                        ; 0040af33
    MOV dword ptr [EBP + -0x4],EBX      ; 0040af36
        ;   Label: LAB_0040af36
    XOR EDI,EDI                         ; 0040af39
    MOV AH,byte ptr [EBX]               ; 0040af3b
    MOV dword ptr [EBP + -0x8],EDI      ; 0040af3d
    TEST AH,AH                          ; 0040af40
    JZ 0x0040afe7                       ; 0040af42
        ;   XREF to: 0040afe7 (CONDITIONAL_JUMP)  ; LAB_0040afe7
    CMP dword ptr [EBP + -0x8],0x1d     ; 0040af48
        ;   Label: LAB_0040af48
    JC 0x0040b02f                       ; 0040af4c
        ;   XREF to: 0040b02f (CONDITIONAL_JUMP)  ; LAB_0040b02f
    SUB ESP,0x8                         ; 0040af52
        ;   Label: LAB_0040af52
    FLD float ptr [EBX + 0x28]          ; 0040af55
    FSTP double ptr [ESP]               ; 0040af58
    SUB ESP,0x8                         ; 0040af5b
    FLD float ptr [EBX + 0x24]          ; 0040af5e
    FSTP double ptr [ESP]               ; 0040af61
    SUB ESP,0x8                         ; 0040af64
    FLD float ptr [EBX + 0x20]          ; 0040af67
    FSTP double ptr [ESP]               ; 0040af6a
    PUSH 0x32                           ; 0040af6d
    PUSH 0x0                            ; 0040af6f
    MOV ESI,0x5ca83a                    ; 0040af71
    MOV EDI,0x7a3                       ; 0040af76
    PUSH 0x7bbfc0                       ; 0040af7b
    MOV dword ptr [0x01d046a0],ESI      ; 0040af80 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0040af86 | DAT_01d046a4
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0040af8c
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040af91
    TEST EBX,EBX                        ; 0040af94
    JZ 0x0040afb4                       ; 0040af96
        ;   XREF to: 0040afb4 (CONDITIONAL_JUMP)  ; LAB_0040afb4
    MOV ECX,0x31                        ; 0040af98
    MOV EDI,0x7bbfc0                    ; 0040af9d
    MOV ESI,EBX                         ; 0040afa2
    PUSH EDI                            ; 0040afa4
    MOV EAX,ECX                         ; 0040afa5
    SHR ECX,0x2                         ; 0040afa7
    MOVSD.REP ES:EDI,ESI                ; 0040afaa
    MOV CL,AL                           ; 0040afac
    AND CL,0x3                          ; 0040afae
    MOVSB.REP ES:EDI,ESI                ; 0040afb1
    POP EDI                             ; 0040afb3
    PUSH 0x7bbfc0                       ; 0040afb4
        ;   Label: LAB_0040afb4
    PUSH EBX                            ; 0040afb9
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0040afba
    PUSH EAX                            ; 0040afbd
    MOV EDX,dword ptr [EBP + 0x18]      ; 0040afbe
    PUSH EDX                            ; 0040afc1
    PUSH 0x5ca84c                       ; 0040afc2
    CALL core_main.c_FUN_004e4500       ; 0040afc7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x2c                        ; 0040afcc
    MOV EDX,dword ptr [EBP + -0x8]      ; 0040afcf
        ;   Label: LAB_0040afcf
    MOV EAX,dword ptr [EBP + -0x4]      ; 0040afd2
    INC EDX                             ; 0040afd5
    INC EAX                             ; 0040afd6
    MOV dword ptr [EBP + -0x8],EDX      ; 0040afd7
    MOV DL,byte ptr [EAX]               ; 0040afda
    MOV dword ptr [EBP + -0x4],EAX      ; 0040afdc
    TEST DL,DL                          ; 0040afdf
    JNZ 0x0040af48                      ; 0040afe1
        ;   XREF to: 0040af48 (CONDITIONAL_JUMP)  ; LAB_0040af48
    MOV ESP,EBP                         ; 0040afe7
        ;   Label: LAB_0040afe7
    POP EBP                             ; 0040afe9
    POP EDI                             ; 0040afea
    POP ESI                             ; 0040afeb
    POP EBX                             ; 0040afec
    RET                                 ; 0040afed
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0040afee
        ;   Label: LAB_0040afee
    PUSH ESI                            ; 0040aff1
    MOV EDI,dword ptr [EBP + 0x18]      ; 0040aff2
    PUSH EDI                            ; 0040aff5
    MOV EDX,0x5ca6de                    ; 0040aff6
    MOV ECX,0x77c                       ; 0040affb
    PUSH 0x5ca6f0                       ; 0040b000
    MOV dword ptr [0x01d046a0],EDX      ; 0040b005 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0040b00b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0040b011
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 0040b016
    JMP 0x0040ae04                      ; 0040b019
        ;   XREF to: 0040ae04 (UNCONDITIONAL_JUMP)  ; LAB_0040ae04
    CMP EBX,0x1000                      ; 0040b01e
        ;   Label: LAB_0040b01e
    JL 0x0040ae10                       ; 0040b024
        ;   XREF to: 0040ae10 (CONDITIONAL_JUMP)  ; LAB_0040ae10
    JMP 0x0040ae3b                      ; 0040b02a
        ;   XREF to: 0040ae3b (UNCONDITIONAL_JUMP)  ; LAB_0040ae3b
    MOV EAX,dword ptr [EBP + -0x4]      ; 0040b02f
        ;   Label: LAB_0040b02f
    MOV AL,byte ptr [EAX]               ; 0040b032
    INC AL                              ; 0040b034
    AND EAX,0xff                        ; 0040b036
    TEST byte ptr [EAX + 0x61ed94],0x8  ; 0040b03b
    JNZ 0x0040afcf                      ; 0040b042
        ;   XREF to: 0040afcf (CONDITIONAL_JUMP)  ; LAB_0040afcf
    JMP 0x0040af52                      ; 0040b044
        ;   XREF to: 0040af52 (UNCONDITIONAL_JUMP)  ; LAB_0040af52

