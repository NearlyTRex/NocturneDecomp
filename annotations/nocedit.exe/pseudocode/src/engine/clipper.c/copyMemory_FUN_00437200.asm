; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_copyMemory_FUN_00437200(void *dest_ptr,void *src_ptr,int byte_count)
;
; Parameters:
; void *           Stack[0x4]:4   dest_ptr
; void *           Stack[0x8]:4   src_ptr
; int              Stack[0xc]:4   byte_count
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00437200
        ;   Label: engine_clipper.c_copyMemory_FUN_00437200
    PUSH EDI                            ; 00437201
    MOV ECX,dword ptr [ESP + 0x14]      ; 00437202
    MOV ESI,dword ptr [ESP + 0x10]      ; 00437206
    MOV EDI,dword ptr [ESP + 0xc]       ; 0043720a
    PUSH EDI                            ; 0043720e
    MOV EAX,ECX                         ; 0043720f
    SHR ECX,0x2                         ; 00437211
    MOVSD.REP ES:EDI,ESI                ; 00437214
    MOV CL,AL                           ; 00437216
    AND CL,0x3                          ; 00437218
    MOVSB.REP ES:EDI,ESI                ; 0043721b
    POP EDI                             ; 0043721d
    POP EDI                             ; 0043721e
    POP ESI                             ; 0043721f
    RET                                 ; 00437220

