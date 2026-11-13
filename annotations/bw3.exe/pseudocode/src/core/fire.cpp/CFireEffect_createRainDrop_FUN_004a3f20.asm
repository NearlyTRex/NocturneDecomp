; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createRainDrop_FUN_004a3f20(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
;
; XREF[2]:
;   core_fire.cpp_CToss_process_FUN_0049d090 at 0049d48d
;   core_weather.cpp_FUN_0057bda0 at 0057bf8f
;
; Referenced Globals:
;   undefined4 DAT_01d07b8c
;   undefined4 g_RainDropPool[0].base.lifetime_remaining
;   undefined4 g_RainDropPool[0].base.vtable
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3f20
        ;   Label: core_fire.cpp_CFireEffect_createRainDrop_FUN_004a3f20
    PUSH ESI                            ; 004a3f21
    MOV EBX,dword ptr [0x01d07b8c]      ; 004a3f22 | DAT_01d07b8c
    MOV ECX,dword ptr [ESP + 0x14]      ; 004a3f28
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a3f2c
    MOV EAX,EBX                         ; 004a3f30
    PUSH ECX                            ; 004a3f32
    SHL EAX,0x6                         ; 004a3f33
    PUSH ESI                            ; 004a3f36
    ADD EAX,0x1d07b90                   ; 004a3f37
    PUSH EAX                            ; 004a3f3c
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004a3f3d | g_RainDropPool[0].base.vtable
    CALL dword ptr [EDX]                ; 004a3f40
    MOV EBX,dword ptr [0x01d07b8c]      ; 004a3f42 | DAT_01d07b8c
    MOV EAX,EBX                         ; 004a3f48
    SHL EAX,0x6                         ; 004a3f4a
    ADD EAX,0x1d07b90                   ; 004a3f4d
    ADD ESP,0xc                         ; 004a3f52
    INC EBX                             ; 004a3f55
    MOV dword ptr [EAX + 0x24],0x3e800000 ; 004a3f56 | g_RainDropPool[0].base.lifetime_remaining
    CMP EBX,0x100                       ; 004a3f5d
    JL 0x004a3f67                       ; 004a3f63
        ;   XREF to: 004a3f67 (CONDITIONAL_JUMP)  ; LAB_004a3f67
    XOR EBX,EBX                         ; 004a3f65
    MOV dword ptr [0x01d07b8c],EBX      ; 004a3f67 | DAT_01d07b8c
        ;   Label: LAB_004a3f67
    POP ESI                             ; 004a3f6d
    POP EBX                             ; 004a3f6e
    RET                                 ; 004a3f6f

