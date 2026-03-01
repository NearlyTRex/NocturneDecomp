; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_004c7d60(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_position
; CVector3f *      Stack[0xc]:4   end_position
; CKeyFramedModel * Stack[0x10]:4   model_ptr
; float            Stack[0x14]:4   segment_length
;
; Referenced Globals:
;   int g_BulletTrailAllocIndex
;   CBulletTrail[10] g_BulletTrailPool
;
; Called Functions:
;   core_fire.cpp_CBulletTrail_init_FUN_004c2170
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c7d60
        ;   Label: core_fire.cpp_CFireEffect_createBulletTrail_FUN_004c7d60
    PUSH EDI                            ; 004c7d61
    PUSH EBP                            ; 004c7d62
    MOV EDX,dword ptr [0x02d62d38]      ; 004c7d63 | g_BulletTrailAllocIndex
    LEA EAX,[EDX*0x8 + 0x0]             ; 004c7d69
    ADD EAX,EDX                         ; 004c7d70
    SHL EAX,0x2                         ; 004c7d72
    INC EDX                             ; 004c7d75
    ADD EAX,0x2d62d3c                   ; 004c7d76 | g_BulletTrailPool
    MOV dword ptr [0x02d62d38],EDX      ; 004c7d7b | g_BulletTrailAllocIndex
    CMP EDX,0xa                         ; 004c7d81
    JL 0x004c7d90                       ; 004c7d84
        ;   XREF to: 004c7d90 (CONDITIONAL_JUMP)  ; LAB_004c7d90
    PUSH EBX                            ; 004c7d86
    XOR EBX,EBX                         ; 004c7d87
    MOV dword ptr [0x02d62d38],EBX      ; 004c7d89 | g_BulletTrailAllocIndex
    POP EBX                             ; 004c7d8f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004c7d90
        ;   Label: LAB_004c7d90
    PUSH dword ptr [ESP + 0x20]         ; 004c7d94
    PUSH ESI                            ; 004c7d98
    MOV EDI,dword ptr [ESP + 0x20]      ; 004c7d99
    PUSH EDI                            ; 004c7d9d
    MOV EBP,dword ptr [ESP + 0x20]      ; 004c7d9e
    PUSH EBP                            ; 004c7da2
    PUSH EAX                            ; 004c7da3
    CALL core_fire.cpp_CBulletTrail_init_FUN_004c2170 ; 004c7da4
        ;   XREF to: 004c2170 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletTrail_init_FUN_004c2170(CBulletTrail * this_ptr, CVector3f * start_position, CVector3f * end_position, CKeyFramedModel * model_ptr, ...)
    ADD ESP,0x14                        ; 004c7da9
    POP EBP                             ; 004c7dac
    POP EDI                             ; 004c7dad
    POP ESI                             ; 004c7dae
    RET                                 ; 004c7daf

