; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a3f20(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   core_fire.cpp_FUN_0049d090 at 0049d48d
;   core_weather.cpp_FUN_0057bda0 at 0057bf8f
;
; Referenced Globals:
;   undefined4 DAT_01d07b8c
;   undefined4 g_RainDropPool[0].field36_0x24
;   undefined4 g_RainDropPool[0].field60_0x3c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3f20
        ;   Label: core_fire.cpp_FUN_004a3f20
    PUSH ESI                            ; 004a3f21
    MOV EBX,dword ptr [0x01d07b8c]      ; 004a3f22 | DAT_01d07b8c
    MOV ECX,dword ptr [ESP + 0x14]      ; 004a3f28
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a3f2c
    MOV EAX,EBX                         ; 004a3f30
    PUSH ECX                            ; 004a3f32
    SHL EAX,0x6                         ; 004a3f33
    PUSH ESI                            ; 004a3f36
    ADD EAX,0x1d07b90                   ; 004a3f37
    PUSH EAX                            ; 004a3f3c
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004a3f3d | g_RainDropPool[0].field60_0x3c
    CALL dword ptr [EDX]                ; 004a3f40
    MOV EBX,dword ptr [0x01d07b8c]      ; 004a3f42 | DAT_01d07b8c
    MOV EAX,EBX                         ; 004a3f48
    SHL EAX,0x6                         ; 004a3f4a
    ADD EAX,0x1d07b90                   ; 004a3f4d
    ADD ESP,0xc                         ; 004a3f52
    INC EBX                             ; 004a3f55
    MOV dword ptr [EAX + 0x24],0x3e800000 ; 004a3f56 | g_RainDropPool[0].field36_0x24
    CMP EBX,0x100                       ; 004a3f5d
    JL 0x004a3f67                       ; 004a3f63
        ;   XREF to: 004a3f67 (CONDITIONAL_JUMP)  ; LAB_004a3f67
    XOR EBX,EBX                         ; 004a3f65
    MOV dword ptr [0x01d07b8c],EBX      ; 004a3f67 | DAT_01d07b8c
        ;   Label: LAB_004a3f67
    POP ESI                             ; 004a3f6d
    POP EBX                             ; 004a3f6e
    RET                                 ; 004a3f6f

