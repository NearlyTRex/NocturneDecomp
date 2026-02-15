; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0(CDemonActor *this_ptr,int deleted_area_index)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   deleted_area_index
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040cfe0
        ;   Label: core_actor.cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0040cfe4
    MOV EDX,dword ptr [EAX + 0x2c]      ; 0040cfe8
    CMP EDX,ECX                         ; 0040cfeb
    JG 0x0040cff0                       ; 0040cfed
        ;   XREF to: 0040cff0 (CONDITIONAL_JUMP)  ; LAB_0040cff0
    RET                                 ; 0040cfef
    PUSH EBX                            ; 0040cff0
        ;   Label: LAB_0040cff0
    LEA EBX,[EDX + -0x1]                ; 0040cff1
    MOV dword ptr [EAX + 0x2c],EBX      ; 0040cff4
    POP EBX                             ; 0040cff7
    RET                                 ; 0040cff8

