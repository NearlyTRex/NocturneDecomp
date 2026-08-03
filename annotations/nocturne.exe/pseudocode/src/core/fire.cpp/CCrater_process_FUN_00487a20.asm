; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_process_FUN_00487a20(CCrater *this_ptr)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0048a390 at 0048a555
;
; Referenced Globals:
;   double DOUBLE_005812ac = 0.200000000000000
;   float FLOAT_005812b4 = -0.2000000
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 g_CGame_01c775ec.delta_time_float
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487a20
        ;   Label: core_fire.cpp_CCrater_process_FUN_00487a20
    PUSH ESI                            ; 00487a21
    PUSH EBP                            ; 00487a22
    SUB ESP,0xc                         ; 00487a23
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00487a26
    CMP dword ptr [EBX],0x0             ; 00487a2a
    JZ 0x00487ab0                       ; 00487a2d
        ;   XREF to: 00487ab0 (CONDITIONAL_JUMP)  ; LAB_00487ab0
    FLD float ptr [EBX + 0x8]           ; 00487a33
    FLDZ                                ; 00487a36
    FCOMPP                              ; 00487a38
    FNSTSW AX                           ; 00487a3a
    SAHF                                ; 00487a3c
    JC 0x00487ab7                       ; 00487a3d
        ;   XREF to: 00487ab7 (CONDITIONAL_JUMP)  ; LAB_00487ab7
    MOV ESI,dword ptr [0x005b9354]      ; 00487a43 | g_CGame_PTR_005b9354
        ;   Label: LAB_00487a43
    LEA EAX,[EBX + 0x18]                ; 00487a49
    FLD float ptr [ESI + 0x264]         ; 00487a4c | g_CGame_01c775ec.delta_time_float
    FADD float ptr [EAX]                ; 00487a52
    FSTP float ptr [EAX]                ; 00487a54
    FLD float ptr [EBX + 0x18]          ; 00487a56
    FCOMP double ptr [0x005812ac]       ; 00487a59 | DOUBLE_005812ac
    FNSTSW AX                           ; 00487a5f
    SAHF                                ; 00487a61
    JBE 0x00487ab0                      ; 00487a62
        ;   XREF to: 00487ab0 (CONDITIONAL_JUMP)  ; LAB_00487ab0
    FLD float ptr [EBX + 0x18]          ; 00487a64
    MOV ESI,0x3f800000                  ; 00487a67
    FADD float ptr [0x005812b4]         ; 00487a6c | FLOAT_005812b4
    XOR ECX,ECX                         ; 00487a72
    FSTP float ptr [EBX + 0x18]         ; 00487a74
    MOV dword ptr [ESP],ECX             ; 00487a77
    MOV dword ptr [ESP + 0x4],ESI       ; 00487a7a
    LEA ESI,[EBX + 0x1c]                ; 00487a7e
    MOV dword ptr [ESP + 0x8],ECX       ; 00487a81
    MOV EBX,ESI                         ; 00487a85
    ADD ESI,0x24                        ; 00487a87
    PUSH 0xffff                         ; 00487a8a
        ;   Label: LAB_00487a8a
    LEA EAX,[ESP + 0x4]                 ; 00487a8f
    PUSH EAX                            ; 00487a93
    PUSH 0x3f800000                     ; 00487a94
    PUSH EBX                            ; 00487a99
    MOV EBP,dword ptr [0x005b80f0]      ; 00487a9a | g_CFireEffect_PTR_005b80f0
    PUSH EBP                            ; 00487aa0
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0 ; 00487aa1
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD EBX,0xc                         ; 00487aa6
    ADD ESP,0x14                        ; 00487aa9
    CMP EBX,ESI                         ; 00487aac
    JNZ 0x00487a8a                      ; 00487aae
        ;   XREF to: 00487a8a (CONDITIONAL_JUMP)  ; LAB_00487a8a
    ADD ESP,0xc                         ; 00487ab0
        ;   Label: LAB_00487ab0
    POP EBP                             ; 00487ab3
    POP ESI                             ; 00487ab4
    POP EBX                             ; 00487ab5
    RET                                 ; 00487ab6
    MOV ESI,dword ptr [0x005b9354]      ; 00487ab7 | g_CGame_PTR_005b9354
        ;   Label: LAB_00487ab7
    LEA EAX,[EBX + 0x8]                 ; 00487abd
    FLD float ptr [ESI + 0x264]         ; 00487ac0 | g_CGame_01c775ec.delta_time_float
    FSUBR float ptr [EAX]               ; 00487ac6
    FSTP float ptr [EAX]                ; 00487ac8
    FLD float ptr [EBX + 0x8]           ; 00487aca
    FLDZ                                ; 00487acd
    FCOMPP                              ; 00487acf
    FNSTSW AX                           ; 00487ad1
    SAHF                                ; 00487ad3
    JBE 0x00487a43                      ; 00487ad4
        ;   XREF to: 00487a43 (CONDITIONAL_JUMP)  ; LAB_00487a43
    MOV dword ptr [EBX + 0x4],0x1       ; 00487ada
    MOV dword ptr [EBX + 0x8],0x0       ; 00487ae1
    JMP 0x00487a43                      ; 00487ae8
        ;   XREF to: 00487a43 (UNCONDITIONAL_JUMP)  ; LAB_00487a43

