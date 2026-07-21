; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletHole_process_FUN_00482e90(undefined4 *param_1)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0048a390 at 0048a4f1
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482e90
        ;   Label: core_fire.cpp_CBulletHole_process_FUN_00482e90
    SUB ESP,0xc                         ; 00482e91
    MOV EBX,dword ptr [ESP + 0x14]      ; 00482e94
    MOV EDX,dword ptr [EBX + 0x10]      ; 00482e98
    TEST EDX,EDX                        ; 00482e9b
    JNZ 0x00482ea4                      ; 00482e9d
        ;   XREF to: 00482ea4 (CONDITIONAL_JUMP)  ; LAB_00482ea4
    ADD ESP,0xc                         ; 00482e9f
        ;   Label: LAB_00482e9f
    POP EBX                             ; 00482ea2
    RET                                 ; 00482ea3
    LEA EAX,[EBX + 0x24]                ; 00482ea4
        ;   Label: LAB_00482ea4
    PUSH EAX                            ; 00482ea7
    LEA EAX,[ESP + 0x4]                 ; 00482ea8
    PUSH EAX                            ; 00482eac
    PUSH EDX                            ; 00482ead
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00482eae
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00482eb3
    CMP EBX,EAX                         ; 00482eb6
    JZ 0x00482e9f                       ; 00482eb8
        ;   XREF to: 00482e9f (CONDITIONAL_JUMP)  ; LAB_00482e9f
    MOV EDX,dword ptr [EAX]             ; 00482eba
    MOV dword ptr [EBX],EDX             ; 00482ebc
    MOV EDX,dword ptr [EAX + 0x4]       ; 00482ebe
    MOV dword ptr [EBX + 0x4],EDX       ; 00482ec1
    MOV EDX,dword ptr [EAX + 0x8]       ; 00482ec4
    MOV dword ptr [EBX + 0x8],EDX       ; 00482ec7
    ADD ESP,0xc                         ; 00482eca
    POP EBX                             ; 00482ecd
    RET                                 ; 00482ece

