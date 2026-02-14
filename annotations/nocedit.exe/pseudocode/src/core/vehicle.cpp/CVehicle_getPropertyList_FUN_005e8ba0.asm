; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_vehicle_cpp_CVehicle_getPropertyList_FUN_005e8ba0(CVehicle *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_00656f69
;   TerminatedCString s_s_tire_00656f7b
;   TerminatedCString s_bpos_00656f83
;   TerminatedCString s_Current_time_00656f88
;   TerminatedCString s_Total_time_00656f95
;   TerminatedCString s_Course_name_00656fa0
;   TerminatedCString s_Left_front_00656fb5
;   TerminatedCString s_Right_front_00656fc0
;   void* PTR_s_Left_front_00684480 = 00656fb5
;   void* PTR_s_Right_front_00684484 = 00656fc0
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
;   core_actor.cpp_CActorPropertyList_addString_FUN_0040e290
;   core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e8ba0
        ;   Label: core_vehicle.cpp_CVehicle_getPropertyList_FUN_005e8ba0
    PUSH EBP                            ; 005e8ba1
    SUB ESP,0x108                       ; 005e8ba2
    MOV EBP,dword ptr [ESP + 0x118]     ; 005e8ba8
    PUSH EBP                            ; 005e8baf
    MOV EDX,dword ptr [ESP + 0x118]     ; 005e8bb0
    PUSH EDX                            ; 005e8bb7
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 005e8bb8
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 005e8bbd
    MOV EAX,dword ptr [ESP + 0x114]     ; 005e8bc0
    PUSH 0x0                            ; 005e8bc7
    ADD EAX,0x158                       ; 005e8bc9
    PUSH EAX                            ; 005e8bce
    PUSH 0x656f69                       ; 005e8bcf | = "Model file (.kfm)"
    PUSH EBP                            ; 005e8bd4
    CALL core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0 ; 005e8bd5
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(CActorPropertyList * this_ptr, char * property_name, CKeyFramedModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 005e8bda
    MOV EAX,dword ptr [ESP + 0x114]     ; 005e8bdd
    MOV ECX,dword ptr [EAX + 0x938]     ; 005e8be4
    XOR EBX,EBX                         ; 005e8bea
    TEST ECX,ECX                        ; 005e8bec
    JLE 0x005e8c86                      ; 005e8bee
        ;   XREF to: 005e8c86 (CONDITIONAL_JUMP)  ; LAB_005e8c86
    PUSH EDI                            ; 005e8bf4
    PUSH ESI                            ; 005e8bf5
    MOV ESI,dword ptr [ESP + 0x11c]     ; 005e8bf6
    ADD EAX,0x93c                       ; 005e8bfd
    XOR EDI,EDI                         ; 005e8c02
    ADD ESI,0x950                       ; 005e8c04
    MOV dword ptr [ESP + 0x10c],EAX     ; 005e8c0a
    MOV EAX,dword ptr [EDI + 0x684480]  ; 005e8c11 | PTR_s_Left_front_00684480 | PTR_s_Right_front_00684484
        ;   Label: LAB_005e8c11
    PUSH EAX                            ; 005e8c17 | = "Left front" | s_Right_front_00656fc0
    PUSH 0x656f7b                       ; 005e8c18 | = "%s tire"
    LEA EAX,[ESP + 0x10]                ; 005e8c1d
    PUSH EAX                            ; 005e8c21
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005e8c22
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    IMUL EAX,EBX,0x1b4                  ; 005e8c27
    ADD ESP,0xc                         ; 005e8c2d
    PUSH 0x0                            ; 005e8c30
    MOV EDX,dword ptr [ESP + 0x110]     ; 005e8c32
    PUSH ESI                            ; 005e8c39
    ADD EDX,EAX                         ; 005e8c3a
    LEA EAX,[ESP + 0x10]                ; 005e8c3c
    PUSH EAX                            ; 005e8c40
    PUSH EBP                            ; 005e8c41
    MOV dword ptr [ESP + 0x118],EDX     ; 005e8c42
    CALL core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0 ; 005e8c49
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(CActorPropertyList * this_ptr, char * property_name, CKeyFramedModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 005e8c4e
    PUSH 0x0                            ; 005e8c51
    MOV EDX,dword ptr [ESP + 0x10c]     ; 005e8c53
    PUSH EDX                            ; 005e8c5a
    PUSH 0x656f83                       ; 005e8c5b | = "bpos"
    PUSH EBP                            ; 005e8c60
    CALL core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260 ; 005e8c61
        ;   XREF to: 0040e260 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260(CActorPropertyList * this_ptr, char * property_name, CVector3f * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005e8c66
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005e8c69
    ADD EDI,0x4                         ; 005e8c70
    INC EBX                             ; 005e8c73
    MOV ECX,dword ptr [EAX + 0x938]     ; 005e8c74
    ADD ESI,0x1b4                       ; 005e8c7a
    CMP EBX,ECX                         ; 005e8c80
    JL 0x005e8c11                       ; 005e8c82
        ;   XREF to: 005e8c11 (CONDITIONAL_JUMP)  ; LAB_005e8c11
    POP ESI                             ; 005e8c84
    POP EDI                             ; 005e8c85
    MOV EAX,dword ptr [ESP + 0x114]     ; 005e8c86
        ;   Label: LAB_005e8c86
    PUSH 0x0                            ; 005e8c8d
    ADD EAX,0x102c                      ; 005e8c8f
    PUSH EAX                            ; 005e8c94
    PUSH 0x656f88                       ; 005e8c95 | = "Current time"
    PUSH EBP                            ; 005e8c9a
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005e8c9b
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005e8ca0
    MOV EAX,dword ptr [ESP + 0x114]     ; 005e8ca3
    PUSH 0x0                            ; 005e8caa
    ADD EAX,0x1030                      ; 005e8cac
    PUSH EAX                            ; 005e8cb1
    PUSH 0x656f95                       ; 005e8cb2 | = "Total time"
    PUSH EBP                            ; 005e8cb7
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005e8cb8
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005e8cbd
    PUSH 0x0                            ; 005e8cc0
    MOV EAX,dword ptr [ESP + 0x118]     ; 005e8cc2
    PUSH 0x1f                           ; 005e8cc9
    ADD EAX,0x1034                      ; 005e8ccb
    PUSH EAX                            ; 005e8cd0
    PUSH 0x656fa0                       ; 005e8cd1 | = "Course name"
    PUSH EBP                            ; 005e8cd6
    CALL core_actor.cpp_CActorPropertyList_addString_FUN_0040e290 ; 005e8cd7
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList * this_ptr, char * property_name, char * data_ptr, int max_length, ...)
    ADD ESP,0x14                        ; 005e8cdc
    ADD ESP,0x108                       ; 005e8cdf
    POP EBP                             ; 005e8ce5
    POP EBX                             ; 005e8ce6
    RET                                 ; 005e8ce7

