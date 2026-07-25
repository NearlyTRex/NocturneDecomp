; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040eb40(void)
;
;
; XREF[1]:
;   FUN_0040eb10 at 0040eb1c
;
; Called Functions:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040eb70
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x314                          ; 0040eb40
        ;   Label: FUN_0040eb40
    CALL FUN_0056497c                   ; 0040eb45
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0040eb4a
    TEST EAX,EAX                        ; 0040eb4d
    JNZ 0x0040eb52                      ; 0040eb4f
        ;   XREF to: 0040eb52 (CONDITIONAL_JUMP)  ; LAB_0040eb52
    RET                                 ; 0040eb51
    PUSH EAX                            ; 0040eb52
        ;   Label: LAB_0040eb52
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040eb70 ; 0040eb53
        ;   XREF to: 0040eb70 (UNCONDITIONAL_CALL)  ; undefined core_ammo.cpp_CAmmo_ctor_FUN_0040eb70()
    ADD ESP,0x4                         ; 0040eb58
    RET                                 ; 0040eb5b

