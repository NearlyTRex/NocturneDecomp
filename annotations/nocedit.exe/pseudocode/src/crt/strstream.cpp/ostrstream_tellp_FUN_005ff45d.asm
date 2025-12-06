; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d(ostrstream * this_ptr)
;
; Parameters:
; ostrstream *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   support_codec.cpp_CCodec_finalizeBuffer_FUN_0043ed50 at 0043ed9f
;   support_codec.cpp_CCodec_processToBuffer_FUN_0043ea80 at 0043eaf7
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ff45d
        ;   Label: crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d
    MOV EAX,dword ptr [EDX]             ; 005ff461
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ff463
    ADD EAX,EDX                         ; 005ff466
    MOV EDX,dword ptr [EAX + 0x10]      ; 005ff468
    AND EDX,0x3                         ; 005ff46b
    JZ 0x005ff476                       ; 005ff46e | LAB_005ff476
        ;   XREF to: 005ff476 (CONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 005ff470
    RET                                 ; 005ff475
    PUSH 0x2                            ; 005ff476
        ;   Label: LAB_005ff476
    PUSH 0x1                            ; 005ff478
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ff47a
    PUSH 0x0                            ; 005ff47d
    MOV EDX,dword ptr [EAX + 0x28]      ; 005ff47f
    PUSH EAX                            ; 005ff482
    CALL dword ptr [EDX + 0x18]         ; 005ff483
    ADD ESP,0x10                        ; 005ff486
    RET                                 ; 005ff489

