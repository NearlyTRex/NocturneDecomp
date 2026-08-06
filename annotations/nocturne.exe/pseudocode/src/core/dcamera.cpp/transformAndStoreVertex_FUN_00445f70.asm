; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_transformAndStoreVertex_FUN_00445f70(int vertex_index,float x,float y,float z)
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
;   float FLOAT_0059bddc = 256
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445f70
        ;   Label: core_dcamera.cpp_transformAndStoreVertex_FUN_00445f70
    SUB ESP,0x18                        ; 00445f71
    MOV EAX,dword ptr [ESP + 0x24]      ; 00445f74
    MOV dword ptr [ESP + 0xc],EAX       ; 00445f78
    MOV EAX,dword ptr [ESP + 0x28]      ; 00445f7c
    MOV dword ptr [ESP + 0x10],EAX      ; 00445f80
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00445f84
    MOV EBX,ESP                         ; 00445f88
    MOV dword ptr [ESP + 0x14],EAX      ; 00445f8a
    LEA EAX,[ESP + 0xc]                 ; 00445f8e
    MOV EDX,dword ptr [0x005ae704]      ; 00445f92 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 00445f98
    FMUL float ptr [0x0059bddc]         ; 00445f9a | FLOAT_0059bddc
    FISTP dword ptr [EBX]               ; 00445fa0
    FLD float ptr [EAX + 0x4]           ; 00445fa2
    FMUL float ptr [0x0059bddc]         ; 00445fa5 | FLOAT_0059bddc
    FISTP dword ptr [EBX + 0x4]         ; 00445fab
    FLD float ptr [EAX + 0x8]           ; 00445fae
    FMUL float ptr [0x0059bddc]         ; 00445fb1 | FLOAT_0059bddc
    FISTP dword ptr [EBX + 0x8]         ; 00445fb7
    MOV EAX,ESP                         ; 00445fba
    MOV EBX,dword ptr [ESP + 0x20]      ; 00445fbc
    PUSH EAX                            ; 00445fc0
    LEA EAX,[EBX*0x4 + 0x0]             ; 00445fc1
    SUB EAX,EBX                         ; 00445fc8
    MOV EDX,dword ptr [EDX]             ; 00445fca | DAT_01b4d738
    SHL EAX,0x4                         ; 00445fcc
    ADD EAX,EDX                         ; 00445fcf
    PUSH EAX                            ; 00445fd1
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00445fd2
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00445fd7
    ADD ESP,0x18                        ; 00445fda
    POP EBX                             ; 00445fdd
    RET                                 ; 00445fde

