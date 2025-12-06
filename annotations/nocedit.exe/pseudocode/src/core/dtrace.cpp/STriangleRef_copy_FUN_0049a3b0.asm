; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl STriangleRef * core_dtrace.cpp_STriangleRef_copy_FUN_0049a3b0(STriangleRef * this_ptr, STriangleRef * other)
;
; Parameters:
; STriangleRef *   Stack[0x4]:4   this_ptr
; STriangleRef *   Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a3b0
        ;   Label: core_dtrace.cpp_STriangleRef_copy_FUN_0049a3b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049a3b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0049a3b5
    MOV EDX,dword ptr [EBX]             ; 0049a3b9
    MOV dword ptr [EAX],EDX             ; 0049a3bb
    LEA EDX,[EAX + 0x4]                 ; 0049a3bd
    LEA EAX,[EBX + 0x4]                 ; 0049a3c0
    MOV ECX,dword ptr [EAX]             ; 0049a3c3
    MOV dword ptr [EDX],ECX             ; 0049a3c5
    LEA ECX,[EAX + 0x4]                 ; 0049a3c7
    ADD EDX,0x4                         ; 0049a3ca
    MOV ECX,dword ptr [ECX]             ; 0049a3cd
    MOV dword ptr [EDX],ECX             ; 0049a3cf
    ADD EDX,0x4                         ; 0049a3d1
    MOV EAX,dword ptr [EAX + 0x8]       ; 0049a3d4
    MOV dword ptr [EDX],EAX             ; 0049a3d7
    LEA EAX,[EBX + 0x10]                ; 0049a3d9
    ADD EDX,0x4                         ; 0049a3dc
    MOV ECX,dword ptr [EAX]             ; 0049a3df
    MOV dword ptr [EDX],ECX             ; 0049a3e1
    LEA ECX,[EAX + 0x4]                 ; 0049a3e3
    ADD EDX,0x4                         ; 0049a3e6
    MOV ECX,dword ptr [ECX]             ; 0049a3e9
    MOV dword ptr [EDX],ECX             ; 0049a3eb
    ADD EDX,0x4                         ; 0049a3ed
    MOV EAX,dword ptr [EAX + 0x8]       ; 0049a3f0
    MOV dword ptr [EDX],EAX             ; 0049a3f3
    LEA EAX,[EDX + -0x18]               ; 0049a3f5
    POP EBX                             ; 0049a3f8
    RET                                 ; 0049a3f9

