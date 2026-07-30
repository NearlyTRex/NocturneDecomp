; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_processDamageDecals_FUN_004277f0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_bride.cpp_CBride_process_FUN_0041fe40 at 0042095a
;   core_ghoul.cpp_CGhoul_process_FUN_004a9270 at 004aadb5
;   core_zombie.cpp_CZombie_process_FUN_0055ef50 at 0055fb0b
;
; Referenced Globals:
;   int INT_005b96c4 = 0x1c78c7c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004277f0
        ;   Label: core_charactr.cpp_CCharacter_processDamageDecals_FUN_004277f0
    PUSH ESI                            ; 004277f1
    PUSH EDI                            ; 004277f2
    PUSH EBP                            ; 004277f3
    MOV EBP,ESP                         ; 004277f4
    SUB ESP,0x4c                        ; 004277f6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004277f9
    MOV EDX,dword ptr [EBX + 0x2dec]    ; 004277fc
    XOR EDI,EDI                         ; 00427802
    TEST EDX,EDX                        ; 00427804
    JLE 0x00427831                      ; 00427806
        ;   XREF to: 00427831 (CONDITIONAL_JUMP)  ; LAB_00427831
    LEA EAX,[EBX + 0xfd0]               ; 00427808
    MOV dword ptr [EBP + -0x4],EAX      ; 0042780e
    LEA ESI,[EBX + 0x2df0]              ; 00427811
    MOV EAX,dword ptr [ESI]             ; 00427817
        ;   Label: LAB_00427817
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 00427819
    JNZ 0x00427838                      ; 00427821
        ;   XREF to: 00427838 (CONDITIONAL_JUMP)  ; LAB_00427838
    INC EDI                             ; 00427823
        ;   Label: LAB_00427823
    MOV ECX,dword ptr [EBX + 0x2dec]    ; 00427824
    ADD ESI,0x38                        ; 0042782a
    CMP EDI,ECX                         ; 0042782d
    JL 0x00427817                       ; 0042782f
        ;   XREF to: 00427817 (CONDITIONAL_JUMP)  ; LAB_00427817
    MOV ESP,EBP                         ; 00427831
        ;   Label: LAB_00427831
    POP EBP                             ; 00427833
    POP EDI                             ; 00427834
    POP ESI                             ; 00427835
    POP EBX                             ; 00427836
    RET                                 ; 00427837
    PUSH 0x3dcccccd                     ; 00427838
        ;   Label: LAB_00427838
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 0042783d
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 00427842
    TEST EAX,EAX                        ; 00427845
    JZ 0x00427823                       ; 00427847
        ;   XREF to: 00427823 (CONDITIONAL_JUMP)  ; LAB_00427823
    IMUL EAX,dword ptr [ESI + 0x4],0x30 ; 00427849
    ADD EAX,dword ptr [EBP + -0x4]      ; 0042784d
    PUSH EAX                            ; 00427850
    LEA EAX,[ESI + 0x8]                 ; 00427851
    XOR ECX,ECX                         ; 00427854
    PUSH EAX                            ; 00427856
    LEA EAX,[EBP + -0x1c]               ; 00427857
    MOV EDX,0xbe4ccccd                  ; 0042785a
    PUSH EAX                            ; 0042785f
    LEA EAX,[EBP + -0x40]               ; 00427860
    MOV dword ptr [EBP + -0x1c],ECX     ; 00427863
    PUSH EAX                            ; 00427866
    MOV dword ptr [EBP + -0x18],ECX     ; 00427867
    MOV dword ptr [EBP + -0x14],EDX     ; 0042786a
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0042786d
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00427872
    PUSH EAX                            ; 00427875
    LEA EAX,[EBP + -0x10]               ; 00427876
    PUSH EAX                            ; 00427879
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0042787a
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0042787f
    LEA EAX,[EBP + -0x10]               ; 00427882
    PUSH EAX                            ; 00427885
    LEA EAX,[EBP + -0x34]               ; 00427886
    PUSH EAX                            ; 00427889
    PUSH EBX                            ; 0042788a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0042788b
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    XOR EAX,EAX                         ; 00427890
    ADD ESP,0xc                         ; 00427892
    MOV dword ptr [EBP + -0x24],EAX     ; 00427895
    MOV dword ptr [EBP + -0x20],EAX     ; 00427898
    LEA EAX,[EBP + -0x28]               ; 0042789b
    PUSH EAX                            ; 0042789e
    LEA EAX,[EBP + -0x4c]               ; 0042789f
    PUSH EAX                            ; 004278a2
    MOV ECX,0x40400000                  ; 004278a3
    PUSH EBX                            ; 004278a8
    MOV dword ptr [EBP + -0x28],ECX     ; 004278a9
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 004278ac
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004278b1
    MOV ECX,dword ptr [EBX + 0x2608]    ; 004278b4
    PUSH ECX                            ; 004278ba
    LEA EAX,[EBP + -0x4c]               ; 004278bb
    PUSH EAX                            ; 004278be
    LEA EAX,[EBP + -0x34]               ; 004278bf
    PUSH EAX                            ; 004278c2
    MOV EAX,[0x005b96c4]                ; 004278c3 | INT_005b96c4
    PUSH EAX                            ; 004278c8
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0 ; 004278c9
        ;   XREF to: 004b00f0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0(CGore * this_ptr, CVector3f * position, CVector3f * velocity, int blood_type)
    ADD ESP,0x10                        ; 004278ce
    JMP 0x00427823                      ; 004278d1
        ;   XREF to: 00427823 (UNCONDITIONAL_JUMP)  ; LAB_00427823

