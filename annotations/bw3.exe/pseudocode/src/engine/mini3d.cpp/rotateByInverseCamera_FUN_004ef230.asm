; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_rotateByInverseCamera_FUN_004ef230(CVector3f *input,CVector3f *output)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   input
; CVector3f *      Stack[0x8]:4   output
;
; Referenced Globals:
;   undefined4 DAT_01d76c6c
;   undefined4 DAT_01d76c70
;   undefined4 DAT_01d76c74
;   undefined4 DAT_01d76c78
;   undefined4 DAT_01d76c7c
;   undefined4 DAT_01d76c80
;   undefined4 DAT_01d76c84
;   undefined4 DAT_01d76c88
;   undefined4 DAT_01d76c8c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ef230
        ;   Label: engine_mini3d.cpp_rotateByInverseCamera_FUN_004ef230
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ef234
    FLD float ptr [EAX + 0x4]           ; 004ef238
    FMUL float ptr [0x01d76c78]         ; 004ef23b | DAT_01d76c78
    FLD float ptr [EAX]                 ; 004ef241
    FMUL float ptr [0x01d76c6c]         ; 004ef243 | DAT_01d76c6c
    FADDP                               ; 004ef249
    FLD float ptr [EAX + 0x8]           ; 004ef24b
    FMUL float ptr [0x01d76c84]         ; 004ef24e | DAT_01d76c84
    FADDP                               ; 004ef254
    FSTP float ptr [EDX]                ; 004ef256
    FLD float ptr [EAX + 0x4]           ; 004ef258
    FMUL float ptr [0x01d76c7c]         ; 004ef25b | DAT_01d76c7c
    FLD float ptr [EAX]                 ; 004ef261
    FMUL float ptr [0x01d76c70]         ; 004ef263 | DAT_01d76c70
    FADDP                               ; 004ef269
    FLD float ptr [EAX + 0x8]           ; 004ef26b
    FMUL float ptr [0x01d76c88]         ; 004ef26e | DAT_01d76c88
    FADDP                               ; 004ef274
    FSTP float ptr [EDX + 0x4]          ; 004ef276
    FLD float ptr [EAX + 0x4]           ; 004ef279
    FMUL float ptr [0x01d76c80]         ; 004ef27c | DAT_01d76c80
    FLD float ptr [EAX]                 ; 004ef282
    FMUL float ptr [0x01d76c74]         ; 004ef284 | DAT_01d76c74
    FADDP                               ; 004ef28a
    FLD float ptr [EAX + 0x8]           ; 004ef28c
    FMUL float ptr [0x01d76c8c]         ; 004ef28f | DAT_01d76c8c
    FADDP                               ; 004ef295
    FSTP float ptr [EDX + 0x8]          ; 004ef297
    RET                                 ; 004ef29a

