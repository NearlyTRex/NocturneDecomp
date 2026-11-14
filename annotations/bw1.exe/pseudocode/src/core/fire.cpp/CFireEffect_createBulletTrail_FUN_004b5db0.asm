; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_004b5db0(CFireEffect *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4 ,float param_5)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   param_2
; CVector3f *      Stack[0xc]:4   param_3
; CKeyFramedModel * Stack[0x10]:4   param_4
; float            Stack[0x14]:4   param_5
;
; Referenced Globals:
;   undefined4 DAT_01ca9cf0
;
; Called Functions:
;   core_fire.cpp_CBulletTrail_init_FUN_004afc70
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b5db0
        ;   Label: core_fire.cpp_CFireEffect_createBulletTrail_FUN_004b5db0
    PUSH EDI                            ; 004b5db1
    PUSH EBP                            ; 004b5db2
    MOV EDX,dword ptr [0x01ca9cf0]      ; 004b5db3 | DAT_01ca9cf0
    LEA EAX,[EDX*0x8 + 0x0]             ; 004b5db9
    ADD EAX,EDX                         ; 004b5dc0
    SHL EAX,0x2                         ; 004b5dc2
    INC EDX                             ; 004b5dc5
    ADD EAX,0x1ca9cf4                   ; 004b5dc6
    MOV dword ptr [0x01ca9cf0],EDX      ; 004b5dcb | DAT_01ca9cf0
    CMP EDX,0xa                         ; 004b5dd1
    JL 0x004b5de0                       ; 004b5dd4
        ;   XREF to: 004b5de0 (CONDITIONAL_JUMP)  ; LAB_004b5de0
    PUSH EBX                            ; 004b5dd6
    XOR EBX,EBX                         ; 004b5dd7
    MOV dword ptr [0x01ca9cf0],EBX      ; 004b5dd9 | DAT_01ca9cf0
    POP EBX                             ; 004b5ddf
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004b5de0
        ;   Label: LAB_004b5de0
    PUSH dword ptr [ESP + 0x20]         ; 004b5de4
    PUSH ESI                            ; 004b5de8
    MOV EDI,dword ptr [ESP + 0x20]      ; 004b5de9
    PUSH EDI                            ; 004b5ded
    MOV EBP,dword ptr [ESP + 0x20]      ; 004b5dee
    PUSH EBP                            ; 004b5df2
    PUSH EAX                            ; 004b5df3
    CALL core_fire.cpp_CBulletTrail_init_FUN_004afc70 ; 004b5df4
        ;   XREF to: 004afc70 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletTrail_init_FUN_004afc70(CBulletTrail * this_ptr, CVector3f * start_position, CVector3f * end_position, CKeyFramedModel * model_ptr, ...)
    ADD ESP,0x14                        ; 004b5df9
    POP EBP                             ; 004b5dfc
    POP EDI                             ; 004b5dfd
    POP ESI                             ; 004b5dfe
    RET                                 ; 004b5dff

