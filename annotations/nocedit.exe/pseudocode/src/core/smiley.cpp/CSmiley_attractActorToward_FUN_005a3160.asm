; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_smiley_cpp_CSmiley_attractActorToward_FUN_005a3160(CSmiley *this_ptr,CDemonActor *actor,CVector3f *target_local_point)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; CVector3f *      Stack[0xc]:4   target_local_point
;
; Referenced Globals:
;   float FLOAT_0064f322 = -4
;   int INT_03f48fa8
;   CVector3f g_ZeroVector
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3160
        ;   Label: core_smiley.cpp_CSmiley_attractActorToward_FUN_005a3160
    PUSH ESI                            ; 005a3161
    SUB ESP,0x18                        ; 005a3162
    MOV ESI,dword ptr [ESP + 0x24]      ; 005a3165
    MOV EBX,dword ptr [ESP + 0x28]      ; 005a3169
    TEST EBX,EBX                        ; 005a316d
    JNZ 0x005a3179                      ; 005a316f
        ;   XREF to: 005a3179 (CONDITIONAL_JUMP)  ; LAB_005a3179
    XOR EAX,EAX                         ; 005a3171
    ADD ESP,0x18                        ; 005a3173
    POP ESI                             ; 005a3176
    POP EBX                             ; 005a3177
    RET                                 ; 005a3178
    PUSH ESI                            ; 005a3179
        ;   Label: LAB_005a3179
    MOV EAX,dword ptr [ESI + 0x154]     ; 005a317a
    CALL dword ptr [EAX + 0x120]        ; 005a3180
    ADD ESP,0x4                         ; 005a3186
    TEST EAX,EAX                        ; 005a3189
    JZ 0x005a31a8                       ; 005a318b
        ;   XREF to: 005a31a8 (CONDITIONAL_JUMP)  ; LAB_005a31a8
    PUSH EBX                            ; 005a318d
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a318e
    CALL dword ptr [EAX + 0x104]        ; 005a3194
    MOV EAX,0x1                         ; 005a319a
    ADD ESP,0x4                         ; 005a319f
    ADD ESP,0x18                        ; 005a31a2
    POP ESI                             ; 005a31a5
    POP EBX                             ; 005a31a6
    RET                                 ; 005a31a7
    MOV EDX,dword ptr [0x03f48fa8]      ; 005a31a8 | INT_03f48fa8
        ;   Label: LAB_005a31a8
    LEA EAX,[EDX*0x4 + 0x0]             ; 005a31ae
    SUB EAX,EDX                         ; 005a31b5
    SHL EAX,0x4                         ; 005a31b7
    LEA EDX,[ESI + 0xfd8]               ; 005a31ba
    ADD EAX,EDX                         ; 005a31c0
    PUSH EAX                            ; 005a31c2
    PUSH 0x3f87558                      ; 005a31c3 | g_ZeroVector
    LEA EAX,[ESP + 0x14]                ; 005a31c8
    PUSH EAX                            ; 005a31cc
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005a31cd
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 005a31d2
    PUSH EAX                            ; 005a31d5
    LEA EAX,[ESP + 0x4]                 ; 005a31d6
    PUSH EAX                            ; 005a31da
    PUSH ESI                            ; 005a31db
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005a31dc
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005a31e1
    LEA EAX,[EBX + 0x30]                ; 005a31e4
    FLD float ptr [ESP + 0x4]           ; 005a31e7
    PUSH EAX                            ; 005a31eb
    LEA EAX,[ESP + 0x4]                 ; 005a31ec
    FADD float ptr [0x0064f322]         ; 005a31f0 | FLOAT_0064f322
    PUSH EAX                            ; 005a31f6
    FSTP float ptr [ESP + 0xc]          ; 005a31f7
    MOV EDX,dword ptr [EBX + 0x154]     ; 005a31fb
    PUSH EBX                            ; 005a3201
    CALL dword ptr [EDX + 0x60]         ; 005a3202
    MOV EAX,0x1                         ; 005a3205
    ADD ESP,0xc                         ; 005a320a
    ADD ESP,0x18                        ; 005a320d
    POP ESI                             ; 005a3210
    POP EBX                             ; 005a3211
    RET                                 ; 005a3212

