; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_weapon_cpp_CWeapon_getMuzzlePoint_FUN_0058a230(CWeapon *this_ptr,CVector3f *out_point)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058a230
        ;   Label: core_weapon.cpp_CWeapon_getMuzzlePoint_FUN_0058a230
    PUSH EDI                            ; 0058a231
    SUB ESP,0x24                        ; 0058a232
    MOV EBX,ESI                         ; 0058a235
    MOV EAX,dword ptr [ESP + 0x30]      ; 0058a237
    ADD EAX,0x2b4                       ; 0058a23b
    PUSH EAX                            ; 0058a240
    LEA EDI,[ESP + 0x4]                 ; 0058a241
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0058a245
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0058a24a
    LEA ESI,[EAX + 0x338]               ; 0058a24f
    ADD ESP,0x4                         ; 0058a255
    MOVSD.REP ES:EDI,ESI                ; 0058a258
    XOR EDX,EDX                         ; 0058a25a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0058a25c
    LEA ESI,[ESP + 0x18]                ; 0058a260
    MOV EDI,EBX                         ; 0058a264
    MOV dword ptr [ESP + 0x1c],EAX      ; 0058a266
    MOV EAX,dword ptr [ESP + 0x14]      ; 0058a26a
    MOV dword ptr [ESP + 0x18],EDX      ; 0058a26e
    MOV dword ptr [ESP + 0x20],EAX      ; 0058a272
    MOVSD ES:EDI,ESI                    ; 0058a276
    MOVSD ES:EDI,ESI                    ; 0058a277
    MOVSD ES:EDI,ESI                    ; 0058a278
    MOV EAX,EBX                         ; 0058a279
    ADD ESP,0x24                        ; 0058a27b
    POP EDI                             ; 0058a27e
    POP EBX                             ; 0058a27f
    RET                                 ; 0058a280

