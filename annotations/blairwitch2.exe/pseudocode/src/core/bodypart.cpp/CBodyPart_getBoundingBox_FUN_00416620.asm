; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_bodypart_cpp_CBodyPart_getBoundingBox_FUN_00416620(CBodyPart *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00416620
        ;   Label: core_bodypart.cpp_CBodyPart_getBoundingBox_FUN_00416620
    SUB ESP,0x18                        ; 00416621
    MOV EAX,ESI                         ; 00416624
    MOV ESI,dword ptr [ESP + 0x20]      ; 00416626
    MOV ECX,0x6                         ; 0041662a
    MOV EDI,ESP                         ; 0041662f
    LEA ESI,[ESI + 0x2b8]               ; 00416631
    MOVSD.REP ES:EDI,ESI                ; 00416637
    MOV ECX,0x6                         ; 00416639
    MOV ESI,ESP                         ; 0041663e
    MOV EDI,EAX                         ; 00416640
    MOVSD.REP ES:EDI,ESI                ; 00416642
    ADD ESP,0x18                        ; 00416644
    POP EDI                             ; 00416647
    RET                                 ; 00416648

