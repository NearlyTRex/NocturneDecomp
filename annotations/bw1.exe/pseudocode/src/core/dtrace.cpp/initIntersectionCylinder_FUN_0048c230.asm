; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_initIntersectionCylinder_FUN_0048c230(SIntersectXZCylinder *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,float bottom_y,float top_y)
;
; Parameters:
; SIntersectXZCylinder * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   start_x
; float            Stack[0xc]:4   start_z
; float            Stack[0x10]:4   dir_x
; float            Stack[0x14]:4   dir_z
; float            Stack[0x18]:4   radius
; float            Stack[0x1c]:4   bottom_y
; float            Stack[0x20]:4   top_y
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_setcolid.cpp_FUN_00558450 at 0055847c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0048c230
        ;   Label: core_dtrace.cpp_initIntersectionCylinder_FUN_0048c230
    MOV EBP,ESP                         ; 0048c231
    SUB ESP,0x14                        ; 0048c233
    AND ESP,0xfffffff8                  ; 0048c236
    MOV EDX,dword ptr [EBP + 0x8]       ; 0048c239
    FLD float ptr [EBP + 0x14]          ; 0048c23c
    FMUL ST0                            ; 0048c23f
    FLD float ptr [EBP + 0x18]          ; 0048c241
    MOV EAX,dword ptr [EBP + 0xc]       ; 0048c244
    FMUL float ptr [EBP + 0x18]         ; 0048c247
    MOV dword ptr [EDX + 0x10],EAX      ; 0048c24a
    MOV EAX,dword ptr [EBP + 0x10]      ; 0048c24d
    MOV dword ptr [EDX + 0x14],EAX      ; 0048c250
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048c253
    MOV dword ptr [EDX + 0x18],EAX      ; 0048c256
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048c259
    MOV dword ptr [EDX + 0x1c],EAX      ; 0048c25c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0048c25f
    MOV dword ptr [EDX + 0x20],EAX      ; 0048c262
    MOV EAX,dword ptr [EBP + 0x24]      ; 0048c265
    MOV dword ptr [EDX + 0x24],EAX      ; 0048c268
    MOV EAX,dword ptr [EBP + 0x20]      ; 0048c26b
    FADDP                               ; 0048c26e
    MOV dword ptr [EDX + 0x28],EAX      ; 0048c270
    FSQRT                               ; 0048c273
    FLD float ptr [EBP + 0x1c]          ; 0048c275
    FDIV ST0,ST1                        ; 0048c278
    FLD float ptr [EBP + 0xc]           ; 0048c27a
    FMUL float ptr [EBP + 0x14]         ; 0048c27d
    FLD float ptr [EBP + 0x10]          ; 0048c280
    FMUL float ptr [EBP + 0x18]         ; 0048c283
    FLD1                                ; 0048c286
    FADDP ST3,ST0                       ; 0048c288
    FLD ST2                             ; 0048c28a
    FMUL float ptr [EBP + 0x14]         ; 0048c28c
    FXCH                                ; 0048c28f
    FADDP ST2,ST0                       ; 0048c291
    FMUL float ptr [EBP + 0x14]         ; 0048c293
    FXCH                                ; 0048c296
    FSTP float ptr [EDX + 0x2c]         ; 0048c298
    FADD float ptr [EDX + 0x2c]         ; 0048c29b
    FXCH                                ; 0048c29e
    FMUL float ptr [EBP + 0x18]         ; 0048c2a0
    FMUL float ptr [EBP + 0x18]         ; 0048c2a3
    MOV dword ptr [EDX],0x3f8147ae      ; 0048c2a6
    FXCH ST2                            ; 0048c2ac
    FST float ptr [ESP]                 ; 0048c2ae
    FXCH ST2                            ; 0048c2b1
    FADDP                               ; 0048c2b3
    FLDZ                                ; 0048c2b5
    FXCH                                ; 0048c2b7
    FSTP float ptr [EDX + 0x30]         ; 0048c2b9
    FCOMPP                              ; 0048c2bc
    FNSTSW AX                           ; 0048c2be
    SAHF                                ; 0048c2c0
    JNC 0x0048c2e0                      ; 0048c2c1
        ;   XREF to: 0048c2e0 (CONDITIONAL_JUMP)  ; LAB_0048c2e0
    FLD1                                ; 0048c2c3
    FLD float ptr [EBP + 0x14]          ; 0048c2c5
    FXCH                                ; 0048c2c8
    FDIV float ptr [ESP]                ; 0048c2ca
    FXCH                                ; 0048c2cd
    FMUL ST1                            ; 0048c2cf
    FLD float ptr [EBP + 0x18]          ; 0048c2d1
    FMULP ST2                           ; 0048c2d4
    FSTP float ptr [EDX + 0x34]         ; 0048c2d6
    FSTP float ptr [EDX + 0x38]         ; 0048c2d9
    MOV ESP,EBP                         ; 0048c2dc
    POP EBP                             ; 0048c2de
    RET                                 ; 0048c2df
    MOV dword ptr [EDX + 0x38],0x0      ; 0048c2e0
        ;   Label: LAB_0048c2e0
    MOV dword ptr [EDX + 0x34],0x0      ; 0048c2e7
    MOV ESP,EBP                         ; 0048c2ee
    POP EBP                             ; 0048c2f0
    RET                                 ; 0048c2f1

