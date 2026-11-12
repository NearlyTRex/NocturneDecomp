; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSps * core_sps_cpp_CSps_dtor_FUN_00568300(CSps *this_ptr,uint flags)
;
; Parameters:
; CSps *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSpsTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_0057aed0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568300
        ;   Label: core_sps.cpp_CSps_dtor_FUN_00568300
    MOV EBX,dword ptr [ESP + 0x8]       ; 00568301
    TEST byte ptr [ESP + 0xc],0x4       ; 00568305
    JNZ 0x00568326                      ; 0056830a
        ;   XREF to: 00568326 (CONDITIONAL_JUMP)  ; LAB_00568326
    PUSH 0x1                            ; 0056830c
    PUSH EBX                            ; 0056830e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_0057aed0 ; 0056830f
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_0057aed0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00568314
    MOV DL,byte ptr [ESP + 0xc]         ; 00568317
    MOV EBX,EAX                         ; 0056831b
    TEST DL,0x2                         ; 0056831d
    JNZ 0x00568341                      ; 00568320
        ;   XREF to: 00568341 (CONDITIONAL_JUMP)  ; LAB_00568341
    MOV EAX,EBX                         ; 00568322
    POP EBX                             ; 00568324
    RET                                 ; 00568325
    PUSH 0x5e4d90                       ; 00568326 | g_CSpsTypeInfo
        ;   Label: LAB_00568326
    PUSH EBX                            ; 0056832b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0056832c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00568331
    PUSH EAX                            ; 00568334
    CALL crt_unknown.c_FUN_005a30b6     ; 00568335
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0056833a
    MOV EAX,EBX                         ; 0056833d
    POP EBX                             ; 0056833f
    RET                                 ; 00568340
    PUSH EAX                            ; 00568341
        ;   Label: LAB_00568341
    CALL crt_unknown.c_FUN_005a30c4     ; 00568342
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00568347
    MOV EAX,EBX                         ; 0056834a
    POP EBX                             ; 0056834c
    RET                                 ; 0056834d

