; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_buildActorTypeLists_FUN_00534820(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_004fc4c0 at 004fc512
;   core_mission.cpp_FUN_004fc820 at 004fc866
;
; Referenced Globals:
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 g_CTriggerClassInfo.name_hash
;   undefined4 g_CWayPointClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534820
        ;   Label: core_set.cpp_CDemonSet_buildActorTypeLists_FUN_00534820
    PUSH ESI                            ; 00534821
    PUSH EDI                            ; 00534822
    PUSH EBP                            ; 00534823
    MOV EBX,dword ptr [ESP + 0x14]      ; 00534824
    MOV dword ptr [EBX + 0x150fec],0x0  ; 00534828
    MOV dword ptr [EBX + 0x152f30],0x0  ; 00534832
    MOV dword ptr [EBX + 0x154e74],0x0  ; 0053483c
    MOV dword ptr [EBX + 0x158cfc],0x0  ; 00534846
    MOV EDX,dword ptr [EBX + 0x14d164]  ; 00534850
    MOV dword ptr [EBX + 0x14f0a8],0x0  ; 00534856
    XOR EBP,EBP                         ; 00534860
    TEST EDX,EDX                        ; 00534862
    JLE 0x0053492a                      ; 00534864
        ;   XREF to: 0053492a (CONDITIONAL_JUMP)  ; LAB_0053492a
    MOV EDI,EBX                         ; 0053486a
    MOV ESI,dword ptr [EDI + 0x14d168]  ; 0053486c
        ;   Label: LAB_0053486c
    CMP dword ptr [ESI + 0xfc],0x0      ; 00534872
    JNZ 0x00534884                      ; 00534879
        ;   XREF to: 00534884 (CONDITIONAL_JUMP)  ; LAB_00534884
    CMP dword ptr [ESI + 0xf8],0x0      ; 0053487b
    JZ 0x00534897                       ; 00534882
        ;   XREF to: 00534897 (CONDITIONAL_JUMP)  ; LAB_00534897
    MOV EAX,dword ptr [EBX + 0x158cfc]  ; 00534884
        ;   Label: LAB_00534884
    MOV dword ptr [EBX + EAX*0x4 + 0x158d00],ESI ; 0053488a
    INC dword ptr [EBX + 0x158cfc]      ; 00534891
    MOV EAX,[0x007bdc94]                ; 00534897 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_00534897
    PUSH EAX                            ; 0053489c
    PUSH ESI                            ; 0053489d
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0053489e
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,dword ptr [EBX + 0x14f0a8]  ; 005348a3
    MOV dword ptr [EBX + EDX*0x4 + 0x14f0ac],EAX ; 005348a9
    MOV EAX,dword ptr [EBX + 0x14f0a8]  ; 005348b0
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x14f0ac] ; 005348b6
    ADD ESP,0x8                         ; 005348bd
    TEST EDX,EDX                        ; 005348c0
    JZ 0x0053492f                       ; 005348c2
        ;   XREF to: 0053492f (CONDITIONAL_JUMP)  ; LAB_0053492f
    MOV EAX,[0x01c264e0]                ; 005348c4 | g_CEnemyClassInfo.name_hash
    MOV EDX,dword ptr [EBX + 0x14f0a8]  ; 005348c9
    PUSH EAX                            ; 005348cf
    INC EDX                             ; 005348d0
    PUSH ESI                            ; 005348d1
    MOV dword ptr [EBX + 0x14f0a8],EDX  ; 005348d2
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 005348d8
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,dword ptr [EBX + 0x150fec]  ; 005348dd
    MOV dword ptr [EBX + EDX*0x4 + 0x150ff0],EAX ; 005348e3
    MOV EAX,dword ptr [EBX + 0x150fec]  ; 005348ea
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x150ff0] ; 005348f0
    ADD ESP,0x8                         ; 005348f7
    TEST ECX,ECX                        ; 005348fa
    JZ 0x00534918                       ; 005348fc
        ;   XREF to: 00534918 (CONDITIONAL_JUMP)  ; LAB_00534918
    INC EAX                             ; 005348fe
    MOV dword ptr [EBX + 0x150fec],EAX  ; 005348ff
    MOV EAX,dword ptr [EBX + 0x152f30]  ; 00534905
        ;   Label: LAB_00534905
    MOV dword ptr [EBX + EAX*0x4 + 0x152f34],ESI ; 0053490b
    INC dword ptr [EBX + 0x152f30]      ; 00534912
    INC EBP                             ; 00534918
        ;   Label: LAB_00534918
    MOV ECX,dword ptr [EBX + 0x14d164]  ; 00534919
    ADD EDI,0x4                         ; 0053491f
    CMP EBP,ECX                         ; 00534922
    JL 0x0053486c                       ; 00534924
        ;   XREF to: 0053486c (CONDITIONAL_JUMP)  ; LAB_0053486c
    POP EBP                             ; 0053492a
        ;   Label: LAB_0053492a
    POP EDI                             ; 0053492b
    POP ESI                             ; 0053492c
    POP EBX                             ; 0053492d
    RET                                 ; 0053492e
    MOV ECX,dword ptr [0x02661adc]      ; 0053492f | g_CWayPointClassInfo.name_hash
        ;   Label: LAB_0053492f
    PUSH ECX                            ; 00534935
    PUSH ESI                            ; 00534936
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00534937
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,dword ptr [EBX + 0x154e74]  ; 0053493c
    MOV dword ptr [EBX + EDX*0x4 + 0x154e78],EAX ; 00534942
    MOV EAX,dword ptr [EBX + 0x154e74]  ; 00534949
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x154e78] ; 0053494f
    ADD ESP,0x8                         ; 00534956
    TEST EDX,EDX                        ; 00534959
    JZ 0x00534966                       ; 0053495b
        ;   XREF to: 00534966 (CONDITIONAL_JUMP)  ; LAB_00534966
    LEA ECX,[EAX + 0x1]                 ; 0053495d
    MOV dword ptr [EBX + 0x154e74],ECX  ; 00534960
    MOV EAX,[0x02653628]                ; 00534966 | g_CTriggerClassInfo.name_hash
        ;   Label: LAB_00534966
    PUSH EAX                            ; 0053496b
    PUSH ESI                            ; 0053496c
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0053496d
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00534972
    TEST EAX,EAX                        ; 00534975
    JZ 0x00534918                       ; 00534977
        ;   XREF to: 00534918 (CONDITIONAL_JUMP)  ; LAB_00534918
    CMP dword ptr [EAX + 0x2d0],0x4     ; 00534979
    JNZ 0x00534918                      ; 00534980
        ;   XREF to: 00534918 (CONDITIONAL_JUMP)  ; LAB_00534918
    CMP dword ptr [EAX + 0x460],0x0     ; 00534982
    JZ 0x00534918                       ; 00534989
        ;   XREF to: 00534918 (CONDITIONAL_JUMP)  ; LAB_00534918
    JMP 0x00534905                      ; 0053498b
        ;   XREF to: 00534905 (UNCONDITIONAL_JUMP)  ; LAB_00534905

