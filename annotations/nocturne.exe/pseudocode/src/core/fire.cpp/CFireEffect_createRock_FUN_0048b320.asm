; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createRock_FUN_0048b320(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; CKeyFramedModel * Stack[0x10]:4   model_ptr
;
; XREF[3]:
;   core_drip.cpp_FUN_00462300 at 0046263e
;   core_emitter.cpp_FUN_00478790 at 00478b8f
;   core_fire.cpp_CExplosion_activate_FUN_00486e40 at 00486f74
;
; Referenced Globals:
;   undefined4 DAT_01c5b4fc
;
; Called Functions:
;   core_fire.cpp_CRock_setup_FUN_00484c90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0048b320
        ;   Label: core_fire.cpp_CFireEffect_createRock_FUN_0048b320
    PUSH EDI                            ; 0048b321
    PUSH EBP                            ; 0048b322
    MOV EDX,dword ptr [0x01c5b4fc]      ; 0048b323 | DAT_01c5b4fc
    LEA EAX,[EDX*0x8 + 0x0]             ; 0048b329
    ADD EAX,EDX                         ; 0048b330
    SHL EAX,0x3                         ; 0048b332
    INC EDX                             ; 0048b335
    ADD EAX,0x1c5b500                   ; 0048b336
    MOV dword ptr [0x01c5b4fc],EDX      ; 0048b33b | DAT_01c5b4fc
    CMP EDX,0x40                        ; 0048b341
    JL 0x0048b350                       ; 0048b344
        ;   XREF to: 0048b350 (CONDITIONAL_JUMP)  ; LAB_0048b350
    PUSH EBX                            ; 0048b346
    XOR EBX,EBX                         ; 0048b347
    MOV dword ptr [0x01c5b4fc],EBX      ; 0048b349 | DAT_01c5b4fc
    POP EBX                             ; 0048b34f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048b350
        ;   Label: LAB_0048b350
    PUSH ESI                            ; 0048b354
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0048b355
    PUSH EDI                            ; 0048b359
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0048b35a
    PUSH EBP                            ; 0048b35e
    PUSH EAX                            ; 0048b35f
    CALL core_fire.cpp_CRock_setup_FUN_00484c90 ; 0048b360
        ;   XREF to: 00484c90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CRock_setup_FUN_00484c90(CRock * this_ptr, CVector3f * position, CVector3f * velocity, CKeyFramedModel * model_ptr)
    ADD ESP,0x10                        ; 0048b365
    POP EBP                             ; 0048b368
    POP EDI                             ; 0048b369
    POP ESI                             ; 0048b36a
    RET                                 ; 0048b36b

