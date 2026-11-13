; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_intersectClipPlane3_FUN_004f6220(float *from,float *to,float *out)
;
; Parameters:
; float *          Stack[0x4]:4   from
; float *          Stack[0x8]:4   to
; float *          Stack[0xc]:4   out
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   engine_mini3d.cpp_clipAgainstPlane3_FUN_004f6690 at 004f6757
;
; Referenced Globals:
;   undefined4 DAT_01d0d2b4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6220
        ;   Label: engine_mini3d.cpp_intersectClipPlane3_FUN_004f6220
    SUB ESP,0x8                         ; 004f6221
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f6224
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f6228
    MOV ECX,dword ptr [ESP + 0x18]      ; 004f622c
    FLD float ptr [EAX + 0x4]           ; 004f6230
    FLD float ptr [EDX + 0x4]           ; 004f6233
    FADD float ptr [EDX + 0x8]          ; 004f6236
    FXCH                                ; 004f6239
    FADD float ptr [EAX + 0x8]          ; 004f623b
    FXCH                                ; 004f623e
    FSUBR ST0,ST1                       ; 004f6240
    FDIVP                               ; 004f6242
    FLD float ptr [EDX + 0x8]           ; 004f6244
    FSUB float ptr [EAX + 0x8]          ; 004f6247
    FXCH                                ; 004f624a
    FSTP float ptr [ESP + 0x4]          ; 004f624c
    FMUL float ptr [ESP + 0x4]          ; 004f6250
    FADD float ptr [EAX + 0x8]          ; 004f6254
    FST float ptr [ECX + 0x8]           ; 004f6257
    FCHS                                ; 004f625a
    FSTP float ptr [ECX + 0x4]          ; 004f625c
    FLD float ptr [EDX]                 ; 004f625f
    FSUB float ptr [EAX]                ; 004f6261
    FMUL float ptr [ESP + 0x4]          ; 004f6263
    FADD float ptr [EAX]                ; 004f6267
    MOV EBX,dword ptr [0x01d0d2b4]      ; 004f6269 | DAT_01d0d2b4
    FSTP float ptr [ECX]                ; 004f626f
    TEST EBX,EBX                        ; 004f6271
    JZ 0x004f627a                       ; 004f6273
        ;   XREF to: 004f627a (CONDITIONAL_JUMP)  ; LAB_004f627a
    ADD ESP,0x8                         ; 004f6275
    POP EBX                             ; 004f6278
    RET                                 ; 004f6279
    FLD float ptr [EDX + 0x2c]          ; 004f627a
        ;   Label: LAB_004f627a
    FSUB float ptr [EAX + 0x2c]         ; 004f627d
    FLD float ptr [ESP + 0x4]           ; 004f6280
    FXCH                                ; 004f6284
    FMUL ST1                            ; 004f6286
    FADD float ptr [EAX + 0x2c]         ; 004f6288
    FSTP float ptr [ECX + 0x2c]         ; 004f628b
    FLD float ptr [EDX + 0x28]          ; 004f628e
    FSUB float ptr [EAX + 0x28]         ; 004f6291
    FMUL ST1                            ; 004f6294
    FADD float ptr [EAX + 0x28]         ; 004f6296
    FSTP float ptr [ECX + 0x28]         ; 004f6299
    FLD float ptr [EDX + 0x24]          ; 004f629c
    FSUB float ptr [EAX + 0x24]         ; 004f629f
    FMUL ST1                            ; 004f62a2
    FADD float ptr [EAX + 0x24]         ; 004f62a4
    FSTP float ptr [ECX + 0x24]         ; 004f62a7
    FLD float ptr [EDX + 0x1c]          ; 004f62aa
    FSUB float ptr [EAX + 0x1c]         ; 004f62ad
    FMUL ST1                            ; 004f62b0
    FADD float ptr [EAX + 0x1c]         ; 004f62b2
    FSTP float ptr [ECX + 0x1c]         ; 004f62b5
    FLD float ptr [EDX + 0x20]          ; 004f62b8
    FSUB float ptr [EAX + 0x20]         ; 004f62bb
    FMUL ST1                            ; 004f62be
    FADD float ptr [EAX + 0x20]         ; 004f62c0
    FSTP float ptr [ECX + 0x20]         ; 004f62c3
    FLD float ptr [EDX + 0x30]          ; 004f62c6
    FSUB float ptr [EAX + 0x30]         ; 004f62c9
    FMUL ST1                            ; 004f62cc
    FADD float ptr [EAX + 0x30]         ; 004f62ce
    FSTP float ptr [ECX + 0x30]         ; 004f62d1
    FLD float ptr [EDX + 0x34]          ; 004f62d4
    FSUB float ptr [EAX + 0x34]         ; 004f62d7
    FMULP                               ; 004f62da
    FADD float ptr [EAX + 0x34]         ; 004f62dc
    FSTP float ptr [ECX + 0x34]         ; 004f62df
    ADD ESP,0x8                         ; 004f62e2
    POP EBX                             ; 004f62e5
    RET                                 ; 004f62e6

