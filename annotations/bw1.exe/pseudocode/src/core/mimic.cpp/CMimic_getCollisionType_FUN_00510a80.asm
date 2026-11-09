; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_mimic_cpp_CMimic_getCollisionType_FUN_00510a80(CMimic *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Referenced Globals:
;   undefined4 DAT_005e8a80
;   undefined4 DAT_005e8a88
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00510a80
        ;   Label: core_mimic.cpp_CMimic_getCollisionType_FUN_00510a80
    MOV EDX,dword ptr [ESP + 0xc]       ; 00510a83
    MOV EAX,dword ptr [ESP + 0x10]      ; 00510a87
    FLD float ptr [EDX + 0x2490]        ; 00510a8b
    MOV ECX,dword ptr [EAX]             ; 00510a91
    FSTP float ptr [EAX + 0x18]         ; 00510a93
    MOV dword ptr [EAX + 0x1c],0x3f800000 ; 00510a96
    CMP ECX,0x1                         ; 00510a9d
    JZ 0x00510ac6                       ; 00510aa0
        ;   XREF to: 00510ac6 (CONDITIONAL_JUMP)  ; LAB_00510ac6
    MOV dword ptr [EAX + 0x14],0x40000000 ; 00510aa2
    LEA EAX,[EDX + 0x158]               ; 00510aa9
        ;   Label: LAB_00510aa9
    PUSH EAX                            ; 00510aaf
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00510ab0
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00510ab5
    ADD ESP,0x4                         ; 00510ab8
    CMP EAX,0xc                         ; 00510abb
    JNZ 0x00510af1                      ; 00510abe
        ;   XREF to: 00510af1 (CONDITIONAL_JUMP)  ; LAB_00510af1
    XOR EAX,EAX                         ; 00510ac0
    ADD ESP,0x8                         ; 00510ac2
    RET                                 ; 00510ac5
    FLD float ptr [EAX + 0x1c]          ; 00510ac6
        ;   Label: LAB_00510ac6
    FLD float ptr [EAX + 0x18]          ; 00510ac9
    MOV dword ptr [EAX + 0x14],0xbdcccccd ; 00510acc
    FLD ST1                             ; 00510ad3
    FXCH                                ; 00510ad5
    FADD float ptr [0x005e8a88]         ; 00510ad7 | DAT_005e8a88
    FXCH                                ; 00510add
    FMUL double ptr [0x005e8a80]        ; 00510adf | DAT_005e8a80
    FXCH                                ; 00510ae5
    FSTP float ptr [EAX + 0x18]         ; 00510ae7
    FSTP ST1                            ; 00510aea
    FSTP float ptr [EAX + 0x1c]         ; 00510aec
    JMP 0x00510aa9                      ; 00510aef
        ;   XREF to: 00510aa9 (UNCONDITIONAL_JUMP)  ; LAB_00510aa9
    MOV EAX,0x2                         ; 00510af1
        ;   Label: LAB_00510af1
    ADD ESP,0x8                         ; 00510af6
    RET                                 ; 00510af9

