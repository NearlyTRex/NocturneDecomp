; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_shatter_FUN_00427210(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 at 004281b2
;   core_ghoul.cpp_CGhoul_processDamage_FUN_004c40f0 at 004c434a
;
; Referenced Globals:
;   TerminatedCString s_glass_1_wav_2_0_005ccdb0
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_005485c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427210
        ;   Label: core_charactr.cpp_CCharacter_shatter_FUN_00427210
    MOV EBX,dword ptr [ESP + 0x8]       ; 00427211
    PUSH 0x5ccdb0                       ; 00427215 | = "glass-1.wav@2.0"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0042721a
    PUSH EBX                            ; 00427220
    CALL dword ptr [EAX + 0x34]         ; 00427221
    LEA EDX,[EBX + 0x2b4]               ; 00427224
    LEA EAX,[EBX + 0x2514]              ; 0042722a
    MOV CL,byte ptr [EAX]               ; 00427230
    ADD ESP,0x8                         ; 00427232
    TEST CL,CL                          ; 00427235
    JNZ 0x00427242                      ; 00427237
        ;   XREF to: 00427242 (CONDITIONAL_JUMP)  ; LAB_00427242
    MOV dword ptr [EBX + 0x70],0x2      ; 00427239
    POP EBX                             ; 00427240
    RET                                 ; 00427241
    PUSH 0x0                            ; 00427242
        ;   Label: LAB_00427242
    LEA EAX,[EBX + 0x30]                ; 00427244
    PUSH EAX                            ; 00427247
    LEA EAX,[EBX + 0x20]                ; 00427248
    PUSH EAX                            ; 0042724b
    PUSH EDX                            ; 0042724c
    CALL core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_005485c0 ; 0042724d
        ;   XREF to: 005485c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_005485c0(CDeformableModelInstance * this_ptr, CVector3f * center_position, CVector3f * orientation_vector, int desired_lod_index)
    ADD ESP,0x10                        ; 00427252
    MOV dword ptr [EBX + 0x70],0x2      ; 00427255
    POP EBX                             ; 0042725c
    RET                                 ; 0042725d

