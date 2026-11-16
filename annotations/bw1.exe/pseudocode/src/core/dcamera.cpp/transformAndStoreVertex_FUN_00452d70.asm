; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_transformAndStoreVertex_FUN_00452d70(int vertex_index,float x,float y,float z)
;
; Parameters:
; int              Stack[0x4]:4   vertex_index
; float            Stack[0x8]:4   x
; float            Stack[0xc]:4   y
; float            Stack[0x10]:4   z
;
; Referenced Globals:
;   undefined4 DAT_005fe5fc
;   undefined4 DAT_00612560
;
; Called Functions:
;   engine_special.cpp_transformAndProjectPoint_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452d70
        ;   Label: core_dcamera.cpp_transformAndStoreVertex_FUN_00452d70
    SUB ESP,0x18                        ; 00452d71
    MOV EAX,dword ptr [ESP + 0x24]      ; 00452d74
    MOV dword ptr [ESP + 0xc],EAX       ; 00452d78
    MOV EAX,dword ptr [ESP + 0x28]      ; 00452d7c
    MOV dword ptr [ESP + 0x10],EAX      ; 00452d80
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00452d84
    MOV EBX,ESP                         ; 00452d88
    MOV dword ptr [ESP + 0x14],EAX      ; 00452d8a
    LEA EAX,[ESP + 0xc]                 ; 00452d8e
    MOV EDX,dword ptr [0x00612560]      ; 00452d92 | DAT_00612560
    FLD float ptr [EAX]                 ; 00452d98
    FMUL float ptr [0x005fe5fc]         ; 00452d9a | DAT_005fe5fc
    FISTP dword ptr [EBX]               ; 00452da0
    FLD float ptr [EAX + 0x4]           ; 00452da2
    FMUL float ptr [0x005fe5fc]         ; 00452da5 | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x4]         ; 00452dab
    FLD float ptr [EAX + 0x8]           ; 00452dae
    FMUL float ptr [0x005fe5fc]         ; 00452db1 | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x8]         ; 00452db7
    MOV EAX,ESP                         ; 00452dba
    MOV EBX,dword ptr [ESP + 0x20]      ; 00452dbc
    PUSH EAX                            ; 00452dc0
    LEA EAX,[EBX*0x4 + 0x0]             ; 00452dc1
    SUB EAX,EBX                         ; 00452dc8
    MOV EDX,dword ptr [EDX]             ; 00452dca
    SHL EAX,0x4                         ; 00452dcc
    ADD EAX,EDX                         ; 00452dcf
    PUSH EAX                            ; 00452dd1
    CALL engine_special.cpp_transformAndProjectPoint_FUN_00580173 ; 00452dd2
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00452dd7
    ADD ESP,0x18                        ; 00452dda
    POP EBX                             ; 00452ddd
    RET                                 ; 00452dde

