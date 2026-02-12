; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_morph_cpp_CMorph_FUN_0052b4b0(CMorph *this_ptr,int model_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPart_FUN_0052a580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b4b0
        ;   Label: core_morph.cpp_CMorph_FUN_0052b4b0
    PUSH ESI                            ; 0052b4b1
    PUSH EDI                            ; 0052b4b2
    PUSH EBP                            ; 0052b4b3
    MOV EDX,dword ptr [ESP + 0x30]      ; 0052b4b4
    PUSH EDX                            ; 0052b4b8
    MOV ECX,dword ptr [ESP + 0x30]      ; 0052b4b9
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0052b4bd
    PUSH ECX                            ; 0052b4c1
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0052b4c2
    MOV EDX,dword ptr [ESP + 0x20]      ; 0052b4c6
    PUSH 0x3c                           ; 0052b4ca
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0052b4cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052b4d0
    PUSH EBX                            ; 0052b4d7
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0052b4d8
    SUB EAX,EDX                         ; 0052b4dc
    PUSH ESI                            ; 0052b4de
    SHL EAX,0x6                         ; 0052b4df
    PUSH EDI                            ; 0052b4e2
    ADD EAX,EDX                         ; 0052b4e3
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0052b4e5
    SHL EAX,0x3                         ; 0052b4e9
    PUSH EBP                            ; 0052b4ec
    ADD EAX,EDX                         ; 0052b4ed
    PUSH EAX                            ; 0052b4ef
    CALL core_morph.cpp_CMorphModel_addPart_FUN_0052a580 ; 0052b4f0
        ;   XREF to: 0052a580 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPart_FUN_0052a580(CMorphModel * this_ptr)
    ADD ESP,0x20                        ; 0052b4f5
    POP EBP                             ; 0052b4f8
    POP EDI                             ; 0052b4f9
    POP ESI                             ; 0052b4fa
    POP EBX                             ; 0052b4fb
    RET                                 ; 0052b4fc

