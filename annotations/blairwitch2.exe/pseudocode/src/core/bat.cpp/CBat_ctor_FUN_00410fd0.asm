; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBat * __cdecl core_bat_cpp_CBat_ctor_FUN_00410fd0(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bat.cpp_factoryFuncBat_FUN_00410fa0 at 00410fb3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_course.cpp_CCourse_ctor_FUN_00438a50
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410fd0
        ;   Label: core_bat.cpp_CBat_ctor_FUN_00410fd0
    PUSH ESI                            ; 00410fd1
    PUSH EDI                            ; 00410fd2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00410fd3
    PUSH EBX                            ; 00410fd7
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 00410fd8
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00410fdd
    ADD EAX,0x2d4                       ; 00410fe0
    PUSH EAX                            ; 00410fe5
    CALL core_course.cpp_CCourse_ctor_FUN_00438a50 ; 00410fe6
        ;   XREF to: 00438a50 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_00438a50(CCourse * this_ptr)
    ADD ESP,0x4                         ; 00410feb
    ADD EAX,0x10                        ; 00410fee
    PUSH EAX                            ; 00410ff1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 00410ff2
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    LEA EBX,[EAX + 0xfffffd1c]          ; 00410ff7
    MOV dword ptr [EBX + 0x2b0],0x5f2db4 ; 00410ffd
    MOV dword ptr [EBX + 0x2e0],0x0     ; 00411007
    MOV dword ptr [EBX + 0x460],0x0     ; 00411011
    MOV ESI,0x5cb65b                    ; 0041101b
    MOV dword ptr [EBX + 0x464],0x41f00000 ; 00411020
    ADD ESP,0x4                         ; 0041102a
    MOV dword ptr [EBX + 0x468],0x3f800000 ; 0041102d
    LEA EDI,[EBX + 0x2b4]               ; 00411037
    MOV dword ptr [EBX + 0x46c],0x41f00000 ; 0041103d
    PUSH EDI                            ; 00411047
    MOV AL,byte ptr [ESI]               ; 00411048
        ;   Label: LAB_00411048
    MOV byte ptr [EDI],AL               ; 0041104a
    CMP AL,0x0                          ; 0041104c
    JZ 0x00411060                       ; 0041104e
        ;   XREF to: 00411060 (CONDITIONAL_JUMP)  ; LAB_00411060
    MOV AL,byte ptr [ESI + 0x1]         ; 00411050
    ADD ESI,0x2                         ; 00411053
    MOV byte ptr [EDI + 0x1],AL         ; 00411056
    ADD EDI,0x2                         ; 00411059
    CMP AL,0x0                          ; 0041105c
    JNZ 0x00411048                      ; 0041105e
        ;   XREF to: 00411048 (CONDITIONAL_JUMP)  ; LAB_00411048
    POP EDI                             ; 00411060
        ;   Label: LAB_00411060
    PUSH 0x5cb667                       ; 00411061
    LEA EAX,[EBX + 0x2e4]               ; 00411066
    PUSH EAX                            ; 0041106c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0041106d
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV byte ptr [EBX + 0x470],0x0      ; 00411072
    MOV dword ptr [EBX + 0x4d4],0x41700000 ; 00411079
    ADD ESP,0x8                         ; 00411083
    MOV dword ptr [EBX + 0x4d8],0x41f00000 ; 00411086
    MOV EAX,EBX                         ; 00411090
    MOV dword ptr [EBX + 0x4e0],0x0     ; 00411092
    POP EDI                             ; 0041109c
    POP ESI                             ; 0041109d
    POP EBX                             ; 0041109e
    RET                                 ; 0041109f

