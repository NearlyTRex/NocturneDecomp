; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_door_cpp_CDoor_getBoundingBox_FUN_00464bd0(CDoor *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00464bd0
        ;   Label: core_door.cpp_CDoor_getBoundingBox_FUN_00464bd0
    PUSH EDI                            ; 00464bd1
    SUB ESP,0x18                        ; 00464bd2
    MOV EBX,ESI                         ; 00464bd5
    MOV EAX,dword ptr [ESP + 0x24]      ; 00464bd7
    ADD EAX,0x158                       ; 00464bdb
    PUSH EAX                            ; 00464be0
    LEA EDI,[ESP + 0x4]                 ; 00464be1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00464be5
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 00464bea
    MOV ESI,dword ptr [EAX + 0x350]     ; 00464bef
    ADD ESP,0x4                         ; 00464bf5
    MOVSD.REP ES:EDI,ESI                ; 00464bf8
    MOV ECX,0x6                         ; 00464bfa
    MOV ESI,ESP                         ; 00464bff
    MOV EDI,EBX                         ; 00464c01
    MOVSD.REP ES:EDI,ESI                ; 00464c03
    MOV EAX,EBX                         ; 00464c05
    ADD ESP,0x18                        ; 00464c07
    POP EDI                             ; 00464c0a
    POP EBX                             ; 00464c0b
    RET                                 ; 00464c0c

