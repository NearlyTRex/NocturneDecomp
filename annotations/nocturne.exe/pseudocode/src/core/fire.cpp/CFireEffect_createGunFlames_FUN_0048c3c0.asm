; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createGunFlames_FUN_0048c3c0(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler_angles
; int              Stack[0x10]:4   flame_count
; int              Stack[0x14]:4   flame_type
;
; XREF[3]:
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00458a90 at 0045937e
;   core_emitter.cpp_CEmitter_process_FUN_00478790 at 00478bbe
;   core_flamegun.cpp_FUN_0048ea60 at 0048eab3
;
; Referenced Globals:
;   undefined4 DAT_01c62eb8
;   undefined4 DAT_01c62ebc
;
; Called Functions:
;   core_fire.cpp_CGunFlame_activate_FUN_00488280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c3c0
        ;   Label: core_fire.cpp_CFireEffect_createGunFlames_FUN_0048c3c0
    PUSH ESI                            ; 0048c3c1
    PUSH EDI                            ; 0048c3c2
    PUSH EBP                            ; 0048c3c3
    MOV ESI,dword ptr [0x01c62eb8]      ; 0048c3c4 | DAT_01c62eb8
    MOV EBP,dword ptr [ESP + 0x18]      ; 0048c3ca
    MOV EBX,dword ptr [ESP + 0x20]      ; 0048c3ce
    MOV EDI,dword ptr [ESP + 0x24]      ; 0048c3d2
    TEST EBX,EBX                        ; 0048c3d6
    JLE 0x0048c40e                      ; 0048c3d8
        ;   XREF to: 0048c40e (CONDITIONAL_JUMP)  ; LAB_0048c40e
    IMUL EAX,ESI,0x24                   ; 0048c3da
        ;   Label: LAB_0048c3da
    PUSH EDI                            ; 0048c3dd
    MOV EDX,dword ptr [ESP + 0x20]      ; 0048c3de
    PUSH EDX                            ; 0048c3e2
    PUSH EBP                            ; 0048c3e3
    ADD EAX,0x1c62ebc                   ; 0048c3e4
    PUSH EAX                            ; 0048c3e9 | DAT_01c62ebc
    MOV dword ptr [0x01c62eb8],ESI      ; 0048c3ea | DAT_01c62eb8
    CALL core_fire.cpp_CGunFlame_activate_FUN_00488280 ; 0048c3f0
        ;   XREF to: 00488280 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CGunFlame_activate_FUN_00488280(CGunFlame * this_ptr, CVector3f * position, CVector3f * euler_angles, int flame_type)
    MOV ESI,dword ptr [0x01c62eb8]      ; 0048c3f5 | DAT_01c62eb8
    INC ESI                             ; 0048c3fb
    ADD ESP,0x10                        ; 0048c3fc
    CMP ESI,0x1f4                       ; 0048c3ff
    JL 0x0048c409                       ; 0048c405
        ;   XREF to: 0048c409 (CONDITIONAL_JUMP)  ; LAB_0048c409
    XOR ESI,ESI                         ; 0048c407
    DEC EBX                             ; 0048c409
        ;   Label: LAB_0048c409
    TEST EBX,EBX                        ; 0048c40a
    JG 0x0048c3da                       ; 0048c40c
        ;   XREF to: 0048c3da (CONDITIONAL_JUMP)  ; LAB_0048c3da
    MOV dword ptr [0x01c62eb8],ESI      ; 0048c40e | DAT_01c62eb8
        ;   Label: LAB_0048c40e
    POP EBP                             ; 0048c414
    POP EDI                             ; 0048c415
    POP ESI                             ; 0048c416
    POP EBX                             ; 0048c417
    RET                                 ; 0048c418

