; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFrankenstienMachine * core_frankgen.cpp_FUN_004d1720(CFrankenstienMachine * this_ptr)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_frankgen.cpp_FUN_004d16e0 at 004d16fa
;
; Referenced Globals:
;   CDemonActor_vtable PTR_core_frankgen.cpp_FUN_0065e684
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_course.cpp_CCourse_ctor_FUN_004424c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d1720
        ;   Label: core_frankgen.cpp_FUN_004d1720
    PUSH EAX                            ; 004d1724
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 004d1725
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d172a
    ADD EAX,0x184                       ; 004d172d
    PUSH EAX                            ; 004d1732
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004d1733
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d1738
    ADD EAX,0x17c                       ; 004d173b
    PUSH EAX                            ; 004d1740
    CALL core_course.cpp_CCourse_ctor_FUN_004424c0 ; 004d1741
        ;   XREF to: 004424c0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_004424c0(CCourse * this_ptr)
    ADD ESP,0x4                         ; 004d1746
    ADD EAX,0xc                         ; 004d1749
    PUSH EAX                            ; 004d174c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004d174d
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    MOV dword ptr [EAX + 0xfffffe48],0x65e684 ; 004d1752 | PTR_core_frankgen.cpp_FUN_0065e684
    MOV dword ptr [EAX + 0xfffffe50],0x0 ; 004d175c
    MOV byte ptr [EAX + 0xfffffe54],0x0 ; 004d1766
    MOV dword ptr [EAX + 0xfffffe74],0x0 ; 004d176d
    ADD ESP,0x4                         ; 004d1777
    MOV dword ptr [EAX + 0x180],0x0     ; 004d177a
    SUB EAX,0x30c                       ; 004d1784
    RET                                 ; 004d1789

