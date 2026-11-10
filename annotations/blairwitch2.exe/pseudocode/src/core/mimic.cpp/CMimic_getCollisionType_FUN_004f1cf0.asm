; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_mimic_cpp_CMimic_getCollisionType_FUN_004f1cf0(CMimic *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Referenced Globals:
;   undefined4 DAT_005dd9f9
;   undefined4 DAT_005dda01
;
; Called Functions:
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004f1cf0
        ;   Label: core_mimic.cpp_CMimic_getCollisionType_FUN_004f1cf0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f1cf3
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f1cf7
    FLD float ptr [EDX + 0x24fc]        ; 004f1cfb
    MOV ECX,dword ptr [EAX]             ; 004f1d01
    FSTP float ptr [EAX + 0x18]         ; 004f1d03
    MOV dword ptr [EAX + 0x1c],0x3f800000 ; 004f1d06
    CMP ECX,0x1                         ; 004f1d0d
    JZ 0x004f1d36                       ; 004f1d10
        ;   XREF to: 004f1d36 (CONDITIONAL_JUMP)  ; LAB_004f1d36
    MOV dword ptr [EAX + 0x14],0x40000000 ; 004f1d12
    LEA EAX,[EDX + 0x2b4]               ; 004f1d19
        ;   Label: LAB_004f1d19
    PUSH EAX                            ; 004f1d1f
    CALL core_motion.cpp_FUN_005035c0   ; 004f1d20
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f1d25
    ADD ESP,0x4                         ; 004f1d28
    CMP EAX,0xc                         ; 004f1d2b
    JNZ 0x004f1d61                      ; 004f1d2e
        ;   XREF to: 004f1d61 (CONDITIONAL_JUMP)  ; LAB_004f1d61
    XOR EAX,EAX                         ; 004f1d30
    ADD ESP,0x8                         ; 004f1d32
    RET                                 ; 004f1d35
    FLD float ptr [EAX + 0x1c]          ; 004f1d36
        ;   Label: LAB_004f1d36
    FLD float ptr [EAX + 0x18]          ; 004f1d39
    MOV dword ptr [EAX + 0x14],0xbdcccccd ; 004f1d3c
    FLD ST1                             ; 004f1d43
    FXCH                                ; 004f1d45
    FADD float ptr [0x005dda01]         ; 004f1d47 | DAT_005dda01
    FXCH                                ; 004f1d4d
    FMUL double ptr [0x005dd9f9]        ; 004f1d4f | DAT_005dd9f9
    FXCH                                ; 004f1d55
    FSTP float ptr [EAX + 0x18]         ; 004f1d57
    FSTP ST1                            ; 004f1d5a
    FSTP float ptr [EAX + 0x1c]         ; 004f1d5c
    JMP 0x004f1d19                      ; 004f1d5f
        ;   XREF to: 004f1d19 (UNCONDITIONAL_JUMP)  ; LAB_004f1d19
    MOV EAX,0x2                         ; 004f1d61
        ;   Label: LAB_004f1d61
    ADD ESP,0x8                         ; 004f1d66
    RET                                 ; 004f1d69

