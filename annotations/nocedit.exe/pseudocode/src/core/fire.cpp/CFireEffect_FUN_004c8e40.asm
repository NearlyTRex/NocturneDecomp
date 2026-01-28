; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_fire_cpp_CFireEffect_FUN_004c8e40(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_FUN_004c8dd0 at 004c8e05
;
; Referenced Globals:
;   CExplosion* g_ExplosionActiveListHead
;   CToss[20] g_TossPool
;
; Called Functions:
;   core_fire.cpp_CToss_create_FUN_004c3ee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8e40
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c8e40
    PUSH ESI                            ; 004c8e41
    PUSH EDI                            ; 004c8e42
    PUSH EBP                            ; 004c8e43
    MOV EBX,dword ptr [0x02d678cc]      ; 004c8e44 | g_ExplosionActiveListHead
    IMUL EAX,EBX,0x3e4                  ; 004c8e4a
    MOV EDX,dword ptr [ESP + 0x24]      ; 004c8e50
    PUSH dword ptr [ESP + 0x28]         ; 004c8e54
    PUSH EDX                            ; 004c8e58
    MOV ECX,dword ptr [ESP + 0x28]      ; 004c8e59
    PUSH ECX                            ; 004c8e5d
    MOV ESI,dword ptr [ESP + 0x28]      ; 004c8e5e
    PUSH ESI                            ; 004c8e62
    MOV EDI,dword ptr [ESP + 0x28]      ; 004c8e63
    PUSH EDI                            ; 004c8e67
    ADD EAX,0x2d678d0                   ; 004c8e68 | g_TossPool
    PUSH EAX                            ; 004c8e6d
    CALL core_fire.cpp_CToss_create_FUN_004c3ee0 ; 004c8e6e
        ;   XREF to: 004c3ee0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CToss_create_FUN_004c3ee0(CToss * this_ptr)
    MOV EBP,dword ptr [0x02d678cc]      ; 004c8e73 | g_ExplosionActiveListHead
    INC EBP                             ; 004c8e79
    ADD ESP,0x18                        ; 004c8e7a
    MOV dword ptr [0x02d678cc],EBP      ; 004c8e7d | g_ExplosionActiveListHead
    CMP EBP,0x14                        ; 004c8e83
    JGE 0x004c8e8f                      ; 004c8e86
        ;   XREF to: 004c8e8f (CONDITIONAL_JUMP)  ; LAB_004c8e8f
    MOV EAX,EBX                         ; 004c8e88
    POP EBP                             ; 004c8e8a
    POP EDI                             ; 004c8e8b
    POP ESI                             ; 004c8e8c
    POP EBX                             ; 004c8e8d
    RET                                 ; 004c8e8e
    XOR EDX,EDX                         ; 004c8e8f
        ;   Label: LAB_004c8e8f
    MOV dword ptr [0x02d678cc],EDX      ; 004c8e91 | g_ExplosionActiveListHead
    MOV EAX,EBX                         ; 004c8e97
    POP EBP                             ; 004c8e99
    POP EDI                             ; 004c8e9a
    POP ESI                             ; 004c8e9b
    POP EBX                             ; 004c8e9c
    RET                                 ; 004c8e9d

