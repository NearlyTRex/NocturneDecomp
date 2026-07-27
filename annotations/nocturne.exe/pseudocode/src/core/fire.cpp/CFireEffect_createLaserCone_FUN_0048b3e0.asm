; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createLaserCone_FUN_0048b3e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
;
;
; XREF[3]:
;   core_elephant.cpp_FUN_00478120 at 00478294
;   core_lightgun.cpp_FUN_004c7ca0 at 004c7e30
;   core_shotgun.cpp_FUN_00516770 at 005168e4
;
; Referenced Globals:
;   float FLOAT_0059d210 = 0.02000000
;   undefined4 DAT_01c5c700
;
; Called Functions:
;   core_fire.cpp_CLaserBeam_init_FUN_004858f0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0048b3e0
        ;   Label: core_fire.cpp_CFireEffect_createLaserCone_FUN_0048b3e0
    MOV EDX,dword ptr [0x01c5c700]      ; 0048b3e1 | DAT_01c5c700
    CMP EDX,0x40                        ; 0048b3e7
    JL 0x0048b3ee                       ; 0048b3ea
        ;   XREF to: 0048b3ee (CONDITIONAL_JUMP)  ; LAB_0048b3ee
    POP EBP                             ; 0048b3ec
    RET                                 ; 0048b3ed
    PUSH EDI                            ; 0048b3ee
        ;   Label: LAB_0048b3ee
    PUSH ESI                            ; 0048b3ef
    PUSH EBX                            ; 0048b3f0
    PUSH dword ptr [ESP + 0x30]         ; 0048b3f1
    MOV ECX,dword ptr [ESP + 0x30]      ; 0048b3f5
    PUSH dword ptr [0x0059d210]         ; 0048b3f9 | FLOAT_0059d210
    PUSH ECX                            ; 0048b3ff
    MOV EBX,dword ptr [ESP + 0x34]      ; 0048b400
    PUSH EBX                            ; 0048b404
    MOV ESI,dword ptr [ESP + 0x34]      ; 0048b405
    PUSH ESI                            ; 0048b409
    PUSH 0x0                            ; 0048b40a
    MOV EDI,dword ptr [ESP + 0x34]      ; 0048b40c
    PUSH 0x0                            ; 0048b410
    MOV EBP,dword ptr [ESP + 0x34]      ; 0048b412
    PUSH dword ptr [ESP + 0x3c]         ; 0048b416
    MOV EAX,EDX                         ; 0048b41a
    PUSH EDI                            ; 0048b41c
    SHL EAX,0x6                         ; 0048b41d
    PUSH EBP                            ; 0048b420
    ADD EAX,0x1c5c704                   ; 0048b421
    PUSH EAX                            ; 0048b426
    CALL core_fire.cpp_CLaserBeam_init_FUN_004858f0 ; 0048b427
        ;   XREF to: 004858f0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CLaserBeam_init_FUN_004858f0()
    MOV EAX,[0x01c5c700]                ; 0048b42c | DAT_01c5c700
    INC EAX                             ; 0048b431
    ADD ESP,0x2c                        ; 0048b432
    MOV [0x01c5c700],EAX                ; 0048b435 | DAT_01c5c700
    POP EBX                             ; 0048b43a
    POP ESI                             ; 0048b43b
    POP EDI                             ; 0048b43c
    POP EBP                             ; 0048b43d
    RET                                 ; 0048b43e

