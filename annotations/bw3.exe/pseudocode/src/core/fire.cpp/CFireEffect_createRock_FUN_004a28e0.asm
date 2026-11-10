; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createRock_FUN_004a28e0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; CKeyFramedModel * Stack[0x10]:4   model_ptr
;
; XREF[3]:
;   core_drip.cpp_CDrip_process_FUN_0046ecf0 at 0046f068
;   core_emitter.cpp_CEmitter_process_FUN_00487eb0 at 004883c5
;   core_fire.cpp_FUN_0049c730 at 0049c869
;
; Referenced Globals:
;   undefined4 DAT_01cf2780
;
; Called Functions:
;   core_fire.cpp_CRock_setup_FUN_00499fe0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004a28e0
        ;   Label: core_fire.cpp_CFireEffect_createRock_FUN_004a28e0
    PUSH EDI                            ; 004a28e1
    PUSH EBP                            ; 004a28e2
    MOV EDX,dword ptr [0x01cf2780]      ; 004a28e3 | DAT_01cf2780
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a28e9
    ADD EAX,EDX                         ; 004a28f0
    SHL EAX,0x4                         ; 004a28f2
    INC EDX                             ; 004a28f5
    ADD EAX,0x1cf2784                   ; 004a28f6
    MOV dword ptr [0x01cf2780],EDX      ; 004a28fb | DAT_01cf2780
    CMP EDX,0x40                        ; 004a2901
    JL 0x004a2910                       ; 004a2904
        ;   XREF to: 004a2910 (CONDITIONAL_JUMP)  ; LAB_004a2910
    PUSH EBX                            ; 004a2906
    XOR EBX,EBX                         ; 004a2907
    MOV dword ptr [0x01cf2780],EBX      ; 004a2909 | DAT_01cf2780
    POP EBX                             ; 004a290f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004a2910
        ;   Label: LAB_004a2910
    PUSH ESI                            ; 004a2914
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004a2915
    PUSH EDI                            ; 004a2919
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004a291a
    PUSH EBP                            ; 004a291e
    PUSH EAX                            ; 004a291f
    CALL core_fire.cpp_CRock_setup_FUN_00499fe0 ; 004a2920
        ;   XREF to: 00499fe0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CRock_setup_FUN_00499fe0(CRock * this_ptr, CVector3f * position, CVector3f * velocity, CKeyFramedModel * model_ptr)
    ADD ESP,0x10                        ; 004a2925
    POP EBP                             ; 004a2928
    POP EDI                             ; 004a2929
    POP ESI                             ; 004a292a
    RET                                 ; 004a292b

