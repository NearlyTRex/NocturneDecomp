; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_skipLines_FUN_00515160(FILE *file_handle,int line_count)
;
; Parameters:
; FILE *           Stack[0x4]:4   file_handle
; int              Stack[0x8]:4   line_count
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005fe840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515160
        ;   Label: shape_meshlod.cpp_skipLines_FUN_00515160
    PUSH ESI                            ; 00515161
    MOV ESI,dword ptr [ESP + 0x10]      ; 00515162
    MOV EBX,dword ptr [ESP + 0xc]       ; 00515166
    TEST ESI,ESI                        ; 0051516a
    JLE 0x00515185                      ; 0051516c
        ;   XREF to: 00515185 (CONDITIONAL_JUMP)  ; LAB_00515185
    PUSH EBX                            ; 0051516e
        ;   Label: LAB_0051516e
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0051516f
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 00515174
    TEST EAX,EAX                        ; 00515177
    JL 0x00515185                       ; 00515179
        ;   XREF to: 00515185 (CONDITIONAL_JUMP)  ; LAB_00515185
    CMP EAX,0xa                         ; 0051517b
    JNZ 0x0051516e                      ; 0051517e
        ;   XREF to: 0051516e (CONDITIONAL_JUMP)  ; LAB_0051516e
    DEC ESI                             ; 00515180
    TEST ESI,ESI                        ; 00515181
    JG 0x0051516e                       ; 00515183
        ;   XREF to: 0051516e (CONDITIONAL_JUMP)  ; LAB_0051516e
    POP ESI                             ; 00515185
        ;   Label: LAB_00515185
    POP EBX                             ; 00515186
    RET                                 ; 00515187

