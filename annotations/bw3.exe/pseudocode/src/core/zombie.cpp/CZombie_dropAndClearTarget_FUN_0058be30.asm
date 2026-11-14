; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_CZombie_dropAndClearTarget_FUN_0058be30(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_zombie.cpp_CZombie_processDamage_FUN_0058c5a0 at 0058c672
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058be30
        ;   Label: core_zombie.cpp_CZombie_dropAndClearTarget_FUN_0058be30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058be31
    PUSH 0x0                            ; 0058be35
    PUSH 0x0                            ; 0058be37
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058be39
    PUSH EBX                            ; 0058be3f
    MOV dword ptr [EBX + 0xd064],0x0    ; 0058be40
    CALL dword ptr [EAX + 0x128]        ; 0058be4a
    ADD ESP,0xc                         ; 0058be50
    PUSH 0x0                            ; 0058be53
    PUSH 0x1                            ; 0058be55
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058be57
    PUSH EBX                            ; 0058be5d
    CALL dword ptr [EAX + 0x128]        ; 0058be5e
    ADD ESP,0xc                         ; 0058be64
    POP EBX                             ; 0058be67
    RET                                 ; 0058be68

