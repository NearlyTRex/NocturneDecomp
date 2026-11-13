; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLightningBolt_activateDirectional_FUN_0049f470(CLightningBolt *this_ptr,CVector3f *start_position,CVector3f *end_position,float end_width,float end_spread,int mode,float lifetime,int render_alpha)
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_position
; CVector3f *      Stack[0xc]:4   end_position
; float            Stack[0x10]:4   end_width
; float            Stack[0x14]:4   end_spread
; int              Stack[0x18]:4   mode
; float            Stack[0x1c]:4   lifetime
; int              Stack[0x20]:4   render_alpha
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50 at 004a3c8b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049f470
        ;   Label: core_fire.cpp_CLightningBolt_activateDirectional_FUN_0049f470
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049f471
    MOV EBX,dword ptr [ESP + 0xc]       ; 0049f475
    MOV ECX,dword ptr [ESP + 0x10]      ; 0049f479
    LEA EDX,[EAX + 0x4]                 ; 0049f47d
    CMP EDX,EBX                         ; 0049f480
    JNZ 0x0049f4af                      ; 0049f482
        ;   XREF to: 0049f4af (CONDITIONAL_JUMP)  ; LAB_0049f4af
    LEA EDX,[EAX + 0x1c]                ; 0049f484
        ;   Label: LAB_0049f484
    CMP EDX,ECX                         ; 0049f487
    JNZ 0x0049f4c3                      ; 0049f489
        ;   XREF to: 0049f4c3 (CONDITIONAL_JUMP)  ; LAB_0049f4c3
    MOV EDX,dword ptr [ESP + 0x20]      ; 0049f48b
        ;   Label: LAB_0049f48b
    MOV dword ptr [EAX + 0x14],EDX      ; 0049f48f
    MOV EDX,dword ptr [ESP + 0x14]      ; 0049f492
    MOV dword ptr [EAX + 0x18],EDX      ; 0049f496
    MOV EDX,dword ptr [ESP + 0x18]      ; 0049f499
    MOV dword ptr [EAX + 0x28],EDX      ; 0049f49d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0049f4a0
    MOV dword ptr [EAX],EDX             ; 0049f4a4
    MOV EDX,dword ptr [ESP + 0x24]      ; 0049f4a6
    MOV dword ptr [EAX + 0x2c],EDX      ; 0049f4aa
    POP EBX                             ; 0049f4ad
    RET                                 ; 0049f4ae
    PUSH ESI                            ; 0049f4af
        ;   Label: LAB_0049f4af
    MOV ESI,dword ptr [EBX]             ; 0049f4b0
    MOV dword ptr [EDX],ESI             ; 0049f4b2
    MOV ESI,dword ptr [EBX + 0x4]       ; 0049f4b4
    MOV dword ptr [EDX + 0x4],ESI       ; 0049f4b7
    MOV ESI,dword ptr [EBX + 0x8]       ; 0049f4ba
    MOV dword ptr [EDX + 0x8],ESI       ; 0049f4bd
    POP ESI                             ; 0049f4c0
    JMP 0x0049f484                      ; 0049f4c1
        ;   XREF to: 0049f484 (UNCONDITIONAL_JUMP)  ; LAB_0049f484
    MOV EBX,dword ptr [ECX]             ; 0049f4c3
        ;   Label: LAB_0049f4c3
    MOV dword ptr [EDX],EBX             ; 0049f4c5
    MOV EBX,dword ptr [ECX + 0x4]       ; 0049f4c7
    MOV dword ptr [EDX + 0x4],EBX       ; 0049f4ca
    MOV EBX,dword ptr [ECX + 0x8]       ; 0049f4cd
    MOV dword ptr [EDX + 0x8],EBX       ; 0049f4d0
    JMP 0x0049f48b                      ; 0049f4d3
        ;   XREF to: 0049f48b (UNCONDITIONAL_JUMP)  ; LAB_0049f48b

