; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_loadTexture_FUN_00512200(int arg1,int arg2,int arg3,int arg4,int arg5)
;
; Parameters:
; int              Stack[0x4]:4   arg1
; int              Stack[0x8]:4   arg2
; int              Stack[0xc]:4   arg3
; int              Stack[0x10]:4   arg4
; int              Stack[0x14]:4   arg5
;
; XREF[1]:
;   engine_font.cpp_FUN_004c0fa0 at 004c1205
;
; Called Functions:
;   engine_texture.cpp_FUN_00597ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00512200
        ;   Label: engine_mini3d.cpp_loadTexture_FUN_00512200
    PUSH ESI                            ; 00512201
    PUSH EDI                            ; 00512202
    MOV EDX,dword ptr [ESP + 0x20]      ; 00512203
    PUSH EDX                            ; 00512207
    MOV ECX,dword ptr [ESP + 0x20]      ; 00512208
    PUSH ECX                            ; 0051220c
    MOV EBX,dword ptr [ESP + 0x20]      ; 0051220d
    PUSH EBX                            ; 00512211
    MOV ESI,dword ptr [ESP + 0x20]      ; 00512212
    PUSH ESI                            ; 00512216
    MOV EDI,dword ptr [ESP + 0x20]      ; 00512217
    PUSH EDI                            ; 0051221b
    CALL engine_texture.cpp_FUN_00597ac0 ; 0051221c
        ;   XREF to: 00597ac0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597ac0()
    ADD ESP,0x14                        ; 00512221
    POP EDI                             ; 00512224
    POP ESI                             ; 00512225
    POP EBX                             ; 00512226
    RET                                 ; 00512227

