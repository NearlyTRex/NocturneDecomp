; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_0048b220(CFireEffect *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4 ,float param_5)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   param_2
; CVector3f *      Stack[0xc]:4   param_3
; CKeyFramedModel * Stack[0x10]:4   param_4
; float            Stack[0x14]:4   param_5
;
; Referenced Globals:
;   undefined4 DAT_01c58c8c
;
; Called Functions:
;   core_fire.cpp_CBulletTrail_init_FUN_00485640
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0048b220
        ;   Label: core_fire.cpp_CFireEffect_createBulletTrail_FUN_0048b220
    PUSH EDI                            ; 0048b221
    PUSH EBP                            ; 0048b222
    MOV EDX,dword ptr [0x01c58c8c]      ; 0048b223 | DAT_01c58c8c
    LEA EAX,[EDX*0x8 + 0x0]             ; 0048b229
    ADD EAX,EDX                         ; 0048b230
    SHL EAX,0x2                         ; 0048b232
    INC EDX                             ; 0048b235
    ADD EAX,0x1c58c90                   ; 0048b236
    MOV dword ptr [0x01c58c8c],EDX      ; 0048b23b | DAT_01c58c8c
    CMP EDX,0xa                         ; 0048b241
    JL 0x0048b250                       ; 0048b244
        ;   XREF to: 0048b250 (CONDITIONAL_JUMP)  ; LAB_0048b250
    PUSH EBX                            ; 0048b246
    XOR EBX,EBX                         ; 0048b247
    MOV dword ptr [0x01c58c8c],EBX      ; 0048b249 | DAT_01c58c8c
    POP EBX                             ; 0048b24f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048b250
        ;   Label: LAB_0048b250
    PUSH dword ptr [ESP + 0x20]         ; 0048b254
    PUSH ESI                            ; 0048b258
    MOV EDI,dword ptr [ESP + 0x20]      ; 0048b259
    PUSH EDI                            ; 0048b25d
    MOV EBP,dword ptr [ESP + 0x20]      ; 0048b25e
    PUSH EBP                            ; 0048b262
    PUSH EAX                            ; 0048b263
    CALL core_fire.cpp_CBulletTrail_init_FUN_00485640 ; 0048b264
        ;   XREF to: 00485640 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletTrail_init_FUN_00485640(CBulletTrail * this_ptr, CVector3f * start_position, CVector3f * end_position, CKeyFramedModel * model_ptr, ...)
    ADD ESP,0x14                        ; 0048b269
    POP EBP                             ; 0048b26c
    POP EDI                             ; 0048b26d
    POP ESI                             ; 0048b26e
    RET                                 ; 0048b26f

