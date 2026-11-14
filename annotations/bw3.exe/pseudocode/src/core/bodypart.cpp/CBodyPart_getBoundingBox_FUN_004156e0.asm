; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_bodypart_cpp_CBodyPart_getBoundingBox_FUN_004156e0(CBodyPart *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004156e0
        ;   Label: core_bodypart.cpp_CBodyPart_getBoundingBox_FUN_004156e0
    SUB ESP,0x18                        ; 004156e1
    MOV EAX,ESI                         ; 004156e4
    MOV ESI,dword ptr [ESP + 0x20]      ; 004156e6
    MOV ECX,0x6                         ; 004156ea
    MOV EDI,ESP                         ; 004156ef
    LEA ESI,[ESI + 0x15c]               ; 004156f1
    MOVSD.REP ES:EDI,ESI                ; 004156f7
    MOV ECX,0x6                         ; 004156f9
    MOV ESI,ESP                         ; 004156fe
    MOV EDI,EAX                         ; 00415700
    MOVSD.REP ES:EDI,ESI                ; 00415702
    ADD ESP,0x18                        ; 00415704
    POP EDI                             ; 00415707
    RET                                 ; 00415708

