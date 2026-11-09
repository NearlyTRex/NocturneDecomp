; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_shotgun_cpp_CShotgun_getDamage_FUN_005620c0(CShotgun *this_ptr)
;
; Parameters:
; CShotgun *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc00
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005620c0
        ;   Label: core_shotgun.cpp_CShotgun_getDamage_FUN_005620c0
    MOV EAX,dword ptr [ESP + 0xc]       ; 005620c3
    CMP dword ptr [EAX + 0x56c],0x6     ; 005620c7
    JNZ 0x005620dc                      ; 005620ce
        ;   XREF to: 005620dc (CONDITIONAL_JUMP)  ; LAB_005620dc
    XOR ECX,ECX                         ; 005620d0
    MOV dword ptr [ESP],ECX             ; 005620d2
    MOV EAX,dword ptr [ESP]             ; 005620d5
    ADD ESP,0x8                         ; 005620d8
    RET                                 ; 005620db
    PUSH 0x43480000                     ; 005620dc
        ;   Label: LAB_005620dc
    PUSH 0x43160000                     ; 005620e1
    CALL core_actor.cpp_FUN_0040cc00    ; 005620e6
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0xc],EAX       ; 005620eb
    FLD float ptr [ESP + 0xc]           ; 005620ef
    ADD ESP,0x8                         ; 005620f3
    FSTP float ptr [ESP]                ; 005620f6
    MOV EAX,dword ptr [ESP]             ; 005620f9
    ADD ESP,0x8                         ; 005620fc
    RET                                 ; 005620ff

