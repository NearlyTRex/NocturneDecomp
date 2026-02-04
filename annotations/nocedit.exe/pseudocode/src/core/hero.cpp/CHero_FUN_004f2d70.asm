; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_hero_cpp_CHero_FUN_004f2d70(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined1       Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_colonel.cpp_CColonel_process_FUN_0043fa00 at 0043fdc6
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d3fd9
;   core_haystack.cpp_CHaystack_process_FUN_004f0e40 at 004f1253
;   core_icepick.cpp_CIcePick_process_FUN_004f80b0 at 004f85d6
;   core_stranger.cpp_CStranger_FUN_005c5b90 at 005c5bff
;   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 at 005d908e
;
; Referenced Globals:
;   double DOUBLE_0062ec26 = 5
;   double DOUBLE_0062ec2e = 4
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CDoorClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_door.cpp_CDoor_getMoveType_FUN_00481070
;   core_door.cpp_FUN_0047fcf0
;   core_event.cpp_FUN_004b18e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2d70
        ;   Label: core_hero.cpp_CHero_FUN_004f2d70
    PUSH ESI                            ; 004f2d71
    PUSH EDI                            ; 004f2d72
    PUSH EBP                            ; 004f2d73
    MOV EBP,ESP                         ; 004f2d74
    SUB ESP,0x20                        ; 004f2d76
    AND ESP,0xfffffff8                  ; 004f2d79
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f2d7c
    XOR ESI,ESI                         ; 004f2d7f
    LEA EDI,[EAX + 0x20]                ; 004f2d81
    MOV dword ptr [ESP + 0x1c],ESI      ; 004f2d84
    MOV dword ptr [EAX + 0x1fb9c],0x0   ; 004f2d88
    MOV EAX,[0x006810c8]                ; 004f2d92 | g_CDemonSetPtr
        ;   Label: LAB_004f2d92
    CMP ESI,dword ptr [EAX + 0x14d154]  ; 004f2d97 | g_CDemonSetInstance.actor_list_ptr
    JL 0x004f2db6                       ; 004f2d9d
        ;   XREF to: 004f2db6 (CONDITIONAL_JUMP)  ; LAB_004f2db6
    XOR EAX,EAX                         ; 004f2d9f
    MOV ESP,EBP                         ; 004f2da1
    POP EBP                             ; 004f2da3
    POP EDI                             ; 004f2da4
    POP ESI                             ; 004f2da5
    POP EBX                             ; 004f2da6
    RET                                 ; 004f2da7
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004f2da8
        ;   Label: LAB_004f2da8
    ADD EDX,0x4                         ; 004f2dac
    INC ESI                             ; 004f2daf
    MOV dword ptr [ESP + 0x1c],EDX      ; 004f2db0
    JMP 0x004f2d92                      ; 004f2db4
        ;   XREF to: 004f2d92 (UNCONDITIONAL_JUMP)  ; LAB_004f2d92
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004f2db6
        ;   Label: LAB_004f2db6
    MOV EBX,dword ptr [0x02c14d14]      ; 004f2dba | g_CDoorClassInfo.name_hash
    ADD EAX,EDX                         ; 004f2dc0
    PUSH EBX                            ; 004f2dc2
    MOV ECX,dword ptr [EAX + 0x14d158]  ; 004f2dc3 | g_CDemonSetInstance.actor_list_data[0]
    PUSH ECX                            ; 004f2dc9
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f2dca
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004f2dcf
    ADD ESP,0x8                         ; 004f2dd1
    TEST EAX,EAX                        ; 004f2dd4
    JZ 0x004f2da8                       ; 004f2dd6
        ;   XREF to: 004f2da8 (CONDITIONAL_JUMP)  ; LAB_004f2da8
    CMP dword ptr [EAX + 0x2e0],0x0     ; 004f2dd8
    JNZ 0x004f2da8                      ; 004f2ddf
        ;   XREF to: 004f2da8 (CONDITIONAL_JUMP)  ; LAB_004f2da8
    LEA EAX,[EBX + 0x9bc]               ; 004f2de1
    FLD float ptr [EDI]                 ; 004f2de7
    FSUB float ptr [EAX]                ; 004f2de9
    FSTP float ptr [ESP]                ; 004f2deb
    FLD float ptr [EDI + 0x4]           ; 004f2dee
    FSUB float ptr [EAX + 0x4]          ; 004f2df1
    FSTP float ptr [ESP + 0x4]          ; 004f2df4
    FLD float ptr [EDI + 0x8]           ; 004f2df8
    FSUB float ptr [EAX + 0x8]          ; 004f2dfb
    LEA EAX,[EBX + 0x20]                ; 004f2dfe
    PUSH EAX                            ; 004f2e01
    LEA EAX,[ESP + 0x10]                ; 004f2e02
    PUSH EAX                            ; 004f2e06
    MOV EDX,dword ptr [EBP + 0x14]      ; 004f2e07
    PUSH EDX                            ; 004f2e0a
    FSTP float ptr [ESP + 0x14]         ; 004f2e0b
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004f2e0f
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    FLD float ptr [EAX + 0x8]           ; 004f2e14
    FLDZ                                ; 004f2e17
    ADD ESP,0xc                         ; 004f2e19
    FCOMPP                              ; 004f2e1c
    FNSTSW AX                           ; 004f2e1e
    SAHF                                ; 004f2e20
    JNC 0x004f2da8                      ; 004f2e21
        ;   XREF to: 004f2da8 (CONDITIONAL_JUMP)  ; LAB_004f2da8
    FLD float ptr [ESP + 0x4]           ; 004f2e23
    FABS                                ; 004f2e27
    FCOMP double ptr [0x0062ec26]       ; 004f2e29 | DOUBLE_0062ec26
    FNSTSW AX                           ; 004f2e2f
    SAHF                                ; 004f2e31
    JA 0x004f2da8                       ; 004f2e32
        ;   XREF to: 004f2da8 (CONDITIONAL_JUMP)  ; LAB_004f2da8
    FLD float ptr [ESP]                 ; 004f2e38
    FMUL ST0                            ; 004f2e3b
    FLD float ptr [ESP + 0x8]           ; 004f2e3d
    FMUL ST0                            ; 004f2e41
    FADDP                               ; 004f2e43
    FSQRT                               ; 004f2e45
    XOR ECX,ECX                         ; 004f2e47
    MOV dword ptr [ESP + 0x4],ECX       ; 004f2e49
    FCOMP double ptr [0x0062ec2e]       ; 004f2e4d | DOUBLE_0062ec2e
    FNSTSW AX                           ; 004f2e53
    SAHF                                ; 004f2e55
    JNC 0x004f2da8                      ; 004f2e56
        ;   XREF to: 004f2da8 (CONDITIONAL_JUMP)  ; LAB_004f2da8
    LEA EAX,[EBX + 0x478]               ; 004f2e5c
    PUSH EAX                            ; 004f2e62
    CALL core_event.cpp_FUN_004b18e0    ; 004f2e63
        ;   XREF to: 004b18e0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_FUN_004b18e0(int * param_1)
    ADD ESP,0x4                         ; 004f2e68
    TEST EAX,EAX                        ; 004f2e6b
    JZ 0x004f2e7b                       ; 004f2e6d
        ;   XREF to: 004f2e7b (CONDITIONAL_JUMP)  ; LAB_004f2e7b
    MOV EAX,0x1                         ; 004f2e6f
    MOV ESP,EBP                         ; 004f2e74
    POP EBP                             ; 004f2e76
    POP EDI                             ; 004f2e77
    POP ESI                             ; 004f2e78
    POP EBX                             ; 004f2e79
    RET                                 ; 004f2e7a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f2e7b
        ;   Label: LAB_004f2e7b
    PUSH EAX                            ; 004f2e7e
    PUSH EBX                            ; 004f2e7f
    CALL core_door.cpp_CDoor_getMoveType_FUN_00481070 ; 004f2e80
        ;   XREF to: 00481070 (UNCONDITIONAL_CALL)  ; int core_door.cpp_CDoor_getMoveType_FUN_00481070(CDoor * this_ptr)
    ADD ESP,0x8                         ; 004f2e85
    MOV dword ptr [ESP + 0x18],EAX      ; 004f2e88
    TEST EAX,EAX                        ; 004f2e8c
    JZ 0x004f2da8                       ; 004f2e8e
        ;   XREF to: 004f2da8 (CONDITIONAL_JUMP)  ; LAB_004f2da8
    CMP EAX,0x1                         ; 004f2e94
    JNZ 0x004f2ead                      ; 004f2e97
        ;   XREF to: 004f2ead (CONDITIONAL_JUMP)  ; LAB_004f2ead
    PUSH EBX                            ; 004f2e99
    CALL core_door.cpp_FUN_0047fcf0     ; 004f2e9a
        ;   XREF to: 0047fcf0 (UNCONDITIONAL_CALL)  ; void core_door.cpp_FUN_0047fcf0()
    ADD ESP,0x4                         ; 004f2e9f
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f2ea2
    MOV ESP,EBP                         ; 004f2ea6
    POP EBP                             ; 004f2ea8
    POP EDI                             ; 004f2ea9
    POP ESI                             ; 004f2eaa
    POP EBX                             ; 004f2eab
    RET                                 ; 004f2eac
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f2ead
        ;   Label: LAB_004f2ead
    MOV dword ptr [EAX + 0x1fb9c],EBX   ; 004f2eb0
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f2eb6
    MOV ESP,EBP                         ; 004f2eba
    POP EBP                             ; 004f2ebc
    POP EDI                             ; 004f2ebd
    POP ESI                             ; 004f2ebe
    POP EBX                             ; 004f2ebf
    RET                                 ; 004f2ec0

