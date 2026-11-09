; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_init_FUN_00496d60(CSmokeParticle *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   drag_factor
; CVector3f *      Stack[0x10]:4   wind_influence
; int              Stack[0x14]:4   alpha_value
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560 at 004a25ac
;   core_fire.cpp_FUN_004a2090 at 004a21ac
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496d60
        ;   Label: core_fire.cpp_CSmokeParticle_init_FUN_00496d60
    SUB ESP,0x4                         ; 00496d61
    MOV EBX,dword ptr [ESP + 0xc]       ; 00496d64
    MOV ECX,dword ptr [ESP + 0x10]      ; 00496d68
    MOV EDX,dword ptr [ESP + 0x18]      ; 00496d6c
    LEA EAX,[EBX + 0x4]                 ; 00496d70
    CMP EAX,ECX                         ; 00496d73
    JNZ 0x00496dcf                      ; 00496d75
        ;   XREF to: 00496dcf (CONDITIONAL_JUMP)  ; LAB_00496dcf
    LEA EAX,[EBX + 0x1c]                ; 00496d77
        ;   Label: LAB_00496d77
    TEST EDX,EDX                        ; 00496d7a
    JZ 0x00496de3                       ; 00496d7c
        ;   XREF to: 00496de3 (CONDITIONAL_JUMP)  ; LAB_00496de3
    CMP EAX,EDX                         ; 00496d7e
    JZ 0x00496d92                       ; 00496d80
        ;   XREF to: 00496d92 (CONDITIONAL_JUMP)  ; LAB_00496d92
    MOV ECX,dword ptr [EDX]             ; 00496d82
    MOV dword ptr [EAX],ECX             ; 00496d84
    MOV ECX,dword ptr [EDX + 0x4]       ; 00496d86
    MOV dword ptr [EAX + 0x4],ECX       ; 00496d89
    MOV ECX,dword ptr [EDX + 0x8]       ; 00496d8c
    MOV dword ptr [EAX + 0x8],ECX       ; 00496d8f
    PUSH 0x3f866666                     ; 00496d92
        ;   Label: LAB_00496d92
    MOV EAX,dword ptr [ESP + 0x18]      ; 00496d97
    MOV dword ptr [EBX + 0x18],0x0      ; 00496d9b
    PUSH 0x3f733333                     ; 00496da2
    MOV dword ptr [EBX + 0x14],EAX      ; 00496da7
    CALL core_actor.cpp_FUN_0040ce40    ; 00496daa
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x8],EAX       ; 00496daf
    FLD float ptr [ESP + 0x8]           ; 00496db3
    ADD ESP,0x8                         ; 00496db7
    MOV dword ptr [EBX],0x1             ; 00496dba
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00496dc0
    FSTP float ptr [EBX + 0x10]         ; 00496dc4
    MOV dword ptr [EBX + 0x28],EAX      ; 00496dc7
    ADD ESP,0x4                         ; 00496dca
    POP EBX                             ; 00496dcd
    RET                                 ; 00496dce
    PUSH ESI                            ; 00496dcf
        ;   Label: LAB_00496dcf
    MOV ESI,dword ptr [ECX]             ; 00496dd0
    MOV dword ptr [EAX],ESI             ; 00496dd2
    MOV ESI,dword ptr [ECX + 0x4]       ; 00496dd4
    MOV dword ptr [EAX + 0x4],ESI       ; 00496dd7
    MOV ESI,dword ptr [ECX + 0x8]       ; 00496dda
    MOV dword ptr [EAX + 0x8],ESI       ; 00496ddd
    POP ESI                             ; 00496de0
    JMP 0x00496d77                      ; 00496de1
        ;   XREF to: 00496d77 (UNCONDITIONAL_JUMP)  ; LAB_00496d77
    MOV dword ptr [EAX + 0x8],EDX       ; 00496de3
        ;   Label: LAB_00496de3
    MOV EDX,dword ptr [EAX + 0x8]       ; 00496de6
    MOV dword ptr [EAX + 0x4],EDX       ; 00496de9
    MOV EDX,dword ptr [EAX + 0x4]       ; 00496dec
    MOV dword ptr [EAX],EDX             ; 00496def
    JMP 0x00496d92                      ; 00496df1
        ;   XREF to: 00496d92 (UNCONDITIONAL_JUMP)  ; LAB_00496d92

