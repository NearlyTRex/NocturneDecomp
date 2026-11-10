; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_string_c_splitpath_FUN_005b9e58(char *path,char *drive,char *dir,char *fname,char *ext)
;
; Parameters:
; char *           Stack[0x4]:4   path
; char *           Stack[0x8]:4   drive
; char *           Stack[0xc]:4   dir
; char *           Stack[0x10]:4   fname
; char *           Stack[0x14]:4   ext
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[9]:
;   core_game.cpp_CGame_promptLoadGame_FUN_004bdb10 at 004bdb44
;   core_game.cpp_FUN_004bb9b0 at 004bb9f5
;   core_game.cpp_FUN_004bbf70 at 004bbfab
;   core_game.cpp_FUN_004bcbf0 at 004bcc7b
;   core_script.cpp_CScript_dbLoad_FUN_00529c10 at 00529d95
;   core_script.cpp_CScript_findDialogEntry_FUN_00529f90 at 00529fb6
;   core_script.cpp_CScript_initRuntime_FUN_00522080 at 0052212a
;   core_script.cpp_FUN_00521cf0 at 00521d4b
;   engine_dosio.cpp_splitPath_FUN_00461070 at 0046108c
;
; Called Functions:
;   crt_unknown.c_FUN_005b9e10
;   crt_unknown.c_FUN_005c0dc0
;   crt_unknown.c_FUN_005c0e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9e58
        ;   Label: crt_string.c_splitpath_FUN_005b9e58
    PUSH ESI                            ; 005b9e59
    PUSH EDI                            ; 005b9e5a
    PUSH EBP                            ; 005b9e5b
    SUB ESP,0x4                         ; 005b9e5c
    MOV EBX,dword ptr [ESP + 0x18]      ; 005b9e5f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005b9e63
    MOV AH,byte ptr [EBX]               ; 005b9e67
    TEST AH,AH                          ; 005b9e69
    JZ 0x005b9e87                       ; 005b9e6b
        ;   XREF to: 005b9e87 (CONDITIONAL_JUMP)  ; LAB_005b9e87
    MOV DL,byte ptr [EBX + 0x1]         ; 005b9e6d
    CMP DL,0x3a                         ; 005b9e70
    JNZ 0x005b9e87                      ; 005b9e73
        ;   XREF to: 005b9e87 (CONDITIONAL_JUMP)  ; LAB_005b9e87
    TEST ESI,ESI                        ; 005b9e75
    JZ 0x005b9e82                       ; 005b9e77
        ;   XREF to: 005b9e82 (CONDITIONAL_JUMP)  ; LAB_005b9e82
    MOV byte ptr [ESI + 0x2],0x0        ; 005b9e79
    MOV byte ptr [ESI],AH               ; 005b9e7d
    MOV byte ptr [ESI + 0x1],DL         ; 005b9e7f
    ADD EBX,0x2                         ; 005b9e82
        ;   Label: LAB_005b9e82
    JMP 0x005b9e8e                      ; 005b9e85
        ;   XREF to: 005b9e8e (UNCONDITIONAL_JUMP)  ; LAB_005b9e8e
    TEST ESI,ESI                        ; 005b9e87
        ;   Label: LAB_005b9e87
    JZ 0x005b9e8e                       ; 005b9e89
        ;   XREF to: 005b9e8e (CONDITIONAL_JUMP)  ; LAB_005b9e8e
    MOV byte ptr [ESI],0x0              ; 005b9e8b
    MOV EBP,EBX                         ; 005b9e8e
        ;   Label: LAB_005b9e8e
    MOV dword ptr [ESP],EBX             ; 005b9e90
    MOV DH,byte ptr [EBX]               ; 005b9e93
    XOR EDI,EDI                         ; 005b9e95
    TEST DH,DH                          ; 005b9e97
    JZ 0x005b9ece                       ; 005b9e99
        ;   XREF to: 005b9ece (CONDITIONAL_JUMP)  ; LAB_005b9ece
    PUSH EBX                            ; 005b9e9b
        ;   Label: LAB_005b9e9b
    CALL crt_unknown.c_FUN_005c0dc0     ; 005b9e9c
        ;   XREF to: 005c0dc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0dc0()
    MOV ESI,EAX                         ; 005b9ea1
    ADD ESP,0x4                         ; 005b9ea3
    CMP EAX,0x2e                        ; 005b9ea6
    JNZ 0x005b9eb0                      ; 005b9ea9
        ;   XREF to: 005b9eb0 (CONDITIONAL_JUMP)  ; LAB_005b9eb0
    MOV EDI,EBX                         ; 005b9eab
    INC EBX                             ; 005b9ead
    JMP 0x005b9ec9                      ; 005b9eae
        ;   XREF to: 005b9ec9 (UNCONDITIONAL_JUMP)  ; LAB_005b9ec9
    PUSH EBX                            ; 005b9eb0
        ;   Label: LAB_005b9eb0
    CALL crt_unknown.c_FUN_005c0e00     ; 005b9eb1
        ;   XREF to: 005c0e00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e00()
    MOV EBX,EAX                         ; 005b9eb6
    ADD ESP,0x4                         ; 005b9eb8
    CMP ESI,0x5c                        ; 005b9ebb
    JZ 0x005b9ec5                       ; 005b9ebe
        ;   XREF to: 005b9ec5 (CONDITIONAL_JUMP)  ; LAB_005b9ec5
    CMP ESI,0x2f                        ; 005b9ec0
    JNZ 0x005b9ec9                      ; 005b9ec3
        ;   XREF to: 005b9ec9 (CONDITIONAL_JUMP)  ; LAB_005b9ec9
    MOV EBP,EBX                         ; 005b9ec5
        ;   Label: LAB_005b9ec5
    XOR EDI,EDI                         ; 005b9ec7
    CMP byte ptr [EBX],0x0              ; 005b9ec9
        ;   Label: LAB_005b9ec9
    JNZ 0x005b9e9b                      ; 005b9ecc
        ;   XREF to: 005b9e9b (CONDITIONAL_JUMP)  ; LAB_005b9e9b
    MOV EDX,dword ptr [ESP]             ; 005b9ece
        ;   Label: LAB_005b9ece
    MOV ESI,EBP                         ; 005b9ed1
    PUSH 0xff                           ; 005b9ed3
    SUB ESI,EDX                         ; 005b9ed8
    PUSH ESI                            ; 005b9eda
    PUSH EDX                            ; 005b9edb
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005b9edc
    PUSH ESI                            ; 005b9ee0
    CALL crt_unknown.c_FUN_005b9e10     ; 005b9ee1
        ;   XREF to: 005b9e10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b9e10()
    ADD ESP,0x10                        ; 005b9ee6
    TEST EDI,EDI                        ; 005b9ee9
    JNZ 0x005b9eef                      ; 005b9eeb
        ;   XREF to: 005b9eef (CONDITIONAL_JUMP)  ; LAB_005b9eef
    MOV EDI,EBX                         ; 005b9eed
    MOV ESI,EDI                         ; 005b9eef
        ;   Label: LAB_005b9eef
    PUSH 0xff                           ; 005b9ef1
    SUB ESI,EBP                         ; 005b9ef6
    PUSH ESI                            ; 005b9ef8
    PUSH EBP                            ; 005b9ef9
    MOV EBP,dword ptr [ESP + 0x30]      ; 005b9efa
    PUSH EBP                            ; 005b9efe
    CALL crt_unknown.c_FUN_005b9e10     ; 005b9eff
        ;   XREF to: 005b9e10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b9e10()
    ADD ESP,0x10                        ; 005b9f04
    PUSH 0xff                           ; 005b9f07
    SUB EBX,EDI                         ; 005b9f0c
    PUSH EBX                            ; 005b9f0e
    PUSH EDI                            ; 005b9f0f
    MOV EAX,dword ptr [ESP + 0x34]      ; 005b9f10
    PUSH EAX                            ; 005b9f14
    CALL crt_unknown.c_FUN_005b9e10     ; 005b9f15
        ;   XREF to: 005b9e10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b9e10()
    ADD ESP,0x10                        ; 005b9f1a
    ADD ESP,0x4                         ; 005b9f1d
    POP EBP                             ; 005b9f20
    POP EDI                             ; 005b9f21
    POP ESI                             ; 005b9f22
    POP EBX                             ; 005b9f23
    RET                                 ; 005b9f24

