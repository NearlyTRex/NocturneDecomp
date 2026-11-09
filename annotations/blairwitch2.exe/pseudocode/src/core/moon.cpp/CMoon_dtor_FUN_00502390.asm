; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMoon * core_moon_cpp_CMoon_dtor_FUN_00502390(CMoon *this_ptr,uint flags)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_0044dcb0
;   core_moon.cpp_FUN_00502450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502390
        ;   Label: core_moon.cpp_CMoon_dtor_FUN_00502390
    MOV EBX,dword ptr [ESP + 0x8]       ; 00502391
    PUSH EBX                            ; 00502395
    CALL core_moon.cpp_FUN_00502450     ; 00502396
        ;   XREF to: 00502450 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_00502450()
    ADD ESP,0x4                         ; 0050239b
    PUSH 0x0                            ; 0050239e
    ADD EBX,0x738                       ; 005023a0
    PUSH EBX                            ; 005023a6
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_0044dcb0 ; 005023a7
        ;   XREF to: 0044dcb0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_0044dcb0(CKeyFramedModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005023ac
    PUSH 0x0                            ; 005023af
    SUB EAX,0x398                       ; 005023b1
    PUSH EAX                            ; 005023b6
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_0044dcb0 ; 005023b7
        ;   XREF to: 0044dcb0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_0044dcb0(CKeyFramedModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005023bc
    PUSH 0x0                            ; 005023bf
    SUB EAX,0x398                       ; 005023c1
    PUSH EAX                            ; 005023c6
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_0044dcb0 ; 005023c7
        ;   XREF to: 0044dcb0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_0044dcb0(CKeyFramedModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005023cc
    SUB EAX,0x8                         ; 005023cf
    POP EBX                             ; 005023d2
    RET                                 ; 005023d3

