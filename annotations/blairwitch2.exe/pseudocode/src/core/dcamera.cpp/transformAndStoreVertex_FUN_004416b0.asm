; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_transformAndStoreVertex_FUN_004416b0(int vertex_index,float x,float y,float z)
;
; Parameters:
; int              Stack[0x4]:4   vertex_index
; float            Stack[0x8]:4   x
; float            Stack[0xc]:4   y
; float            Stack[0x10]:4   z
;
; Referenced Globals:
;   float g_FLOAT_005f4dcc = 256
;   CDemonRenderer* g_CDemonRenderer_PTR_0060b280 = 01ba5c50
;
; Called Functions:
;   engine_special.cpp_transformAndProjectPoint_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004416b0
        ;   Label: core_dcamera.cpp_transformAndStoreVertex_FUN_004416b0
    SUB ESP,0x18                        ; 004416b1
    MOV EAX,dword ptr [ESP + 0x24]      ; 004416b4
    MOV dword ptr [ESP + 0xc],EAX       ; 004416b8
    MOV EAX,dword ptr [ESP + 0x28]      ; 004416bc
    MOV dword ptr [ESP + 0x10],EAX      ; 004416c0
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004416c4
    MOV EBX,ESP                         ; 004416c8
    MOV dword ptr [ESP + 0x14],EAX      ; 004416ca
    LEA EAX,[ESP + 0xc]                 ; 004416ce
    MOV EDX,dword ptr [0x0060b280]      ; 004416d2 | g_CDemonRenderer_PTR_0060b280
    FLD float ptr [EAX]                 ; 004416d8
    FMUL float ptr [0x005f4dcc]         ; 004416da | g_FLOAT_005f4dcc
    FISTP dword ptr [EBX]               ; 004416e0
    FLD float ptr [EAX + 0x4]           ; 004416e2
    FMUL float ptr [0x005f4dcc]         ; 004416e5 | g_FLOAT_005f4dcc
    FISTP dword ptr [EBX + 0x4]         ; 004416eb
    FLD float ptr [EAX + 0x8]           ; 004416ee
    FMUL float ptr [0x005f4dcc]         ; 004416f1 | g_FLOAT_005f4dcc
    FISTP dword ptr [EBX + 0x8]         ; 004416f7
    MOV EAX,ESP                         ; 004416fa
    MOV EBX,dword ptr [ESP + 0x20]      ; 004416fc
    PUSH EAX                            ; 00441700
    LEA EAX,[EBX*0x4 + 0x0]             ; 00441701
    SUB EAX,EBX                         ; 00441708
    MOV EDX,dword ptr [EDX]             ; 0044170a
    SHL EAX,0x4                         ; 0044170c
    ADD EAX,EDX                         ; 0044170f
    PUSH EAX                            ; 00441711
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0055d723 ; 00441712
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00441717
    ADD ESP,0x18                        ; 0044171a
    POP EBX                             ; 0044171d
    RET                                 ; 0044171e

