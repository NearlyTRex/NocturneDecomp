; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_marquee_cpp_CMarquee_process_FUN_004cc320(CMarquee *this_ptr,float delta_time)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004cc320
        ;   Label: core_marquee.cpp_CMarquee_process_FUN_004cc320
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cc323
    LEA EAX,[EDX + 0x19c]               ; 004cc327
    MOV EAX,dword ptr [EAX]             ; 004cc32d
    MOV dword ptr [ESP + 0x8],EAX       ; 004cc32f
    MOV ECX,dword ptr [EDX + 0x198]     ; 004cc333
    FILD dword ptr [ESP + 0x8]          ; 004cc339
    FSTP float ptr [ESP + 0x4]          ; 004cc33d
    CMP ECX,0x1                         ; 004cc341
    JZ 0x004cc379                       ; 004cc344
        ;   XREF to: 004cc379 (CONDITIONAL_JUMP)  ; LAB_004cc379
    TEST ECX,ECX                        ; 004cc346
    JNZ 0x004cc375                      ; 004cc348
        ;   XREF to: 004cc375 (CONDITIONAL_JUMP)  ; LAB_004cc375
    FLD float ptr [ESP + 0x14]          ; 004cc34a
    FDIV float ptr [EDX + 0x170]        ; 004cc34e
    FILD dword ptr [EDX + 0x178]        ; 004cc354
    FXCH                                ; 004cc35a
    FADD float ptr [EDX + 0x174]        ; 004cc35c
    FXCH                                ; 004cc362
    FSTP float ptr [ESP]                ; 004cc364
    FST float ptr [EDX + 0x174]         ; 004cc367
    FCOMP float ptr [ESP]               ; 004cc36d
    FNSTSW AX                           ; 004cc370
    SAHF                                ; 004cc372
    JA 0x004cc3b0                       ; 004cc373
        ;   XREF to: 004cc3b0 (CONDITIONAL_JUMP)  ; LAB_004cc3b0
    ADD ESP,0xc                         ; 004cc375
        ;   Label: LAB_004cc375
    RET                                 ; 004cc378
    FLD float ptr [ESP + 0x4]           ; 004cc379
        ;   Label: LAB_004cc379
    FLD float ptr [ESP + 0x14]          ; 004cc37d
    FMUL ST1                            ; 004cc381
    FDIV float ptr [EDX + 0x170]        ; 004cc383
    FADD float ptr [EDX + 0x174]        ; 004cc389
    FST float ptr [EDX + 0x174]         ; 004cc38f
    FCOMPP                              ; 004cc395
    FNSTSW AX                           ; 004cc397
    SAHF                                ; 004cc399
    JBE 0x004cc375                      ; 004cc39a
        ;   XREF to: 004cc375 (CONDITIONAL_JUMP)  ; LAB_004cc375
    FLD float ptr [EDX + 0x174]         ; 004cc39c
    FSUB float ptr [ESP + 0x4]          ; 004cc3a2
    FSTP float ptr [EDX + 0x174]        ; 004cc3a6
    ADD ESP,0xc                         ; 004cc3ac
    RET                                 ; 004cc3af
    FLD float ptr [EDX + 0x174]         ; 004cc3b0
        ;   Label: LAB_004cc3b0
    FSUB float ptr [ESP]                ; 004cc3b6
    FSTP float ptr [EDX + 0x174]        ; 004cc3b9
    ADD ESP,0xc                         ; 004cc3bf
    RET                                 ; 004cc3c2

