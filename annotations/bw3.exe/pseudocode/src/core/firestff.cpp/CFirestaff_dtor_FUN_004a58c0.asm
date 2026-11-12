; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFirestaff * core_firestff_cpp_CFirestaff_dtor_FUN_004a58c0(CFirestaff *this_ptr,uint flags)
;
; Parameters:
; CFirestaff *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFirestaffTypeInfo
;
; Called Functions:
;   core_firestff.cpp_FUN_004a5930
;   core_weapon.cpp_CWeapon_dtor_FUN_0057aed0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a58c0
        ;   Label: core_firestff.cpp_CFirestaff_dtor_FUN_004a58c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a58c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004a58c5
    JNZ 0x004a58fd                      ; 004a58ca
        ;   XREF to: 004a58fd (CONDITIONAL_JUMP)  ; LAB_004a58fd
    PUSH 0x0                            ; 004a58cc
    ADD EBX,0x614                       ; 004a58ce
    PUSH EBX                            ; 004a58d4
    CALL core_firestff.cpp_FUN_004a5930 ; 004a58d5
        ;   XREF to: 004a5930 (UNCONDITIONAL_CALL)  ; undefined core_firestff.cpp_FUN_004a5930()
    ADD ESP,0x8                         ; 004a58da
    PUSH 0x1                            ; 004a58dd
    LEA EBX,[EAX + 0xfffff9ec]          ; 004a58df
    PUSH EBX                            ; 004a58e5
    CALL core_weapon.cpp_CWeapon_dtor_FUN_0057aed0 ; 004a58e6
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_0057aed0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a58eb
    MOV DL,byte ptr [ESP + 0xc]         ; 004a58ee
    MOV EBX,EAX                         ; 004a58f2
    TEST DL,0x2                         ; 004a58f4
    JNZ 0x004a5918                      ; 004a58f7
        ;   XREF to: 004a5918 (CONDITIONAL_JUMP)  ; LAB_004a5918
    MOV EAX,EBX                         ; 004a58f9
    POP EBX                             ; 004a58fb
    RET                                 ; 004a58fc
    PUSH 0x5dfe30                       ; 004a58fd | g_CFirestaffTypeInfo
        ;   Label: LAB_004a58fd
    PUSH EBX                            ; 004a5902
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004a5903
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a5908
    PUSH EAX                            ; 004a590b
    CALL crt_unknown.c_FUN_005a30b6     ; 004a590c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004a5911
    MOV EAX,EBX                         ; 004a5914
    POP EBX                             ; 004a5916
    RET                                 ; 004a5917
    PUSH EAX                            ; 004a5918
        ;   Label: LAB_004a5918
    CALL crt_unknown.c_FUN_005a30c4     ; 004a5919
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004a591e
    MOV EAX,EBX                         ; 004a5921
    POP EBX                             ; 004a5923
    RET                                 ; 004a5924

