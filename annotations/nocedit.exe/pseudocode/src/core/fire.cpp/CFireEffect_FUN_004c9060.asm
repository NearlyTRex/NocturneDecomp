; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_CFireEffect_FUN_004c9060(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_FUN_004c90c0 at 004c9184
;
; Referenced Globals:
;   CLightningBolt* g_LightningBoltActiveListHead
;   CTrail[100] g_TrailPool
;
; Called Functions:
;   core_fire.cpp_CTrail_FUN_004c5df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9060
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c9060
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004c9061
    PUSH EDX                            ; 004c9065
    MOV ECX,dword ptr [ESP + 0x10]      ; 004c9066
    MOV EDX,dword ptr [0x02d71774]      ; 004c906a | g_LightningBoltActiveListHead
    PUSH dword ptr [ESP + 0x1c]         ; 004c9070
    LEA EAX,[EDX*0x8 + 0x0]             ; 004c9074
    PUSH dword ptr [ESP + 0x1c]         ; 004c907b
    ADD EAX,EDX                         ; 004c907f
    PUSH dword ptr [ESP + 0x1c]         ; 004c9081
    SHL EAX,0x2                         ; 004c9085
    PUSH ECX                            ; 004c9088
    ADD EAX,0x2d71778                   ; 004c9089 | g_TrailPool
    PUSH EAX                            ; 004c908e
    CALL core_fire.cpp_CTrail_FUN_004c5df0 ; 004c908f
        ;   XREF to: 004c5df0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CTrail_FUN_004c5df0(CTrail * this_ptr)
    MOV EBX,dword ptr [0x02d71774]      ; 004c9094 | g_LightningBoltActiveListHead
    INC EBX                             ; 004c909a
    ADD ESP,0x18                        ; 004c909b
    MOV dword ptr [0x02d71774],EBX      ; 004c909e | g_LightningBoltActiveListHead
    CMP EBX,0x64                        ; 004c90a4
    JGE 0x004c90ab                      ; 004c90a7
        ;   XREF to: 004c90ab (CONDITIONAL_JUMP)  ; LAB_004c90ab
    POP EBX                             ; 004c90a9
    RET                                 ; 004c90aa
    PUSH EDI                            ; 004c90ab
        ;   Label: LAB_004c90ab
    XOR EDI,EDI                         ; 004c90ac
    MOV dword ptr [0x02d71774],EDI      ; 004c90ae | g_LightningBoltActiveListHead
    POP EDI                             ; 004c90b4
    POP EBX                             ; 004c90b5
    RET                                 ; 004c90b6

