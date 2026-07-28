; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_explode_FUN_00427ab0(CCharacter *this_ptr,CVector3f *impact_point,float impact_force)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   impact_point
; float            Stack[0xc]:4   impact_force
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00428510 at 00428571
;
; Referenced Globals:
;   float FLOAT_0057a026 = 0.5
;   undefined4 DAT_005b80f0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_charactr.cpp_CCharacter_dismember_FUN_00427b60
;   core_fire.cpp_FUN_0048c0d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427ab0
        ;   Label: core_charactr.cpp_CCharacter_explode_FUN_00427ab0
    SUB ESP,0x3c                        ; 00427ab1
    MOV EBX,dword ptr [ESP + 0x44]      ; 00427ab4
    MOV EDX,ESP                         ; 00427ab8
    PUSH EDX                            ; 00427aba
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00427abb
    PUSH EBX                            ; 00427ac1
    CALL dword ptr [EAX + 0x14]         ; 00427ac2
    LEA EDX,[EAX + 0xc]                 ; 00427ac5
    FLD float ptr [EAX]                 ; 00427ac8
    FADD float ptr [EDX]                ; 00427aca
    ADD ESP,0x8                         ; 00427acc
    FST float ptr [ESP + 0x30]          ; 00427acf
    FLD float ptr [EAX + 0x4]           ; 00427ad3
    FADD float ptr [EDX + 0x4]          ; 00427ad6
    FXCH                                ; 00427ad9
    FLD float ptr [0x0057a026]          ; 00427adb | FLOAT_0057a026
    FXCH                                ; 00427ae1
    FMUL ST1                            ; 00427ae3
    FXCH ST2                            ; 00427ae5
    FST float ptr [ESP + 0x34]          ; 00427ae7
    FMUL ST1                            ; 00427aeb
    FLD float ptr [EAX + 0x8]           ; 00427aed
    FADD float ptr [EDX + 0x8]          ; 00427af0
    LEA EAX,[ESP + 0x18]                ; 00427af3
    FST float ptr [ESP + 0x38]          ; 00427af7
    FMULP ST2                           ; 00427afb
    PUSH EAX                            ; 00427afd
    LEA EAX,[ESP + 0x28]                ; 00427afe
    FXCH ST2                            ; 00427b02
    FSTP float ptr [ESP + 0x1c]         ; 00427b04
    PUSH EAX                            ; 00427b08
    FXCH                                ; 00427b09
    FSTP float ptr [ESP + 0x24]         ; 00427b0b
    PUSH EBX                            ; 00427b0f
    FSTP float ptr [ESP + 0x2c]         ; 00427b10
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00427b14
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00427b19
    PUSH 0x40800000                     ; 00427b1c
    PUSH 0x44bb8000                     ; 00427b21
    LEA EAX,[ESP + 0x2c]                ; 00427b26
    PUSH 0x40000000                     ; 00427b2a
    PUSH EAX                            ; 00427b2f
    MOV EDX,dword ptr [0x005b80f0]      ; 00427b30 | DAT_005b80f0
    PUSH EDX                            ; 00427b36
    CALL core_fire.cpp_FUN_0048c0d0     ; 00427b37
        ;   XREF to: 0048c0d0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0048c0d0()
    ADD ESP,0x14                        ; 00427b3c
    PUSH 0x0                            ; 00427b3f
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00427b41
    PUSH dword ptr [ESP + 0x50]         ; 00427b45
    PUSH ECX                            ; 00427b49
    PUSH EBX                            ; 00427b4a
    CALL core_charactr.cpp_CCharacter_dismember_FUN_00427b60 ; 00427b4b
        ;   XREF to: 00427b60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_00427b60(CCharacter * this_ptr, CVector3f * impact_point, float impact_force, int render_in_background)
    ADD ESP,0x10                        ; 00427b50
    ADD ESP,0x3c                        ; 00427b53
    POP EBX                             ; 00427b56
    RET                                 ; 00427b57

