; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_CCharacter_FUN_0042b670(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x5c]:1  local_5c
; undefined1       Stack[-0x50]:1  local_50
; undefined1       Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined1       Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_bride.cpp_FUN_00423a30 at 0042454a
;   core_ghoul.cpp_CGhoul_FUN_004e6600 at 004e8145
;   core_zombie.cpp_CZombie_process_FUN_005f9470 at 005fa02b
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
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b670
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042b670
    PUSH ESI                            ; 0042b671
    PUSH EDI                            ; 0042b672
    PUSH EBP                            ; 0042b673
    MOV EBP,ESP                         ; 0042b674
    SUB ESP,0x4c                        ; 0042b676
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042b679
    MOV EDX,dword ptr [EBX + 0x2df4]    ; 0042b67c
    XOR EDI,EDI                         ; 0042b682
    TEST EDX,EDX                        ; 0042b684
    JLE 0x0042b6b1                      ; 0042b686 | LAB_0042b6b1
        ;   XREF to: 0042b6b1 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0xfd8]               ; 0042b688
    MOV dword ptr [EBP + -0x4],EAX      ; 0042b68e
    LEA ESI,[EBX + 0x2df8]              ; 0042b691
    MOV EAX,dword ptr [ESI]             ; 0042b697
        ;   Label: LAB_0042b697
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042b699
    JNZ 0x0042b6b8                      ; 0042b6a1 | LAB_0042b6b8
        ;   XREF to: 0042b6b8 (CONDITIONAL_JUMP)
    INC EDI                             ; 0042b6a3
        ;   Label: LAB_0042b6a3
    MOV ECX,dword ptr [EBX + 0x2df4]    ; 0042b6a4
    ADD ESI,0x38                        ; 0042b6aa
    CMP EDI,ECX                         ; 0042b6ad
    JL 0x0042b697                       ; 0042b6af | LAB_0042b697
        ;   XREF to: 0042b697 (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 0042b6b1
        ;   Label: LAB_0042b6b1
    POP EBP                             ; 0042b6b3
    POP EDI                             ; 0042b6b4
    POP ESI                             ; 0042b6b5
    POP EBX                             ; 0042b6b6
    RET                                 ; 0042b6b7
    PUSH 0x3dcccccd                     ; 0042b6b8
        ;   Label: LAB_0042b6b8
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 0042b6bd | int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0042b6c2
    TEST EAX,EAX                        ; 0042b6c5
    JZ 0x0042b6a3                       ; 0042b6c7 | LAB_0042b6a3
        ;   XREF to: 0042b6a3 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [ESI + 0x4],0x30 ; 0042b6c9
    ADD EAX,dword ptr [EBP + -0x4]      ; 0042b6cd
    PUSH EAX                            ; 0042b6d0
    LEA EAX,[ESI + 0x8]                 ; 0042b6d1
    XOR ECX,ECX                         ; 0042b6d4
    PUSH EAX                            ; 0042b6d6
    LEA EAX,[EBP + -0x1c]               ; 0042b6d7
    MOV EDX,0xbe4ccccd                  ; 0042b6da
    PUSH EAX                            ; 0042b6df
    LEA EAX,[EBP + -0x40]               ; 0042b6e0
    MOV dword ptr [EBP + -0x1c],ECX     ; 0042b6e3
    PUSH EAX                            ; 0042b6e6
    MOV dword ptr [EBP + -0x18],ECX     ; 0042b6e7
    MOV dword ptr [EBP + -0x14],EDX     ; 0042b6ea
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0042b6ed | CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0042b6f2
    PUSH EAX                            ; 0042b6f5
    LEA EAX,[EBP + -0x10]               ; 0042b6f6
    PUSH EAX                            ; 0042b6f9
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0042b6fa | CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0042b6ff
    LEA EAX,[EBP + -0x10]               ; 0042b702
    PUSH EAX                            ; 0042b705
    LEA EAX,[EBP + -0x34]               ; 0042b706
    PUSH EAX                            ; 0042b709
    PUSH EBX                            ; 0042b70a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042b70b | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    XOR EAX,EAX                         ; 0042b710
    ADD ESP,0xc                         ; 0042b712
    MOV dword ptr [EBP + -0x24],EAX     ; 0042b715
    MOV dword ptr [EBP + -0x20],EAX     ; 0042b718
    LEA EAX,[EBP + -0x28]               ; 0042b71b
    PUSH EAX                            ; 0042b71e
    LEA EAX,[EBP + -0x4c]               ; 0042b71f
    PUSH EAX                            ; 0042b722
    MOV ECX,0x40400000                  ; 0042b723
    PUSH EBX                            ; 0042b728
    MOV dword ptr [EBP + -0x28],ECX     ; 0042b729
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 0042b72c | CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0042b731
    MOV ECX,dword ptr [EBX + 0x2610]    ; 0042b734
    PUSH ECX                            ; 0042b73a
    LEA EAX,[EBP + -0x4c]               ; 0042b73b
    PUSH EAX                            ; 0042b73e
    LEA EAX,[EBP + -0x34]               ; 0042b73f
    PUSH EAX                            ; 0042b742
    MOV EAX,[0x0067b9a0]                ; 0042b743 | CGore g_CGoreInstance | CGore * g_CGorePtr
    PUSH EAX                            ; 0042b748 | CGore g_CGoreInstance
    CALL core_gore.cpp_FUN_004edaa0     ; 0042b749 | undefined core_gore.cpp_FUN_004edaa0()
        ;   XREF to: 004edaa0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0042b74e
    JMP 0x0042b6a3                      ; 0042b751 | LAB_0042b6a3
        ;   XREF to: 0042b6a3 (UNCONDITIONAL_JUMP)

