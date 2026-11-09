; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createGunFlames_FUN_004b6f80(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler_angles
; int              Stack[0x10]:4   flame_count
; int              Stack[0x14]:4   flame_type
;
; XREF[3]:
;   core_dracbrid.cpp_FUN_0047b510 at 0047bf28
;   core_emitter.cpp_FUN_0049f310 at 0049f95a
;   core_flamegun.cpp_FUN_004b9660 at 004b96ca
;
; Referenced Globals:
;   undefined4 DAT_01cb5820
;   undefined4 DAT_01cb5824
;
; Called Functions:
;   core_fire.cpp_FUN_004b2b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6f80
        ;   Label: core_fire.cpp_CFireEffect_createGunFlames_FUN_004b6f80
    PUSH ESI                            ; 004b6f81
    PUSH EDI                            ; 004b6f82
    PUSH EBP                            ; 004b6f83
    MOV ESI,dword ptr [0x01cb5820]      ; 004b6f84 | DAT_01cb5820
    MOV EBP,dword ptr [ESP + 0x18]      ; 004b6f8a
    MOV EBX,dword ptr [ESP + 0x20]      ; 004b6f8e
    MOV EDI,dword ptr [ESP + 0x24]      ; 004b6f92
    TEST EBX,EBX                        ; 004b6f96
    JLE 0x004b6fce                      ; 004b6f98
        ;   XREF to: 004b6fce (CONDITIONAL_JUMP)  ; LAB_004b6fce
    IMUL EAX,ESI,0x24                   ; 004b6f9a
        ;   Label: LAB_004b6f9a
    PUSH EDI                            ; 004b6f9d
    MOV EDX,dword ptr [ESP + 0x20]      ; 004b6f9e
    PUSH EDX                            ; 004b6fa2
    PUSH EBP                            ; 004b6fa3
    ADD EAX,0x1cb5824                   ; 004b6fa4
    PUSH EAX                            ; 004b6fa9 | DAT_01cb5824
    MOV dword ptr [0x01cb5820],ESI      ; 004b6faa | DAT_01cb5820
    CALL core_fire.cpp_FUN_004b2b50     ; 004b6fb0
        ;   XREF to: 004b2b50 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004b2b50()
    MOV ESI,dword ptr [0x01cb5820]      ; 004b6fb5 | DAT_01cb5820
    INC ESI                             ; 004b6fbb
    ADD ESP,0x10                        ; 004b6fbc
    CMP ESI,0x1f4                       ; 004b6fbf
    JL 0x004b6fc9                       ; 004b6fc5
        ;   XREF to: 004b6fc9 (CONDITIONAL_JUMP)  ; LAB_004b6fc9
    XOR ESI,ESI                         ; 004b6fc7
    DEC EBX                             ; 004b6fc9
        ;   Label: LAB_004b6fc9
    TEST EBX,EBX                        ; 004b6fca
    JG 0x004b6f9a                       ; 004b6fcc
        ;   XREF to: 004b6f9a (CONDITIONAL_JUMP)  ; LAB_004b6f9a
    MOV dword ptr [0x01cb5820],ESI      ; 004b6fce | DAT_01cb5820
        ;   Label: LAB_004b6fce
    POP EBP                             ; 004b6fd4
    POP EDI                             ; 004b6fd5
    POP ESI                             ; 004b6fd6
    POP EBX                             ; 004b6fd7
    RET                                 ; 004b6fd8

