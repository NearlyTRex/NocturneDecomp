; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodPool * __cdecl core_gore_cpp_CGore_allocateBloodPool_FUN_004cebf0(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_CGore_createBloodPool_FUN_004cec40 at 004cec4f
;
; Referenced Globals:
;   undefined4 DAT_01d4a93c
;   undefined4 DAT_01d4a940
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x01d4a93c]      ; 004cebf0 | DAT_01d4a93c
        ;   Label: core_gore.cpp_CGore_allocateBloodPool_FUN_004cebf0
    LEA EAX,[ECX*0x4 + 0x0]             ; 004cebf6
    SUB EAX,ECX                         ; 004cebfd
    SHL EAX,0x2                         ; 004cebff
    SUB EAX,ECX                         ; 004cec02
    SHL EAX,0x2                         ; 004cec04
    INC ECX                             ; 004cec07
    ADD EAX,0x1d4a944                   ; 004cec08
    CMP ECX,0x20                        ; 004cec0d
    JL 0x004cec14                       ; 004cec10
        ;   XREF to: 004cec14 (CONDITIONAL_JUMP)  ; LAB_004cec14
    XOR ECX,ECX                         ; 004cec12
    MOV EDX,dword ptr [0x01d4a940]      ; 004cec14 | DAT_01d4a940
        ;   Label: LAB_004cec14
    CMP EDX,0x20                        ; 004cec1a
    JL 0x004cec26                       ; 004cec1d
        ;   XREF to: 004cec26 (CONDITIONAL_JUMP)  ; LAB_004cec26
    MOV dword ptr [0x01d4a93c],ECX      ; 004cec1f | DAT_01d4a93c
    RET                                 ; 004cec25
    PUSH EBX                            ; 004cec26
        ;   Label: LAB_004cec26
    LEA EBX,[EDX + 0x1]                 ; 004cec27
    MOV dword ptr [0x01d4a940],EBX      ; 004cec2a | DAT_01d4a940
    POP EBX                             ; 004cec30
    MOV dword ptr [0x01d4a93c],ECX      ; 004cec31 | DAT_01d4a93c
    RET                                 ; 004cec37

