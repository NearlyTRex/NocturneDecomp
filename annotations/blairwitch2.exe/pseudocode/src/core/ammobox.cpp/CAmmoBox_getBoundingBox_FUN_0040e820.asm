; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_ammobox_cpp_CAmmoBox_getBoundingBox_FUN_0040e820(CAmmoBox *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e820
        ;   Label: core_ammobox.cpp_CAmmoBox_getBoundingBox_FUN_0040e820
    PUSH EDI                            ; 0040e821
    SUB ESP,0x18                        ; 0040e822
    MOV EBX,ESI                         ; 0040e825
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040e827
    ADD EAX,0x2b4                       ; 0040e82b
    PUSH EAX                            ; 0040e830
    LEA EDI,[ESP + 0x4]                 ; 0040e831
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0040e835
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0040e83a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0040e83f
    ADD ESP,0x4                         ; 0040e845
    MOVSD.REP ES:EDI,ESI                ; 0040e848
    MOV ECX,0x6                         ; 0040e84a
    MOV ESI,ESP                         ; 0040e84f
    MOV EDI,EBX                         ; 0040e851
    MOVSD.REP ES:EDI,ESI                ; 0040e853
    MOV EAX,EBX                         ; 0040e855
    ADD ESP,0x18                        ; 0040e857
    POP EDI                             ; 0040e85a
    POP EBX                             ; 0040e85b
    RET                                 ; 0040e85c

