; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_0048c420(CFireEffect *this_ptr,CVector3f *start_position,float start_width,int enable_camera_shake,float end_width)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_position
; float            Stack[0xc]:4   start_width
; int              Stack[0x10]:4   enable_camera_shake
; float            Stack[0x14]:4   end_width
;
; XREF[3]:
;   core_baron.cpp_FUN_00410cc0 at 00410d91
;   core_emitter.cpp_FUN_00478790 at 00478cc6
;   core_weather.cpp_CWeather_createLightningStrike_FUN_00554d40 at 00554f0a
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_01c6750c
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_fire.cpp_CLightningBolt_activate_FUN_00488b10
;   core_set.cpp_FUN_0050e660
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0048c420
        ;   Label: core_fire.cpp_CFireEffect_createLightningBolt_FUN_0048c420
    PUSH dword ptr [ESP + 0x18]         ; 0048c421
    MOV EDX,dword ptr [ESP + 0x10]      ; 0048c425
    PUSH dword ptr [ESP + 0x14]         ; 0048c429
    PUSH EDX                            ; 0048c42d
    MOV EDX,dword ptr [0x01c6750c]      ; 0048c42e | DAT_01c6750c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048c434
    SUB EAX,EDX                         ; 0048c43b
    SHL EAX,0x2                         ; 0048c43d
    SUB EAX,EDX                         ; 0048c440
    SHL EAX,0x2                         ; 0048c442
    ADD EAX,0x1c67510                   ; 0048c445
    PUSH EAX                            ; 0048c44a
    CALL core_fire.cpp_CLightningBolt_activate_FUN_00488b10 ; 0048c44b
        ;   XREF to: 00488b10 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLightningBolt_activate_FUN_00488b10(CLightningBolt * this_ptr, CVector3f * start_position, float start_width, float end_width)
    MOV ECX,dword ptr [0x01c6750c]      ; 0048c450 | DAT_01c6750c
    INC ECX                             ; 0048c456
    ADD ESP,0x10                        ; 0048c457
    MOV dword ptr [0x01c6750c],ECX      ; 0048c45a | DAT_01c6750c
    CMP ECX,0xa                         ; 0048c460
    JGE 0x0048c46e                      ; 0048c463
        ;   XREF to: 0048c46e (CONDITIONAL_JUMP)  ; LAB_0048c46e
    CMP dword ptr [ESP + 0x14],0x0      ; 0048c465
    JNZ 0x0048c481                      ; 0048c46a
        ;   XREF to: 0048c481 (CONDITIONAL_JUMP)  ; LAB_0048c481
    POP EBP                             ; 0048c46c
    RET                                 ; 0048c46d
    PUSH ESI                            ; 0048c46e
        ;   Label: LAB_0048c46e
    XOR ESI,ESI                         ; 0048c46f
    MOV dword ptr [0x01c6750c],ESI      ; 0048c471 | DAT_01c6750c
    POP ESI                             ; 0048c477
    CMP dword ptr [ESP + 0x14],0x0      ; 0048c478
    JNZ 0x0048c481                      ; 0048c47d
        ;   XREF to: 0048c481 (CONDITIONAL_JUMP)  ; LAB_0048c481
    POP EBP                             ; 0048c47f
    RET                                 ; 0048c480
    PUSH 0x3f800000                     ; 0048c481
        ;   Label: LAB_0048c481
    PUSH 0x0                            ; 0048c486
    PUSH 0x0                            ; 0048c488
    MOV EBP,dword ptr [0x005be368]      ; 0048c48a | DAT_005be368
    PUSH 0x42c80000                     ; 0048c490
    PUSH EBP                            ; 0048c495 | DAT_01e57284
    CALL core_set.cpp_FUN_0050e660      ; 0048c496
        ;   XREF to: 0050e660 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0050e660()
    ADD ESP,0x14                        ; 0048c49b
    POP EBP                             ; 0048c49e
    RET                                 ; 0048c49f

