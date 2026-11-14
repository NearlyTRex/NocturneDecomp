; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createRing_FUN_004a3f70(CFireEffect *this_ptr,undefined4 *param_2,undefined4 param_3,undefined4 param_4)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
; undefined4       Stack[0x10]:4   param_4
;
; XREF[2]:
;   core_fire.cpp_CToss_process_FUN_0049d090 at 0049d310
;   core_firestff.cpp_CFirestaff_fire_FUN_004a4d00 at 004a4d52
;
; Referenced Globals:
;   undefined4 DAT_01d0bb90
;
; Called Functions:
;   core_fire.cpp_CRing_activate_FUN_0049fce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3f70
        ;   Label: core_fire.cpp_CFireEffect_createRing_FUN_004a3f70
    PUSH ESI                            ; 004a3f71
    PUSH EBP                            ; 004a3f72
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004a3f73
    PUSH EDX                            ; 004a3f77
    MOV EDX,dword ptr [0x01d0bb90]      ; 004a3f78 | DAT_01d0bb90
    MOV EAX,EDX                         ; 004a3f7e
    SHL EAX,0x4                         ; 004a3f80
    SUB EAX,EDX                         ; 004a3f83
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004a3f85
    SHL EAX,0x3                         ; 004a3f89
    MOV EBX,dword ptr [ESP + 0x18]      ; 004a3f8c
    ADD EAX,EDX                         ; 004a3f90
    PUSH ECX                            ; 004a3f92
    SHL EAX,0x2                         ; 004a3f93
    PUSH EBX                            ; 004a3f96
    ADD EAX,0x1d0bb94                   ; 004a3f97
    PUSH EAX                            ; 004a3f9c
    CALL core_fire.cpp_CRing_activate_FUN_0049fce0 ; 004a3f9d
        ;   XREF to: 0049fce0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CRing_activate_FUN_0049fce0(CRing * this_ptr, undefined4 * param_2, undefined4 param_3, undefined4 param_4)
    MOV ESI,dword ptr [0x01d0bb90]      ; 004a3fa2 | DAT_01d0bb90
    INC ESI                             ; 004a3fa8
    ADD ESP,0x10                        ; 004a3fa9
    MOV dword ptr [0x01d0bb90],ESI      ; 004a3fac | DAT_01d0bb90
    CMP ESI,0xa                         ; 004a3fb2
    JGE 0x004a3fbb                      ; 004a3fb5
        ;   XREF to: 004a3fbb (CONDITIONAL_JUMP)  ; LAB_004a3fbb
    POP EBP                             ; 004a3fb7
    POP ESI                             ; 004a3fb8
    POP EBX                             ; 004a3fb9
    RET                                 ; 004a3fba
    XOR EBP,EBP                         ; 004a3fbb
        ;   Label: LAB_004a3fbb
    MOV dword ptr [0x01d0bb90],EBP      ; 004a3fbd | DAT_01d0bb90
    POP EBP                             ; 004a3fc3
    POP ESI                             ; 004a3fc4
    POP EBX                             ; 004a3fc5
    RET                                 ; 004a3fc6

