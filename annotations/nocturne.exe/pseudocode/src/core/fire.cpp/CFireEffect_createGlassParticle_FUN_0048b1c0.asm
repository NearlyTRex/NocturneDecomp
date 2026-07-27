; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_0048b1c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[2]:
;   core_glass.cpp_FUN_004accf0 at 004ace0c
;   core_skeleton.cpp_CDeformableModel_shatter_FUN_0051a780 at 0051aa4c
;
; Referenced Globals:
;   undefined4 DAT_01c4f088
;
; Called Functions:
;   core_fire.cpp_CGlassParticle_init_FUN_004850d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0048b1c0
        ;   Label: core_fire.cpp_CFireEffect_createGlassParticle_FUN_0048b1c0
    PUSH EDI                            ; 0048b1c1
    PUSH EBP                            ; 0048b1c2
    MOV EDX,dword ptr [0x01c4f088]      ; 0048b1c3 | DAT_01c4f088
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048b1c9
    ADD EAX,EDX                         ; 0048b1d0
    SHL EAX,0x3                         ; 0048b1d2
    SUB EAX,EDX                         ; 0048b1d5
    SHL EAX,0x2                         ; 0048b1d7
    INC EDX                             ; 0048b1da
    ADD EAX,0x1c4f08c                   ; 0048b1db
    MOV dword ptr [0x01c4f088],EDX      ; 0048b1e0 | DAT_01c4f088
    CMP EDX,0x100                       ; 0048b1e6
    JL 0x0048b1f8                       ; 0048b1ec
        ;   XREF to: 0048b1f8 (CONDITIONAL_JUMP)  ; LAB_0048b1f8
    PUSH EBX                            ; 0048b1ee
    XOR EBX,EBX                         ; 0048b1ef
    MOV dword ptr [0x01c4f088],EBX      ; 0048b1f1 | DAT_01c4f088
    POP EBX                             ; 0048b1f7
    MOV ESI,dword ptr [ESP + 0x24]      ; 0048b1f8
        ;   Label: LAB_0048b1f8
    PUSH ESI                            ; 0048b1fc
    MOV EDI,dword ptr [ESP + 0x24]      ; 0048b1fd
    PUSH EDI                            ; 0048b201
    MOV EBP,dword ptr [ESP + 0x24]      ; 0048b202
    PUSH EBP                            ; 0048b206
    MOV EDX,dword ptr [ESP + 0x24]      ; 0048b207
    PUSH EDX                            ; 0048b20b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0048b20c
    PUSH ECX                            ; 0048b210
    PUSH EAX                            ; 0048b211
    CALL core_fire.cpp_CGlassParticle_init_FUN_004850d0 ; 0048b212
        ;   XREF to: 004850d0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CGlassParticle_init_FUN_004850d0()
    ADD ESP,0x18                        ; 0048b217
    POP EBP                             ; 0048b21a
    POP EDI                             ; 0048b21b
    POP ESI                             ; 0048b21c
    RET                                 ; 0048b21d

