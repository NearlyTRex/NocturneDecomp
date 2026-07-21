; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[2]:
;   FUN_00410cc0 at 00410fc3
;   FUN_00478790 at 00478e83
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_01c6750c
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_fire.cpp_CLightningBolt_activateDirectional_FUN_00488b50
;   FUN_0050e660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c4a0
        ;   Label: core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0
    PUSH dword ptr [ESP + 0x1c]         ; 0048c4a1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0048c4a5
    PUSH dword ptr [ESP + 0x1c]         ; 0048c4a9
    PUSH EDX                            ; 0048c4ad
    MOV EDX,dword ptr [0x01c6750c]      ; 0048c4ae | DAT_01c6750c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048c4b4
    SUB EAX,EDX                         ; 0048c4bb
    SHL EAX,0x2                         ; 0048c4bd
    SUB EAX,EDX                         ; 0048c4c0
    MOV ECX,dword ptr [ESP + 0x18]      ; 0048c4c2
    SHL EAX,0x2                         ; 0048c4c6
    PUSH ECX                            ; 0048c4c9
    ADD EAX,0x1c67510                   ; 0048c4ca
    PUSH EAX                            ; 0048c4cf
    CALL core_fire.cpp_CLightningBolt_activateDirectional_FUN_00488b50 ; 0048c4d0
        ;   XREF to: 00488b50 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CLightningBolt_activateDirectional_FUN_00488b50()
    MOV EBX,dword ptr [0x01c6750c]      ; 0048c4d5 | DAT_01c6750c
    INC EBX                             ; 0048c4db
    ADD ESP,0x14                        ; 0048c4dc
    MOV dword ptr [0x01c6750c],EBX      ; 0048c4df | DAT_01c6750c
    CMP EBX,0xa                         ; 0048c4e5
    JGE 0x0048c4f3                      ; 0048c4e8
        ;   XREF to: 0048c4f3 (CONDITIONAL_JUMP)  ; LAB_0048c4f3
    CMP dword ptr [ESP + 0x14],0x0      ; 0048c4ea
    JNZ 0x0048c506                      ; 0048c4ef
        ;   XREF to: 0048c506 (CONDITIONAL_JUMP)  ; LAB_0048c506
    POP EBX                             ; 0048c4f1
    RET                                 ; 0048c4f2
    PUSH EDI                            ; 0048c4f3
        ;   Label: LAB_0048c4f3
    XOR EDI,EDI                         ; 0048c4f4
    MOV dword ptr [0x01c6750c],EDI      ; 0048c4f6 | DAT_01c6750c
    POP EDI                             ; 0048c4fc
    CMP dword ptr [ESP + 0x14],0x0      ; 0048c4fd
    JNZ 0x0048c506                      ; 0048c502
        ;   XREF to: 0048c506 (CONDITIONAL_JUMP)  ; LAB_0048c506
    POP EBX                             ; 0048c504
    RET                                 ; 0048c505
    PUSH 0x3f800000                     ; 0048c506
        ;   Label: LAB_0048c506
    PUSH 0x0                            ; 0048c50b
    PUSH 0x0                            ; 0048c50d
    MOV EAX,[0x005be368]                ; 0048c50f | DAT_005be368
    PUSH 0x42c80000                     ; 0048c514
    PUSH EAX                            ; 0048c519 | DAT_01e57284
    CALL FUN_0050e660                   ; 0048c51a
        ;   XREF to: 0050e660 (UNCONDITIONAL_CALL)  ; undefined FUN_0050e660()
    ADD ESP,0x14                        ; 0048c51f
    POP EBX                             ; 0048c522
    RET                                 ; 0048c523

