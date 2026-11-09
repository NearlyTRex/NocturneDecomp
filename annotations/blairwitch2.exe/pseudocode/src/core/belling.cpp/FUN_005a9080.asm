; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_belling_cpp_FUN_005a9080(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005f0897
;   TerminatedCString s_Animation_005f089d
;
; Called Functions:
;   unkaddr_0059d350.cpp_FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9080
        ;   Label: core_belling.cpp_FUN_005a9080
    PUSH ESI                            ; 005a9081
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a9082
    PUSH 0x5f0897                       ; 005a9086 | = "Death"
    LEA EBX,[ESI + 0x10af8]             ; 005a908b
    PUSH EBX                            ; 005a9091
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a9092
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a9097
    TEST EAX,EAX                        ; 005a909a
    JZ 0x005a90a1                       ; 005a909c
        ;   XREF to: 005a90a1 (CONDITIONAL_JUMP)  ; LAB_005a90a1
    POP ESI                             ; 005a909e
        ;   Label: LAB_005a909e
    POP EBX                             ; 005a909f
    RET                                 ; 005a90a0
    PUSH 0x5f089d                       ; 005a90a1 | = "Animation"
        ;   Label: LAB_005a90a1
    PUSH EBX                            ; 005a90a6
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a90a7
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a90ac
    TEST EAX,EAX                        ; 005a90af
    JNZ 0x005a909e                      ; 005a90b1
        ;   XREF to: 005a909e (CONDITIONAL_JUMP)  ; LAB_005a909e
    PUSH ESI                            ; 005a90b3
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005a90b4
    CALL dword ptr [EAX + 0x17c]        ; 005a90ba
    ADD ESP,0x4                         ; 005a90c0
    POP ESI                             ; 005a90c3
    POP EBX                             ; 005a90c4
    RET                                 ; 005a90c5

