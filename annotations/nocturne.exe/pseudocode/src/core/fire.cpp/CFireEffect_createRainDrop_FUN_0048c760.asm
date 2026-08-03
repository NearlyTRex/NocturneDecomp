; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createRainDrop_FUN_0048c760(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
;
; XREF[1]:
;   core_weather.cpp_CWeather_update_FUN_00554980 at 00554a40
;
; Referenced Globals:
;   undefined4 DAT_01c6ce14
;   undefined4 g_CRainDrop_ARRAY_01c6ce18[0].base.lifetime_remaining
;   undefined4 g_CRainDrop_ARRAY_01c6ce18[0].base.vtable
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c760
        ;   Label: core_fire.cpp_CFireEffect_createRainDrop_FUN_0048c760
    PUSH ESI                            ; 0048c761
    MOV EBX,dword ptr [0x01c6ce14]      ; 0048c762 | DAT_01c6ce14
    LEA EAX,[EBX*0x8 + 0x0]             ; 0048c768
    MOV ECX,dword ptr [ESP + 0x14]      ; 0048c76f
    MOV EDX,EAX                         ; 0048c773
    PUSH ECX                            ; 0048c775
    SHL EAX,0x3                         ; 0048c776
    MOV ESI,dword ptr [ESP + 0x14]      ; 0048c779
    SUB EAX,EDX                         ; 0048c77d
    PUSH ESI                            ; 0048c77f
    ADD EAX,0x1c6ce18                   ; 0048c780
    PUSH EAX                            ; 0048c785
    MOV EDX,dword ptr [EAX + 0x34]      ; 0048c786 | g_CRainDrop_ARRAY_01c6ce18[0].base.vtable
    CALL dword ptr [EDX]                ; 0048c789
    MOV EBX,dword ptr [0x01c6ce14]      ; 0048c78b | DAT_01c6ce14
    LEA EAX,[EBX*0x8 + 0x0]             ; 0048c791
    MOV EDX,EAX                         ; 0048c798
    SHL EAX,0x3                         ; 0048c79a
    SUB EAX,EDX                         ; 0048c79d
    ADD EAX,0x1c6ce18                   ; 0048c79f
    ADD ESP,0xc                         ; 0048c7a4
    INC EBX                             ; 0048c7a7
    MOV dword ptr [EAX + 0x18],0x3e800000 ; 0048c7a8 | g_CRainDrop_ARRAY_01c6ce18[0].base.lifetime_remaining
    CMP EBX,0x100                       ; 0048c7af
    JL 0x0048c7b9                       ; 0048c7b5
        ;   XREF to: 0048c7b9 (CONDITIONAL_JUMP)  ; LAB_0048c7b9
    XOR EBX,EBX                         ; 0048c7b7
    MOV dword ptr [0x01c6ce14],EBX      ; 0048c7b9 | DAT_01c6ce14
        ;   Label: LAB_0048c7b9
    POP ESI                             ; 0048c7bf
    POP EBX                             ; 0048c7c0
    RET                                 ; 0048c7c1

