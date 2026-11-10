; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_0049e9d0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
;
; XREF[1]:
;   core_emitter.cpp_CEmitter_process_FUN_00486cb0 at 004873e1
;
; Referenced Globals:
;   undefined4 DAT_01ca367c
;   undefined4 g_PopcornPool[0].field60_0x3c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e9d0
        ;   Label: core_fire.cpp_CFireEffect_createPopcorn_FUN_0049e9d0
    PUSH ESI                            ; 0049e9d1
    PUSH EBP                            ; 0049e9d2
    MOV ECX,dword ptr [ESP + 0x18]      ; 0049e9d3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049e9d7
    MOV EAX,[0x01ca367c]                ; 0049e9db | DAT_01ca367c
    PUSH ECX                            ; 0049e9e0
    SHL EAX,0x6                         ; 0049e9e1
    PUSH EBX                            ; 0049e9e4
    ADD EAX,0x1ca3680                   ; 0049e9e5
    PUSH EAX                            ; 0049e9ea
    MOV EDX,dword ptr [EAX + 0x3c]      ; 0049e9eb | g_PopcornPool[0].field60_0x3c
    CALL dword ptr [EDX]                ; 0049e9ee
    MOV ESI,dword ptr [0x01ca367c]      ; 0049e9f0 | DAT_01ca367c
    INC ESI                             ; 0049e9f6
    ADD ESP,0xc                         ; 0049e9f7
    MOV dword ptr [0x01ca367c],ESI      ; 0049e9fa | DAT_01ca367c
    CMP ESI,0x100                       ; 0049ea00
    JGE 0x0049ea0c                      ; 0049ea06
        ;   XREF to: 0049ea0c (CONDITIONAL_JUMP)  ; LAB_0049ea0c
    POP EBP                             ; 0049ea08
    POP ESI                             ; 0049ea09
    POP EBX                             ; 0049ea0a
    RET                                 ; 0049ea0b
    XOR EBP,EBP                         ; 0049ea0c
        ;   Label: LAB_0049ea0c
    MOV dword ptr [0x01ca367c],EBP      ; 0049ea0e | DAT_01ca367c
    POP EBP                             ; 0049ea14
    POP ESI                             ; 0049ea15
    POP EBX                             ; 0049ea16
    RET                                 ; 0049ea17

