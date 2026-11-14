; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CIcePick * __cdecl core_icepick_cpp_CIcePick_ctor_FUN_004f0b90(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_icepick.cpp_factoryFuncIcePick_FUN_004f0b60 at 004f0b73
;
; Called Functions:
;   core_hero.cpp_CHero_ctor_FUN_004ea830
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0b90
        ;   Label: core_icepick.cpp_CIcePick_ctor_FUN_004f0b90
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f0b91
    PUSH EDX                            ; 004f0b95
    CALL core_hero.cpp_CHero_ctor_FUN_004ea830 ; 004f0b96
        ;   XREF to: 004ea830 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_ctor_FUN_004ea830(CHero * this_ptr)
    MOV EBX,EAX                         ; 004f0b9b
    ADD EAX,0x158                       ; 004f0b9d
    ADD ESP,0x4                         ; 004f0ba2
    MOV dword ptr [EAX + -0x4],0x602634 ; 004f0ba5
    PUSH 0x5e5258                       ; 004f0bac
    MOV dword ptr [EAX + 0x1fe54],0x0   ; 004f0bb1
    PUSH EAX                            ; 004f0bbb
    MOV dword ptr [EAX + 0x1fe58],0x0   ; 004f0bbc
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 004f0bc6
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x1ffbc]             ; 004f0bcb
    MOV dword ptr [EBX + 0x1ffc8],0x3f800000 ; 004f0bd1
    MOV dword ptr [EAX + 0x8],0x0       ; 004f0bdb
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f0be2
    MOV dword ptr [EAX + 0x4],EDX       ; 004f0be5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f0be8
    MOV dword ptr [EAX],EDX             ; 004f0beb
    MOV dword ptr [EBX + 0x1ffcc],0x0   ; 004f0bed
    ADD ESP,0x8                         ; 004f0bf7
    MOV dword ptr [EBX + 0x1ffd0],0x0   ; 004f0bfa
    MOV EAX,EBX                         ; 004f0c04
    MOV dword ptr [EBX + 0x2538],0x43960000 ; 004f0c06
    POP EBX                             ; 004f0c10
    RET                                 ; 004f0c11

