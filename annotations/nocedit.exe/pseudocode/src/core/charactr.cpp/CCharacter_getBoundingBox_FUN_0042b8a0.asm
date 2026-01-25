; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoundingBox3D * core_charactr.cpp_CCharacter_getBoundingBox_FUN_0042b8a0(CCharacter * this_ptr, CBoundingBox3D * out_box)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b8a0
        ;   Label: core_charactr.cpp_CCharacter_getBoundingBox_FUN_0042b8a0
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042b8a1
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042b8a5
    ADD EAX,0x25f8                      ; 0042b8a9
    MOV EDX,dword ptr [EAX]             ; 0042b8ae
    LEA EBX,[EAX + 0x4]                 ; 0042b8b0
    MOV dword ptr [ECX],EDX             ; 0042b8b3
    LEA EDX,[ECX + 0x4]                 ; 0042b8b5
    MOV EBX,dword ptr [EBX]             ; 0042b8b8
    MOV dword ptr [EDX],EBX             ; 0042b8ba
    LEA EBX,[EAX + 0x8]                 ; 0042b8bc
    MOV EBX,dword ptr [EBX]             ; 0042b8bf
    MOV dword ptr [EDX + 0x4],EBX       ; 0042b8c1
    MOV EBX,dword ptr [EAX + 0xc]       ; 0042b8c4
    ADD EAX,0xc                         ; 0042b8c7
    MOV dword ptr [EDX + 0x8],EBX       ; 0042b8ca
    LEA EBX,[EAX + 0x4]                 ; 0042b8cd
    MOV EBX,dword ptr [EBX]             ; 0042b8d0
    MOV dword ptr [EDX + 0xc],EBX       ; 0042b8d2
    MOV EAX,dword ptr [EAX + 0x8]       ; 0042b8d5
    MOV dword ptr [EDX + 0x10],EAX      ; 0042b8d8
    MOV EAX,ECX                         ; 0042b8db
    POP EBX                             ; 0042b8dd
    RET                                 ; 0042b8de

