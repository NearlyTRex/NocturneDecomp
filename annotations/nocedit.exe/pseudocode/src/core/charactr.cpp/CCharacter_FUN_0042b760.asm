; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_FUN_0042b760(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined1       Stack[-0x28]:1  local_28
; undefined1       Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[3]:
;   core_bride.cpp_CBride_process_FUN_00423a30 at 004244b1
;   core_ghoul.cpp_CGhoul_FUN_004e6600 at 004e80ab
;   core_zombie.cpp_CZombie_process_FUN_005f9470 at 005f9f83
;
; Referenced Globals:
;   CGore* g_CGorePtr = 02d83364
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_gore.cpp_FUN_004edaa0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b760
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042b760
    SUB ESP,0x30                        ; 0042b761
    MOV EBX,dword ptr [ESP + 0x38]      ; 0042b764
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042b768
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042b76c
    JZ 0x0042b77b                       ; 0042b774
        ;   XREF to: 0042b77b (CONDITIONAL_JUMP)  ; LAB_0042b77b
    ADD ESP,0x30                        ; 0042b776
        ;   Label: LAB_0042b776
    POP EBX                             ; 0042b779
    RET                                 ; 0042b77a
    PUSH dword ptr [ESP + 0x44]         ; 0042b77b
        ;   Label: LAB_0042b77b
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 0042b77f
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 0042b784
    TEST EAX,EAX                        ; 0042b787
    JZ 0x0042b776                       ; 0042b789
        ;   XREF to: 0042b776 (CONDITIONAL_JUMP)  ; LAB_0042b776
    PUSH EDI                            ; 0042b78b
    PUSH ESI                            ; 0042b78c
    MOV ECX,dword ptr [ESP + 0x48]      ; 0042b78d
    PUSH ECX                            ; 0042b791
    LEA EAX,[ESP + 0x18]                ; 0042b792
    PUSH EAX                            ; 0042b796
    LEA EAX,[EBX + 0x158]               ; 0042b797
    PUSH EAX                            ; 0042b79d
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 0042b79e
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0042b7a3
    PUSH EAX                            ; 0042b7a6
    LEA EAX,[ESP + 0x30]                ; 0042b7a7
    PUSH EAX                            ; 0042b7ab
    PUSH EBX                            ; 0042b7ac
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042b7ad
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0042b7b2
    LEA EAX,[ESP + 0x8]                 ; 0042b7b5
    PUSH EAX                            ; 0042b7b9
    LEA EAX,[ESP + 0x24]                ; 0042b7ba
    MOV ESI,0xc0400000                  ; 0042b7be
    PUSH EAX                            ; 0042b7c3
    XOR EDI,EDI                         ; 0042b7c4
    MOV dword ptr [ESP + 0x10],ESI      ; 0042b7c6
    PUSH EBX                            ; 0042b7ca
    MOV dword ptr [ESP + 0x18],EDI      ; 0042b7cb
    MOV dword ptr [ESP + 0x1c],EDI      ; 0042b7cf
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 0042b7d3
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0042b7d8
    MOV EAX,dword ptr [EBX + 0x2610]    ; 0042b7db
    PUSH EAX                            ; 0042b7e1
    LEA EAX,[ESP + 0x24]                ; 0042b7e2
    PUSH EAX                            ; 0042b7e6
    LEA EAX,[ESP + 0x34]                ; 0042b7e7
    PUSH EAX                            ; 0042b7eb
    MOV EDX,dword ptr [0x0067b9a0]      ; 0042b7ec | g_CGoreInstance | g_CGorePtr
    PUSH EDX                            ; 0042b7f2 | g_CGoreInstance
    CALL core_gore.cpp_FUN_004edaa0     ; 0042b7f3
        ;   XREF to: 004edaa0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004edaa0()
    ADD ESP,0x10                        ; 0042b7f8
    POP ESI                             ; 0042b7fb
    POP EDI                             ; 0042b7fc
    ADD ESP,0x30                        ; 0042b7fd
    POP EBX                             ; 0042b800
    RET                                 ; 0042b801

