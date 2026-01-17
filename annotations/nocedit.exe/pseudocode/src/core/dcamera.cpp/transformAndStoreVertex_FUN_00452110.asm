; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_transformAndStoreVertex_FUN_00452110(int vertex_index, float x, float y, float z)
;
; Parameters:
; int              Stack[0x4]:4   vertex_index
; float            Stack[0x8]:4   x
; float            Stack[0xc]:4   y
; float            Stack[0x10]:4   z
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   float g_CameraFixedPointScale_0065c63c = 256
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452110
        ;   Label: core_dcamera.cpp_transformAndStoreVertex_FUN_00452110
    SUB ESP,0x18                        ; 00452111
    MOV EAX,dword ptr [ESP + 0x24]      ; 00452114
    MOV dword ptr [ESP + 0xc],EAX       ; 00452118
    MOV EAX,dword ptr [ESP + 0x28]      ; 0045211c
    MOV dword ptr [ESP + 0x10],EAX      ; 00452120
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00452124
    MOV EBX,ESP                         ; 00452128
    MOV dword ptr [ESP + 0x14],EAX      ; 0045212a
    LEA EAX,[ESP + 0xc]                 ; 0045212e
    MOV EDX,dword ptr [0x006703ec]      ; 00452132 | g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 00452138
    FMUL float ptr [0x0065c63c]         ; 0045213a | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX]               ; 00452140
    FLD float ptr [EAX + 0x4]           ; 00452142
    FMUL float ptr [0x0065c63c]         ; 00452145 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x4]         ; 0045214b
    FLD float ptr [EAX + 0x8]           ; 0045214e
    FMUL float ptr [0x0065c63c]         ; 00452151 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x8]         ; 00452157
    MOV EAX,ESP                         ; 0045215a
    MOV EBX,dword ptr [ESP + 0x20]      ; 0045215c
    PUSH EAX                            ; 00452160
    LEA EAX,[EBX*0x4 + 0x0]             ; 00452161
    SUB EAX,EBX                         ; 00452168
    MOV EDX,dword ptr [EDX]             ; 0045216a | g_CDemonRendererInstance
    SHL EAX,0x4                         ; 0045216c
    ADD EAX,EDX                         ; 0045216f
    PUSH EAX                            ; 00452171
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00452172
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00452177
    ADD ESP,0x18                        ; 0045217a
    POP EBX                             ; 0045217d
    RET                                 ; 0045217e

