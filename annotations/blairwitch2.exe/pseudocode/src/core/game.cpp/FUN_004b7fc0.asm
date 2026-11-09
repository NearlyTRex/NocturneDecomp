; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004b7fc0(int param_1,int param_2)
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

    PUSH EBX                            ; 004b7fc0
        ;   Label: core_game.cpp_FUN_004b7fc0
    PUSH ESI                            ; 004b7fc1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b7fc2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b7fc6
    CMP EDX,dword ptr [EAX + 0x25c]     ; 004b7fca
    JZ 0x004b7fdc                       ; 004b7fd0
        ;   XREF to: 004b7fdc (CONDITIONAL_JUMP)  ; LAB_004b7fdc
    MOV dword ptr [EAX + 0x25c],EDX     ; 004b7fd2
    TEST EDX,EDX                        ; 004b7fd8
    JZ 0x004b7fdf                       ; 004b7fda
        ;   XREF to: 004b7fdf (CONDITIONAL_JUMP)  ; LAB_004b7fdf
    POP ESI                             ; 004b7fdc
        ;   Label: LAB_004b7fdc
    POP EBX                             ; 004b7fdd
    RET                                 ; 004b7fde
    MOV EDX,dword ptr [0x0061b460]      ; 004b7fdf | g_CScriptPtr
        ;   Label: LAB_004b7fdf
    PUSH 0x1                            ; 004b7fe5
    MOV ESI,dword ptr [EDX + 0xc]       ; 004b7fe7
    PUSH ESI                            ; 004b7fea
    MOV EAX,[0x0061b5a8]                ; 004b7feb | g_CDemonSetPtr
    PUSH EAX                            ; 004b7ff0
    MOV EBX,dword ptr [EAX + 0x15aeb8]  ; 004b7ff1
    CALL core_setdir.cpp_FUN_00538d10   ; 004b7ff7
        ;   XREF to: 00538d10 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_00538d10()
    MOV EAX,[0x0061b460]                ; 004b7ffc | g_CScriptPtr
    MOV dword ptr [EAX + 0x10],0x0      ; 004b8001
    MOV EAX,[0x0061b5a8]                ; 004b8008 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 004b800d
    ADD ESP,0xc                         ; 004b8013
    CMP EBX,EDX                         ; 004b8016
    JNZ 0x004b7fdc                      ; 004b8018
        ;   XREF to: 004b7fdc (CONDITIONAL_JUMP)  ; LAB_004b7fdc
    PUSH EDX                            ; 004b801a
    PUSH EAX                            ; 004b801b
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 ; 004b801c
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 004b8021
    POP ESI                             ; 004b8024
    POP EBX                             ; 004b8025
    RET                                 ; 004b8026

