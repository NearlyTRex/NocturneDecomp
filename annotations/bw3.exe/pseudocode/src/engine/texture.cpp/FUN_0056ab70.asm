; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_0056ab70(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007303f4
;   undefined4 DAT_02cfd0cc
;   undefined4 DAT_02cfd0d0
;
; Called Functions:
;   engine_texture.cpp_FUN_00569ec0
;   engine_texture.cpp_FUN_00569ff0
;   engine_texture.cpp_FUN_0056a0a0
;   engine_texture.cpp_FUN_0056a130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ab70
        ;   Label: engine_texture.cpp_FUN_0056ab70
    PUSH EBP                            ; 0056ab71
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056ab72
    CMP dword ptr [0x007303f4],0x0      ; 0056ab76 | DAT_007303f4
    JNZ 0x0056ab85                      ; 0056ab7d
        ;   XREF to: 0056ab85 (CONDITIONAL_JUMP)  ; LAB_0056ab85
    CMP byte ptr [EBX + 0x8],0x0        ; 0056ab7f
    JNZ 0x0056ab88                      ; 0056ab83
        ;   XREF to: 0056ab88 (CONDITIONAL_JUMP)  ; LAB_0056ab88
    POP EBP                             ; 0056ab85
        ;   Label: LAB_0056ab85
    POP EBX                             ; 0056ab86
    RET                                 ; 0056ab87
    PUSH EDI                            ; 0056ab88
        ;   Label: LAB_0056ab88
    PUSH ESI                            ; 0056ab89
    LEA EDI,[EBX + 0x8]                 ; 0056ab8a
    MOV ESI,dword ptr [EBX + 0x4]       ; 0056ab8d
    PUSH EDI                            ; 0056ab90
    AND ESI,0xffff                      ; 0056ab91
    PUSH ESI                            ; 0056ab97
    MOV ECX,dword ptr [0x02cfd0d0]      ; 0056ab98 | DAT_02cfd0d0
    PUSH ECX                            ; 0056ab9e
    CALL engine_texture.cpp_FUN_0056a0a0 ; 0056ab9f
        ;   XREF to: 0056a0a0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056a0a0()
    ADD ESP,0xc                         ; 0056aba4
    MOV ESI,EAX                         ; 0056aba7
    CMP EAX,-0x1                        ; 0056aba9
    JNZ 0x0056abee                      ; 0056abac
        ;   XREF to: 0056abee (CONDITIONAL_JUMP)  ; LAB_0056abee
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0056abae
    PUSH EDX                            ; 0056abb2
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0056abb3
    PUSH ECX                            ; 0056abb7
    PUSH EDI                            ; 0056abb8
    MOV ESI,dword ptr [0x02cfd0d0]      ; 0056abb9 | DAT_02cfd0d0
    PUSH ESI                            ; 0056abbf
    CALL engine_texture.cpp_FUN_00569ec0 ; 0056abc0
        ;   XREF to: 00569ec0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00569ec0()
    ADD ESP,0x10                        ; 0056abc5
    MOV ESI,EAX                         ; 0056abc8
    MOV dword ptr [EBX + 0x4],EAX       ; 0056abca
    MOV EAX,0x2                         ; 0056abcd
    PUSH EAX                            ; 0056abd2
        ;   Label: LAB_0056abd2
    PUSH EBX                            ; 0056abd3
    MOV EDI,dword ptr [0x02cfd0d0]      ; 0056abd4 | DAT_02cfd0d0
    PUSH EDI                            ; 0056abda
    MOV dword ptr [0x02cfd0cc],ESI      ; 0056abdb | DAT_02cfd0cc
    CALL engine_texture.cpp_FUN_0056a130 ; 0056abe1
        ;   XREF to: 0056a130 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056a130()
    ADD ESP,0xc                         ; 0056abe6
    POP ESI                             ; 0056abe9
    POP EDI                             ; 0056abea
    POP EBP                             ; 0056abeb
    POP EBX                             ; 0056abec
    RET                                 ; 0056abed
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0056abee
        ;   Label: LAB_0056abee
    PUSH EDI                            ; 0056abf2
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0056abf3
    PUSH EBP                            ; 0056abf7
    PUSH EBX                            ; 0056abf8
    MOV dword ptr [EBX + 0x4],EAX       ; 0056abf9
    MOV EAX,[0x02cfd0d0]                ; 0056abfc | DAT_02cfd0d0
    PUSH EAX                            ; 0056ac01
    CALL engine_texture.cpp_FUN_00569ff0 ; 0056ac02
        ;   XREF to: 00569ff0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00569ff0()
    MOV EAX,0x2                         ; 0056ac07
    ADD ESP,0x10                        ; 0056ac0c
    JMP 0x0056abd2                      ; 0056ac0f
        ;   XREF to: 0056abd2 (UNCONDITIONAL_JUMP)  ; LAB_0056abd2

