; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_markResourcesInUse_FUN_0042b400(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_004088d0
;   core_skeleton.cpp_FUN_00550450
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b400
        ;   Label: core_charactr.cpp_CCharacter_markResourcesInUse_FUN_0042b400
    PUSH EDX                            ; 0042b404
    CALL core_actor.cpp_FUN_004088d0    ; 0042b405
        ;   XREF to: 004088d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004088d0()
    ADD ESP,0x4                         ; 0042b40a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042b40d
    MOV DL,byte ptr [EAX + 0x24a8]      ; 0042b411
    ADD EAX,0x24a8                      ; 0042b417
    TEST DL,DL                          ; 0042b41c
    JNZ 0x0042b421                      ; 0042b41e
        ;   XREF to: 0042b421 (CONDITIONAL_JUMP)  ; LAB_0042b421
    RET                                 ; 0042b420
    PUSH EAX                            ; 0042b421
        ;   Label: LAB_0042b421
    CALL core_skeleton.cpp_FUN_00550450 ; 0042b422
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00550450()
    ADD ESP,0x4                         ; 0042b427
    RET                                 ; 0042b42a

