; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_file_c_makepath_FUN_005b9f4c(char *path_buffer,char *drive,char *directory,char *filename,char *extension)
;
; Parameters:
; char *           Stack[0x4]:4   path_buffer
; char *           Stack[0x8]:4   drive
; char *           Stack[0xc]:4   directory
; char *           Stack[0x10]:4   filename
; char *           Stack[0x14]:4   extension
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_mission.cpp_FUN_004fbc90 at 004fbcb1
;   engine_dosio.cpp_makePath_FUN_004610a0 at 004610bc
;
; Called Functions:
;   crt_unknown.c_FUN_005b9f30
;   crt_unknown.c_FUN_005c0dc0
;   crt_unknown.c_FUN_005c0e00
;   crt_unknown.c_FUN_005c0e30
;   crt_unknown.c_FUN_005c0e50
;   crt_unknown.c_FUN_005c0e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9f4c
        ;   Label: crt_file.c_makepath_FUN_005b9f4c
    PUSH ESI                            ; 005b9f4d
    PUSH EDI                            ; 005b9f4e
    PUSH EBP                            ; 005b9f4f
    SUB ESP,0x8                         ; 005b9f50
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005b9f53
    MOV EDX,dword ptr [ESP + 0x20]      ; 005b9f57
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005b9f5b
    XOR ECX,ECX                         ; 005b9f5f
    MOV dword ptr [ESP + 0x4],EBX       ; 005b9f61
    MOV dword ptr [ESP],ECX             ; 005b9f65
    TEST EDX,EDX                        ; 005b9f68
    JZ 0x005b9fba                       ; 005b9f6a
        ;   XREF to: 005b9fba (CONDITIONAL_JUMP)  ; LAB_005b9fba
    MOV AH,byte ptr [EDX]               ; 005b9f6c
    TEST AH,AH                          ; 005b9f6e
    JZ 0x005b9fba                       ; 005b9f70
        ;   XREF to: 005b9fba (CONDITIONAL_JUMP)  ; LAB_005b9fba
    CMP AH,0x5c                         ; 005b9f72
    JNZ 0x005b9fb0                      ; 005b9f75
        ;   XREF to: 005b9fb0 (CONDITIONAL_JUMP)  ; LAB_005b9fb0
    CMP AH,byte ptr [EDX + 0x1]         ; 005b9f77
    JNZ 0x005b9fb0                      ; 005b9f7a
        ;   XREF to: 005b9fb0 (CONDITIONAL_JUMP)  ; LAB_005b9fb0
    MOV ESI,EDX                         ; 005b9f7c
    MOV EDI,EBX                         ; 005b9f7e
    PUSH EDI                            ; 005b9f80
    MOV AL,byte ptr [ESI]               ; 005b9f81
        ;   Label: LAB_005b9f81
    MOV byte ptr [EDI],AL               ; 005b9f83
    CMP AL,0x0                          ; 005b9f85
    JZ 0x005b9f99                       ; 005b9f87
        ;   XREF to: 005b9f99 (CONDITIONAL_JUMP)  ; LAB_005b9f99
    MOV AL,byte ptr [ESI + 0x1]         ; 005b9f89
    ADD ESI,0x2                         ; 005b9f8c
    MOV byte ptr [EDI + 0x1],AL         ; 005b9f8f
    ADD EDI,0x2                         ; 005b9f92
    CMP AL,0x0                          ; 005b9f95
    JNZ 0x005b9f81                      ; 005b9f97
        ;   XREF to: 005b9f81 (CONDITIONAL_JUMP)  ; LAB_005b9f81
    POP EDI                             ; 005b9f99
        ;   Label: LAB_005b9f99
    MOV EDI,EDX                         ; 005b9f9a
    PUSH ES                             ; 005b9f9c
    MOV AX,DS                           ; 005b9f9d
    MOV ES,AX                           ; 005b9f9f
    SUB ECX,ECX                         ; 005b9fa1
    DEC ECX                             ; 005b9fa3
    XOR EAX,EAX                         ; 005b9fa4
    SCASB.REPNE ES:EDI                  ; 005b9fa6
    NOT ECX                             ; 005b9fa8
    DEC ECX                             ; 005b9faa
    POP ES                              ; 005b9fab
    ADD EBX,ECX                         ; 005b9fac
    JMP 0x005b9fba                      ; 005b9fae
        ;   XREF to: 005b9fba (UNCONDITIONAL_JUMP)  ; LAB_005b9fba
    INC EBX                             ; 005b9fb0
        ;   Label: LAB_005b9fb0
    MOV AL,byte ptr [EDX]               ; 005b9fb1
    MOV byte ptr [EBX + -0x1],AL        ; 005b9fb3
    MOV byte ptr [EBX],0x3a             ; 005b9fb6
    INC EBX                             ; 005b9fb9
    MOV ESI,dword ptr [ESP + 0x24]      ; 005b9fba
        ;   Label: LAB_005b9fba
    MOV byte ptr [EBX],0x0              ; 005b9fbe
    TEST ESI,ESI                        ; 005b9fc1
    JZ 0x005ba051                       ; 005b9fc3
        ;   XREF to: 005ba051 (CONDITIONAL_JUMP)  ; LAB_005ba051
    CMP byte ptr [ESI],0x0              ; 005b9fc9
    JZ 0x005ba051                       ; 005b9fcc
        ;   XREF to: 005ba051 (CONDITIONAL_JUMP)  ; LAB_005ba051
    MOV EAX,ESP                         ; 005b9fd2
        ;   Label: LAB_005b9fd2
    PUSH EAX                            ; 005b9fd4
    MOV EDI,dword ptr [ESP + 0x28]      ; 005b9fd5
    PUSH EDI                            ; 005b9fd9
    CALL crt_unknown.c_FUN_005c0dc0     ; 005b9fda
        ;   XREF to: 005c0dc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0dc0()
    ADD ESP,0x4                         ; 005b9fdf
    PUSH EAX                            ; 005b9fe2
    CALL crt_unknown.c_FUN_005b9f30     ; 005b9fe3
        ;   XREF to: 005b9f30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b9f30()
    ADD ESP,0x8                         ; 005b9fe8
    PUSH EBX                            ; 005b9feb
    PUSH EAX                            ; 005b9fec
    CALL crt_unknown.c_FUN_005c0e30     ; 005b9fed
        ;   XREF to: 005c0e30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e30()
    ADD ESP,0x8                         ; 005b9ff2
    PUSH EBX                            ; 005b9ff5
    CALL crt_unknown.c_FUN_005c0e50     ; 005b9ff6
        ;   XREF to: 005c0e50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e50()
    ADD ESP,0x4                         ; 005b9ffb
    PUSH EBX                            ; 005b9ffe
    MOV byte ptr [EBX + EAX*0x1],0x0    ; 005b9fff
    CALL crt_unknown.c_FUN_005c0e00     ; 005ba003
        ;   XREF to: 005c0e00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e00()
    ADD ESP,0x4                         ; 005ba008
    PUSH EDI                            ; 005ba00b
    MOV EBX,EAX                         ; 005ba00c
    CALL crt_unknown.c_FUN_005c0e00     ; 005ba00e
        ;   XREF to: 005c0e00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e00()
    ADD ESP,0x4                         ; 005ba013
    MOV DH,byte ptr [EAX]               ; 005ba016
    MOV dword ptr [ESP + 0x24],EAX      ; 005ba018
    TEST DH,DH                          ; 005ba01c
    JNZ 0x005b9fd2                      ; 005ba01e
        ;   XREF to: 005b9fd2 (CONDITIONAL_JUMP)  ; LAB_005b9fd2
    CMP dword ptr [ESP],0x0             ; 005ba020
    JNZ 0x005ba02d                      ; 005ba024
        ;   XREF to: 005ba02d (CONDITIONAL_JUMP)  ; LAB_005ba02d
    MOV dword ptr [ESP],0x5c            ; 005ba026
    PUSH EBX                            ; 005ba02d
        ;   Label: LAB_005ba02d
    MOV ESI,dword ptr [ESP + 0x8]       ; 005ba02e
    PUSH ESI                            ; 005ba032
    CALL crt_unknown.c_FUN_005c0e80     ; 005ba033
        ;   XREF to: 005c0e80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e80()
    ADD ESP,0x8                         ; 005ba038
    MOV AL,byte ptr [EAX]               ; 005ba03b
    MOV EDI,dword ptr [ESP]             ; 005ba03d
    AND EAX,0xff                        ; 005ba040
    CMP EAX,EDI                         ; 005ba045
    JNZ 0x005ba04c                      ; 005ba047
        ;   XREF to: 005ba04c (CONDITIONAL_JUMP)  ; LAB_005ba04c
    DEC EBX                             ; 005ba049
    JMP 0x005ba051                      ; 005ba04a
        ;   XREF to: 005ba051 (UNCONDITIONAL_JUMP)  ; LAB_005ba051
    MOV AL,byte ptr [ESP]               ; 005ba04c
        ;   Label: LAB_005ba04c
    MOV byte ptr [EBX],AL               ; 005ba04f
    CMP dword ptr [ESP],0x0             ; 005ba051
        ;   Label: LAB_005ba051
    JNZ 0x005ba05e                      ; 005ba055
        ;   XREF to: 005ba05e (CONDITIONAL_JUMP)  ; LAB_005ba05e
    MOV dword ptr [ESP],0x5c            ; 005ba057
    MOV ECX,dword ptr [ESP + 0x28]      ; 005ba05e
        ;   Label: LAB_005ba05e
    LEA ESI,[EBX + 0x1]                 ; 005ba062
    TEST ECX,ECX                        ; 005ba065
    JZ 0x005ba0e6                       ; 005ba067
        ;   XREF to: 005ba0e6 (CONDITIONAL_JUMP)  ; LAB_005ba0e6
    PUSH ECX                            ; 005ba06d
    CALL crt_unknown.c_FUN_005c0dc0     ; 005ba06e
        ;   XREF to: 005c0dc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0dc0()
    ADD ESP,0x4                         ; 005ba073
    MOV EDX,ESP                         ; 005ba076
    PUSH EDX                            ; 005ba078
    PUSH EAX                            ; 005ba079
    CALL crt_unknown.c_FUN_005b9f30     ; 005ba07a
        ;   XREF to: 005b9f30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b9f30()
    ADD ESP,0x8                         ; 005ba07f
    MOV EDX,dword ptr [ESP]             ; 005ba082
    CMP EAX,EDX                         ; 005ba085
    JZ 0x005ba093                       ; 005ba087
        ;   XREF to: 005ba093 (CONDITIONAL_JUMP)  ; LAB_005ba093
    XOR EAX,EAX                         ; 005ba089
    MOV AL,byte ptr [EBX]               ; 005ba08b
    CMP EAX,EDX                         ; 005ba08d
    JNZ 0x005ba093                      ; 005ba08f
        ;   XREF to: 005ba093 (CONDITIONAL_JUMP)  ; LAB_005ba093
    MOV EBX,ESI                         ; 005ba091
    MOV EAX,dword ptr [ESP + 0x28]      ; 005ba093
        ;   Label: LAB_005ba093
    CMP byte ptr [EAX],0x0              ; 005ba097
    JZ 0x005ba0f3                       ; 005ba09a
        ;   XREF to: 005ba0f3 (CONDITIONAL_JUMP)  ; LAB_005ba0f3
    MOV EAX,ESP                         ; 005ba09c
    PUSH EAX                            ; 005ba09e
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005ba09f
    PUSH ESI                            ; 005ba0a3
    CALL crt_unknown.c_FUN_005c0dc0     ; 005ba0a4
        ;   XREF to: 005c0dc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0dc0()
    ADD ESP,0x4                         ; 005ba0a9
    PUSH EAX                            ; 005ba0ac
    CALL crt_unknown.c_FUN_005b9f30     ; 005ba0ad
        ;   XREF to: 005b9f30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b9f30()
    ADD ESP,0x8                         ; 005ba0b2
    PUSH EBX                            ; 005ba0b5
    PUSH EAX                            ; 005ba0b6
    CALL crt_unknown.c_FUN_005c0e30     ; 005ba0b7
        ;   XREF to: 005c0e30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e30()
    ADD ESP,0x8                         ; 005ba0bc
    PUSH EBX                            ; 005ba0bf
    CALL crt_unknown.c_FUN_005c0e50     ; 005ba0c0
        ;   XREF to: 005c0e50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e50()
    ADD ESP,0x4                         ; 005ba0c5
    PUSH EBX                            ; 005ba0c8
    MOV byte ptr [EBX + EAX*0x1],0x0    ; 005ba0c9
    CALL crt_unknown.c_FUN_005c0e00     ; 005ba0cd
        ;   XREF to: 005c0e00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e00()
    ADD ESP,0x4                         ; 005ba0d2
    PUSH ESI                            ; 005ba0d5
    MOV EBX,EAX                         ; 005ba0d6
    CALL crt_unknown.c_FUN_005c0e00     ; 005ba0d8
        ;   XREF to: 005c0e00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e00()
    ADD ESP,0x4                         ; 005ba0dd
    MOV dword ptr [ESP + 0x28],EAX      ; 005ba0e0
    JMP 0x005ba093                      ; 005ba0e4
        ;   XREF to: 005ba093 (UNCONDITIONAL_JUMP)  ; LAB_005ba093
    XOR EAX,EAX                         ; 005ba0e6
        ;   Label: LAB_005ba0e6
    MOV EDI,dword ptr [ESP]             ; 005ba0e8
    MOV AL,byte ptr [EBX]               ; 005ba0eb
    CMP EAX,EDI                         ; 005ba0ed
    JNZ 0x005ba0f3                      ; 005ba0ef
        ;   XREF to: 005ba0f3 (CONDITIONAL_JUMP)  ; LAB_005ba0f3
    MOV EBX,ESI                         ; 005ba0f1
    TEST EBP,EBP                        ; 005ba0f3
        ;   Label: LAB_005ba0f3
    JZ 0x005ba115                       ; 005ba0f5
        ;   XREF to: 005ba115 (CONDITIONAL_JUMP)  ; LAB_005ba115
    MOV CH,byte ptr [EBP]               ; 005ba0f7
    TEST CH,CH                          ; 005ba0fa
    JZ 0x005ba115                       ; 005ba0fc
        ;   XREF to: 005ba115 (CONDITIONAL_JUMP)  ; LAB_005ba115
    CMP CH,0x2e                         ; 005ba0fe
    JZ 0x005ba107                       ; 005ba101
        ;   XREF to: 005ba107 (CONDITIONAL_JUMP)  ; LAB_005ba107
    MOV byte ptr [EBX],0x2e             ; 005ba103
    INC EBX                             ; 005ba106
    MOV AH,byte ptr [EBP]               ; 005ba107
        ;   Label: LAB_005ba107
    TEST AH,AH                          ; 005ba10a
    JZ 0x005ba115                       ; 005ba10c
        ;   XREF to: 005ba115 (CONDITIONAL_JUMP)  ; LAB_005ba115
    INC EBX                             ; 005ba10e
    INC EBP                             ; 005ba10f
    MOV byte ptr [EBX + -0x1],AH        ; 005ba110
    JMP 0x005ba107                      ; 005ba113
        ;   XREF to: 005ba107 (UNCONDITIONAL_JUMP)  ; LAB_005ba107
    MOV byte ptr [EBX],0x0              ; 005ba115
        ;   Label: LAB_005ba115
    ADD ESP,0x8                         ; 005ba118
    POP EBP                             ; 005ba11b
    POP EDI                             ; 005ba11c
    POP ESI                             ; 005ba11d
    POP EBX                             ; 005ba11e
    RET                                 ; 005ba11f

