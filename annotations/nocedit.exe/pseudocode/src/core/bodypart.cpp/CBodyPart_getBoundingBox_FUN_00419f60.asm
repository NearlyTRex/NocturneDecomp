; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoundingBox3D * core_bodypart.cpp_CBodyPart_getBoundingBox_FUN_00419f60(CBodyPart * this_ptr, CBoundingBox3D * out_box)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419f60
        ;   Label: core_bodypart.cpp_CBodyPart_getBoundingBox_FUN_00419f60
    MOV ECX,dword ptr [ESP + 0xc]       ; 00419f61
    MOV EAX,dword ptr [ESP + 0x8]       ; 00419f65
    ADD EAX,0x15c                       ; 00419f69
    MOV EDX,dword ptr [EAX]             ; 00419f6e
    LEA EBX,[EAX + 0x4]                 ; 00419f70
    MOV dword ptr [ECX],EDX             ; 00419f73
    LEA EDX,[ECX + 0x4]                 ; 00419f75
    MOV EBX,dword ptr [EBX]             ; 00419f78
    MOV dword ptr [EDX],EBX             ; 00419f7a
    LEA EBX,[EAX + 0x8]                 ; 00419f7c
    MOV EBX,dword ptr [EBX]             ; 00419f7f
    MOV dword ptr [EDX + 0x4],EBX       ; 00419f81
    MOV EBX,dword ptr [EAX + 0xc]       ; 00419f84
    ADD EAX,0xc                         ; 00419f87
    MOV dword ptr [EDX + 0x8],EBX       ; 00419f8a
    LEA EBX,[EAX + 0x4]                 ; 00419f8d
    MOV EBX,dword ptr [EBX]             ; 00419f90
    MOV dword ptr [EDX + 0xc],EBX       ; 00419f92
    MOV EAX,dword ptr [EAX + 0x8]       ; 00419f95
    MOV dword ptr [EDX + 0x10],EAX      ; 00419f98
    MOV EAX,ECX                         ; 00419f9b
    POP EBX                             ; 00419f9d
    RET                                 ; 00419f9e

