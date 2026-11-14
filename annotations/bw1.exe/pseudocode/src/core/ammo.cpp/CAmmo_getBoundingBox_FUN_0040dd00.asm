; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_ammo_cpp_CAmmo_getBoundingBox_FUN_0040dd00(CAmmo *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040dd00
        ;   Label: core_ammo.cpp_CAmmo_getBoundingBox_FUN_0040dd00
    PUSH EDI                            ; 0040dd01
    SUB ESP,0x18                        ; 0040dd02
    MOV EBX,ESI                         ; 0040dd05
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040dd07
    ADD EAX,0x158                       ; 0040dd0b
    PUSH EAX                            ; 0040dd10
    LEA EDI,[ESP + 0x4]                 ; 0040dd11
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 0040dd15
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0040dd1a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0040dd1f
    ADD ESP,0x4                         ; 0040dd25
    MOVSD.REP ES:EDI,ESI                ; 0040dd28
    MOV ECX,0x6                         ; 0040dd2a
    MOV ESI,ESP                         ; 0040dd2f
    MOV EDI,EBX                         ; 0040dd31
    MOVSD.REP ES:EDI,ESI                ; 0040dd33
    MOV EAX,EBX                         ; 0040dd35
    ADD ESP,0x18                        ; 0040dd37
    POP EDI                             ; 0040dd3a
    POP EBX                             ; 0040dd3b
    RET                                 ; 0040dd3c

