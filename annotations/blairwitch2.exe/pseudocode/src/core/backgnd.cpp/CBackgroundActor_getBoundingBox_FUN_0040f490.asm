; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_backgnd_cpp_CBackgroundActor_getBoundingBox_FUN_0040f490(CBackgroundActor *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f490
        ;   Label: core_backgnd.cpp_CBackgroundActor_getBoundingBox_FUN_0040f490
    PUSH EDI                            ; 0040f491
    SUB ESP,0x18                        ; 0040f492
    MOV EBX,ESI                         ; 0040f495
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040f497
    ADD EAX,0x2b8                       ; 0040f49b
    PUSH EAX                            ; 0040f4a0
    LEA EDI,[ESP + 0x4]                 ; 0040f4a1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0040f4a5
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0040f4aa
    MOV ESI,dword ptr [EAX + 0x350]     ; 0040f4af
    ADD ESP,0x4                         ; 0040f4b5
    MOVSD.REP ES:EDI,ESI                ; 0040f4b8
    MOV ECX,0x6                         ; 0040f4ba
    MOV ESI,ESP                         ; 0040f4bf
    MOV EDI,EBX                         ; 0040f4c1
    MOVSD.REP ES:EDI,ESI                ; 0040f4c3
    MOV EAX,EBX                         ; 0040f4c5
    ADD ESP,0x18                        ; 0040f4c7
    POP EDI                             ; 0040f4ca
    POP EBX                             ; 0040f4cb
    RET                                 ; 0040f4cc

