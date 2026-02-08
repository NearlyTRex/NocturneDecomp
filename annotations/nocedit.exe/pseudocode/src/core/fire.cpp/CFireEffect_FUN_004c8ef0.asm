; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_CFireEffect_FUN_004c8ef0(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00484410 at 00484cfe
;   core_emitter.cpp_CEmitter_process_FUN_004a8070 at 004a849e
;   core_flamegun.cpp_CFlameThrower_fire_FUN_004cb920 at 004cb971
;
; Referenced Globals:
;   CCrater* g_CraterActiveListHead
;   CGunFlame[500] g_GunFlamePool
;
; Called Functions:
;   core_fire.cpp_CGunFlame_FUN_004c4db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8ef0
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c8ef0
    PUSH ESI                            ; 004c8ef1
    PUSH EDI                            ; 004c8ef2
    PUSH EBP                            ; 004c8ef3
    MOV ESI,dword ptr [0x02d6cf64]      ; 004c8ef4 | g_CraterActiveListHead
    MOV EBP,dword ptr [ESP + 0x18]      ; 004c8efa
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c8efe
    MOV EDI,dword ptr [ESP + 0x24]      ; 004c8f02
    TEST EBX,EBX                        ; 004c8f06
    JLE 0x004c8f3e                      ; 004c8f08
        ;   XREF to: 004c8f3e (CONDITIONAL_JUMP)  ; LAB_004c8f3e
    IMUL EAX,ESI,0x24                   ; 004c8f0a
        ;   Label: LAB_004c8f0a
    PUSH EDI                            ; 004c8f0d
    MOV EDX,dword ptr [ESP + 0x20]      ; 004c8f0e
    PUSH EDX                            ; 004c8f12
    PUSH EBP                            ; 004c8f13
    ADD EAX,0x2d6cf68                   ; 004c8f14 | g_GunFlamePool
    PUSH EAX                            ; 004c8f19 | g_GunFlamePool
    MOV dword ptr [0x02d6cf64],ESI      ; 004c8f1a | g_CraterActiveListHead
    CALL core_fire.cpp_CGunFlame_FUN_004c4db0 ; 004c8f20
        ;   XREF to: 004c4db0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CGunFlame_FUN_004c4db0(CGunFlame * this_ptr)
    MOV ESI,dword ptr [0x02d6cf64]      ; 004c8f25 | g_CraterActiveListHead
    INC ESI                             ; 004c8f2b
    ADD ESP,0x10                        ; 004c8f2c
    CMP ESI,0x1f4                       ; 004c8f2f
    JL 0x004c8f39                       ; 004c8f35
        ;   XREF to: 004c8f39 (CONDITIONAL_JUMP)  ; LAB_004c8f39
    XOR ESI,ESI                         ; 004c8f37
    DEC EBX                             ; 004c8f39
        ;   Label: LAB_004c8f39
    TEST EBX,EBX                        ; 004c8f3a
    JG 0x004c8f0a                       ; 004c8f3c
        ;   XREF to: 004c8f0a (CONDITIONAL_JUMP)  ; LAB_004c8f0a
    MOV dword ptr [0x02d6cf64],ESI      ; 004c8f3e | g_CraterActiveListHead
        ;   Label: LAB_004c8f3e
    POP EBP                             ; 004c8f44
    POP EDI                             ; 004c8f45
    POP ESI                             ; 004c8f46
    POP EBX                             ; 004c8f47
    RET                                 ; 004c8f48

