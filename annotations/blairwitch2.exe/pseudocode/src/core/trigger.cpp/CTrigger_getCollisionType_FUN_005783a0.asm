; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_trigger_cpp_CTrigger_getCollisionType_FUN_005783a0(CTrigger *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005783a0
        ;   Label: core_trigger.cpp_CTrigger_getCollisionType_FUN_005783a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005783a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005783a5
    MOV ECX,dword ptr [EDX]             ; 005783a9
    CMP ECX,0x1                         ; 005783ab
    JNZ 0x005783c0                      ; 005783ae
        ;   XREF to: 005783c0 (CONDITIONAL_JUMP)  ; LAB_005783c0
    MOV EBX,dword ptr [EAX + 0x2d0]     ; 005783b0
    CMP EBX,0x4                         ; 005783b6
    JZ 0x005783e0                       ; 005783b9
        ;   XREF to: 005783e0 (CONDITIONAL_JUMP)  ; LAB_005783e0
    CMP EBX,0x7                         ; 005783bb
    JZ 0x005783e0                       ; 005783be
        ;   XREF to: 005783e0 (CONDITIONAL_JUMP)  ; LAB_005783e0
    CMP dword ptr [EDX],0x3             ; 005783c0
        ;   Label: LAB_005783c0
    JNZ 0x005783e4                      ; 005783c3
        ;   XREF to: 005783e4 (CONDITIONAL_JUMP)  ; LAB_005783e4
    CMP dword ptr [EAX + 0x2d0],0x5     ; 005783c5
    JNZ 0x005783e4                      ; 005783cc
        ;   XREF to: 005783e4 (CONDITIONAL_JUMP)  ; LAB_005783e4
    MOV ECX,dword ptr [EAX + 0x450]     ; 005783ce
    CMP ECX,dword ptr [EDX + 0x4]       ; 005783d4
    JNZ 0x005783e4                      ; 005783d7
        ;   XREF to: 005783e4 (CONDITIONAL_JUMP)  ; LAB_005783e4
    MOV EAX,0x1                         ; 005783d9
    POP EBX                             ; 005783de
    RET                                 ; 005783df
    MOV EAX,ECX                         ; 005783e0
        ;   Label: LAB_005783e0
    POP EBX                             ; 005783e2
    RET                                 ; 005783e3
    XOR EAX,EAX                         ; 005783e4
        ;   Label: LAB_005783e4
    POP EBX                             ; 005783e6
    RET                                 ; 005783e7

