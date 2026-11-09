; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_FUN_005bdf60(CZombie *this_ptr,int object_shape_type)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   object_shape_type
;
; XREF[1]:
;   core_zombie.cpp_FUN_005bd560 at 005bd7a4
;
; Called Functions:
;   core_zombie.cpp_FUN_005bdec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bdf60
        ;   Label: core_zombie.cpp_FUN_005bdf60
    MOV EBX,dword ptr [ESP + 0x8]       ; 005bdf61
    MOV EDX,dword ptr [ESP + 0xc]       ; 005bdf65
    PUSH EDX                            ; 005bdf69
    PUSH EBX                            ; 005bdf6a
    CALL core_zombie.cpp_FUN_005bdec0   ; 005bdf6b
        ;   XREF to: 005bdec0 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_005bdec0(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 005bdf70
    TEST EAX,EAX                        ; 005bdf73
    JL 0x005bdf95                       ; 005bdf75
        ;   XREF to: 005bdf95 (CONDITIONAL_JUMP)  ; LAB_005bdf95
    SHL EAX,0x3                         ; 005bdf77
    MOV EDX,EAX                         ; 005bdf7a
    SHL EAX,0x4                         ; 005bdf7c
    SUB EAX,EDX                         ; 005bdf7f
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x25ac] ; 005bdf81
    TEST EAX,EAX                        ; 005bdf88
    JL 0x005bdf95                       ; 005bdf8a
        ;   XREF to: 005bdf95 (CONDITIONAL_JUMP)  ; LAB_005bdf95
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 005bdf8c
    POP EBX                             ; 005bdf93
    RET                                 ; 005bdf94
    XOR EAX,EAX                         ; 005bdf95
        ;   Label: LAB_005bdf95
    POP EBX                             ; 005bdf97
    RET                                 ; 005bdf98

