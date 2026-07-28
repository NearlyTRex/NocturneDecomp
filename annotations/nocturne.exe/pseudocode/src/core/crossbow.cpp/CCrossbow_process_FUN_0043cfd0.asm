; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_crossbow_cpp_CCrossbow_process_FUN_0043cfd0(CWeapon *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_flame.cpp_CFlame_process_FUN_0048d0c0
;   core_flame.cpp_FUN_0048df10
;   core_weapon.cpp_CWeapon_process_FUN_00554030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043cfd0
        ;   Label: core_crossbow.cpp_CCrossbow_process_FUN_0043cfd0
    SUB ESP,0x18                        ; 0043cfd1
    MOV EBX,dword ptr [ESP + 0x20]      ; 0043cfd4
    PUSH dword ptr [ESP + 0x24]         ; 0043cfd8
    PUSH EBX                            ; 0043cfdc
    CALL core_weapon.cpp_CWeapon_process_FUN_00554030 ; 0043cfdd
        ;   XREF to: 00554030 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_00554030(CWeapon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0043cfe2
    LEA EDX,[ESP + 0xc]                 ; 0043cfe5
    PUSH EDX                            ; 0043cfe9
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0043cfea
    PUSH EBX                            ; 0043cff0
    CALL dword ptr [EAX + 0xd8]         ; 0043cff1
    ADD ESP,0x8                         ; 0043cff7
    PUSH EAX                            ; 0043cffa
    LEA EAX,[ESP + 0x4]                 ; 0043cffb
    PUSH EAX                            ; 0043cfff
    PUSH EBX                            ; 0043d000
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0043d001
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA EDX,[EBX + 0x594]               ; 0043d006
    MOV ECX,dword ptr [EAX]             ; 0043d00c
    MOV dword ptr [EDX],ECX             ; 0043d00e
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043d010
    MOV dword ptr [EDX + 0x4],ECX       ; 0043d013
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043d016
    MOV dword ptr [EDX + 0x8],ECX       ; 0043d019
    MOV EDX,dword ptr [EBX + 0x2cc]     ; 0043d01c
    ADD ESP,0xc                         ; 0043d022
    CMP EDX,0x2                         ; 0043d025
    JNZ 0x0043d079                      ; 0043d028
        ;   XREF to: 0043d079 (CONDITIONAL_JUMP)  ; LAB_0043d079
    CMP dword ptr [EBX + 0x560],0x0     ; 0043d02a
    JLE 0x0043d079                      ; 0043d031
        ;   XREF to: 0043d079 (CONDITIONAL_JUMP)  ; LAB_0043d079
    CMP dword ptr [EBX + 0x564],0x5     ; 0043d033
    JNZ 0x0043d079                      ; 0043d03a
        ;   XREF to: 0043d079 (CONDITIONAL_JUMP)  ; LAB_0043d079
    FLD float ptr [EBX + 0x2f8]         ; 0043d03c
    FLDZ                                ; 0043d042
    FCOMPP                              ; 0043d044
    FNSTSW AX                           ; 0043d046
    SAHF                                ; 0043d048
    JC 0x0043d079                       ; 0043d049
        ;   XREF to: 0043d079 (CONDITIONAL_JUMP)  ; LAB_0043d079
    MOV dword ptr [EBX + 0x570],0x1     ; 0043d04b
    LEA EAX,[EBX + 0x574]               ; 0043d055
        ;   Label: LAB_0043d055
    PUSH dword ptr [ESP + 0x24]         ; 0043d05b
    PUSH EAX                            ; 0043d05f
    CALL core_flame.cpp_CFlame_process_FUN_0048d0c0 ; 0043d060
        ;   XREF to: 0048d0c0 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_process_FUN_0048d0c0(CFlame * this_ptr, float delta_time)
    MOV EAX,dword ptr [EBX + 0x570]     ; 0043d065
    ADD ESP,0x8                         ; 0043d06b
    MOV dword ptr [EBX + 0xfc],EAX      ; 0043d06e
    ADD ESP,0x18                        ; 0043d074
    POP EBX                             ; 0043d077
    RET                                 ; 0043d078
    LEA EAX,[EBX + 0x574]               ; 0043d079
        ;   Label: LAB_0043d079
    PUSH EAX                            ; 0043d07f
    CALL core_flame.cpp_FUN_0048df10    ; 0043d080
        ;   XREF to: 0048df10 (UNCONDITIONAL_CALL)  ; undefined core_flame.cpp_FUN_0048df10()
    ADD ESP,0x4                         ; 0043d085
    MOV dword ptr [EBX + 0x570],0x0     ; 0043d088
    JMP 0x0043d055                      ; 0043d092
        ;   XREF to: 0043d055 (UNCONDITIONAL_JUMP)  ; LAB_0043d055

