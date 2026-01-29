; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodMesh_saveReplayData_FUN_0051d250(CLodMesh *this_ptr,_FILE *file_handle)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0 at 00516d2f
;
; Referenced Globals:
;   TerminatedCString s_d_00638135
;   TerminatedCString s_d_d_lg_g_00638139
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d250
        ;   Label: shape_meshlod.cpp_CLodMesh_saveReplayData_FUN_0051d250
    PUSH EDI                            ; 0051d251
    PUSH EBP                            ; 0051d252
    MOV EDI,dword ptr [ESP + 0x10]      ; 0051d253
    MOV EBP,dword ptr [ESP + 0x14]      ; 0051d257
    TEST EBP,EBP                        ; 0051d25b
    JNZ 0x0051d263                      ; 0051d25d
        ;   XREF to: 0051d263 (CONDITIONAL_JUMP)  ; LAB_0051d263
    POP EBP                             ; 0051d25f
        ;   Label: LAB_0051d25f
    POP EDI                             ; 0051d260
    POP EBX                             ; 0051d261
    RET                                 ; 0051d262
    MOV EDX,dword ptr [EDI + 0x4c]      ; 0051d263
        ;   Label: LAB_0051d263
    PUSH EDX                            ; 0051d266
    PUSH 0x638135                       ; 0051d267 | = "%d\n"
    PUSH EBP                            ; 0051d26c
    XOR EBX,EBX                         ; 0051d26d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051d26f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV ECX,dword ptr [EDI + 0x4c]      ; 0051d274
    ADD ESP,0xc                         ; 0051d277
    TEST ECX,ECX                        ; 0051d27a
    JLE 0x0051d25f                      ; 0051d27c
        ;   XREF to: 0051d25f (CONDITIONAL_JUMP)  ; LAB_0051d25f
    PUSH ESI                            ; 0051d27e
    XOR ESI,ESI                         ; 0051d27f
    MOV EAX,dword ptr [EDI + 0x50]      ; 0051d281
        ;   Label: LAB_0051d281
    SUB ESP,0x8                         ; 0051d284
    FLD float ptr [ESI + EAX*0x1 + 0x10] ; 0051d287
    FSTP double ptr [ESP]               ; 0051d28b
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0xc] ; 0051d28e
    PUSH EDX                            ; 0051d292
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x8] ; 0051d293
    PUSH ECX                            ; 0051d297
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0051d298
    PUSH EDX                            ; 0051d29c
    MOV ECX,dword ptr [ESI + EAX*0x1]   ; 0051d29d
    PUSH ECX                            ; 0051d2a0
    PUSH 0x638139                       ; 0051d2a1 | = "%d,%d,%lg,%g\n"
    PUSH EBP                            ; 0051d2a6
    ADD ESI,0xf0                        ; 0051d2a7
    INC EBX                             ; 0051d2ad
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051d2ae
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EAX,dword ptr [EDI + 0x4c]      ; 0051d2b3
    ADD ESP,0x20                        ; 0051d2b6
    CMP EBX,EAX                         ; 0051d2b9
    JL 0x0051d281                       ; 0051d2bb
        ;   XREF to: 0051d281 (CONDITIONAL_JUMP)  ; LAB_0051d281
    POP ESI                             ; 0051d2bd
    POP EBP                             ; 0051d2be
    POP EDI                             ; 0051d2bf
    POP EBX                             ; 0051d2c0
    RET                                 ; 0051d2c1

