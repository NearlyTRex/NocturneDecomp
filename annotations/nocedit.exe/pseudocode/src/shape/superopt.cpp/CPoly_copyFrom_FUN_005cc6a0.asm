; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CPoly_copyFrom_FUN_005cc6a0(CPoly * this_ptr, CPoly * source, CObj * parent_obj)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CPoly *          Stack[0x8]:4   source
; CObj *           Stack[0xc]:4   parent_obj
;
; XREF[1]:
;   shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0 at 005d522a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc6a0
        ;   Label: shape_superopt.cpp_CPoly_copyFrom_FUN_005cc6a0
    PUSH ESI                            ; 005cc6a1
    PUSH EDI                            ; 005cc6a2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005cc6a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005cc6a7
    MOV EAX,dword ptr [ESP + 0x18]      ; 005cc6ab
    MOV ECX,0xc                         ; 005cc6af
    LEA ESI,[EBX + 0x4]                 ; 005cc6b4
    LEA EDI,[EDX + 0x4]                 ; 005cc6b7
    MOV dword ptr [EDX],EAX             ; 005cc6ba
    PUSH EDI                            ; 005cc6bc
    MOV EAX,ECX                         ; 005cc6bd
    SHR ECX,0x2                         ; 005cc6bf
    MOVSD.REP ES:EDI,ESI                ; 005cc6c2
    MOV CL,AL                           ; 005cc6c4
    AND CL,0x3                          ; 005cc6c6
    MOVSB.REP ES:EDI,ESI                ; 005cc6c9
    POP EDI                             ; 005cc6cb
    MOV ECX,0x30                        ; 005cc6cc
    LEA ESI,[EBX + 0x10]                ; 005cc6d1
    LEA EDI,[EDX + 0x10]                ; 005cc6d4
    PUSH EDI                            ; 005cc6d7
    MOV EAX,ECX                         ; 005cc6d8
    SHR ECX,0x2                         ; 005cc6da
    MOVSD.REP ES:EDI,ESI                ; 005cc6dd
    MOV CL,AL                           ; 005cc6df
    AND CL,0x3                          ; 005cc6e1
    MOVSB.REP ES:EDI,ESI                ; 005cc6e4
    POP EDI                             ; 005cc6e6
    MOV EAX,dword ptr [EBX + 0x5c]      ; 005cc6e7
    MOV dword ptr [EDX + 0x5c],EAX      ; 005cc6ea
    MOV EAX,dword ptr [EBX + 0x60]      ; 005cc6ed
    MOV dword ptr [EDX + 0x60],EAX      ; 005cc6f0
    LEA EAX,[EDX + 0x40]                ; 005cc6f3
    LEA EDX,[EBX + 0x40]                ; 005cc6f6
    MOV ECX,dword ptr [EDX]             ; 005cc6f9
    MOV dword ptr [EAX],ECX             ; 005cc6fb
    MOV ECX,dword ptr [EDX + 0x4]       ; 005cc6fd
    MOV dword ptr [EAX + 0x4],ECX       ; 005cc700
    MOV ECX,dword ptr [EDX + 0x8]       ; 005cc703
    MOV dword ptr [EAX + 0x8],ECX       ; 005cc706
    MOV ECX,dword ptr [EDX + 0xc]       ; 005cc709
    MOV dword ptr [EAX + 0xc],ECX       ; 005cc70c
    MOV ECX,dword ptr [EDX + 0x10]      ; 005cc70f
    MOV dword ptr [EAX + 0x10],ECX      ; 005cc712
    MOV ECX,dword ptr [EDX + 0x14]      ; 005cc715
    MOV dword ptr [EAX + 0x14],ECX      ; 005cc718
    POP EDI                             ; 005cc71b
    POP ESI                             ; 005cc71c
    POP EBX                             ; 005cc71d
    RET                                 ; 005cc71e

