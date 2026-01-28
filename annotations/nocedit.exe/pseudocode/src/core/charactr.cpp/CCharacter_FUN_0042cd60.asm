; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_FUN_0042cd60(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_door.cpp_FUN_0047fcf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042cd60
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042cd60
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042cd61
    MOV EDX,dword ptr [EBX + 0x25b4]    ; 0042cd65
    TEST EDX,EDX                        ; 0042cd6b
    JNZ 0x0042cd71                      ; 0042cd6d
        ;   XREF to: 0042cd71 (CONDITIONAL_JUMP)  ; LAB_0042cd71
    POP EBX                             ; 0042cd6f
    RET                                 ; 0042cd70
    PUSH EDX                            ; 0042cd71
        ;   Label: LAB_0042cd71
    CALL core_door.cpp_FUN_0047fcf0     ; 0042cd72
        ;   XREF to: 0047fcf0 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_FUN_0047fcf0()
    ADD ESP,0x4                         ; 0042cd77
    MOV dword ptr [EBX + 0x25b4],0x0    ; 0042cd7a
    POP EBX                             ; 0042cd84
    RET                                 ; 0042cd85

