; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004d41a0(CHero *this_ptr,int hand_index)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; XREF[2]:
;   core_prye.cpp_FUN_0051b550 at 0051b841
;   core_prye.cpp_FUN_00524940 at 00524bd6
;
; Called Functions:
;   core_inv.cpp_FUN_004da880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d41a0
        ;   Label: core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004d41a0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d41a1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d41a5
    SHL EAX,0x3                         ; 004d41a9
    MOV EDX,EAX                         ; 004d41ac
    SHL EAX,0x4                         ; 004d41ae
    SUB EAX,EDX                         ; 004d41b1
    LEA EBX,[ECX + EAX*0x1]             ; 004d41b3
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 004d41b6
    TEST EAX,EAX                        ; 004d41bc
    JNZ 0x004d41c2                      ; 004d41be
        ;   XREF to: 004d41c2 (CONDITIONAL_JUMP)  ; LAB_004d41c2
    POP EBX                             ; 004d41c0
    RET                                 ; 004d41c1
    PUSH 0x1                            ; 004d41c2
        ;   Label: LAB_004d41c2
    PUSH EAX                            ; 004d41c4
    LEA EAX,[ECX + 0x206e8]             ; 004d41c5
    PUSH EAX                            ; 004d41cb
    CALL core_inv.cpp_FUN_004da880      ; 004d41cc
        ;   XREF to: 004da880 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004da880(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004d41d1
    MOV dword ptr [EBX + 0x25b0],0x0    ; 004d41d4
    POP EBX                             ; 004d41de
    RET                                 ; 004d41df

