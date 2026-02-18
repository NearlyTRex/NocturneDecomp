; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLaserBeam_init_FUN_004c2420(CLaserBeam *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread,float cone_angle)
;
; Parameters:
; CLaserBeam *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   origin
; CVector3f *      Stack[0xc]:4   hit_position
; float            Stack[0x10]:4   beam_width
; float            Stack[0x14]:4   reticle_intensity
; CVector3f *      Stack[0x18]:4   reflection_normal
; int              Stack[0x1c]:4   red
; int              Stack[0x20]:4   green
; int              Stack[0x24]:4   blue
; float            Stack[0x28]:4   halo_spread
; float            Stack[0x2c]:4   cone_angle
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_createLaserSegment2_FUN_004c7f20 at 004c7f67
;   core_fire.cpp_CFireEffect_createLaserSegment_FUN_004c7eb0 at 004c7ef8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2420
        ;   Label: core_fire.cpp_CLaserBeam_init_FUN_004c2420
    PUSH ESI                            ; 004c2421
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c2422
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c2426
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c242a
    MOV ECX,dword ptr [ESP + 0x20]      ; 004c242e
    CMP EDX,EAX                         ; 004c2432
    JNZ 0x004c249d                      ; 004c2434
        ;   XREF to: 004c249d (CONDITIONAL_JUMP)  ; LAB_004c249d
    LEA EAX,[EDX + 0xc]                 ; 004c2436
        ;   Label: LAB_004c2436
    CMP EAX,EBX                         ; 004c2439
    JZ 0x004c244d                       ; 004c243b
        ;   XREF to: 004c244d (CONDITIONAL_JUMP)  ; LAB_004c244d
    MOV ESI,dword ptr [EBX]             ; 004c243d
    MOV dword ptr [EAX],ESI             ; 004c243f
    MOV ESI,dword ptr [EBX + 0x4]       ; 004c2441
    MOV dword ptr [EAX + 0x4],ESI       ; 004c2444
    MOV ESI,dword ptr [EBX + 0x8]       ; 004c2447
    MOV dword ptr [EAX + 0x8],ESI       ; 004c244a
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c244d
        ;   Label: LAB_004c244d
    MOV dword ptr [EDX + 0x18],EAX      ; 004c2451
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c2454
    MOV dword ptr [EDX + 0x1c],EAX      ; 004c2458
    FLD float ptr [EDX + 0x1c]          ; 004c245b
    FLDZ                                ; 004c245e
    FCOMPP                              ; 004c2460
    FNSTSW AX                           ; 004c2462
    SAHF                                ; 004c2464
    JNC 0x004c246e                      ; 004c2465
        ;   XREF to: 004c246e (CONDITIONAL_JUMP)  ; LAB_004c246e
    LEA EAX,[EDX + 0x20]                ; 004c2467
    CMP EAX,ECX                         ; 004c246a
    JNZ 0x004c24af                      ; 004c246c
        ;   XREF to: 004c24af (CONDITIONAL_JUMP)  ; LAB_004c24af
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c246e
        ;   Label: LAB_004c246e
    SHL EAX,0x7                         ; 004c2472
    MOV dword ptr [EDX + 0x2c],EAX      ; 004c2475
    MOV EAX,dword ptr [ESP + 0x28]      ; 004c2478
    SHL EAX,0x7                         ; 004c247c
    MOV dword ptr [EDX + 0x30],EAX      ; 004c247f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004c2482
    SHL EAX,0x7                         ; 004c2486
    MOV dword ptr [EDX + 0x34],EAX      ; 004c2489
    MOV EAX,dword ptr [ESP + 0x30]      ; 004c248c
    MOV dword ptr [EDX + 0x38],EAX      ; 004c2490
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c2493
    MOV dword ptr [EDX + 0x3c],EAX      ; 004c2497
    POP ESI                             ; 004c249a
    POP EBX                             ; 004c249b
    RET                                 ; 004c249c
    MOV ESI,dword ptr [EAX]             ; 004c249d
        ;   Label: LAB_004c249d
    MOV dword ptr [EDX],ESI             ; 004c249f
    MOV ESI,dword ptr [EAX + 0x4]       ; 004c24a1
    MOV dword ptr [EDX + 0x4],ESI       ; 004c24a4
    MOV ESI,dword ptr [EAX + 0x8]       ; 004c24a7
    MOV dword ptr [EDX + 0x8],ESI       ; 004c24aa
    JMP 0x004c2436                      ; 004c24ad
        ;   XREF to: 004c2436 (UNCONDITIONAL_JUMP)  ; LAB_004c2436
    MOV EBX,dword ptr [ECX]             ; 004c24af
        ;   Label: LAB_004c24af
    MOV dword ptr [EAX],EBX             ; 004c24b1
    MOV EBX,dword ptr [ECX + 0x4]       ; 004c24b3
    MOV dword ptr [EAX + 0x4],EBX       ; 004c24b6
    MOV EBX,dword ptr [ECX + 0x8]       ; 004c24b9
    MOV dword ptr [EAX + 0x8],EBX       ; 004c24bc
    JMP 0x004c246e                      ; 004c24bf
        ;   XREF to: 004c246e (UNCONDITIONAL_JUMP)  ; LAB_004c246e

