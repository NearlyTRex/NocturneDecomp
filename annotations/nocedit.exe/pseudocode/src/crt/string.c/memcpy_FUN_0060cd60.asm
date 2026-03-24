; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_string_c_memcpy_FUN_0060cd60(void *dest,void *src,SIZE_T count)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; void *           Stack[0x8]:4   src
; SIZE_T           Stack[0xc]:4   count
;
; XREF[2]:
;   crt_process.c_spawnvp_with_path_search_FUN_0060e6a0 at 0060e7c1
;   crt_unknown.c_FUN_0060fcf4 at 0060fe05
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0060cd60
        ;   Label: crt_string.c_memcpy_FUN_0060cd60
    PUSH EDI                            ; 0060cd61
    MOV ECX,dword ptr [ESP + 0x14]      ; 0060cd62
    MOV ESI,dword ptr [ESP + 0x10]      ; 0060cd66
    MOV EDI,dword ptr [ESP + 0xc]       ; 0060cd6a
    PUSH ES                             ; 0060cd6e
    MOV AX,DS                           ; 0060cd6f
    MOV ES,AX                           ; 0060cd71
    PUSH EDI                            ; 0060cd73
    MOV EAX,ECX                         ; 0060cd74
    SHR ECX,0x2                         ; 0060cd76
    MOVSD.REP ES:EDI,ESI                ; 0060cd79
    MOV CL,AL                           ; 0060cd7b
    AND CL,0x3                          ; 0060cd7d
    MOVSB.REP ES:EDI,ESI                ; 0060cd80
    POP EDI                             ; 0060cd82
    POP ES                              ; 0060cd83
    MOV EAX,EDI                         ; 0060cd84
    POP EDI                             ; 0060cd86
    POP ESI                             ; 0060cd87
    RET                                 ; 0060cd88

