; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00513220(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_00517f2e at 00517ffd
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d14
;   undefined4 DAT_02c83480
;
; Called Functions:
;   engine_mini3d.cpp_FUN_005124f0
;   engine_mini3d.cpp_FUN_00516c60
;
; *****************************************************************************

section .text

    CALL engine_mini3d.cpp_FUN_005124f0 ; 00513220
        ;   XREF to: 005124f0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005124f0()
        ;   Label: engine_mini3d.cpp_FUN_00513220
    CALL engine_mini3d.cpp_FUN_00516c60 ; 00513225
        ;   XREF to: 00516c60 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00516c60()
    CMP dword ptr [0x02c83480],0x0      ; 0051322a | DAT_02c83480
    JZ 0x0051323c                       ; 00513231
        ;   XREF to: 0051323c (CONDITIONAL_JUMP)  ; LAB_0051323c
    CMP dword ptr [0x01c50948],0x0      ; 00513233 | DAT_01c50948
    JNZ 0x0051323d                      ; 0051323a
        ;   XREF to: 0051323d (CONDITIONAL_JUMP)  ; LAB_0051323d
    RET                                 ; 0051323c
        ;   Label: LAB_0051323c
    PUSH EDI                            ; 0051323d
        ;   Label: LAB_0051323d
    PUSH ESI                            ; 0051323e
    PUSH EBX                            ; 0051323f
    MOV EBX,dword ptr [0x01c51d14]      ; 00513240 | DAT_01c51d14
    PUSH EBX                            ; 00513246
    MOV ESI,dword ptr [ESP + 0x18]      ; 00513247
    PUSH ESI                            ; 0051324b
    MOV EDI,dword ptr [ESP + 0x18]      ; 0051324c
    PUSH EDI                            ; 00513250
    CALL dword ptr [0x02c83480]         ; 00513251 | DAT_02c83480
    ADD ESP,0xc                         ; 00513257
    POP EBX                             ; 0051325a
    POP ESI                             ; 0051325b
    POP EDI                             ; 0051325c
    RET                                 ; 0051325d

