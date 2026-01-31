; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hero_cpp_CHero_FUN_004f38d0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_gabriela.cpp_CGabriella_FUN_004d4890 at 004d49b8
;   core_stranger.cpp_CStranger_FUN_005bdd20 at 005bdfc3
;   core_stranger.cpp_CStranger_FUN_005c5270 at 005c542a
;
; Called Functions:
;   core_inv.cpp_CInventory_addItem_FUN_004fd600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f38d0
        ;   Label: core_hero.cpp_CHero_FUN_004f38d0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f38d1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f38d5
    MOV EAX,EDX                         ; 004f38d9
    SHL EAX,0x4                         ; 004f38db
    ADD EAX,EDX                         ; 004f38de
    SHL EAX,0x2                         ; 004f38e0
    LEA EBX,[ECX + EAX*0x1]             ; 004f38e3
    MOV EAX,dword ptr [EBX + 0x24b4]    ; 004f38e6
    TEST EAX,EAX                        ; 004f38ec
    JNZ 0x004f38f2                      ; 004f38ee
        ;   XREF to: 004f38f2 (CONDITIONAL_JUMP)  ; LAB_004f38f2
    POP EBX                             ; 004f38f0
    RET                                 ; 004f38f1
    PUSH 0x1                            ; 004f38f2
        ;   Label: LAB_004f38f2
    PUSH EAX                            ; 004f38f4
    LEA EAX,[ECX + 0x1f738]             ; 004f38f5
    PUSH EAX                            ; 004f38fb
    CALL core_inv.cpp_CInventory_addItem_FUN_004fd600 ; 004f38fc
        ;   XREF to: 004fd600 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004fd600(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004f3901
    MOV dword ptr [EBX + 0x24b4],0x0    ; 004f3904
    POP EBX                             ; 004f390e
    RET                                 ; 004f390f

