; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_crossbow_cpp_CCrossbow_process_FUN_00448d30(CCrossbow *this_ptr,float delta_time)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_flame.cpp_FUN_004c9c00
;   core_flame.cpp_FUN_004caa70
;   core_weapon.cpp_CWeapon_process_FUN_005ee110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448d30
        ;   Label: core_crossbow.cpp_CCrossbow_process_FUN_00448d30
    SUB ESP,0x18                        ; 00448d31
    MOV EBX,dword ptr [ESP + 0x20]      ; 00448d34
    PUSH dword ptr [ESP + 0x24]         ; 00448d38
    PUSH EBX                            ; 00448d3c
    CALL core_weapon.cpp_CWeapon_process_FUN_005ee110 ; 00448d3d
        ;   XREF to: 005ee110 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_005ee110(CWeapon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00448d42
    LEA EDX,[ESP + 0xc]                 ; 00448d45
    PUSH EDX                            ; 00448d49
    MOV EAX,dword ptr [EBX + 0x154]     ; 00448d4a
    PUSH EBX                            ; 00448d50
    CALL dword ptr [EAX + 0xf4]         ; 00448d51
    ADD ESP,0x8                         ; 00448d57
    PUSH EAX                            ; 00448d5a
    LEA EAX,[ESP + 0x4]                 ; 00448d5b
    PUSH EAX                            ; 00448d5f
    PUSH EBX                            ; 00448d60
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00448d61
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA EDX,[EBX + 0x59c]               ; 00448d66
    MOV ECX,dword ptr [EAX]             ; 00448d6c
    MOV dword ptr [EDX],ECX             ; 00448d6e
    MOV ECX,dword ptr [EAX + 0x4]       ; 00448d70
    MOV dword ptr [EDX + 0x4],ECX       ; 00448d73
    MOV ECX,dword ptr [EAX + 0x8]       ; 00448d76
    MOV dword ptr [EDX + 0x8],ECX       ; 00448d79
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 00448d7c
    ADD ESP,0xc                         ; 00448d82
    CMP EDX,0x2                         ; 00448d85
    JNZ 0x00448dd9                      ; 00448d88
        ;   XREF to: 00448dd9 (CONDITIONAL_JUMP)  ; LAB_00448dd9
    CMP dword ptr [EBX + 0x568],0x0     ; 00448d8a
    JLE 0x00448dd9                      ; 00448d91
        ;   XREF to: 00448dd9 (CONDITIONAL_JUMP)  ; LAB_00448dd9
    CMP dword ptr [EBX + 0x56c],0x5     ; 00448d93
    JNZ 0x00448dd9                      ; 00448d9a
        ;   XREF to: 00448dd9 (CONDITIONAL_JUMP)  ; LAB_00448dd9
    FLD float ptr [EBX + 0x300]         ; 00448d9c
    FLDZ                                ; 00448da2
    FCOMPP                              ; 00448da4
    FNSTSW AX                           ; 00448da6
    SAHF                                ; 00448da8
    JC 0x00448dd9                       ; 00448da9
        ;   XREF to: 00448dd9 (CONDITIONAL_JUMP)  ; LAB_00448dd9
    MOV dword ptr [EBX + 0x578],0x1     ; 00448dab
    LEA EAX,[EBX + 0x57c]               ; 00448db5
        ;   Label: LAB_00448db5
    PUSH dword ptr [ESP + 0x24]         ; 00448dbb
    PUSH EAX                            ; 00448dbf
    CALL core_flame.cpp_FUN_004c9c00    ; 00448dc0
        ;   XREF to: 004c9c00 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_FUN_004c9c00()
    MOV EAX,dword ptr [EBX + 0x578]     ; 00448dc5
    ADD ESP,0x8                         ; 00448dcb
    MOV dword ptr [EBX + 0xfc],EAX      ; 00448dce
    ADD ESP,0x18                        ; 00448dd4
    POP EBX                             ; 00448dd7
    RET                                 ; 00448dd8
    LEA EAX,[EBX + 0x57c]               ; 00448dd9
        ;   Label: LAB_00448dd9
    PUSH EAX                            ; 00448ddf
    CALL core_flame.cpp_FUN_004caa70    ; 00448de0
        ;   XREF to: 004caa70 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_FUN_004caa70()
    ADD ESP,0x4                         ; 00448de5
    MOV dword ptr [EBX + 0x578],0x0     ; 00448de8
    JMP 0x00448db5                      ; 00448df2
        ;   XREF to: 00448db5 (UNCONDITIONAL_JUMP)  ; LAB_00448db5

