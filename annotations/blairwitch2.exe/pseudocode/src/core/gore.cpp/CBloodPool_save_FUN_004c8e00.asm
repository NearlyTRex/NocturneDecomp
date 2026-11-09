; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CBloodPool_save_FUN_004c8e00(CBloodPool *this_ptr,_FILE *file_handle)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_gore.cpp_CGore_save_FUN_004c9f20 at 004c9f5f
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_005d950f
;   TerminatedCString s_d_d_005d9519
;   TerminatedCString s_d_f_d_d_d_005d9520
;
; Called Functions:
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8e00
        ;   Label: core_gore.cpp_CBloodPool_save_FUN_004c8e00
    PUSH ESI                            ; 004c8e01
    PUSH EDI                            ; 004c8e02
    PUSH EBP                            ; 004c8e03
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c8e04
    MOV ESI,dword ptr [ESP + 0x18]      ; 004c8e08
    SUB ESP,0x8                         ; 004c8e0c
    FLD float ptr [EBX + 0xc]           ; 004c8e0f
    FSTP double ptr [ESP]               ; 004c8e12
    SUB ESP,0x8                         ; 004c8e15
    FLD float ptr [EBX + 0x8]           ; 004c8e18
    FSTP double ptr [ESP]               ; 004c8e1b
    SUB ESP,0x8                         ; 004c8e1e
    FLD float ptr [EBX + 0x4]           ; 004c8e21
    FSTP double ptr [ESP]               ; 004c8e24
    PUSH 0x5d950f                       ; 004c8e27 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004c8e2c
    CALL crt_unknown.c_FUN_005b8010     ; 004c8e2d
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x20                        ; 004c8e32
    MOV EDX,dword ptr [EBX + 0x10]      ; 004c8e35
    PUSH EDX                            ; 004c8e38
    MOV ECX,dword ptr [EBX]             ; 004c8e39
    PUSH ECX                            ; 004c8e3b
    PUSH 0x5d9519                       ; 004c8e3c | = "%d,%d\n"
    PUSH ESI                            ; 004c8e41
    CALL crt_unknown.c_FUN_005b8010     ; 004c8e42
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 004c8e47
    MOV EDI,dword ptr [EBX + 0x24]      ; 004c8e4a
    PUSH EDI                            ; 004c8e4d
    MOV EBP,dword ptr [EBX + 0x20]      ; 004c8e4e
    PUSH EBP                            ; 004c8e51
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004c8e52
    PUSH EAX                            ; 004c8e55
    SUB ESP,0x8                         ; 004c8e56
    FLD float ptr [EBX + 0x18]          ; 004c8e59
    FSTP double ptr [ESP]               ; 004c8e5c
    MOV EDX,dword ptr [EBX + 0x14]      ; 004c8e5f
    PUSH EDX                            ; 004c8e62
    PUSH 0x5d9520                       ; 004c8e63 | = "%d,%f,%d,%d,%d\n"
    PUSH ESI                            ; 004c8e68
    CALL crt_unknown.c_FUN_005b8010     ; 004c8e69
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x20                        ; 004c8e6e
    POP EBP                             ; 004c8e71
    POP EDI                             ; 004c8e72
    POP ESI                             ; 004c8e73
    POP EBX                             ; 004c8e74
    RET                                 ; 004c8e75

