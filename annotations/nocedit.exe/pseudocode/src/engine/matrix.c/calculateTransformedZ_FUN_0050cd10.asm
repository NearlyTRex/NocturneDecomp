; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_matrix.c_calculateTransformedZ_FUN_0050cd10(int * input_coords)
;
; Parameters:
; int *            Stack[0x4]:4   input_coords
;
; Referenced Globals:
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   undefined4 g_TransformMatrix[0][2]
;   undefined4 g_TransformMatrix[1][2]
;   undefined4 g_TransformMatrix[2][2]
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050cd10
        ;   Label: engine_matrix.c_calculateTransformedZ_FUN_0050cd10
    PUSH ESI                            ; 0050cd11
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050cd12
    MOV EDX,dword ptr [0x02d052b8]      ; 0050cd16 | int g_RelativeX
    MOV EAX,dword ptr [EBX]             ; 0050cd1c
    SUB EAX,EDX                         ; 0050cd1e
    MOV ECX,dword ptr [0x02d052bc]      ; 0050cd20 | int g_RelativeY
    MOV EDX,EAX                         ; 0050cd26
    MOV EAX,dword ptr [EBX + 0x4]       ; 0050cd28
    MOV ESI,dword ptr [EBX + 0x8]       ; 0050cd2b
    SUB EAX,ECX                         ; 0050cd2e
    MOV EBX,dword ptr [0x02d052c0]      ; 0050cd30 | int g_RelativeZ
    MOV ECX,EAX                         ; 0050cd36
    MOV EAX,[0x02d052f0]                ; 0050cd38 | g_TransformMatrix[0][2]
    SUB ESI,EBX                         ; 0050cd3d
    IMUL EDX                            ; 0050cd3f
    SHRD EAX,EDX,0x10                   ; 0050cd41
    MOV EBX,EAX                         ; 0050cd45
    MOV EDX,ECX                         ; 0050cd47
    MOV EAX,[0x02d052fc]                ; 0050cd49 | g_TransformMatrix[1][2]
    IMUL EDX                            ; 0050cd4e
    SHRD EAX,EDX,0x10                   ; 0050cd50
    MOV EDX,ESI                         ; 0050cd54
    ADD EBX,EAX                         ; 0050cd56
    MOV EAX,[0x02d05308]                ; 0050cd58 | g_TransformMatrix[2][2]
    IMUL EDX                            ; 0050cd5d
    SHRD EAX,EDX,0x10                   ; 0050cd5f
    ADD EAX,EBX                         ; 0050cd63
    POP ESI                             ; 0050cd65
    POP EBX                             ; 0050cd66
    RET                                 ; 0050cd67

