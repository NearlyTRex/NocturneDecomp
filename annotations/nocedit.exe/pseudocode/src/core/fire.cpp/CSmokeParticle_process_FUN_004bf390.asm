; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_process_FUN_004bf390(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 at 004c7171
;
; Referenced Globals:
;   float FLOAT_00629c0b = 30
;   CGame* g_CGamePtr = 02d81a9c
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bf390
        ;   Label: core_fire.cpp_CSmokeParticle_process_FUN_004bf390
    SUB ESP,0x20                        ; 004bf391
    MOV EBX,dword ptr [ESP + 0x28]      ; 004bf394
    MOV EAX,[0x0067b654]                ; 004bf398 | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x264]     ; 004bf39d | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x18],EAX      ; 004bf3a3
    FLD float ptr [ESP + 0x18]          ; 004bf3a7
    FMUL float ptr [0x00629c0b]         ; 004bf3ab | FLOAT_00629c0b
    FADD float ptr [EBX + 0x18]         ; 004bf3b1
    FSTP float ptr [EBX + 0x18]         ; 004bf3b4
    CMP dword ptr [EBX + 0x18],0x42200000 ; 004bf3b7
    JL 0x004bf3cb                       ; 004bf3be
        ;   XREF to: 004bf3cb (CONDITIONAL_JUMP)  ; LAB_004bf3cb
    MOV dword ptr [EBX],0x0             ; 004bf3c0
    ADD ESP,0x20                        ; 004bf3c6
    POP EBX                             ; 004bf3c9
    RET                                 ; 004bf3ca
    FLD float ptr [ESP + 0x18]          ; 004bf3cb
        ;   Label: LAB_004bf3cb
    FMUL float ptr [EBX + 0x10]         ; 004bf3cf
    FMUL float ptr [EBX + 0x14]         ; 004bf3d2
    PUSH 0x3f800000                     ; 004bf3d5
    FADD float ptr [EBX + 0x8]          ; 004bf3da
    PUSH 0xbf800000                     ; 004bf3dd
    FSTP float ptr [EBX + 0x8]          ; 004bf3e2
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004bf3e5
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

