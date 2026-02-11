; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gore_cpp_CBloodPool_FUN_004ed1c0(CBloodPool *this_ptr)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_gore.cpp_CGore_FUN_004ee290 at 004ee2cf
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_0062e3bf
;   TerminatedCString s_d_d_0062e3c9
;   TerminatedCString s_d_f_d_d_d_0062e3d0
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed1c0
        ;   Label: core_gore.cpp_CBloodPool_FUN_004ed1c0
    PUSH ESI                            ; 004ed1c1
    PUSH EDI                            ; 004ed1c2
    PUSH EBP                            ; 004ed1c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ed1c4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004ed1c8
    SUB ESP,0x8                         ; 004ed1cc
    FLD float ptr [EBX + 0xc]           ; 004ed1cf
    FSTP double ptr [ESP]               ; 004ed1d2
    SUB ESP,0x8                         ; 004ed1d5
    FLD float ptr [EBX + 0x8]           ; 004ed1d8
    FSTP double ptr [ESP]               ; 004ed1db
    SUB ESP,0x8                         ; 004ed1de
    FLD float ptr [EBX + 0x4]           ; 004ed1e1
    FSTP double ptr [ESP]               ; 004ed1e4
    PUSH 0x62e3bf                       ; 004ed1e7 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004ed1ec
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ed1ed
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 004ed1f2
    MOV EDX,dword ptr [EBX + 0x10]      ; 004ed1f5
    PUSH EDX                            ; 004ed1f8
    MOV ECX,dword ptr [EBX]             ; 004ed1f9
    PUSH ECX                            ; 004ed1fb
    PUSH 0x62e3c9                       ; 004ed1fc | = "%d,%d\n"
    PUSH ESI                            ; 004ed201
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ed202
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004ed207
    MOV EDI,dword ptr [EBX + 0x24]      ; 004ed20a
    PUSH EDI                            ; 004ed20d
    MOV EBP,dword ptr [EBX + 0x20]      ; 004ed20e
    PUSH EBP                            ; 004ed211
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004ed212
    PUSH EAX                            ; 004ed215
    SUB ESP,0x8                         ; 004ed216
    FLD float ptr [EBX + 0x18]          ; 004ed219
    FSTP double ptr [ESP]               ; 004ed21c
    MOV EDX,dword ptr [EBX + 0x14]      ; 004ed21f
    PUSH EDX                            ; 004ed222
    PUSH 0x62e3d0                       ; 004ed223 | = "%d,%f,%d,%d,%d\n"
    PUSH ESI                            ; 004ed228
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ed229
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 004ed22e
    POP EBP                             ; 004ed231
    POP EDI                             ; 004ed232
    POP ESI                             ; 004ed233
    POP EBX                             ; 004ed234
    RET                                 ; 004ed235

