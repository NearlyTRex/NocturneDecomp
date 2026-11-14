; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_onLaserHit_FUN_0059bd80(CTrigger *this_ptr,SLaserInfo *laser_info)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; SLaserInfo *     Stack[0x8]:4   laser_info
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onLaserHit_FUN_00409680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059bd80
        ;   Label: core_trigger.cpp_CTrigger_onLaserHit_FUN_0059bd80
    PUSH ESI                            ; 0059bd81
    MOV ESI,dword ptr [ESP + 0xc]       ; 0059bd82
    MOV EBX,dword ptr [ESP + 0x10]      ; 0059bd86
    PUSH EBX                            ; 0059bd8a
    PUSH ESI                            ; 0059bd8b
    CALL core_actor.cpp_CDemonActor_onLaserHit_FUN_00409680 ; 0059bd8c
        ;   XREF to: 00409680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onLaserHit_FUN_00409680(CDemonActor * this_ptr, SLaserInfo * laser_info)
    MOV EDX,dword ptr [ESI + 0x174]     ; 0059bd91
    ADD ESP,0x8                         ; 0059bd97
    CMP EDX,0x5                         ; 0059bd9a
    JNZ 0x0059bdaa                      ; 0059bd9d
        ;   XREF to: 0059bdaa (CONDITIONAL_JUMP)  ; LAB_0059bdaa
    MOV ECX,dword ptr [ESI + 0x2f4]     ; 0059bd9f
    CMP ECX,dword ptr [EBX + 0x8]       ; 0059bda5
    JZ 0x0059bdc1                       ; 0059bda8
        ;   XREF to: 0059bdc1 (CONDITIONAL_JUMP)  ; LAB_0059bdc1
    MOV dword ptr [EBX + 0x50],0x0      ; 0059bdaa
        ;   Label: LAB_0059bdaa
    MOV dword ptr [EBX + 0x48],0x3f800000 ; 0059bdb1
    MOV EAX,dword ptr [EBX + 0x44]      ; 0059bdb8
    MOV dword ptr [EBX + 0x4c],EAX      ; 0059bdbb
    POP ESI                             ; 0059bdbe
    POP EBX                             ; 0059bdbf
    RET                                 ; 0059bdc0
    MOV dword ptr [ESI + 0x2f0],0x1     ; 0059bdc1
        ;   Label: LAB_0059bdc1
    JMP 0x0059bdaa                      ; 0059bdcb
        ;   XREF to: 0059bdaa (UNCONDITIONAL_JUMP)  ; LAB_0059bdaa

