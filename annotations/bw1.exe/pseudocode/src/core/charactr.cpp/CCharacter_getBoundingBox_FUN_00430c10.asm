; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_charactr_cpp_CCharacter_getBoundingBox_FUN_00430c10(CCharacter *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00430c10
        ;   Label: core_charactr.cpp_CCharacter_getBoundingBox_FUN_00430c10
    SUB ESP,0x18                        ; 00430c11
    MOV EAX,ESI                         ; 00430c14
    MOV ESI,dword ptr [ESP + 0x20]      ; 00430c16
    MOV ECX,0x6                         ; 00430c1a
    MOV EDI,ESP                         ; 00430c1f
    LEA ESI,[ESI + 0x2788]              ; 00430c21
    MOVSD.REP ES:EDI,ESI                ; 00430c27
    MOV ECX,0x6                         ; 00430c29
    MOV ESI,ESP                         ; 00430c2e
    MOV EDI,EAX                         ; 00430c30
    MOVSD.REP ES:EDI,ESI                ; 00430c32
    ADD ESP,0x18                        ; 00430c34
    POP EDI                             ; 00430c37
    RET                                 ; 00430c38

