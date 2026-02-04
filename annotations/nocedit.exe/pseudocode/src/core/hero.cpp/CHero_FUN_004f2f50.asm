; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_hero_cpp_CHero_FUN_004f2f50(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined1       Stack[-0x30]:1  local_30
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_colonel.cpp_CColonel_process_FUN_0043fa00 at 0043fdf8
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d4034
;   core_haystack.cpp_CHaystack_process_FUN_004f0e40 at 004f1285
;   core_icepick.cpp_CIcePick_process_FUN_004f80b0 at 004f8608
;   core_stranger.cpp_CStranger_FUN_005c5b90 at 005c5de2
;   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 at 005d90c0
;
; Referenced Globals:
;   double DOUBLE_0062ec36 = 5
;   double DOUBLE_0062ec3e = 3
;   double DOUBLE_0062ec46 = 1.04719755116667
;   float FLOAT_0062ec4e = -0.5
;   float FLOAT_0062ec52 = -2
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CLeverClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_event.cpp_FUN_004b18e0
;   core_lever.cpp_CLever_FUN_00505080
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2f50
        ;   Label: core_hero.cpp_CHero_FUN_004f2f50
    PUSH ESI                            ; 004f2f51
    PUSH EDI                            ; 004f2f52
    PUSH EBP                            ; 004f2f53
    MOV EBP,ESP                         ; 004f2f54
    SUB ESP,0x40                        ; 004f2f56
    AND ESP,0xfffffff8                  ; 004f2f59
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f2f5c
    MOV EDX,0x7149f2ca                  ; 004f2f5f
    XOR EDI,EDI                         ; 004f2f64
    ADD EAX,0x20                        ; 004f2f66
    XOR ESI,ESI                         ; 004f2f69
    MOV dword ptr [ESP + 0x38],EDX      ; 004f2f6b
    MOV dword ptr [EAX + 0x1fb88],0x0   ; 004f2f6f
    MOV dword ptr [ESP + 0x34],EAX      ; 004f2f79
    MOV EAX,[0x006810c8]                ; 004f2f7d | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_004f2f7d
    CMP EDI,dword ptr [EAX + 0x14d154]  ; 004f2f82 | g_CDemonSetInstance.actor_list_ptr
    JL 0x004f2fa4                       ; 004f2f88
        ;   XREF to: 004f2fa4 (CONDITIONAL_JUMP)  ; LAB_004f2fa4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f2f8a
    MOV EBX,dword ptr [EAX + 0x1fba8]   ; 004f2f8d
    TEST EBX,EBX                        ; 004f2f93
    JNZ 0x004f30bc                      ; 004f2f95
        ;   XREF to: 004f30bc (CONDITIONAL_JUMP)  ; LAB_004f30bc
    XOR EAX,EAX                         ; 004f2f9b
        ;   Label: LAB_004f2f9b
    MOV ESP,EBP                         ; 004f2f9d
    POP EBP                             ; 004f2f9f
    POP EDI                             ; 004f2fa0
    POP ESI                             ; 004f2fa1
    POP EBX                             ; 004f2fa2
    RET                                 ; 004f2fa3
    MOV EDX,dword ptr [0x02dd3090]      ; 004f2fa4 | g_CLeverClassInfo.name_hash
        ;   Label: LAB_004f2fa4
    PUSH EDX                            ; 004f2faa
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x14d158] ; 004f2fab | g_CDemonSetInstance.actor_list_data[0]
    PUSH ECX                            ; 004f2fb2
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f2fb3
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004f2fb8
    ADD ESP,0x8                         ; 004f2fba
    TEST EAX,EAX                        ; 004f2fbd
    JZ 0x004f30b3                       ; 004f2fbf
        ;   XREF to: 004f30b3 (CONDITIONAL_JUMP)  ; LAB_004f30b3
    ADD EAX,0x20                        ; 004f2fc5
    PUSH EAX                            ; 004f2fc8
    LEA EAX,[ESP + 0x18]                ; 004f2fc9
    PUSH EAX                            ; 004f2fcd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f2fce
    PUSH EAX                            ; 004f2fd1
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004f2fd2
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004f2fd7
    FLD float ptr [ESP + 0x18]          ; 004f2fda
    FABS                                ; 004f2fde
    FCOMP double ptr [0x0062ec36]       ; 004f2fe0 | DOUBLE_0062ec36
    FNSTSW AX                           ; 004f2fe6
    SAHF                                ; 004f2fe8
    JA 0x004f30b3                       ; 004f2fe9
        ;   XREF to: 004f30b3 (CONDITIONAL_JUMP)  ; LAB_004f30b3
    FLD float ptr [ESP + 0x1c]          ; 004f2fef
    FLDZ                                ; 004f2ff3
    FXCH                                ; 004f2ff5
    FSTP double ptr [ESP]               ; 004f2ff7
    FCOMP double ptr [ESP]              ; 004f2ffa
    FNSTSW AX                           ; 004f2ffd
    SAHF                                ; 004f2fff
    JA 0x004f30b3                       ; 004f3000
        ;   XREF to: 004f30b3 (CONDITIONAL_JUMP)  ; LAB_004f30b3
    FLD double ptr [ESP]                ; 004f3006
    FCOMP double ptr [0x0062ec3e]       ; 004f3009 | DOUBLE_0062ec3e
    FNSTSW AX                           ; 004f300f
    SAHF                                ; 004f3011
    JA 0x004f30b3                       ; 004f3012
        ;   XREF to: 004f30b3 (CONDITIONAL_JUMP)  ; LAB_004f30b3
    FLD float ptr [ESP + 0x14]          ; 004f3018
    FABS                                ; 004f301c
    FCOMP double ptr [0x0062ec3e]       ; 004f301e | DOUBLE_0062ec3e
    FNSTSW AX                           ; 004f3024
    SAHF                                ; 004f3026
    JA 0x004f30b3                       ; 004f3027
        ;   XREF to: 004f30b3 (CONDITIONAL_JUMP)  ; LAB_004f30b3
    LEA EAX,[ESP + 0x14]                ; 004f302d
    PUSH EAX                            ; 004f3031
    LEA EAX,[ESP + 0x24]                ; 004f3032
    PUSH EAX                            ; 004f3036
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004f3037
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 004f303c
    FABS                                ; 004f303f
    ADD ESP,0x8                         ; 004f3041
    FCOMP double ptr [0x0062ec46]       ; 004f3044 | DOUBLE_0062ec46
    FNSTSW AX                           ; 004f304a
    SAHF                                ; 004f304c
    JA 0x004f30b3                       ; 004f304d
        ;   XREF to: 004f30b3 (CONDITIONAL_JUMP)  ; LAB_004f30b3
    MOV EDX,dword ptr [ESP + 0x34]      ; 004f304f
    PUSH EDX                            ; 004f3053
    PUSH EBX                            ; 004f3054
    CALL core_lever.cpp_CLever_FUN_00505080 ; 004f3055
        ;   XREF to: 00505080 (UNCONDITIONAL_CALL)  ; int core_lever.cpp_CLever_FUN_00505080(CLever * this_ptr)
    ADD ESP,0x8                         ; 004f305a
    TEST EAX,EAX                        ; 004f305d
    JZ 0x004f30b3                       ; 004f305f
        ;   XREF to: 004f30b3 (CONDITIONAL_JUMP)  ; LAB_004f30b3
    FLD float ptr [ESP + 0x14]          ; 004f3061
    FADD float ptr [0x0062ec4e]         ; 004f3065 | FLOAT_0062ec4e
    FMUL ST0                            ; 004f306b
    FLD float ptr [ESP + 0x1c]          ; 004f306d
    FADD float ptr [0x0062ec52]         ; 004f3071 | FLOAT_0062ec52
    FMUL ST0                            ; 004f3077
    XOR EAX,EAX                         ; 004f3079
    FADDP                               ; 004f307b
    MOV dword ptr [ESP + 0xc],EAX       ; 004f307d
    FSQRT                               ; 004f3081
    MOV ECX,0x3f000000                  ; 004f3083
    MOV EDX,0x40000000                  ; 004f3088
    MOV dword ptr [ESP + 0x8],ECX       ; 004f308d
    MOV dword ptr [ESP + 0x10],EDX      ; 004f3091
    FST float ptr [ESP + 0x3c]          ; 004f3095
    FCOMP float ptr [ESP + 0x38]        ; 004f3099
    FNSTSW AX                           ; 004f309d
    SAHF                                ; 004f309f
    JA 0x004f30b3                       ; 004f30a0
        ;   XREF to: 004f30b3 (CONDITIONAL_JUMP)  ; LAB_004f30b3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f30a2
    MOV dword ptr [EAX + 0x1fba8],EBX   ; 004f30a5
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f30ab
    MOV dword ptr [ESP + 0x38],EAX      ; 004f30af
    INC EDI                             ; 004f30b3
        ;   Label: LAB_004f30b3
    ADD ESI,0x4                         ; 004f30b4
    JMP 0x004f2f7d                      ; 004f30b7
        ;   XREF to: 004f2f7d (UNCONDITIONAL_JUMP)  ; LAB_004f2f7d
    LEA EAX,[EBX + 0x420]               ; 004f30bc
        ;   Label: LAB_004f30bc
    PUSH EAX                            ; 004f30c2
    CALL core_event.cpp_FUN_004b18e0    ; 004f30c3
        ;   XREF to: 004b18e0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_FUN_004b18e0(int * param_1)
    ADD ESP,0x4                         ; 004f30c8
    TEST EAX,EAX                        ; 004f30cb
    JNZ 0x004f2f9b                      ; 004f30cd
        ;   XREF to: 004f2f9b (CONDITIONAL_JUMP)  ; LAB_004f2f9b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f30d3
    MOV dword ptr [EAX + 0xbe38],0x0    ; 004f30d6
    MOV EAX,0x1                         ; 004f30e0
    MOV ESP,EBP                         ; 004f30e5
    POP EBP                             ; 004f30e7
    POP EDI                             ; 004f30e8
    POP ESI                             ; 004f30e9
    POP EBX                             ; 004f30ea
    RET                                 ; 004f30eb

