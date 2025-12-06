; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_turret.cpp_CTurret_FUN_005e3440(CTurret * this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00664b6c
;   undefined4 DAT_00664b70
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e3440
        ;   Label: core_turret.cpp_CTurret_FUN_005e3440
    PUSH ESI                            ; 005e3441
    MOV ESI,dword ptr [ESP + 0xc]       ; 005e3442
    MOV EBX,dword ptr [ESP + 0x10]      ; 005e3446
    PUSH EBX                            ; 005e344a
    PUSH ESI                            ; 005e344b
    CALL core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030 ; 005e344c | void core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030(CDemonActor * this_ptr, SInteractionInfo * out_info)
        ;   XREF to: 0040a030 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [ESI + 0x858]     ; 005e3451
    ADD ESP,0x8                         ; 005e3457
    TEST EDX,EDX                        ; 005e345a
    JNZ 0x005e3461                      ; 005e345c | LAB_005e3461
        ;   XREF to: 005e3461 (CONDITIONAL_JUMP)
    POP ESI                             ; 005e345e
    POP EBX                             ; 005e345f
    RET                                 ; 005e3460
    MOV dword ptr [EBX],0x1             ; 005e3461
        ;   Label: LAB_005e3461
    MOV EAX,dword ptr [ESI + 0x85c]     ; 005e3467
    MOV dword ptr [EBX + 0x10],0x40c90fdb ; 005e346d
    MOV dword ptr [EBX + 0x14],0xc0c90fdb ; 005e3474
    MOV dword ptr [EBX + 0x4],EAX       ; 005e347b
    FLD float ptr [0x00664b70]          ; 005e347e | undefined4 DAT_00664b70
    FSUB float ptr [ESI + 0x30]         ; 005e3484
    FLD float ptr [0x00664b6c]          ; 005e3487 | undefined4 DAT_00664b6c
    FXCH                                ; 005e348d
    FSTP float ptr [EBX + 0x18]         ; 005e348f
    FSUB float ptr [ESI + 0x30]         ; 005e3492
    MOV dword ptr [EBX + 0x8],0xc0800000 ; 005e3495
    FSTP float ptr [EBX + 0x1c]         ; 005e349c
    MOV dword ptr [EBX + 0xc],0x0       ; 005e349f
    POP ESI                             ; 005e34a6
    POP EBX                             ; 005e34a7
    RET                                 ; 005e34a8

