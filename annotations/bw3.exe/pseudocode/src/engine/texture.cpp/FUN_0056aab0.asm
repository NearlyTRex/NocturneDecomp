; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_0056aab0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[2]:
;   engine_mini3d.cpp_FUN_004ed9d0 at 004ed9ec
;   engine_texture.cpp_FUN_0056ad5e at 0056b1d8
;
; Referenced Globals:
;   undefined4 DAT_007303f4
;   undefined4 DAT_02cfd0cc
;   undefined4 DAT_02cfd0d0
;
; Called Functions:
;   engine_texture.cpp_FUN_00569e50
;   engine_texture.cpp_FUN_00569f20
;   engine_texture.cpp_FUN_0056a0a0
;   engine_texture.cpp_FUN_0056a130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056aab0
        ;   Label: engine_texture.cpp_FUN_0056aab0
    PUSH EBP                            ; 0056aab1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056aab2
    CMP dword ptr [0x007303f4],0x0      ; 0056aab6 | DAT_007303f4
    JNZ 0x0056aac5                      ; 0056aabd
        ;   XREF to: 0056aac5 (CONDITIONAL_JUMP)  ; LAB_0056aac5
    CMP byte ptr [EBX + 0x8],0x0        ; 0056aabf
    JNZ 0x0056aac8                      ; 0056aac3
        ;   XREF to: 0056aac8 (CONDITIONAL_JUMP)  ; LAB_0056aac8
    POP EBP                             ; 0056aac5
        ;   Label: LAB_0056aac5
    POP EBX                             ; 0056aac6
    RET                                 ; 0056aac7
    PUSH EDI                            ; 0056aac8
        ;   Label: LAB_0056aac8
    PUSH ESI                            ; 0056aac9
    LEA EDI,[EBX + 0x8]                 ; 0056aaca
    MOV ESI,dword ptr [EBX + 0x4]       ; 0056aacd
    PUSH EDI                            ; 0056aad0
    AND ESI,0xffff                      ; 0056aad1
    PUSH ESI                            ; 0056aad7
    MOV ECX,dword ptr [0x02cfd0d0]      ; 0056aad8 | DAT_02cfd0d0
    PUSH ECX                            ; 0056aade
    CALL engine_texture.cpp_FUN_0056a0a0 ; 0056aadf
        ;   XREF to: 0056a0a0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056a0a0()
    ADD ESP,0xc                         ; 0056aae4
    MOV ESI,EAX                         ; 0056aae7
    CMP EAX,-0x1                        ; 0056aae9
    JNZ 0x0056ab38                      ; 0056aaec
        ;   XREF to: 0056ab38 (CONDITIONAL_JUMP)  ; LAB_0056ab38
    MOV ESI,dword ptr [ESP + 0x24]      ; 0056aaee
    PUSH ESI                            ; 0056aaf2
    MOV EBP,dword ptr [ESP + 0x24]      ; 0056aaf3
    PUSH EBP                            ; 0056aaf7
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056aaf8
    PUSH EAX                            ; 0056aafc
    MOV EDX,dword ptr [ESP + 0x24]      ; 0056aafd
    PUSH EDX                            ; 0056ab01
    PUSH EDI                            ; 0056ab02
    MOV ECX,dword ptr [0x02cfd0d0]      ; 0056ab03 | DAT_02cfd0d0
    PUSH ECX                            ; 0056ab09
    CALL engine_texture.cpp_FUN_00569e50 ; 0056ab0a
        ;   XREF to: 00569e50 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00569e50()
    ADD ESP,0x18                        ; 0056ab0f
    MOV ESI,EAX                         ; 0056ab12
    MOV dword ptr [EBX + 0x4],EAX       ; 0056ab14
    MOV EAX,0x1                         ; 0056ab17
    PUSH EAX                            ; 0056ab1c
        ;   Label: LAB_0056ab1c
    PUSH EBX                            ; 0056ab1d
    MOV EBX,dword ptr [0x02cfd0d0]      ; 0056ab1e | DAT_02cfd0d0
    PUSH EBX                            ; 0056ab24
    MOV dword ptr [0x02cfd0cc],ESI      ; 0056ab25 | DAT_02cfd0cc
    CALL engine_texture.cpp_FUN_0056a130 ; 0056ab2b
        ;   XREF to: 0056a130 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056a130()
    ADD ESP,0xc                         ; 0056ab30
    POP ESI                             ; 0056ab33
    POP EDI                             ; 0056ab34
    POP EBP                             ; 0056ab35
    POP EBX                             ; 0056ab36
    RET                                 ; 0056ab37
    MOV EDI,dword ptr [ESP + 0x24]      ; 0056ab38
        ;   Label: LAB_0056ab38
    PUSH EDI                            ; 0056ab3c
    MOV EBP,dword ptr [ESP + 0x24]      ; 0056ab3d
    PUSH EBP                            ; 0056ab41
    MOV dword ptr [EBX + 0x4],EAX       ; 0056ab42
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056ab45
    PUSH EAX                            ; 0056ab49
    MOV EDX,dword ptr [ESP + 0x24]      ; 0056ab4a
    PUSH EDX                            ; 0056ab4e
    PUSH EBX                            ; 0056ab4f
    MOV ECX,dword ptr [0x02cfd0d0]      ; 0056ab50 | DAT_02cfd0d0
    PUSH ECX                            ; 0056ab56
    CALL engine_texture.cpp_FUN_00569f20 ; 0056ab57
        ;   XREF to: 00569f20 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00569f20()
    MOV EAX,0x1                         ; 0056ab5c
    ADD ESP,0x18                        ; 0056ab61
    JMP 0x0056ab1c                      ; 0056ab64
        ;   XREF to: 0056ab1c (UNCONDITIONAL_JUMP)  ; LAB_0056ab1c

