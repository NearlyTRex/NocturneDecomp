; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moon_cpp_CMoon_free_FUN_004dea60(CMoon *this_ptr)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_menu.cpp_FUN_004d23d0 at 004d2780
;   core_menu.cpp_showOptionsScreen_FUN_004d21c0 at 004d2394
;   core_moon.cpp_CMoon_dtor_FUN_004de830 at 004de836
;
; Referenced Globals:
;   CAlphaBitmap g_CAlphaBitmap_01ccdc50
;
; Called Functions:
;   core_course.cpp_CCourse_free_FUN_0043b7c0
;   core_dmodel.cpp_CKeyFramedModel_FUN_00452f10
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dea60
        ;   Label: core_moon.cpp_CMoon_free_FUN_004dea60
    PUSH ESI                            ; 004dea61
    PUSH EDI                            ; 004dea62
    MOV EDI,dword ptr [ESP + 0x10]      ; 004dea63
    CMP dword ptr [EDI],0x0             ; 004dea67
    JNZ 0x004deaa1                      ; 004dea6a
        ;   XREF to: 004deaa1 (CONDITIONAL_JUMP)  ; LAB_004deaa1
    MOV EBX,0x1ccdec8                   ; 004dea6c
        ;   Label: LAB_004dea6c
    LEA ESI,[EBX + 0x24]                ; 004dea71
    PUSH EBX                            ; 004dea74
        ;   Label: LAB_004dea74
    CALL core_course.cpp_CCourse_free_FUN_0043b7c0 ; 004dea75
        ;   XREF to: 0043b7c0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_free_FUN_0043b7c0(CCourse * this_ptr)
    ADD EBX,0xc                         ; 004dea7a
    ADD ESP,0x4                         ; 004dea7d
    CMP EBX,ESI                         ; 004dea80
    JNZ 0x004dea74                      ; 004dea82
        ;   XREF to: 004dea74 (CONDITIONAL_JUMP)  ; LAB_004dea74
    LEA EBX,[EDI + 0x8]                 ; 004dea84
    PUSH EBX                            ; 004dea87
    CALL core_dmodel.cpp_CKeyFramedModel_FUN_00452f10 ; 004dea88
        ;   XREF to: 00452f10 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_FUN_00452f10(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 004dea8d
    PUSH 0x1cce1bc                      ; 004dea90
    CALL core_dmodel.cpp_CKeyFramedModel_FUN_00452f10 ; 004dea95
        ;   XREF to: 00452f10 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_FUN_00452f10(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 004dea9a
    POP EDI                             ; 004dea9d
    POP ESI                             ; 004dea9e
    POP EBX                             ; 004dea9f
    RET                                 ; 004deaa0
    PUSH 0x1ccdc50                      ; 004deaa1 | g_CAlphaBitmap_01ccdc50
        ;   Label: LAB_004deaa1
    MOV EBX,0x1ccdc64                   ; 004deaa6
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360 ; 004deaab
        ;   XREF to: 0040e360 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004deab0
    LEA ESI,[EBX + 0x258]               ; 004deab3
    PUSH EBX                            ; 004deab9
        ;   Label: LAB_004deab9
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360 ; 004deaba
        ;   XREF to: 0040e360 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004deabf
    ADD ESP,0x4                         ; 004deac2
    CMP EBX,ESI                         ; 004deac5
    JNZ 0x004deab9                      ; 004deac7
        ;   XREF to: 004deab9 (CONDITIONAL_JUMP)  ; LAB_004deab9
    MOV dword ptr [EDI],0x0             ; 004deac9
    JMP 0x004dea6c                      ; 004deacf
        ;   XREF to: 004dea6c (UNCONDITIONAL_JUMP)  ; LAB_004dea6c

