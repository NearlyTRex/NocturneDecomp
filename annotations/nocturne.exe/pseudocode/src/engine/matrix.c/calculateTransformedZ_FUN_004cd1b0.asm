; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_calculateTransformedZ_FUN_004cd1b0(int *input_coords)
;
; Parameters:
; int *            Stack[0x4]:4   input_coords
;
; Referenced Globals:
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   undefined4 g_TransformMatrix.m[0].z
;   undefined4 g_TransformMatrix.m[1].z
;   undefined4 g_TransformMatrix.m[2].z
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd1b0
        ;   Label: engine_matrix.c_calculateTransformedZ_FUN_004cd1b0
    PUSH ESI                            ; 004cd1b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cd1b2
    MOV EDX,dword ptr [0x01c039b8]      ; 004cd1b6 | g_RelativeX
    MOV EAX,dword ptr [EBX]             ; 004cd1bc
    SUB EAX,EDX                         ; 004cd1be
    MOV ECX,dword ptr [0x01c039bc]      ; 004cd1c0 | g_RelativeY
    MOV EDX,EAX                         ; 004cd1c6
    MOV EAX,dword ptr [EBX + 0x4]       ; 004cd1c8
    MOV ESI,dword ptr [EBX + 0x8]       ; 004cd1cb
    SUB EAX,ECX                         ; 004cd1ce
    MOV EBX,dword ptr [0x01c039c0]      ; 004cd1d0 | g_RelativeZ
    MOV ECX,EAX                         ; 004cd1d6
    MOV EAX,[0x01c039f0]                ; 004cd1d8 | g_TransformMatrix.m[0].z
    SUB ESI,EBX                         ; 004cd1dd
    IMUL EDX                            ; 004cd1df
    SHRD EAX,EDX,0x10                   ; 004cd1e1
    MOV EBX,EAX                         ; 004cd1e5
    MOV EDX,ECX                         ; 004cd1e7
    MOV EAX,[0x01c039fc]                ; 004cd1e9 | g_TransformMatrix.m[1].z
    IMUL EDX                            ; 004cd1ee
    SHRD EAX,EDX,0x10                   ; 004cd1f0
    MOV EDX,ESI                         ; 004cd1f4
    ADD EBX,EAX                         ; 004cd1f6
    MOV EAX,[0x01c03a08]                ; 004cd1f8 | g_TransformMatrix.m[2].z
    IMUL EDX                            ; 004cd1fd
    SHRD EAX,EDX,0x10                   ; 004cd1ff
    ADD EAX,EBX                         ; 004cd203
    POP ESI                             ; 004cd205
    POP EBX                             ; 004cd206
    RET                                 ; 004cd207

