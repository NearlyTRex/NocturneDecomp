; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_searpart_cpp_FUN_005a8dd0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005f0857
;   TerminatedCString s_Animation_005f085d
;
; Called Functions:
;   unkaddr_0059d350.cpp_FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8dd0
        ;   Label: core_searpart.cpp_FUN_005a8dd0
    PUSH ESI                            ; 005a8dd1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a8dd2
    PUSH 0x5f0857                       ; 005a8dd6 | = "Death"
    LEA EBX,[ESI + 0x10af8]             ; 005a8ddb
    PUSH EBX                            ; 005a8de1
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a8de2
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a8de7
    TEST EAX,EAX                        ; 005a8dea
    JZ 0x005a8df1                       ; 005a8dec
        ;   XREF to: 005a8df1 (CONDITIONAL_JUMP)  ; LAB_005a8df1
    POP ESI                             ; 005a8dee
        ;   Label: LAB_005a8dee
    POP EBX                             ; 005a8def
    RET                                 ; 005a8df0
    PUSH 0x5f085d                       ; 005a8df1 | = "Animation"
        ;   Label: LAB_005a8df1
    PUSH EBX                            ; 005a8df6
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a8df7
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a8dfc
    TEST EAX,EAX                        ; 005a8dff
    JNZ 0x005a8dee                      ; 005a8e01
        ;   XREF to: 005a8dee (CONDITIONAL_JUMP)  ; LAB_005a8dee
    PUSH ESI                            ; 005a8e03
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005a8e04
    CALL dword ptr [EAX + 0x17c]        ; 005a8e0a
    ADD ESP,0x4                         ; 005a8e10
    POP ESI                             ; 005a8e13
    POP EBX                             ; 005a8e14
    RET                                 ; 005a8e15

