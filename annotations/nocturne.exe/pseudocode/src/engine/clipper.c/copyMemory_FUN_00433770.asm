; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_copyMemory_FUN_00433770(void *dest_ptr,void *src_ptr,int byte_count)
;
; Parameters:
; void *           Stack[0x4]:4   dest_ptr
; void *           Stack[0x8]:4   src_ptr
; int              Stack[0xc]:4   byte_count
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00433770
        ;   Label: engine_clipper.c_copyMemory_FUN_00433770
    PUSH EDI                            ; 00433771
    MOV ECX,dword ptr [ESP + 0x14]      ; 00433772
    MOV ESI,dword ptr [ESP + 0x10]      ; 00433776
    MOV EDI,dword ptr [ESP + 0xc]       ; 0043377a
    PUSH EDI                            ; 0043377e
    MOV EAX,ECX                         ; 0043377f
    SHR ECX,0x2                         ; 00433781
    MOVSD.REP ES:EDI,ESI                ; 00433784
    MOV CL,AL                           ; 00433786
    AND CL,0x3                          ; 00433788
    MOVSB.REP ES:EDI,ESI                ; 0043378b
    POP EDI                             ; 0043378d
    POP EDI                             ; 0043378e
    POP ESI                             ; 0043378f
    RET                                 ; 00433790

