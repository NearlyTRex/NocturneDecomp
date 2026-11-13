; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_drawVLine_FUN_00518300(int x,int y1,int y2)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   y2
;
; XREF[6]:
;   engine_mini3d.cpp_drawRect_FUN_00518290 at 005182bd
;   shape_edittool.cpp_FUN_00492e10 at 00492e28
;   shape_edittool.cpp_FUN_004962b0 at 00496570
;   shape_edittool.cpp_FUN_00496ee0 at 00497112
;   shape_edittool.cpp_FUN_0049c500 at 0049c59e
;   shape_edittool.cpp_FUN_0049c750 at 0049c906
;
; Called Functions:
;   engine_mini3d.cpp_fillRect_FUN_00518010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518300
        ;   Label: engine_mini3d.cpp_drawVLine_FUN_00518300
    MOV EDX,dword ptr [ESP + 0x8]       ; 00518301
    MOV ECX,dword ptr [ESP + 0x10]      ; 00518305
    PUSH ECX                            ; 00518309
    LEA EAX,[EDX + 0x1]                 ; 0051830a
    PUSH EAX                            ; 0051830d
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051830e
    PUSH EBX                            ; 00518312
    PUSH EDX                            ; 00518313
    CALL engine_mini3d.cpp_fillRect_FUN_00518010 ; 00518314
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_fillRect_FUN_00518010(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00518319
    POP EBX                             ; 0051831c
    RET                                 ; 0051831d

