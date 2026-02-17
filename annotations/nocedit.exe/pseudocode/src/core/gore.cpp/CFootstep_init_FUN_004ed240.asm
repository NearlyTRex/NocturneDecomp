; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CFootstep_init_FUN_004ed240(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,int blood_type)
;
; Parameters:
; CFootstep *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; UOrientationVector * Stack[0xc]:4   orientation
; int              Stack[0x10]:4   is_bloody
; int              Stack[0x14]:4   alpha
; int              Stack[0x18]:4   blood_type
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_gore.cpp_CGore_createFootstep_FUN_004ee070 at 004ee0d0
;
; Referenced Globals:
;   double DOUBLE_0062e3e2 = 0.5
;   double DOUBLE_0062e3ea = 4
;   float FLOAT_0062e3f2 = -3
;   float FLOAT_0062e3f6 = 0.08333334
;   float FLOAT_0067cb08 = 1
;   float FLOAT_0067cb0c = -1
;   float FLOAT_0067cb18 = 1
;   undefined4 DAT_0067cb1c
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed240
        ;   Label: core_gore.cpp_CFootstep_init_FUN_004ed240
    PUSH ESI                            ; 004ed241
    PUSH EDI                            ; 004ed242
    PUSH EBP                            ; 004ed243
    MOV EBP,ESP                         ; 004ed244
    SUB ESP,0x2c                        ; 004ed246
    AND ESP,0xfffffff8                  ; 004ed249
    MOV EDI,dword ptr [EBP + 0x18]      ; 004ed24c
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ed24f
    XOR EBX,EBX                         ; 004ed252
    ADD ESI,0x8                         ; 004ed254
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004ed257
        ;   Label: LAB_004ed257
    FLD float ptr [EAX + 0x4]           ; 004ed25a
    FLD ST0                             ; 004ed25d
    FSIN                                ; 004ed25f
    FXCH                                ; 004ed261
    FCOS                                ; 004ed263
    FXCH                                ; 004ed265
    FLD double ptr [0x0062e3e2]         ; 004ed267 | DOUBLE_0062e3e2
    FXCH                                ; 004ed26d
    FMUL ST1                            ; 004ed26f
    FXCH ST2                            ; 004ed271
    FMULP                               ; 004ed273
    FLD ST1                             ; 004ed275
    FMUL float ptr [EBX + 0x67cb08]     ; 004ed277 | FLOAT_0067cb08 | FLOAT_0067cb0c
    FLD ST1                             ; 004ed27d
    FCHS                                ; 004ed27f
    FMUL float ptr [EBX + 0x67cb08]     ; 004ed281 | FLOAT_0067cb08 | FLOAT_0067cb0c
    FXCH ST2                            ; 004ed287
    FMUL float ptr [EBX + 0x67cb18]     ; 004ed289 | FLOAT_0067cb18 | DAT_0067cb1c
    XOR EDX,EDX                         ; 004ed28f
    FXCH ST3                            ; 004ed291
    FMUL float ptr [EBX + 0x67cb18]     ; 004ed293 | FLOAT_0067cb18 | DAT_0067cb1c
    MOV dword ptr [ESP + 0x4],EDX       ; 004ed299
    FXCH ST3                            ; 004ed29d
    FADDP                               ; 004ed29f
    FXCH ST2                            ; 004ed2a1
    FADDP                               ; 004ed2a3
    FXCH                                ; 004ed2a5
    FSTP float ptr [ESP + 0x8]          ; 004ed2a7
    FST float ptr [ESP]                 ; 004ed2ab
    FADD float ptr [EDI]                ; 004ed2ae
    FSTP float ptr [ESP]                ; 004ed2b0
    MOV EAX,dword ptr [EDI + 0x4]       ; 004ed2b3
    LEA EDX,[ESP + 0xc]                 ; 004ed2b6
    MOV dword ptr [ESP + 0x4],EAX       ; 004ed2ba
    FLD float ptr [ESP + 0x8]           ; 004ed2be
    FADD float ptr [EDI + 0x8]          ; 004ed2c2
    MOV EAX,ESP                         ; 004ed2c5
    FSTP float ptr [ESP + 0x8]          ; 004ed2c7
    CMP EDX,EAX                         ; 004ed2cb
    JZ 0x004ed2e6                       ; 004ed2cd
        ;   XREF to: 004ed2e6 (CONDITIONAL_JUMP)  ; LAB_004ed2e6
    MOV EAX,dword ptr [ESP]             ; 004ed2cf
    MOV dword ptr [ESP + 0xc],EAX       ; 004ed2d2
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ed2d6
    MOV dword ptr [ESP + 0x10],EAX      ; 004ed2da
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ed2de
    MOV dword ptr [ESP + 0x14],EAX      ; 004ed2e2
    FLD1                                ; 004ed2e6
        ;   Label: LAB_004ed2e6
    PUSH 0x0                            ; 004ed2e8
    FLD float ptr [ESP + 0x14]          ; 004ed2ea
    LEA EAX,[ESP + 0x10]                ; 004ed2ee
    PUSH 0x0                            ; 004ed2f2
    FXCH                                ; 004ed2f4
    FADD float ptr [ESP + 0xc]          ; 004ed2f6
    PUSH EAX                            ; 004ed2fa
    LEA EAX,[ESP + 0xc]                 ; 004ed2fb
    FXCH                                ; 004ed2ff
    FADD float ptr [0x0062e3f2]         ; 004ed301 | FLOAT_0062e3f2
    PUSH EAX                            ; 004ed307
    FXCH                                ; 004ed308
    FSTP float ptr [ESP + 0x14]         ; 004ed30a
    PUSH 0x3277d14                      ; 004ed30e | g_CDemonRaytraceInstance
    FSTP float ptr [ESP + 0x24]         ; 004ed313
    CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70 ; 004ed317
        ;   XREF to: 00495b70 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70(CDemonRaytrace * this_ptr, CVector3f * ray_start, CVector3f * ray_end, CVector3f * out_intersection_point, ...)
    MOV dword ptr [ESP + 0x3c],EAX      ; 004ed31c
    FLD float ptr [ESP + 0x3c]          ; 004ed320
    FMUL double ptr [0x0062e3ea]        ; 004ed324 | DOUBLE_0062e3ea
    ADD ESP,0x14                        ; 004ed32a
    FSUBR float ptr [ESP + 0x4]         ; 004ed32d
    FADD float ptr [0x0062e3f6]         ; 004ed331 | FLOAT_0062e3f6
    MOV EAX,ESP                         ; 004ed337
    FSTP float ptr [ESP + 0x4]          ; 004ed339
    CMP ESI,EAX                         ; 004ed33d
    JZ 0x004ed354                       ; 004ed33f
        ;   XREF to: 004ed354 (CONDITIONAL_JUMP)  ; LAB_004ed354
    MOV EAX,dword ptr [ESP]             ; 004ed341
    MOV dword ptr [ESI],EAX             ; 004ed344
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ed346
    MOV dword ptr [ESI + 0x4],EAX       ; 004ed34a
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ed34d
    MOV dword ptr [ESI + 0x8],EAX       ; 004ed351
    ADD EBX,0x4                         ; 004ed354
        ;   Label: LAB_004ed354
    ADD ESI,0xc                         ; 004ed357
    CMP EBX,0x10                        ; 004ed35a
    JNZ 0x004ed257                      ; 004ed35d
        ;   XREF to: 004ed257 (CONDITIONAL_JUMP)  ; LAB_004ed257
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ed363
    MOV EDX,dword ptr [EBP + 0x14]      ; 004ed366
    ADD EBX,0xc                         ; 004ed369
    ADD EDX,0x30                        ; 004ed36c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ed36f
        ;   Label: LAB_004ed36f
    FLD float ptr [EAX + 0xc]           ; 004ed372
    FSUB float ptr [EBX + 0xc]          ; 004ed375
    FABS                                ; 004ed378
    FCOMP double ptr [0x0062e3e2]       ; 004ed37a | DOUBLE_0062e3e2
    FNSTSW AX                           ; 004ed380
    SAHF                                ; 004ed382
    JBE 0x004ed38e                      ; 004ed383
        ;   XREF to: 004ed38e (CONDITIONAL_JUMP)  ; LAB_004ed38e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ed385
    MOV ECX,dword ptr [EAX + 0xc]       ; 004ed388
    MOV dword ptr [EBX + 0xc],ECX       ; 004ed38b
    ADD EBX,0xc                         ; 004ed38e
        ;   Label: LAB_004ed38e
    CMP EBX,EDX                         ; 004ed391
    JNZ 0x004ed36f                      ; 004ed393
        ;   XREF to: 004ed36f (CONDITIONAL_JUMP)  ; LAB_004ed36f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ed395
    MOV EDX,dword ptr [EBP + 0x24]      ; 004ed398
    MOV dword ptr [EAX],0x0             ; 004ed39b
    MOV dword ptr [EAX + 0x38],EDX      ; 004ed3a1
    MOV EDX,dword ptr [EBP + 0x20]      ; 004ed3a4
    MOV dword ptr [EAX + 0x3c],EDX      ; 004ed3a7
    MOV EDX,dword ptr [EBP + 0x28]      ; 004ed3aa
    MOV dword ptr [EAX + 0x4],EDX       ; 004ed3ad
    MOV ESP,EBP                         ; 004ed3b0
    POP EBP                             ; 004ed3b2
    POP EDI                             ; 004ed3b3
    POP ESI                             ; 004ed3b4
    POP EBX                             ; 004ed3b5
    RET                                 ; 004ed3b6

