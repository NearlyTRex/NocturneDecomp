; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_turret_cpp_CTurret_getInteractionInfo_FUN_0054a800(CTurret *this_ptr,SInteractionInfo *interaction_info)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; SInteractionInfo * Stack[0x8]:4   interaction_info
;
; Referenced Globals:
;   float FLOAT_005a379c = -0.5235988
;   float FLOAT_005a37a0 = 1.221730
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040b1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a800
        ;   Label: core_turret.cpp_CTurret_getInteractionInfo_FUN_0054a800
    PUSH ESI                            ; 0054a801
    MOV ESI,dword ptr [ESP + 0xc]       ; 0054a802
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054a806
    PUSH EBX                            ; 0054a80a
    PUSH ESI                            ; 0054a80b
    CALL core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040b1b0 ; 0054a80c
        ;   XREF to: 0040b1b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040b1b0(CDemonActor * this_ptr, SInteractionInfo * out_info)
    MOV EDX,dword ptr [ESI + 0x850]     ; 0054a811
    ADD ESP,0x8                         ; 0054a817
    TEST EDX,EDX                        ; 0054a81a
    JNZ 0x0054a821                      ; 0054a81c
        ;   XREF to: 0054a821 (CONDITIONAL_JUMP)  ; LAB_0054a821
    POP ESI                             ; 0054a81e
    POP EBX                             ; 0054a81f
    RET                                 ; 0054a820
    MOV dword ptr [EBX],0x1             ; 0054a821
        ;   Label: LAB_0054a821
    MOV EAX,dword ptr [ESI + 0x854]     ; 0054a827
    MOV dword ptr [EBX + 0x10],0x40c90fdb ; 0054a82d
    MOV dword ptr [EBX + 0x14],0xc0c90fdb ; 0054a834
    MOV dword ptr [EBX + 0x4],EAX       ; 0054a83b
    FLD float ptr [0x005a37a0]          ; 0054a83e | FLOAT_005a37a0
    FSUB float ptr [ESI + 0x30]         ; 0054a844
    FLD float ptr [0x005a379c]          ; 0054a847 | FLOAT_005a379c
    FXCH                                ; 0054a84d
    FSTP float ptr [EBX + 0x18]         ; 0054a84f
    FSUB float ptr [ESI + 0x30]         ; 0054a852
    MOV dword ptr [EBX + 0x8],0xc0800000 ; 0054a855
    FSTP float ptr [EBX + 0x1c]         ; 0054a85c
    MOV dword ptr [EBX + 0xc],0x0       ; 0054a85f
    POP ESI                             ; 0054a866
    POP EBX                             ; 0054a867
    RET                                 ; 0054a868

