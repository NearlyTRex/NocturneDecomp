; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0049677e(void)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   crt_unknown.c_FUN_005b7790
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0049677e
        ;   Label: core_fire.cpp_FUN_0049677e
    PUSH EBX                            ; 00496780
    PUSH ESI                            ; 00496781
    SUB ESP,0x64                        ; 00496782
    MOV EBX,0x1c3e4e8                   ; 00496785
    XOR ESI,ESI                         ; 0049678a
    INC ESI                             ; 0049678c
        ;   Label: LAB_0049678c
    PUSH ESI                            ; 0049678d
    PUSH 0x5d542a                       ; 0049678e
    LEA EAX,[ESP + 0x8]                 ; 00496793
    PUSH EAX                            ; 00496797
    CALL crt_unknown.c_FUN_005b7790     ; 00496798
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 0049679d
    MOV EAX,ESP                         ; 004967a0
    PUSH EAX                            ; 004967a2
    PUSH EBX                            ; 004967a3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004967a4
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004967a9
    PUSH EBX                            ; 004967ac
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 004967ad
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004967b2
    ADD EBX,0x17c                       ; 004967b5
    CMP ESI,0x4                         ; 004967bb
    JL 0x0049678c                       ; 004967be
        ;   XREF to: 0049678c (CONDITIONAL_JUMP)  ; LAB_0049678c
    ADD ESP,0x64                        ; 004967c0
    POP ESI                             ; 004967c3
    POP EBX                             ; 004967c4
    RET                                 ; 004967c5

