; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_CBulletHole_process_FUN_004bfa00(CBulletHole *this_ptr)
;
; Parameters:
; CBulletHole *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 at 004c7021
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bfa00
        ;   Label: core_fire.cpp_CBulletHole_process_FUN_004bfa00
    SUB ESP,0xc                         ; 004bfa01
    MOV EBX,dword ptr [ESP + 0x14]      ; 004bfa04
    MOV EDX,dword ptr [EBX + 0x10]      ; 004bfa08
    TEST EDX,EDX                        ; 004bfa0b
    JNZ 0x004bfa14                      ; 004bfa0d
        ;   XREF to: 004bfa14 (CONDITIONAL_JUMP)  ; LAB_004bfa14
    ADD ESP,0xc                         ; 004bfa0f
        ;   Label: LAB_004bfa0f
    POP EBX                             ; 004bfa12
    RET                                 ; 004bfa13
    LEA EAX,[EBX + 0x24]                ; 004bfa14
        ;   Label: LAB_004bfa14
    PUSH EAX                            ; 004bfa17
    LEA EAX,[ESP + 0x4]                 ; 004bfa18
    PUSH EAX                            ; 004bfa1c
    PUSH EDX                            ; 004bfa1d
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004bfa1e
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004bfa23
    CMP EBX,EAX                         ; 004bfa26
    JZ 0x004bfa0f                       ; 004bfa28
        ;   XREF to: 004bfa0f (CONDITIONAL_JUMP)  ; LAB_004bfa0f
    MOV EDX,dword ptr [EAX]             ; 004bfa2a
    MOV dword ptr [EBX],EDX             ; 004bfa2c
    MOV EDX,dword ptr [EAX + 0x4]       ; 004bfa2e
    MOV dword ptr [EBX + 0x4],EDX       ; 004bfa31
    MOV EDX,dword ptr [EAX + 0x8]       ; 004bfa34
    MOV dword ptr [EBX + 0x8],EDX       ; 004bfa37
    ADD ESP,0xc                         ; 004bfa3a
    POP EBX                             ; 004bfa3d
    RET                                 ; 004bfa3e

