; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_clipLineGlobal_FUN_00402ca0(int x1,int y1,int x2,int y2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00486810 at 004868ed
;
; Referenced Globals:
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;
; Called Functions:
;   engine_2d.c_FUN_00402cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402ca0
        ;   Label: engine_2d.c_clipLineGlobal_FUN_00402ca0
    PUSH ESI                            ; 00402ca1
    PUSH EDI                            ; 00402ca2
    PUSH EBP                            ; 00402ca3
    MOV EDX,dword ptr [0x01c6b5b4]      ; 00402ca4 | DAT_01c6b5b4
    PUSH EDX                            ; 00402caa
    MOV ECX,dword ptr [0x01c6b5b0]      ; 00402cab | DAT_01c6b5b0
    PUSH ECX                            ; 00402cb1
    MOV EBX,dword ptr [0x01c6b5ac]      ; 00402cb2 | DAT_01c6b5ac
    PUSH EBX                            ; 00402cb8
    MOV ESI,dword ptr [0x01c6b5a8]      ; 00402cb9 | DAT_01c6b5a8
    PUSH ESI                            ; 00402cbf
    MOV EDI,dword ptr [ESP + 0x30]      ; 00402cc0
    PUSH EDI                            ; 00402cc4
    MOV EBP,dword ptr [ESP + 0x30]      ; 00402cc5
    PUSH EBP                            ; 00402cc9
    MOV EAX,dword ptr [ESP + 0x30]      ; 00402cca
    PUSH EAX                            ; 00402cce
    MOV EDX,dword ptr [ESP + 0x30]      ; 00402ccf
    PUSH EDX                            ; 00402cd3
    CALL engine_2d.c_FUN_00402cf0       ; 00402cd4
        ;   XREF to: 00402cf0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_FUN_00402cf0()
    ADD ESP,0x20                        ; 00402cd9
    POP EBP                             ; 00402cdc
    POP EDI                             ; 00402cdd
    POP ESI                             ; 00402cde
    POP EBX                             ; 00402cdf
    RET                                 ; 00402ce0

