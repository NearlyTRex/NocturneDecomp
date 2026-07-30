; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel ** core_bat_cpp_FUN_00411a10(CDemonActor *param_1)
;
;
; XREF[1]:
;   core_bat.cpp_factoryFunc_FUN_004119e0 at 004119f3
;
; Referenced Globals:
;   TerminatedCString s_batpath_pth_0057877c
;   undefined4 s_batpath_pth_0057877c+1
;   undefined4 s_batpath_pth_0057877c+2
;   undefined4 s_batpath_pth_0057877c+3
;   TerminatedCString s_bat_kfm_00578788
;   CDemonActor_vtable g_CBatVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30
;   core_course.cpp_CCourse_ctor_FUN_0043b5d0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411a10
        ;   Label: core_bat.cpp_FUN_00411a10
    PUSH ESI                            ; 00411a11
    PUSH EDI                            ; 00411a12
    MOV EBX,dword ptr [ESP + 0x10]      ; 00411a13
    PUSH EBX                            ; 00411a17
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00409d30 ; 00411a18
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00411a1d
    ADD EAX,0x170                       ; 00411a20
    PUSH EAX                            ; 00411a25
    CALL core_course.cpp_CCourse_ctor_FUN_0043b5d0 ; 00411a26
        ;   XREF to: 0043b5d0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_0043b5d0(CCourse * this_ptr)
    ADD ESP,0x4                         ; 00411a2b
    ADD EAX,0x10                        ; 00411a2e
    PUSH EAX                            ; 00411a31
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 00411a32
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    LEA EBX,[EAX + 0xfffffe80]          ; 00411a37
    MOV dword ptr [EBX + 0x14c],0x599e94 ; 00411a3d | g_CBatVTable
    MOV dword ptr [EBX + 0x17c],0x0     ; 00411a47
    MOV dword ptr [EBX + 0x2fc],0x0     ; 00411a51
    MOV ESI,0x57877c                    ; 00411a5b | = "batpath.pth"
    MOV dword ptr [EBX + 0x300],0x41f00000 ; 00411a60
    ADD ESP,0x4                         ; 00411a6a
    MOV dword ptr [EBX + 0x304],0x3f800000 ; 00411a6d
    LEA EDI,[EBX + 0x150]               ; 00411a77
    MOV dword ptr [EBX + 0x308],0x41f00000 ; 00411a7d
    PUSH EDI                            ; 00411a87
    MOV AL,byte ptr [ESI]               ; 00411a88 | = "batpath.pth" | s_batpath_pth_0057877c+2
        ;   Label: LAB_00411a88
    MOV byte ptr [EDI],AL               ; 00411a8a
    CMP AL,0x0                          ; 00411a8c
    JZ 0x00411aa0                       ; 00411a8e
        ;   XREF to: 00411aa0 (CONDITIONAL_JUMP)  ; LAB_00411aa0
    MOV AL,byte ptr [ESI + 0x1]         ; 00411a90 | s_batpath_pth_0057877c+1 | s_batpath_pth_0057877c+3
    ADD ESI,0x2                         ; 00411a93
    MOV byte ptr [EDI + 0x1],AL         ; 00411a96
    ADD EDI,0x2                         ; 00411a99
    CMP AL,0x0                          ; 00411a9c
    JNZ 0x00411a88                      ; 00411a9e
        ;   XREF to: 00411a88 (CONDITIONAL_JUMP)  ; LAB_00411a88
    POP EDI                             ; 00411aa0
        ;   Label: LAB_00411aa0
    PUSH 0x578788                       ; 00411aa1 | = "bat.kfm"
    LEA EAX,[EBX + 0x180]               ; 00411aa6
    PUSH EAX                            ; 00411aac
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00411aad
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV byte ptr [EBX + 0x30c],0x0      ; 00411ab2
    MOV dword ptr [EBX + 0x370],0x41700000 ; 00411ab9
    ADD ESP,0x8                         ; 00411ac3
    MOV dword ptr [EBX + 0x374],0x41f00000 ; 00411ac6
    MOV EAX,EBX                         ; 00411ad0
    MOV dword ptr [EBX + 0x37c],0x0     ; 00411ad2
    POP EDI                             ; 00411adc
    POP ESI                             ; 00411add
    POP EBX                             ; 00411ade
    RET                                 ; 00411adf

