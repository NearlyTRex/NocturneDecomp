; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_fire_cpp_FUN_004a3af0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[8]:
;   core_ammo.cpp_FUN_0040e140 at 0040e20f
;   core_ammo.cpp_FUN_0040e2b0 at 0040e37f
;   core_asgaya.cpp_FUN_005a0be0 at 005a1230
;   core_burncrss.cpp_FUN_00424550 at 00424df3
;   core_emitter.cpp_FUN_00487eb0 at 004884fc
;   core_exorcism.cpp_FUN_0048a420 at 0048a5cf
;   core_health.cpp_FUN_004d1e10 at 004d1e76
;   core_styldemo.cpp_FUN_0059e600 at 0059fa2a
;
; Referenced Globals:
;   undefined4 DAT_01cfb8b8
;
; Called Functions:
;   core_fire.cpp_FUN_0049e1a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3af0
        ;   Label: core_fire.cpp_FUN_004a3af0
    PUSH ESI                            ; 004a3af1
    PUSH EDI                            ; 004a3af2
    PUSH EBP                            ; 004a3af3
    MOV ESI,dword ptr [0x01cfb8b8]      ; 004a3af4 | DAT_01cfb8b8
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a3afa
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004a3afe
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a3b02
    XOR EAX,EAX                         ; 004a3b06
    TEST EBX,EBX                        ; 004a3b08
    JLE 0x004a3b46                      ; 004a3b0a
        ;   XREF to: 004a3b46 (CONDITIONAL_JUMP)  ; LAB_004a3b46
    IMUL EAX,ESI,0x2c                   ; 004a3b0c
        ;   Label: LAB_004a3b0c
    MOV EDX,dword ptr [ESP + 0x28]      ; 004a3b0f
    PUSH EDX                            ; 004a3b13
    MOV ECX,dword ptr [ESP + 0x28]      ; 004a3b14
    PUSH ECX                            ; 004a3b18
    PUSH EBP                            ; 004a3b19
    PUSH EDI                            ; 004a3b1a
    ADD EAX,0x1cfb8bc                   ; 004a3b1b
    PUSH EAX                            ; 004a3b20
    MOV dword ptr [0x01cfb8b8],ESI      ; 004a3b21 | DAT_01cfb8b8
    CALL core_fire.cpp_FUN_0049e1a0     ; 004a3b27
        ;   XREF to: 0049e1a0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049e1a0()
    MOV EAX,[0x01cfb8b8]                ; 004a3b2c | DAT_01cfb8b8
    LEA ESI,[EAX + 0x1]                 ; 004a3b31
    ADD ESP,0x14                        ; 004a3b34
    CMP ESI,0x1f4                       ; 004a3b37
    JL 0x004a3b41                       ; 004a3b3d
        ;   XREF to: 004a3b41 (CONDITIONAL_JUMP)  ; LAB_004a3b41
    XOR ESI,ESI                         ; 004a3b3f
    DEC EBX                             ; 004a3b41
        ;   Label: LAB_004a3b41
    TEST EBX,EBX                        ; 004a3b42
    JG 0x004a3b0c                       ; 004a3b44
        ;   XREF to: 004a3b0c (CONDITIONAL_JUMP)  ; LAB_004a3b0c
    MOV dword ptr [0x01cfb8b8],ESI      ; 004a3b46 | DAT_01cfb8b8
        ;   Label: LAB_004a3b46
    POP EBP                             ; 004a3b4c
    POP EDI                             ; 004a3b4d
    POP ESI                             ; 004a3b4e
    POP EBX                             ; 004a3b4f
    RET                                 ; 004a3b50

