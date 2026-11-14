; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_0049d4b0(CFireEffect *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4 ,float param_5)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   param_2
; CVector3f *      Stack[0xc]:4   param_3
; CKeyFramedModel * Stack[0x10]:4   param_4
; float            Stack[0x14]:4   param_5
;
; Referenced Globals:
;   undefined4 DAT_01c91264
;
; Called Functions:
;   core_fire.cpp_CBulletTrail_init_FUN_004972d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0049d4b0
        ;   Label: core_fire.cpp_CFireEffect_createBulletTrail_FUN_0049d4b0
    PUSH EDI                            ; 0049d4b1
    PUSH EBP                            ; 0049d4b2
    MOV EDX,dword ptr [0x01c91264]      ; 0049d4b3 | DAT_01c91264
    LEA EAX,[EDX*0x8 + 0x0]             ; 0049d4b9
    ADD EAX,EDX                         ; 0049d4c0
    SHL EAX,0x2                         ; 0049d4c2
    INC EDX                             ; 0049d4c5
    ADD EAX,0x1c91268                   ; 0049d4c6
    MOV dword ptr [0x01c91264],EDX      ; 0049d4cb | DAT_01c91264
    CMP EDX,0xa                         ; 0049d4d1
    JL 0x0049d4e0                       ; 0049d4d4
        ;   XREF to: 0049d4e0 (CONDITIONAL_JUMP)  ; LAB_0049d4e0
    PUSH EBX                            ; 0049d4d6
    XOR EBX,EBX                         ; 0049d4d7
    MOV dword ptr [0x01c91264],EBX      ; 0049d4d9 | DAT_01c91264
    POP EBX                             ; 0049d4df
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0049d4e0
        ;   Label: LAB_0049d4e0
    PUSH dword ptr [ESP + 0x20]         ; 0049d4e4
    PUSH ESI                            ; 0049d4e8
    MOV EDI,dword ptr [ESP + 0x20]      ; 0049d4e9
    PUSH EDI                            ; 0049d4ed
    MOV EBP,dword ptr [ESP + 0x20]      ; 0049d4ee
    PUSH EBP                            ; 0049d4f2
    PUSH EAX                            ; 0049d4f3
    CALL core_fire.cpp_CBulletTrail_init_FUN_004972d0 ; 0049d4f4
        ;   XREF to: 004972d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletTrail_init_FUN_004972d0(CBulletTrail * this_ptr, CVector3f * start_position, CVector3f * end_position, CKeyFramedModel * model_ptr, ...)
    ADD ESP,0x14                        ; 0049d4f9
    POP EBP                             ; 0049d4fc
    POP EDI                             ; 0049d4fd
    POP ESI                             ; 0049d4fe
    RET                                 ; 0049d4ff

