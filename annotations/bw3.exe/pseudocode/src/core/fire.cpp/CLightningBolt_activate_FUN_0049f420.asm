; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLightningBolt_activate_FUN_0049f420(CLightningBolt *this_ptr,CVector3f *start_position,float start_width,float end_width )
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_position
; float            Stack[0xc]:4   start_width
; float            Stack[0x10]:4   end_width
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createLightningBolt_FUN_004a3bd0 at 004a3bf6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049f420
        ;   Label: core_fire.cpp_CLightningBolt_activate_FUN_0049f420
    MOV ECX,dword ptr [ESP + 0x8]       ; 0049f424
    LEA EDX,[EAX + 0x4]                 ; 0049f428
    CMP EDX,ECX                         ; 0049f42b
    JNZ 0x0049f452                      ; 0049f42d
        ;   XREF to: 0049f452 (CONDITIONAL_JUMP)  ; LAB_0049f452
    MOV dword ptr [EAX + 0x14],0x3e800000 ; 0049f42f
        ;   Label: LAB_0049f42f
    MOV dword ptr [EAX],0x0             ; 0049f436
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f43c
    MOV dword ptr [EAX + 0x2c],0xffff   ; 0049f440
    MOV dword ptr [EAX + 0x10],EDX      ; 0049f447
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049f44a
    MOV dword ptr [EAX + 0x18],EDX      ; 0049f44e
    RET                                 ; 0049f451
    PUSH EBX                            ; 0049f452
        ;   Label: LAB_0049f452
    MOV EBX,dword ptr [ECX]             ; 0049f453
    MOV dword ptr [EDX],EBX             ; 0049f455
    MOV EBX,dword ptr [ECX + 0x4]       ; 0049f457
    MOV dword ptr [EDX + 0x4],EBX       ; 0049f45a
    MOV EBX,dword ptr [ECX + 0x8]       ; 0049f45d
    MOV dword ptr [EDX + 0x8],EBX       ; 0049f460
    POP EBX                             ; 0049f463
    JMP 0x0049f42f                      ; 0049f464
        ;   XREF to: 0049f42f (UNCONDITIONAL_JUMP)  ; LAB_0049f42f

