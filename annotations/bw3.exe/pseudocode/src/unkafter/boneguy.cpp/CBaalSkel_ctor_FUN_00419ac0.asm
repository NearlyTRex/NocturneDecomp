; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBaalSkel * unkafter_boneguy_cpp_CBaalSkel_ctor_FUN_00419ac0(CBaalSkel *this_ptr)
;
; Parameters:
; CBaalSkel *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_boneguy.cpp_FUN_00419a90 at 00419aa3
;
; Called Functions:
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400
;   core_skeleton.cpp_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419ac0
        ;   Label: unkafter_boneguy.cpp_CBaalSkel_ctor_FUN_00419ac0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00419ac1
    PUSH EDX                            ; 00419ac5
    CALL core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400 ; 00419ac6
        ;   XREF to: 00417400 (UNCONDITIONAL_CALL)  ; CBoneGuy * core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400(CBoneGuy * this_ptr)
    ADD ESP,0x4                         ; 00419acb
    PUSH 0x5b71a6                       ; 00419ace
    MOV EBX,EAX                         ; 00419ad3
    ADD EAX,0x158                       ; 00419ad5
    PUSH EAX                            ; 00419ada
    MOV dword ptr [EAX + -0x4],0x5dc6d4 ; 00419adb
    CALL core_skeleton.cpp_FUN_0054eae0 ; 00419ae2
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054eae0()
    MOV dword ptr [EBX + 0x2538],0x41200000 ; 00419ae7
    MOV dword ptr [EBX + 0xce5c],0x40a00000 ; 00419af1
    MOV dword ptr [EBX + 0xce60],0x40a00000 ; 00419afb
    ADD ESP,0x8                         ; 00419b05
    MOV dword ptr [EBX + 0xd074],0x4    ; 00419b08
    MOV EAX,EBX                         ; 00419b12
    MOV EDX,dword ptr [EBX + 0x2538]    ; 00419b14
    MOV dword ptr [EBX + 0xd058],EDX    ; 00419b1a
    POP EBX                             ; 00419b20
    RET                                 ; 00419b21

