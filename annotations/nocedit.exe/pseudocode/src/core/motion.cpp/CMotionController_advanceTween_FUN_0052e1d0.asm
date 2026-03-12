; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_advanceTween_FUN_0052e1d0(CMotionController *this_ptr,int motion_index,float current_frame,float *remaining_time)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   motion_index
; float            Stack[0xc]:4   current_frame
; float *          Stack[0x10]:4   remaining_time
; Local Variables:
; float            Stack[-0x20]:4  local_20
;
; XREF[1]:
;   core_motion.cpp_CMotionController_advance_FUN_0052d610 at 0052d822
;
; Referenced Globals:
;   double DOUBLE_0063ab27 = 0.00100000000000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052e1d0
        ;   Label: core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0
    PUSH ESI                            ; 0052e1d1
    PUSH EDI                            ; 0052e1d2
    PUSH EBP                            ; 0052e1d3
    MOV EBP,ESP                         ; 0052e1d4
    SUB ESP,0x18                        ; 0052e1d6
    AND ESP,0xfffffff8                  ; 0052e1d9
    IMUL EBX,dword ptr [EBP + 0x18],0x54c ; 0052e1dc
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052e1e3
    MOV EDX,dword ptr [EDX]             ; 0052e1e6
    ADD EDX,0x968                       ; 0052e1e8
    ADD EBX,EDX                         ; 0052e1ee
    MOV EDX,dword ptr [EBP + 0x20]      ; 0052e1f0
    FLD float ptr [EDX]                 ; 0052e1f3
    FMUL float ptr [EBX + 0x20]         ; 0052e1f5
    FADD float ptr [EBP + 0x1c]         ; 0052e1f8
    XOR ECX,ECX                         ; 0052e1fb
    FSTP float ptr [ESP + 0x8]          ; 0052e1fd
    MOV EDX,dword ptr [ESP + 0x8]       ; 0052e201
    MOV ESI,dword ptr [EBX + 0x4a4]     ; 0052e205
    MOV dword ptr [ESP + 0x10],EDX      ; 0052e20b
    TEST ESI,ESI                        ; 0052e20f
    JLE 0x0052e239                      ; 0052e211
        ;   XREF to: 0052e239 (CONDITIONAL_JUMP)  ; LAB_0052e239
    MOV EDX,EBX                         ; 0052e213
    FLD float ptr [EBP + 0x1c]          ; 0052e215
        ;   Label: LAB_0052e215
    FILD dword ptr [EDX + 0x4a8]        ; 0052e218
    FSTP float ptr [ESP + 0xc]          ; 0052e21e
    FCOMP float ptr [ESP + 0xc]         ; 0052e222
    FNSTSW AX                           ; 0052e226
    SAHF                                ; 0052e228
    JBE 0x0052e269                      ; 0052e229
        ;   XREF to: 0052e269 (CONDITIONAL_JUMP)  ; LAB_0052e269
    INC ECX                             ; 0052e22b
        ;   Label: LAB_0052e22b
    MOV EDI,dword ptr [EBX + 0x4a4]     ; 0052e22c
    ADD EDX,0x8                         ; 0052e232
    CMP ECX,EDI                         ; 0052e235
    JL 0x0052e215                       ; 0052e237
        ;   XREF to: 0052e215 (CONDITIONAL_JUMP)  ; LAB_0052e215
    FLD float ptr [ESP + 0x8]           ; 0052e239
        ;   Label: LAB_0052e239
    FILD dword ptr [EBX + 0x64]         ; 0052e23d
    FSTP float ptr [ESP + 0x14]         ; 0052e240
    FCOMP float ptr [ESP + 0x14]        ; 0052e244
    FNSTSW AX                           ; 0052e248
    SAHF                                ; 0052e24a
    JBE 0x0052e255                      ; 0052e24b
        ;   XREF to: 0052e255 (CONDITIONAL_JUMP)  ; LAB_0052e255
    MOV EDX,dword ptr [ESP + 0x14]      ; 0052e24d
    MOV dword ptr [ESP + 0x8],EDX       ; 0052e251
    FLD float ptr [ESP + 0x8]           ; 0052e255
        ;   Label: LAB_0052e255
    FCOMP float ptr [ESP + 0x10]        ; 0052e259
    FNSTSW AX                           ; 0052e25d
    SAHF                                ; 0052e25f
    JC 0x0052e291                       ; 0052e260
        ;   XREF to: 0052e291 (CONDITIONAL_JUMP)  ; LAB_0052e291
    MOV ESP,EBP                         ; 0052e262
    POP EBP                             ; 0052e264
    POP EDI                             ; 0052e265
    POP ESI                             ; 0052e266
    POP EBX                             ; 0052e267
    RET                                 ; 0052e268
    FLD float ptr [ESP + 0x8]           ; 0052e269
        ;   Label: LAB_0052e269
    FADD double ptr [0x0063ab27]        ; 0052e26d | DOUBLE_0063ab27
    FLD float ptr [ESP + 0xc]           ; 0052e273
    FSTP double ptr [ESP]               ; 0052e277
    FCOMP double ptr [ESP]              ; 0052e27a
    FNSTSW AX                           ; 0052e27d
    SAHF                                ; 0052e27f
    JC 0x0052e22b                       ; 0052e280
        ;   XREF to: 0052e22b (CONDITIONAL_JUMP)  ; LAB_0052e22b
    FLD double ptr [ESP]                ; 0052e282
    FADD double ptr [0x0063ab27]        ; 0052e285 | DOUBLE_0063ab27
    FSTP float ptr [ESP + 0x8]          ; 0052e28b
    JMP 0x0052e22b                      ; 0052e28f
        ;   XREF to: 0052e22b (UNCONDITIONAL_JUMP)  ; LAB_0052e22b
    FLD float ptr [ESP + 0x8]           ; 0052e291
        ;   Label: LAB_0052e291
    FSUB float ptr [EBP + 0x1c]         ; 0052e295
    FDIV float ptr [EBX + 0x20]         ; 0052e298
    MOV EDX,dword ptr [EBP + 0x20]      ; 0052e29b
    FSTP float ptr [EDX]                ; 0052e29e
    MOV ESP,EBP                         ; 0052e2a0
    POP EBP                             ; 0052e2a2
    POP EDI                             ; 0052e2a3
    POP ESI                             ; 0052e2a4
    POP EBX                             ; 0052e2a5
    RET                                 ; 0052e2a6

