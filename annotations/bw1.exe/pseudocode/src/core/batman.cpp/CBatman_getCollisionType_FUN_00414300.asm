; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_batman_cpp_CBatman_getCollisionType_FUN_00414300(CBatman *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00414300
        ;   Label: core_batman.cpp_CBatman_getCollisionType_FUN_00414300
    CMP dword ptr [EAX + 0xc308],0x0    ; 00414304
    JZ 0x00414310                       ; 0041430b
        ;   XREF to: 00414310 (CONDITIONAL_JUMP)  ; LAB_00414310
    XOR EAX,EAX                         ; 0041430d
    RET                                 ; 0041430f
    MOV ECX,dword ptr [ESP + 0x8]       ; 00414310
        ;   Label: LAB_00414310
    PUSH ECX                            ; 00414314
    PUSH EAX                            ; 00414315
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0 ; 00414316
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0041431b
    RET                                 ; 0041431e

