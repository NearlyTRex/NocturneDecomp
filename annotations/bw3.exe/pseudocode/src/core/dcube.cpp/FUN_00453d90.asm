; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00453d90(int *param_1)
;
;
; XREF[1]:
;   FUN_00453fa0 at 00454063
;
; Referenced Globals:
;   TerminatedCString s_core_dcube_cpp_005ba1b6
;   TerminatedCString s_CDemonCube_allocMemory_O_005ba1c8
;   TerminatedCString s_core_dcube_cpp_005ba1f7
;   TerminatedCString s_CDemonCube_allocMemory_O_005ba209
;   TerminatedCString s_core_dcube_cpp_005ba235
;   TerminatedCString s_CDemonCube_allocMemory_O_005ba247
;   TerminatedCString s_core_dcube_cpp_005ba27b
;   TerminatedCString s_CDemonCube_allocMemory_O_005ba28d
;   TerminatedCString s_core_dcube_cpp_005ba2bb
;   TerminatedCString s_CDemonCube_allocMemory_O_005ba2cd
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_005a3650
;   FUN_005a40df
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453d90
        ;   Label: FUN_00453d90
    PUSH ESI                            ; 00453d91
    PUSH EBP                            ; 00453d92
    MOV EBX,dword ptr [ESP + 0x10]      ; 00453d93
    MOV EDX,dword ptr [EBX + 0x20]      ; 00453d97
    LEA EAX,[EDX*0x4 + 0x0]             ; 00453d9a
    SUB EAX,EDX                         ; 00453da1
    SHL EAX,0x2                         ; 00453da3
    PUSH EAX                            ; 00453da6
    CALL FUN_005a40df                   ; 00453da7
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined FUN_005a40df()
    ADD ESP,0x4                         ; 00453dac
    MOV dword ptr [EBX + 0x24],EAX      ; 00453daf
    TEST EAX,EAX                        ; 00453db2
    JZ 0x00453e71                       ; 00453db4
        ;   XREF to: 00453e71 (CONDITIONAL_JUMP)  ; LAB_00453e71
    MOV EAX,dword ptr [EBX + 0x28]      ; 00453dba
        ;   Label: LAB_00453dba
    SHL EAX,0x5                         ; 00453dbd
    PUSH EAX                            ; 00453dc0
    CALL FUN_005a40df                   ; 00453dc1
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined FUN_005a40df()
    ADD ESP,0x4                         ; 00453dc6
    MOV dword ptr [EBX + 0x2c],EAX      ; 00453dc9
    TEST EAX,EAX                        ; 00453dcc
    JNZ 0x00453df2                      ; 00453dce
        ;   XREF to: 00453df2 (CONDITIONAL_JUMP)  ; LAB_00453df2
    MOV EBP,0x5ba1f7                    ; 00453dd0 | = "..\\core\\dcube.cpp"
    MOV EAX,0x602                       ; 00453dd5
    PUSH 0x5ba209                       ; 00453dda | = "CDemonCube::allocMemory - Out of tri ..."
    MOV dword ptr [0x01d71de0],EBP      ; 00453ddf | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00453de5 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00453dea
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00453def
    MOV EDX,dword ptr [EBX + 0x28]      ; 00453df2
        ;   Label: LAB_00453df2
    PUSH EDX                            ; 00453df5
    CALL FUN_005a3650                   ; 00453df6
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3650()
    ADD ESP,0x4                         ; 00453dfb
    MOV dword ptr [EBX + 0x30],EAX      ; 00453dfe
    TEST EAX,EAX                        ; 00453e01
    JNZ 0x00453e2a                      ; 00453e03
        ;   XREF to: 00453e2a (CONDITIONAL_JUMP)  ; LAB_00453e2a
    PUSH EDI                            ; 00453e05
    MOV ESI,0x5ba235                    ; 00453e06 | = "..\\core\\dcube.cpp"
    MOV EDI,0x604                       ; 00453e0b
    PUSH 0x5ba247                       ; 00453e10 | = "CDemonCube::allocMemory - Out of grou..."
    MOV dword ptr [0x01d71de0],ESI      ; 00453e15 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00453e1b | DAT_01d71de4
    CALL FUN_004e4330                   ; 00453e21
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00453e26
    POP EDI                             ; 00453e29
    PUSH 0x40                           ; 00453e2a
        ;   Label: LAB_00453e2a
    CALL FUN_005a3650                   ; 00453e2c
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3650()
    ADD ESP,0x4                         ; 00453e31
    MOV dword ptr [EBX],EAX             ; 00453e34
    TEST EAX,EAX                        ; 00453e36
    JNZ 0x00453e5c                      ; 00453e38
        ;   XREF to: 00453e5c (CONDITIONAL_JUMP)  ; LAB_00453e5c
    MOV EAX,0x5ba27b                    ; 00453e3a | = "..\\core\\dcube.cpp"
    MOV EDX,0x606                       ; 00453e3f
    PUSH 0x5ba28d                       ; 00453e44 | = "CDemonCube::allocMemory - Out of voxe..."
    MOV [0x01d71de0],EAX                ; 00453e49 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00453e4e | DAT_01d71de4
    CALL FUN_004e4330                   ; 00453e54
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00453e59
    PUSH 0x40                           ; 00453e5c
        ;   Label: LAB_00453e5c
    CALL FUN_005a3650                   ; 00453e5e
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3650()
    ADD ESP,0x4                         ; 00453e63
    MOV dword ptr [EBX + 0x4],EAX       ; 00453e66
    TEST EAX,EAX                        ; 00453e69
    JZ 0x00453e99                       ; 00453e6b
        ;   XREF to: 00453e99 (CONDITIONAL_JUMP)  ; LAB_00453e99
    POP EBP                             ; 00453e6d
    POP ESI                             ; 00453e6e
    POP EBX                             ; 00453e6f
    RET                                 ; 00453e70
    MOV ECX,0x5ba1b6                    ; 00453e71 | = "..\\core\\dcube.cpp"
        ;   Label: LAB_00453e71
    MOV ESI,0x600                       ; 00453e76
    PUSH 0x5ba1c8                       ; 00453e7b | = "CDemonCube::allocMemory - Out of vert..."
    MOV dword ptr [0x01d71de0],ECX      ; 00453e80 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00453e86 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00453e8c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00453e91
    JMP 0x00453dba                      ; 00453e94
        ;   XREF to: 00453dba (UNCONDITIONAL_JUMP)  ; LAB_00453dba
    MOV EBX,0x5ba2bb                    ; 00453e99 | = "..\\core\\dcube.cpp"
        ;   Label: LAB_00453e99
    MOV ESI,0x608                       ; 00453e9e
    PUSH 0x5ba2cd                       ; 00453ea3 | = "CDemonCube::allocMemory - Out of voxe..."
    MOV dword ptr [0x01d71de0],EBX      ; 00453ea8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00453eae | DAT_01d71de4
    CALL FUN_004e4330                   ; 00453eb4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00453eb9
    POP EBP                             ; 00453ebc
    POP ESI                             ; 00453ebd
    POP EBX                             ; 00453ebe
    RET                                 ; 00453ebf

