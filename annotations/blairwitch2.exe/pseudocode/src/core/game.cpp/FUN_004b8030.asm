; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004b8030(int param_1,int param_2)
;
;
; Referenced Globals:
;   CScript* g_CScriptPtr = 01e65cd0
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;
; Called Functions:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0
;   core_setdir.cpp_FUN_00538d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8030
        ;   Label: core_game.cpp_FUN_004b8030
    PUSH ESI                            ; 004b8031
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b8032
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b8036
    CMP EDX,dword ptr [EAX + 0x260]     ; 004b803a
    JZ 0x004b804c                       ; 004b8040
        ;   XREF to: 004b804c (CONDITIONAL_JUMP)  ; LAB_004b804c
    MOV dword ptr [EAX + 0x260],EDX     ; 004b8042
    TEST EDX,EDX                        ; 004b8048
    JZ 0x004b804f                       ; 004b804a
        ;   XREF to: 004b804f (CONDITIONAL_JUMP)  ; LAB_004b804f
    POP ESI                             ; 004b804c
        ;   Label: LAB_004b804c
    POP EBX                             ; 004b804d
    RET                                 ; 004b804e
    MOV EDX,dword ptr [0x0061b460]      ; 004b804f | g_CScriptPtr
        ;   Label: LAB_004b804f
    PUSH 0x1                            ; 004b8055
    MOV ESI,dword ptr [EDX + 0xc]       ; 004b8057
    PUSH ESI                            ; 004b805a
    MOV EAX,[0x0061b5a8]                ; 004b805b | g_CDemonSetPtr
    PUSH EAX                            ; 004b8060
    MOV EBX,dword ptr [EAX + 0x15aeb8]  ; 004b8061
    CALL core_setdir.cpp_FUN_00538d10   ; 004b8067
        ;   XREF to: 00538d10 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_00538d10()
    MOV EAX,[0x0061b460]                ; 004b806c | g_CScriptPtr
    MOV dword ptr [EAX + 0x10],0x0      ; 004b8071
    MOV EAX,[0x0061b5a8]                ; 004b8078 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 004b807d
    ADD ESP,0xc                         ; 004b8083
    CMP EBX,EDX                         ; 004b8086
    JNZ 0x004b804c                      ; 004b8088
        ;   XREF to: 004b804c (CONDITIONAL_JUMP)  ; LAB_004b804c
    PUSH EDX                            ; 004b808a
    PUSH EAX                            ; 004b808b
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 ; 004b808c
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 004b8091
    POP ESI                             ; 004b8094
    POP EBX                             ; 004b8095
    RET                                 ; 004b8096

