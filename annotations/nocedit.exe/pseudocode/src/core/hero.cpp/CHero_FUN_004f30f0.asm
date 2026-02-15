; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_FUN_004f30f0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_colonel.cpp_CColonel_process_FUN_0043fa00 at 0043fe15
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d4041
;   core_haystack.cpp_CHaystack_process_FUN_004f0e40 at 004f12a2
;   core_icepick.cpp_CIcePick_process_FUN_004f80b0 at 004f8625
;   core_stranger.cpp_CStranger_FUN_005bdd20 at 005be2fb
;   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 at 005d90dd
;
; Called Functions:
;   core_lever.cpp_CLever_FUN_00504c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f30f0
        ;   Label: core_hero.cpp_CHero_FUN_004f30f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f30f1
    MOV EDX,dword ptr [EBX + 0x1fba8]   ; 004f30f5
    XOR EAX,EAX                         ; 004f30fb
    TEST EDX,EDX                        ; 004f30fd
    JNZ 0x004f3103                      ; 004f30ff
        ;   XREF to: 004f3103 (CONDITIONAL_JUMP)  ; LAB_004f3103
    POP EBX                             ; 004f3101
    RET                                 ; 004f3102
    PUSH EDX                            ; 004f3103
        ;   Label: LAB_004f3103
    CALL core_lever.cpp_CLever_FUN_00504c90 ; 004f3104
        ;   XREF to: 00504c90 (UNCONDITIONAL_CALL)  ; void core_lever.cpp_CLever_FUN_00504c90(CLever * this_ptr)
    MOV EAX,0x1                         ; 004f3109
    ADD ESP,0x4                         ; 004f310e
    MOV dword ptr [EBX + 0x1fba8],0x0   ; 004f3111
    POP EBX                             ; 004f311b
    RET                                 ; 004f311c

