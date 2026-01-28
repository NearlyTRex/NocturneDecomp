; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_alphabit_cpp_copyBytes_FUN_00410d20(void *src,void *dest,int width,int height)
;
; Parameters:
; void *           Stack[0x4]:4   src
; void *           Stack[0x8]:4   dest
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00410d20
        ;   Label: engine_alphabit.cpp_copyBytes_FUN_00410d20
    PUSH EDI                            ; 00410d21
    MOV EDI,dword ptr [ESP + 0xc]       ; 00410d22
    MOV ECX,dword ptr [EDI + 0xc]       ; 00410d26
    IMUL ECX,dword ptr [EDI + 0x10]     ; 00410d29
    MOV ESI,dword ptr [EDI]             ; 00410d2d
    MOV EDI,dword ptr [EDI + 0x4]       ; 00410d2f
    PUSH EDI                            ; 00410d32
    MOV EAX,ECX                         ; 00410d33
    SHR ECX,0x2                         ; 00410d35
    MOVSD.REP ES:EDI,ESI                ; 00410d38
    MOV CL,AL                           ; 00410d3a
    AND CL,0x3                          ; 00410d3c
    MOVSB.REP ES:EDI,ESI                ; 00410d3f
    POP EDI                             ; 00410d41
    POP EDI                             ; 00410d42
    POP ESI                             ; 00410d43
    RET                                 ; 00410d44

