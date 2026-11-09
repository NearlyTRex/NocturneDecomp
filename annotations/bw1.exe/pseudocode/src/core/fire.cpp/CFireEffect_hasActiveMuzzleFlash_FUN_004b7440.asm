; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fire_cpp_CFireEffect_hasActiveMuzzleFlash_FUN_004b7440(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_FUN_00550da0 at 0055103e
;
; Referenced Globals:
;   undefined4 DAT_01c9f1bc
;   undefined4 DAT_01c9f218
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01c9f1bc]      ; 004b7440 | DAT_01c9f1bc
        ;   Label: core_fire.cpp_CFireEffect_hasActiveMuzzleFlash_FUN_004b7440
    XOR EAX,EAX                         ; 004b7446
    CMP EDX,0x1                         ; 004b7448
    JZ 0x004b7464                       ; 004b744b
        ;   XREF to: 004b7464 (CONDITIONAL_JUMP)  ; LAB_004b7464
    ADD EAX,0x5c                        ; 004b744d
        ;   Label: LAB_004b744d
    CMP EAX,0x730                       ; 004b7450
    JGE 0x004b4360                      ; 004b7455
        ;   XREF to: 004b4360 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x1c9f1bc],0x1 ; 004b745b | DAT_01c9f218
    JNZ 0x004b744d                      ; 004b7462
        ;   XREF to: 004b744d (CONDITIONAL_JUMP)  ; LAB_004b744d
    MOV EAX,0x1                         ; 004b7464
        ;   Label: LAB_004b7464
    RET                                 ; 004b7469

