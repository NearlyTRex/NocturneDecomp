; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLodVert * __cdecl shape_meshlod_cpp_CLodVert_copy_FUN_0051ee70(CLodVert *this_ptr,CLodVert *source)
;
; Parameters:
; CLodVert *       Stack[0x4]:4   this_ptr
; CLodVert *       Stack[0x8]:4   source
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0051ee70
        ;   Label: shape_meshlod.cpp_CLodVert_copy_FUN_0051ee70
    PUSH EDI                            ; 0051ee71
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051ee72
    MOV ECX,0x4c4                       ; 0051ee76
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051ee7b
    MOV EDI,EDX                         ; 0051ee7f
    PUSH EDI                            ; 0051ee81
    MOV EAX,ECX                         ; 0051ee82
    SHR ECX,0x2                         ; 0051ee84
    MOVSD.REP ES:EDI,ESI                ; 0051ee87
    MOV CL,AL                           ; 0051ee89
    AND CL,0x3                          ; 0051ee8b
    MOVSB.REP ES:EDI,ESI                ; 0051ee8e
    POP EDI                             ; 0051ee90
    MOV EAX,EDX                         ; 0051ee91
    POP EDI                             ; 0051ee93
    POP ESI                             ; 0051ee94
    RET                                 ; 0051ee95

