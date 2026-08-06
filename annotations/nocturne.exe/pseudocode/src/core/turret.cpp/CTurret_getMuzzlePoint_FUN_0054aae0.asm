; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_turret_cpp_CTurret_getMuzzlePoint_FUN_0054aae0(CTurret *this_ptr,CVector3f *out_point)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054aae0
        ;   Label: core_turret.cpp_CTurret_getMuzzlePoint_FUN_0054aae0
    MOV ECX,dword ptr [ESP + 0xc]       ; 0054aae1
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054aae5
    ADD EAX,0x858                       ; 0054aae9
    MOV EDX,dword ptr [EAX]             ; 0054aaee
    LEA EBX,[EAX + 0x4]                 ; 0054aaf0
    MOV dword ptr [ECX],EDX             ; 0054aaf3
    LEA EDX,[ECX + 0x4]                 ; 0054aaf5
    MOV EBX,dword ptr [EBX]             ; 0054aaf8
    MOV dword ptr [EDX],EBX             ; 0054aafa
    MOV EAX,dword ptr [EAX + 0x8]       ; 0054aafc
    MOV dword ptr [EDX + 0x4],EAX       ; 0054aaff
    MOV EAX,ECX                         ; 0054ab02
    POP EBX                             ; 0054ab04
    RET                                 ; 0054ab05

